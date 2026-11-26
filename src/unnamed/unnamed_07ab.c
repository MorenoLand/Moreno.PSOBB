#include "protos.h"

void f_007ab044(void) /* sub_7AB044 */
{
    FN_ENTER(0x007ab044);
    /* 007ab044: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab045: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab047: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab04a: mov eax, ecx */ r_eax = r_ecx;
    /* 007ab04c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007ab04f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab052: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab054: call 0x7a9a10 */ r_esp -= 4; W32(r_esp, 0x7ab059u); f_007a9a10();
    /* 007ab059: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007ab05c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ab05d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ab060: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ab063: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x7ab068u); f_0082e1e8();
    /* 007ab068: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab069: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab06a: ret  */ FN_RET(0x007ab044); r_esp += 4; return;
}

void f_007ab06c(void) /* sub_7AB06C */
{
    FN_ENTER(0x007ab06c);
    /* 007ab06c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab06d: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab06f: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab072: mov eax, ecx */ r_eax = r_ecx;
    /* 007ab074: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ab077: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab07a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab07d: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007ab080: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 007ab083: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007ab085: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 007ab088: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab08b: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 007ab08e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007ab091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 007ab093: je 0x7ab0ab */ if (fZ) goto L_007ab0ab;
L_007ab095:; BB(0x007ab095);
    /* 007ab095: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007ab098: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ab09b: je 0x7ab120 */ if (fZ) goto L_007ab120;
L_007ab0a1:; BB(0x007ab0a1);
    /* 007ab0a1: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007ab0a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ab0a7: je 0x7ab0d8 */ if (fZ) goto L_007ab0d8;
L_007ab0a9:; BB(0x007ab0a9);
    /* 007ab0a9: jmp 0x7ab120 */ goto L_007ab120;
L_007ab0ab:; BB(0x007ab0ab);
    /* 007ab0ab: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0ae: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab0b1: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab0b4: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ab0b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab0b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab0b9: jp 0x7ab0cd */ if (fP) goto L_007ab0cd;
L_007ab0bb:; BB(0x007ab0bb);
    /* 007ab0bb: jbe 0x7ab0bf */ if ((fC||fZ)) goto L_007ab0bf;
L_007ab0bd:; BB(0x007ab0bd);
    /* 007ab0bd: jmp 0x7ab0cd */ goto L_007ab0cd;
L_007ab0bf:; BB(0x007ab0bf);
    /* 007ab0bf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0c2: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab0c5: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab0c8: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab0ca: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
L_007ab0cd:; BB(0x007ab0cd);
    /* 007ab0cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0d0: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab0d3: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 007ab0d6: jmp 0x7ab120 */ goto L_007ab120;
L_007ab0d8:; BB(0x007ab0d8);
    /* 007ab0d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0db: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab0de: fld dword ptr [0x97d9b0] */ FPUSH(R_F32((u32)(0x97d9b0u)));
    /* 007ab0e4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab0e6: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab0e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab0eb: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007ab0ee: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007ab0f1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ab0f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab0f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab0f6: jp 0x7ab117 */ if (fP) goto L_007ab117;
L_007ab0f8:; BB(0x007ab0f8);
    /* 007ab0f8: jbe 0x7ab0fc */ if ((fC||fZ)) goto L_007ab0fc;
L_007ab0fa:; BB(0x007ab0fa);
    /* 007ab0fa: jmp 0x7ab117 */ goto L_007ab117;
L_007ab0fc:; BB(0x007ab0fc);
    /* 007ab0fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0ff: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab102: fld dword ptr [0x97d9b0] */ FPUSH(R_F32((u32)(0x97d9b0u)));
    /* 007ab108: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab10a: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 007ab10d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab110: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab112: call 0x7a9a4c */ r_esp -= 4; W32(r_esp, 0x7ab117u); f_007a9a4c();
L_007ab117:; BB(0x007ab117);
    /* 007ab117: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab11a: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab11d: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_007ab120:; BB(0x007ab120);
    /* 007ab120: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab121: ret  */ FN_RET(0x007ab06c); r_esp += 4; return;
}

void f_007ab0d2(void)
{
    FN_ENTER(0x007ab0d2);
    /* 007ab0d2: call 0xeb8709b0 */ r_esp -= 4; W32(r_esp, 0x7ab0d7u); f_eb8709b0();
    /* 007ab0d7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ab0d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0db: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab0de: fld dword ptr [0x97d9b0] */ FPUSH(R_F32((u32)(0x97d9b0u)));
    /* 007ab0e4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab0e6: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab0e9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab0eb: fstp dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 007ab0ee: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 007ab0f1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ab0f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab0f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab0f6: jp 0x7ab117 */ if (fP) goto L_007ab117;
L_007ab0f8:; BB(0x007ab0f8);
    /* 007ab0f8: jbe 0x7ab0fc */ if ((fC||fZ)) goto L_007ab0fc;
L_007ab0fa:; BB(0x007ab0fa);
    /* 007ab0fa: jmp 0x7ab117 */ goto L_007ab117;
L_007ab0fc:; BB(0x007ab0fc);
    /* 007ab0fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab0ff: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab102: fld dword ptr [0x97d9b0] */ FPUSH(R_F32((u32)(0x97d9b0u)));
    /* 007ab108: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab10a: fstp dword ptr [ebp - 0x18] */ W_F32((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 007ab10d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab110: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab112: call 0x7a9a4c */ r_esp -= 4; W32(r_esp, 0x7ab117u); f_007a9a4c();
L_007ab117:; BB(0x007ab117);
    /* 007ab117: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab11a: fld dword ptr [ebp - 0x18] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe8u)));
    /* 007ab11d: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 007ab120: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab121: ret  */ FN_RET(0x007ab0d2); r_esp += 4; return;
}

void f_007ab124(void) /* sub_7AB124 */
{
    FN_ENTER(0x007ab124);
    /* 007ab124: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab125: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab127: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab12a: mov eax, ecx */ r_eax = r_ecx;
    /* 007ab12c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 007ab12f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab132: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab135: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007ab138: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 007ab13b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab13d: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 007ab140: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab143: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 007ab146: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 007ab149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fO = 0; }
    /* 007ab14b: je 0x7ab15f */ if (fZ) goto L_007ab15f;
L_007ab14d:; BB(0x007ab14d);
    /* 007ab14d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ab150: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ab153: je 0x7ab1bc */ if (fZ) goto L_007ab1bc;
L_007ab155:; BB(0x007ab155);
    /* 007ab155: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 007ab158: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007ab15b: je 0x7ab18c */ if (fZ) goto L_007ab18c;
L_007ab15d:; BB(0x007ab15d);
    /* 007ab15d: jmp 0x7ab1bc */ goto L_007ab1bc;
L_007ab15f:; BB(0x007ab15f);
    /* 007ab15f: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 007ab162: fld dword ptr [0x97d9b4] */ FPUSH(R_F32((u32)(0x97d9b4u)));
    /* 007ab168: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ab16a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab16c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab16d: jp 0x7ab181 */ if (fP) goto L_007ab181;
L_007ab16f:; BB(0x007ab16f);
    /* 007ab16f: ja 0x7ab173 */ if ((!fC&&!fZ)) goto L_007ab173;
L_007ab171:; BB(0x007ab171);
    /* 007ab171: jmp 0x7ab181 */ goto L_007ab181;
L_007ab173:; BB(0x007ab173);
    /* 007ab173: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab176: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 007ab179: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 007ab17c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007ab17e: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
L_007ab181:; BB(0x007ab181);
    /* 007ab181: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab184: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 007ab187: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
    /* 007ab18a: jmp 0x7ab1bc */ goto L_007ab1bc;
L_007ab18c:; BB(0x007ab18c);
    /* 007ab18c: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 007ab18f: fld dword ptr [0x97d9b4] */ FPUSH(R_F32((u32)(0x97d9b4u)));
    /* 007ab195: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007ab197: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab199: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab19a: jp 0x7ab1b3 */ if (fP) goto L_007ab1b3;
L_007ab19c:; BB(0x007ab19c);
    /* 007ab19c: jae 0x7ab1a0 */ if (!fC) goto L_007ab1a0;
L_007ab19e:; BB(0x007ab19e);
    /* 007ab19e: jmp 0x7ab1b3 */ goto L_007ab1b3;
L_007ab1a0:; BB(0x007ab1a0);
    /* 007ab1a0: fld dword ptr [0x97d9b4] */ FPUSH(R_F32((u32)(0x97d9b4u)));
    /* 007ab1a6: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 007ab1a9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab1ac: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab1ae: call 0x7a9a4c */ r_esp -= 4; W32(r_esp, 0x7ab1b3u); f_007a9a4c();
L_007ab1b3:; BB(0x007ab1b3);
    /* 007ab1b3: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 007ab1b6: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 007ab1b9: fstp dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0)); FPOP();
L_007ab1bc:; BB(0x007ab1bc);
    /* 007ab1bc: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab1bd: ret  */ FN_RET(0x007ab124); r_esp += 4; return;
}

void f_007ab1c0(void) /* sub_7AB1C0 */
{
    FN_ENTER(0x007ab1c0);
    /* 007ab1c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab1c1: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab1c3: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab1c6: mov eax, ecx */ r_eax = r_ecx;
    /* 007ab1c8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007ab1cb: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ab1ce: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab1d0: call 0x7a9a10 */ r_esp -= 4; W32(r_esp, 0x7ab1d5u); f_007a9a10();
    /* 007ab1d5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ab1d8: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ab1db: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab1dd: call 0x7a9a24 */ r_esp -= 4; W32(r_esp, 0x7ab1e2u); f_007a9a24();
    /* 007ab1e2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 007ab1e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007ab1e8: mov ecx, eax */ r_ecx = r_eax;
    /* 007ab1ea: call 0x7a9a38 */ r_esp -= 4; W32(r_esp, 0x7ab1efu); f_007a9a38();
    /* 007ab1ef: fstp xword ptr [ebp - 0xc] */ W_F80((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 007ab1f2: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ab1f5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab1f8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007ab1fb: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 007ab1fe: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007ab202: fld xword ptr [ebp - 0xc] */ FPUSH(R_F80((u32)(r_ebp+0xfffffff4u)));
    /* 007ab205: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ab209: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x7ab20eu); f_0083046c();
    /* 007ab20e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ab211: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab212: ret  */ FN_RET(0x007ab1c0); r_esp += 4; return;
}

void f_007ab214(void)
{
    FN_ENTER(0x007ab214);
    /* 007ab214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab215: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab217: fld dword ptr [0x97d9b8] */ FPUSH(R_F32((u32)(0x97d9b8u)));
    /* 007ab21d: fstp dword ptr [0xaab520] */ W_F32((u32)(0xaab520u), ST(0)); FPOP();
    /* 007ab223: fld dword ptr [0xaab520] */ FPUSH(R_F32((u32)(0xaab520u)));
    /* 007ab229: fld dword ptr [0x97d9c0] */ FPUSH(R_F32((u32)(0x97d9c0u)));
    /* 007ab22f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ab231: fstp dword ptr [0xaab524] */ W_F32((u32)(0xaab524u), ST(0)); FPOP();
    /* 007ab237: fld dword ptr [0xaab520] */ FPUSH(R_F32((u32)(0xaab520u)));
    /* 007ab23d: fld dword ptr [0x97d9bc] */ FPUSH(R_F32((u32)(0x97d9bcu)));
    /* 007ab243: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ab245: fstp dword ptr [0xaab528] */ W_F32((u32)(0xaab528u), ST(0)); FPOP();
    /* 007ab24b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 007ab24c: ret  */ FN_RET(0x007ab214); r_esp += 4; return;
}

void f_007ab250(void) /* sub_7AB250 */
{
    FN_ENTER(0x007ab250);
    /* 007ab250: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab251: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ab253: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ab255: call 0x7ab274 */ r_esp -= 4; W32(r_esp, 0x7ab25au); f_007ab274();
    /* 007ab25a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007ab25e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ab260: jne 0x7ab266 */ if (!fZ) goto L_007ab266;
L_007ab262:; BB(0x007ab262);
    /* 007ab262: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ab263: ret 4 */ FN_RET(0x007ab250); r_esp += 8; return;
L_007ab266:; BB(0x007ab266);
    /* 007ab266: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab267: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7ab26cu); f_005c2f74();
    /* 007ab26c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab26d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ab26e: ret 4 */ FN_RET(0x007ab250); r_esp += 8; return;
}

void f_007ab274(void) /* sub_7AB274 */
{
    FN_ENTER(0x007ab274);
    /* 007ab274: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab275: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab277: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ab279: push 0x8f5d20 */ { u32 v = 0x8f5d20u; r_esp -= 4; W32(r_esp, v); }
    /* 007ab27e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ab284: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab285: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ab28c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab28f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ab292: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007ab295: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007ab298: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007ab29b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007ab29e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ab2a5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ab2a8: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ab2ab: mov dword ptr [eax], 0xb46358 */ W32((u32)(r_eax), 0xb46358u);
    /* 007ab2b1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7ab2b6u); f_00857e98();
    /* 007ab2b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab2b7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007ab2be: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ab2c1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7ab2c6u); f_008171e8();
    /* 007ab2c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ab2c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007ab2d0: mov esp, ebp */ r_esp = r_ebp;
    /* 007ab2d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ab2d3: ret  */ FN_RET(0x007ab274); r_esp += 4; return;
}

void f_007ab2d4(void) /* sub_7AB2D4 */
{
    FN_ENTER(0x007ab2d4);
    /* 007ab2d4: mov ecx, dword ptr [0xaab548] */ r_ecx = R32((u32)(0xaab548u));
    /* 007ab2da: cmp ecx, dword ptr [0xaab54c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab54cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ab2e0: jge 0x7ab2f9 */ if ((fS==fO)) goto L_007ab2f9;
L_007ab2e2:; BB(0x007ab2e2);
    /* 007ab2e2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2e4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2e6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2e8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2ea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2ec: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2ee: add ecx, dword ptr [0xaab550] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xaab550u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab2f4: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x7ab2f9u); f_00831650();
L_007ab2f9:; BB(0x007ab2f9);
    /* 007ab2f9: mov eax, dword ptr [0xaab554] */ r_eax = R32((u32)(0xaab554u));
    /* 007ab2fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab300: je 0x7ab309 */ if (fZ) goto L_007ab309;
L_007ab302:; BB(0x007ab302);
    /* 007ab302: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ab306: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7ab308u); call_ind(t); }
    /* 007ab308: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007ab309:; BB(0x007ab309);
    /* 007ab309: add dword ptr [0xaab548], 1 */ { u32 ad = (u32)(0xaab548u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ab310: ret  */ FN_RET(0x007ab2d4); r_esp += 4; return;
}

void f_007ab314(void) /* sub_7AB314 */
{
    FN_ENTER(0x007ab314);
    /* 007ab314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab315: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab317: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ab319: push 0x8f5d3c */ { u32 v = 0x8f5d3cu; r_esp -= 4; W32(r_esp, v); }
    /* 007ab31e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ab324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab325: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ab32c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab32f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ab332: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007ab335: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007ab338: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007ab33b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007ab33e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ab341: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007ab344: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007ab347: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7ab34cu); f_008193cc();
    /* 007ab34c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007ab353: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007ab356: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007ab359: mov dword ptr [edx], 0xb46358 */ W32((u32)(r_edx), 0xb46358u);
    /* 007ab35f: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 007ab362: mov dword ptr [edx + 0x24], 0 */ W32((u32)(r_edx+0x24u), 0x0u);
    /* 007ab369: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab36a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ab36c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 007ab36f: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007ab372: call 0x782a54 */ r_esp -= 4; W32(r_esp, 0x7ab377u); f_00782a54();
    /* 007ab377: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007ab37a: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 007ab37d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ab37f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ab381: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ab383: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ab385: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ab387: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ab389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab38a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7ab38fu); f_008581c5();
    /* 007ab38f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ab392: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007ab395: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 007ab398: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ab39a: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 007ab39d: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 007ab3a0: mov eax, ecx */ r_eax = r_ecx;
    /* 007ab3a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ab3a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007ab3ac: mov esp, ebp */ r_esp = r_ebp;
    /* 007ab3ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ab3af: ret 8 */ FN_RET(0x007ab314); r_esp += 12; return;
}

void f_007ab3b4(void) /* sub_7AB3B4 */
{
    FN_ENTER(0x007ab3b4);
    /* 007ab3b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ab3b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ab3b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab3b7: mov edi, ecx */ r_edi = r_ecx;
    /* 007ab3b9: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007ab3bd: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 007ab3c1: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 007ab3c4: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 007ab3c7: mov dword ptr [0xaab548], 0 */ W32((u32)(0xaab548u), 0x0u);
    /* 007ab3d1: mov dword ptr [0xaab54c], eax */ W32((u32)(0xaab54cu), r_eax);
    /* 007ab3d6: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 007ab3d9: mov dword ptr [0xaab550], edx */ W32((u32)(0xaab550u), r_edx);
    /* 007ab3df: mov dword ptr [0xaab554], eax */ W32((u32)(0xaab554u), r_eax);
    /* 007ab3e4: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 007ab3e7: mov dword ptr [edi + 0x24], ebx */ W32((u32)(r_edi+0x24u), r_ebx);
    /* 007ab3ea: mov ecx, 0x7ab2d4 */ r_ecx = 0x7ab2d4u;
    /* 007ab3ef: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7ab3f4u); f_0082fac4();
    /* 007ab3f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab3f5: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 007ab3f8: mov edx, esi */ r_edx = r_esi;
    /* 007ab3fa: call 0x830590 */ r_esp -= 4; W32(r_esp, 0x7ab3ffu); f_00830590();
    /* 007ab3ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab401: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x7ab406u); f_0082fac4();
    /* 007ab406: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ab407: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ab408: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ab409: ret 8 */ FN_RET(0x007ab3b4); r_esp += 12; return;
}

void f_007ab40c(void) /* sub_7AB40C */
{
    FN_ENTER(0x007ab40c);
    /* 007ab40c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007ab410: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 007ab413: ret 4 */ FN_RET(0x007ab40c); r_esp += 8; return;
}

void f_007ab418(void) /* sub_7AB418 */
{
    FN_ENTER(0x007ab418);
    /* 007ab418: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab419: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007ab41b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007ab41d: call 0x7ab43c */ r_esp -= 4; W32(r_esp, 0x7ab422u); f_007ab43c();
    /* 007ab422: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007ab426: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007ab428: jne 0x7ab42e */ if (!fZ) goto L_007ab42e;
L_007ab42a:; BB(0x007ab42a);
    /* 007ab42a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ab42b: ret 4 */ FN_RET(0x007ab418); r_esp += 8; return;
L_007ab42e:; BB(0x007ab42e);
    /* 007ab42e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab42f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7ab434u); f_005c2f74();
    /* 007ab434: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab435: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ab436: ret 4 */ FN_RET(0x007ab418); r_esp += 8; return;
}

void f_007ab43c(void) /* sub_7AB43C */
{
    FN_ENTER(0x007ab43c);
    /* 007ab43c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab43d: mov ebp, esp */ r_ebp = r_esp;
    /* 007ab43f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ab441: push 0x8f5d58 */ { u32 v = 0x8f5d58u; r_esp -= 4; W32(r_esp, v); }
    /* 007ab446: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007ab44c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab44d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007ab454: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab457: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007ab45a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007ab45d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007ab460: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007ab463: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007ab466: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007ab469: mov dword ptr [ecx], 0xb463b8 */ W32((u32)(r_ecx), 0xb463b8u);
    /* 007ab46f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007ab476: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7ab47bu); f_008171e8();
    /* 007ab47b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007ab47e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007ab485: mov esp, ebp */ r_esp = r_ebp;
    /* 007ab487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ab488: ret  */ FN_RET(0x007ab43c); r_esp += 4; return;
}

void f_007ab48c(void) /* sub_7AB48C */
{
    FN_ENTER(0x007ab48c);
    /* 007ab48c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab48d: mov ecx, dword ptr [0xaab918] */ r_ecx = R32((u32)(0xaab918u));
    /* 007ab493: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab495: je 0x7ab4a9 */ if (fZ) goto L_007ab4a9;
L_007ab497:; BB(0x007ab497);
    /* 007ab497: je 0x7ab49f */ if (fZ) goto L_007ab49f;
L_007ab499:; BB(0x007ab499);
    /* 007ab499: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007ab49b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007ab49d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7ab49fu); call_ind(t); }
L_007ab49f:; BB(0x007ab49f);
    /* 007ab49f: mov dword ptr [0xaab918], 0 */ W32((u32)(0xaab918u), 0x0u);
L_007ab4a9:; BB(0x007ab4a9);
    /* 007ab4a9: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007ab4ae: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x7ab4b3u); f_00829de0();
    /* 007ab4b3: mov eax, dword ptr [0xaab920] */ r_eax = R32((u32)(0xaab920u));
    /* 007ab4b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab4ba: je 0x7ab4cd */ if (fZ) goto L_007ab4cd;
L_007ab4bc:; BB(0x007ab4bc);
    /* 007ab4bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab4bd: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7ab4c2u); f_00857e98();
    /* 007ab4c2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab4c3: mov dword ptr [0xaab920], 0 */ W32((u32)(0xaab920u), 0x0u);
L_007ab4cd:; BB(0x007ab4cd);
    /* 007ab4cd: mov eax, dword ptr [0xaab94c] */ r_eax = R32((u32)(0xaab94cu));
    /* 007ab4d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab4d4: je 0x7ab4e7 */ if (fZ) goto L_007ab4e7;
L_007ab4d6:; BB(0x007ab4d6);
    /* 007ab4d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab4d7: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7ab4dcu); f_00857e98();
    /* 007ab4dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab4dd: mov dword ptr [0xaab94c], 0 */ W32((u32)(0xaab94cu), 0x0u);
L_007ab4e7:; BB(0x007ab4e7);
    /* 007ab4e7: mov eax, dword ptr [0xaab95c] */ r_eax = R32((u32)(0xaab95cu));
    /* 007ab4ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab4ee: je 0x7ab501 */ if (fZ) goto L_007ab501;
L_007ab4f0:; BB(0x007ab4f0);
    /* 007ab4f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab4f1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x7ab4f6u); f_0082e960();
    /* 007ab4f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab4f7: mov dword ptr [0xaab95c], 0 */ W32((u32)(0xaab95cu), 0x0u);
L_007ab501:; BB(0x007ab501);
    /* 007ab501: mov eax, 8 */ r_eax = 0x8u;
    /* 007ab506: mov ebx, eax */ r_ebx = r_eax;
L_007ab508:; BB(0x007ab508);
    /* 007ab508: mov edx, dword ptr [ebx + 0xaab950] */ r_edx = R32((u32)(r_ebx+0xaab950u));
    /* 007ab50e: add ebx, -4 */ {  u32 a = r_ebx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ab511: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab513: je 0x7ab526 */ if (fZ) goto L_007ab526;
L_007ab515:; BB(0x007ab515);
    /* 007ab515: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab516: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7ab51bu); f_00857e98();
    /* 007ab51b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007ab51c: mov dword ptr [ebx + 0xaab954], 0 */ W32((u32)(r_ebx+0xaab954u), 0x0u);
L_007ab526:; BB(0x007ab526);
    /* 007ab526: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007ab528: jge 0x7ab508 */ if ((fS==fO)) goto L_007ab508;
L_007ab52a:; BB(0x007ab52a);
    /* 007ab52a: call 0x8440d4 */ r_esp -= 4; W32(r_esp, 0x7ab52fu); f_008440d4();
    /* 007ab52f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007ab530: ret  */ FN_RET(0x007ab48c); r_esp += 4; return;
}

void f_007ab534(void) /* sub_7AB534 */
{
    FN_ENTER(0x007ab534);
    /* 007ab534: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ab536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab537: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007ab538: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ab53d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007ab53f: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ab543: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ab547: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007ab54b: call 0x7ab554 */ r_esp -= 4; W32(r_esp, 0x7ab550u); f_007ab554();
    /* 007ab550: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ab553: ret  */ FN_RET(0x007ab534); r_esp += 4; return;
}

void f_007ab554(void) /* sub_7AB554 */
{
    FN_ENTER(0x007ab554);
    /* 007ab554: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ab555: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ab556: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007ab557: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007ab558: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007ab55b: fld dword ptr [esp + 0x84] */ FPUSH(R_F32((u32)(r_esp+0x84u)));
    /* 007ab562: fld dword ptr [esp + 0x88] */ FPUSH(R_F32((u32)(r_esp+0x88u)));
    /* 007ab569: mov ebx, dword ptr [esp + 0x8c] */ r_ebx = R32((u32)(r_esp+0x8cu));
    /* 007ab570: mov edi, dword ptr [esp + 0x94] */ r_edi = R32((u32)(r_esp+0x94u));
    /* 007ab577: mov esi, dword ptr [esp + 0x98] */ r_esi = R32((u32)(r_esp+0x98u));
    /* 007ab57e: mov ebp, dword ptr [esp + 0x9c] */ r_ebp = R32((u32)(r_esp+0x9cu));
    /* 007ab585: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab587: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007ab58b: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007ab58f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007ab597: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007ab59a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab59c: je 0x7aba30 */ if (fZ) goto L_007aba30;
L_007ab5a2:; BB(0x007ab5a2);
    /* 007ab5a2: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 007ab5a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab5a9: jne 0x7ab5b3 */ if (!fZ) goto L_007ab5b3;
L_007ab5ab:; BB(0x007ab5ab);
    /* 007ab5ab: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
L_007ab5b3:; BB(0x007ab5b3);
    /* 007ab5b3: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 007ab5b7: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007ab5bb: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7ab5c0u); f_0082dbac();
    /* 007ab5c0: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x7ab5c5u); f_007a9044();
    /* 007ab5c5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007ab5ca: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x7ab5cfu); f_0082bb30();
    /* 007ab5cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007ab5d1: call 0x7aba94 */ r_esp -= 4; W32(r_esp, 0x7ab5d6u); f_007aba94();
    /* 007ab5d6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007ab5d8: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 007ab5dd: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7ab5e2u); f_0082bb60();
    /* 007ab5e2: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007ab5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab5e7: je 0x7aba26 */ if (fZ) goto L_007aba26;
L_007ab5ed:; BB(0x007ab5ed);
    /* 007ab5ed: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 007ab5f1: and esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007ab5f4: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
L_007ab5f8:; BB(0x007ab5f8);
    /* 007ab5f8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab5fa: jne 0x7ab647 */ if (!fZ) goto L_007ab647;
L_007ab5fc:; BB(0x007ab5fc);
    /* 007ab5fc: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007ab5ff: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab602: jne 0x7ab6b2 */ if (!fZ) goto L_007ab6b2;
L_007ab608:; BB(0x007ab608);
    /* 007ab608: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 007ab60c: lea edx, [ebx + 2] */ r_edx = (u32)(r_ebx+0x2u);
    /* 007ab60f: cmp eax, 0x4a */ {  u32 a = r_eax; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab612: je 0x7ab63a */ if (fZ) goto L_007ab63a;
L_007ab614:; BB(0x007ab614);
    /* 007ab614: lea ebx, [edx + 2] */ r_ebx = (u32)(r_edx+0x2u);
    /* 007ab617: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab61a: jne 0x7ab626 */ if (!fZ) goto L_007ab626;
L_007ab61c:; BB(0x007ab61c);
    /* 007ab61c: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007ab624: jmp 0x7ab5fc */ goto L_007ab5fc;
L_007ab626:; BB(0x007ab626);
    /* 007ab626: cmp eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab629: jne 0x7ab630 */ if (!fZ) goto L_007ab630;
L_007ab62b:; BB(0x007ab62b);
    /* 007ab62b: lea ebx, [edx + 4] */ r_ebx = (u32)(r_edx+0x4u);
    /* 007ab62e: jmp 0x7ab5fc */ goto L_007ab5fc;
L_007ab630:; BB(0x007ab630);
    /* 007ab630: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007ab638: jmp 0x7ab5fc */ goto L_007ab5fc;
L_007ab63a:; BB(0x007ab63a);
    /* 007ab63a: lea ebx, [edx + 2] */ r_ebx = (u32)(r_edx+0x2u);
    /* 007ab63d: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 007ab645: jmp 0x7ab5fc */ goto L_007ab5fc;
L_007ab647:; BB(0x007ab647);
    /* 007ab647: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007ab64a: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab64d: jne 0x7ab6b2 */ if (!fZ) goto L_007ab6b2;
L_007ab64f:; BB(0x007ab64f);
    /* 007ab64f: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 007ab653: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 007ab656: cmp edx, 0x4a */ {  u32 a = r_edx; u32 b = 0x4au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab659: je 0x7ab6a5 */ if (fZ) goto L_007ab6a5;
L_007ab65b:; BB(0x007ab65b);
    /* 007ab65b: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
    /* 007ab65e: cmp edx, 0x45 */ {  u32 a = r_edx; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab661: jne 0x7ab66d */ if (!fZ) goto L_007ab66d;
L_007ab663:; BB(0x007ab663);
    /* 007ab663: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007ab66b: jmp 0x7ab647 */ goto L_007ab647;
L_007ab66d:; BB(0x007ab66d);
    /* 007ab66d: cmp edx, 0x43 */ {  u32 a = r_edx; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab670: jne 0x7ab69b */ if (!fZ) goto L_007ab69b;
L_007ab672:; BB(0x007ab672);
    /* 007ab672: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 007ab675: cmp edx, 0x47 */ {  u32 a = r_edx; u32 b = 0x47u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab678: je 0x7aba38 */ if (fZ) goto L_007aba38;
L_007ab67e:; BB(0x007ab67e);
    /* 007ab67e: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ab681: jl 0x7ab696 */ if ((fS!=fO)) goto L_007ab696;
L_007ab683:; BB(0x007ab683);
    /* 007ab683: cmp edx, 0x39 */ {  u32 a = r_edx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ab686: jg 0x7ab696 */ if ((!fZ&&fS==fO)) goto L_007ab696;
L_007ab688:; BB(0x007ab688);
    /* 007ab688: mov edx, dword ptr [edx*4 + 0x97da10] */ r_edx = R32((u32)(r_edx*4+0x97da10u));
    /* 007ab68f: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
L_007ab696:; BB(0x007ab696);
    /* 007ab696: lea ebx, [eax + 4] */ r_ebx = (u32)(r_eax+0x4u);
    /* 007ab699: jmp 0x7ab647 */ goto L_007ab647;
L_007ab69b:; BB(0x007ab69b);
    /* 007ab69b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007ab6a3: jmp 0x7ab647 */ goto L_007ab647;
L_007ab6a5:; BB(0x007ab6a5);
    /* 007ab6a5: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
    /* 007ab6a8: mov dword ptr [esp + 4], 1 */ W32((u32)(r_esp+0x4u), 0x1u);
    /* 007ab6b0: jmp 0x7ab647 */ goto L_007ab647;
L_007ab6b2:; BB(0x007ab6b2);
    /* 007ab6b2: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007ab6b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab6b7: je 0x7aba1e */ if (fZ) goto L_007aba1e;
L_007ab6bd:; BB(0x007ab6bd);
    /* 007ab6bd: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007ab6c0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab6c3: je 0x7aba58 */ if (fZ) goto L_007aba58;
L_007ab6c9:; BB(0x007ab6c9);
    /* 007ab6c9: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab6cc: jne 0x7ab6e4 */ if (!fZ) goto L_007ab6e4;
L_007ab6ce:; BB(0x007ab6ce);
    /* 007ab6ce: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab6d2: fadd dword ptr [0x97db7c] */ ST(0) = ST(0) + R_F32((u32)(0x97db7cu));
    /* 007ab6d8: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007ab6db: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007ab6df: jmp 0x7aba1e */ goto L_007aba1e;
L_007ab6e4:; BB(0x007ab6e4);
    /* 007ab6e4: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 007ab6eb: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 007ab6ef: call 0x7abaa5 */ r_esp -= 4; W32(r_esp, 0x7ab6f4u); f_007abaa5();
    /* 007ab6f4: mov esi, eax */ r_esi = r_eax;
    /* 007ab6f6: movzx edx, byte ptr [0xaab91c] */ r_edx = (u32)R8((u32)(0xaab91cu));
    /* 007ab6fd: movzx ecx, byte ptr [esi + 4] */ r_ecx = (u32)R8((u32)(r_esi+0x4u));
    /* 007ab701: mov byte ptr [esi + 3], dl */ W8((u32)(r_esi+0x3u), (u8)r_edx);
    /* 007ab704: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007ab708: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x7ab70du); f_0082bb60();
    /* 007ab70d: fld dword ptr [0x97db88] */ FPUSH(R_F32((u32)(0x97db88u)));
    /* 007ab713: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab717: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab71b: fadd dword ptr [0x97db84] */ ST(0) = ST(0) + R_F32((u32)(0x97db84u));
    /* 007ab721: movzx ecx, byte ptr [esi + 5] */ r_ecx = (u32)R8((u32)(r_esi+0x5u));
    /* 007ab725: fld dword ptr [0x97db80] */ FPUSH(R_F32((u32)(0x97db80u)));
    /* 007ab72b: mov edx, dword ptr [0xaab914] */ r_edx = R32((u32)(0xaab914u));
    /* 007ab731: movzx edi, byte ptr [esi + 6] */ r_edi = (u32)R8((u32)(r_esi+0x6u));
    /* 007ab735: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 007ab739: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 007ab73d: fild dword ptr [esp + 0x28] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x28u)));
    /* 007ab741: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 007ab743: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 007ab747: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 007ab74b: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 007ab74d: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007ab74f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ab751: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 007ab755: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 007ab759: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 007ab75b: fdivrp st(6) */ ST(6) = ST(0) / ST(6); FPOP();
    /* 007ab75d: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007ab75f: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007ab763: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007ab765: je 0x7ab9cd */ if (fZ) goto L_007ab9cd;
L_007ab76b:; BB(0x007ab76b);
    /* 007ab76b: fld dword ptr [0xaab910] */ FPUSH(R_F32((u32)(0xaab910u)));
    /* 007ab771: mov edx, dword ptr [0xaab910] */ r_edx = R32((u32)(0xaab910u));
    /* 007ab777: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab77b: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007ab77d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab77f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab780: ja 0x7ab7c1 */ if ((!fC&&!fZ)) goto L_007ab7c1;
L_007ab782:; BB(0x007ab782);
    /* 007ab782: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ab784: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab788: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab78c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab78e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab792: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007ab794: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab798: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab79a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab79e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab7a0: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab7a4: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab7a8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab7aa: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ab7ae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab7b0: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007ab7b4: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007ab7b8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ab7bc: jmp 0x7aba13 */ goto L_007aba13;
L_007ab7c1:; BB(0x007ab7c1);
    /* 007ab7c1: fld dword ptr [0xaab908] */ FPUSH(R_F32((u32)(0xaab908u)));
    /* 007ab7c7: mov ecx, dword ptr [0xaab908] */ r_ecx = R32((u32)(0xaab908u));
    /* 007ab7cd: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab7d1: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007ab7d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab7d5: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007ab7d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab7da: jb 0x7ab81b */ if (fC) goto L_007ab81b;
L_007ab7dc:; BB(0x007ab7dc);
    /* 007ab7dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ab7de: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab7e2: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab7e6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab7e8: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab7ec: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007ab7ee: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab7f2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab7f4: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab7f8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab7fa: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab7fe: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab802: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab804: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ab808: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab80a: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007ab80e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007ab812: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ab816: jmp 0x7aba13 */ goto L_007aba13;
L_007ab81b:; BB(0x007ab81b);
    /* 007ab81b: fld dword ptr [0xaab90c] */ FPUSH(R_F32((u32)(0xaab90cu)));
    /* 007ab821: mov esi, dword ptr [0xaab90c] */ r_esi = R32((u32)(0xaab90cu));
    /* 007ab827: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 007ab829: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab82b: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 007ab82f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab830: jb 0x7ab871 */ if (fC) goto L_007ab871;
L_007ab832:; BB(0x007ab832);
    /* 007ab832: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ab834: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab838: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab83c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab83e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab842: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007ab844: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab848: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab84a: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab84e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab850: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab854: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab858: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab85a: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ab85e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab860: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007ab864: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007ab868: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ab86c: jmp 0x7aba13 */ goto L_007aba13;
L_007ab871:; BB(0x007ab871);
    /* 007ab871: fld dword ptr [0xaab904] */ FPUSH(R_F32((u32)(0xaab904u)));
    /* 007ab877: mov edi, dword ptr [0xaab904] */ r_edi = R32((u32)(0xaab904u));
    /* 007ab87d: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab881: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007ab883: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab885: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007ab889: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab88a: jae 0x7ab991 */ if (!fC) goto L_007ab991;
L_007ab890:; BB(0x007ab890);
    /* 007ab890: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab894: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab898: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007ab89a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab89c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab89e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007ab8a2: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 007ab8a4: fsub dword ptr [esp + 0x68] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x68u));
    /* 007ab8a8: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007ab8ac: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 007ab8ae: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007ab8b0: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007ab8b4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 007ab8b6: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 007ab8b8: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007ab8bc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab8bd: jae 0x7ab8d7 */ if (!fC) goto L_007ab8d7;
L_007ab8bf:; BB(0x007ab8bf);
    /* 007ab8bf: fsub dword ptr [esp + 0x64] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x64u));
    /* 007ab8c3: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 007ab8c7: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 007ab8cb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007ab8cd: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 007ab8d1: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab8d5: jmp 0x7ab8e7 */ goto L_007ab8e7;
L_007ab8d7:; BB(0x007ab8d7);
    /* 007ab8d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ab8d9: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab8dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab8df: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab8e3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_007ab8e7:; BB(0x007ab8e7);
    /* 007ab8e7: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab8eb: fcomp dword ptr [esp + 0x60] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x60u))); FPOP();
    /* 007ab8ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab8f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab8f2: jbe 0x7ab914 */ if ((fC||fZ)) goto L_007ab914;
L_007ab8f4:; BB(0x007ab8f4);
    /* 007ab8f4: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007ab8f8: fsubr dword ptr [esp + 0x58] */ ST(0) = R_F32((u32)(r_esp+0x58u)) - ST(0);
    /* 007ab8fc: fdiv dword ptr [esp + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x38u));
    /* 007ab900: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007ab904: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ab906: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 007ab908: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab90a: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab90e: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 007ab912: jmp 0x7ab924 */ goto L_007ab924;
L_007ab914:; BB(0x007ab914);
    /* 007ab914: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab918: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007ab91a: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab91e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab920: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
L_007ab924:; BB(0x007ab924);
    /* 007ab924: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab928: fcomp dword ptr [esp + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x5cu))); FPOP();
    /* 007ab92c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab92e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab92f: jae 0x7ab94f */ if (!fC) goto L_007ab94f;
L_007ab931:; BB(0x007ab931);
    /* 007ab931: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 007ab935: fsub dword ptr [esp + 0x68] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x68u));
    /* 007ab939: fdiv dword ptr [esp + 0x3c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x3cu));
    /* 007ab93d: fmul dword ptr [esp + 0x44] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x44u));
    /* 007ab941: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007ab945: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007ab947: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab949: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab94d: jmp 0x7ab95f */ goto L_007ab95f;
L_007ab94f:; BB(0x007ab94f);
    /* 007ab94f: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab953: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab955: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab959: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab95b: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_007ab95f:; BB(0x007ab95f);
    /* 007ab95f: fcom dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); 
    /* 007ab963: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007ab965: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007ab966: jbe 0x7ab985 */ if ((fC||fZ)) goto L_007ab985;
L_007ab968:; BB(0x007ab968);
    /* 007ab968: fsub dword ptr [esp + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4cu));
    /* 007ab96c: fdiv dword ptr [esp + 0x3c] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x3cu));
    /* 007ab970: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007ab974: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007ab976: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007ab978: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab97c: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007ab980: jmp 0x7aba05 */ goto L_007aba05;
L_007ab985:; BB(0x007ab985);
    /* 007ab985: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab987: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab98b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ab98f: jmp 0x7aba05 */ goto L_007aba05;
L_007ab991:; BB(0x007ab991);
    /* 007ab991: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007ab993: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab997: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab99b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab99d: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab9a1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007ab9a3: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab9a7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab9a9: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab9ad: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab9af: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab9b3: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab9b7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab9b9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ab9bd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab9bf: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007ab9c3: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007ab9c7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007ab9cb: jmp 0x7aba13 */ goto L_007aba13;
L_007ab9cd:; BB(0x007ab9cd);
    /* 007ab9cd: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007ab9d1: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007ab9d5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab9d7: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007ab9db: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007ab9dd: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 007ab9e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007ab9e3: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 007ab9e7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab9e9: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007ab9ed: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007ab9f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007ab9f3: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007ab9f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007ab9f9: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007ab9fd: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007aba01: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_007aba05:; BB(0x007aba05);
    /* 007aba05: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007aba09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007aba0a: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007aba0e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7aba13u); f_0082b440();
L_007aba13:; BB(0x007aba13);
    /* 007aba13: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 007aba17: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007aba1a: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
L_007aba1e:; BB(0x007aba1e);
    /* 007aba1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aba20: jne 0x7ab5f8 */ if (!fZ) goto L_007ab5f8;
L_007aba26:; BB(0x007aba26);
    /* 007aba26: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7aba2bu); f_004ac444();
    /* 007aba2b: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x7aba30u); f_0082dbac();
L_007aba30:; BB(0x007aba30);
    /* 007aba30: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007aba33: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007aba34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007aba35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007aba36: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007aba37: ret  */ FN_RET(0x007ab554); r_esp += 4; return;
L_007aba38:; BB(0x007aba38);
    /* 007aba38: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 007aba3e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aba40: je 0x7aba51 */ if (fZ) goto L_007aba51;
L_007aba42:; BB(0x007aba42);
    /* 007aba42: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
L_007aba45:; BB(0x007aba45);
    /* 007aba45: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 007aba4c: jmp 0x7ab696 */ goto L_007ab696;
L_007aba51:; BB(0x007aba51);
    /* 007aba51: mov edx, 0xffffea00 */ r_edx = 0xffffea00u;
    /* 007aba56: jmp 0x7aba45 */ goto L_007aba45;
L_007aba58:; BB(0x007aba58);
    /* 007aba58: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007aba5c: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 007aba5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007aba61: je 0x7aba73 */ if (fZ) goto L_007aba73;
L_007aba63:; BB(0x007aba63);
    /* 007aba63: fld dword ptr [esp + 0x64] */ FPUSH(R_F32((u32)(r_esp+0x64u)));
    /* 007aba67: fadd dword ptr [0x97db7c] */ ST(0) = ST(0) + R_F32((u32)(0x97db7cu));
    /* 007aba6d: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007aba71: jmp 0x7aba1e */ goto L_007aba1e;
L_007aba73:; BB(0x007aba73);
    /* 007aba73: fld dword ptr [esp + 0x6c] */ FPUSH(R_F32((u32)(r_esp+0x6cu)));
    /* 007aba77: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007aba7b: fadd dword ptr [0x97db78] */ ST(0) = ST(0) + R_F32((u32)(0x97db78u));
    /* 007aba81: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007aba83: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007aba87: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007aba8b: jmp 0x7aba1e */ goto L_007aba1e;
}

void f_007aba94(void) /* sub_7ABA94 */
{
    FN_ENTER(0x007aba94);
    /* 007aba94: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007aba99: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7aba9eu); f_00829cc8();
    /* 007aba9e: ret  */ FN_RET(0x007aba94); r_esp += 4; return;
}

void f_007abaa5(void) /* sub_7ABAA5 */
{
    FN_ENTER(0x007abaa5);
    /* 007abaa5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007abaa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007abaa7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007abaa8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007abaa9: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007abaac: mov esi, eax */ r_esi = r_eax;
    /* 007abaae: mov ebx, dword ptr [0xaab920] */ r_ebx = R32((u32)(0xaab920u));
    /* 007abab4: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 007ababc: movzx ebp, si */ r_ebp = (u32)(u16)r_esi;
    /* 007ababf: mov edx, ebp */ r_edx = r_ebp;
    /* 007abac1: and edx, 0xbf */ {  u32 a = r_edx; u32 b = 0xbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007abac7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007abaca: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007abacc: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007abace: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007abad0: lea edi, [ebx + eax] */ r_edi = (u32)(r_ebx+r_eax);
    /* 007abad3: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 007abad6: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abad8: je 0x7abb03 */ if (fZ) goto L_007abb03;
L_007abada:; BB(0x007abada);
    /* 007abada: lea ebx, [ebx + eax + 0x780] */ r_ebx = (u32)(r_ebx+r_eax+0x780u);
    /* 007abae1: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007abae4: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abae6: jne 0x7abaf2 */ if (!fZ) goto L_007abaf2;
L_007abae8:; BB(0x007abae8);
    /* 007abae8: mov eax, ebx */ r_eax = r_ebx;
    /* 007abaea: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abaed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abaee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abaef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abaf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abaf1: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abaf2:; BB(0x007abaf2);
    /* 007abaf2: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007abaf6: mov eax, esi */ r_eax = r_esi;
    /* 007abaf8: mov edx, edi */ r_edx = r_edi;
    /* 007abafa: call 0x7abfb5 */ r_esp -= 4; W32(r_esp, 0x7abaffu); f_007abfb5();
    /* 007abaff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abb01: je 0x7abb0d */ if (fZ) goto L_007abb0d;
L_007abb03:; BB(0x007abb03);
    /* 007abb03: mov eax, edi */ r_eax = r_edi;
    /* 007abb05: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abb08: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abb09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abb0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abb0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abb0c: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abb0d:; BB(0x007abb0d);
    /* 007abb0d: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007abb11: mov eax, esi */ r_eax = r_esi;
    /* 007abb13: mov edx, ebx */ r_edx = r_ebx;
    /* 007abb15: call 0x7abfb5 */ r_esp -= 4; W32(r_esp, 0x7abb1au); f_007abfb5();
    /* 007abb1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abb1c: je 0x7abb28 */ if (fZ) goto L_007abb28;
L_007abb1e:; BB(0x007abb1e);
    /* 007abb1e: mov eax, ebx */ r_eax = r_ebx;
    /* 007abb20: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abb23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abb24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abb25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abb26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abb27: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abb28:; BB(0x007abb28);
    /* 007abb28: mov eax, dword ptr [0xaab920] */ r_eax = R32((u32)(0xaab920u));
    /* 007abb2d: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 007abb31: lea ebx, [eax + 0xf00] */ r_ebx = (u32)(r_eax+0xf00u);
    /* 007abb37: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007abb39:; BB(0x007abb39);
    /* 007abb39: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 007abb3c: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abb3e: je 0x7abf90 */ if (fZ) goto L_007abf90;
L_007abb44:; BB(0x007abb44);
    /* 007abb44: movzx edx, byte ptr [0xaab91c] */ r_edx = (u32)R8((u32)(0xaab91cu));
    /* 007abb4b: movzx ecx, byte ptr [ebx + 3] */ r_ecx = (u32)R8((u32)(r_ebx+0x3u));
    /* 007abb4f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abb51: je 0x7abcab */ if (fZ) goto L_007abcab;
L_007abb57:; BB(0x007abb57);
    /* 007abb57: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 007abb5a: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007abb60: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abb62: jne 0x7abb79 */ if (!fZ) goto L_007abb79;
L_007abb64:; BB(0x007abb64);
    /* 007abb64: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007abb68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abb6a: jne 0x7abcab */ if (!fZ) goto L_007abcab;
L_007abb70:; BB(0x007abb70);
    /* 007abb70: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007abb74: jmp 0x7abcab */ goto L_007abcab;
L_007abb79:; BB(0x007abb79);
    /* 007abb79: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 007abb7d: cmp ebp, 0xe000 */ {  u32 a = r_ebp; u32 b = 0xe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abb83: mov edx, esi */ r_edx = r_esi;
    /* 007abb85: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 007abb88: jl 0x7abb93 */ if ((fS!=fO)) goto L_007abb93;
L_007abb8a:; BB(0x007abb8a);
    /* 007abb8a: add ebp, 0xffff20e0 */ {  u32 a = r_ebp; u32 b = 0xffff20e0u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007abb90: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
L_007abb93:; BB(0x007abb93);
    /* 007abb93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007abb94: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7abb99u); f_008441e0();
    /* 007abb99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007abb9a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007abb9d: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abba0: jle 0x7abba8 */ if ((fZ||fS!=fO)) goto L_007abba8;
L_007abba2:; BB(0x007abba2);
    /* 007abba2: mov byte ptr [ebx + 2], 0xe */ W8((u32)(r_ebx+0x2u), 0xeu);
    /* 007abba6: jmp 0x7abbab */ goto L_007abbab;
L_007abba8:; BB(0x007abba8);
    /* 007abba8: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
L_007abbab:; BB(0x007abbab);
    /* 007abbab: push 0xaab560 */ { u32 v = 0xaab560u; r_esp -= 4; W32(r_esp, v); }
    /* 007abbb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007abbb1: call 0x844138 */ r_esp -= 4; W32(r_esp, 0x7abbb6u); f_00844138();
    /* 007abbb6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007abbb9: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abbbd: mov edi, dword ptr [ecx*4 + 0xaab950] */ r_edi = R32((u32)(r_ecx*4+0xaab950u));
    /* 007abbc4: movzx eax, byte ptr [ebx + 5] */ r_eax = (u32)R8((u32)(r_ebx+0x5u));
    /* 007abbc8: movzx edx, byte ptr [ebx + 6] */ r_edx = (u32)R8((u32)(r_ebx+0x6u));
    /* 007abbcc: mov esi, 0xaab560 */ r_esi = 0xaab560u;
    /* 007abbd1: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007abbd4: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 007abbd8: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 007abbdb: lea ebp, [eax + edx + 0xe00] */ r_ebp = (u32)(r_eax+r_edx+0xe00u);
L_007abbe2:; BB(0x007abbe2);
    /* 007abbe2: lea edx, [edi + ecx*2] */ r_edx = (u32)(r_edi+r_ecx*2);
    /* 007abbe5: lea eax, [edi + ecx*2 + 0x1c] */ r_eax = (u32)(r_edi+r_ecx*2+0x1cu);
L_007abbe9:; BB(0x007abbe9);
    /* 007abbe9: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 007abbeb: and ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007abbf1: cmp ebx, 0xaaaaaa */ {  u32 a = r_ebx; u32 b = 0xaaaaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abbf7: jbe 0x7abc08 */ if ((fC||fZ)) goto L_007abc08;
L_007abbf9:; BB(0x007abbf9);
    /* 007abbf9: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abbff: movzx ebx, word ptr [ebx + 6] */ r_ebx = (u32)R16((u32)(r_ebx+0x6u));
    /* 007abc03: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abc06: jmp 0x7abc3e */ goto L_007abc3e;
L_007abc08:; BB(0x007abc08);
    /* 007abc08: cmp ebx, 0x555555 */ {  u32 a = r_ebx; u32 b = 0x555555u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abc0e: jbe 0x7abc1f */ if ((fC||fZ)) goto L_007abc1f;
L_007abc10:; BB(0x007abc10);
    /* 007abc10: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abc16: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 007abc1a: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abc1d: jmp 0x7abc3e */ goto L_007abc3e;
L_007abc1f:; BB(0x007abc1f);
    /* 007abc1f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abc21: je 0x7abc32 */ if (fZ) goto L_007abc32;
L_007abc23:; BB(0x007abc23);
    /* 007abc23: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abc29: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 007abc2d: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abc30: jmp 0x7abc3e */ goto L_007abc3e;
L_007abc32:; BB(0x007abc32);
    /* 007abc32: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abc38: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 007abc3b: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
L_007abc3e:; BB(0x007abc3e);
    /* 007abc3e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007abc41: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007abc44: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abc46: ja 0x7abbe9 */ if ((!fC&&!fZ)) goto L_007abbe9;
L_007abc48:; BB(0x007abc48);
    /* 007abc48: add ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007abc4e: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abc50: ja 0x7abbe2 */ if ((!fC&&!fZ)) goto L_007abbe2;
L_007abc52:; BB(0x007abc52);
    /* 007abc52: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007abc56: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007abc5b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7abc60u); f_00829cc8();
    /* 007abc60: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007abc64: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abc68: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x7abc6du); f_00835ca8();
    /* 007abc6d: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 007abc72: movzx eax, byte ptr [ebx + 4] */ r_eax = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abc76: push dword ptr [eax*4 + 0xaab950] */ { u32 v = R32((u32)(r_eax*4+0xaab950u)); r_esp -= 4; W32(r_esp, v); }
    /* 007abc7d: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007abc81: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x7abc86u); f_0086b324();
    /* 007abc86: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007abc89: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abc8d: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x7abc92u); f_00835cd8();
    /* 007abc92: mov edx, dword ptr [0xaab924] */ r_edx = R32((u32)(0xaab924u));
    /* 007abc98: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007abc9b: mov dword ptr [0xaab924], edx */ W32((u32)(0xaab924u), r_edx);
    /* 007abca1: mov eax, ebx */ r_eax = r_ebx;
    /* 007abca3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abca6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abca8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abca9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abcaa: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abcab:; BB(0x007abcab);
    /* 007abcab: add ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007abcae: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007abcb1: cmp edi, 0x17f */ {  u32 a = r_edi; u32 b = 0x17fu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007abcb7: jb 0x7abb39 */ if (fC) goto L_007abb39;
L_007abcbd:; BB(0x007abcbd);
    /* 007abcbd: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 007abcc1: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 007abcc5: mov ebx, eax */ r_ebx = r_eax;
    /* 007abcc7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_007abcc9:; BB(0x007abcc9);
    /* 007abcc9: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 007abccc: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abcce: je 0x7abf86 */ if (fZ) goto L_007abf86;
L_007abcd4:; BB(0x007abcd4);
    /* 007abcd4: movzx ecx, byte ptr [ebx + 3] */ r_ecx = (u32)R8((u32)(r_ebx+0x3u));
    /* 007abcd8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abcda: je 0x7abe34 */ if (fZ) goto L_007abe34;
L_007abce0:; BB(0x007abce0);
    /* 007abce0: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 007abce3: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 007abce9: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abceb: jne 0x7abd02 */ if (!fZ) goto L_007abd02;
L_007abced:; BB(0x007abced);
    /* 007abced: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007abcf1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abcf3: jne 0x7abe34 */ if (!fZ) goto L_007abe34;
L_007abcf9:; BB(0x007abcf9);
    /* 007abcf9: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 007abcfd: jmp 0x7abe34 */ goto L_007abe34;
L_007abd02:; BB(0x007abd02);
    /* 007abd02: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 007abd06: cmp ebp, 0xe000 */ {  u32 a = r_ebp; u32 b = 0xe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abd0c: mov edx, esi */ r_edx = r_esi;
    /* 007abd0e: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 007abd11: jl 0x7abd1c */ if ((fS!=fO)) goto L_007abd1c;
L_007abd13:; BB(0x007abd13);
    /* 007abd13: add ebp, 0xffff20e0 */ {  u32 a = r_ebp; u32 b = 0xffff20e0u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007abd19: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
L_007abd1c:; BB(0x007abd1c);
    /* 007abd1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007abd1d: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7abd22u); f_008441e0();
    /* 007abd22: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007abd23: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007abd26: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abd29: jle 0x7abd31 */ if ((fZ||fS!=fO)) goto L_007abd31;
L_007abd2b:; BB(0x007abd2b);
    /* 007abd2b: mov byte ptr [ebx + 2], 0xe */ W8((u32)(r_ebx+0x2u), 0xeu);
    /* 007abd2f: jmp 0x7abd34 */ goto L_007abd34;
L_007abd31:; BB(0x007abd31);
    /* 007abd31: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
L_007abd34:; BB(0x007abd34);
    /* 007abd34: push 0xaab560 */ { u32 v = 0xaab560u; r_esp -= 4; W32(r_esp, v); }
    /* 007abd39: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007abd3a: call 0x844138 */ r_esp -= 4; W32(r_esp, 0x7abd3fu); f_00844138();
    /* 007abd3f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007abd42: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abd46: mov edi, dword ptr [ecx*4 + 0xaab950] */ r_edi = R32((u32)(r_ecx*4+0xaab950u));
    /* 007abd4d: movzx eax, byte ptr [ebx + 5] */ r_eax = (u32)R8((u32)(r_ebx+0x5u));
    /* 007abd51: movzx edx, byte ptr [ebx + 6] */ r_edx = (u32)R8((u32)(r_ebx+0x6u));
    /* 007abd55: mov esi, 0xaab560 */ r_esi = 0xaab560u;
    /* 007abd5a: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007abd5d: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 007abd61: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 007abd64: lea ebp, [eax + edx + 0xe00] */ r_ebp = (u32)(r_eax+r_edx+0xe00u);
L_007abd6b:; BB(0x007abd6b);
    /* 007abd6b: lea edx, [edi + ecx*2] */ r_edx = (u32)(r_edi+r_ecx*2);
    /* 007abd6e: lea eax, [edi + ecx*2 + 0x1c] */ r_eax = (u32)(r_edi+r_ecx*2+0x1cu);
L_007abd72:; BB(0x007abd72);
    /* 007abd72: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 007abd74: and ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007abd7a: cmp ebx, 0xaaaaaa */ {  u32 a = r_ebx; u32 b = 0xaaaaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abd80: jbe 0x7abd91 */ if ((fC||fZ)) goto L_007abd91;
L_007abd82:; BB(0x007abd82);
    /* 007abd82: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abd88: movzx ebx, word ptr [ebx + 6] */ r_ebx = (u32)R16((u32)(r_ebx+0x6u));
    /* 007abd8c: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abd8f: jmp 0x7abdc7 */ goto L_007abdc7;
L_007abd91:; BB(0x007abd91);
    /* 007abd91: cmp ebx, 0x555555 */ {  u32 a = r_ebx; u32 b = 0x555555u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abd97: jbe 0x7abda8 */ if ((fC||fZ)) goto L_007abda8;
L_007abd99:; BB(0x007abd99);
    /* 007abd99: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abd9f: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 007abda3: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abda6: jmp 0x7abdc7 */ goto L_007abdc7;
L_007abda8:; BB(0x007abda8);
    /* 007abda8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abdaa: je 0x7abdbb */ if (fZ) goto L_007abdbb;
L_007abdac:; BB(0x007abdac);
    /* 007abdac: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abdb2: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 007abdb6: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abdb9: jmp 0x7abdc7 */ goto L_007abdc7;
L_007abdbb:; BB(0x007abdbb);
    /* 007abdbb: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abdc1: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 007abdc4: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
L_007abdc7:; BB(0x007abdc7);
    /* 007abdc7: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007abdca: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007abdcd: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abdcf: ja 0x7abd72 */ if ((!fC&&!fZ)) goto L_007abd72;
L_007abdd1:; BB(0x007abdd1);
    /* 007abdd1: add ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007abdd7: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abdd9: ja 0x7abd6b */ if ((!fC&&!fZ)) goto L_007abd6b;
L_007abddb:; BB(0x007abddb);
    /* 007abddb: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007abddf: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007abde4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7abde9u); f_00829cc8();
    /* 007abde9: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 007abded: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abdf1: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x7abdf6u); f_00835ca8();
    /* 007abdf6: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 007abdfb: movzx eax, byte ptr [ebx + 4] */ r_eax = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abdff: push dword ptr [eax*4 + 0xaab950] */ { u32 v = R32((u32)(r_eax*4+0xaab950u)); r_esp -= 4; W32(r_esp, v); }
    /* 007abe06: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007abe0a: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x7abe0fu); f_0086b324();
    /* 007abe0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007abe12: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abe16: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x7abe1bu); f_00835cd8();
    /* 007abe1b: mov edx, dword ptr [0xaab924] */ r_edx = R32((u32)(0xaab924u));
    /* 007abe21: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007abe24: mov dword ptr [0xaab924], edx */ W32((u32)(0xaab924u), r_edx);
    /* 007abe2a: mov eax, ebx */ r_eax = r_ebx;
    /* 007abe2c: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abe2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abe30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abe31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abe32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abe33: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abe34:; BB(0x007abe34);
    /* 007abe34: add ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007abe37: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007abe3a: cmp edi, 0x180 */ {  u32 a = r_edi; u32 b = 0x180u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007abe40: jb 0x7abcc9 */ if (fC) goto L_007abcc9;
L_007abe46:; BB(0x007abe46);
    /* 007abe46: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 007abe4a: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 007abe4e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abe50: je 0x7abf9a */ if (fZ) goto L_007abf9a;
L_007abe56:; BB(0x007abe56);
    /* 007abe56: cmp ebp, 0xe000 */ {  u32 a = r_ebp; u32 b = 0xe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abe5c: mov edx, esi */ r_edx = r_esi;
    /* 007abe5e: mov word ptr [ebx], si */ W16((u32)(r_ebx), (u16)r_esi);
    /* 007abe61: jl 0x7abe6c */ if ((fS!=fO)) goto L_007abe6c;
L_007abe63:; BB(0x007abe63);
    /* 007abe63: add ebp, 0xffff20e0 */ {  u32 a = r_ebp; u32 b = 0xffff20e0u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007abe69: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
L_007abe6c:; BB(0x007abe6c);
    /* 007abe6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007abe6d: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7abe72u); f_008441e0();
    /* 007abe72: push 0xaab560 */ { u32 v = 0xaab560u; r_esp -= 4; W32(r_esp, v); }
    /* 007abe77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007abe78: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007abe7b: mov ebp, 0xe */ r_ebp = 0xeu;
    /* 007abe80: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abe83: jl 0x7abe87 */ if ((fS!=fO)) goto L_007abe87;
L_007abe85:; BB(0x007abe85);
    /* 007abe85: mov eax, ebp */ r_eax = r_ebp;
L_007abe87:; BB(0x007abe87);
    /* 007abe87: mov byte ptr [ebx + 2], al */ W8((u32)(r_ebx+0x2u), (u8)r_eax);
    /* 007abe8a: call 0x844138 */ r_esp -= 4; W32(r_esp, 0x7abe8fu); f_00844138();
    /* 007abe8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007abe92: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abe96: mov edi, dword ptr [ecx*4 + 0xaab950] */ r_edi = R32((u32)(r_ecx*4+0xaab950u));
    /* 007abe9d: movzx eax, byte ptr [ebx + 5] */ r_eax = (u32)R8((u32)(r_ebx+0x5u));
    /* 007abea1: movzx edx, byte ptr [ebx + 6] */ r_edx = (u32)R8((u32)(r_ebx+0x6u));
    /* 007abea5: mov esi, 0xaab560 */ r_esi = 0xaab560u;
    /* 007abeaa: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007abead: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 007abeb1: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 007abeb4: lea ebp, [eax + edx + 0xe00] */ r_ebp = (u32)(r_eax+r_edx+0xe00u);
L_007abebb:; BB(0x007abebb);
    /* 007abebb: lea edx, [edi + ecx*2] */ r_edx = (u32)(r_edi+r_ecx*2);
    /* 007abebe: lea eax, [edi + ecx*2 + 0x1c] */ r_eax = (u32)(r_edi+r_ecx*2+0x1cu);
L_007abec2:; BB(0x007abec2);
    /* 007abec2: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 007abec4: and ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007abeca: cmp ebx, 0xaaaaaa */ {  u32 a = r_ebx; u32 b = 0xaaaaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abed0: jbe 0x7abee1 */ if ((fC||fZ)) goto L_007abee1;
L_007abed2:; BB(0x007abed2);
    /* 007abed2: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abed8: movzx ebx, word ptr [ebx + 6] */ r_ebx = (u32)R16((u32)(r_ebx+0x6u));
    /* 007abedc: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abedf: jmp 0x7abf17 */ goto L_007abf17;
L_007abee1:; BB(0x007abee1);
    /* 007abee1: cmp ebx, 0x555555 */ {  u32 a = r_ebx; u32 b = 0x555555u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abee7: jbe 0x7abef8 */ if ((fC||fZ)) goto L_007abef8;
L_007abee9:; BB(0x007abee9);
    /* 007abee9: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abeef: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 007abef3: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abef6: jmp 0x7abf17 */ goto L_007abf17;
L_007abef8:; BB(0x007abef8);
    /* 007abef8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abefa: je 0x7abf0b */ if (fZ) goto L_007abf0b;
L_007abefc:; BB(0x007abefc);
    /* 007abefc: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abf02: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 007abf06: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
    /* 007abf09: jmp 0x7abf17 */ goto L_007abf17;
L_007abf0b:; BB(0x007abf0b);
    /* 007abf0b: mov ebx, dword ptr [0xaab94c] */ r_ebx = R32((u32)(0xaab94cu));
    /* 007abf11: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 007abf14: mov word ptr [edx], bx */ W16((u32)(r_edx), (u16)r_ebx);
L_007abf17:; BB(0x007abf17);
    /* 007abf17: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007abf1a: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007abf1d: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abf1f: ja 0x7abec2 */ if ((!fC&&!fZ)) goto L_007abec2;
L_007abf21:; BB(0x007abf21);
    /* 007abf21: add ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007abf27: cmp ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007abf29: ja 0x7abebb */ if ((!fC&&!fZ)) goto L_007abebb;
L_007abf2b:; BB(0x007abf2b);
    /* 007abf2b: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007abf2f: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007abf34: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7abf39u); f_00829cc8();
    /* 007abf39: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 007abf3d: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abf41: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x7abf46u); f_00835ca8();
    /* 007abf46: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 007abf4b: movzx eax, byte ptr [ebx + 4] */ r_eax = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abf4f: push dword ptr [eax*4 + 0xaab950] */ { u32 v = R32((u32)(r_eax*4+0xaab950u)); r_esp -= 4; W32(r_esp, v); }
    /* 007abf56: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007abf5a: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x7abf5fu); f_0086b324();
    /* 007abf5f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007abf62: movzx ecx, byte ptr [ebx + 4] */ r_ecx = (u32)R8((u32)(r_ebx+0x4u));
    /* 007abf66: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x7abf6bu); f_00835cd8();
    /* 007abf6b: mov edx, dword ptr [0xaab924] */ r_edx = R32((u32)(0xaab924u));
    /* 007abf71: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007abf75: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007abf78: mov dword ptr [0xaab924], edx */ W32((u32)(0xaab924u), r_edx);
    /* 007abf7e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abf81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abf82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abf83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abf84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abf85: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abf86:; BB(0x007abf86);
    /* 007abf86: mov eax, ebx */ r_eax = r_ebx;
    /* 007abf88: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abf8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abf8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abf8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abf8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abf8f: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abf90:; BB(0x007abf90);
    /* 007abf90: mov eax, ebx */ r_eax = r_ebx;
    /* 007abf92: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abf95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abf96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abf97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abf98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abf99: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
L_007abf9a:; BB(0x007abf9a);
    /* 007abf9a: add eax, 0x1df6 */ {  u32 a = r_eax; u32 b = 0x1df6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007abf9f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abfa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007abfa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abfa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abfa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abfa6: ret  */ FN_RET(0x007abaa5); r_esp += 4; return;
}

void f_007abfb5(void) /* sub_7ABFB5 */
{
    FN_ENTER(0x007abfb5);
    /* 007abfb5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007abfb6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007abfb7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007abfb8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007abfbb: mov ebp, edx */ r_ebp = r_edx;
    /* 007abfbd: mov esi, eax */ r_esi = r_eax;
    /* 007abfbf: movzx eax, byte ptr [ebp + 3] */ r_eax = (u32)R8((u32)(r_ebp+0x3u));
    /* 007abfc3: movzx edi, byte ptr [0xaab91c] */ r_edi = (u32)R8((u32)(0xaab91cu));
    /* 007abfca: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abfcc: je 0x7abfe3 */ if (fZ) goto L_007abfe3;
L_007abfce:; BB(0x007abfce);
    /* 007abfce: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007abfd1: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007abfd7: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abfd9: jne 0x7abfec */ if (!fZ) goto L_007abfec;
L_007abfdb:; BB(0x007abfdb);
    /* 007abfdb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007abfdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007abfdf: jne 0x7abfe3 */ if (!fZ) goto L_007abfe3;
L_007abfe1:; BB(0x007abfe1);
    /* 007abfe1: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
L_007abfe3:; BB(0x007abfe3);
    /* 007abfe3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007abfe5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007abfe8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007abfe9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007abfea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007abfeb: ret  */ FN_RET(0x007abfb5); r_esp += 4; return;
L_007abfec:; BB(0x007abfec);
    /* 007abfec: mov edi, esi */ r_edi = r_esi;
    /* 007abfee: mov word ptr [ebp], si */ W16((u32)(r_ebp), (u16)r_esi);
    /* 007abff2: movzx ecx, si */ r_ecx = (u32)(u16)r_esi;
    /* 007abff5: cmp ecx, 0xe000 */ {  u32 a = r_ecx; u32 b = 0xe000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007abffb: jl 0x7ac006 */ if ((fS!=fO)) goto L_007ac006;
L_007abffd:; BB(0x007abffd);
    /* 007abffd: add ecx, 0xffff20e0 */ {  u32 a = r_ecx; u32 b = 0xffff20e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ac003: movzx edi, cx */ r_edi = (u32)(u16)r_ecx;
L_007ac006:; BB(0x007ac006);
    /* 007ac006: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007ac007: call 0x8441e0 */ r_esp -= 4; W32(r_esp, 0x7ac00cu); f_008441e0();
    /* 007ac00c: push 0xaab560 */ { u32 v = 0xaab560u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac011: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007ac012: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007ac015: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 007ac01a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007ac01d: jl 0x7ac021 */ if ((fS!=fO)) goto L_007ac021;
L_007ac01f:; BB(0x007ac01f);
    /* 007ac01f: mov eax, ecx */ r_eax = r_ecx;
L_007ac021:; BB(0x007ac021);
    /* 007ac021: mov byte ptr [ebp + 2], al */ W8((u32)(r_ebp+0x2u), (u8)r_eax);
    /* 007ac024: call 0x844138 */ r_esp -= 4; W32(r_esp, 0x7ac029u); f_00844138();
    /* 007ac029: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac02c: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 007ac030: mov esi, dword ptr [eax*4 + 0xaab950] */ r_esi = R32((u32)(r_eax*4+0xaab950u));
    /* 007ac037: movzx edi, byte ptr [ebp + 5] */ r_edi = (u32)R8((u32)(r_ebp+0x5u));
    /* 007ac03b: movzx edx, byte ptr [ebp + 6] */ r_edx = (u32)R8((u32)(r_ebp+0x6u));
    /* 007ac03f: mov ecx, 0xaab560 */ r_ecx = 0xaab560u;
    /* 007ac044: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007ac047: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007ac04a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 007ac04e: lea eax, [edi + edx] */ r_eax = (u32)(r_edi+r_edx);
    /* 007ac051: lea edx, [edi + edx + 0xe00] */ r_edx = (u32)(r_edi+r_edx+0xe00u);
L_007ac058:; BB(0x007ac058);
    /* 007ac058: lea ebp, [esi + eax*2] */ r_ebp = (u32)(r_esi+r_eax*2);
    /* 007ac05b: lea ebx, [esi + eax*2 + 0x1c] */ r_ebx = (u32)(r_esi+r_eax*2+0x1cu);
L_007ac05f:; BB(0x007ac05f);
    /* 007ac05f: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 007ac061: and edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007ac067: cmp edi, 0xaaaaaa */ {  u32 a = r_edi; u32 b = 0xaaaaaau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007ac06d: jbe 0x7ac07f */ if ((fC||fZ)) goto L_007ac07f;
L_007ac06f:; BB(0x007ac06f);
    /* 007ac06f: mov edi, dword ptr [0xaab94c] */ r_edi = R32((u32)(0xaab94cu));
    /* 007ac075: movzx edi, word ptr [edi + 6] */ r_edi = (u32)R16((u32)(r_edi+0x6u));
    /* 007ac079: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
    /* 007ac07d: jmp 0x7ac0b8 */ goto L_007ac0b8;
L_007ac07f:; BB(0x007ac07f);
    /* 007ac07f: cmp edi, 0x555555 */ {  u32 a = r_edi; u32 b = 0x555555u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007ac085: jbe 0x7ac097 */ if ((fC||fZ)) goto L_007ac097;
L_007ac087:; BB(0x007ac087);
    /* 007ac087: mov edi, dword ptr [0xaab94c] */ r_edi = R32((u32)(0xaab94cu));
    /* 007ac08d: movzx edi, word ptr [edi + 4] */ r_edi = (u32)R16((u32)(r_edi+0x4u));
    /* 007ac091: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
    /* 007ac095: jmp 0x7ac0b8 */ goto L_007ac0b8;
L_007ac097:; BB(0x007ac097);
    /* 007ac097: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007ac099: je 0x7ac0ab */ if (fZ) goto L_007ac0ab;
L_007ac09b:; BB(0x007ac09b);
    /* 007ac09b: mov edi, dword ptr [0xaab94c] */ r_edi = R32((u32)(0xaab94cu));
    /* 007ac0a1: movzx edi, word ptr [edi + 2] */ r_edi = (u32)R16((u32)(r_edi+0x2u));
    /* 007ac0a5: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
    /* 007ac0a9: jmp 0x7ac0b8 */ goto L_007ac0b8;
L_007ac0ab:; BB(0x007ac0ab);
    /* 007ac0ab: mov edi, dword ptr [0xaab94c] */ r_edi = R32((u32)(0xaab94cu));
    /* 007ac0b1: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 007ac0b4: mov word ptr [ebp], di */ W16((u32)(r_ebp), (u16)r_edi);
L_007ac0b8:; BB(0x007ac0b8);
    /* 007ac0b8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007ac0bb: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007ac0be: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007ac0c0: ja 0x7ac05f */ if ((!fC&&!fZ)) goto L_007ac05f;
L_007ac0c2:; BB(0x007ac0c2);
    /* 007ac0c2: add eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007ac0c7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007ac0c9: ja 0x7ac058 */ if ((!fC&&!fZ)) goto L_007ac058;
L_007ac0cb:; BB(0x007ac0cb);
    /* 007ac0cb: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007ac0ce: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 007ac0d2: mov ecx, 0x9ffa90 */ r_ecx = 0x9ffa90u;
    /* 007ac0d7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x7ac0dcu); f_00829cc8();
    /* 007ac0dc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007ac0e0: movzx ecx, byte ptr [ebp + 4] */ r_ecx = (u32)R8((u32)(r_ebp+0x4u));
    /* 007ac0e4: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x7ac0e9u); f_00835ca8();
    /* 007ac0e9: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 007ac0ee: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 007ac0f2: push dword ptr [eax*4 + 0xaab950] */ { u32 v = R32((u32)(r_eax*4+0xaab950u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac0f9: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007ac0fd: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x7ac102u); f_0086b324();
    /* 007ac102: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007ac105: movzx ecx, byte ptr [ebp + 4] */ r_ecx = (u32)R8((u32)(r_ebp+0x4u));
    /* 007ac109: call 0x835cd8 */ r_esp -= 4; W32(r_esp, 0x7ac10eu); f_00835cd8();
    /* 007ac10e: mov edx, dword ptr [0xaab924] */ r_edx = R32((u32)(0xaab924u));
    /* 007ac114: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007ac117: mov dword ptr [0xaab924], edx */ W32((u32)(0xaab924u), r_edx);
    /* 007ac11d: mov eax, 1 */ r_eax = 0x1u;
    /* 007ac122: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007ac125: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007ac126: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007ac127: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007ac128: ret  */ FN_RET(0x007abfb5); r_esp += 4; return;
}

