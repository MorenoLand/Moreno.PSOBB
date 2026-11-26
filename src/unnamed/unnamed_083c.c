#include "protos.h"

void f_0083c014(void) /* sub_83C014 */
{
    FN_ENTER(0x0083c014);
    /* 0083c014: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c015: push 0xaf05e0 */ { u32 v = 0xaf05e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083c01a: call 0x85b66e */ r_esp -= 4; W32(r_esp, 0x83c01fu); f_0085b66e();
    /* 0083c01f: push 0xaf05e0 */ { u32 v = 0xaf05e0u; r_esp -= 4; W32(r_esp, v); }
    /* 0083c024: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x83c029u); f_0085afdb();
    /* 0083c029: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083c02c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c02e: je 0x83c032 */ if (fZ) goto L_0083c032;
L_0083c030:; BB(0x0083c030);
    /* 0083c030: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083c031: ret  */ FN_RET(0x0083c014); r_esp += 4; return;
L_0083c032:; BB(0x0083c032);
    /* 0083c032: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0083c035: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083c037: mov ebx, eax */ r_ebx = r_eax;
L_0083c039:; BB(0x0083c039);
    /* 0083c039: push 0x979ad8 */ { u32 v = 0x979ad8u; r_esp -= 4; W32(r_esp, v); }
    /* 0083c03e: push dword ptr [ebx + 0xa21c40] */ { u32 v = R32((u32)(r_ebx+0xa21c40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083c044: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x83c049u); f_0085957c();
    /* 0083c049: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0083c04c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c04e: je 0x83c057 */ if (fZ) goto L_0083c057;
L_0083c050:; BB(0x0083c050);
    /* 0083c050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083c051: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x83c056u); f_00859710();
    /* 0083c056: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083c057:; BB(0x0083c057);
    /* 0083c057: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083c05a: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0083c05d: jl 0x83c039 */ if ((fS!=fO)) goto L_0083c039;
L_0083c05f:; BB(0x0083c05f);
    /* 0083c05f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0083c062: push 0x92b688 */ { u32 v = 0x92b688u; r_esp -= 4; W32(r_esp, v); }
    /* 0083c067: call 0x85afdb */ r_esp -= 4; W32(r_esp, 0x83c06cu); f_0085afdb();
    /* 0083c06c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c06f: ret  */ FN_RET(0x0083c014); r_esp += 4; return;
}

void f_0083c070(void) /* sub_83C070 */
{
    FN_ENTER(0x0083c070);
    /* 0083c070: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083c071: call dword ptr [0x8f818c] */ { u32 t = R32((u32)(0x8f818cu)); r_esp -= 4; W32(r_esp, 0x83c077u); call_ind(t); }
    /* 0083c077: push 0x98af48 */ { u32 v = 0x98af48u; r_esp -= 4; W32(r_esp, v); }
    /* 0083c07c: call dword ptr [0x8f818c] */ { u32 t = R32((u32)(0x8f818cu)); r_esp -= 4; W32(r_esp, 0x83c082u); call_ind(t); }
    /* 0083c082: ret  */ FN_RET(0x0083c070); r_esp += 4; return;
}

void f_0083c084(void) /* sub_83C084 */
{
    FN_ENTER(0x0083c084);
    /* 0083c084: push dword ptr [ecx*4 + 0xa21c00] */ { u32 v = R32((u32)(r_ecx*4+0xa21c00u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083c08b: call dword ptr [0x8f818c] */ { u32 t = R32((u32)(0x8f818cu)); r_esp -= 4; W32(r_esp, 0x83c091u); call_ind(t); }
    /* 0083c091: push 0x98af48 */ { u32 v = 0x98af48u; r_esp -= 4; W32(r_esp, v); }
    /* 0083c096: call dword ptr [0x8f818c] */ { u32 t = R32((u32)(0x8f818cu)); r_esp -= 4; W32(r_esp, 0x83c09cu); call_ind(t); }
    /* 0083c09c: ret  */ FN_RET(0x0083c084); r_esp += 4; return;
}

void f_0083c0a0(void) /* sub_83C0A0 */
{
    FN_ENTER(0x0083c0a0);
    /* 0083c0a0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083c0a2: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083c0a5: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083c0a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c0aa: je 0x83c11f */ if (fZ) goto L_0083c11f;
L_0083c0ac:; BB(0x0083c0ac);
    /* 0083c0ac: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0083c0ae: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c0b0: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0083c0b3: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0083c0b6: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0083c0b9: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 0083c0bc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c0be: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083c0c0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c0c2: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083c0c4: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0083c0c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c0c8: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0083c0cb: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083c0cd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c0cf: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083c0d1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c0d3: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0083c0d5: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 0083c0d8: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083c0da: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c0dc: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 0083c0df: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083c0e1: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 0083c0e4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c0e6: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 0083c0e9: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 0083c0ec: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 0083c0ef: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c0f1: fstp dword ptr [ecx + 0x18] */ W_F32((u32)(r_ecx+0x18u), ST(0)); FPOP();
    /* 0083c0f4: fld dword ptr [ecx + 0x1c] */ FPUSH(R_F32((u32)(r_ecx+0x1cu)));
    /* 0083c0f7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c0f9: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 0083c0fc: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c0fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c100: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 0083c103: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 0083c106: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0083c109: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083c10b: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 0083c10e: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0083c111: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083c113: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0083c116: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 0083c119: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c11b: fstp dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0)); FPOP();
    /* 0083c11e: ret  */ FN_RET(0x0083c0a0); r_esp += 4; return;
L_0083c11f:; BB(0x0083c11f);
    /* 0083c11f: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0083c125: jmp 0x83c0ac */ goto L_0083c0ac;
}

void f_0083c128(void) /* sub_83C128 */
{
    FN_ENTER(0x0083c128);
    /* 0083c128: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083c129: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083c12c: mov eax, edx */ r_eax = r_edx;
    /* 0083c12e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c130: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0083c134: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 0083c138: je 0x83c222 */ if (fZ) goto L_0083c222;
L_0083c13e:; BB(0x0083c13e);
    /* 0083c13e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c140: je 0x83c21b */ if (fZ) goto L_0083c21b;
L_0083c146:; BB(0x0083c146);
    /* 0083c146: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0083c14a: mov esi, ecx */ r_esi = r_ecx;
    /* 0083c14c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0083c150: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0083c153: mov edi, eax */ r_edi = r_eax;
    /* 0083c155: mov ebp, edx */ r_ebp = r_edx;
L_0083c157:; BB(0x0083c157);
    /* 0083c157: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 0083c159: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 0083c15c: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 0083c15f: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0083c161: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c163: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 0083c166: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c168: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c16a: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 0083c16d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c16f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c171: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 0083c175: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0083c178: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0083c17b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c17d: mov eax, dword ptr [0xaeb494] */ r_eax = R32((u32)(0xaeb494u));
    /* 0083c182: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 0083c185: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c187: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c189: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0083c18c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c18e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c190: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0083c194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c196: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0083c199: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 0083c19c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083c19e: fld dword ptr [esi + 0x18] */ FPUSH(R_F32((u32)(r_esi+0x18u)));
    /* 0083c1a1: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083c1a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c1a5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c1a7: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0083c1aa: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c1ac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c1ae: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0083c1b2: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
    /* 0083c1b5: je 0x83c1ff */ if (fZ) goto L_0083c1ff;
L_0083c1b7:; BB(0x0083c1b7);
    /* 0083c1b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c1b8: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083c1bc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083c1be: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083c1c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083c1c4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c1c6: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083c1ca: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083c1cc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c1ce: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083c1d1: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83c1d6u); f_0082dc9c();
    /* 0083c1d6: fdivr dword ptr [0x98af50] */ ST(0) = R_F32((u32)(0x98af50u)) / ST(0);
    /* 0083c1dc: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083c1e0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083c1e2: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0083c1e6: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083c1ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c1ec: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c1ee: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c1f0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c1f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c1f4: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0083c1f7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c1f9: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0083c1fc: fstp dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0)); FPOP();
L_0083c1ff:; BB(0x0083c1ff);
    /* 0083c1ff: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083c202: add edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083c205: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083c208: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c20a: jne 0x83c157 */ if (!fZ) goto L_0083c157;
L_0083c210:; BB(0x0083c210);
    /* 0083c210: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0083c214: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0083c218: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0083c21b:; BB(0x0083c21b);
    /* 0083c21b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c21e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083c21f: ret 8 */ FN_RET(0x0083c128); r_esp += 12; return;
L_0083c222:; BB(0x0083c222);
    /* 0083c222: mov ecx, dword ptr [0xaf0328] */ r_ecx = R32((u32)(0xaf0328u));
    /* 0083c228: jmp 0x83c13e */ goto L_0083c13e;
}

void f_0083c230(void) /* sub_83C230 */
{
    FN_ENTER(0x0083c230);
    /* 0083c230: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083c233: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083c237: fcomp qword ptr [0x98af58] */ fx_compare(ST(0), R_F64((u32)(0x98af58u))); FPOP();
    /* 0083c23d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083c23f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083c240: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0083c244: jae 0x83c291 */ if (!fC) goto L_0083c291;
L_0083c246:; BB(0x0083c246);
    /* 0083c246: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083c247: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83c24cu); f_0082e900();
    /* 0083c24c: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0083c24e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0083c251: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0083c255: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083c25a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083c25e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083c262: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0083c264: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0083c267: fldz  */ FPUSH(0.0);
    /* 0083c269: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0083c26b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083c26d: fld dword ptr [0x98af60] */ FPUSH(R_F32((u32)(0x98af60u)));
    /* 0083c273: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0083c275: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083c276: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c278: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083c27a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083c27c: jae 0x83c280 */ if (!fC) goto L_0083c280;
L_0083c27e:; BB(0x0083c27e);
    /* 0083c27e: fst st(1) */ ST(1) = ST(0);
L_0083c280:; BB(0x0083c280);
    /* 0083c280: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083c281: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c283: je 0x83c287 */ if (fZ) goto L_0083c287;
L_0083c285:; BB(0x0083c285);
    /* 0083c285: fst st(1) */ ST(1) = ST(0);
L_0083c287:; BB(0x0083c287);
    /* 0083c287: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083c289: fchs  */ ST(0) = -ST(0);
    /* 0083c28b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c28e: ret 4 */ FN_RET(0x0083c230); r_esp += 8; return;
L_0083c291:; BB(0x0083c291);
    /* 0083c291: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083c292: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x83c297u); f_0082e900();
    /* 0083c297: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0083c299: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0083c29c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0083c2a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0083c2a5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0083c2a9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0083c2ad: frndint  */ ST(0) = fx_rint(ST(0));
    /* 0083c2af: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0083c2b2: fldz  */ FPUSH(0.0);
    /* 0083c2b4: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0083c2b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083c2b8: fld dword ptr [0x98af60] */ FPUSH(R_F32((u32)(0x98af60u)));
    /* 0083c2be: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0083c2c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083c2c1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c2c3: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0083c2c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083c2c7: jae 0x83c2cb */ if (!fC) goto L_0083c2cb;
L_0083c2c9:; BB(0x0083c2c9);
    /* 0083c2c9: fst st(1) */ ST(1) = ST(0);
L_0083c2cb:; BB(0x0083c2cb);
    /* 0083c2cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083c2cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c2ce: je 0x83c2d2 */ if (fZ) goto L_0083c2d2;
L_0083c2d0:; BB(0x0083c2d0);
    /* 0083c2d0: fst st(1) */ ST(1) = ST(0);
L_0083c2d2:; BB(0x0083c2d2);
    /* 0083c2d2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083c2d4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c2d7: ret 4 */ FN_RET(0x0083c230); r_esp += 8; return;
}

void f_0083c2dc(void) /* sub_83C2DC */
{
    FN_ENTER(0x0083c2dc);
    /* 0083c2dc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083c2df: mov edx, dword ptr [0xaf0230] */ r_edx = R32((u32)(0xaf0230u));
    /* 0083c2e5: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0083c2e8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 0083c2ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083c2ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c2ee: je 0x83c330 */ if (fZ) goto L_0083c330;
L_0083c2f0:; BB(0x0083c2f0);
    /* 0083c2f0: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0083c2f4: mov ebx, edx */ r_ebx = r_edx;
    /* 0083c2f6: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0083c2fa: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0083c2fd: mov edi, eax */ r_edi = r_eax;
    /* 0083c2ff: mov esi, ecx */ r_esi = r_ecx;
L_0083c301:; BB(0x0083c301);
    /* 0083c301: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c303: je 0x83c31b */ if (fZ) goto L_0083c31b;
L_0083c305:; BB(0x0083c305);
    /* 0083c305: movsx eax, word ptr [edi + 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4cu));
    /* 0083c309: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c30b: je 0x83c314 */ if (fZ) goto L_0083c314;
L_0083c30d:; BB(0x0083c30d);
    /* 0083c30d: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0083c30f: call 0x83e330 */ r_esp -= 4; W32(r_esp, 0x83c314u); f_0083e330();
L_0083c314:; BB(0x0083c314);
    /* 0083c314: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c315: call 0x83c550 */ r_esp -= 4; W32(r_esp, 0x83c31au); f_0083c550();
    /* 0083c31a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083c31b:; BB(0x0083c31b);
    /* 0083c31b: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083c31e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083c321: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c323: jne 0x83c301 */ if (!fZ) goto L_0083c301;
L_0083c325:; BB(0x0083c325);
    /* 0083c325: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083c329: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0083c32d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0083c330:; BB(0x0083c330);
    /* 0083c330: mov dword ptr [0xaf0230], 0 */ W32((u32)(0xaf0230u), 0x0u);
    /* 0083c33a: call 0x83e2ac */ r_esp -= 4; W32(r_esp, 0x83c33fu); f_0083e2ac();
    /* 0083c33f: push 0x83c4ac */ { u32 v = 0x83c4acu; r_esp -= 4; W32(r_esp, v); }
    /* 0083c344: call 0x82d758 */ r_esp -= 4; W32(r_esp, 0x83c349u); f_0082d758();
    /* 0083c349: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c34c: ret  */ FN_RET(0x0083c2dc); r_esp += 4; return;
}

void f_0083c350(void) /* sub_83C350 */
{
    FN_ENTER(0x0083c350);
    /* 0083c350: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c351: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083c352: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0083c354: mov eax, dword ptr [0xaf0230] */ r_eax = R32((u32)(0xaf0230u));
    /* 0083c359: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0083c35c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083c35e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083c360: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c362: je 0x83c3c0 */ if (fZ) goto L_0083c3c0;
L_0083c364:; BB(0x0083c364);
    /* 0083c364: movsx ebp, word ptr [ecx + 0x4c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ecx+0x4cu));
    /* 0083c368: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c36a: je 0x83c3c5 */ if (fZ) goto L_0083c3c5;
L_0083c36c:; BB(0x0083c36c);
    /* 0083c36c: add ecx, 0x54 */ {  u32 a = r_ecx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083c36f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083c372: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c374: jne 0x83c364 */ if (!fZ) goto L_0083c364;
L_0083c376:; BB(0x0083c376);
    /* 0083c376: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c378: je 0x83c3c0 */ if (fZ) goto L_0083c3c0;
L_0083c37a:; BB(0x0083c37a);
    /* 0083c37a: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0083c37e: call 0x83ea38 */ r_esp -= 4; W32(r_esp, 0x83c383u); f_0083ea38();
    /* 0083c383: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c385: je 0x83c3be */ if (fZ) goto L_0083c3be;
L_0083c387:; BB(0x0083c387);
    /* 0083c387: mov dword ptr [edi + 8], 0 */ W32((u32)(r_edi+0x8u), 0x0u);
    /* 0083c38e: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 0083c390: mov edx, 1 */ r_edx = 0x1u;
    /* 0083c395: mov word ptr [edi + 0x4c], dx */ W16((u32)(r_edi+0x4cu), (u16)r_edx);
    /* 0083c399: mov ecx, eax */ r_ecx = r_eax;
    /* 0083c39b: call 0x83e354 */ r_esp -= 4; W32(r_esp, 0x83c3a0u); f_0083e354();
    /* 0083c3a0: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0083c3a3: lea edx, [eax + 0x7ff] */ r_edx = (u32)(r_eax+0x7ffu);
    /* 0083c3a9: sar edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0083c3ac: shr edx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0083c3af: lea eax, [edx + eax + 0x7ff] */ r_eax = (u32)(r_edx+r_eax+0x7ffu);
    /* 0083c3b6: sar eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0083c3b9: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0083c3bc: jmp 0x83c3c0 */ goto L_0083c3c0;
L_0083c3be:; BB(0x0083c3be);
    /* 0083c3be: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0083c3c0:; BB(0x0083c3c0);
    /* 0083c3c0: mov eax, edi */ r_eax = r_edi;
    /* 0083c3c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083c3c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083c3c4: ret  */ FN_RET(0x0083c350); r_esp += 4; return;
L_0083c3c5:; BB(0x0083c3c5);
    /* 0083c3c5: mov edi, ecx */ r_edi = r_ecx;
    /* 0083c3c7: jmp 0x83c376 */ goto L_0083c376;
}

void f_0083c3cc(void) /* sub_83C3CC */
{
    FN_ENTER(0x0083c3cc);
    /* 0083c3cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c3cd: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0083c3d1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c3d3: je 0x83c3eb */ if (fZ) goto L_0083c3eb;
L_0083c3d5:; BB(0x0083c3d5);
    /* 0083c3d5: movsx eax, word ptr [esi + 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x4cu));
    /* 0083c3d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c3db: je 0x83c3e4 */ if (fZ) goto L_0083c3e4;
L_0083c3dd:; BB(0x0083c3dd);
    /* 0083c3dd: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0083c3df: call 0x83e330 */ r_esp -= 4; W32(r_esp, 0x83c3e4u); f_0083e330();
L_0083c3e4:; BB(0x0083c3e4);
    /* 0083c3e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c3e5: call 0x83c550 */ r_esp -= 4; W32(r_esp, 0x83c3eau); f_0083c550();
    /* 0083c3ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0083c3eb:; BB(0x0083c3eb);
    /* 0083c3eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083c3ec: ret  */ FN_RET(0x0083c3cc); r_esp += 4; return;
}

void f_0083c3f0(void) /* sub_83C3F0 */
{
    FN_ENTER(0x0083c3f0);
    /* 0083c3f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c3f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c3f2: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0083c3f6: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0083c3fa: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c3fc: je 0x83c40a */ if (fZ) goto L_0083c40a;
L_0083c3fe:; BB(0x0083c3fe);
    /* 0083c3fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c400: je 0x83c40a */ if (fZ) goto L_0083c40a;
L_0083c402:; BB(0x0083c402);
    /* 0083c402: movsx eax, word ptr [edi + 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4cu));
    /* 0083c406: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c408: jne 0x83c412 */ if (!fZ) goto L_0083c412;
L_0083c40a:; BB(0x0083c40a);
    /* 0083c40a: mov eax, 0xfffffff6 */ r_eax = 0xfffffff6u;
    /* 0083c40f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083c410: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083c411: ret  */ FN_RET(0x0083c3f0); r_esp += 4; return;
L_0083c412:; BB(0x0083c412);
    /* 0083c412: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0083c416: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0083c418: shl esi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0083c41b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c41c: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0083c41f: call 0x83e368 */ r_esp -= 4; W32(r_esp, 0x83c424u); f_0083e368();
    /* 0083c424: add esi, dword ptr [edi + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083c427: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0083c42a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083c42c: mov eax, 0 */ r_eax = 0x0u;
    /* 0083c431: jl 0x83c435 */ if ((fS!=fO)) goto L_0083c435;
L_0083c433:; BB(0x0083c433);
    /* 0083c433: mov edx, esi */ r_edx = r_esi;
L_0083c435:; BB(0x0083c435);
    /* 0083c435: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 0083c438: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083c439: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083c43a: ret  */ FN_RET(0x0083c3f0); r_esp += 4; return;
}

void f_0083c43c(void) /* sub_83C43C */
{
    FN_ENTER(0x0083c43c);
    /* 0083c43c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c43d: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0083c441: call 0x83e434 */ r_esp -= 4; W32(r_esp, 0x83c446u); f_0083e434();
    /* 0083c446: mov ecx, dword ptr [0xaf0230] */ r_ecx = R32((u32)(0xaf0230u));
    /* 0083c44c: mov eax, dword ptr [ecx + 0x10] */ r_eax = R32((u32)(r_ecx+0x10u));
    /* 0083c44f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0083c452: lea ecx, [eax + 0x10] */ r_ecx = (u32)(r_eax+0x10u);
    /* 0083c455: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083c457: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c459: je 0x83c481 */ if (fZ) goto L_0083c481;
L_0083c45b:; BB(0x0083c45b);
    /* 0083c45b: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_0083c45e:; BB(0x0083c45e);
    /* 0083c45e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0083c460: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 0083c462: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0083c465: mov byte ptr [ecx + 8], bl */ W8((u32)(r_ecx+0x8u), (u8)r_ebx);
    /* 0083c468: mov byte ptr [ecx + 9], bl */ W8((u32)(r_ecx+0x9u), (u8)r_ebx);
    /* 0083c46b: mov byte ptr [ecx + 0xa], bl */ W8((u32)(r_ecx+0xau), (u8)r_ebx);
    /* 0083c46e: mov byte ptr [ecx + 0x2a], bl */ W8((u32)(r_ecx+0x2au), (u8)r_ebx);
    /* 0083c471: mov byte ptr [ecx + 0x2b], bl */ W8((u32)(r_ecx+0x2bu), (u8)r_ebx);
    /* 0083c474: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083c477: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083c47a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c47c: jne 0x83c45e */ if (!fZ) goto L_0083c45e;
L_0083c47e:; BB(0x0083c47e);
    /* 0083c47e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_0083c481:; BB(0x0083c481);
    /* 0083c481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c483: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083c484: ret  */ FN_RET(0x0083c43c); r_esp += 4; return;
}

void f_0083c488(void) /* sub_83C488 */
{
    FN_ENTER(0x0083c488);
    /* 0083c488: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0083c48c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c48e: je 0x83c498 */ if (fZ) goto L_0083c498;
L_0083c490:; BB(0x0083c490);
    /* 0083c490: movsx eax, word ptr [edx + 0x4c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4cu));
    /* 0083c494: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c496: jne 0x83c49b */ if (!fZ) goto L_0083c49b;
L_0083c498:; BB(0x0083c498);
    /* 0083c498: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c49a: ret  */ FN_RET(0x0083c488); r_esp += 4; return;
L_0083c49b:; BB(0x0083c49b);
    /* 0083c49b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0083c49f: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0083c4a2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0083c4a4: mov eax, 1 */ r_eax = 0x1u;
    /* 0083c4a9: ret  */ FN_RET(0x0083c488); r_esp += 4; return;
}

void f_0083c4ac(void)
{
    FN_ENTER(0x0083c4ac);
    /* 0083c4ac: mov eax, dword ptr [0xaf0230] */ r_eax = R32((u32)(0xaf0230u));
    /* 0083c4b1: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 0083c4b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c4b6: je 0x83c4c9 */ if (fZ) goto L_0083c4c9;
L_0083c4b8:; BB(0x0083c4b8);
    /* 0083c4b8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083c4bb: jne 0x83c4c9 */ if (!fZ) goto L_0083c4c9;
L_0083c4bd:; BB(0x0083c4bd);
    /* 0083c4bd: mov eax, dword ptr [0xaf0230] */ r_eax = R32((u32)(0xaf0230u));
    /* 0083c4c2: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0083c4c9:; BB(0x0083c4c9);
    /* 0083c4c9: ret  */ FN_RET(0x0083c4ac); r_esp += 4; return;
}

void f_0083c4cc(void) /* sub_83C4CC */
{
    FN_ENTER(0x0083c4cc);
    /* 0083c4cc: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083c4d0: call 0x83e730 */ r_esp -= 4; W32(r_esp, 0x83c4d5u); f_0083e730();
    /* 0083c4d5: ret  */ FN_RET(0x0083c4cc); r_esp += 4; return;
}

void f_0083c4d8(void) /* sub_83C4D8 */
{
    FN_ENTER(0x0083c4d8);
    /* 0083c4d8: call 0x83e86c */ r_esp -= 4; W32(r_esp, 0x83c4ddu); f_0083e86c();
    /* 0083c4dd: ret  */ FN_RET(0x0083c4d8); r_esp += 4; return;
}

void f_0083c4e0(void) /* sub_83C4E0 */
{
    FN_ENTER(0x0083c4e0);
    /* 0083c4e0: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083c4e4: call 0x83e8e4 */ r_esp -= 4; W32(r_esp, 0x83c4e9u); f_0083e8e4();
    /* 0083c4e9: ret  */ FN_RET(0x0083c4e0); r_esp += 4; return;
}

void f_0083c4ec(void) /* sub_83C4EC */
{
    FN_ENTER(0x0083c4ec);
    /* 0083c4ec: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083c4f0: call 0x83e960 */ r_esp -= 4; W32(r_esp, 0x83c4f5u); f_0083e960();
    /* 0083c4f5: ret  */ FN_RET(0x0083c4ec); r_esp += 4; return;
}

void f_0083c500(void) /* sub_83C500 */
{
    FN_ENTER(0x0083c500);
    /* 0083c500: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083c501: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c502: mov ecx, edx */ r_ecx = r_edx;
    /* 0083c504: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c506: je 0x83c549 */ if (fZ) goto L_0083c549;
L_0083c508:; BB(0x0083c508);
    /* 0083c508: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083c50a: mov dword ptr [eax], ebp */ W32((u32)(r_eax), r_ebp);
    /* 0083c50c: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0083c50f: mov dword ptr [eax + 8], ebp */ W32((u32)(r_eax+0x8u), r_ebp);
    /* 0083c512: mov dword ptr [eax + 0xc], ebp */ W32((u32)(r_eax+0xcu), r_ebp);
L_0083c515:; BB(0x0083c515);
    /* 0083c515: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 0083c518: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083c51a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c51c: je 0x83c546 */ if (fZ) goto L_0083c546;
L_0083c51e:; BB(0x0083c51e);
    /* 0083c51e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0083c521: mov edi, edx */ r_edi = r_edx;
L_0083c523:; BB(0x0083c523);
    /* 0083c523: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083c525: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 0083c527: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0083c52a: mov byte ptr [edi + 8], dl */ W8((u32)(r_edi+0x8u), (u8)r_edx);
    /* 0083c52d: mov byte ptr [edi + 9], dl */ W8((u32)(r_edi+0x9u), (u8)r_edx);
    /* 0083c530: mov byte ptr [edi + 0xa], dl */ W8((u32)(r_edi+0xau), (u8)r_edx);
    /* 0083c533: mov byte ptr [edi + 0x2a], dl */ W8((u32)(r_edi+0x2au), (u8)r_edx);
    /* 0083c536: mov byte ptr [edi + 0x2b], dl */ W8((u32)(r_edi+0x2bu), (u8)r_edx);
    /* 0083c539: add edi, 0x2c */ {  u32 a = r_edi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083c53c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083c53f: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083c541: jne 0x83c523 */ if (!fZ) goto L_0083c523;
L_0083c543:; BB(0x0083c543);
    /* 0083c543: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0083c546:; BB(0x0083c546);
    /* 0083c546: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083c547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083c548: ret  */ FN_RET(0x0083c500); r_esp += 4; return;
L_0083c549:; BB(0x0083c549);
    /* 0083c549: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0083c54c: jmp 0x83c515 */ goto L_0083c515;
}

void f_0083c550(void) /* sub_83C550 */
{
    FN_ENTER(0x0083c550);
    /* 0083c550: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083c554: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c556: je 0x83c5ac */ if (fZ) goto L_0083c5ac;
L_0083c558:; BB(0x0083c558);
    /* 0083c558: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083c55a: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0083c55c: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0083c55f: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0083c562: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0083c565: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0083c568: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0083c56b: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 0083c56e: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0083c571: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0083c574: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0083c577: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0083c57a: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0083c57d: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0083c580: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0083c583: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 0083c586: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0083c589: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 0083c58c: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 0083c58f: mov word ptr [ecx + 0x48], ax */ W16((u32)(r_ecx+0x48u), (u16)r_eax);
    /* 0083c593: mov word ptr [ecx + 0x4a], ax */ W16((u32)(r_ecx+0x4au), (u16)r_eax);
    /* 0083c597: mov word ptr [ecx + 0x4c], ax */ W16((u32)(r_ecx+0x4cu), (u16)r_eax);
    /* 0083c59b: mov word ptr [ecx + 0x4e], ax */ W16((u32)(r_ecx+0x4eu), (u16)r_eax);
    /* 0083c59f: mov word ptr [ecx + 0x50], ax */ W16((u32)(r_ecx+0x50u), (u16)r_eax);
    /* 0083c5a3: mov edx, 0xffffffe5 */ r_edx = 0xffffffe5u;
    /* 0083c5a8: mov word ptr [ecx + 0x52], dx */ W16((u32)(r_ecx+0x52u), (u16)r_edx);
L_0083c5ac:; BB(0x0083c5ac);
    /* 0083c5ac: ret  */ FN_RET(0x0083c550); r_esp += 4; return;
}

void f_0083c5b0(void) /* sub_83C5B0 */
{
    FN_ENTER(0x0083c5b0);
    /* 0083c5b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083c5b1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083c5b2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083c5b5: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 0083c5b9: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0083c5bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0083c5bf: call 0x83eac0 */ r_esp -= 4; W32(r_esp, 0x83c5c4u); f_0083eac0();
    /* 0083c5c4: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0083c5c8: mov dword ptr [0xaf0230], edx */ W32((u32)(0xaf0230u), r_edx);
    /* 0083c5ce: mov dword ptr [edx], ebp */ W32((u32)(r_edx), r_ebp);
    /* 0083c5d0: mov ecx, dword ptr [0xaf0230] */ r_ecx = R32((u32)(0xaf0230u));
    /* 0083c5d6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083c5d8: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0083c5db: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0083c5de: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0083c5e1: mov dword ptr [ecx + 0x10], edi */ W32((u32)(r_ecx+0x10u), r_edi);
    /* 0083c5e4: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0083c5e7: lea edx, [ecx + 0x1080] */ r_edx = (u32)(r_ecx+0x1080u);
    /* 0083c5ed: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0083c5f0: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0083c5f3: mov edx, dword ptr [0xaf0230] */ r_edx = R32((u32)(0xaf0230u));
    /* 0083c5f9: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0083c5fc: mov ecx, dword ptr [0xaf0230] */ r_ecx = R32((u32)(0xaf0230u));
    /* 0083c602: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 0083c605: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0083c608: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0083c60b: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0083c60e: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0083c611: mov edx, 1 */ r_edx = 0x1u;
    /* 0083c616: mov word ptr [ecx + 0x38], dx */ W16((u32)(r_ecx+0x38u), (u16)r_edx);
    /* 0083c61a: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0083c61d: mov word ptr [ecx + 0x3a], ax */ W16((u32)(r_ecx+0x3au), (u16)r_eax);
    /* 0083c621: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 0083c624: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083c626: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c628: je 0x83c651 */ if (fZ) goto L_0083c651;
L_0083c62a:; BB(0x0083c62a);
    /* 0083c62a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0083c62e: mov ebx, eax */ r_ebx = r_eax;
    /* 0083c630: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 0083c634: mov esi, ebp */ r_esi = r_ebp;
    /* 0083c636: mov ebp, edx */ r_ebp = r_edx;
L_0083c638:; BB(0x0083c638);
    /* 0083c638: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083c639: call 0x83c550 */ r_esp -= 4; W32(r_esp, 0x83c63eu); f_0083c550();
    /* 0083c63e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083c63f: add ebp, 0x54 */ {  u32 a = r_ebp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083c642: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083c645: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c647: jne 0x83c638 */ if (!fZ) goto L_0083c638;
L_0083c649:; BB(0x0083c649);
    /* 0083c649: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0083c64d: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
L_0083c651:; BB(0x0083c651);
    /* 0083c651: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0083c655: mov eax, edi */ r_eax = r_edi;
    /* 0083c657: call 0x83c500 */ r_esp -= 4; W32(r_esp, 0x83c65cu); f_0083c500();
    /* 0083c65c: push 0x83c4ac */ { u32 v = 0x83c4acu; r_esp -= 4; W32(r_esp, v); }
    /* 0083c661: call 0x82d73c */ r_esp -= 4; W32(r_esp, 0x83c666u); f_0082d73c();
    /* 0083c666: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0083c668: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083c66b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083c66c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083c66d: ret  */ FN_RET(0x0083c5b0); r_esp += 4; return;
}

void f_0083c670(void) /* sub_83C670 */
{
    FN_ENTER(0x0083c670);
    /* 0083c670: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083c671: mov ebx, esp */ r_ebx = r_esp;
    /* 0083c673: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0083c676: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083c677: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083c678: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0083c67b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0083c67f: mov ebp, esp */ r_ebp = r_esp;
    /* 0083c681: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083c684: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0083c687: mov esi, ecx */ r_esi = r_ecx;
    /* 0083c689: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083c68b: je 0x83cd58 */ if (fZ) goto L_0083cd58;
L_0083c691:; BB(0x0083c691);
    /* 0083c691: mov ecx, esi */ r_ecx = r_esi;
    /* 0083c693: call 0x84a778 */ r_esp -= 4; W32(r_esp, 0x83c698u); f_0084a778();
    /* 0083c698: fcom dword ptr [0x98af70] */ fx_compare(ST(0), R_F32((u32)(0x98af70u))); 
    /* 0083c69e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083c6a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083c6a1: je 0x83ccdb */ if (fZ) goto L_0083ccdb;
L_0083c6a7:; BB(0x0083c6a7);
    /* 0083c6a7: fld dword ptr [0x98af68] */ FPUSH(R_F32((u32)(0x98af68u)));
    /* 0083c6ad: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0083c6af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0083c6b1: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0083c6b4: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 0083c6b7: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0083c6ba: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0083c6bd: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0083c6c0: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0083c6c3: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0083c6c6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0083c6c9: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 0083c6cc: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0083c6cf: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0083c6d2: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0083c6d5: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0083c6d8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0083c6db: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0083c6de: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0083c6e1: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 0083c6e4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0083c6e7: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0083c6ea: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0083c6ed: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0083c6f0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0083c6f3: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0083c6f6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0083c6f9: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 0083c6fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0083c6ff: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0083c702: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0083c705: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0083c708: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0083c70b: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0083c70e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0083c711: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083c714: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083c717: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0083c71a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083c71c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c71e: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c721: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c724: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c727: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0083c72a: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c72c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c72e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c730: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c733: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c735: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083c738: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c73a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c73d: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c740: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c742: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c744: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083c747: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0083c74a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083c74c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c74e: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c751: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c753: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083c755: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c757: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c75a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c75c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c75e: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c760: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c762: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c764: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c767: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0083c769: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0083c76c: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0083c76f: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083c772: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083c775: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c777: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c779: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c77c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c77e: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c780: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c783: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c786: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c789: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c78b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c78d: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083c790: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c793: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c795: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c797: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c79a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c79c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c79e: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083c7a1: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0083c7a4: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c7a6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c7a8: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c7ab: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c7ad: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c7af: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c7b1: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c7b4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c7b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c7b8: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c7ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c7bc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c7be: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c7c0: fchs  */ ST(0) = -ST(0);
    /* 0083c7c2: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c7c5: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0083c7c8: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c7cb: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c7ce: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083c7d1: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083c7d4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c7d6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c7d8: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c7db: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c7dd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c7df: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c7e2: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c7e5: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c7e8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c7ea: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c7ec: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083c7ef: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c7f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c7f4: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c7f6: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c7f9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c7fb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c7fd: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083c800: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083c803: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c805: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c807: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c80a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c80c: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c80e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c810: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c813: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c815: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c817: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c819: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c81b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c81d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c81f: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c822: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 0083c825: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c828: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c82b: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083c82e: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083c831: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c833: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c835: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0083c838: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c83a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083c83c: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0083c83f: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c842: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c845: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c847: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c849: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0083c84c: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c84f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c851: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c853: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c856: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c858: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c85a: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0083c85d: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083c860: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c862: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c864: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0083c867: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c869: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c86b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c86d: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0083c870: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c872: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c874: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c876: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c878: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c87a: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c87c: fchs  */ ST(0) = -ST(0);
    /* 0083c87e: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c881: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 0083c884: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0083c887: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c88a: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c88d: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0083c890: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083c892: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c894: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083c897: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c89a: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083c89d: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083c8a0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c8a2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c8a4: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c8a7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c8a9: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083c8ab: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c8ae: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c8b0: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c8b3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c8b5: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c8b7: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083c8ba: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0083c8bd: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c8bf: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c8c1: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c8c4: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c8c6: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083c8c8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083c8ca: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c8cd: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c8cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c8d1: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c8d3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c8d5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c8d7: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c8d9: fchs  */ ST(0) = -ST(0);
    /* 0083c8db: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c8de: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 0083c8e1: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0083c8e4: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0083c8e7: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c8ea: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c8ed: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c8ef: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083c8f2: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c8f5: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083c8f8: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083c8fb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c8fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c8ff: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c902: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c904: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083c906: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c909: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c90b: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c90e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c910: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c912: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083c915: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0083c918: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c91a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c91c: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c91f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c921: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083c923: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c925: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c928: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c92a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c92c: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c92e: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c930: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c932: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c935: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 0083c938: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c93b: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c93e: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c941: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c944: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c946: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083c949: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c94c: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083c94f: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083c952: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c954: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c956: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c958: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083c95a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c95c: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c95f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c961: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c964: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c966: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c969: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c96b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c96d: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083c970: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083c973: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c975: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c977: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083c97a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c97c: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083c97e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c980: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083c983: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c985: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c987: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c989: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c98b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c98d: fchs  */ ST(0) = -ST(0);
    /* 0083c98f: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c992: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 0083c995: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083c998: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083c99b: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c99e: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083c9a1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083c9a3: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0083c9a6: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c9a9: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083c9ac: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083c9af: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c9b1: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c9b3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c9b5: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083c9b7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c9b9: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0083c9bc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c9be: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0083c9c1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083c9c3: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083c9c6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c9c8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083c9ca: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0083c9cd: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083c9d0: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083c9d2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c9d4: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0083c9d7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083c9d9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083c9db: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083c9dd: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0083c9e0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083c9e2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083c9e4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083c9e6: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083c9e8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083c9ea: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083c9ed: fstp dword ptr [esi + 0x1c] */ W_F32((u32)(r_esi+0x1cu), ST(0)); FPOP();
    /* 0083c9f0: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083c9f3: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083c9f6: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0083c9f9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083c9fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083c9fd: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083ca00: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083ca03: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0083ca06: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083ca09: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083ca0c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083ca0e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083ca10: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083ca13: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083ca15: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083ca17: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca19: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083ca1c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083ca1e: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083ca21: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca23: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083ca25: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083ca27: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083ca2a: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0083ca2d: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083ca2f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca31: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083ca34: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca36: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083ca38: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca3a: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083ca3d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083ca3f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083ca41: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083ca43: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083ca45: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083ca47: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083ca49: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083ca4c: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0083ca4f: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0083ca52: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0083ca55: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083ca58: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083ca5b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083ca5d: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083ca60: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083ca63: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083ca66: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083ca69: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083ca6b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083ca6d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca6f: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083ca71: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca73: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083ca76: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083ca78: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083ca7b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083ca7d: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083ca80: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca82: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083ca84: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083ca87: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0083ca8a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083ca8c: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca8e: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083ca91: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ca93: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083ca95: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083ca97: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083ca9a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083ca9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083ca9e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083caa0: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083caa2: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083caa4: fchs  */ ST(0) = -ST(0);
    /* 0083caa6: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083caa9: fstp dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0)); FPOP();
    /* 0083caac: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083caaf: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083cab2: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cab5: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cab8: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083caba: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cabd: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083cac0: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cac3: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cac6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cac8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083caca: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cacc: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083cace: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cad0: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cad3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cad5: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083cad8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cada: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083cadd: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cadf: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cae1: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cae4: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083cae7: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083cae9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083caeb: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083caee: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083caf0: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083caf2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083caf4: fmul dword ptr [ebp - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff4u));
    /* 0083caf7: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083caf9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cafb: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083cafd: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083caff: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083cb01: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083cb04: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0083cb07: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083cb0a: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 0083cb0d: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cb10: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cb13: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083cb15: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0083cb18: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083cb1b: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cb1e: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cb21: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cb23: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cb25: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0083cb28: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cb2a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083cb2c: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0083cb2f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cb31: fld dword ptr [ebp - 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc4u)));
    /* 0083cb34: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cb36: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cb38: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0083cb3b: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083cb3e: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083cb40: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cb42: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0083cb45: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cb47: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083cb49: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cb4b: fmul dword ptr [ebp - 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe4u));
    /* 0083cb4e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cb50: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cb52: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083cb54: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083cb56: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083cb58: fchs  */ ST(0) = -ST(0);
    /* 0083cb5a: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083cb5d: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0083cb60: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083cb63: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083cb66: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0083cb69: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083cb6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cb6d: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cb70: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083cb73: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0083cb76: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083cb79: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083cb7c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cb7e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cb80: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cb83: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cb85: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083cb87: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cb89: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083cb8c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083cb8e: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083cb91: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cb93: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083cb95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cb97: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cb9a: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0083cb9d: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083cb9f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cba1: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cba4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cba6: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083cba8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cbaa: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083cbad: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cbaf: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cbb1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cbb3: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083cbb5: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083cbb7: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083cbb9: fchs  */ ST(0) = -ST(0);
    /* 0083cbbb: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083cbbe: fstp dword ptr [esi + 0x30] */ W_F32((u32)(r_esi+0x30u), ST(0)); FPOP();
    /* 0083cbc1: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 0083cbc4: fld dword ptr [ebp - 0x24] */ FPUSH(R_F32((u32)(r_ebp+0xffffffdcu)));
    /* 0083cbc7: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cbca: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cbcd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083cbcf: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cbd2: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083cbd5: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cbd8: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cbdb: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083cbdd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cbdf: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cbe2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cbe4: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083cbe6: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cbe8: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083cbeb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cbed: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083cbf0: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cbf2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cbf4: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cbf7: fld dword ptr [ebp - 0x28] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd8u)));
    /* 0083cbfa: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083cbfc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cbfe: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cc01: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cc03: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083cc05: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cc07: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083cc0a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cc0c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cc0e: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083cc10: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083cc12: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083cc14: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083cc17: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 0083cc1a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083cc1d: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083cc20: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cc23: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cc26: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083cc28: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cc2b: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083cc2e: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083cc31: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0083cc33: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cc35: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083cc38: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cc3b: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cc3e: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083cc40: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cc42: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cc44: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083cc46: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cc48: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cc4b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cc4d: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0083cc50: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083cc52: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083cc55: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083cc57: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083cc59: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cc5b: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083cc5d: fmul dword ptr [ebp - 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe8u));
    /* 0083cc60: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cc62: fmul dword ptr [ebp - 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffecu));
    /* 0083cc65: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cc67: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0083cc69: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0083cc6b: mov eax, 1 */ r_eax = 0x1u;
    /* 0083cc70: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083cc72: fchs  */ ST(0) = -ST(0);
    /* 0083cc74: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083cc77: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 0083cc7a: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 0083cc7d: fld dword ptr [ebp - 0x30] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd0u)));
    /* 0083cc80: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cc83: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 0083cc86: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083cc88: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0083cc8b: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083cc8e: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cc91: fld dword ptr [ebp - 0x48] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb8u)));
    /* 0083cc94: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cc96: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083cc98: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0083cc9b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cc9d: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083cc9f: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0083cca2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cca4: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0083cca7: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083cca9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083ccab: fmul dword ptr [ebp - 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffd8u));
    /* 0083ccae: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 0083ccb1: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083ccb3: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083ccb5: fmul dword ptr [ebp - 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffdcu));
    /* 0083ccb8: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083ccba: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083ccbc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083ccbe: fmul dword ptr [ebp - 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xffffffe0u));
    /* 0083ccc1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083ccc3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083ccc5: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0083ccc7: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 0083ccc9: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0083cccb: fmul dword ptr [ebp - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffffcu));
    /* 0083ccce: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0083ccd1: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0083ccd4: mov esp, ebp */ r_esp = r_ebp;
    /* 0083ccd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083ccd7: mov esp, ebx */ r_esp = r_ebx;
    /* 0083ccd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083ccda: ret  */ FN_RET(0x0083c670); r_esp += 4; return;
L_0083ccdb:; BB(0x0083ccdb);
    /* 0083ccdb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083ccdd: mov dword ptr [esi], 0x7f7fc99e */ W32((u32)(r_esi), 0x7f7fc99eu);
    /* 0083cce3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083cce5: mov dword ptr [esi + 4], 0x7f7fc99e */ W32((u32)(r_esi+0x4u), 0x7f7fc99eu);
    /* 0083ccec: mov dword ptr [esi + 8], 0x7f7fc99e */ W32((u32)(r_esi+0x8u), 0x7f7fc99eu);
    /* 0083ccf3: mov dword ptr [esi + 0xc], 0x7f7fc99e */ W32((u32)(r_esi+0xcu), 0x7f7fc99eu);
    /* 0083ccfa: mov dword ptr [esi + 0x10], 0x7f7fc99e */ W32((u32)(r_esi+0x10u), 0x7f7fc99eu);
    /* 0083cd01: mov dword ptr [esi + 0x14], 0x7f7fc99e */ W32((u32)(r_esi+0x14u), 0x7f7fc99eu);
    /* 0083cd08: mov dword ptr [esi + 0x18], 0x7f7fc99e */ W32((u32)(r_esi+0x18u), 0x7f7fc99eu);
    /* 0083cd0f: mov dword ptr [esi + 0x1c], 0x7f7fc99e */ W32((u32)(r_esi+0x1cu), 0x7f7fc99eu);
    /* 0083cd16: mov dword ptr [esi + 0x20], 0x7f7fc99e */ W32((u32)(r_esi+0x20u), 0x7f7fc99eu);
    /* 0083cd1d: mov dword ptr [esi + 0x24], 0x7f7fc99e */ W32((u32)(r_esi+0x24u), 0x7f7fc99eu);
    /* 0083cd24: mov dword ptr [esi + 0x28], 0x7f7fc99e */ W32((u32)(r_esi+0x28u), 0x7f7fc99eu);
    /* 0083cd2b: mov dword ptr [esi + 0x2c], 0x7f7fc99e */ W32((u32)(r_esi+0x2cu), 0x7f7fc99eu);
    /* 0083cd32: mov dword ptr [esi + 0x30], 0x7f7fc99e */ W32((u32)(r_esi+0x30u), 0x7f7fc99eu);
    /* 0083cd39: mov dword ptr [esi + 0x34], 0x7f7fc99e */ W32((u32)(r_esi+0x34u), 0x7f7fc99eu);
    /* 0083cd40: mov dword ptr [esi + 0x38], 0x7f7fc99e */ W32((u32)(r_esi+0x38u), 0x7f7fc99eu);
    /* 0083cd47: mov dword ptr [esi + 0x3c], 0x7f7fc99e */ W32((u32)(r_esi+0x3cu), 0x7f7fc99eu);
    /* 0083cd4e: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0083cd51: mov esp, ebp */ r_esp = r_ebp;
    /* 0083cd53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083cd54: mov esp, ebx */ r_esp = r_ebx;
    /* 0083cd56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083cd57: ret  */ FN_RET(0x0083c670); r_esp += 4; return;
L_0083cd58:; BB(0x0083cd58);
    /* 0083cd58: mov esi, dword ptr [0xaf0328] */ r_esi = R32((u32)(0xaf0328u));
    /* 0083cd5e: jmp 0x83c691 */ goto L_0083c691;
}

void f_0083cd64(void) /* sub_83CD64 */
{
    FN_ENTER(0x0083cd64);
    /* 0083cd64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083cd65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083cd66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083cd67: mov esi, edx */ r_esi = r_edx;
    /* 0083cd69: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0083cd6d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0083cd6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083cd71: je 0x83cda5 */ if (fZ) goto L_0083cda5;
L_0083cd73:; BB(0x0083cd73);
    /* 0083cd73: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0083cd77: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083cd79: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0083cd7c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083cd7e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083cd80: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0083cd82: add edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083cd86: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 0083cd8a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083cd8c: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0083cd8f: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083cd91: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
L_0083cd95:; BB(0x0083cd95);
    /* 0083cd95: mov dword ptr [eax + esi], edx */ W32((u32)(r_eax+r_esi), r_edx);
    /* 0083cd98: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083cd9b: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083cd9e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083cda1: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0083cda3: jne 0x83cd95 */ if (!fZ) goto L_0083cd95;
L_0083cda5:; BB(0x0083cda5);
    /* 0083cda5: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0083cda7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083cda8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083cda9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083cdaa: ret 8 */ FN_RET(0x0083cd64); r_esp += 12; return;
}

void f_0083cdb0(void) /* sub_83CDB0 */
{
    FN_ENTER(0x0083cdb0);
    /* 0083cdb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083cdb1: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083cdb4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0083cdb6: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 0083cdb8: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0083cdbb: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0083cdbe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cdc0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0083cdc4: fst dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0));
    /* 0083cdc8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cdca: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0083cdce: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cdd0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083cdd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cdd4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0083cdd6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cdd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083cdd9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0083cddc: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x83cde1u); f_0082dc9c();
    /* 0083cde1: fld dword ptr [0x98af7c] */ FPUSH(R_F32((u32)(0x98af7cu)));
    /* 0083cde7: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083cdeb: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083cdef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cdf1: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0083cdf3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083cdf5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cdf7: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0083cdfb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083cdfd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083cdfe: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0083ce00: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ce02: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083ce07: je 0x83ce0b */ if (fZ) goto L_0083ce0b;
L_0083ce09:; BB(0x0083ce09);
    /* 0083ce09: mov ecx, edx */ r_ecx = r_edx;
L_0083ce0b:; BB(0x0083ce0b);
    /* 0083ce0b: mov edx, 0 */ r_edx = 0x0u;
    /* 0083ce10: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ce11: mov eax, 1 */ r_eax = 0x1u;
    /* 0083ce16: jne 0x83ce1a */ if (!fZ) goto L_0083ce1a;
L_0083ce18:; BB(0x0083ce18);
    /* 0083ce18: mov eax, edx */ r_eax = r_edx;
L_0083ce1a:; BB(0x0083ce1a);
    /* 0083ce1a: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083ce1c: je 0x83ce4d */ if (fZ) goto L_0083ce4d;
L_0083ce1e:; BB(0x0083ce1e);
    /* 0083ce1e: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083ce22: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0083ce26: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ce28: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ce29: jbe 0x83ce37 */ if ((fC||fZ)) goto L_0083ce37;
L_0083ce2b:; BB(0x0083ce2b);
    /* 0083ce2b: fld dword ptr [0x98af78] */ FPUSH(R_F32((u32)(0x98af78u)));
    /* 0083ce31: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0083ce35: jmp 0x83ce41 */ goto L_0083ce41;
L_0083ce37:; BB(0x0083ce37);
    /* 0083ce37: fld dword ptr [0x98af74] */ FPUSH(R_F32((u32)(0x98af74u)));
    /* 0083ce3d: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
L_0083ce41:; BB(0x0083ce41);
    /* 0083ce41: fld dword ptr [0x98af7c] */ FPUSH(R_F32((u32)(0x98af7cu)));
    /* 0083ce47: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0083ce4b: jmp 0x83ce7a */ goto L_0083ce7a;
L_0083ce4d:; BB(0x0083ce4d);
    /* 0083ce4d: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083ce51: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0083ce55: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ce57: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ce58: je 0x83d2c5 */ if (fZ) goto L_0083d2c5;
L_0083ce5e:; BB(0x0083ce5e);
    /* 0083ce5e: fld dword ptr [0x98af78] */ FPUSH(R_F32((u32)(0x98af78u)));
    /* 0083ce64: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0083ce66: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083ce6a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083ce6c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083ce70: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083ce72: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0083ce76: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_0083ce7a:; BB(0x0083ce7a);
    /* 0083ce7a: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083ce7e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0083ce80: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ce82: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083ce86: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0083ce88: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ce89: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0083ce8b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ce8d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0083ce92: je 0x83ce96 */ if (fZ) goto L_0083ce96;
L_0083ce94:; BB(0x0083ce94);
    /* 0083ce94: mov ecx, edx */ r_ecx = r_edx;
L_0083ce96:; BB(0x0083ce96);
    /* 0083ce96: mov edx, 0 */ r_edx = 0x0u;
    /* 0083ce9b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ce9c: mov eax, 1 */ r_eax = 0x1u;
    /* 0083cea1: jne 0x83cea5 */ if (!fZ) goto L_0083cea5;
L_0083cea3:; BB(0x0083cea3);
    /* 0083cea3: mov eax, edx */ r_eax = r_edx;
L_0083cea5:; BB(0x0083cea5);
    /* 0083cea5: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083cea7: je 0x83ced0 */ if (fZ) goto L_0083ced0;
L_0083cea9:; BB(0x0083cea9);
    /* 0083cea9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0083ceab: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083ceaf: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0083ceb3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ceb5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083ceb6: jbe 0x83cec4 */ if ((fC||fZ)) goto L_0083cec4;
L_0083ceb8:; BB(0x0083ceb8);
    /* 0083ceb8: fld dword ptr [0x98af78] */ FPUSH(R_F32((u32)(0x98af78u)));
    /* 0083cebe: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0083cec2: jmp 0x83cee5 */ goto L_0083cee5;
L_0083cec4:; BB(0x0083cec4);
    /* 0083cec4: fld dword ptr [0x98af74] */ FPUSH(R_F32((u32)(0x98af74u)));
    /* 0083ceca: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0083cece: jmp 0x83cee5 */ goto L_0083cee5;
L_0083ced0:; BB(0x0083ced0);
    /* 0083ced0: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083ced4: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0083ced8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083ceda: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083cedb: je 0x83d294 */ if (fZ) goto L_0083d294;
L_0083cee1:; BB(0x0083cee1);
    /* 0083cee1: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_0083cee5:; BB(0x0083cee5);
    /* 0083cee5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083cee7: je 0x83d289 */ if (fZ) goto L_0083d289;
L_0083ceed:; BB(0x0083ceed);
    /* 0083ceed: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083cef1: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083cef5: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083cef9: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083cefd: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 0083cf00: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083cf02: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083cf04: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0083cf07: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0083cf0a: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0083cf0d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cf0f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083cf11: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cf13: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0083cf16: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0083cf19: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083cf1b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cf1d: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0083cf21: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083cf23: fchs  */ ST(0) = -ST(0);
    /* 0083cf25: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0083cf27: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083cf29: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 0083cf2d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cf2f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083cf31: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0083cf34: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0083cf38: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cf3a: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0083cf3d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083cf41: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083cf43: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083cf47: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cf49: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cf4b: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0083cf4e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083cf50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cf52: fstp dword ptr [ebx + 0x14] */ W_F32((u32)(r_ebx+0x14u), ST(0)); FPOP();
    /* 0083cf55: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0083cf58: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0083cf5a: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083cf5c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cf5e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083cf60: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0083cf63: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083cf65: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0083cf68: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cf6a: fstp dword ptr [ebx + 0x18] */ W_F32((u32)(r_ebx+0x18u), ST(0)); FPOP();
    /* 0083cf6d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083cf71: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083cf73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cf75: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083cf77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cf79: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083cf7b: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0083cf7e: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0083cf80: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cf82: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 0083cf85: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cf87: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083cf89: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0083cf8b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0083cf8f: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0083cf91: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083cf95: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083cf97: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0083cf9b: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0083cf9d: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083cf9f: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0083cfa2: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083cfa4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cfa6: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 0083cfaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cfac: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083cfae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cfb0: fchs  */ ST(0) = -ST(0);
    /* 0083cfb2: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0083cfb6: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0083cfb8: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083cfba: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083cfbe: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083cfc2: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083cfc4: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083cfc6: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0083cfc9: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083cfcb: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0083cfcd: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0083cfcf: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083cfd1: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083cfd5: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083cfd7: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083cfd9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cfdb: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0083cfde: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0083cfe0: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0083cfe2: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083cfe6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083cfe8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083cfea: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083cfec: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083cfee: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0083cff1: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0083cff3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083cff5: faddp st(7) */ ST(7) = ST(7) + ST(0); FPOP();
    /* 0083cff7: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0083cffa: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0083cffc: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0083cfff: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d003: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083d005: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0083d007: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083d00b: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0083d00d: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d00f: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0083d011: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0083d013: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d015: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0083d018: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d01a: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083d01c: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083d020: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083d022: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d024: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 0083d027: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d029: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083d02d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0083d02f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d031: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0083d034: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d036: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d038: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0083d03c: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083d03e: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
    /* 0083d041: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d043: fstp dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0)); FPOP();
    /* 0083d046: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083d047: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 0083d04b: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0083d04f: call 0x8451f8 */ r_esp -= 4; W32(r_esp, 0x83d054u); f_008451f8();
    /* 0083d054: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d058: fmul dword ptr [ebx + 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x10u));
    /* 0083d05b: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083d05e: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 0083d060: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d062: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d064: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d066: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0083d069: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 0083d06c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d06e: fst dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0));
    /* 0083d070: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d074: fmul dword ptr [ebx + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x14u));
    /* 0083d077: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083d07a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083d07c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d07e: fst dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0));
    /* 0083d081: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d085: fmul dword ptr [ebx + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x18u));
    /* 0083d088: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083d08b: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083d08d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d08f: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 0083d093: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d095: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d097: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0083d09a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d09c: fst dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0));
    /* 0083d09f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d0a3: fmul dword ptr [ebx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x1cu));
    /* 0083d0a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d0a8: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0083d0ac: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0083d0af: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0083d0b1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d0b3: fst dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0));
    /* 0083d0b6: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d0ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d0bc: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0083d0c0: fld dword ptr [ebx + 0x10] */ FPUSH(R_F32((u32)(r_ebx+0x10u)));
    /* 0083d0c3: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083d0c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d0c8: fchs  */ ST(0) = -ST(0);
    /* 0083d0ca: fmulp st(6) */ ST(6) = ST(6) * ST(0); FPOP();
    /* 0083d0cc: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0083d0ce: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0083d0d1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d0d3: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 0083d0d7: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0083d0da: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d0dc: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083d0df: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d0e3: fld dword ptr [ebx + 0x20] */ FPUSH(R_F32((u32)(r_ebx+0x20u)));
    /* 0083d0e6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d0e8: fchs  */ ST(0) = -ST(0);
    /* 0083d0ea: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083d0ec: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d0ee: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d0f0: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0083d0f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d0f5: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0083d0f9: fstp dword ptr [ebx + 0x14] */ W_F32((u32)(r_ebx+0x14u), ST(0)); FPOP();
    /* 0083d0fc: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083d0ff: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d103: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d107: fchs  */ ST(0) = -ST(0);
    /* 0083d109: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0083d10b: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083d10d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d10f: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 0083d112: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d114: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 0083d118: fstp dword ptr [ebx + 0x18] */ W_F32((u32)(r_ebx+0x18u), ST(0)); FPOP();
    /* 0083d11b: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 0083d11e: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0083d122: fchs  */ ST(0) = -ST(0);
    /* 0083d124: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083d126: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d12a: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083d12c: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d12e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d130: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083d134: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d136: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0083d13a: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083d13e: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083d140: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d142: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083d144: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083d148: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0083d14a: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0083d14c: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 0083d14f: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d151: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083d153: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d155: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0083d157: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d15b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0083d15d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d15f: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0083d161: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0083d165: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d167: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0083d16a: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0083d16e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d170: fmul dword ptr [ebx + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x2cu));
    /* 0083d173: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d175: fmul dword ptr [ebx + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x28u));
    /* 0083d178: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d17c: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083d17e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d180: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 0083d183: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0083d187: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0083d18b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d18d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d18f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d191: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0083d195: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0083d197: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d199: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d19b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d19d: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 0083d1a0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d1a2: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d1a4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0083d1a8: fld dword ptr [ebx + 0x28] */ FPUSH(R_F32((u32)(r_ebx+0x28u)));
    /* 0083d1ab: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d1ad: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d1af: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d1b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d1b5: fmul st(7) */ ST(0) = ST(0) * ST(7);
    /* 0083d1b7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d1b9: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0083d1bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d1bf: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0083d1c1: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 0083d1c4: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0083d1c6: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d1c8: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0083d1cc: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d1ce: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d1d0: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083d1d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d1d6: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0083d1da: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d1dc: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083d1de: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083d1e2: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0083d1e4: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d1e8: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0083d1ec: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d1ee: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d1f0: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0083d1f2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d1f4: fstp dword ptr [ebx + 0x10] */ W_F32((u32)(r_ebx+0x10u), ST(0)); FPOP();
    /* 0083d1f7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083d1fb: fmulp st(5) */ ST(5) = ST(5) * ST(0); FPOP();
    /* 0083d1fd: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d201: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0083d205: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d207: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d209: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0083d20b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0083d20d: fstp dword ptr [ebx + 0x14] */ W_F32((u32)(r_ebx+0x14u), ST(0)); FPOP();
    /* 0083d210: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0083d214: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d216: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 0083d218: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d21a: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d21c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d21e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083d220: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d224: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0083d228: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d22a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d22c: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 0083d22e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d230: fstp dword ptr [ebx + 0x18] */ W_F32((u32)(r_ebx+0x18u), ST(0)); FPOP();
    /* 0083d233: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d237: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 0083d23b: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0083d23d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d23f: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0083d241: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0083d245: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0083d247: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d249: fstp dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0)); FPOP();
    /* 0083d24c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0083d250: fmul st(5), st(0) */ ST(5) = ST(5) * ST(0);
    /* 0083d252: fmul st(6), st(0) */ ST(6) = ST(6) * ST(0);
    /* 0083d254: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0083d256: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0083d258: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d25a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d25c: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0083d260: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0083d262: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0083d264: fstp dword ptr [ebx + 0x20] */ W_F32((u32)(r_ebx+0x20u), ST(0)); FPOP();
    /* 0083d267: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0083d269: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0083d26b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0083d26d: fstp dword ptr [ebx + 0x2c] */ W_F32((u32)(r_ebx+0x2cu), ST(0)); FPOP();
    /* 0083d270: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0083d272: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d274: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0083d278: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0083d27a: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
    /* 0083d27d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0083d27f: fstp dword ptr [ebx + 0x28] */ W_F32((u32)(r_ebx+0x28u), ST(0)); FPOP();
    /* 0083d282: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083d285: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083d286: ret 4 */ FN_RET(0x0083cdb0); r_esp += 8; return;
L_0083d289:; BB(0x0083d289);
    /* 0083d289: mov ebx, dword ptr [0xaf0328] */ r_ebx = R32((u32)(0xaf0328u));
    /* 0083d28f: jmp 0x83ceed */ goto L_0083ceed;
L_0083d294:; BB(0x0083d294);
    /* 0083d294: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0083d298: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d29a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d29b: fld dword ptr [0x98af7c] */ FPUSH(R_F32((u32)(0x98af7cu)));
    /* 0083d2a1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0083d2a5: jbe 0x83d2b6 */ if ((fC||fZ)) goto L_0083d2b6;
L_0083d2a7:; BB(0x0083d2a7);
    /* 0083d2a7: fld dword ptr [0x98af78] */ FPUSH(R_F32((u32)(0x98af78u)));
    /* 0083d2ad: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0083d2b1: jmp 0x83cee5 */ goto L_0083cee5;
L_0083d2b6:; BB(0x0083d2b6);
    /* 0083d2b6: fld dword ptr [0x98af74] */ FPUSH(R_F32((u32)(0x98af74u)));
    /* 0083d2bc: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0083d2c0: jmp 0x83cee5 */ goto L_0083cee5;
L_0083d2c5:; BB(0x0083d2c5);
    /* 0083d2c5: fld dword ptr [0x98af7c] */ FPUSH(R_F32((u32)(0x98af7cu)));
    /* 0083d2cb: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0083d2cf: fcomp dword ptr [esp + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x1cu))); FPOP();
    /* 0083d2d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0083d2d5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 0083d2d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0083d2da: jbe 0x83d2eb */ if ((fC||fZ)) goto L_0083d2eb;
L_0083d2dc:; BB(0x0083d2dc);
    /* 0083d2dc: fld dword ptr [0x98af78] */ FPUSH(R_F32((u32)(0x98af78u)));
    /* 0083d2e2: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0083d2e6: jmp 0x83ce7a */ goto L_0083ce7a;
L_0083d2eb:; BB(0x0083d2eb);
    /* 0083d2eb: fld dword ptr [0x98af74] */ FPUSH(R_F32((u32)(0x98af74u)));
    /* 0083d2f1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0083d2f5: jmp 0x83ce7a */ goto L_0083ce7a;
}

