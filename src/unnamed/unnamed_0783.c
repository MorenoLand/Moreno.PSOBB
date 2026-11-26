#include "protos.h"

void f_00783000(void) /* sub_783000 */
{
    FN_ENTER(0x00783000);
    /* 00783000: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00783001: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00783002: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00783005: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00783008: push dword ptr [0xa9c148] */ { u32 v = R32((u32)(0xa9c148u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078300e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078300f: call 0x82c21c */ r_esp -= 4; W32(r_esp, 0x783014u); f_0082c21c();
    /* 00783014: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00783018: push 0x1818c */ { u32 v = 0x1818cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078301d: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0078301f: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 00783025: push dword ptr [esp + 0x64] */ { u32 v = R32((u32)(r_esp+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00783029: call 0x6c1e34 */ r_esp -= 4; W32(r_esp, 0x78302eu); f_006c1e34();
    /* 0078302e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00783031: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00783033: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00783035: jne 0x783042 */ if (!fZ) goto L_00783042;
L_00783037:; BB(0x00783037);
    /* 00783037: mov eax, 1 */ r_eax = 0x1u;
    /* 0078303c: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078303f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783040: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00783041: ret  */ FN_RET(0x00783000); r_esp += 4; return;
L_00783042:; BB(0x00783042);
    /* 00783042: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00783044: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783047: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783048: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00783049: ret  */ FN_RET(0x00783000); r_esp += 4; return;
}

void f_0078304c(void) /* sub_78304C */
{
    FN_ENTER(0x0078304c);
    /* 0078304c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078304f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00783053: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00783055: je 0x783089 */ if (fZ) goto L_00783089;
L_00783057:; BB(0x00783057);
    /* 00783057: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00783059: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0078305c: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0078305f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
L_00783063:; BB(0x00783063);
    /* 00783063: mov dword ptr [esp + 8], 0x43accccd */ W32((u32)(r_esp+0x8u), 0x43accccdu);
    /* 0078306b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0078306e: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00783072: mov dword ptr [esp + 0xc], 0x4381999a */ W32((u32)(r_esp+0xcu), 0x4381999au);
    /* 0078307a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0078307c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0078307d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0078307e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00783080: call 0x501f00 */ r_esp -= 4; W32(r_esp, 0x783085u); f_00501f00();
    /* 00783085: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783088: ret  */ FN_RET(0x0078304c); r_esp += 4; return;
L_00783089:; BB(0x00783089);
    /* 00783089: mov dword ptr [esp], 0x43400000 */ W32((u32)(r_esp), 0x43400000u);
    /* 00783090: mov dword ptr [esp + 4], 0x43100000 */ W32((u32)(r_esp+0x4u), 0x43100000u);
    /* 00783098: jmp 0x783063 */ goto L_00783063;
}

void f_0078309c(void) /* sub_78309C */
{
    FN_ENTER(0x0078309c);
    /* 0078309c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078309d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0078309f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007830a1: call 0x7830ac */ r_esp -= 4; W32(r_esp, 0x7830a6u); f_007830ac();
    /* 007830a6: mov eax, ebp */ r_eax = r_ebp;
    /* 007830a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007830a9: ret  */ FN_RET(0x0078309c); r_esp += 4; return;
}

void f_007830ac(void) /* sub_7830AC */
{
    FN_ENTER(0x007830ac);
    /* 007830ac: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 007830b3: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 007830b9: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 007830c0: mov dword ptr [ecx + 8], 0 */ W32((u32)(r_ecx+0x8u), 0x0u);
    /* 007830c7: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 007830ce: mov dword ptr [ecx + 0x14], 0 */ W32((u32)(r_ecx+0x14u), 0x0u);
    /* 007830d5: mov dword ptr [ecx + 0x10], 0 */ W32((u32)(r_ecx+0x10u), 0x0u);
    /* 007830dc: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 007830e3: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 007830ea: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007830f1: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 007830f8: ret  */ FN_RET(0x007830ac); r_esp += 4; return;
}

void f_007830fc(void) /* sub_7830FC */
{
    FN_ENTER(0x007830fc);
    /* 007830fc: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007830ff: call 0x783108 */ r_esp -= 4; W32(r_esp, 0x783104u); f_00783108();
    /* 00783104: ret  */ FN_RET(0x007830fc); r_esp += 4; return;
}

void f_00783108(void) /* sub_783108 */
{
    FN_ENTER(0x00783108);
    /* 00783108: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0078310c: fld dword ptr [0x9799bc] */ FPUSH(R_F32((u32)(0x9799bcu)));
    /* 00783112: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00783114: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783116: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783117: jbe 0x78311e */ if ((fC||fZ)) goto L_0078311e;
L_00783119:; BB(0x00783119);
    /* 00783119: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078311b: ret 4 */ FN_RET(0x00783108); r_esp += 8; return;
L_0078311e:; BB(0x0078311e);
    /* 0078311e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783120: fcom dword ptr [ecx + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x10u))); 
    /* 00783123: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783125: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783126: jae 0x783134 */ if (!fC) goto L_00783134;
L_00783128:; BB(0x00783128);
    /* 00783128: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078312a: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 0078312c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078312e: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00783131: ret 4 */ FN_RET(0x00783108); r_esp += 8; return;
L_00783134:; BB(0x00783134);
    /* 00783134: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00783137: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00783139: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078313b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078313c: jbe 0x78314a */ if ((fC||fZ)) goto L_0078314a;
L_0078313e:; BB(0x0078313e);
    /* 0078313e: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783140: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783142: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783144: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00783147: ret 4 */ FN_RET(0x00783108); r_esp += 8; return;
L_0078314a:; BB(0x0078314a);
    /* 0078314a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078314c: fcom dword ptr [ecx + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x18u))); 
    /* 0078314f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783151: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783152: jae 0x783161 */ if (!fC) goto L_00783161;
L_00783154:; BB(0x00783154);
    /* 00783154: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783156: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00783158: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 0078315b: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 0078315e: ret 4 */ FN_RET(0x00783108); r_esp += 8; return;
L_00783161:; BB(0x00783161);
    /* 00783161: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783163: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783165: ret 4 */ FN_RET(0x00783108); r_esp += 8; return;
}

void f_00783168(void) /* sub_783168 */
{
    FN_ENTER(0x00783168);
    /* 00783168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00783169: mov edi, ecx */ r_edi = r_ecx;
    /* 0078316b: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0078316e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00783172: mov ecx, edi */ r_ecx = r_edi;
    /* 00783174: call 0x78318c */ r_esp -= 4; W32(r_esp, 0x783179u); f_0078318c();
    /* 00783179: fld dword ptr [0x9799b8] */ FPUSH(R_F32((u32)(0x9799b8u)));
    /* 0078317f: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 00783182: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00783185: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00783186: ret 4 */ FN_RET(0x00783168); r_esp += 8; return;
}

void f_0078318c(void) /* sub_78318C */
{
    FN_ENTER(0x0078318c);
    /* 0078318c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00783190: fcom dword ptr [0x9799b4] */ fx_compare(ST(0), R_F32((u32)(0x9799b4u))); 
    /* 00783196: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783198: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fO = 0; }
    /* 0078319a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078319b: jae 0x7831a9 */ if (!fC) goto L_007831a9;
L_0078319d:; BB(0x0078319d);
    /* 0078319d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078319f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007831a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007831a5: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007831a7: jmp 0x78321e */ goto L_0078321e;
L_007831a9:; BB(0x007831a9);
    /* 007831a9: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 007831ac: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007831ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007831b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007831b1: jbe 0x7831cc */ if ((fC||fZ)) goto L_007831cc;
L_007831b3:; BB(0x007831b3);
    /* 007831b3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007831b5: fld dword ptr [0x9799b0] */ FPUSH(R_F32((u32)(0x9799b0u)));
    /* 007831bb: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 007831bd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007831bf: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 007831c2: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007831c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007831c8: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007831ca: jmp 0x78321e */ goto L_0078321e;
L_007831cc:; BB(0x007831cc);
    /* 007831cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007831ce: fcom dword ptr [ecx + 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x14u))); 
    /* 007831d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007831d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007831d4: jae 0x7831e6 */ if (!fC) goto L_007831e6;
L_007831d6:; BB(0x007831d6);
    /* 007831d6: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007831d8: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 007831db: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 007831de: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007831e2: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007831e4: jmp 0x78321e */ goto L_0078321e;
L_007831e6:; BB(0x007831e6);
    /* 007831e6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007831e8: fld dword ptr [ecx + 0x18] */ FPUSH(R_F32((u32)(r_ecx+0x18u)));
    /* 007831eb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007831ed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007831ef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007831f0: jbe 0x78320c */ if ((fC||fZ)) goto L_0078320c;
L_007831f2:; BB(0x007831f2);
    /* 007831f2: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007831f4: fld dword ptr [0x9799b0] */ FPUSH(R_F32((u32)(0x9799b0u)));
    /* 007831fa: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 007831fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007831ff: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00783201: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00783205: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 00783208: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 0078320a: jmp 0x78321e */ goto L_0078321e;
L_0078320c:; BB(0x0078320c);
    /* 0078320c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078320e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783210: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00783214: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00783217: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00783219: mov edx, 1 */ r_edx = 0x1u;
L_0078321e:; BB(0x0078321e);
    /* 0078321e: mov eax, edx */ r_eax = r_edx;
    /* 00783220: ret 8 */ FN_RET(0x0078318c); r_esp += 12; return;
}

void f_00783224(void) /* sub_783224 */
{
    FN_ENTER(0x00783224);
    /* 00783224: mov dword ptr [0xa9c138], 0x3f800000 */ W32((u32)(0xa9c138u), 0x3f800000u);
    /* 0078322e: mov dword ptr [0xa9c13c], 0x41000000 */ W32((u32)(0xa9c13cu), 0x41000000u);
    /* 00783238: mov dword ptr [0xa9c140], 0x3fc00000 */ W32((u32)(0xa9c140u), 0x3fc00000u);
    /* 00783242: ret  */ FN_RET(0x00783224); r_esp += 4; return;
}

void f_00783230(void)
{
    FN_ENTER(0x00783230);
    /* 00783230: cmp al, 0xc1 */ {  u32 a = (u8)r_eax; u32 b = 0xc1u; u32 r = (a - b) & 0xffu;   }
    /* 00783232: test eax, 0 */ {  u32 a = r_eax; u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 00783237: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00783238: mov dword ptr [0xa9c140], 0x3fc00000 */ W32((u32)(0xa9c140u), 0x3fc00000u);
    /* 00783242: ret  */ FN_RET(0x00783230); r_esp += 4; return;
}

void f_00783244(void) /* sub_783244 */
{
    FN_ENTER(0x00783244);
    /* 00783244: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783245: mov esi, ecx */ r_esi = r_ecx;
    /* 00783247: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0078324b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0078324f: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00783253: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00783257: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0078325b: fld dword ptr [0x9799a0] */ FPUSH(R_F32((u32)(0x9799a0u)));
    /* 00783261: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00783263: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783265: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00783269: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 00783270: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783271: jb 0x783289 */ if (fC) goto L_00783289;
L_00783273:; BB(0x00783273);
    /* 00783273: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783275: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00783277: fld dword ptr [0x97999c] */ FPUSH(R_F32((u32)(0x97999cu)));
    /* 0078327d: fld dword ptr [0x97999c] */ FPUSH(R_F32((u32)(0x97999cu)));
    /* 00783283: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00783285: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783287: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_00783289:; BB(0x00783289);
    /* 00783289: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078328b: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 0078328d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078328f: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00783291: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783292: ja 0x7832aa */ if ((!fC&&!fZ)) goto L_007832aa;
L_00783294:; BB(0x00783294);
    /* 00783294: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00783296: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783298: fld dword ptr [0x979998] */ FPUSH(R_F32((u32)(0x979998u)));
    /* 0078329e: fld dword ptr [0x979998] */ FPUSH(R_F32((u32)(0x979998u)));
    /* 007832a4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007832a6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007832a8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_007832aa:; BB(0x007832aa);
    /* 007832aa: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007832ae: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007832b2: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007832b6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007832b8: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 007832bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007832bd: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007832bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007832c1: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 007832c4: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 007832c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007832c8: jae 0x7832de */ if (!fC) goto L_007832de;
L_007832ca:; BB(0x007832ca);
    /* 007832ca: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 007832cc: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 007832ce: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007832d0: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
    /* 007832d2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007832d4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007832d6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007832d8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007832da: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007832dc: jmp 0x7832e2 */ goto L_007832e2;
L_007832de:; BB(0x007832de);
    /* 007832de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007832e0: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
L_007832e2:; BB(0x007832e2);
    /* 007832e2: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 007832e4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007832e6: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 007832e8: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007832ea: fmul dword ptr [0x979990] */ ST(0) = ST(0) * R_F32((u32)(0x979990u));
    /* 007832f0: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 007832f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007832f4: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 007832f6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007832f8: fmul dword ptr [0x979994] */ ST(0) = ST(0) * R_F32((u32)(0x979994u));
    /* 007832fe: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 00783300: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00783302: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00783304: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 00783308: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078330a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078330b: jb 0x7833b3 */ if (fC) goto L_007833b3;
L_00783311:; BB(0x00783311);
    /* 00783311: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783313: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783315: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00783317: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 0078331b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078331d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078331e: jbe 0x783356 */ if ((fC||fZ)) goto L_00783356;
L_00783320:; BB(0x00783320);
    /* 00783320: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00783322: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00783324: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783326: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783328: fmul dword ptr [0x979990] */ ST(0) = ST(0) * R_F32((u32)(0x979990u));
    /* 0078332e: fdiv dword ptr [esp + 0x10] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x10u));
    /* 00783332: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
    /* 00783335: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00783337: mov dword ptr [esi + 0x24], edx */ W32((u32)(r_esi+0x24u), r_edx);
    /* 0078333a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078333c: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0078333f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00783341: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00783344: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00783346: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00783349: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078334b: fchs  */ ST(0) = -ST(0);
    /* 0078334d: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0078334f: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 00783352: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783353: ret 0x14 */ FN_RET(0x00783244); r_esp += 24; return;
L_00783356:; BB(0x00783356);
    /* 00783356: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00783358: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078335a: fld dword ptr [0x97998c] */ FPUSH(R_F32((u32)(0x97998cu)));
    /* 00783360: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00783362: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00783364: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783366: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 00783369: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078336b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0078336d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0078336e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783370: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 00783374: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00783376: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783379: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78337eu); f_0082dc9c();
    /* 0078337e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00783380: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783382: fst dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0));
    /* 00783385: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00783387: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00783389: fmul dword ptr [0x979994] */ ST(0) = ST(0) * R_F32((u32)(0x979994u));
    /* 0078338f: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00783391: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00783393: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 00783395: fst dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0));
    /* 00783398: fstp dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0)); FPOP();
    /* 0078339b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078339d: fst dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0));
    /* 007833a0: fst dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0));
    /* 007833a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007833a5: fchs  */ ST(0) = -ST(0);
    /* 007833a7: fdiv dword ptr [esi + 4] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x4u));
    /* 007833aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007833ac: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 007833af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007833b0: ret 0x14 */ FN_RET(0x00783244); r_esp += 24; return;
L_007833b3:; BB(0x007833b3);
    /* 007833b3: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 007833b5: fsubr dword ptr [esp + 0x10] */ ST(0) = R_F32((u32)(r_esp+0x10u)) - ST(0);
    /* 007833b9: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007833bd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007833bf: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 007833c2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007833c4: fst dword ptr [esi + 0x20] */ W_F32((u32)(r_esi+0x20u), ST(0));
    /* 007833c7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007833c9: fst dword ptr [esi + 0x24] */ W_F32((u32)(r_esi+0x24u), ST(0));
    /* 007833cc: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 007833ce: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 007833d0: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 007833d2: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007833d4: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 007833d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007833d8: fst dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0));
    /* 007833db: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007833dd: fst dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0));
    /* 007833e0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007833e2: fchs  */ ST(0) = -ST(0);
    /* 007833e4: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 007833e6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007833e8: fstp dword ptr [esi + 0x18] */ W_F32((u32)(r_esi+0x18u), ST(0)); FPOP();
    /* 007833eb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007833ec: ret 0x14 */ FN_RET(0x00783244); r_esp += 24; return;
}

void f_007833f0(void) /* sub_7833F0 */
{
    FN_ENTER(0x007833f0);
    /* 007833f0: mov dword ptr [0x9f9858], 0x43a00000 */ W32((u32)(0x9f9858u), 0x43a00000u);
    /* 007833fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007833fc: mov byte ptr [0xa9c150], al */ W8((u32)(0xa9c150u), (u8)r_eax);
    /* 00783401: mov dword ptr [0x9f985c], 0x43700000 */ W32((u32)(0x9f985cu), 0x43700000u);
    /* 0078340b: mov dword ptr [0xa9c148], eax */ W32((u32)(0xa9c148u), r_eax);
    /* 00783410: mov word ptr [0xa9c14c], ax */ W16((u32)(0xa9c14cu), (u16)r_eax);
    /* 00783416: ret  */ FN_RET(0x007833f0); r_esp += 4; return;
}

void f_00783418(void) /* sub_783418 */
{
    FN_ENTER(0x00783418);
    /* 00783418: push 0x24000 */ { u32 v = 0x24000u; r_esp -= 4; W32(r_esp, v); }
    /* 0078341d: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x783422u); f_0082e940();
    /* 00783422: mov dword ptr [0xa9c148], eax */ W32((u32)(0xa9c148u), r_eax);
    /* 00783427: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00783429: mov word ptr [0xa9c14c], ax */ W16((u32)(0xa9c14cu), (u16)r_eax);
    /* 0078342f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783430: call 0x502fac */ r_esp -= 4; W32(r_esp, 0x783435u); f_00502fac();
    /* 00783435: mov dword ptr [0xa9c144], 0 */ W32((u32)(0xa9c144u), 0x0u);
    /* 0078343f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783442: ret  */ FN_RET(0x00783418); r_esp += 4; return;
}

void f_00783444(void) /* sub_783444 */
{
    FN_ENTER(0x00783444);
    /* 00783444: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783445: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00783447: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0078344b: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0078344f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00783453: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00783457: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0078345b: fld dword ptr [0x979980] */ FPUSH(R_F32((u32)(0x979980u)));
    /* 00783461: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 00783463: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783465: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783466: jb 0x78347b */ if (fC) goto L_0078347b;
L_00783468:; BB(0x00783468);
    /* 00783468: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0078346a: fld dword ptr [0x97997c] */ FPUSH(R_F32((u32)(0x97997cu)));
    /* 00783470: mov dword ptr [ebp], 0x3dcccccd */ W32((u32)(r_ebp), 0x3dcccccdu);
    /* 00783477: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00783479: jmp 0x783482 */ goto L_00783482;
L_0078347b:; BB(0x0078347b);
    /* 0078347b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078347f: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
L_00783482:; BB(0x00783482);
    /* 00783482: fcomp st(3) */ fx_compare(ST(0), ST(3)); FPOP();
    /* 00783484: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783486: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783487: ja 0x78349c */ if ((!fC&&!fZ)) goto L_0078349c;
L_00783489:; BB(0x00783489);
    /* 00783489: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078348b: fld dword ptr [0x979978] */ FPUSH(R_F32((u32)(0x979978u)));
    /* 00783491: mov dword ptr [ebp + 4], 0xbdcccccd */ W32((u32)(r_ebp+0x4u), 0xbdcccccdu);
    /* 00783498: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078349a: jmp 0x7834a3 */ goto L_007834a3;
L_0078349c:; BB(0x0078349c);
    /* 0078349c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007834a0: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
L_007834a3:; BB(0x007834a3);
    /* 007834a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007834a7: fld dword ptr [0x979974] */ FPUSH(R_F32((u32)(0x979974u)));
    /* 007834ad: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 007834af: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007834b1: fld dword ptr [0x979974] */ FPUSH(R_F32((u32)(0x979974u)));
    /* 007834b7: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007834b9: fdiv st(6) */ ST(0) = ST(0) / ST(6);
    /* 007834bb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 007834bd: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 007834c0: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 007834c3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007834c5: fchs  */ ST(0) = -ST(0);
    /* 007834c7: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007834c9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007834cb: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 007834cd: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007834cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007834d1: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 007834d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007834d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007834d6: jae 0x78350b */ if (!fC) goto L_0078350b;
L_007834d8:; BB(0x007834d8);
    /* 007834d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007834da: fdivr st(5), st(0) */ ST(5) = ST(0) / ST(5);
    /* 007834dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007834de: fst dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0));
    /* 007834e1: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007834e3: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 007834e6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007834e8: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 007834ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007834ec: fst dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0));
    /* 007834ef: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 007834f1: fdiv st(3), st(0) */ ST(3) = ST(3) / ST(0);
    /* 007834f3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007834f5: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007834f7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007834f9: fst dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0));
    /* 007834fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007834fe: fchs  */ ST(0) = -ST(0);
    /* 00783500: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00783502: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00783504: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00783507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00783508: ret 0x10 */ FN_RET(0x00783444); r_esp += 20; return;
L_0078350b:; BB(0x0078350b);
    /* 0078350b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078350d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078350f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783511: fld dword ptr [0x979970] */ FPUSH(R_F32((u32)(0x979970u)));
    /* 00783517: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00783519: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0078351b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0078351d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0078351f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00783521: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00783523: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00783524: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783527: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x78352cu); f_0082dc9c();
    /* 0078352c: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 0078352f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783531: fst dword ptr [ebp + 8] */ W_F32((u32)(r_ebp+0x8u), ST(0));
    /* 00783534: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00783536: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00783538: fmul dword ptr [0x979974] */ ST(0) = ST(0) * R_F32((u32)(0x979974u));
    /* 0078353e: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00783540: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00783542: fdivrp st(3) */ ST(3) = ST(0) / ST(3); FPOP();
    /* 00783544: fst dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0));
    /* 00783547: fstp dword ptr [ebp + 0x18] */ W_F32((u32)(r_ebp+0x18u), ST(0)); FPOP();
    /* 0078354a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078354c: fst dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0));
    /* 0078354f: fst dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0));
    /* 00783552: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783554: fchs  */ ST(0) = -ST(0);
    /* 00783556: fdiv dword ptr [ebp + 4] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0x4u));
    /* 00783559: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078355b: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0078355e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078355f: ret 0x10 */ FN_RET(0x00783444); r_esp += 20; return;
}

void f_00783564(void) /* sub_783564 */
{
    FN_ENTER(0x00783564);
    /* 00783564: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783565: mov ebp, esp */ r_ebp = r_esp;
    /* 00783567: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00783569: push 0x8f458c */ { u32 v = 0x8f458cu; r_esp -= 4; W32(r_esp, v); }
    /* 0078356e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00783574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783575: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0078357c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078357f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00783582: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00783585: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00783588: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0078358b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0078358e: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00783591: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00783598: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78359du); f_008171e8();
    /* 0078359d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007835a0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007835a2: jne 0x7835b4 */ if (!fZ) goto L_007835b4;
L_007835a4:; BB(0x007835a4);
    /* 007835a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007835a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007835ae: mov esp, ebp */ r_esp = r_ebp;
    /* 007835b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007835b1: ret 4 */ FN_RET(0x00783564); r_esp += 8; return;
L_007835b4:; BB(0x007835b4);
    /* 007835b4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007835b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007835b8: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7835bdu); f_00858882();
    /* 007835bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007835be: jmp 0x7835a4 */ goto L_007835a4;
}

void f_007835c0(void)
{
    FN_ENTER(0x007835c0);
    /* 007835c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007835c2: mov ecx, 0xa9c170 */ r_ecx = 0xa9c170u;
    /* 007835c7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7835ccu); f_008193cc();
    /* 007835cc: mov dword ptr [0xa9c170], 0xb44790 */ W32((u32)(0xa9c170u), 0xb44790u);
    /* 007835d6: push 0x7835e4 */ { u32 v = 0x7835e4u; r_esp -= 4; W32(r_esp, v); }
    /* 007835db: call 0x85909d */ r_esp -= 4; W32(r_esp, 0x7835e0u); f_0085909d();
    /* 007835e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007835e1: ret  */ FN_RET(0x007835c0); r_esp += 4; return;
}

void f_007835e4(void) /* sub_7835E4 */
{
    FN_ENTER(0x007835e4);
    /* 007835e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007835e5: mov ebp, esp */ r_ebp = r_esp;
    /* 007835e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007835e9: push 0x8f45a8 */ { u32 v = 0x8f45a8u; r_esp -= 4; W32(r_esp, v); }
    /* 007835ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007835f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007835f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007835fc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007835ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00783602: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00783605: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00783608: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078360b: mov dword ptr [ebp - 0x20], 0xa9c170 */ W32((u32)(r_ebp+0xffffffe0u), 0xa9c170u);
    /* 00783612: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00783619: mov ecx, 0xa9c170 */ r_ecx = 0xa9c170u;
    /* 0078361e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x783623u); f_008171e8();
    /* 00783623: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00783626: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078362d: mov esp, ebp */ r_esp = r_ebp;
    /* 0078362f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00783630: ret  */ FN_RET(0x007835e4); r_esp += 4; return;
}

void f_00783634(void) /* sub_783634 */
{
    FN_ENTER(0x00783634);
    /* 00783634: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00783635: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00783637: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00783639: call 0x783658 */ r_esp -= 4; W32(r_esp, 0x78363eu); f_00783658();
    /* 0078363e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00783642: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00783644: jne 0x78364a */ if (!fZ) goto L_0078364a;
L_00783646:; BB(0x00783646);
    /* 00783646: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783647: ret 4 */ FN_RET(0x00783634); r_esp += 8; return;
L_0078364a:; BB(0x0078364a);
    /* 0078364a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078364b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x783650u); f_005c2f74();
    /* 00783650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00783651: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783652: ret 4 */ FN_RET(0x00783634); r_esp += 8; return;
}

void f_00783658(void) /* sub_783658 */
{
    FN_ENTER(0x00783658);
    /* 00783658: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783659: mov ebp, esp */ r_ebp = r_esp;
    /* 0078365b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078365d: push 0x8f45c4 */ { u32 v = 0x8f45c4u; r_esp -= 4; W32(r_esp, v); }
    /* 00783662: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00783668: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783669: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00783670: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00783673: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00783676: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00783679: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078367c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078367f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00783682: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00783685: mov dword ptr [ecx], 0xb447f0 */ W32((u32)(r_ecx), 0xb447f0u);
    /* 0078368b: mov dword ptr [0xa9c1d4], 0 */ W32((u32)(0xa9c1d4u), 0x0u);
    /* 00783695: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078369c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7836a1u); f_008171e8();
    /* 007836a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007836a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007836ab: mov esp, ebp */ r_esp = r_ebp;
    /* 007836ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007836ae: ret  */ FN_RET(0x00783658); r_esp += 4; return;
}

void f_007836b0(void) /* sub_7836B0 */
{
    FN_ENTER(0x007836b0);
    /* 007836b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007836b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007836b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007836b3: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007836b6: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 007836ba: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 007836be: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007836c0: jl 0x783934 */ if ((fS!=fO)) goto L_00783934;
L_007836c6:; BB(0x007836c6);
    /* 007836c6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007836c8: jle 0x783934 */ if ((fZ||fS!=fO)) goto L_00783934;
L_007836ce:; BB(0x007836ce);
    /* 007836ce: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007836d0: jne 0x7836f4 */ if (!fZ) goto L_007836f4;
L_007836d2:; BB(0x007836d2);
    /* 007836d2: mov edx, dword ptr [0xa9c1d4] */ r_edx = R32((u32)(0xa9c1d4u));
    /* 007836d8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007836da: je 0x78393b */ if (fZ) goto L_0078393b;
L_007836e0:; BB(0x007836e0);
    /* 007836e0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007836e4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007836e9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007836ed: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007836f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007836f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007836f2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007836f3: ret  */ FN_RET(0x007836b0); r_esp += 4; return;
L_007836f4:; BB(0x007836f4);
    /* 007836f4: mov ebx, dword ptr [0xa9c1d4] */ r_ebx = R32((u32)(0xa9c1d4u));
    /* 007836fa: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007836fc: je 0x783934 */ if (fZ) goto L_00783934;
L_00783702:; BB(0x00783702);
    /* 00783702: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00783704: je 0x783934 */ if (fZ) goto L_00783934;
L_0078370a:; BB(0x0078370a);
    /* 0078370a: fld dword ptr [0x979b64] */ FPUSH(R_F32((u32)(0x979b64u)));
    /* 00783710: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00783713: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00783716: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 0078371a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0078371e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00783720: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00783722: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783724: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783725: jae 0x78373e */ if (!fC) goto L_0078373e;
L_00783727:; BB(0x00783727);
    /* 00783727: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783729: fld dword ptr [0x979b64] */ FPUSH(R_F32((u32)(0x979b64u)));
    /* 0078372f: fld dword ptr [0x979b60] */ FPUSH(R_F32((u32)(0x979b60u)));
    /* 00783735: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00783737: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 0078373a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078373c: jmp 0x783752 */ goto L_00783752;
L_0078373e:; BB(0x0078373e);
    /* 0078373e: fld dword ptr [0x979b60] */ FPUSH(R_F32((u32)(0x979b60u)));
    /* 00783744: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00783746: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783748: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783749: ja 0x78374d */ if ((!fC&&!fZ)) goto L_0078374d;
L_0078374b:; BB(0x0078374b);
    /* 0078374b: fst st(1) */ ST(1) = ST(0);
L_0078374d:; BB(0x0078374d);
    /* 0078374d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078374f: fst dword ptr [ebx + 0x1c] */ W_F32((u32)(r_ebx+0x1cu), ST(0));
L_00783752:; BB(0x00783752);
    /* 00783752: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00783755: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00783757: je 0x783979 */ if (fZ) goto L_00783979;
L_0078375d:; BB(0x0078375d);
    /* 0078375d: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 00783760: cmp edx, dword ptr [ebx + 0x44] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x44u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00783763: lea esi, [ebx + 0x44] */ r_esi = (u32)(r_ebx+0x44u);
    /* 00783766: jne 0x783771 */ if (!fZ) goto L_00783771;
L_00783768:; BB(0x00783768);
    /* 00783768: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078376a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078376c: jmp 0x78392c */ goto L_0078392c;
L_00783771:; BB(0x00783771);
    /* 00783771: fcom dword ptr [ebx + 0x48] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x48u))); 
    /* 00783774: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783776: lea edi, [ebx + 0x48] */ r_edi = (u32)(r_ebx+0x48u);
    /* 00783779: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078377a: je 0x78397f */ if (fZ) goto L_0078397f;
L_00783780:; BB(0x00783780);
    /* 00783780: mov eax, dword ptr [ebx + 0x54] */ r_eax = R32((u32)(r_ebx+0x54u));
    /* 00783783: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00783786: mov eax, dword ptr [ebx + 0x58] */ r_eax = R32((u32)(r_ebx+0x58u));
    /* 00783789: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0078378c: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 0078378f: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00783792: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 00783795: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00783798: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 0078379b: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 0078379e: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 007837a1: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 007837a3: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 007837a6: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 007837a8: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 007837ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007837ae: mov dword ptr [ebx + 0x40], esi */ W32((u32)(r_ebx+0x40u), r_esi);
    /* 007837b1: cmp esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007837b4: jl 0x78388c */ if ((fS!=fO)) goto L_0078388c;
L_007837ba:; BB(0x007837ba);
    /* 007837ba: fld dword ptr [0x979b5c] */ FPUSH(R_F32((u32)(0x979b5cu)));
    /* 007837c0: mov edi, dword ptr [ebx + 0x4c] */ r_edi = R32((u32)(r_ebx+0x4cu));
    /* 007837c3: mov esi, dword ptr [ebx + 0x44] */ r_esi = R32((u32)(r_ebx+0x44u));
    /* 007837c6: fld dword ptr [ebx + 0x50] */ FPUSH(R_F32((u32)(r_ebx+0x50u)));
    /* 007837c9: fld dword ptr [ebx + 0x48] */ FPUSH(R_F32((u32)(r_ebx+0x48u)));
    /* 007837cc: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007837ce: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007837d0: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007837d4: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007837d8: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 007837da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007837dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007837dd: jbe 0x78394b */ if ((fC||fZ)) goto L_0078394b;
L_007837e3:; BB(0x007837e3);
    /* 007837e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007837e5: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 007837e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007837e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007837ea: jbe 0x783985 */ if ((fC||fZ)) goto L_00783985;
L_007837f0:; BB(0x007837f0);
    /* 007837f0: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 007837f2: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 007837f4: mov esi, dword ptr [ebx + 0x54] */ r_esi = R32((u32)(r_ebx+0x54u));
    /* 007837f7: fld dword ptr [ebx + 0x58] */ FPUSH(R_F32((u32)(r_ebx+0x58u)));
    /* 007837fa: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007837fc: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007837fe: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00783802: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00783806: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00783808: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078380a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078380b: jbe 0x78398f */ if ((fC||fZ)) goto L_0078398f;
L_00783811:; BB(0x00783811);
    /* 00783811: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00783813: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00783815: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783817: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783818: jbe 0x783995 */ if ((fC||fZ)) goto L_00783995;
L_0078381e:; BB(0x0078381e);
    /* 0078381e: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00783820: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00783822: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00783824: mov edi, dword ptr [ebx + 0x5c] */ r_edi = R32((u32)(r_ebx+0x5cu));
    /* 00783827: fld dword ptr [ebx + 0x60] */ FPUSH(R_F32((u32)(r_ebx+0x60u)));
    /* 0078382a: fsubp st(5) */ ST(5) = ST(5) - ST(0); FPOP();
    /* 0078382c: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0078382e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00783832: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00783836: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00783838: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0078383a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0078383b: jbe 0x783951 */ if ((fC||fZ)) goto L_00783951;
L_00783841:; BB(0x00783841);
    /* 00783841: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00783843: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00783845: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783847: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783848: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0078384a: jbe 0x783951 */ if ((fC||fZ)) goto L_00783951;
L_00783850:; BB(0x00783850);
    /* 00783850: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783852: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00783854: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00783856: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783858: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 0078385a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0078385c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078385e: fdiv dword ptr [0x979b50] */ ST(0) = ST(0) / R_F32((u32)(0x979b50u));
    /* 00783864: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00783866: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783868: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0078386c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00783871: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783876: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0078387a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0078387e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00783882: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00783886: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0078388a: jmp 0x783895 */ goto L_00783895;
L_0078388c:; BB(0x0078388c);
    /* 0078388c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078388e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00783890: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_00783895:; BB(0x00783895);
    /* 00783895: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00783897: jl 0x78392c */ if ((fS!=fO)) goto L_0078392c;
L_0078389d:; BB(0x0078389d);
    /* 0078389d: fld dword ptr [0x979b54] */ FPUSH(R_F32((u32)(0x979b54u)));
    /* 007838a3: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 007838a7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007838ab: fdiv dword ptr [0x979b58] */ ST(0) = ST(0) / R_F32((u32)(0x979b58u));
    /* 007838b1: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007838b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007838b5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 007838b9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 007838be: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007838c3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007838c7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 007838cb: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 007838cf: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 007838d3: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007838d7: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007838d9: cmp esi, 0x464f */ {  u32 a = r_esi; u32 b = 0x464fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007838df: jle 0x7838ed */ if ((fZ||fS!=fO)) goto L_007838ed;
L_007838e1:; BB(0x007838e1);
    /* 007838e1: mov esi, 0x464f */ r_esi = 0x464fu;
    /* 007838e6: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007838e9: je 0x7838fa */ if (fZ) goto L_007838fa;
L_007838eb:; BB(0x007838eb);
    /* 007838eb: jmp 0x783909 */ goto L_00783909;
L_007838ed:; BB(0x007838ed);
    /* 007838ed: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007838f0: jne 0x783909 */ if (!fZ) goto L_00783909;
L_007838f2:; BB(0x007838f2);
    /* 007838f2: cmp esi, 0x12c */ {  u32 a = r_esi; u32 b = 0x12cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007838f8: jl 0x78392c */ if ((fS!=fO)) goto L_0078392c;
L_007838fa:; BB(0x007838fa);
    /* 007838fa: mov dword ptr [ebx + 0x28], 1 */ W32((u32)(r_ebx+0x28u), 0x1u);
    /* 00783901: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
    /* 00783904: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00783907: jmp 0x78392c */ goto L_0078392c;
L_00783909:; BB(0x00783909);
    /* 00783909: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078390c: jne 0x78392c */ if (!fZ) goto L_0078392c;
L_0078390e:; BB(0x0078390e);
    /* 0078390e: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00783911: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00783913: jle 0x78391a */ if ((fZ||fS!=fO)) goto L_0078391a;
L_00783915:; BB(0x00783915);
    /* 00783915: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
    /* 00783918: jmp 0x783926 */ goto L_00783926;
L_0078391a:; BB(0x0078391a);
    /* 0078391a: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0078391c: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078391e: cmp eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00783921: jl 0x783926 */ if ((fS!=fO)) goto L_00783926;
L_00783923:; BB(0x00783923);
    /* 00783923: mov dword ptr [ebx + 0x2c], esi */ W32((u32)(r_ebx+0x2cu), r_esi);
L_00783926:; BB(0x00783926);
    /* 00783926: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 00783929: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
L_0078392c:; BB(0x0078392c);
    /* 0078392c: fcomp dword ptr [ebx + 0x1c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x1cu))); FPOP();
    /* 0078392f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783931: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783932: je 0x783965 */ if (fZ) goto L_00783965;
L_00783934:; BB(0x00783934);
    /* 00783934: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783937: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783938: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783939: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078393a: ret  */ FN_RET(0x007836b0); r_esp += 4; return;
L_0078393b:; BB(0x0078393b);
    /* 0078393b: call 0x78399c */ r_esp -= 4; W32(r_esp, 0x783940u); f_0078399c();
    /* 00783940: mov ebx, dword ptr [0xa9c1d4] */ r_ebx = R32((u32)(0xa9c1d4u));
    /* 00783946: jmp 0x783702 */ goto L_00783702;
L_0078394b:; BB(0x0078394b);
    /* 0078394b: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0078394d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0078394f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00783951:; BB(0x00783951);
    /* 00783951: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783953: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00783955: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783957: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783959: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078395b: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00783960: jmp 0x783895 */ goto L_00783895;
L_00783965:; BB(0x00783965);
    /* 00783965: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 00783969: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078396e: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 00783972: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783975: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783976: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783977: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00783978: ret  */ FN_RET(0x007836b0); r_esp += 4; return;
L_00783979:; BB(0x00783979);
    /* 00783979: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0078397b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0078397d: jmp 0x78392c */ goto L_0078392c;
L_0078397f:; BB(0x0078397f);
    /* 0078397f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783981: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00783983: jmp 0x78392c */ goto L_0078392c;
L_00783985:; BB(0x00783985);
    /* 00783985: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783987: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783989: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0078398b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078398d: jmp 0x783951 */ goto L_00783951;
L_0078398f:; BB(0x0078398f);
    /* 0078398f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00783991: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00783993: jmp 0x783951 */ goto L_00783951;
L_00783995:; BB(0x00783995);
    /* 00783995: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783997: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00783999: jmp 0x783951 */ goto L_00783951;
}

void f_0078399c(void) /* sub_78399C */
{
    FN_ENTER(0x0078399c);
    /* 0078399c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0078399d: mov ebp, esp */ r_ebp = r_esp;
    /* 0078399f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007839a1: push 0x8f45ec */ { u32 v = 0x8f45ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007839a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007839ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007839ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007839b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007839b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007839ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007839bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007839c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007839c3: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007839c5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007839cc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7839d1u); f_005caba4();
    /* 007839d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007839d2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007839d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007839d7: je 0x783a0d */ if (fZ) goto L_00783a0d;
L_007839d9:; BB(0x007839d9);
    /* 007839d9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007839e0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007839e7: push dword ptr [0xaca328] */ { u32 v = R32((u32)(0xaca328u)); r_esp -= 4; W32(r_esp, v); }
    /* 007839ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007839f0: call 0x783a14 */ r_esp -= 4; W32(r_esp, 0x7839f5u); f_00783a14();
    /* 007839f5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007839f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007839ff:; BB(0x007839ff);
    /* 007839ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00783a02: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00783a09: mov esp, ebp */ r_esp = r_ebp;
    /* 00783a0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00783a0c: ret  */ FN_RET(0x0078399c); r_esp += 4; return;
L_00783a0d:; BB(0x00783a0d);
    /* 00783a0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00783a0f: jmp 0x7839ff */ goto L_007839ff;
}

void f_00783a14(void) /* sub_783A14 */
{
    FN_ENTER(0x00783a14);
    /* 00783a14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783a15: mov esi, ecx */ r_esi = r_ecx;
    /* 00783a17: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00783a1b: mov ecx, esi */ r_ecx = r_esi;
    /* 00783a1d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x783a22u); f_008193cc();
    /* 00783a22: mov dword ptr [esi], 0xb447f0 */ W32((u32)(r_esi), 0xb447f0u);
    /* 00783a28: mov eax, dword ptr [0x9f9868] */ r_eax = R32((u32)(0x9f9868u));
    /* 00783a2d: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00783a30: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00783a35: mov dword ptr [esi + 0x1c], 0 */ W32((u32)(r_esi+0x1cu), 0x0u);
    /* 00783a3c: mov dword ptr [esi + 0x28], edx */ W32((u32)(r_esi+0x28u), r_edx);
    /* 00783a3f: mov dword ptr [esi + 0x2c], edx */ W32((u32)(r_esi+0x2cu), r_edx);
    /* 00783a42: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00783a45: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 00783a4c: mov ecx, esi */ r_ecx = r_esi;
    /* 00783a4e: call 0x7842d0 */ r_esp -= 4; W32(r_esp, 0x783a53u); f_007842d0();
    /* 00783a53: mov ecx, esi */ r_ecx = r_esi;
    /* 00783a55: call 0x784298 */ r_esp -= 4; W32(r_esp, 0x783a5au); f_00784298();
    /* 00783a5a: mov dword ptr [0xa9c1d4], esi */ W32((u32)(0xa9c1d4u), r_esi);
    /* 00783a60: mov dword ptr [esi + 0x20], 3 */ W32((u32)(r_esi+0x20u), 0x3u);
    /* 00783a67: mov eax, esi */ r_eax = r_esi;
    /* 00783a69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783a6a: ret 4 */ FN_RET(0x00783a14); r_esp += 8; return;
}

void f_00783a70(void) /* sub_783A70 */
{
    FN_ENTER(0x00783a70);
    /* 00783a70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00783a71: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00783a74: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00783a76: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x783a7bu); f_007a9044();
    /* 00783a7b: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x783a80u); f_004d28a4();
    /* 00783a80: movzx ecx, byte ptr [0xa9c1a0] */ r_ecx = (u32)R8((u32)(0xa9c1a0u));
    /* 00783a87: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783a8a: jne 0x783a9f */ if (!fZ) goto L_00783a9f;
L_00783a8c:; BB(0x00783a8c);
    /* 00783a8c: mov dword ptr [0xa9c1a8], 0x43ec8000 */ W32((u32)(0xa9c1a8u), 0x43ec8000u);
    /* 00783a96: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783a99: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
L_00783a9f:; BB(0x00783a9f);
    /* 00783a9f: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783aa2: jne 0x783ab7 */ if (!fZ) goto L_00783ab7;
L_00783aa4:; BB(0x00783aa4);
    /* 00783aa4: mov dword ptr [0xa9c1ac], 0x43dc0000 */ W32((u32)(0xa9c1acu), 0x43dc0000u);
    /* 00783aae: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783ab1: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
L_00783ab7:; BB(0x00783ab7);
    /* 00783ab7: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783aba: jne 0x783ade */ if (!fZ) goto L_00783ade;
L_00783abc:; BB(0x00783abc);
    /* 00783abc: mov eax, dword ptr [0xa9c1a8] */ r_eax = R32((u32)(0xa9c1a8u));
    /* 00783ac1: mov edx, dword ptr [0xa9c1ac] */ r_edx = R32((u32)(0xa9c1acu));
    /* 00783ac7: mov dword ptr [0xa9c1b0], eax */ W32((u32)(0xa9c1b0u), r_eax);
    /* 00783acc: mov dword ptr [0xa9c1b4], edx */ W32((u32)(0xa9c1b4u), r_edx);
    /* 00783ad2: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00783ad5: or ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783ad8: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
L_00783ade:; BB(0x00783ade);
    /* 00783ade: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783ae1: jne 0x783b03 */ if (!fZ) goto L_00783b03;
L_00783ae3:; BB(0x00783ae3);
    /* 00783ae3: mov dword ptr [0xa9c1b8], 0x430e0000 */ W32((u32)(0xa9c1b8u), 0x430e0000u);
    /* 00783aed: or ecx, 0xffffff08 */ {  u32 a = r_ecx; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783af3: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
    /* 00783af9: mov dword ptr [0xa9c1bc], 0x41000000 */ W32((u32)(0xa9c1bcu), 0x41000000u);
L_00783b03:; BB(0x00783b03);
    /* 00783b03: push 0xa9c1b8 */ { u32 v = 0xa9c1b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00783b08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00783b0a: push 0xa9c1b0 */ { u32 v = 0xa9c1b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00783b0f: call 0x783c64 */ r_esp -= 4; W32(r_esp, 0x783b14u); f_00783c64();
    /* 00783b14: movzx ecx, byte ptr [0xa9c1a0] */ r_ecx = (u32)R8((u32)(0xa9c1a0u));
    /* 00783b1b: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783b1e: jne 0x783b33 */ if (!fZ) goto L_00783b33;
L_00783b20:; BB(0x00783b20);
    /* 00783b20: mov dword ptr [0xa9c1c0], 0x8e */ W32((u32)(0xa9c1c0u), 0x8eu);
    /* 00783b2a: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783b2d: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
L_00783b33:; BB(0x00783b33);
    /* 00783b33: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783b36: jne 0x783b6a */ if (!fZ) goto L_00783b6a;
L_00783b38:; BB(0x00783b38);
    /* 00783b38: fld dword ptr [0x979b40] */ FPUSH(R_F32((u32)(0x979b40u)));
    /* 00783b3e: fadd dword ptr [0xa9c1a8] */ ST(0) = ST(0) + R_F32((u32)(0xa9c1a8u));
    /* 00783b44: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00783b47: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00783b4b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783b50: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00783b54: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00783b58: fistp dword ptr [0xa9c1c4] */ W32((u32)(0xa9c1c4u), (u32)fx_int32(ST(0))); FPOP();
    /* 00783b5e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00783b61: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783b64: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
L_00783b6a:; BB(0x00783b6a);
    /* 00783b6a: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783b6d: jne 0x783bb4 */ if (!fZ) goto L_00783bb4;
L_00783b6f:; BB(0x00783b6f);
    /* 00783b6f: fld dword ptr [0x979b3c] */ FPUSH(R_F32((u32)(0x979b3cu)));
    /* 00783b75: fadd dword ptr [0xa9c1ac] */ ST(0) = ST(0) + R_F32((u32)(0xa9c1acu));
    /* 00783b7b: fsub dword ptr [0x979b34] */ ST(0) = ST(0) - R_F32((u32)(0x979b34u));
    /* 00783b81: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00783b84: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00783b88: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783b8d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00783b91: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00783b95: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00783b99: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00783b9c: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00783b9f: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783ba2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00783ba6: mov dword ptr [0xa9c1c8], edx */ W32((u32)(0xa9c1c8u), r_edx);
    /* 00783bac: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
    /* 00783bb2: jmp 0x783bba */ goto L_00783bba;
L_00783bb4:; BB(0x00783bb4);
    /* 00783bb4: mov edx, dword ptr [0xa9c1c8] */ r_edx = R32((u32)(0xa9c1c8u));
L_00783bba:; BB(0x00783bba);
    /* 00783bba: test ecx, 0x80 */ {  u32 a = r_ecx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00783bc0: jne 0x783bf4 */ if (!fZ) goto L_00783bf4;
L_00783bc2:; BB(0x00783bc2);
    /* 00783bc2: fild dword ptr [0xa9c1c0] */ FPUSH((long double)(i32)R32((u32)(0xa9c1c0u)));
    /* 00783bc8: fadd dword ptr [0xa9c1a8] */ ST(0) = ST(0) + R_F32((u32)(0xa9c1a8u));
    /* 00783bce: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00783bd1: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00783bd5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783bda: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00783bde: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00783be2: fistp dword ptr [0xa9c1cc] */ W32((u32)(0xa9c1ccu), (u32)fx_int32(ST(0))); FPOP();
    /* 00783be8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00783beb: or ecx, 0xffffff80 */ {  u32 a = r_ecx; u32 b = 0xffffff80u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00783bee: mov byte ptr [0xa9c1a0], cl */ W8((u32)(0xa9c1a0u), (u8)r_ecx);
L_00783bf4:; BB(0x00783bf4);
    /* 00783bf4: movzx eax, byte ptr [0xa9c1a4] */ r_eax = (u32)R8((u32)(0xa9c1a4u));
    /* 00783bfb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783bfd: jne 0x783c0f */ if (!fZ) goto L_00783c0f;
L_00783bff:; BB(0x00783bff);
    /* 00783bff: mov dword ptr [0xa9c1d0], edx */ W32((u32)(0xa9c1d0u), r_edx);
    /* 00783c05: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783c0a: mov byte ptr [0xa9c1a4], al */ W8((u32)(0xa9c1a4u), (u8)r_eax);
L_00783c0f:; BB(0x00783c0f);
    /* 00783c0f: fild dword ptr [0xa9c1c4] */ FPUSH((long double)(i32)R32((u32)(0xa9c1c4u)));
    /* 00783c15: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00783c18: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783c1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00783c1d: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00783c21: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00783c25: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00783c29: call 0x783d94 */ r_esp -= 4; W32(r_esp, 0x783c2eu); f_00783d94();
    /* 00783c2e: fild dword ptr [0xa9c1cc] */ FPUSH((long double)(i32)R32((u32)(0xa9c1ccu)));
    /* 00783c34: fild dword ptr [0xa9c1d0] */ FPUSH((long double)(i32)R32((u32)(0xa9c1d0u)));
    /* 00783c3a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00783c3d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783c3f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783c42: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00783c46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00783c48: call 0x784104 */ r_esp -= 4; W32(r_esp, 0x783c4du); f_00784104();
    /* 00783c4d: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x783c52u); f_004d2968();
    /* 00783c52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00783c54: call 0x7841d0 */ r_esp -= 4; W32(r_esp, 0x783c59u); f_007841d0();
    /* 00783c59: add dword ptr [ebx + 0x24], 1 */ { u32 ad = (u32)(r_ebx+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00783c5d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783c60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783c61: ret  */ FN_RET(0x00783a70); r_esp += 4; return;
}

void f_00783c64(void) /* sub_783C64 */
{
    FN_ENTER(0x00783c64);
    /* 00783c64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783c65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783c66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00783c67: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00783c6a: mov esi, ecx */ r_esi = r_ecx;
    /* 00783c6c: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00783c70: mov ebx, dword ptr [esp + 0x54] */ r_ebx = R32((u32)(r_esp+0x54u));
    /* 00783c74: mov eax, dword ptr [0x979aec] */ r_eax = R32((u32)(0x979aecu));
    /* 00783c79: mov edx, dword ptr [0x979af0] */ r_edx = R32((u32)(0x979af0u));
    /* 00783c7f: fld dword ptr [0x979ae0] */ FPUSH(R_F32((u32)(0x979ae0u)));
    /* 00783c85: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00783c89: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00783c8d: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00783c91: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00783c94: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00783c98: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00783c9c: mov eax, 0xff000000 */ r_eax = 0xff000000u;
    /* 00783ca1: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00783ca5: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00783ca9: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00783cad: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00783cb1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00783cb4: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00783cb7: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00783cb9: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00783cbd: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00783cc1: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00783cc4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00783cc6: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00783cc8: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00783ccc: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00783cd0: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00783cd3: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00783cd5: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00783cd9: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00783cdd: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00783ce0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00783ce2: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00783ce5: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00783ce9: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00783ced: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00783cef: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00783cf4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00783cf6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783cf7: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x783cfcu); f_0082b5d8();
    /* 00783cfc: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00783cff: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00783d03: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00783d07: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00783d0b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00783d0f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00783d12: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00783d16: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00783d1a: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00783d1c: fmul dword ptr [esi + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x1cu));
    /* 00783d1f: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 00783d22: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00783d26: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00783d2a: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00783d2d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00783d31: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00783d35: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00783d39: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00783d3c: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00783d3f: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00783d43: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00783d47: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00783d49: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00783d4e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00783d50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783d51: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x783d56u); f_0082b5d8();
    /* 00783d56: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 00783d5a: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00783d5d: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00783d61: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00783d65: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00783d69: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 00783d6d: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00783d70: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00783d72: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 00783d76: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 00783d7a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00783d7c: push 0xbf800000 */ { u32 v = 0xbf800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00783d81: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00783d83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00783d84: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x783d89u); f_0082b5d8();
    /* 00783d89: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783d8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00783d8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00783d8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783d8f: ret 8 */ FN_RET(0x00783c64); r_esp += 12; return;
}

void f_00783d94(void) /* sub_783D94 */
{
    FN_ENTER(0x00783d94);
    /* 00783d94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00783d95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783d96: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783d97: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00783d9a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00783d9c: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00783d9f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00783da1: jne 0x783dac */ if (!fZ) goto L_00783dac;
L_00783da3:; BB(0x00783da3);
    /* 00783da3: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783da6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00783da7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783da8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00783da9: ret 8 */ FN_RET(0x00783d94); r_esp += 12; return;
L_00783dac:; BB(0x00783dac);
    /* 00783dac: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00783daf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00783db1: jle 0x783f28 */ if ((fZ||fS!=fO)) goto L_00783f28;
L_00783db7:; BB(0x00783db7);
    /* 00783db7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00783db9: mov word ptr [esp], di */ W16((u32)(r_esp), (u16)r_edi);
    /* 00783dbd: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 00783dc2: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00783dc4: mov esi, ecx */ r_esi = r_ecx;
    /* 00783dc6: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00783dc9: mov edi, edx */ r_edi = r_edx;
    /* 00783dcb: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00783dcd: sar edi, 0xa */ { u32 c = (10u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00783dd0: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00783dd2: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00783dd7: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00783dd9: mov eax, ecx */ r_eax = r_ecx;
    /* 00783ddb: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00783dde: mov esi, edx */ r_esi = r_edx;
    /* 00783de0: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00783de2: sar esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00783de5: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00783de7: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00783dea: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783dec: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783dee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783df0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783df2: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00783df4: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00783df6: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00783df8: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00783dfd: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00783dff: mov eax, esi */ r_eax = r_esi;
    /* 00783e01: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00783e04: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00783e06: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00783e09: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00783e0b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00783e0d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00783e0f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00783e12: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783e14: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783e16: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783e18: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00783e1a: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00783e1c: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00783e21: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00783e23: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00783e26: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00783e28: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00783e2a: jle 0x783f36 */ if ((fZ||fS!=fO)) goto L_00783f36;
L_00783e30:; BB(0x00783e30);
    /* 00783e30: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00783e33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00783e34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783e35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00783e36: push 0x979b90 */ { u32 v = 0x979b90u; r_esp -= 4; W32(r_esp, v); }
    /* 00783e3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783e3c: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x783e41u); f_00857e29();
    /* 00783e41: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00783e44:; BB(0x00783e44);
    /* 00783e44: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00783e48: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00783e4c: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00783e51: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783e56: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00783e5a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00783e5e: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00783e62: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00783e66: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00783e6a: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00783e6e: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00783e72: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00783e77: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783e7c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00783e80: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00783e84: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00783e88: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00783e8c: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00783e90: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00783e93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783e94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00783e95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00783e97: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783e98: call 0x783f50 */ r_esp -= 4; W32(r_esp, 0x783e9du); f_00783f50();
    /* 00783e9d: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00783ea0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00783ea2: jle 0x783f31 */ if ((fZ||fS!=fO)) goto L_00783f31;
L_00783ea8:; BB(0x00783ea8);
    /* 00783ea8: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 00783eab: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00783ead: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00783eaf: cmp eax, 0x4b */ {  u32 a = r_eax; u32 b = 0x4bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00783eb2: jle 0x783f1a */ if ((fZ||fS!=fO)) goto L_00783f1a;
L_00783eb4:; BB(0x00783eb4);
    /* 00783eb4: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
    /* 00783eb7: fcom dword ptr [0x979b28] */ fx_compare(ST(0), R_F32((u32)(0x979b28u))); 
    /* 00783ebd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00783ebf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00783ec0: jbe 0x783f13 */ if ((fC||fZ)) goto L_00783f13;
L_00783ec2:; BB(0x00783ec2);
    /* 00783ec2: fld dword ptr [0x979b20] */ FPUSH(R_F32((u32)(0x979b20u)));
    /* 00783ec8: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00783eca: fadd dword ptr [0x979b24] */ ST(0) = ST(0) + R_F32((u32)(0x979b24u));
    /* 00783ed0: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00783ed4: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00783ed8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00783eda: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00783ede: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00783ee3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00783ee8: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00783eec: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00783ef0: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00783ef4: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00783ef8: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 00783efc: mov eax, 0x464f */ r_eax = 0x464fu;
    /* 00783f01: cmp esi, 0x464f */ {  u32 a = r_esi; u32 b = 0x464fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00783f07: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00783f0a: jl 0x783f0e */ if ((fS!=fO)) goto L_00783f0e;
L_00783f0c:; BB(0x00783f0c);
    /* 00783f0c: mov esi, eax */ r_esi = r_eax;
L_00783f0e:; BB(0x00783f0e);
    /* 00783f0e: mov dword ptr [ebp + 0x2c], esi */ W32((u32)(r_ebp+0x2cu), r_esi);
    /* 00783f11: jmp 0x783f1d */ goto L_00783f1d;
L_00783f13:; BB(0x00783f13);
    /* 00783f13: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00783f15: mov esi, dword ptr [ebp + 0x2c] */ r_esi = R32((u32)(r_ebp+0x2cu));
    /* 00783f18: jmp 0x783f1d */ goto L_00783f1d;
L_00783f1a:; BB(0x00783f1a);
    /* 00783f1a: mov esi, dword ptr [ebp + 0x2c] */ r_esi = R32((u32)(r_ebp+0x2cu));
L_00783f1d:; BB(0x00783f1d);
    /* 00783f1d: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00783f20: jle 0x783f28 */ if ((fZ||fS!=fO)) goto L_00783f28;
L_00783f22:; BB(0x00783f22);
    /* 00783f22: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00783f25: mov dword ptr [ebp + 0x2c], esi */ W32((u32)(r_ebp+0x2cu), r_esi);
L_00783f28:; BB(0x00783f28);
    /* 00783f28: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00783f2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00783f2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00783f2d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00783f2e: ret 8 */ FN_RET(0x00783d94); r_esp += 12; return;
L_00783f31:; BB(0x00783f31);
    /* 00783f31: mov esi, dword ptr [ebp + 0x2c] */ r_esi = R32((u32)(r_ebp+0x2cu));
    /* 00783f34: jmp 0x783f1d */ goto L_00783f1d;
L_00783f36:; BB(0x00783f36);
    /* 00783f36: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00783f39: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00783f3a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00783f3b: push 0x979ba8 */ { u32 v = 0x979ba8u; r_esp -= 4; W32(r_esp, v); }
    /* 00783f40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00783f41: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x783f46u); f_00857e29();
    /* 00783f46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00783f49: jmp 0x783e44 */ goto L_00783e44;
}

void f_00783f50(void) /* sub_783F50 */
{
    FN_ENTER(0x00783f50);
    /* 00783f50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783f51: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00783f54: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 00783f58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00783f59: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x783f5eu); f_007ac344();
    /* 00783f5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00783f5f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00783f63: fld dword ptr [0x979b1c] */ FPUSH(R_F32((u32)(0x979b1cu)));
    /* 00783f69: fld dword ptr [0x979b1c] */ FPUSH(R_F32((u32)(0x979b1cu)));
    /* 00783f6f: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00783f73: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00783f75: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00783f79: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 00783f81: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00783f85: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00783f89: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00783f8d: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00783f91: fst dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0));
    /* 00783f95: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00783f97: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00783f99: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00783f9d: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00783fa0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783fa2: fadd dword ptr [edx*4 + 0x979af8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x979af8u));
    /* 00783fa9: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00783fad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00783faf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783fb2: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x783fb7u); f_007ac12c();
    /* 00783fb7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00783fbb: fld dword ptr [0x979b1c] */ FPUSH(R_F32((u32)(0x979b1cu)));
    /* 00783fc1: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 00783fc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783fc7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783fca: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00783fce: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 00783fd6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00783fda: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x783fdfu); f_007ac12c();
    /* 00783fdf: fld dword ptr [0x979b18] */ FPUSH(R_F32((u32)(0x979b18u)));
    /* 00783fe5: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00783fe9: fld dword ptr [0x979b1c] */ FPUSH(R_F32((u32)(0x979b1cu)));
    /* 00783fef: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 00783ff3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00783ff5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00783ff8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00783ffc: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00784000: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 00784008: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x78400du); f_007ac12c();
    /* 0078400d: fld dword ptr [0x979b1c] */ FPUSH(R_F32((u32)(0x979b1cu)));
    /* 00784013: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00784017: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0078401b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078401f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00784022: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 0078402a: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0078402e: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x784033u); f_007ac12c();
    /* 00784033: fld dword ptr [0x979b18] */ FPUSH(R_F32((u32)(0x979b18u)));
    /* 00784039: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 0078403d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00784041: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00784045: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00784048: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 00784050: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00784054: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x784059u); f_007ac12c();
    /* 00784059: fld dword ptr [0x979b1c] */ FPUSH(R_F32((u32)(0x979b1cu)));
    /* 0078405f: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 00784063: fld dword ptr [0x979b18] */ FPUSH(R_F32((u32)(0x979b18u)));
    /* 00784069: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 0078406d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0078406f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00784072: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00784076: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0078407a: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 00784082: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x784087u); f_007ac12c();
    /* 00784087: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0078408b: fld dword ptr [0x979b18] */ FPUSH(R_F32((u32)(0x979b18u)));
    /* 00784091: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 00784095: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00784097: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0078409a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0078409e: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 007840a6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007840aa: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x7840afu); f_007ac12c();
    /* 007840af: fld dword ptr [0x979b18] */ FPUSH(R_F32((u32)(0x979b18u)));
    /* 007840b5: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007840b9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007840bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007840bd: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 007840c1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007840c3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007840c6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007840ca: mov dword ptr [esp + 0xc], 0xff000000 */ W32((u32)(r_esp+0xcu), 0xff000000u);
    /* 007840d2: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007840d6: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x7840dbu); f_007ac12c();
    /* 007840db: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007840df: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007840e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007840e5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007840e8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007840ec: mov dword ptr [esp + 0xc], 0xffffffff */ W32((u32)(r_esp+0xcu), 0xffffffffu);
    /* 007840f4: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007840f8: call 0x7ac12c */ r_esp -= 4; W32(r_esp, 0x7840fdu); f_007ac12c();
    /* 007840fd: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00784100: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00784101: ret 0xc */ FN_RET(0x00783f50); r_esp += 16; return;
}

