#include "protos.h"

void f_005675fc(void) /* sub_5675FC */
{
    FN_ENTER(0x005675fc);
    /* 005675fc: fld dword ptr [ecx + 0x4a0] */ FPUSH(R_F32((u32)(r_ecx+0x4a0u)));
    /* 00567602: fld dword ptr [ecx + 0x49c] */ FPUSH(R_F32((u32)(r_ecx+0x49cu)));
    /* 00567608: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0056760a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056760c: mov edx, dword ptr [ecx + 0x49c] */ r_edx = R32((u32)(r_ecx+0x49cu));
    /* 00567612: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567613: je 0x56765e */ if (fZ) goto L_0056765e;
L_00567615:; BB(0x00567615);
    /* 00567615: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00567617: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567619: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0056761a: jae 0x56763d */ if (!fC) goto L_0056763d;
L_0056761c:; BB(0x0056761c);
    /* 0056761c: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00567620: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00567622: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00567624: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567626: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567627: jbe 0x567634 */ if ((fC||fZ)) goto L_00567634;
L_00567629:; BB(0x00567629);
    /* 00567629: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056762b: mov dword ptr [ecx + 0x4a0], edx */ W32((u32)(r_ecx+0x4a0u), r_edx);
    /* 00567631: ret 4 */ FN_RET(0x005675fc); r_esp += 8; return;
L_00567634:; BB(0x00567634);
    /* 00567634: fstp dword ptr [ecx + 0x4a0] */ W_F32((u32)(r_ecx+0x4a0u), ST(0)); FPOP();
    /* 0056763a: ret 4 */ FN_RET(0x005675fc); r_esp += 8; return;
L_0056763d:; BB(0x0056763d);
    /* 0056763d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 00567641: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00567643: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00567645: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567647: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567648: jae 0x567655 */ if (!fC) goto L_00567655;
L_0056764a:; BB(0x0056764a);
    /* 0056764a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056764c: mov dword ptr [ecx + 0x4a0], edx */ W32((u32)(r_ecx+0x4a0u), r_edx);
    /* 00567652: ret 4 */ FN_RET(0x005675fc); r_esp += 8; return;
L_00567655:; BB(0x00567655);
    /* 00567655: fstp dword ptr [ecx + 0x4a0] */ W_F32((u32)(r_ecx+0x4a0u), ST(0)); FPOP();
    /* 0056765b: ret 4 */ FN_RET(0x005675fc); r_esp += 8; return;
L_0056765e:; BB(0x0056765e);
    /* 0056765e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567660: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567662: ret 4 */ FN_RET(0x005675fc); r_esp += 8; return;
}

void f_00567668(void) /* sub_567668 */
{
    FN_ENTER(0x00567668);
    /* 00567668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00567669: mov esi, ecx */ r_esi = r_ecx;
    /* 0056766b: mov ecx, esi */ r_ecx = r_esi;
    /* 0056766d: mov dword ptr [esi + 0x4a4], 0 */ W32((u32)(r_esi+0x4a4u), 0x0u);
    /* 00567677: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56767cu); f_007751b0();
    /* 0056767c: fcomp dword ptr [0x925ed0] */ fx_compare(ST(0), R_F32((u32)(0x925ed0u))); FPOP();
    /* 00567682: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567684: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567685: jae 0x567692 */ if (!fC) goto L_00567692;
L_00567687:; BB(0x00567687);
    /* 00567687: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00567689: mov ecx, esi */ r_ecx = r_esi;
    /* 0056768b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567690u); f_0051f62c();
    /* 00567690: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00567691: ret  */ FN_RET(0x00567668); r_esp += 4; return;
L_00567692:; BB(0x00567692);
    /* 00567692: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00567694: mov ecx, esi */ r_ecx = r_esi;
    /* 00567696: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56769bu); f_0051f62c();
    /* 0056769b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0056769c: ret  */ FN_RET(0x00567668); r_esp += 4; return;
}

void f_005676a0(void) /* sub_5676A0 */
{
    FN_ENTER(0x005676a0);
    /* 005676a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005676a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005676a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005676a3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005676a5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005676a9: lea ebp, [ebx + 0x530] */ r_ebp = (u32)(r_ebx+0x530u);
    /* 005676af: lea edi, [ebx + 0x554] */ r_edi = (u32)(r_ebx+0x554u);
    /* 005676b5: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005676b8: je 0x567930 */ if (fZ) goto L_00567930;
L_005676be:; BB(0x005676be);
    /* 005676be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005676c1: je 0x56790c */ if (fZ) goto L_0056790c;
L_005676c7:; BB(0x005676c7);
    /* 005676c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005676ca: je 0x5678c2 */ if (fZ) goto L_005678c2;
L_005676d0:; BB(0x005676d0);
    /* 005676d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005676d2: jne 0x56790c */ if (!fZ) goto L_0056790c;
L_005676d8:; BB(0x005676d8);
    /* 005676d8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005676da: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5676dfu); f_007aa094();
    /* 005676df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005676e1: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x5676e6u); f_00521238();
    /* 005676e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005676e8: je 0x56790c */ if (fZ) goto L_0056790c;
L_005676ee:; BB(0x005676ee);
    /* 005676ee: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 005676f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005676f5: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5676fau); f_007aaa30();
    /* 005676fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005676fc: je 0x567709 */ if (fZ) goto L_00567709;
L_005676fe:; BB(0x005676fe);
    /* 005676fe: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00567701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567702: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567704: call 0x5648a0 */ r_esp -= 4; W32(r_esp, 0x567709u); f_005648a0();
L_00567709:; BB(0x00567709);
    /* 00567709: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056770b: call 0x566910 */ r_esp -= 4; W32(r_esp, 0x567710u); f_00566910();
    /* 00567710: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567715: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567717: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x56771cu); f_007aaa30();
    /* 0056771c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056771e: je 0x56776a */ if (fZ) goto L_0056776a;
L_00567720:; BB(0x00567720);
    /* 00567720: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567722: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x567727u); f_005213d8();
    /* 00567727: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567729: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x56772eu); f_00521410();
    /* 0056772e: mov eax, dword ptr [ebx + 0x524] */ r_eax = R32((u32)(r_ebx+0x524u));
    /* 00567734: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567736: jne 0x567752 */ if (!fZ) goto L_00567752;
L_00567738:; BB(0x00567738);
    /* 00567738: mov dword ptr [ebx + 0x524], 1 */ W32((u32)(r_ebx+0x524u), 0x1u);
    /* 00567742: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567743: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567745: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00567746: push 0xffffe38f */ { u32 v = 0xffffe38fu; r_esp -= 4; W32(r_esp, v); }
    /* 0056774b: call 0x5679ac */ r_esp -= 4; W32(r_esp, 0x567750u); f_005679ac();
    /* 00567750: jmp 0x56776a */ goto L_0056776a;
L_00567752:; BB(0x00567752);
    /* 00567752: mov dword ptr [ebx + 0x524], 0 */ W32((u32)(r_ebx+0x524u), 0x0u);
    /* 0056775c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056775d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056775f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00567760: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 00567765: call 0x5679ac */ r_esp -= 4; W32(r_esp, 0x56776au); f_005679ac();
L_0056776a:; BB(0x0056776a);
    /* 0056776a: fld dword ptr [0x925ec4] */ FPUSH(R_F32((u32)(0x925ec4u)));
    /* 00567770: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 00567776: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00567777: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0056777a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056777c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x567781u); f_007aaa30();
    /* 00567781: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567783: je 0x5677b7 */ if (fZ) goto L_005677b7;
L_00567785:; BB(0x00567785);
    /* 00567785: mov eax, dword ptr [ebx + 0x554] */ r_eax = R32((u32)(r_ebx+0x554u));
    /* 0056778b: mov edx, dword ptr [ebx + 0x558] */ r_edx = R32((u32)(r_ebx+0x558u));
    /* 00567791: mov ebp, dword ptr [ebx + 0x55c] */ r_ebp = R32((u32)(r_ebx+0x55cu));
    /* 00567797: mov dword ptr [ebx + 0x548], eax */ W32((u32)(r_ebx+0x548u), r_eax);
    /* 0056779d: mov eax, dword ptr [ebx + 0x530] */ r_eax = R32((u32)(r_ebx+0x530u));
    /* 005677a3: mov dword ptr [ebx + 0x54c], edx */ W32((u32)(r_ebx+0x54cu), r_edx);
    /* 005677a9: mov dword ptr [ebx + 0x550], ebp */ W32((u32)(r_ebx+0x550u), r_ebp);
    /* 005677af: mov dword ptr [ebx + 0x534], eax */ W32((u32)(r_ebx+0x534u), r_eax);
    /* 005677b5: jmp 0x5677bd */ goto L_005677bd;
L_005677b7:; BB(0x005677b7);
    /* 005677b7: mov eax, dword ptr [ebx + 0x534] */ r_eax = R32((u32)(r_ebx+0x534u));
L_005677bd:; BB(0x005677bd);
    /* 005677bd: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005677c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005677c3: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005677c6: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5677cbu); f_007a8c74();
    /* 005677cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005677ce: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 005677d3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005677d6: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005677d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005677db: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5677e0u); f_007aaa30();
    /* 005677e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005677e2: je 0x5677ee */ if (fZ) goto L_005677ee;
L_005677e4:; BB(0x005677e4);
    /* 005677e4: mov dword ptr [ebx + 0x4a0], 0x40c00000 */ W32((u32)(r_ebx+0x4a0u), 0x40c00000u);
L_005677ee:; BB(0x005677ee);
    /* 005677ee: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005677f4: fcom dword ptr [0x925ea8] */ fx_compare(ST(0), R_F32((u32)(0x925ea8u))); 
    /* 005677fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005677fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005677fd: jb 0x567826 */ if (fC) goto L_00567826;
L_005677ff:; BB(0x005677ff);
    /* 005677ff: fcom dword ptr [0x925ea4] */ fx_compare(ST(0), R_F32((u32)(0x925ea4u))); 
    /* 00567805: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567807: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567808: ja 0x567826 */ if ((!fC&&!fZ)) goto L_00567826;
L_0056780a:; BB(0x0056780a);
    /* 0056780a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056780c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567811: push dword ptr [ebx + 0x550] */ { u32 v = R32((u32)(r_ebx+0x550u)); r_esp -= 4; W32(r_esp, v); }
    /* 00567817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567819: push dword ptr [ebx + 0x548] */ { u32 v = R32((u32)(r_ebx+0x548u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056781f: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x567824u); f_005207c4();
    /* 00567824: jmp 0x56785b */ goto L_0056785b;
L_00567826:; BB(0x00567826);
    /* 00567826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567828: fld dword ptr [ebx + 0x4a0] */ FPUSH(R_F32((u32)(r_ebx+0x4a0u)));
    /* 0056782e: fmul dword ptr [0x925eb8] */ ST(0) = ST(0) * R_F32((u32)(0x925eb8u));
    /* 00567834: mov eax, dword ptr [ebx + 0x548] */ r_eax = R32((u32)(r_ebx+0x548u));
    /* 0056783a: mov edx, dword ptr [ebx + 0x550] */ r_edx = R32((u32)(r_ebx+0x550u));
    /* 00567840: fst dword ptr [ebx + 0x4a0] */ W_F32((u32)(r_ebx+0x4a0u), ST(0));
    /* 00567846: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567849: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0056784d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056784f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00567852: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00567856: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x56785bu); f_005207c4();
L_0056785b:; BB(0x0056785b);
    /* 0056785b: fld dword ptr [ebx + 0x4a4] */ FPUSH(R_F32((u32)(r_ebx+0x4a4u)));
    /* 00567861: fadd dword ptr [ebx + 0x4a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4a0u));
    /* 00567867: fcom dword ptr [0x925eb4] */ fx_compare(ST(0), R_F32((u32)(0x925eb4u))); 
    /* 0056786d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056786f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567870: jae 0x56787a */ if (!fC) goto L_0056787a;
L_00567872:; BB(0x00567872);
    /* 00567872: fstp dword ptr [ebx + 0x4a4] */ W_F32((u32)(r_ebx+0x4a4u), ST(0)); FPOP();
    /* 00567878: jmp 0x5678a4 */ goto L_005678a4;
L_0056787a:; BB(0x0056787a);
    /* 0056787a: fld dword ptr [0x925eb0] */ FPUSH(R_F32((u32)(0x925eb0u)));
    /* 00567880: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567882: fstp dword ptr [ebx + 0x4a4] */ W_F32((u32)(r_ebx+0x4a4u), ST(0)); FPOP();
    /* 00567888: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056788a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56788fu); f_007751b0();
    /* 0056788f: fcomp dword ptr [ebx + 0x4ac] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4acu))); FPOP();
    /* 00567895: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567897: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567898: jae 0x5678a4 */ if (!fC) goto L_005678a4;
L_0056789a:; BB(0x0056789a);
    /* 0056789a: mov dword ptr [ebx + 0x520], 1 */ W32((u32)(r_ebx+0x520u), 0x1u);
L_005678a4:; BB(0x005678a4);
    /* 005678a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678a6: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x5678abu); f_00564780();
    /* 005678ab: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005678ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678af: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5678b5u); call_ind(t); }
    /* 005678b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678b7: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5678bcu); f_007b7e9c();
    /* 005678bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005678bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005678be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005678bf: ret 4 */ FN_RET(0x005676a0); r_esp += 8; return;
L_005678c2:; BB(0x005678c2);
    /* 005678c2: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 005678c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005678ca: je 0x567921 */ if (fZ) goto L_00567921;
L_005678cc:; BB(0x005678cc);
    /* 005678cc: mov eax, dword ptr [ebx + 0x520] */ r_eax = R32((u32)(r_ebx+0x520u));
    /* 005678d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005678d5: je 0x567912 */ if (fZ) goto L_00567912;
L_005678d7:; BB(0x005678d7);
    /* 005678d7: fld dword ptr [0x925ec4] */ FPUSH(R_F32((u32)(0x925ec4u)));
    /* 005678dd: fadd dword ptr [ebx + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc4u));
    /* 005678e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005678e4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005678e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678e9: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5678eeu); f_007aaa30();
    /* 005678ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005678f0: je 0x56790c */ if (fZ) goto L_0056790c;
L_005678f2:; BB(0x005678f2);
    /* 005678f2: fld dword ptr [ebx + 0x3b4] */ FPUSH(R_F32((u32)(r_ebx+0x3b4u)));
    /* 005678f8: fcomp dword ptr [0x925ea0] */ fx_compare(ST(0), R_F32((u32)(0x925ea0u))); FPOP();
    /* 005678fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567900: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567901: jae 0x56790c */ if (!fC) goto L_0056790c;
L_00567903:; BB(0x00567903);
    /* 00567903: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00567905: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567907: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56790cu); f_0051f62c();
L_0056790c:; BB(0x0056790c);
    /* 0056790c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056790d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056790e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056790f: ret 4 */ FN_RET(0x005676a0); r_esp += 8; return;
L_00567912:; BB(0x00567912);
    /* 00567912: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00567914: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567916: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56791bu); f_0051f62c();
    /* 0056791b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056791c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056791d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056791e: ret 4 */ FN_RET(0x005676a0); r_esp += 8; return;
L_00567921:; BB(0x00567921);
    /* 00567921: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00567923: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567925: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x56792au); f_0051f62c();
    /* 0056792a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056792b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056792c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0056792d: ret 4 */ FN_RET(0x005676a0); r_esp += 8; return;
L_00567930:; BB(0x00567930);
    /* 00567930: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00567932: mov eax, 3 */ r_eax = 0x3u;
    /* 00567937: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0056793e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567940: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x567945u); f_0051f664();
    /* 00567945: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00567947: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567949: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x56794fu); call_ind(t); }
    /* 0056794f: mov dword ptr [ebx + 0x49c], 0x40000000 */ W32((u32)(r_ebx+0x49cu), 0x40000000u);
    /* 00567959: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056795a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056795c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0056795d: push 0x1c71 */ { u32 v = 0x1c71u; r_esp -= 4; W32(r_esp, v); }
    /* 00567962: mov dword ptr [ebx + 0x520], eax */ W32((u32)(r_ebx+0x520u), r_eax);
    /* 00567968: mov dword ptr [ebx + 0x524], eax */ W32((u32)(r_ebx+0x524u), r_eax);
    /* 0056796e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567970: call 0x5679ac */ r_esp -= 4; W32(r_esp, 0x567975u); f_005679ac();
    /* 00567975: mov eax, dword ptr [ebx + 0x554] */ r_eax = R32((u32)(r_ebx+0x554u));
    /* 0056797b: mov edx, dword ptr [ebx + 0x558] */ r_edx = R32((u32)(r_ebx+0x558u));
    /* 00567981: mov ebp, dword ptr [ebx + 0x55c] */ r_ebp = R32((u32)(r_ebx+0x55cu));
    /* 00567987: mov edi, dword ptr [ebx + 0x530] */ r_edi = R32((u32)(r_ebx+0x530u));
    /* 0056798d: mov dword ptr [ebx + 0x548], eax */ W32((u32)(r_ebx+0x548u), r_eax);
    /* 00567993: mov dword ptr [ebx + 0x54c], edx */ W32((u32)(r_ebx+0x54cu), r_edx);
    /* 00567999: mov dword ptr [ebx + 0x550], ebp */ W32((u32)(r_ebx+0x550u), r_ebp);
    /* 0056799f: mov dword ptr [ebx + 0x534], edi */ W32((u32)(r_ebx+0x534u), r_edi);
    /* 005679a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005679a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005679a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005679a8: ret 4 */ FN_RET(0x005676a0); r_esp += 8; return;
}

void f_005677c2(void)
{
    FN_ENTER(0x005677c2);
    /* 005677c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005677c3: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005677c6: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x5677cbu); f_007a8c74();
    /* 005677cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005677ce: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 005677d3: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005677d6: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005677d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005677db: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5677e0u); f_007aaa30();
    /* 005677e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005677e2: je 0x5677ee */ if (fZ) goto L_005677ee;
L_005677e4:; BB(0x005677e4);
    /* 005677e4: mov dword ptr [ebx + 0x4a0], 0x40c00000 */ W32((u32)(r_ebx+0x4a0u), 0x40c00000u);
L_005677ee:; BB(0x005677ee);
    /* 005677ee: fld dword ptr [ebx + 0xc0] */ FPUSH(R_F32((u32)(r_ebx+0xc0u)));
    /* 005677f4: fcom dword ptr [0x925ea8] */ fx_compare(ST(0), R_F32((u32)(0x925ea8u))); 
    /* 005677fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005677fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005677fd: jb 0x567826 */ if (fC) goto L_00567826;
L_005677ff:; BB(0x005677ff);
    /* 005677ff: fcom dword ptr [0x925ea4] */ fx_compare(ST(0), R_F32((u32)(0x925ea4u))); 
    /* 00567805: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567807: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567808: ja 0x567826 */ if ((!fC&&!fZ)) goto L_00567826;
L_0056780a:; BB(0x0056780a);
    /* 0056780a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0056780c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567811: push dword ptr [ebx + 0x550] */ { u32 v = R32((u32)(r_ebx+0x550u)); r_esp -= 4; W32(r_esp, v); }
    /* 00567817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00567819: push dword ptr [ebx + 0x548] */ { u32 v = R32((u32)(r_ebx+0x548u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056781f: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x567824u); f_005207c4();
    /* 00567824: jmp 0x56785b */ goto L_0056785b;
L_00567826:; BB(0x00567826);
    /* 00567826: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567828: fld dword ptr [ebx + 0x4a0] */ FPUSH(R_F32((u32)(r_ebx+0x4a0u)));
    /* 0056782e: fmul dword ptr [0x925eb8] */ ST(0) = ST(0) * R_F32((u32)(0x925eb8u));
    /* 00567834: mov eax, dword ptr [ebx + 0x548] */ r_eax = R32((u32)(r_ebx+0x548u));
    /* 0056783a: mov edx, dword ptr [ebx + 0x550] */ r_edx = R32((u32)(r_ebx+0x550u));
    /* 00567840: fst dword ptr [ebx + 0x4a0] */ W_F32((u32)(r_ebx+0x4a0u), ST(0));
    /* 00567846: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567849: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0056784d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056784f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00567852: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00567856: call 0x5207c4 */ r_esp -= 4; W32(r_esp, 0x56785bu); f_005207c4();
L_0056785b:; BB(0x0056785b);
    /* 0056785b: fld dword ptr [ebx + 0x4a4] */ FPUSH(R_F32((u32)(r_ebx+0x4a4u)));
    /* 00567861: fadd dword ptr [ebx + 0x4a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4a0u));
    /* 00567867: fcom dword ptr [0x925eb4] */ fx_compare(ST(0), R_F32((u32)(0x925eb4u))); 
    /* 0056786d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0056786f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567870: jae 0x56787a */ if (!fC) goto L_0056787a;
L_00567872:; BB(0x00567872);
    /* 00567872: fstp dword ptr [ebx + 0x4a4] */ W_F32((u32)(r_ebx+0x4a4u), ST(0)); FPOP();
    /* 00567878: jmp 0x5678a4 */ goto L_005678a4;
L_0056787a:; BB(0x0056787a);
    /* 0056787a: fld dword ptr [0x925eb0] */ FPUSH(R_F32((u32)(0x925eb0u)));
    /* 00567880: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567882: fstp dword ptr [ebx + 0x4a4] */ W_F32((u32)(r_ebx+0x4a4u), ST(0)); FPOP();
    /* 00567888: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056788a: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x56788fu); f_007751b0();
    /* 0056788f: fcomp dword ptr [ebx + 0x4ac] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x4acu))); FPOP();
    /* 00567895: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567897: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567898: jae 0x5678a4 */ if (!fC) goto L_005678a4;
L_0056789a:; BB(0x0056789a);
    /* 0056789a: mov dword ptr [ebx + 0x520], 1 */ W32((u32)(r_ebx+0x520u), 0x1u);
L_005678a4:; BB(0x005678a4);
    /* 005678a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678a6: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x5678abu); f_00564780();
    /* 005678ab: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005678ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678af: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5678b5u); call_ind(t); }
    /* 005678b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005678b7: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x5678bcu); f_007b7e9c();
    /* 005678bc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005678bd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005678be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005678bf: ret 4 */ FN_RET(0x005677c2); r_esp += 8; return;
}

void f_005679ac(void) /* sub_5679AC */
{
    FN_ENTER(0x005679ac);
    /* 005679ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005679ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005679ae: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005679b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005679b3: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005679b7: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005679bb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5679c0u); f_0082dcbc();
    /* 005679c0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005679c4: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005679c8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5679cdu); f_0082ddd8();
    /* 005679cd: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005679d1: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005679d7: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 005679dd: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 005679df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005679e1: fchs  */ ST(0) = -ST(0);
    /* 005679e3: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005679e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005679e7: fst dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0));
    /* 005679ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005679ec: fmul dword ptr [ebp + 0x3b0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3b0u));
    /* 005679f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005679f4: fmul dword ptr [ebp + 0x3a8] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x3a8u));
    /* 005679fa: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005679fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005679fe: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
    /* 00567a00: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567a02: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00567a04: fmul qword ptr [0x925cf8] */ ST(0) = ST(0) * R_F64((u32)(0x925cf8u));
    /* 00567a0a: fdiv qword ptr [0x925cf0] */ ST(0) = ST(0) / R_F64((u32)(0x925cf0u));
    /* 00567a10: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00567a14: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00567a17: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00567a1b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00567a20: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00567a24: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00567a28: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 00567a2a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00567a2d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567a30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567a31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00567a32: ret 0xc */ FN_RET(0x005679ac); r_esp += 16; return;
}

void f_00567a38(void) /* sub_567A38 */
{
    FN_ENTER(0x00567a38);
    /* 00567a38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567a39: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567a3c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00567a3e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00567a42: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567a45: je 0x567c7a */ if (fZ) goto L_00567c7a;
L_00567a4b:; BB(0x00567a4b);
    /* 00567a4b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567a4e: je 0x567c47 */ if (fZ) goto L_00567c47;
L_00567a54:; BB(0x00567a54);
    /* 00567a54: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567a57: je 0x567bdc */ if (fZ) goto L_00567bdc;
L_00567a5d:; BB(0x00567a5d);
    /* 00567a5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567a5f: jne 0x567c47 */ if (!fZ) goto L_00567c47;
L_00567a65:; BB(0x00567a65);
    /* 00567a65: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567a67: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x567a6cu); f_007aa094();
    /* 00567a6c: push 0x41500000 */ { u32 v = 0x41500000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567a71: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567a73: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x567a78u); f_007aaa30();
    /* 00567a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567a7a: je 0x567a87 */ if (fZ) goto L_00567a87;
L_00567a7c:; BB(0x00567a7c);
    /* 00567a7c: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00567a7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567a80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567a82: call 0x5648a0 */ r_esp -= 4; W32(r_esp, 0x567a87u); f_005648a0();
L_00567a87:; BB(0x00567a87);
    /* 00567a87: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 00567a8e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567a91: je 0x567c4e */ if (fZ) goto L_00567c4e;
L_00567a97:; BB(0x00567a97);
    /* 00567a97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567a99: call 0x521238 */ r_esp -= 4; W32(r_esp, 0x567a9eu); f_00521238();
    /* 00567a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567aa0: je 0x567c47 */ if (fZ) goto L_00567c47;
L_00567aa6:; BB(0x00567aa6);
    /* 00567aa6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567aa8: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x567aadu); f_005213d8();
    /* 00567aad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567aaf: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x567ab4u); f_00521410();
    /* 00567ab4: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567ab9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567abb: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x567ac0u); f_007aaa30();
    /* 00567ac0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567ac2: je 0x567ad6 */ if (fZ) goto L_00567ad6;
L_00567ac4:; BB(0x00567ac4);
    /* 00567ac4: fld dword ptr [0x925e78] */ FPUSH(R_F32((u32)(0x925e78u)));
    /* 00567aca: mov dword ptr [ebp + 0x4a0], 0x40800000 */ W32((u32)(r_ebp+0x4a0u), 0x40800000u);
    /* 00567ad4: jmp 0x567adc */ goto L_00567adc;
L_00567ad6:; BB(0x00567ad6);
    /* 00567ad6: fld dword ptr [ebp + 0x4a0] */ FPUSH(R_F32((u32)(r_ebp+0x4a0u)));
L_00567adc:; BB(0x00567adc);
    /* 00567adc: fld dword ptr [ebp + 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xc0u)));
    /* 00567ae2: fcom dword ptr [0x925ea8] */ fx_compare(ST(0), R_F32((u32)(0x925ea8u))); 
    /* 00567ae8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567aea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567aeb: jb 0x567b2e */ if (fC) goto L_00567b2e;
L_00567aed:; BB(0x00567aed);
    /* 00567aed: fcom dword ptr [0x925ea4] */ fx_compare(ST(0), R_F32((u32)(0x925ea4u))); 
    /* 00567af3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567af5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567af6: ja 0x567b2e */ if ((!fC&&!fZ)) goto L_00567b2e;
L_00567af8:; BB(0x00567af8);
    /* 00567af8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567afa: fmul dword ptr [0x925e8c] */ ST(0) = ST(0) * R_F32((u32)(0x925e8cu));
    /* 00567b00: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00567b03: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00567b07: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00567b0c: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00567b10: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00567b14: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00567b18: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00567b1b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567b1d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00567b21: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567b26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567b27: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x567b2cu); f_00521528();
    /* 00567b2c: jmp 0x567b73 */ goto L_00567b73;
L_00567b2e:; BB(0x00567b2e);
    /* 00567b2e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567b30: fmul dword ptr [0x925e88] */ ST(0) = ST(0) * R_F32((u32)(0x925e88u));
    /* 00567b36: fld dword ptr [0x925e8c] */ FPUSH(R_F32((u32)(0x925e8cu)));
    /* 00567b3c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00567b3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567b40: fst dword ptr [ebp + 0x4a0] */ W_F32((u32)(r_ebp+0x4a0u), ST(0));
    /* 00567b46: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567b49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567b4b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00567b4f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00567b54: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00567b59: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00567b5d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00567b61: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 00567b64: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00567b68: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00567b6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567b6e: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x567b73u); f_00521528();
L_00567b73:; BB(0x00567b73);
    /* 00567b73: fld dword ptr [ebp + 0x4a4] */ FPUSH(R_F32((u32)(r_ebp+0x4a4u)));
    /* 00567b79: fadd dword ptr [ebp + 0x4a0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4a0u));
    /* 00567b7f: fcom dword ptr [0x925e84] */ fx_compare(ST(0), R_F32((u32)(0x925e84u))); 
    /* 00567b85: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567b87: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567b88: jae 0x567b92 */ if (!fC) goto L_00567b92;
L_00567b8a:; BB(0x00567b8a);
    /* 00567b8a: fstp dword ptr [ebp + 0x4a4] */ W_F32((u32)(r_ebp+0x4a4u), ST(0)); FPOP();
    /* 00567b90: jmp 0x567bbc */ goto L_00567bbc;
L_00567b92:; BB(0x00567b92);
    /* 00567b92: fld dword ptr [0x925e80] */ FPUSH(R_F32((u32)(0x925e80u)));
    /* 00567b98: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567b9a: fstp dword ptr [ebp + 0x4a4] */ W_F32((u32)(r_ebp+0x4a4u), ST(0)); FPOP();
    /* 00567ba0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567ba2: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x567ba7u); f_007751b0();
    /* 00567ba7: fcomp dword ptr [ebp + 0x4ac] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4acu))); FPOP();
    /* 00567bad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567baf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567bb0: jae 0x567bbc */ if (!fC) goto L_00567bbc;
L_00567bb2:; BB(0x00567bb2);
    /* 00567bb2: mov dword ptr [ebp + 0x520], 1 */ W32((u32)(r_ebp+0x520u), 0x1u);
L_00567bbc:; BB(0x00567bbc);
    /* 00567bbc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567bbe: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x567bc3u); f_00564780();
    /* 00567bc3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00567bc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567bc8: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x567bceu); call_ind(t); }
    /* 00567bce: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567bd0: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x567bd5u); f_007b7e9c();
    /* 00567bd5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567bd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567bd9: ret 4 */ FN_RET(0x00567a38); r_esp += 8; return;
L_00567bdc:; BB(0x00567bdc);
    /* 00567bdc: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 00567be2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567be4: je 0x567c6a */ if (fZ) goto L_00567c6a;
L_00567bea:; BB(0x00567bea);
    /* 00567bea: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00567bec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567bee: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x567bf3u); f_00520bb8();
    /* 00567bf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567bf5: jne 0x567c3e */ if (!fZ) goto L_00567c3e;
L_00567bf7:; BB(0x00567bf7);
    /* 00567bf7: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00567bfd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567c00: je 0x567c5a */ if (fZ) goto L_00567c5a;
L_00567c02:; BB(0x00567c02);
    /* 00567c02: fld dword ptr [0x925e7c] */ FPUSH(R_F32((u32)(0x925e7cu)));
    /* 00567c08: fadd dword ptr [ebp + 0xc4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xc4u));
    /* 00567c0e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00567c0f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00567c12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c14: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x567c19u); f_007aaa30();
    /* 00567c19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567c1b: je 0x567c47 */ if (fZ) goto L_00567c47;
L_00567c1d:; BB(0x00567c1d);
    /* 00567c1d: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00567c23: fcomp dword ptr [0x925ea0] */ fx_compare(ST(0), R_F32((u32)(0x925ea0u))); FPOP();
    /* 00567c29: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567c2b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567c2c: jae 0x567c47 */ if (!fC) goto L_00567c47;
L_00567c2e:; BB(0x00567c2e);
    /* 00567c2e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00567c30: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c32: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567c37u); f_0051f62c();
    /* 00567c37: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567c3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c3b: ret 4 */ FN_RET(0x00567a38); r_esp += 8; return;
L_00567c3e:; BB(0x00567c3e);
    /* 00567c3e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00567c40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c42: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567c47u); f_0051f62c();
L_00567c47:; BB(0x00567c47);
    /* 00567c47: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c4b: ret 4 */ FN_RET(0x00567a38); r_esp += 8; return;
L_00567c4e:; BB(0x00567c4e);
    /* 00567c4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c50: call 0x566910 */ r_esp -= 4; W32(r_esp, 0x567c55u); f_00566910();
    /* 00567c55: jmp 0x567a97 */ goto L_00567a97;
L_00567c5a:; BB(0x00567c5a);
    /* 00567c5a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00567c5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c5e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567c63u); f_0051f62c();
    /* 00567c63: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567c66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c67: ret 4 */ FN_RET(0x00567a38); r_esp += 8; return;
L_00567c6a:; BB(0x00567c6a);
    /* 00567c6a: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00567c6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c6e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x567c73u); f_0051f62c();
    /* 00567c73: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567c76: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567c77: ret 4 */ FN_RET(0x00567a38); r_esp += 8; return;
L_00567c7a:; BB(0x00567c7a);
    /* 00567c7a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00567c7c: mov eax, 2 */ r_eax = 0x2u;
    /* 00567c81: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00567c88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c8a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x567c8fu); f_0051f664();
    /* 00567c8f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00567c92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567c94: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x567c9au); call_ind(t); }
    /* 00567c9a: mov dword ptr [ebp + 0x49c], 0x3fcccccd */ W32((u32)(r_ebp+0x49cu), 0x3fcccccdu);
    /* 00567ca4: mov dword ptr [ebp + 0x520], 0 */ W32((u32)(r_ebp+0x520u), 0x0u);
    /* 00567cae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567cb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567cb2: ret 4 */ FN_RET(0x00567a38); r_esp += 8; return;
}

void f_00567cb8(void) /* sub_567CB8 */
{
    FN_ENTER(0x00567cb8);
    /* 00567cb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00567cb9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00567cba: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00567cbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00567cbf: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00567cc3: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567cc6: je 0x567fca */ if (fZ) goto L_00567fca;
L_00567ccc:; BB(0x00567ccc);
    /* 00567ccc: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567ccf: je 0x567f50 */ if (fZ) goto L_00567f50;
L_00567cd5:; BB(0x00567cd5);
    /* 00567cd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567cd7: jne 0x567f61 */ if (!fZ) goto L_00567f61;
L_00567cdd:; BB(0x00567cdd);
    /* 00567cdd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567cdf: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x567ce4u); f_007aa094();
    /* 00567ce4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567ce6: call 0x564760 */ r_esp -= 4; W32(r_esp, 0x567cebu); f_00564760();
    /* 00567ceb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567ced: je 0x567d25 */ if (fZ) goto L_00567d25;
L_00567cef:; BB(0x00567cef);
    /* 00567cef: mov edx, dword ptr [ebp + 0x398] */ r_edx = R32((u32)(r_ebp+0x398u));
    /* 00567cf5: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 00567cf8: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 00567cfb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00567cfd: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 00567d00: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 00567d03: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00567d05: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567d07: fcomp dword ptr [0xa73d0c] */ fx_compare(ST(0), R_F32((u32)(0xa73d0cu))); FPOP();
    /* 00567d0d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567d0f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567d10: jae 0x567d1c */ if (!fC) goto L_00567d1c;
L_00567d12:; BB(0x00567d12);
    /* 00567d12: mov dword ptr [ebp + 0x56c], 1 */ W32((u32)(r_ebp+0x56cu), 0x1u);
L_00567d1c:; BB(0x00567d1c);
    /* 00567d1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567d1e: call 0x564780 */ r_esp -= 4; W32(r_esp, 0x567d23u); f_00564780();
    /* 00567d23: jmp 0x567d2f */ goto L_00567d2f;
L_00567d25:; BB(0x00567d25);
    /* 00567d25: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00567d28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567d2a: call 0x564800 */ r_esp -= 4; W32(r_esp, 0x567d2fu); f_00564800();
L_00567d2f:; BB(0x00567d2f);
    /* 00567d2f: mov eax, dword ptr [ebp + 0x520] */ r_eax = R32((u32)(r_ebp+0x520u));
    /* 00567d35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567d37: je 0x567e40 */ if (fZ) goto L_00567e40;
L_00567d3d:; BB(0x00567d3d);
    /* 00567d3d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567d40: jne 0x567e07 */ if (!fZ) goto L_00567e07;
L_00567d46:; BB(0x00567d46);
    /* 00567d46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567d48: call 0x5680fc */ r_esp -= 4; W32(r_esp, 0x567d4du); f_005680fc();
    /* 00567d4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567d4f: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x567d54u); f_00521410();
    /* 00567d54: push 0x3ca3d70b */ { u32 v = 0x3ca3d70bu; r_esp -= 4; W32(r_esp, v); }
    /* 00567d59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567d5b: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x567d60u); f_005675fc();
    /* 00567d60: fld dword ptr [ebp + 0x4a0] */ FPUSH(R_F32((u32)(r_ebp+0x4a0u)));
    /* 00567d66: fcom dword ptr [0x925e5c] */ fx_compare(ST(0), R_F32((u32)(0x925e5cu))); 
    /* 00567d6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567d6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567d6f: ja 0x567dbf */ if ((!fC&&!fZ)) goto L_00567dbf;
L_00567d71:; BB(0x00567d71);
    /* 00567d71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00567d73: push 0x43b40000 */ { u32 v = 0x43b40000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567d78: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567d7a: mov dword ptr [ebp + 0x520], 2 */ W32((u32)(r_ebp+0x520u), 0x2u);
    /* 00567d84: push 0x43700000 */ { u32 v = 0x43700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567d89: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x567d8eu); f_00520c08();
    /* 00567d8e: fld dword ptr [ebp + 0x4a0] */ FPUSH(R_F32((u32)(r_ebp+0x4a0u)));
    /* 00567d94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567d96: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00567d9a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00567d9f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00567da4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00567da8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00567dac: fistp dword ptr [ebp + 0x524] */ W32((u32)(r_ebp+0x524u), (u32)fx_int32(ST(0))); FPOP();
    /* 00567db2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00567db6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00567db8: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_00567dbf:; BB(0x00567dbf);
    /* 00567dbf: fld dword ptr [0x925f40] */ FPUSH(R_F32((u32)(0x925f40u)));
    /* 00567dc5: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00567dc7: fld dword ptr [0x925e50] */ FPUSH(R_F32((u32)(0x925e50u)));
    /* 00567dcd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00567dcf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567dd1: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 00567dd7: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00567dda: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00567dde: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00567de3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00567de8: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00567dec: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00567df0: fistp dword ptr [esp] */ W32((u32)(r_esp), (u32)fx_int32(ST(0))); FPOP();
    /* 00567df3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00567df7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00567dfb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567dfd: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x567e02u); f_00521528();
    /* 00567e02: jmp 0x567f36 */ goto L_00567f36;
L_00567e07:; BB(0x00567e07);
    /* 00567e07: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567e0a: jne 0x567f36 */ if (!fZ) goto L_00567f36;
L_00567e10:; BB(0x00567e10);
    /* 00567e10: mov edx, dword ptr [ebp + 0x524] */ r_edx = R32((u32)(r_ebp+0x524u));
    /* 00567e16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00567e18: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00567e1f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00567e22: mov dword ptr [ebp + 0x524], edx */ W32((u32)(r_ebp+0x524u), r_edx);
    /* 00567e28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00567e2a: jle 0x567f69 */ if ((fZ||fS!=fO)) goto L_00567f69;
L_00567e30:; BB(0x00567e30);
    /* 00567e30: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00567e33: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567e35: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x567e3bu); call_ind(t); }
    /* 00567e3b: jmp 0x567f36 */ goto L_00567f36;
L_00567e40:; BB(0x00567e40);
    /* 00567e40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567e42: call 0x5680fc */ r_esp -= 4; W32(r_esp, 0x567e47u); f_005680fc();
    /* 00567e47: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567e49: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x567e4eu); f_00521410();
    /* 00567e4e: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00567e53: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567e55: call 0x5675fc */ r_esp -= 4; W32(r_esp, 0x567e5au); f_005675fc();
    /* 00567e5a: mov edx, dword ptr [ebp + 0x524] */ r_edx = R32((u32)(r_ebp+0x524u));
    /* 00567e60: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 00567e66: fcomp dword ptr [ebp + 0x538] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x538u))); FPOP();
    /* 00567e6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00567e6e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00567e71: mov dword ptr [ebp + 0x524], edx */ W32((u32)(r_ebp+0x524u), r_edx);
    /* 00567e77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00567e78: jb 0x567e7f */ if (fC) goto L_00567e7f;
L_00567e7a:; BB(0x00567e7a);
    /* 00567e7a: cmp edx, 0x64 */ {  u32 a = r_edx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00567e7d: jle 0x567e95 */ if ((fZ||fS!=fO)) goto L_00567e95;
L_00567e7f:; BB(0x00567e7f);
    /* 00567e7f: mov dword ptr [ebp + 0x520], 1 */ W32((u32)(r_ebp+0x520u), 0x1u);
    /* 00567e89: mov dword ptr [ebp + 0x49c], 0 */ W32((u32)(r_ebp+0x49cu), 0x0u);
    /* 00567e93: jmp 0x567ee8 */ goto L_00567ee8;
L_00567e95:; BB(0x00567e95);
    /* 00567e95: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00567e97: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567e99: call 0x520bb8 */ r_esp -= 4; W32(r_esp, 0x567e9eu); f_00520bb8();
    /* 00567e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567ea0: je 0x567ee8 */ if (fZ) goto L_00567ee8;
L_00567ea2:; BB(0x00567ea2);
    /* 00567ea2: mov dword ptr [ebp + 0x524], 0 */ W32((u32)(r_ebp+0x524u), 0x0u);
    /* 00567eac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567eae: call 0x56812c */ r_esp -= 4; W32(r_esp, 0x567eb3u); f_0056812c();
    /* 00567eb3: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567eb8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567eba: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00567ebf: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x567ec4u); f_00520c08();
    /* 00567ec4: fst dword ptr [ebp + 0x49c] */ W_F32((u32)(r_ebp+0x49cu), ST(0));
    /* 00567eca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00567ece: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 00567ed5: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x567edau); f_00782a34();
    /* 00567eda: fld dword ptr [0x925e64] */ FPUSH(R_F32((u32)(0x925e64u)));
    /* 00567ee0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567ee2: fstp dword ptr [ebp + 0x538] */ W_F32((u32)(r_ebp+0x538u), ST(0)); FPOP();
L_00567ee8:; BB(0x00567ee8);
    /* 00567ee8: fld dword ptr [0x925f40] */ FPUSH(R_F32((u32)(0x925f40u)));
    /* 00567eee: fld dword ptr [0x925e50] */ FPUSH(R_F32((u32)(0x925e50u)));
    /* 00567ef4: fld dword ptr [ebp + 0x4a0] */ FPUSH(R_F32((u32)(r_ebp+0x4a0u)));
    /* 00567efa: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00567efc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00567efe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00567f00: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 00567f06: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00567f0a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00567f0f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00567f14: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00567f18: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00567f1c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00567f20: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00567f24: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00567f28: push dword ptr [ebp + 0x4a0] */ { u32 v = R32((u32)(r_ebp+0x4a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00567f2e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567f30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00567f31: call 0x521528 */ r_esp -= 4; W32(r_esp, 0x567f36u); f_00521528();
L_00567f36:; BB(0x00567f36);
    /* 00567f36: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00567f39: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567f3b: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x567f41u); call_ind(t); }
    /* 00567f41: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567f43: call 0x7b7e9c */ r_esp -= 4; W32(r_esp, 0x567f48u); f_007b7e9c();
    /* 00567f48: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567f4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567f4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00567f4d: ret 4 */ FN_RET(0x00567cb8); r_esp += 8; return;
L_00567f50:; BB(0x00567f50);
    /* 00567f50: mov eax, dword ptr [ebp + 0x56c] */ r_eax = R32((u32)(r_ebp+0x56cu));
    /* 00567f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00567f58: je 0x567f61 */ if (fZ) goto L_00567f61;
L_00567f5a:; BB(0x00567f5a);
    /* 00567f5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567f5c: call 0x567668 */ r_esp -= 4; W32(r_esp, 0x567f61u); f_00567668();
L_00567f61:; BB(0x00567f61);
    /* 00567f61: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00567f64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00567f65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00567f66: ret 4 */ FN_RET(0x00567cb8); r_esp += 8; return;
L_00567f69:; BB(0x00567f69);
    /* 00567f69: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567f6b: call 0x56812c */ r_esp -= 4; W32(r_esp, 0x567f70u); f_0056812c();
    /* 00567f70: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00567f75: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567f77: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00567f7c: call 0x520c08 */ r_esp -= 4; W32(r_esp, 0x567f81u); f_00520c08();
    /* 00567f81: fst dword ptr [ebp + 0x49c] */ W_F32((u32)(r_ebp+0x49cu), ST(0));
    /* 00567f87: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00567f8b: mov dword ptr [ebp + 0x4a0], 0 */ W32((u32)(r_ebp+0x4a0u), 0x0u);
    /* 00567f95: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 00567f9c: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x567fa1u); f_00782a34();
    /* 00567fa1: fld dword ptr [0x925e64] */ FPUSH(R_F32((u32)(0x925e64u)));
    /* 00567fa7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00567fa9: fstp dword ptr [ebp + 0x538] */ W_F32((u32)(r_ebp+0x538u), ST(0)); FPOP();
    /* 00567faf: mov eax, 1 */ r_eax = 0x1u;
    /* 00567fb4: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00567fbb: mov dword ptr [ebp + 0x520], 0 */ W32((u32)(r_ebp+0x520u), 0x0u);
    /* 00567fc5: jmp 0x567e30 */ goto L_00567e30;
L_00567fca:; BB(0x00567fca);
    /* 00567fca: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00567fcc: mov eax, 1 */ r_eax = 0x1u;
    /* 00567fd1: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 00567fd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567fda: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x567fdfu); f_0051f664();
    /* 00567fdf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00567fe2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567fe4: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x567feau); call_ind(t); }
    /* 00567fea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00567fec: mov dword ptr [ebp + 0x524], eax */ W32((u32)(r_ebp+0x524u), r_eax);
    /* 00567ff2: mov dword ptr [ebp + 0x520], eax */ W32((u32)(r_ebp+0x520u), r_eax);
    /* 00567ff8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00567ffa: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x567fffu); f_007751b0();
    /* 00567fff: fld dword ptr [0x925e48] */ FPUSH(R_F32((u32)(0x925e48u)));
    /* 00568005: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00568007: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0056800b: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00568010: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00568015: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00568019: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0056801d: fistp dword ptr [ebp + 0x528] */ W32((u32)(r_ebp+0x528u), (u32)fx_int32(ST(0))); FPOP();
    /* 00568023: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00568027: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568029: mov dword ptr [ebp + 0x56c], 0 */ W32((u32)(r_ebp+0x56cu), 0x0u);
    /* 00568033: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x568038u); f_007751b0();
    /* 00568038: fld dword ptr [0x925e44] */ FPUSH(R_F32((u32)(0x925e44u)));
    /* 0056803e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00568040: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00568044: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00568049: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056804e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00568052: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00568056: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0056805a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0056805e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00568060: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00568064: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x568069u); f_007751b0();
    /* 00568069: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0056806d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00568071: fmul dword ptr [0x925e3c] */ ST(0) = ST(0) * R_F32((u32)(0x925e3cu));
    /* 00568077: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0056807b: mov ecx, edi */ r_ecx = r_edi;
    /* 0056807d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x568082u); f_0082dcbc();
    /* 00568082: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 00568086: fadd dword ptr [ebp + 0x490] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x490u));
    /* 0056808c: fstp dword ptr [ebp + 0x39c] */ W_F32((u32)(r_ebp+0x39cu), ST(0)); FPOP();
    /* 00568092: mov ecx, edi */ r_ecx = r_edi;
    /* 00568094: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x568099u); f_0082ddd8();
    /* 00568099: fmul dword ptr [esp + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x20u));
    /* 0056809d: fadd dword ptr [ebp + 0x498] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x498u));
    /* 005680a3: fstp dword ptr [ebp + 0x3a4] */ W_F32((u32)(r_ebp+0x3a4u), ST(0)); FPOP();
    /* 005680a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005680ab: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5680b0u); f_007751b0();
    /* 005680b0: fld dword ptr [0x925e40] */ FPUSH(R_F32((u32)(0x925e40u)));
    /* 005680b6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005680b8: fadd dword ptr [0x925e38] */ ST(0) = ST(0) + R_F32((u32)(0x925e38u));
    /* 005680be: fst dword ptr [ebp + 0x49c] */ W_F32((u32)(r_ebp+0x49cu), ST(0));
    /* 005680c4: mov dword ptr [ebp + 0x4a0], 0 */ W32((u32)(r_ebp+0x4a0u), 0x0u);
    /* 005680ce: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005680d2: mov dword ptr [esp], 0x200 */ W32((u32)(r_esp), 0x200u);
    /* 005680d9: call 0x782a34 */ r_esp -= 4; W32(r_esp, 0x5680deu); f_00782a34();
    /* 005680de: fld dword ptr [0x925e64] */ FPUSH(R_F32((u32)(0x925e64u)));
    /* 005680e4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005680e6: fstp dword ptr [ebp + 0x538] */ W_F32((u32)(r_ebp+0x538u), ST(0)); FPOP();
    /* 005680ec: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005680ee: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5680f3u); f_00521410();
    /* 005680f3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005680f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005680f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005680f8: ret 4 */ FN_RET(0x00567cb8); r_esp += 8; return;
}

