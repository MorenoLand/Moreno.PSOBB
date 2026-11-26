#include "protos.h"

void f_00737265(void)
{
    FN_ENTER(0x00737265);
    goto L_00737265;
L_00736cf7:; BB(0x00736cf7);
    /* 00736cf7: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736cfe: jmp 0x736ff6 */ goto L_00736ff6;
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x00737265); r_esp += 4; return;
L_00737265:; BB(0x00737265);
    /* 00737265: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00737268: jmp 0x736cf7 */ goto L_00736cf7;
}

void f_0073726f(void)
{
    FN_ENTER(0x0073726f);
    goto L_0073726f;
L_00736ef5:; BB(0x00736ef5);
    /* 00736ef5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00736ef7: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736efcu); f_007bfe60();
    /* 00736efc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736eff: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736f05:; BB(0x00736f05);
    /* 00736f05: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736f0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736f0e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00736f10: mov edx, 0 */ r_edx = 0x0u;
    /* 00736f15: jg 0x736f19 */ if ((!fZ&&fS==fO)) goto L_00736f19;
L_00736f17:; BB(0x00736f17);
    /* 00736f17: mov edi, eax */ r_edi = r_eax;
L_00736f19:; BB(0x00736f19);
    /* 00736f19: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736f20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f23: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736f28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736f2du); f_00814298();
    /* 00736f2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736f30: mov ecx, esi */ r_ecx = r_esi;
    /* 00736f32: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736f37u); f_007108f4();
    /* 00736f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736f39: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736f3f:; BB(0x00736f3f);
    /* 00736f3f: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736f45: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736f4b: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736f4e: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736f55: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736f5c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736f5e: fldz  */ FPUSH(0.0);
    /* 00736f60: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736f64: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f66: fchs  */ ST(0) = -ST(0);
    /* 00736f68: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736f6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736f6d: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736f73: fchs  */ ST(0) = -ST(0);
    /* 00736f75: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736f77: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736f7a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736f7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736f83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736f87: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736f8b: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736f8d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736f90: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f92: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736f94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736f96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f98: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736f9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736f9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f9d: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736f9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736fa3: jae 0x736fa7 */ if (!fC) goto L_00736fa7;
L_00736fa5:; BB(0x00736fa5);
    /* 00736fa5: fst st(1) */ ST(1) = ST(0);
L_00736fa7:; BB(0x00736fa7);
    /* 00736fa7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736fa8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736faa: je 0x736fae */ if (fZ) goto L_00736fae;
L_00736fac:; BB(0x00736fac);
    /* 00736fac: fst st(1) */ ST(1) = ST(0);
L_00736fae:; BB(0x00736fae);
    /* 00736fae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736fb0: fchs  */ ST(0) = -ST(0);
    /* 00736fb2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736fb6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736fba:; BB(0x00736fba);
    /* 00736fba: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736fbc: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736fbf: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736fc1: jge 0x737173 */ if ((fS==fO)) goto L_00737173;
L_00736fc7:; BB(0x00736fc7);
    /* 00736fc7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fc9: je 0x73716a */ if (fZ) goto L_0073716a;
L_00736fcf:; BB(0x00736fcf);
    /* 00736fcf: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736fd2: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736fd5: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736fd9: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736fdc: je 0x736fe5 */ if (fZ) goto L_00736fe5;
L_00736fde:; BB(0x00736fde);
    /* 00736fde: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736fe3: jmp 0x736fe7 */ goto L_00736fe7;
L_00736fe5:; BB(0x00736fe5);
    /* 00736fe5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736fe7:; BB(0x00736fe7);
    /* 00736fe7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fe9: je 0x736fba */ if (fZ) goto L_00736fba;
L_00736feb:; BB(0x00736feb);
    /* 00736feb: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736fef:; BB(0x00736fef);
    /* 00736fef: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x0073726f); r_esp += 4; return;
L_0073716a:; BB(0x0073716a);
    /* 0073716a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073716e: jmp 0x736ff6 */ goto L_00736ff6;
L_00737173:; BB(0x00737173);
    /* 00737173: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737177: mov edi, ecx */ r_edi = r_ecx;
    /* 00737179: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073717b: jge 0x736fef */ if ((fS==fO)) goto L_00736fef;
L_00737181:; BB(0x00737181);
    /* 00737181: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737184: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737188: mov eax, ecx */ r_eax = r_ecx;
    /* 0073718a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073718e: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00737192: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737196:; BB(0x00737196);
    /* 00737196: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737199: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073719d: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371a3: je 0x7371ac */ if (fZ) goto L_007371ac;
L_007371a5:; BB(0x007371a5);
    /* 007371a5: mov esi, 1 */ r_esi = 0x1u;
    /* 007371aa: jmp 0x7371ae */ goto L_007371ae;
L_007371ac:; BB(0x007371ac);
    /* 007371ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007371ae:; BB(0x007371ae);
    /* 007371ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b0: je 0x7371d2 */ if (fZ) goto L_007371d2;
L_007371b2:; BB(0x007371b2);
    /* 007371b2: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 007371b5: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b7: jne 0x7371bb */ if (!fZ) goto L_007371bb;
L_007371b9:; BB(0x007371b9);
    /* 007371b9: mov edi, ecx */ r_edi = r_ecx;
L_007371bb:; BB(0x007371bb);
    /* 007371bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007371be: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007371c1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371c3: jl 0x737196 */ if ((fS!=fO)) goto L_00737196;
L_007371c5:; BB(0x007371c5);
    /* 007371c5: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371c9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371cd: jmp 0x736fef */ goto L_00736fef;
L_007371d2:; BB(0x007371d2);
    /* 007371d2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371d6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371dc: jne 0x7371e5 */ if (!fZ) goto L_007371e5;
L_007371de:; BB(0x007371de);
    /* 007371de: mov edi, ecx */ r_edi = r_ecx;
    /* 007371e0: jmp 0x736fef */ goto L_00736fef;
L_007371e5:; BB(0x007371e5);
    /* 007371e5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007371e8: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007371eb: jmp 0x736fef */ goto L_00736fef;
L_0073726f:; BB(0x0073726f);
    /* 0073726f: and al, 0x24 */ {  u32 a = (u8)r_eax; u32 b = 0x24u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00737271: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737275: jmp 0x736ef5 */ goto L_00736ef5;
}

void f_00737270(void)
{
    FN_ENTER(0x00737270);
    goto L_00737270;
L_00736ef5:; BB(0x00736ef5);
    /* 00736ef5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00736ef7: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x736efcu); f_007bfe60();
    /* 00736efc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00736efd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736eff: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736f05:; BB(0x00736f05);
    /* 00736f05: movsx edi, word ptr [esi + 0x88] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736f0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00736f0e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00736f10: mov edx, 0 */ r_edx = 0x0u;
    /* 00736f15: jg 0x736f19 */ if ((!fZ&&fS==fO)) goto L_00736f19;
L_00736f17:; BB(0x00736f17);
    /* 00736f17: mov edi, eax */ r_edi = r_eax;
L_00736f19:; BB(0x00736f19);
    /* 00736f19: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
    /* 00736f20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f22: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00736f23: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00736f28: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x736f2du); f_00814298();
    /* 00736f2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00736f30: mov ecx, esi */ r_ecx = r_esi;
    /* 00736f32: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x736f37u); f_007108f4();
    /* 00736f37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736f39: je 0x736ff6 */ if (fZ) goto L_00736ff6;
L_00736f3f:; BB(0x00736f3f);
    /* 00736f3f: fld dword ptr [0xaf035c] */ FPUSH(R_F32((u32)(0xaf035cu)));
    /* 00736f45: fld dword ptr [0x97156c] */ FPUSH(R_F32((u32)(0x97156cu)));
    /* 00736f4b: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00736f4e: movsx ecx, word ptr [esi + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00736f55: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00736f5c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00736f5e: fldz  */ FPUSH(0.0);
    /* 00736f60: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00736f64: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f66: fchs  */ ST(0) = -ST(0);
    /* 00736f68: fmul dword ptr [eax + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x40u));
    /* 00736f6b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00736f6d: fdiv dword ptr [0x971574] */ ST(0) = ST(0) / R_F32((u32)(0x971574u));
    /* 00736f73: fchs  */ ST(0) = -ST(0);
    /* 00736f75: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00736f77: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00736f7a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00736f7e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00736f83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00736f87: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00736f8b: frndint  */ ST(0) = fx_rint(ST(0));
    /* 00736f8d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00736f90: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00736f92: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00736f94: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736f96: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f98: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00736f9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736f9b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736f9d: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 00736f9f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00736fa1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736fa3: jae 0x736fa7 */ if (!fC) goto L_00736fa7;
L_00736fa5:; BB(0x00736fa5);
    /* 00736fa5: fst st(1) */ ST(1) = ST(0);
L_00736fa7:; BB(0x00736fa7);
    /* 00736fa7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00736fa8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00736faa: je 0x736fae */ if (fZ) goto L_00736fae;
L_00736fac:; BB(0x00736fac);
    /* 00736fac: fst st(1) */ ST(1) = ST(0);
L_00736fae:; BB(0x00736fae);
    /* 00736fae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00736fb0: fchs  */ ST(0) = -ST(0);
    /* 00736fb2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00736fb6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_00736fba:; BB(0x00736fba);
    /* 00736fba: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00736fbc: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00736fbf: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00736fc1: jge 0x737173 */ if ((fS==fO)) goto L_00737173;
L_00736fc7:; BB(0x00736fc7);
    /* 00736fc7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fc9: je 0x73716a */ if (fZ) goto L_0073716a;
L_00736fcf:; BB(0x00736fcf);
    /* 00736fcf: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00736fd2: mov ebx, dword ptr [ebx + edi*4] */ r_ebx = R32((u32)(r_ebx+r_edi*4));
    /* 00736fd5: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00736fd9: test bl, 1 */ {  u32 a = (u8)r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00736fdc: je 0x736fe5 */ if (fZ) goto L_00736fe5;
L_00736fde:; BB(0x00736fde);
    /* 00736fde: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00736fe3: jmp 0x736fe7 */ goto L_00736fe7;
L_00736fe5:; BB(0x00736fe5);
    /* 00736fe5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00736fe7:; BB(0x00736fe7);
    /* 00736fe7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00736fe9: je 0x736fba */ if (fZ) goto L_00736fba;
L_00736feb:; BB(0x00736feb);
    /* 00736feb: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00736fef:; BB(0x00736fef);
    /* 00736fef: mov word ptr [esi + 0x88], di */ W16((u32)(r_esi+0x88u), (u16)r_edi);
L_00736ff6:; BB(0x00736ff6);
    /* 00736ff6: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00736ffb: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737002: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00737004: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737009u); f_007c1160();
    /* 00737009: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073700b: je 0x737014 */ if (fZ) goto L_00737014;
L_0073700d:; BB(0x0073700d);
    /* 0073700d: mov ecx, esi */ r_ecx = r_esi;
    /* 0073700f: call 0x737334 */ r_esp -= 4; W32(r_esp, 0x737014u); f_00737334();
L_00737014:; BB(0x00737014);
    /* 00737014: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00737019: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073701b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073701c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0073701e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x737023u); f_007c1160();
    /* 00737023: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737025: je 0x73702e */ if (fZ) goto L_0073702e;
L_00737027:; BB(0x00737027);
    /* 00737027: mov ecx, esi */ r_ecx = r_esi;
    /* 00737029: call 0x7388b0 */ r_esp -= 4; W32(r_esp, 0x73702eu); f_007388b0();
L_0073702e:; BB(0x0073702e);
    /* 0073702e: fild dword ptr [esi + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x5cu)));
    /* 00737031: fcomp dword ptr [0x971570] */ fx_compare(ST(0), R_F32((u32)(0x971570u))); FPOP();
    /* 00737037: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00737039: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073703a: jb 0x737054 */ if (fC) goto L_00737054;
L_0073703c:; BB(0x0073703c);
    /* 0073703c: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 0073703f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737041: je 0x737048 */ if (fZ) goto L_00737048;
L_00737043:; BB(0x00737043);
    /* 00737043: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x737048u); f_00761388();
L_00737048:; BB(0x00737048);
    /* 00737048: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 0073704b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073704d: je 0x737054 */ if (fZ) goto L_00737054;
L_0073704f:; BB(0x0073704f);
    /* 0073704f: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x737054u); f_0073f68c();
L_00737054:; BB(0x00737054);
    /* 00737054: mov ecx, esi */ r_ecx = r_esi;
    /* 00737056: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x73705bu); f_00710db4();
    /* 0073705b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073705d: call 0x7373b8 */ r_esp -= 4; W32(r_esp, 0x737062u); f_007373b8();
    /* 00737062: mov ecx, esi */ r_ecx = r_esi;
    /* 00737064: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x737069u); f_007107d8();
    /* 00737069: mov ecx, esi */ r_ecx = r_esi;
    /* 0073706b: call 0x73741c */ r_esp -= 4; W32(r_esp, 0x737070u); f_0073741c();
    /* 00737070: mov ecx, esi */ r_ecx = r_esi;
    /* 00737072: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x737077u); f_0071087c();
    /* 00737077: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073707a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073707b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073707d: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x737082u); f_0072a5ec();
    /* 00737082: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737085: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737086: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737087: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737088: ret  */ FN_RET(0x00737270); r_esp += 4; return;
L_0073716a:; BB(0x0073716a);
    /* 0073716a: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0073716e: jmp 0x736ff6 */ goto L_00736ff6;
L_00737173:; BB(0x00737173);
    /* 00737173: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00737177: mov edi, ecx */ r_edi = r_ecx;
    /* 00737179: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0073717b: jge 0x736fef */ if ((fS==fO)) goto L_00736fef;
L_00737181:; BB(0x00737181);
    /* 00737181: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00737184: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00737188: mov eax, ecx */ r_eax = r_ecx;
    /* 0073718a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0073718e: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00737192: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00737196:; BB(0x00737196);
    /* 00737196: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 00737199: movzx esi, word ptr [esi + 4] */ r_esi = (u32)R16((u32)(r_esi+0x4u));
    /* 0073719d: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371a3: je 0x7371ac */ if (fZ) goto L_007371ac;
L_007371a5:; BB(0x007371a5);
    /* 007371a5: mov esi, 1 */ r_esi = 0x1u;
    /* 007371aa: jmp 0x7371ae */ goto L_007371ae;
L_007371ac:; BB(0x007371ac);
    /* 007371ac: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_007371ae:; BB(0x007371ae);
    /* 007371ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b0: je 0x7371d2 */ if (fZ) goto L_007371d2;
L_007371b2:; BB(0x007371b2);
    /* 007371b2: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 007371b5: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371b7: jne 0x7371bb */ if (!fZ) goto L_007371bb;
L_007371b9:; BB(0x007371b9);
    /* 007371b9: mov edi, ecx */ r_edi = r_ecx;
L_007371bb:; BB(0x007371bb);
    /* 007371bb: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007371be: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 007371c1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007371c3: jl 0x737196 */ if ((fS!=fO)) goto L_00737196;
L_007371c5:; BB(0x007371c5);
    /* 007371c5: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371c9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371cd: jmp 0x736fef */ goto L_00736fef;
L_007371d2:; BB(0x007371d2);
    /* 007371d2: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007371d6: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 007371da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007371dc: jne 0x7371e5 */ if (!fZ) goto L_007371e5;
L_007371de:; BB(0x007371de);
    /* 007371de: mov edi, ecx */ r_edi = r_ecx;
    /* 007371e0: jmp 0x736fef */ goto L_00736fef;
L_007371e5:; BB(0x007371e5);
    /* 007371e5: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007371e8: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007371eb: jmp 0x736fef */ goto L_00736fef;
L_00737270:; BB(0x00737270);
    /* 00737270: and al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00737272: pop esp */ { u32 v = R32(r_esp); r_esp += 4; r_esp = v; }
    /* 00737273: and al, 0x1c */ {  u32 a = (u8)r_eax; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00737275: jmp 0x736ef5 */ goto L_00736ef5;
}

void f_00737334(void) /* sub_737334 */
{
    FN_ENTER(0x00737334);
    /* 00737334: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737335: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00737337: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 0073733e: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737343: je 0x737347 */ if (fZ) goto L_00737347;
L_00737345:; BB(0x00737345);
    /* 00737345: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737346: ret  */ FN_RET(0x00737334); r_esp += 4; return;
L_00737347:; BB(0x00737347);
    /* 00737347: movsx ecx, word ptr [ebx + 0x88] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x88u));
    /* 0073734e: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00737351: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00737354: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 00737358: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073735b: je 0x7373a1 */ if (fZ) goto L_007373a1;
L_0073735d:; BB(0x0073735d);
    /* 0073735d: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737363: jne 0x7373a1 */ if (!fZ) goto L_007373a1;
L_00737365:; BB(0x00737365);
    /* 00737365: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073736a: jne 0x737385 */ if (!fZ) goto L_00737385;
L_0073736c:; BB(0x0073736c);
    /* 0073736c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073736e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073736f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737371: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00737376: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73737bu); f_00814298();
    /* 0073737b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073737e: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
L_00737385:; BB(0x00737385);
    /* 00737385: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00737388: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073738d: mov word ptr [ebx + 0x84], ax */ W16((u32)(r_ebx+0x84u), (u16)r_eax);
    /* 00737394: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737396: je 0x73739f */ if (fZ) goto L_0073739f;
L_00737398:; BB(0x00737398);
    /* 00737398: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073739a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73739fu); f_00760acc();
L_0073739f:; BB(0x0073739f);
    /* 0073739f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007373a0: ret  */ FN_RET(0x00737334); r_esp += 4; return;
L_007373a1:; BB(0x007373a1);
    /* 007373a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007373a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007373a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007373a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007373a6: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 007373ab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7373b0u); f_00814298();
    /* 007373b0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007373b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007373b4: ret  */ FN_RET(0x00737334); r_esp += 4; return;
}

void f_00737365(void)
{
    FN_ENTER(0x00737365);
    /* 00737365: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073736a: jne 0x737385 */ if (!fZ) goto L_00737385;
L_0073736c:; BB(0x0073736c);
    /* 0073736c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073736e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073736f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737371: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00737376: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73737bu); f_00814298();
    /* 0073737b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073737e: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
L_00737385:; BB(0x00737385);
    /* 00737385: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00737388: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073738d: mov word ptr [ebx + 0x84], ax */ W16((u32)(r_ebx+0x84u), (u16)r_eax);
    /* 00737394: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737396: je 0x73739f */ if (fZ) goto L_0073739f;
L_00737398:; BB(0x00737398);
    /* 00737398: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073739a: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x73739fu); f_00760acc();
L_0073739f:; BB(0x0073739f);
    /* 0073739f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007373a0: ret  */ FN_RET(0x00737365); r_esp += 4; return;
}

void f_007373b8(void) /* sub_7373B8 */
{
    FN_ENTER(0x007373b8);
    /* 007373b8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007373bb: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007373c2: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007373c4: jne 0x73740a */ if (!fZ) goto L_0073740a;
L_007373c6:; BB(0x007373c6);
    /* 007373c6: fld dword ptr [0x971568] */ FPUSH(R_F32((u32)(0x971568u)));
L_007373cc:; BB(0x007373cc);
    /* 007373cc: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 007373cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007373d1: jne 0x7373da */ if (!fZ) goto L_007373da;
L_007373d3:; BB(0x007373d3);
    /* 007373d3: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 007373d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007373d9: ret  */ FN_RET(0x007373b8); r_esp += 4; return;
L_007373da:; BB(0x007373da);
    /* 007373da: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 007373dd: fsub dword ptr [ecx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4cu));
    /* 007373e0: fmul dword ptr [0x971564] */ ST(0) = ST(0) * R_F32((u32)(0x971564u));
    /* 007373e6: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 007373e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007373eb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007373ed: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007373ef: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007373f2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007373f5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007373f8: fadd dword ptr [eax*4 + 0x971510] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x971510u));
    /* 007373ff: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00737401: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00737403: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 00737406: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737409: ret  */ FN_RET(0x007373b8); r_esp += 4; return;
L_0073740a:; BB(0x0073740a);
    /* 0073740a: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00737411: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00737414: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00737417: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0073741a: jmp 0x7373cc */ goto L_007373cc;
}

void f_0073741c(void) /* sub_73741C */
{
    FN_ENTER(0x0073741c);
    /* 0073741c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073741f: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00737422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737424: je 0x73742d */ if (fZ) goto L_0073742d;
L_00737426:; BB(0x00737426);
    /* 00737426: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 00737429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0073742b: jbe 0x737431 */ if ((fC||fZ)) goto L_00737431;
L_0073742d:; BB(0x0073742d);
    /* 0073742d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737430: ret  */ FN_RET(0x0073741c); r_esp += 4; return;
L_00737431:; BB(0x00737431);
    /* 00737431: fld dword ptr [0x97155c] */ FPUSH(R_F32((u32)(0x97155cu)));
    /* 00737437: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0073743a: fmul dword ptr [0x971558] */ ST(0) = ST(0) * R_F32((u32)(0x971558u));
    /* 00737440: movsx eax, word ptr [ecx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00737447: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 0073744a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0073744d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073744f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00737451: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00737454: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00737457: fadd dword ptr [0x971560] */ ST(0) = ST(0) + R_F32((u32)(0x971560u));
    /* 0073745d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0073745f: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00737461: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00737463: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 00737466: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737469: ret  */ FN_RET(0x0073741c); r_esp += 4; return;
}

void f_0073746c(void) /* sub_73746C */
{
    FN_ENTER(0x0073746c);
    /* 0073746c: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00737473: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737479: je 0x73747e */ if (fZ) goto L_0073747e;
L_0073747b:; BB(0x0073747b);
    /* 0073747b: ret 4 */ FN_RET(0x0073746c); r_esp += 8; return;
L_0073747e:; BB(0x0073747e);
    /* 0073747e: movsx eax, word ptr [ecx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00737485: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00737488: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0073748b: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 0073748f: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737492: jne 0x737497 */ if (!fZ) goto L_00737497;
L_00737494:; BB(0x00737494);
    /* 00737494: ret 4 */ FN_RET(0x0073746c); r_esp += 8; return;
L_00737497:; BB(0x00737497);
    /* 00737497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073749a: je 0x7374a3 */ if (fZ) goto L_007374a3;
L_0073749c:; BB(0x0073749c);
    /* 0073749c: mov edx, 1 */ r_edx = 0x1u;
    /* 007374a1: jmp 0x7374a5 */ goto L_007374a5;
L_007374a3:; BB(0x007374a3);
    /* 007374a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007374a5:; BB(0x007374a5);
    /* 007374a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007374a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007374a7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007374ab: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x7374b0u); f_007120ec();
    /* 007374b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007374b3: ret 4 */ FN_RET(0x0073746c); r_esp += 8; return;
}

void f_00737473(void)
{
    FN_ENTER(0x00737473);
    /* 00737473: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737479: je 0x73747e */ if (fZ) goto L_0073747e;
L_0073747b:; BB(0x0073747b);
    /* 0073747b: ret 4 */ FN_RET(0x00737473); r_esp += 8; return;
L_0073747e:; BB(0x0073747e);
    /* 0073747e: movsx eax, word ptr [ecx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00737485: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00737488: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 0073748b: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 0073748f: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737492: jne 0x737497 */ if (!fZ) goto L_00737497;
L_00737494:; BB(0x00737494);
    /* 00737494: ret 4 */ FN_RET(0x00737473); r_esp += 8; return;
L_00737497:; BB(0x00737497);
    /* 00737497: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073749a: je 0x7374a3 */ if (fZ) goto L_007374a3;
L_0073749c:; BB(0x0073749c);
    /* 0073749c: mov edx, 1 */ r_edx = 0x1u;
    /* 007374a1: jmp 0x7374a5 */ goto L_007374a5;
L_007374a3:; BB(0x007374a3);
    /* 007374a3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007374a5:; BB(0x007374a5);
    /* 007374a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007374a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007374a7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007374ab: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x7374b0u); f_007120ec();
    /* 007374b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007374b3: ret 4 */ FN_RET(0x00737473); r_esp += 8; return;
}

void f_007374b8(void) /* sub_7374B8 */
{
    FN_ENTER(0x007374b8);
    /* 007374b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007374b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007374bb: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 007374c2: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 007374c9: jl 0x7374cf */ if ((fS!=fO)) goto L_007374cf;
L_007374cb:; BB(0x007374cb);
    /* 007374cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007374cc: ret 8 */ FN_RET(0x007374b8); r_esp += 12; return;
L_007374cf:; BB(0x007374cf);
    /* 007374cf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007374d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007374d7: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007374da: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 007374dd: call 0x72b548 */ r_esp -= 4; W32(r_esp, 0x7374e2u); f_0072b548();
    /* 007374e2: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007374ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007374eb: ret 8 */ FN_RET(0x007374b8); r_esp += 12; return;
}

void f_007374f0(void) /* sub_7374F0 */
{
    FN_ENTER(0x007374f0);
    /* 007374f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007374f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007374f3: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 007374fa: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737501: jl 0x737507 */ if ((fS!=fO)) goto L_00737507;
L_00737503:; BB(0x00737503);
    /* 00737503: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737504: ret 0xc */ FN_RET(0x007374f0); r_esp += 16; return;
L_00737507:; BB(0x00737507);
    /* 00737507: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073750b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073750f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737513: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00737516: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737519: call 0x72b5d8 */ r_esp -= 4; W32(r_esp, 0x73751eu); f_0072b5d8();
    /* 0073751e: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737526: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737527: ret 0xc */ FN_RET(0x007374f0); r_esp += 16; return;
}

void f_0073752c(void) /* sub_73752C */
{
    FN_ENTER(0x0073752c);
    /* 0073752c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073752d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073752f: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737536: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0073753d: jl 0x737543 */ if ((fS!=fO)) goto L_00737543;
L_0073753f:; BB(0x0073753f);
    /* 0073753f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737540: ret 0xc */ FN_RET(0x0073752c); r_esp += 16; return;
L_00737543:; BB(0x00737543);
    /* 00737543: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737547: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073754b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073754f: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00737552: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737555: call 0x72b668 */ r_esp -= 4; W32(r_esp, 0x73755au); f_0072b668();
    /* 0073755a: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737562: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737563: ret 0xc */ FN_RET(0x0073752c); r_esp += 16; return;
}

void f_00737561(void)
{
    FN_ENTER(0x00737561);
    /* 00737561: add dword ptr [ebx - 0x3e], ebx */ { u32 ad = (u32)(r_ebx+0xffffffc2u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00737564: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00737566: nop  */ ;
    /* 00737567: nop  */ ;
    /* 00737568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737569: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073756b: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737572: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737579: jl 0x73757f */ if ((fS!=fO)) goto L_0073757f;
L_0073757b:; BB(0x0073757b);
    /* 0073757b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073757c: ret 0xc */ FN_RET(0x00737561); r_esp += 16; return;
L_0073757f:; BB(0x0073757f);
    /* 0073757f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737583: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737587: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073758b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073758e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737591: call 0x72b75c */ r_esp -= 4; W32(r_esp, 0x737596u); f_0072b75c();
    /* 00737596: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073759e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073759f: ret 0xc */ FN_RET(0x00737561); r_esp += 16; return;
}

void f_00737563(void)
{
    FN_ENTER(0x00737563);
    /* 00737563: ret 0xc */ FN_RET(0x00737563); r_esp += 16; return;
}

void f_00737568(void) /* sub_737568 */
{
    FN_ENTER(0x00737568);
    /* 00737568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737569: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073756b: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737572: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737579: jl 0x73757f */ if ((fS!=fO)) goto L_0073757f;
L_0073757b:; BB(0x0073757b);
    /* 0073757b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073757c: ret 0xc */ FN_RET(0x00737568); r_esp += 16; return;
L_0073757f:; BB(0x0073757f);
    /* 0073757f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737583: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737587: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073758b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073758e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737591: call 0x72b75c */ r_esp -= 4; W32(r_esp, 0x737596u); f_0072b75c();
    /* 00737596: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073759e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073759f: ret 0xc */ FN_RET(0x00737568); r_esp += 16; return;
}

void f_007375a4(void) /* sub_7375A4 */
{
    FN_ENTER(0x007375a4);
    /* 007375a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007375a5: mov esi, ecx */ r_esi = r_ecx;
    /* 007375a7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007375ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007375ad: je 0x7375bf */ if (fZ) goto L_007375bf;
L_007375af:; BB(0x007375af);
    /* 007375af: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 007375b6: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 007375bd: jl 0x7375c3 */ if ((fS!=fO)) goto L_007375c3;
L_007375bf:; BB(0x007375bf);
    /* 007375bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007375c0: ret 8 */ FN_RET(0x007375a4); r_esp += 12; return;
L_007375c3:; BB(0x007375c3);
    /* 007375c3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007375c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007375c8: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 007375cb: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 007375ce: call 0x72b870 */ r_esp -= 4; W32(r_esp, 0x7375d3u); f_0072b870();
    /* 007375d3: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007375db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007375dc: ret 8 */ FN_RET(0x007375a4); r_esp += 12; return;
}

void f_007375e0(void) /* sub_7375E0 */
{
    FN_ENTER(0x007375e0);
    /* 007375e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007375e1: mov esi, ecx */ r_esi = r_ecx;
    /* 007375e3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007375e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007375e9: je 0x7375fb */ if (fZ) goto L_007375fb;
L_007375eb:; BB(0x007375eb);
    /* 007375eb: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 007375f2: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 007375f9: jl 0x7375ff */ if ((fS!=fO)) goto L_007375ff;
L_007375fb:; BB(0x007375fb);
    /* 007375fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007375fc: ret 0xc */ FN_RET(0x007375e0); r_esp += 16; return;
L_007375ff:; BB(0x007375ff);
    /* 007375ff: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737603: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737607: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737608: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 0073760b: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0073760e: call 0x72bc4c */ r_esp -= 4; W32(r_esp, 0x737613u); f_0072bc4c();
    /* 00737613: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073761b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073761c: ret 0xc */ FN_RET(0x007375e0); r_esp += 16; return;
}

void f_00737620(void) /* sub_737620 */
{
    FN_ENTER(0x00737620);
    /* 00737620: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00737621: mov esi, ecx */ r_esi = r_ecx;
    /* 00737623: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00737627: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737629: je 0x73763b */ if (fZ) goto L_0073763b;
L_0073762b:; BB(0x0073762b);
    /* 0073762b: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 00737632: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737639: jl 0x73763f */ if ((fS!=fO)) goto L_0073763f;
L_0073763b:; BB(0x0073763b);
    /* 0073763b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073763c: ret 8 */ FN_RET(0x00737620); r_esp += 12; return;
L_0073763f:; BB(0x0073763f);
    /* 0073763f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00737643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737644: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00737647: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0073764a: call 0x72bdd4 */ r_esp -= 4; W32(r_esp, 0x73764fu); f_0072bdd4();
    /* 0073764f: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737657: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737658: ret 8 */ FN_RET(0x00737620); r_esp += 12; return;
}

void f_0073765c(void) /* sub_73765C */
{
    FN_ENTER(0x0073765c);
    /* 0073765c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073765d: mov esi, ecx */ r_esi = r_ecx;
    /* 0073765f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00737663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737665: je 0x737677 */ if (fZ) goto L_00737677;
L_00737667:; BB(0x00737667);
    /* 00737667: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 0073766e: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737675: jl 0x73767b */ if ((fS!=fO)) goto L_0073767b;
L_00737677:; BB(0x00737677);
    /* 00737677: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737678: ret 0xc */ FN_RET(0x0073765c); r_esp += 16; return;
L_0073767b:; BB(0x0073767b);
    /* 0073767b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073767f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737684: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00737687: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0073768a: call 0x72c0d0 */ r_esp -= 4; W32(r_esp, 0x73768fu); f_0072c0d0();
    /* 0073768f: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737697: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737698: ret 0xc */ FN_RET(0x0073765c); r_esp += 16; return;
}

void f_0073769c(void) /* sub_73769C */
{
    FN_ENTER(0x0073769c);
    /* 0073769c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073769d: mov esi, ecx */ r_esi = r_ecx;
    /* 0073769f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007376a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007376a5: je 0x7376b7 */ if (fZ) goto L_007376b7;
L_007376a7:; BB(0x007376a7);
    /* 007376a7: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 007376ae: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 007376b5: jl 0x7376bb */ if ((fS!=fO)) goto L_007376bb;
L_007376b7:; BB(0x007376b7);
    /* 007376b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007376b8: ret 0xc */ FN_RET(0x0073769c); r_esp += 16; return;
L_007376bb:; BB(0x007376bb);
    /* 007376bb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007376bf: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007376c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007376c4: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 007376c7: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 007376ca: call 0x72c224 */ r_esp -= 4; W32(r_esp, 0x7376cfu); f_0072c224();
    /* 007376cf: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007376d7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007376d8: ret 0xc */ FN_RET(0x0073769c); r_esp += 16; return;
}

void f_007376dc(void) /* sub_7376DC */
{
    FN_ENTER(0x007376dc);
    /* 007376dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007376dd: mov esi, ecx */ r_esi = r_ecx;
    /* 007376df: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007376e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007376e5: je 0x7376f7 */ if (fZ) goto L_007376f7;
L_007376e7:; BB(0x007376e7);
    /* 007376e7: movsx ecx, word ptr [esi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 007376ee: cmp cx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 007376f5: jl 0x7376fb */ if ((fS!=fO)) goto L_007376fb;
L_007376f7:; BB(0x007376f7);
    /* 007376f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007376f8: ret 0xc */ FN_RET(0x007376dc); r_esp += 16; return;
L_007376fb:; BB(0x007376fb);
    /* 007376fb: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007376ff: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737704: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00737707: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0073770a: call 0x72c36c */ r_esp -= 4; W32(r_esp, 0x73770fu); f_0072c36c();
    /* 0073770f: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737717: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737718: ret 0xc */ FN_RET(0x007376dc); r_esp += 16; return;
}

void f_0073771c(void) /* sub_73771C */
{
    FN_ENTER(0x0073771c);
    /* 0073771c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073771d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073771f: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737726: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0073772d: jl 0x737733 */ if ((fS!=fO)) goto L_00737733;
L_0073772f:; BB(0x0073772f);
    /* 0073772f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737730: ret 8 */ FN_RET(0x0073771c); r_esp += 12; return;
L_00737733:; BB(0x00737733);
    /* 00737733: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00737737: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073773b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073773e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737741: call 0x72c61c */ r_esp -= 4; W32(r_esp, 0x737746u); f_0072c61c();
    /* 00737746: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073774e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073774f: ret 8 */ FN_RET(0x0073771c); r_esp += 12; return;
}

void f_00737729(void)
{
    FN_ENTER(0x00737729);
    /* 00737729: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0073772b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0073772d: jl 0x737733 */ if ((fS!=fO)) goto L_00737733;
L_0073772f:; BB(0x0073772f);
    /* 0073772f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737730: ret 8 */ FN_RET(0x00737729); r_esp += 12; return;
L_00737733:; BB(0x00737733);
    /* 00737733: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00737737: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073773b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073773e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737741: call 0x72c61c */ r_esp -= 4; W32(r_esp, 0x737746u); f_0072c61c();
    /* 00737746: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073774e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073774f: ret 8 */ FN_RET(0x00737729); r_esp += 12; return;
}

void f_00737740(void)
{
    FN_ENTER(0x00737740);
    /* 00737740: nop  */ ;
    /* 00737741: call 0x72c61c */ r_esp -= 4; W32(r_esp, 0x737746u); f_0072c61c();
    /* 00737746: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073774e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073774f: ret 8 */ FN_RET(0x00737740); r_esp += 12; return;
}

void f_00737754(void) /* sub_737754 */
{
    FN_ENTER(0x00737754);
    /* 00737754: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737755: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00737756: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737757: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073775a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073775c: movsx eax, word ptr [ebx + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737763: cmp ax, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0073776a: jl 0x737775 */ if ((fS!=fO)) goto L_00737775;
L_0073776c:; BB(0x0073776c);
    /* 0073776c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073776f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737770: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737771: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737772: ret 0x10 */ FN_RET(0x00737754); r_esp += 20; return;
L_00737775:; BB(0x00737775);
    /* 00737775: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 00737779: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0073777d: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00737781: movsx esi, word ptr [ebx + 0x20] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00737785: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 00737789: call 0x7377d8 */ r_esp -= 4; W32(r_esp, 0x73778eu); f_007377d8();
    /* 0073778e: movzx esi, byte ptr [esp + 0x14] */ r_esi = (u32)R8((u32)(r_esp+0x14u));
    /* 00737793: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 00737798: movzx eax, byte ptr [esp + 0x2c] */ r_eax = (u32)R8((u32)(r_esp+0x2cu));
    /* 0073779d: movsx ecx, word ptr [ebx + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 007377a4: mov edi, dword ptr [ebx + 0x28] */ r_edi = R32((u32)(r_ebx+0x28u));
    /* 007377a7: mov ecx, dword ptr [edi + ecx*4] */ r_ecx = R32((u32)(r_edi+r_ecx*4));
    /* 007377aa: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 007377ae: push dword ptr [esp + 0x34] */ { u32 v = R32((u32)(r_esp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 007377b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007377b3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007377b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007377b5: call 0x72c6d0 */ r_esp -= 4; W32(r_esp, 0x7377bau); f_0072c6d0();
    /* 007377ba: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007377c2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007377c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007377c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007377c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007377c8: ret 0x10 */ FN_RET(0x00737754); r_esp += 20; return;
}

void f_007377cc(void) /* sub_7377CC */
{
    FN_ENTER(0x007377cc);
    /* 007377cc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007377d0: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007377d4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007377d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007377d9: mov ebx, edx */ r_ebx = r_edx;
    /* 007377db: mov edx, eax */ r_edx = r_eax;
    /* 007377dd: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007377e2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 007377e6: movzx eax, byte ptr [edx*2 + 0x9714f0] */ r_eax = (u32)R8((u32)(r_edx*2+0x9714f0u));
    /* 007377ee: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 007377f0: movzx eax, byte ptr [edx*2 + 0x9714f1] */ r_eax = (u32)R8((u32)(r_edx*2+0x9714f1u));
    /* 007377f8: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 007377fa: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7377ffu); f_007be19c();
    /* 007377ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00737802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737804: je 0x737809 */ if (fZ) goto L_00737809;
L_00737806:; BB(0x00737806);
    /* 00737806: mov byte ptr [ebx], 0x36 */ W8((u32)(r_ebx), 0x36u);
L_00737809:; BB(0x00737809);
    /* 00737809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073780a: ret  */ FN_RET(0x007377cc); r_esp += 4; return;
}

void f_007377d8(void) /* sub_7377D8 */
{
    FN_ENTER(0x007377d8);
    /* 007377d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007377d9: mov ebx, edx */ r_ebx = r_edx;
    /* 007377db: mov edx, eax */ r_edx = r_eax;
    /* 007377dd: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007377e2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 007377e6: movzx eax, byte ptr [edx*2 + 0x9714f0] */ r_eax = (u32)R8((u32)(r_edx*2+0x9714f0u));
    /* 007377ee: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 007377f0: movzx eax, byte ptr [edx*2 + 0x9714f1] */ r_eax = (u32)R8((u32)(r_edx*2+0x9714f1u));
    /* 007377f8: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 007377fa: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7377ffu); f_007be19c();
    /* 007377ff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00737802: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737804: je 0x737809 */ if (fZ) goto L_00737809;
L_00737806:; BB(0x00737806);
    /* 00737806: mov byte ptr [ebx], 0x36 */ W8((u32)(r_ebx), 0x36u);
L_00737809:; BB(0x00737809);
    /* 00737809: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073780a: ret  */ FN_RET(0x007377d8); r_esp += 4; return;
}

void f_0073780c(void) /* sub_73780C */
{
    FN_ENTER(0x0073780c);
    /* 0073780c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073780d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0073780f: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737816: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 0073781d: jl 0x737823 */ if ((fS!=fO)) goto L_00737823;
L_0073781f:; BB(0x0073781f);
    /* 0073781f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737820: ret 4 */ FN_RET(0x0073780c); r_esp += 8; return;
L_00737823:; BB(0x00737823);
    /* 00737823: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737827: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073782a: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 0073782d: call 0x72c774 */ r_esp -= 4; W32(r_esp, 0x737832u); f_0072c774();
    /* 00737832: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073783a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073783b: ret 4 */ FN_RET(0x0073780c); r_esp += 8; return;
}

void f_00737840(void) /* sub_737840 */
{
    FN_ENTER(0x00737840);
    /* 00737840: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737841: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00737843: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 0073784a: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737851: jl 0x737857 */ if ((fS!=fO)) goto L_00737857;
L_00737853:; BB(0x00737853);
    /* 00737853: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737854: ret 4 */ FN_RET(0x00737840); r_esp += 8; return;
L_00737857:; BB(0x00737857);
    /* 00737857: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073785b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0073785e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737861: call 0x72c814 */ r_esp -= 4; W32(r_esp, 0x737866u); f_0072c814();
    /* 00737866: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 0073786e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073786f: ret 4 */ FN_RET(0x00737840); r_esp += 8; return;
}

void f_00737874(void) /* sub_737874 */
{
    FN_ENTER(0x00737874);
    /* 00737874: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00737876: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737879: mov esi, ecx */ r_esi = r_ecx;
    /* 0073787b: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 00737882: cmp dx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00737889: jl 0x737893 */ if ((fS!=fO)) goto L_00737893;
L_0073788b:; BB(0x0073788b);
    /* 0073788b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073788e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073788f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737890: ret 0x14 */ FN_RET(0x00737874); r_esp += 24; return;
L_00737893:; BB(0x00737893);
    /* 00737893: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00737897: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073789b: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073789f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007378a2: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 007378a5: mov ecx, edi */ r_ecx = r_edi;
    /* 007378a7: call 0x72c548 */ r_esp -= 4; W32(r_esp, 0x7378acu); f_0072c548();
    /* 007378ac: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007378b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007378b2: je 0x7378c1 */ if (fZ) goto L_007378c1;
L_007378b4:; BB(0x007378b4);
    /* 007378b4: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007378b8: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007378bd: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
L_007378c1:; BB(0x007378c1);
    /* 007378c1: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007378c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007378c7: je 0x73790a */ if (fZ) goto L_0073790a;
L_007378c9:; BB(0x007378c9);
    /* 007378c9: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007378cd: or eax, 0xffff1000 */ {  u32 a = r_eax; u32 b = 0xffff1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007378d2: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 007378d6: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007378dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007378df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007378e1: jle 0x73790a */ if ((fZ||fS!=fO)) goto L_0073790a;
L_007378e3:; BB(0x007378e3);
    /* 007378e3: fld dword ptr [0x971554] */ FPUSH(R_F32((u32)(0x971554u)));
L_007378e9:; BB(0x007378e9);
    /* 007378e9: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 007378ec: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 007378ef: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007378f2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007378f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007378f7: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007378fa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007378fd: movsx edi, word ptr [esi + 0x8a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00737904: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737906: jl 0x7378e9 */ if ((fS!=fO)) goto L_007378e9;
L_00737908:; BB(0x00737908);
    /* 00737908: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073790a:; BB(0x0073790a);
    /* 0073790a: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00737912: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737915: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737916: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737917: ret 0x14 */ FN_RET(0x00737874); r_esp += 24; return;
}

void f_00737879(void)
{
    FN_ENTER(0x00737879);
    /* 00737879: mov esi, ecx */ r_esi = r_ecx;
    /* 0073787b: movsx edx, word ptr [esi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x86u));
    /* 00737882: cmp dx, word ptr [esi + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00737889: jl 0x737893 */ if ((fS!=fO)) goto L_00737893;
L_0073788b:; BB(0x0073788b);
    /* 0073788b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073788e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073788f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737890: ret 0x14 */ FN_RET(0x00737879); r_esp += 24; return;
L_00737893:; BB(0x00737893);
    /* 00737893: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00737897: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073789b: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073789f: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007378a2: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 007378a5: mov ecx, edi */ r_ecx = r_edi;
    /* 007378a7: call 0x72c548 */ r_esp -= 4; W32(r_esp, 0x7378acu); f_0072c548();
    /* 007378ac: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007378b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007378b2: je 0x7378c1 */ if (fZ) goto L_007378c1;
L_007378b4:; BB(0x007378b4);
    /* 007378b4: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007378b8: or eax, 0xffff0400 */ {  u32 a = r_eax; u32 b = 0xffff0400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007378bd: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
L_007378c1:; BB(0x007378c1);
    /* 007378c1: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007378c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007378c7: je 0x73790a */ if (fZ) goto L_0073790a;
L_007378c9:; BB(0x007378c9);
    /* 007378c9: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 007378cd: or eax, 0xffff1000 */ {  u32 a = r_eax; u32 b = 0xffff1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007378d2: mov word ptr [edi + 4], ax */ W16((u32)(r_edi+0x4u), (u16)r_eax);
    /* 007378d6: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007378dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007378df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007378e1: jle 0x73790a */ if ((fZ||fS!=fO)) goto L_0073790a;
L_007378e3:; BB(0x007378e3);
    /* 007378e3: fld dword ptr [0x971554] */ FPUSH(R_F32((u32)(0x971554u)));
L_007378e9:; BB(0x007378e9);
    /* 007378e9: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 007378ec: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 007378ef: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007378f2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007378f5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007378f7: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007378fa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007378fd: movsx edi, word ptr [esi + 0x8a] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00737904: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737906: jl 0x7378e9 */ if ((fS!=fO)) goto L_007378e9;
L_00737908:; BB(0x00737908);
    /* 00737908: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0073790a:; BB(0x0073790a);
    /* 0073790a: add word ptr [esi + 0x86], 1 */ { u32 ad = (u32)(r_esi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00737912: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737915: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737916: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737917: ret 0x14 */ FN_RET(0x00737879); r_esp += 24; return;
}

void f_0073791c(void) /* sub_73791C */
{
    FN_ENTER(0x0073791c);
    /* 0073791c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073791d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073791e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073791f: mov edi, ecx */ r_edi = r_ecx;
    /* 00737921: movsx ebp, byte ptr [esp + 0x10] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_esp+0x10u));
    /* 00737926: movsx edx, word ptr [edi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 0073792d: cmp dx, word ptr [edi + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_edi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737934: jge 0x73799d */ if ((fS==fO)) goto L_0073799d;
L_00737936:; BB(0x00737936);
    /* 00737936: test ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073793c: je 0x737945 */ if (fZ) goto L_00737945;
L_0073793e:; BB(0x0073793e);
    /* 0073793e: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 00737943: jmp 0x737959 */ goto L_00737959;
L_00737945:; BB(0x00737945);
    /* 00737945: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073794b: je 0x737954 */ if (fZ) goto L_00737954;
L_0073794d:; BB(0x0073794d);
    /* 0073794d: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 00737952: jmp 0x737959 */ goto L_00737959;
L_00737954:; BB(0x00737954);
    /* 00737954: mov ecx, 0x36 */ r_ecx = 0x36u;
L_00737959:; BB(0x00737959);
    /* 00737959: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073795d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00737962: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00737965: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00737968: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073796a: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x73796fu); f_0072c57c();
    /* 0073796f: mov dword ptr [ebx + 8], 0xc1900000 */ W32((u32)(r_ebx+0x8u), 0xc1900000u);
    /* 00737976: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073797c: je 0x73798f */ if (fZ) goto L_0073798f;
L_0073797e:; BB(0x0073797e);
    /* 0073797e: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00737982: mov byte ptr [ebx + 0x1c], 0xe */ W8((u32)(r_ebx+0x1cu), 0xeu);
    /* 00737986: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073798b: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073798f:; BB(0x0073798f);
    /* 0073798f: add word ptr [edi + 0x86], 1 */ { u32 ad = (u32)(r_edi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737997: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737998: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737999: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073799a: ret 0xc */ FN_RET(0x0073791c); r_esp += 16; return;
L_0073799d:; BB(0x0073799d);
    /* 0073799d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073799e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073799f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007379a0: ret 0xc */ FN_RET(0x0073791c); r_esp += 16; return;
}

void f_0073793f(void)
{
    FN_ENTER(0x0073793f);
    /* 0073793f: or eax, 0xeb000000 */ {  u32 a = r_eax; u32 b = 0xeb000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00737944: adc al, 0xf7 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xf7u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00737946: lds eax, ptr [eax + eax] */ UNSUP(0x00737946, "lds eax, ptr [eax + eax]");
    /* 00737949: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0073794b: je 0x737954 */ if (fZ) goto L_00737954;
L_0073794d:; BB(0x0073794d);
    /* 0073794d: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 00737952: jmp 0x737959 */ goto L_00737959;
L_00737954:; BB(0x00737954);
    /* 00737954: mov ecx, 0x36 */ r_ecx = 0x36u;
L_00737959:; BB(0x00737959);
    /* 00737959: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073795d: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737961: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00737962: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00737965: mov ebx, dword ptr [eax + edx*4] */ r_ebx = R32((u32)(r_eax+r_edx*4));
    /* 00737968: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073796a: call 0x72c57c */ r_esp -= 4; W32(r_esp, 0x73796fu); f_0072c57c();
    /* 0073796f: mov dword ptr [ebx + 8], 0xc1900000 */ W32((u32)(r_ebx+0x8u), 0xc1900000u);
    /* 00737976: test ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073797c: je 0x73798f */ if (fZ) goto L_0073798f;
L_0073797e:; BB(0x0073797e);
    /* 0073797e: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00737982: mov byte ptr [ebx + 0x1c], 0xe */ W8((u32)(r_ebx+0x1cu), 0xeu);
    /* 00737986: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0073798b: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_0073798f:; BB(0x0073798f);
    /* 0073798f: add word ptr [edi + 0x86], 1 */ { u32 ad = (u32)(r_edi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737997: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737998: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737999: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073799a: ret 0xc */ FN_RET(0x0073793f); r_esp += 16; return;
}

void f_007379a4(void) /* sub_7379A4 */
{
    FN_ENTER(0x007379a4);
    /* 007379a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007379a5: movsx ebp, word ptr [ecx + 0x88] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 007379ac: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 007379af: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007379b3: mov ebp, dword ptr [edx + ebp*4] */ r_ebp = R32((u32)(r_edx+r_ebp*4));
    /* 007379b6: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 007379ba: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007379c0: jne 0x7379df */ if (!fZ) goto L_007379df;
L_007379c2:; BB(0x007379c2);
    /* 007379c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007379c4: je 0x7379d8 */ if (fZ) goto L_007379d8;
L_007379c6:; BB(0x007379c6);
    /* 007379c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007379c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007379c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007379ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007379cb: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 007379d0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7379d5u); f_00814298();
    /* 007379d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007379d8:; BB(0x007379d8);
    /* 007379d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007379da: call 0x72c930 */ r_esp -= 4; W32(r_esp, 0x7379dfu); f_0072c930();
L_007379df:; BB(0x007379df);
    /* 007379df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007379e0: ret 4 */ FN_RET(0x007379a4); r_esp += 8; return;
}

void f_007379e4(void) /* sub_7379E4 */
{
    FN_ENTER(0x007379e4);
    /* 007379e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007379e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007379e6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007379e8: movsx edx, word ptr [ebx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x88u));
    /* 007379ef: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007379f2: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 007379f5: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 007379f9: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007379ff: jne 0x737a60 */ if (!fZ) goto L_00737a60;
L_00737a01:; BB(0x00737a01);
    /* 00737a01: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00737a05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737a07: je 0x737a1e */ if (fZ) goto L_00737a1e;
L_00737a09:; BB(0x00737a09);
    /* 00737a09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00737a0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737a0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737a0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737a0e: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 00737a13: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x737a18u); f_00814298();
    /* 00737a18: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00737a1b: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
L_00737a1e:; BB(0x00737a1e);
    /* 00737a1e: movsx ecx, word ptr [ebx + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8au));
    /* 00737a25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00737a27: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00737a29: jle 0x737a51 */ if ((fZ||fS!=fO)) goto L_00737a51;
L_00737a2b:; BB(0x00737a2b);
    /* 00737a2b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00737a2e: mov esi, edx */ r_esi = r_edx;
    /* 00737a30: jmp 0x737a35 */ goto L_00737a35;
L_00737a32:; BB(0x00737a32);
    /* 00737a32: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
L_00737a35:; BB(0x00737a35);
    /* 00737a35: mov ecx, dword ptr [eax + esi*4] */ r_ecx = R32((u32)(r_eax+r_esi*4));
    /* 00737a38: call 0x72c940 */ r_esp -= 4; W32(r_esp, 0x737a3du); f_0072c940();
    /* 00737a3d: movsx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x8au));
    /* 00737a44: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00737a47: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737a49: jl 0x737a32 */ if ((fS!=fO)) goto L_00737a32;
L_00737a4b:; BB(0x00737a4b);
    /* 00737a4b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00737a4e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
L_00737a51:; BB(0x00737a51);
    /* 00737a51: movsx edx, word ptr [ebx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x88u));
    /* 00737a58: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737a5b: call 0x72c930 */ r_esp -= 4; W32(r_esp, 0x737a60u); f_0072c930();
L_00737a60:; BB(0x00737a60);
    /* 00737a60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00737a61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737a62: ret 4 */ FN_RET(0x007379e4); r_esp += 8; return;
}

void f_00737a68(void) /* sub_737A68 */
{
    FN_ENTER(0x00737a68);
    /* 00737a68: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00737a6f: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737a71: je 0x737a74 */ if (fZ) goto L_00737a74;
L_00737a73:; BB(0x00737a73);
    /* 00737a73: ret  */ FN_RET(0x00737a68); r_esp += 4; return;
L_00737a74:; BB(0x00737a74);
    /* 00737a74: fld dword ptr [0x97154c] */ FPUSH(R_F32((u32)(0x97154cu)));
    /* 00737a7a: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00737a81: or eax, 0xffff0020 */ {  u32 a = r_eax; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737a86: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00737a8d: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00737a90: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00737a93: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 00737a96: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00737a99: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737a9b: je 0x737aaa */ if (fZ) goto L_00737aaa;
L_00737a9d:; BB(0x00737a9d);
    /* 00737a9d: fld dword ptr [0x971548] */ FPUSH(R_F32((u32)(0x971548u)));
    /* 00737aa3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00737aa5: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00737aa8: jmp 0x737aad */ goto L_00737aad;
L_00737aaa:; BB(0x00737aaa);
    /* 00737aaa: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
L_00737aad:; BB(0x00737aad);
    /* 00737aad: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 00737ab4: ret  */ FN_RET(0x00737a68); r_esp += 4; return;
}

void f_00737ab8(void) /* sub_737AB8 */
{
    FN_ENTER(0x00737ab8);
    /* 00737ab8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00737abf: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737ac1: jne 0x737ac6 */ if (!fZ) goto L_00737ac6;
L_00737ac3:; BB(0x00737ac3);
    /* 00737ac3: ret 4 */ FN_RET(0x00737ab8); r_esp += 8; return;
L_00737ac6:; BB(0x00737ac6);
    /* 00737ac6: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 00737acd: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737ad2: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00737ad9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00737add: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00737ae0: ret 4 */ FN_RET(0x00737ab8); r_esp += 8; return;
}

void f_00737ae4(void) /* sub_737AE4 */
{
    FN_ENTER(0x00737ae4);
    /* 00737ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00737ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 00737ae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00737ae9: push 0x8f1a38 */ { u32 v = 0x8f1a38u; r_esp -= 4; W32(r_esp, v); }
    /* 00737aee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00737af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737af5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00737afc: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737aff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00737b02: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00737b05: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00737b08: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00737b0b: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00737b0e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00737b11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737b13: je 0x737b25 */ if (fZ) goto L_00737b25;
L_00737b15:; BB(0x00737b15);
    /* 00737b15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00737b18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00737b1f: mov esp, ebp */ r_esp = r_ebp;
    /* 00737b21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737b22: ret 4 */ FN_RET(0x00737ae4); r_esp += 8; return;
L_00737b25:; BB(0x00737b25);
    /* 00737b25: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00737b2c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00737b2e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x737b33u); f_008581c5();
    /* 00737b33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00737b34: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00737b37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737b39: je 0x737b85 */ if (fZ) goto L_00737b85;
L_00737b3b:; BB(0x00737b3b);
    /* 00737b3b: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00737b42: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00737b49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00737b4c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00737b4f: movsx edx, word ptr [eax + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x20u));
    /* 00737b53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00737b54: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737b57: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x737b5cu); f_00761320();
    /* 00737b5c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00737b5f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00737b66:; BB(0x00737b66);
    /* 00737b66: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00737b69: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
    /* 00737b6c: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00737b6f: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737b72: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00737b75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00737b78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00737b7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00737b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737b82: ret 4 */ FN_RET(0x00737ae4); r_esp += 8; return;
L_00737b85:; BB(0x00737b85);
    /* 00737b85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00737b87: jmp 0x737b66 */ goto L_00737b66;
}

void f_00737b8c(void) /* sub_737B8C */
{
    FN_ENTER(0x00737b8c);
    /* 00737b8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00737b8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00737b8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00737b91: push 0x8f1a60 */ { u32 v = 0x8f1a60u; r_esp -= 4; W32(r_esp, v); }
    /* 00737b96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00737b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737b9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00737ba4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737ba7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00737baa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00737bad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00737bb0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00737bb3: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00737bb6: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00737bb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737bbb: je 0x737bcb */ if (fZ) goto L_00737bcb;
L_00737bbd:; BB(0x00737bbd);
    /* 00737bbd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00737bc0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00737bc7: mov esp, ebp */ r_esp = r_ebp;
    /* 00737bc9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737bca: ret  */ FN_RET(0x00737b8c); r_esp += 4; return;
L_00737bcb:; BB(0x00737bcb);
    /* 00737bcb: fld dword ptr [0x971544] */ FPUSH(R_F32((u32)(0x971544u)));
    /* 00737bd1: mov eax, ecx */ r_eax = r_ecx;
    /* 00737bd3: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 00737bd6: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00737bd9: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00737be0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00737be2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00737be9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x737beeu); f_008581c5();
    /* 00737bee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00737bef: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00737bf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737bf4: je 0x737c39 */ if (fZ) goto L_00737c39;
L_00737bf6:; BB(0x00737bf6);
    /* 00737bf6: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00737bfd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00737c04: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00737c07: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00737c0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737c0b: call 0x73f670 */ r_esp -= 4; W32(r_esp, 0x737c10u); f_0073f670();
    /* 00737c10: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00737c13: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00737c1a:; BB(0x00737c1a);
    /* 00737c1a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00737c1d: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
    /* 00737c20: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00737c23: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737c28: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00737c2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00737c2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00737c35: mov esp, ebp */ r_esp = r_ebp;
    /* 00737c37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737c38: ret  */ FN_RET(0x00737b8c); r_esp += 4; return;
L_00737c39:; BB(0x00737c39);
    /* 00737c39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00737c3b: jmp 0x737c1a */ goto L_00737c1a;
}

void f_00737c40(void) /* sub_737C40 */
{
    FN_ENTER(0x00737c40);
    /* 00737c40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737c41: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00737c42: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00737c44: movsx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 00737c49: mov edx, ecx */ r_edx = r_ecx;
    /* 00737c4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737c4d: jl 0x737c8f */ if ((fS!=fO)) goto L_00737c8f;
L_00737c4f:; BB(0x00737c4f);
    /* 00737c4f: cmp dx, word ptr [ebp + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebp+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737c56: jge 0x737c8f */ if ((fS==fO)) goto L_00737c8f;
L_00737c58:; BB(0x00737c58);
    /* 00737c58: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00737c5b: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00737c5e: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 00737c62: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737c68: jne 0x737c83 */ if (!fZ) goto L_00737c83;
L_00737c6a:; BB(0x00737c6a);
    /* 00737c6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737c6c: jle 0x737c83 */ if ((fZ||fS!=fO)) goto L_00737c83;
L_00737c6e:; BB(0x00737c6e);
    /* 00737c6e: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00737c71: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 00737c74: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00737c77: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 00737c7b: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737c81: je 0x737c6a */ if (fZ) goto L_00737c6a;
L_00737c83:; BB(0x00737c83);
    /* 00737c83: mov word ptr [ebp + 0x88], cx */ W16((u32)(r_ebp+0x88u), (u16)r_ecx);
    /* 00737c8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737c8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737c8c: ret 4 */ FN_RET(0x00737c40); r_esp += 8; return;
L_00737c8f:; BB(0x00737c8f);
    /* 00737c8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00737c90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737c91: ret 4 */ FN_RET(0x00737c40); r_esp += 8; return;
}

void f_00737c94(void) /* sub_737C94 */
{
    FN_ENTER(0x00737c94);
    /* 00737c94: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737c97: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00737c9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737c9c: je 0x737cd6 */ if (fZ) goto L_00737cd6;
L_00737c9e:; BB(0x00737c9e);
    /* 00737c9e: fld dword ptr [0x971538] */ FPUSH(R_F32((u32)(0x971538u)));
    /* 00737ca4: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 00737ca7: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00737caa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00737cae: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00737cb5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737cb7: je 0x737cc7 */ if (fZ) goto L_00737cc7;
L_00737cb9:; BB(0x00737cb9);
    /* 00737cb9: fld dword ptr [0x971534] */ FPUSH(R_F32((u32)(0x971534u)));
    /* 00737cbf: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00737cc3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_00737cc7:; BB(0x00737cc7);
    /* 00737cc7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00737cca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00737ccb: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00737cce: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00737ccf: mov ecx, eax */ r_ecx = r_eax;
    /* 00737cd1: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x737cd6u); f_0073f8a4();
L_00737cd6:; BB(0x00737cd6);
    /* 00737cd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737cd9: ret  */ FN_RET(0x00737c94); r_esp += 4; return;
}

void f_00737cdc(void) /* sub_737CDC */
{
    FN_ENTER(0x00737cdc);
    /* 00737cdc: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737cdf: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00737ce2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737ce4: je 0x737d16 */ if (fZ) goto L_00737d16;
L_00737ce6:; BB(0x00737ce6);
    /* 00737ce6: fld dword ptr [0x971530] */ FPUSH(R_F32((u32)(0x971530u)));
    /* 00737cec: fadd dword ptr [ecx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x48u));
    /* 00737cef: je 0x737cf7 */ if (fZ) goto L_00737cf7;
L_00737cf1:; BB(0x00737cf1);
    /* 00737cf1: fadd dword ptr [0x97152c] */ ST(0) = ST(0) + R_F32((u32)(0x97152cu));
L_00737cf7:; BB(0x00737cf7);
    /* 00737cf7: movsx edx, word ptr [ecx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x86u));
    /* 00737cfe: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 00737d00: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 00737d03: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00737d05: lea edx, [ecx + ecx - 6] */ r_edx = (u32)(r_ecx+r_ecx+0xfffffffau);
    /* 00737d09: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00737d0c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00737d0f: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 00737d12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737d15: ret  */ FN_RET(0x00737cdc); r_esp += 4; return;
L_00737d16:; BB(0x00737d16);
    /* 00737d16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737d19: ret  */ FN_RET(0x00737cdc); r_esp += 4; return;
}

void f_00737d1c(void) /* sub_737D1C */
{
    FN_ENTER(0x00737d1c);
    /* 00737d1c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737d1f: mov eax, ecx */ r_eax = r_ecx;
    /* 00737d21: movsx ecx, word ptr [eax + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
    /* 00737d28: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00737d2a: mov word ptr [eax + 0x86], dx */ W16((u32)(r_eax+0x86u), (u16)r_edx);
    /* 00737d31: mov word ptr [eax + 0x88], dx */ W16((u32)(r_eax+0x88u), (u16)r_edx);
    /* 00737d38: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00737d3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00737d3c: jbe 0x737d69 */ if ((fC||fZ)) goto L_00737d69;
L_00737d3e:; BB(0x00737d3e);
    /* 00737d3e: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00737d42: mov ebx, edx */ r_ebx = r_edx;
    /* 00737d44: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00737d47: mov esi, eax */ r_esi = r_eax;
L_00737d49:; BB(0x00737d49);
    /* 00737d49: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 00737d4c: mov ecx, dword ptr [ecx + ebx*4] */ r_ecx = R32((u32)(r_ecx+r_ebx*4));
    /* 00737d4f: call 0x72c8b4 */ r_esp -= 4; W32(r_esp, 0x737d54u); f_0072c8b4();
    /* 00737d54: movsx ecx, word ptr [esi + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00737d5b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00737d5e: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00737d60: jb 0x737d49 */ if (fC) goto L_00737d49;
L_00737d62:; BB(0x00737d62);
    /* 00737d62: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00737d66: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00737d69:; BB(0x00737d69);
    /* 00737d69: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00737d6c: ret  */ FN_RET(0x00737d1c); r_esp += 4; return;
}

void f_00737d70(void) /* sub_737D70 */
{
    FN_ENTER(0x00737d70);
    /* 00737d70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737d71: mov edi, ecx */ r_edi = r_ecx;
    /* 00737d73: movzx eax, word ptr [edi + 0x88] */ r_eax = (u32)R16((u32)(r_edi+0x88u));
    /* 00737d7a: mov word ptr [edi + 0x8c], ax */ W16((u32)(r_edi+0x8cu), (u16)r_eax);
    /* 00737d81: mov ecx, edi */ r_ecx = r_edi;
    /* 00737d83: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x737d88u); f_00737d90();
    /* 00737d88: mov dword ptr [edi + 0x90], eax */ W32((u32)(r_edi+0x90u), r_eax);
    /* 00737d8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737d8f: ret  */ FN_RET(0x00737d70); r_esp += 4; return;
}

void f_00737d90(void) /* sub_737D90 */
{
    FN_ENTER(0x00737d90);
    /* 00737d90: movsx eax, word ptr [ecx + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 00737d97: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00737d9a: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00737d9d: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00737da0: ret  */ FN_RET(0x00737d90); r_esp += 4; return;
}

void f_00737da4(void) /* sub_737DA4 */
{
    FN_ENTER(0x00737da4);
    /* 00737da4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737da5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737da6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00737da8: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737daf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00737db1: jl 0x737e08 */ if ((fS!=fO)) goto L_00737e08;
L_00737db3:; BB(0x00737db3);
    /* 00737db3: movsx ecx, word ptr [ebx + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8cu));
    /* 00737dba: mov eax, 1 */ r_eax = 0x1u;
    /* 00737dbf: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00737dc1: jl 0x737dd2 */ if ((fS!=fO)) goto L_00737dd2;
L_00737dc3:; BB(0x00737dc3);
    /* 00737dc3: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00737dc6: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00737dc9: mov word ptr [ebx + 0x8c], cx */ W16((u32)(r_ebx+0x8cu), (u16)r_ecx);
    /* 00737dd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00737dd2:; BB(0x00737dd2);
    /* 00737dd2: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00737dd5: mov edi, dword ptr [edx + ecx*4] */ r_edi = R32((u32)(r_edx+r_ecx*4));
    /* 00737dd8: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 00737ddc: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737de2: jne 0x737dfe */ if (!fZ) goto L_00737dfe;
L_00737de4:; BB(0x00737de4);
    /* 00737de4: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00737de7: mov word ptr [ebx + 0x8c], cx */ W16((u32)(r_ebx+0x8cu), (u16)r_ecx);
    /* 00737dee: movsx eax, cx */ r_eax = (u32)(i32)(i16)(u16)r_ecx;
    /* 00737df1: mov edi, dword ptr [edx + eax*4] */ r_edi = R32((u32)(r_edx+r_eax*4));
    /* 00737df4: movzx eax, word ptr [edi + 4] */ r_eax = (u32)R16((u32)(r_edi+0x4u));
    /* 00737df8: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00737dfa: je 0x737de4 */ if (fZ) goto L_00737de4;
L_00737dfc:; BB(0x00737dfc);
    /* 00737dfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00737dfe:; BB(0x00737dfe);
    /* 00737dfe: mov word ptr [ebx + 0x88], cx */ W16((u32)(r_ebx+0x88u), (u16)r_ecx);
    /* 00737e05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737e06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737e07: ret  */ FN_RET(0x00737da4); r_esp += 4; return;
L_00737e08:; BB(0x00737e08);
    /* 00737e08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737e0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737e0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737e0c: ret  */ FN_RET(0x00737da4); r_esp += 4; return;
}

void f_00737e10(void) /* sub_737E10 */
{
    FN_ENTER(0x00737e10);
    /* 00737e10: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00737e17: or eax, 0xffff00c0 */ {  u32 a = r_eax; u32 b = 0xffff00c0u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737e1c: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00737e23: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00737e26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737e28: je 0x737e31 */ if (fZ) goto L_00737e31;
L_00737e2a:; BB(0x00737e2a);
    /* 00737e2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00737e2c: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x737e31u); f_00760acc();
L_00737e31:; BB(0x00737e31);
    /* 00737e31: ret  */ FN_RET(0x00737e10); r_esp += 4; return;
}

void f_00737e34(void) /* sub_737E34 */
{
    FN_ENTER(0x00737e34);
    /* 00737e34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737e35: mov edi, ecx */ r_edi = r_ecx;
    /* 00737e37: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 00737e3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737e3c: je 0x737e59 */ if (fZ) goto L_00737e59;
L_00737e3e:; BB(0x00737e3e);
    /* 00737e3e: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00737e45: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00737e47: je 0x737e52 */ if (fZ) goto L_00737e52;
L_00737e49:; BB(0x00737e49);
    /* 00737e49: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00737e4b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x737e50u); f_00760acc();
    /* 00737e50: jmp 0x737e59 */ goto L_00737e59;
L_00737e52:; BB(0x00737e52);
    /* 00737e52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00737e54: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x737e59u); f_00760acc();
L_00737e59:; BB(0x00737e59);
    /* 00737e59: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00737e60: and eax, 0xff3f */ {  u32 a = r_eax; u32 b = 0xff3fu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737e65: mov word ptr [edi + 0x84], ax */ W16((u32)(r_edi+0x84u), (u16)r_eax);
    /* 00737e6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737e6d: ret  */ FN_RET(0x00737e34); r_esp += 4; return;
}

void f_00737e70(void) /* sub_737E70 */
{
    FN_ENTER(0x00737e70);
    /* 00737e70: mov dword ptr [0xa9a8c0], 0x3f800000 */ W32((u32)(0xa9a8c0u), 0x3f800000u);
    /* 00737e7a: mov dword ptr [0xa9a8c4], 0x41000000 */ W32((u32)(0xa9a8c4u), 0x41000000u);
    /* 00737e84: mov dword ptr [0xa9a8c8], 0x3fc00000 */ W32((u32)(0xa9a8c8u), 0x3fc00000u);
    /* 00737e8e: ret  */ FN_RET(0x00737e70); r_esp += 4; return;
}

void f_00737e90(void) /* sub_737E90 */
{
    FN_ENTER(0x00737e90);
    /* 00737e90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737e91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00737e93: movsx edx, word ptr [ebx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x86u));
    /* 00737e9a: cmp dx, word ptr [ebx + 0x8a] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737ea1: jl 0x737ea7 */ if ((fS!=fO)) goto L_00737ea7;
L_00737ea3:; BB(0x00737ea3);
    /* 00737ea3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737ea4: ret 4 */ FN_RET(0x00737e90); r_esp += 8; return;
L_00737ea7:; BB(0x00737ea7);
    /* 00737ea7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737eab: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00737eae: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00737eb1: call 0x72c970 */ r_esp -= 4; W32(r_esp, 0x737eb6u); f_0072c970();
    /* 00737eb6: add word ptr [ebx + 0x86], 1 */ { u32 ad = (u32)(r_ebx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737ebe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737ebf: ret 4 */ FN_RET(0x00737e90); r_esp += 8; return;
}

void f_00737ec4(void) /* sub_737EC4 */
{
    FN_ENTER(0x00737ec4);
    /* 00737ec4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737ec5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00737ec6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737ec7: mov edi, ecx */ r_edi = r_ecx;
    /* 00737ec9: movsx eax, word ptr [edi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00737ed0: cmp ax, word ptr [edi + 0x8a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00737ed7: jl 0x737edf */ if ((fS!=fO)) goto L_00737edf;
L_00737ed9:; BB(0x00737ed9);
    /* 00737ed9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737eda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737edb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737edc: ret 0xc */ FN_RET(0x00737ec4); r_esp += 16; return;
L_00737edf:; BB(0x00737edf);
    /* 00737edf: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00737ee3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737ee4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x737ee9u); f_0068d5a8();
    /* 00737ee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00737eea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737eec: je 0x737ed9 */ if (fZ) goto L_00737ed9;
L_00737eee:; BB(0x00737eee);
    /* 00737eee: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00737ef2: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737ef5: jne 0x737f07 */ if (!fZ) goto L_00737f07;
L_00737ef7:; BB(0x00737ef7);
    /* 00737ef7: add eax, 0x8a0 */ {  u32 a = r_eax; u32 b = 0x8a0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737efc: mov ecx, eax */ r_ecx = r_eax;
    /* 00737efe: call 0x697958 */ r_esp -= 4; W32(r_esp, 0x737f03u); f_00697958();
    /* 00737f03: mov esi, eax */ r_esi = r_eax;
    /* 00737f05: jmp 0x737f1b */ goto L_00737f1b;
L_00737f07:; BB(0x00737f07);
    /* 00737f07: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00737f0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00737f0c: add eax, 0x89c */ {  u32 a = r_eax; u32 b = 0x89cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00737f11: mov ecx, eax */ r_ecx = r_eax;
    /* 00737f13: call 0x698984 */ r_esp -= 4; W32(r_esp, 0x737f18u); f_00698984();
    /* 00737f18: movsx esi, al */ r_esi = (u32)(i32)(i8)(u8)r_eax;
L_00737f1b:; BB(0x00737f1b);
    /* 00737f1b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00737f1d: jle 0x737ed9 */ if ((fZ||fS!=fO)) goto L_00737ed9;
L_00737f1f:; BB(0x00737f1f);
    /* 00737f1f: movsx edx, word ptr [edi + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00737f26: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 00737f29: mov ebx, dword ptr [ebx + edx*4] */ r_ebx = R32((u32)(r_ebx+r_edx*4));
    /* 00737f2c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00737f30: lea edx, [edx + 0x13] */ r_edx = (u32)(r_edx+0x13u);
    /* 00737f33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00737f34: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00737f36: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x737f3bu); f_00792fe8();
    /* 00737f3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00737f3e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00737f42: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00737f43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00737f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00737f46: call 0x72ca10 */ r_esp -= 4; W32(r_esp, 0x737f4bu); f_0072ca10();
    /* 00737f4b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00737f4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737f51: je 0x737f72 */ if (fZ) goto L_00737f72;
L_00737f53:; BB(0x00737f53);
    /* 00737f53: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x737f58u); f_00807d60();
    /* 00737f58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737f5a: je 0x737f65 */ if (fZ) goto L_00737f65;
L_00737f5c:; BB(0x00737f5c);
    /* 00737f5c: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x737f61u); f_00807db8();
    /* 00737f61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00737f63: je 0x737f72 */ if (fZ) goto L_00737f72;
L_00737f65:; BB(0x00737f65);
    /* 00737f65: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00737f69: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00737f6e: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00737f72:; BB(0x00737f72);
    /* 00737f72: add word ptr [edi + 0x86], 1 */ { u32 ad = (u32)(r_edi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 00737f7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00737f7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00737f7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00737f7d: ret 0xc */ FN_RET(0x00737ec4); r_esp += 16; return;
}

void f_00737f80(void) /* sub_737F80 */
{
    FN_ENTER(0x00737f80);
    /* 00737f80: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00737f84: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00737f88: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00737f8a: mov dword ptr [0x9f3130], edx */ W32((u32)(0x9f3130u), r_edx);
    /* 00737f90: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00737f93: mov dword ptr [0x9f3134], edx */ W32((u32)(0x9f3134u), r_edx);
    /* 00737f99: mov dword ptr [0x9f3128], eax */ W32((u32)(0x9f3128u), r_eax);
    /* 00737f9e: ret  */ FN_RET(0x00737f80); r_esp += 4; return;
}

void f_00737fa0(void) /* sub_737FA0 */
{
    FN_ENTER(0x00737fa0);
    /* 00737fa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00737fa1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00737fa2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00737fa3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00737fa4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00737fa7: mov esi, ecx */ r_esi = r_ecx;
    /* 00737fa9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00737fab: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00737faf: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00737fb3: mov eax, dword ptr [0x9f3120] */ r_eax = R32((u32)(0x9f3120u));
    /* 00737fb8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00737fbb: mov word ptr [esi + 0x20], dx */ W16((u32)(r_esi+0x20u), (u16)r_edx);
    /* 00737fbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00737fc1: mov word ptr [esi + 0x86], ax */ W16((u32)(r_esi+0x86u), (u16)r_eax);
    /* 00737fc8: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 00737fcf: mov word ptr [esi + 0x8a], bp */ W16((u32)(r_esi+0x8au), (u16)r_ebp);
    /* 00737fd6: mov word ptr [esi + 0x8c], ax */ W16((u32)(r_esi+0x8cu), (u16)r_eax);
    /* 00737fdd: mov dword ptr [esi + 0x90], eax */ W32((u32)(r_esi+0x90u), r_eax);
    /* 00737fe3: mov word ptr [esi + 0x84], ax */ W16((u32)(r_esi+0x84u), (u16)r_eax);
    /* 00737fea: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 00737fed: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 00737ff0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00737ff2: jbe 0x738138 */ if ((fC||fZ)) goto L_00738138;
L_00737ff8:; BB(0x00737ff8);
    /* 00737ff8: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00737ffb: jb 0x73810a */ if (fC) goto L_0073810a;
L_00738001:; BB(0x00738001);
    /* 00738001: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00738005: lea edx, [ebp - 6] */ r_edx = (u32)(r_ebp+0xfffffffau);
    /* 00738008: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0073800c: lea ecx, [ebx + ebx*4] */ r_ecx = (u32)(r_ebx+r_ebx*4);
    /* 0073800f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738011: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738013: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 00738016: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738018: lea edi, [eax + eax + 0x14] */ r_edi = (u32)(r_eax+r_eax+0x14u);
    /* 0073801c: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0073801f: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00738023: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738025: lea edx, [eax + eax + 0x28] */ r_edx = (u32)(r_eax+r_eax+0x28u);
    /* 00738029: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0073802c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073802e: lea eax, [eax + eax + 0x3c] */ r_eax = (u32)(r_eax+r_eax+0x3cu);
    /* 00738032: lea edi, [ebx + ebx*4] */ r_edi = (u32)(r_ebx+r_ebx*4);
    /* 00738035: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00738037: lea edi, [edi + edi + 0x50] */ r_edi = (u32)(r_edi+r_edi+0x50u);
    /* 0073803b: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
L_0073803f:; BB(0x0073803f);
    /* 0073803f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00738043: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00738046: mov edi, dword ptr [edi + ebx*4] */ r_edi = R32((u32)(r_edi+r_ebx*4));
    /* 00738049: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 0073804c: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0073804f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00738051: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00738054: fadd dword ptr [ebp*4 + 0x971508] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x971508u));
    /* 0073805b: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0073805e: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00738062: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 00738065: mov ebp, dword ptr [ebp + ebx*4 + 4] */ r_ebp = R32((u32)(r_ebp+r_ebx*4+0x4u));
    /* 00738069: add dword ptr [esp + 0x1c], 0x64 */ { u32 ad = (u32)(r_esp+0x1cu);  u32 a = R32(ad); u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0073806e: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00738072: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738076: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0073807a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073807e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00738082: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00738086: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00738089: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0073808b: fadd dword ptr [edi*4 + 0x971508] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x971508u));
    /* 00738092: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00738095: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00738098: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 0073809b: mov edi, dword ptr [ebp + ebx*4 + 8] */ r_edi = R32((u32)(r_ebp+r_ebx*4+0x8u));
    /* 0073809f: mov ebp, edx */ r_ebp = r_edx;
    /* 007380a1: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 007380a4: fadd dword ptr [ebp*4 + 0x971508] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x971508u));
    /* 007380ab: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 007380ae: add edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007380b1: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 007380b4: mov edi, dword ptr [ebp + ebx*4 + 0xc] */ r_edi = R32((u32)(r_ebp+r_ebx*4+0xcu));
    /* 007380b8: mov ebp, eax */ r_ebp = r_eax;
    /* 007380ba: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 007380bd: fadd dword ptr [ebp*4 + 0x971508] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x971508u));
    /* 007380c4: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 007380c7: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 007380cb: mov ebp, dword ptr [esi + 0x28] */ r_ebp = R32((u32)(r_esi+0x28u));
    /* 007380ce: mov esi, dword ptr [ebp + ebx*4 + 0x10] */ r_esi = R32((u32)(r_ebp+r_ebx*4+0x10u));
    /* 007380d2: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007380d6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007380da: mov ebp, edi */ r_ebp = r_edi;
    /* 007380dc: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 007380df: fadd dword ptr [ebp*4 + 0x971508] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x971508u));
    /* 007380e6: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 007380ea: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 007380ed: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007380f0: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007380f3: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 007380f7: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007380fa: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007380fc: jbe 0x73803f */ if ((fC||fZ)) goto L_0073803f;
L_00738102:; BB(0x00738102);
    /* 00738102: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00738106: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_0073810a:; BB(0x0073810a);
    /* 0073810a: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 0073810d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073810f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00738111:; BB(0x00738111);
    /* 00738111: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00738114: mov edi, dword ptr [edx + ebx*4] */ r_edi = R32((u32)(r_edx+r_ebx*4));
    /* 00738117: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0073811b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0073811f: mov ecx, eax */ r_ecx = r_eax;
    /* 00738121: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00738124: fadd dword ptr [ecx*4 + 0x971508] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x971508u));
    /* 0073812b: fstp dword ptr [edi + 0xc] */ W_F32((u32)(r_edi+0xcu), ST(0)); FPOP();
    /* 0073812e: add eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00738131: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00738134: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00738136: jb 0x738111 */ if (fC) goto L_00738111;
L_00738138:; BB(0x00738138);
    /* 00738138: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073813b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073813c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073813d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073813e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073813f: ret 8 */ FN_RET(0x00737fa0); r_esp += 12; return;
}

