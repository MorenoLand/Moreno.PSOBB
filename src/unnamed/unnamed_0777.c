#include "protos.h"

void f_007770a0(void) /* sub_7770A0 */
{
    FN_ENTER(0x007770a0);
    /* 007770a0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007770a3: fld dword ptr [0x9781dc] */ FPUSH(R_F32((u32)(0x9781dcu)));
    /* 007770a9: mov eax, dword ptr [ecx + 0x324] */ r_eax = R32((u32)(r_ecx+0x324u));
    /* 007770af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007770b1: je 0x7770c9 */ if (fZ) goto L_007770c9;
L_007770b3:; BB(0x007770b3);
    /* 007770b3: movsx eax, word ptr [eax + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 007770b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007770b9: jle 0x7770c9 */ if ((fZ||fS!=fO)) goto L_007770c9;
L_007770bb:; BB(0x007770bb);
    /* 007770bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007770bd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007770c0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007770c3: fmul dword ptr [0x9781d8] */ ST(0) = ST(0) * R_F32((u32)(0x9781d8u));
L_007770c9:; BB(0x007770c9);
    /* 007770c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007770cc: ret  */ FN_RET(0x007770a0); r_esp += 4; return;
}

void f_007770d0(void) /* sub_7770D0 */
{
    FN_ENTER(0x007770d0);
    /* 007770d0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007770d3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007770d7: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007770db: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007770e1: jl 0x7770f3 */ if ((fS!=fO)) goto L_007770f3;
L_007770e3:; BB(0x007770e3);
    /* 007770e3: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007770e7: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007770eb: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007770f1: jl 0x777115 */ if ((fS!=fO)) goto L_00777115;
L_007770f3:; BB(0x007770f3);
    /* 007770f3: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 007770f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007770fb: je 0x777168 */ if (fZ) goto L_00777168;
L_007770fd:; BB(0x007770fd);
    /* 007770fd: fld dword ptr [0x9781c8] */ FPUSH(R_F32((u32)(0x9781c8u)));
    /* 00777103: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00777107:; BB(0x00777107);
    /* 00777107: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0077710b: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 0077710f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00777113: jmp 0x777147 */ goto L_00777147;
L_00777115:; BB(0x00777115);
    /* 00777115: movsx edx, word ptr [ecx + 0x2f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2f8u));
    /* 0077711c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0077711f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00777122: fdiv dword ptr [0x9781d0] */ ST(0) = ST(0) / R_F32((u32)(0x9781d0u));
    /* 00777128: fadd dword ptr [0x9781d4] */ ST(0) = ST(0) + R_F32((u32)(0x9781d4u));
    /* 0077712e: fcom dword ptr [0x9781cc] */ fx_compare(ST(0), R_F32((u32)(0x9781ccu))); 
    /* 00777134: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00777136: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077713a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077713b: jae 0x777147 */ if (!fC) goto L_00777147;
L_0077713d:; BB(0x0077713d);
    /* 0077713d: fld dword ptr [0x9781cc] */ FPUSH(R_F32((u32)(0x9781ccu)));
    /* 00777143: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_00777147:; BB(0x00777147);
    /* 00777147: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x77714cu); f_007751b0();
    /* 0077714c: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00777150: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00777152: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00777153: jae 0x777160 */ if (!fC) goto L_00777160;
L_00777155:; BB(0x00777155);
    /* 00777155: mov eax, 1 */ r_eax = 0x1u;
    /* 0077715a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077715d: ret 0x10 */ FN_RET(0x007770d0); r_esp += 20; return;
L_00777160:; BB(0x00777160);
    /* 00777160: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777162: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777165: ret 0x10 */ FN_RET(0x007770d0); r_esp += 20; return;
L_00777168:; BB(0x00777168);
    /* 00777168: fld dword ptr [0x9781c4] */ FPUSH(R_F32((u32)(0x9781c4u)));
    /* 0077716e: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00777172: jmp 0x777107 */ goto L_00777107;
}

void f_00777174(void) /* sub_777174 */
{
    FN_ENTER(0x00777174);
    /* 00777174: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777177: fld dword ptr [0x9781c0] */ FPUSH(R_F32((u32)(0x9781c0u)));
    /* 0077717d: mov eax, dword ptr [ecx + 0x324] */ r_eax = R32((u32)(r_ecx+0x324u));
    /* 00777183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777185: je 0x77719c */ if (fZ) goto L_0077719c;
L_00777187:; BB(0x00777187);
    /* 00777187: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0077718a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077718c: jle 0x77719c */ if ((fZ||fS!=fO)) goto L_0077719c;
L_0077718e:; BB(0x0077718e);
    /* 0077718e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00777190: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00777193: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00777196: fmul dword ptr [0x9781bc] */ ST(0) = ST(0) * R_F32((u32)(0x9781bcu));
L_0077719c:; BB(0x0077719c);
    /* 0077719c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077719f: ret  */ FN_RET(0x00777174); r_esp += 4; return;
}

void f_007771a0(void) /* sub_7771A0 */
{
    FN_ENTER(0x007771a0);
    /* 007771a0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007771a3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007771a7: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 007771ab: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007771b0: jl 0x7771c9 */ if ((fS!=fO)) goto L_007771c9;
L_007771b2:; BB(0x007771b2);
    /* 007771b2: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007771b7: jge 0x7771c9 */ if ((fS==fO)) goto L_007771c9;
L_007771b9:; BB(0x007771b9);
    /* 007771b9: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007771bd: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007771c1: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007771c7: jl 0x7771fc */ if ((fS!=fO)) goto L_007771fc;
L_007771c9:; BB(0x007771c9);
    /* 007771c9: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 007771ce: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007771d1: je 0x77724f */ if (fZ) goto L_0077724f;
L_007771d3:; BB(0x007771d3);
    /* 007771d3: fld dword ptr [0x978244] */ FPUSH(R_F32((u32)(0x978244u)));
    /* 007771d9: fcom dword ptr [esp + 0x18] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x18u))); 
    /* 007771dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007771df: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007771e3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007771e4: jb 0x7771e8 */ if (fC) goto L_007771e8;
L_007771e6:; BB(0x007771e6);
    /* 007771e6: fst st(1) */ ST(1) = ST(0);
L_007771e8:; BB(0x007771e8);
    /* 007771e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007771ea: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_007771ee:; BB(0x007771ee);
    /* 007771ee: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007771f2: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 007771f6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007771fa: jmp 0x77722e */ goto L_0077722e;
L_007771fc:; BB(0x007771fc);
    /* 007771fc: movsx edx, word ptr [ecx + 0x2fa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2fau));
    /* 00777203: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00777206: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00777209: fdiv dword ptr [0x9781b4] */ ST(0) = ST(0) / R_F32((u32)(0x9781b4u));
    /* 0077720f: fadd dword ptr [0x9781b8] */ ST(0) = ST(0) + R_F32((u32)(0x9781b8u));
    /* 00777215: fcom dword ptr [0x9781b0] */ fx_compare(ST(0), R_F32((u32)(0x9781b0u))); 
    /* 0077721b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077721d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00777221: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00777222: jae 0x77722e */ if (!fC) goto L_0077722e;
L_00777224:; BB(0x00777224);
    /* 00777224: fld dword ptr [0x9781b0] */ FPUSH(R_F32((u32)(0x9781b0u)));
    /* 0077722a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
L_0077722e:; BB(0x0077722e);
    /* 0077722e: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x777233u); f_007751b0();
    /* 00777233: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00777237: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00777239: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077723a: jae 0x777247 */ if (!fC) goto L_00777247;
L_0077723c:; BB(0x0077723c);
    /* 0077723c: mov eax, 1 */ r_eax = 0x1u;
    /* 00777241: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777244: ret 0x10 */ FN_RET(0x007771a0); r_esp += 20; return;
L_00777247:; BB(0x00777247);
    /* 00777247: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777249: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077724c: ret 0x10 */ FN_RET(0x007771a0); r_esp += 20; return;
L_0077724f:; BB(0x0077724f);
    /* 0077724f: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00777253: fcomp dword ptr [0x978248] */ fx_compare(ST(0), R_F32((u32)(0x978248u))); FPOP();
    /* 00777259: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077725b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077725c: jbe 0x7771d3 */ if ((fC||fZ)) goto L_007771d3;
L_00777262:; BB(0x00777262);
    /* 00777262: fld dword ptr [0x9781ac] */ FPUSH(R_F32((u32)(0x9781acu)));
    /* 00777268: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0077726c: jmp 0x7771ee */ goto L_007771ee;
}

void f_00777270(void) /* sub_777270 */
{
    FN_ENTER(0x00777270);
    /* 00777270: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00777275: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0077727c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077727f: jne 0x777286 */ if (!fZ) goto L_00777286;
L_00777281:; BB(0x00777281);
    /* 00777281: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777283: ret 4 */ FN_RET(0x00777270); r_esp += 8; return;
L_00777286:; BB(0x00777286);
    /* 00777286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777287: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x77728cu); f_00777414();
    /* 0077728c: ret 4 */ FN_RET(0x00777270); r_esp += 8; return;
}

void f_00777290(void) /* sub_777290 */
{
    FN_ENTER(0x00777290);
    /* 00777290: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777293: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00777297: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0077729b: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 007772a0: mov byte ptr [esp], 0xc7 */ W8((u32)(r_esp), 0xc7u);
    /* 007772a4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007772a8: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 007772ad: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007772b0: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x7772b5u); f_008003e0();
    /* 007772b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007772b8: ret 4 */ FN_RET(0x00777290); r_esp += 8; return;
}

void f_007772bc(void) /* sub_7772BC */
{
    FN_ENTER(0x007772bc);
    /* 007772bc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007772c0: mov ecx, dword ptr [ecx + 0x2b4] */ r_ecx = R32((u32)(r_ecx+0x2b4u));
    /* 007772c6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007772c8: je 0x7772d1 */ if (fZ) goto L_007772d1;
L_007772ca:; BB(0x007772ca);
    /* 007772ca: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007772cd: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007772cf: jge 0x7772d6 */ if ((fS==fO)) goto L_007772d6;
L_007772d1:; BB(0x007772d1);
    /* 007772d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007772d3: ret 4 */ FN_RET(0x007772bc); r_esp += 8; return;
L_007772d6:; BB(0x007772d6);
    /* 007772d6: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007772d8: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 007772db: mov eax, 1 */ r_eax = 0x1u;
    /* 007772e0: ret 4 */ FN_RET(0x007772bc); r_esp += 8; return;
}

void f_007772e4(void) /* sub_7772E4 */
{
    FN_ENTER(0x007772e4);
    /* 007772e4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007772e7: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 007772ec: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 007772f1: movzx ecx, word ptr [ecx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007772f5: mov byte ptr [esp], 0xc6 */ W8((u32)(r_esp), 0xc6u);
    /* 007772f9: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 007772fe: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 00777303: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00777308: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 0077730d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00777310: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x777315u); f_008003e0();
    /* 00777315: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777318: ret 8 */ FN_RET(0x007772e4); r_esp += 12; return;
}

void f_0077731c(void) /* sub_77731C */
{
    FN_ENTER(0x0077731c);
    /* 0077731c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0077731f: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777324: jne 0x777362 */ if (!fZ) goto L_00777362;
L_00777326:; BB(0x00777326);
    /* 00777326: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0077732d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00777330: je 0x777362 */ if (fZ) goto L_00777362;
L_00777332:; BB(0x00777332);
    /* 00777332: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00777336: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777338: je 0x777362 */ if (fZ) goto L_00777362;
L_0077733a:; BB(0x0077733a);
    /* 0077733a: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0077733e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0077733f: movsx edx, word ptr [esp + 0x10] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 00777344: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777345: push 0x9783a0 */ { u32 v = 0x9783a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0077734a: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077734e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00777350: push 0xffff00ff */ { u32 v = 0xffff00ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00777355: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 00777359: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0077735a: call 0x78aabc */ r_esp -= 4; W32(r_esp, 0x77735fu); f_0078aabc();
    /* 0077735f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00777362:; BB(0x00777362);
    /* 00777362: ret 0xc */ FN_RET(0x0077731c); r_esp += 16; return;
}

void f_00777368(void) /* sub_777368 */
{
    FN_ENTER(0x00777368);
    /* 00777368: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 0077736d: movzx edx, word ptr [ecx + 0x336] */ r_edx = (u32)R16((u32)(r_ecx+0x336u));
    /* 00777374: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777376: movsx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2beu));
    /* 0077737d: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00777380: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00777382: jle 0x777390 */ if ((fZ||fS!=fO)) goto L_00777390;
L_00777384:; BB(0x00777384);
    /* 00777384: mov word ptr [ecx + 0x336], ax */ W16((u32)(r_ecx+0x336u), (u16)r_eax);
    /* 0077738b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077738d: ret 4 */ FN_RET(0x00777368); r_esp += 8; return;
L_00777390:; BB(0x00777390);
    /* 00777390: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 00777397: mov eax, 1 */ r_eax = 0x1u;
    /* 0077739c: ret 4 */ FN_RET(0x00777368); r_esp += 8; return;
}

void f_007773a0(void) /* sub_7773A0 */
{
    FN_ENTER(0x007773a0);
    /* 007773a0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007773a5: movzx edx, word ptr [ecx + 0x336] */ r_edx = (u32)R16((u32)(r_ecx+0x336u));
    /* 007773ac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007773ae: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007773b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007773b3: jl 0x7773c4 */ if ((fS!=fO)) goto L_007773c4;
L_007773b5:; BB(0x007773b5);
    /* 007773b5: mov word ptr [ecx + 0x336], ax */ W16((u32)(r_ecx+0x336u), (u16)r_eax);
    /* 007773bc: mov eax, 1 */ r_eax = 0x1u;
    /* 007773c1: ret 4 */ FN_RET(0x007773a0); r_esp += 8; return;
L_007773c4:; BB(0x007773c4);
    /* 007773c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007773c6: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 007773cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007773cf: ret 4 */ FN_RET(0x007773a0); r_esp += 8; return;
}

void f_007773d4(void) /* sub_7773D4 */
{
    FN_ENTER(0x007773d4);
    /* 007773d4: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 007773d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007773db: jl 0x77740f */ if ((fS!=fO)) goto L_0077740f;
L_007773dd:; BB(0x007773dd);
    /* 007773dd: movzx edx, word ptr [ecx + 0x334] */ r_edx = (u32)R16((u32)(r_ecx+0x334u));
    /* 007773e4: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007773e6: movsx eax, word ptr [ecx + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 007773ed: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 007773f0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007773f2: jle 0x777400 */ if ((fZ||fS!=fO)) goto L_00777400;
L_007773f4:; BB(0x007773f4);
    /* 007773f4: mov word ptr [ecx + 0x334], ax */ W16((u32)(r_ecx+0x334u), (u16)r_eax);
    /* 007773fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007773fd: ret 4 */ FN_RET(0x007773d4); r_esp += 8; return;
L_00777400:; BB(0x00777400);
    /* 00777400: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 00777407: mov eax, 1 */ r_eax = 0x1u;
    /* 0077740c: ret 4 */ FN_RET(0x007773d4); r_esp += 8; return;
L_0077740f:; BB(0x0077740f);
    /* 0077740f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777411: ret 4 */ FN_RET(0x007773d4); r_esp += 8; return;
}

void f_00777414(void) /* sub_777414 */
{
    FN_ENTER(0x00777414);
    /* 00777414: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00777419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0077741b: jl 0x77743c */ if ((fS!=fO)) goto L_0077743c;
L_0077741d:; BB(0x0077741d);
    /* 0077741d: movzx edx, word ptr [ecx + 0x334] */ r_edx = (u32)R16((u32)(r_ecx+0x334u));
    /* 00777424: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777426: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00777429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077742b: jl 0x777441 */ if ((fS!=fO)) goto L_00777441;
L_0077742d:; BB(0x0077742d);
    /* 0077742d: mov word ptr [ecx + 0x334], ax */ W16((u32)(r_ecx+0x334u), (u16)r_eax);
    /* 00777434: mov eax, 1 */ r_eax = 0x1u;
    /* 00777439: ret 4 */ FN_RET(0x00777414); r_esp += 8; return;
L_0077743c:; BB(0x0077743c);
    /* 0077743c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077743e: ret 4 */ FN_RET(0x00777414); r_esp += 8; return;
L_00777441:; BB(0x00777441);
    /* 00777441: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00777443: mov word ptr [ecx + 0x334], dx */ W16((u32)(r_ecx+0x334u), (u16)r_edx);
    /* 0077744a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077744c: ret 4 */ FN_RET(0x00777414); r_esp += 8; return;
}

void f_00777450(void) /* sub_777450 */
{
    FN_ENTER(0x00777450);
    /* 00777450: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00777453: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777458: jne 0x77749b */ if (!fZ) goto L_0077749b;
L_0077745a:; BB(0x0077745a);
    /* 0077745a: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00777461: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00777464: je 0x77749b */ if (fZ) goto L_0077749b;
L_00777466:; BB(0x00777466);
    /* 00777466: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0077746a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077746c: je 0x77749b */ if (fZ) goto L_0077749b;
L_0077746e:; BB(0x0077746e);
    /* 0077746e: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 00777473: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777475: je 0x777482 */ if (fZ) goto L_00777482;
L_00777477:; BB(0x00777477);
    /* 00777477: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0077747b: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00777480: jl 0x77749b */ if ((fS!=fO)) goto L_0077749b;
L_00777482:; BB(0x00777482);
    /* 00777482: push 0x930848 */ { u32 v = 0x930848u; r_esp -= 4; W32(r_esp, v); }
    /* 00777487: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00777489: push 0xffff0000 */ { u32 v = 0xffff0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0077748e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00777492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777493: call 0x78a468 */ r_esp -= 4; W32(r_esp, 0x777498u); f_0078a468();
    /* 00777498: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077749b:; BB(0x0077749b);
    /* 0077749b: ret 4 */ FN_RET(0x00777450); r_esp += 8; return;
}

void f_007774a0(void) /* sub_7774A0 */
{
    FN_ENTER(0x007774a0);
    /* 007774a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007774a1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007774a4: mov edi, ecx */ r_edi = r_ecx;
    /* 007774a6: movsx edx, word ptr [edi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 007774ad: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007774b0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007774b4: je 0x777584 */ if (fZ) goto L_00777584;
L_007774ba:; BB(0x007774ba);
    /* 007774ba: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 007774bd: test edx, 0x4000800 */ {  u32 a = r_edx; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007774c3: jne 0x777584 */ if (!fZ) goto L_00777584;
L_007774c9:; BB(0x007774c9);
    /* 007774c9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007774cc: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 007774cf: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007774d2: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 007774d5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 007774d8: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007774dc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007774e0: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 007774e3: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x7774e8u); f_0082f9c4();
    /* 007774e8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007774eb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007774ed: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007774f1: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007774f3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007774f5: fcomp dword ptr [0x9781a8] */ fx_compare(ST(0), R_F32((u32)(0x9781a8u))); FPOP();
    /* 007774fb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007774fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007774fe: jae 0x77751b */ if (!fC) goto L_0077751b;
L_00777500:; BB(0x00777500);
    /* 00777500: mov dword ptr [edi + 0x30c], 0 */ W32((u32)(r_edi+0x30cu), 0x0u);
    /* 0077750a: mov dword ptr [edi + 0x314], 0 */ W32((u32)(r_edi+0x314u), 0x0u);
    /* 00777514: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777517: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777518: ret 8 */ FN_RET(0x007774a0); r_esp += 12; return;
L_0077751b:; BB(0x0077751b);
    /* 0077751b: fld dword ptr [0x9781a4] */ FPUSH(R_F32((u32)(0x9781a4u)));
    /* 00777521: fld dword ptr [0x9781a4] */ FPUSH(R_F32((u32)(0x9781a4u)));
    /* 00777527: mov eax, dword ptr [edi + 0x2b4] */ r_eax = R32((u32)(r_edi+0x2b4u));
    /* 0077752d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00777531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777533: je 0x777542 */ if (fZ) goto L_00777542;
L_00777535:; BB(0x00777535);
    /* 00777535: fld dword ptr [0x9781a0] */ FPUSH(R_F32((u32)(0x9781a0u)));
    /* 0077753b: fsub dword ptr [eax + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x14u));
    /* 0077753e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
L_00777542:; BB(0x00777542);
    /* 00777542: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00777546: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00777548: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0077754a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0077754d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0077754e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00777550: jae 0x777554 */ if (!fC) goto L_00777554;
L_00777552:; BB(0x00777552);
    /* 00777552: fst st(1) */ ST(1) = ST(0);
L_00777554:; BB(0x00777554);
    /* 00777554: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00777556: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0077755a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077755b: call 0x782868 */ r_esp -= 4; W32(r_esp, 0x777560u); f_00782868();
    /* 00777560: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00777562: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777565: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00777569: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0077756c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0077756e: fchs  */ ST(0) = -ST(0);
    /* 00777570: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00777572: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 00777576: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00777578: fstp dword ptr [edi + 0x30c] */ W_F32((u32)(r_edi+0x30cu), ST(0)); FPOP();
    /* 0077757e: fstp dword ptr [edi + 0x314] */ W_F32((u32)(r_edi+0x314u), ST(0)); FPOP();
L_00777584:; BB(0x00777584);
    /* 00777584: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777587: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777588: ret 8 */ FN_RET(0x007774a0); r_esp += 12; return;
}

void f_0077758c(void) /* sub_77758C */
{
    FN_ENTER(0x0077758c);
    /* 0077758c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077758d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077758e: mov esi, ecx */ r_esi = r_ecx;
    /* 00777590: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00777594: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00777598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00777599: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0077759b: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077759f: mov ecx, esi */ r_ecx = r_esi;
    /* 007775a1: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x7775a4u); call_ind(t); }
    /* 007775a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007775a6: je 0x7775b2 */ if (fZ) goto L_007775b2;
L_007775a8:; BB(0x007775a8);
    /* 007775a8: mov eax, 1 */ r_eax = 0x1u;
    /* 007775ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007775ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007775af: ret 0xc */ FN_RET(0x0077758c); r_esp += 16; return;
L_007775b2:; BB(0x007775b2);
    /* 007775b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007775b3: mov ecx, esi */ r_ecx = r_esi;
    /* 007775b5: call 0x7775c4 */ r_esp -= 4; W32(r_esp, 0x7775bau); f_007775c4();
    /* 007775ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007775bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007775bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007775be: ret 0xc */ FN_RET(0x0077758c); r_esp += 16; return;
}

void f_007775c4(void) /* sub_7775C4 */
{
    FN_ENTER(0x007775c4);
    /* 007775c4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007775c8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 007775cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007775cd: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007775cf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007775d1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007775d3: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007775d5: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 007775db: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007775dd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007775df: lea eax, [edx + eax + 0x1c] */ r_eax = (u32)(r_edx+r_eax+0x1cu);
    /* 007775e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007775e4: call 0x777450 */ r_esp -= 4; W32(r_esp, 0x7775e9u); f_00777450();
    /* 007775e9: ret 4 */ FN_RET(0x007775c4); r_esp += 8; return;
}

void f_007775ec(void) /* sub_7775EC */
{
    FN_ENTER(0x007775ec);
    /* 007775ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007775ed: mov edi, ecx */ r_edi = r_ecx;
    /* 007775ef: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007775f3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007775f5: je 0x77765e */ if (fZ) goto L_0077765e;
L_007775f7:; BB(0x007775f7);
    /* 007775f7: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 007775fa: test eax, 0x4000800 */ {  u32 a = r_eax; u32 b = 0x4000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007775ff: jne 0x77765e */ if (!fZ) goto L_0077765e;
L_00777601:; BB(0x00777601);
    /* 00777601: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00777605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777606: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00777608: mov ecx, edi */ r_ecx = r_edi;
    /* 0077760a: call dword ptr [eax + 0x74] */ { u32 t = R32((u32)(r_eax+0x74u)); r_esp -= 4; W32(r_esp, 0x77760du); call_ind(t); }
    /* 0077760d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077760f: jne 0x77761e */ if (!fZ) goto L_0077761e;
L_00777611:; BB(0x00777611);
    /* 00777611: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 00777614: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00777619: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0077761c: jmp 0x77765e */ goto L_0077765e;
L_0077761e:; BB(0x0077761e);
    /* 0077761e: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00777622: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00777625: mov edx, dword ptr [edi + 0xa4] */ r_edx = R32((u32)(r_edi+0xa4u));
    /* 0077762b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0077762d: sub ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00777631: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00777633: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00777635: sub ecx, dword ptr [esp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00777639: mov eax, dword ptr [edx + ecx*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x18u));
    /* 0077763d: or eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00777642: mov dword ptr [edx + ecx*4 + 0x18], eax */ W32((u32)(r_edx+r_ecx*4+0x18u), r_eax);
    /* 00777646: mov eax, dword ptr [edi + 0x2e0] */ r_eax = R32((u32)(r_edi+0x2e0u));
    /* 0077764c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077764f: mov dword ptr [edi + 0x2e0], eax */ W32((u32)(r_edi+0x2e0u), r_eax);
    /* 00777655: mov eax, 1 */ r_eax = 0x1u;
    /* 0077765a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077765b: ret 0xc */ FN_RET(0x007775ec); r_esp += 16; return;
L_0077765e:; BB(0x0077765e);
    /* 0077765e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777660: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777661: ret 0xc */ FN_RET(0x007775ec); r_esp += 16; return;
}

void f_00777664(void) /* sub_777664 */
{
    FN_ENTER(0x00777664);
    /* 00777664: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777667: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0077766b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077766d: je 0x7776c5 */ if (fZ) goto L_007776c5;
L_0077766f:; BB(0x0077766f);
    /* 0077766f: movsx eax, word ptr [eax + 0x2d4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x2d4u));
    /* 00777676: movsx edx, word ptr [ecx + 0x2d0] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2d0u));
    /* 0077767d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00777680: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00777683: fmul dword ptr [0x97819c] */ ST(0) = ST(0) * R_F32((u32)(0x97819cu));
    /* 00777689: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0077768d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00777691: fmul dword ptr [esp + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x1cu));
    /* 00777695: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00777697: fmul dword ptr [0x978198] */ ST(0) = ST(0) * R_F32((u32)(0x978198u));
    /* 0077769d: fcom dword ptr [0x978194] */ fx_compare(ST(0), R_F32((u32)(0x978194u))); 
    /* 007776a3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007776a5: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007776a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007776aa: jbe 0x7776c5 */ if ((fC||fZ)) goto L_007776c5;
L_007776ac:; BB(0x007776ac);
    /* 007776ac: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x7776b1u); f_007751b0();
    /* 007776b1: fcomp dword ptr [esp + 0x10] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x10u))); FPOP();
    /* 007776b5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007776b7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007776b8: ja 0x7776c5 */ if ((!fC&&!fZ)) goto L_007776c5;
L_007776ba:; BB(0x007776ba);
    /* 007776ba: mov eax, 1 */ r_eax = 0x1u;
    /* 007776bf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007776c2: ret 8 */ FN_RET(0x00777664); r_esp += 12; return;
L_007776c5:; BB(0x007776c5);
    /* 007776c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007776c7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007776ca: ret 8 */ FN_RET(0x00777664); r_esp += 12; return;
}

void f_007776d0(void) /* sub_7776D0 */
{
    FN_ENTER(0x007776d0);
    /* 007776d0: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007776d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007776d6: je 0x7776f4 */ if (fZ) goto L_007776f4;
L_007776d8:; BB(0x007776d8);
    /* 007776d8: movzx eax, word ptr [ecx + 0x2da] */ r_eax = (u32)R16((u32)(r_ecx+0x2dau));
    /* 007776df: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007776e4: jne 0x7776f4 */ if (!fZ) goto L_007776f4;
L_007776e6:; BB(0x007776e6);
    /* 007776e6: movzx eax, word ptr [edx + 0x2da] */ r_eax = (u32)R16((u32)(r_edx+0x2dau));
    /* 007776ed: mov word ptr [ecx + 0x2da], ax */ W16((u32)(r_ecx+0x2dau), (u16)r_eax);
L_007776f4:; BB(0x007776f4);
    /* 007776f4: ret 4 */ FN_RET(0x007776d0); r_esp += 8; return;
}

void f_007776f8(void) /* sub_7776F8 */
{
    FN_ENTER(0x007776f8);
    /* 007776f8: movsx eax, word ptr [ecx + 0x336] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x336u));
    /* 007776ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00777701: jl 0x777718 */ if ((fS!=fO)) goto L_00777718;
L_00777703:; BB(0x00777703);
    /* 00777703: movsx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2beu));
    /* 0077770a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0077770c: jge 0x777717 */ if ((fS==fO)) goto L_00777717;
L_0077770e:; BB(0x0077770e);
    /* 0077770e: mov eax, edx */ r_eax = r_edx;
    /* 00777710: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
L_00777717:; BB(0x00777717);
    /* 00777717: ret  */ FN_RET(0x007776f8); r_esp += 4; return;
L_00777718:; BB(0x00777718);
    /* 00777718: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0077771a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0077771c: mov word ptr [ecx + 0x336], dx */ W16((u32)(r_ecx+0x336u), (u16)r_edx);
    /* 00777723: ret  */ FN_RET(0x007776f8); r_esp += 4; return;
}

void f_00777724(void) /* sub_777724 */
{
    FN_ENTER(0x00777724);
    /* 00777724: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00777727: fadd dword ptr [ecx + 0x30c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x30cu));
    /* 0077772d: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00777730: fadd dword ptr [ecx + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x310u));
    /* 00777736: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00777739: fadd dword ptr [ecx + 0x314] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x314u));
    /* 0077773f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00777741: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 00777744: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00777747: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 0077774a: ret  */ FN_RET(0x00777724); r_esp += 4; return;
}

void f_0077774c(void) /* sub_77774C */
{
    FN_ENTER(0x0077774c);
    /* 0077774c: mov dword ptr [ecx + 0x314], 0 */ W32((u32)(r_ecx+0x314u), 0x0u);
    /* 00777756: mov dword ptr [ecx + 0x310], 0 */ W32((u32)(r_ecx+0x310u), 0x0u);
    /* 00777760: mov dword ptr [ecx + 0x30c], 0 */ W32((u32)(r_ecx+0x30cu), 0x0u);
    /* 0077776a: ret  */ FN_RET(0x0077774c); r_esp += 4; return;
}

void f_0077776c(void) /* sub_77776C */
{
    FN_ENTER(0x0077776c);
    /* 0077776c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077776d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077776e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077776f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00777770: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777773: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00777775: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00777777: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 0077777b: lea eax, [edx + 4] */ r_eax = (u32)(r_edx+0x4u);
    /* 0077777e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00777780: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00777782: jl 0x777792 */ if ((fS!=fO)) goto L_00777792;
L_00777784:; BB(0x00777784);
    /* 00777784: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00777787: mov edx, eax */ r_edx = r_eax;
    /* 00777789: mov ebp, dword ptr [edx] */ r_ebp = R32((u32)(r_edx));
    /* 0077778b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077778e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00777790: jge 0x777784 */ if ((fS==fO)) goto L_00777784;
L_00777792:; BB(0x00777792);
    /* 00777792: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00777795: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00777797: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777798: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x77779du); f_008581c5();
    /* 0077779d: mov esi, eax */ r_esi = r_eax;
    /* 0077779f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007777a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007777a4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007777a6: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007777a8: jle 0x7777c8 */ if ((fZ||fS!=fO)) goto L_007777c8;
L_007777aa:; BB(0x007777aa);
    /* 007777aa: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007777ad: jge 0x777885 */ if ((fS==fO)) goto L_00777885;
L_007777b3:; BB(0x007777b3);
    /* 007777b3: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
L_007777b7:; BB(0x007777b7);
    /* 007777b7: add ebp, dword ptr [edx + ecx*4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007777ba: mov dword ptr [esi + ecx*4], ebp */ W32((u32)(r_esi+r_ecx*4), r_ebp);
    /* 007777bd: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007777c0: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007777c2: jl 0x7777b7 */ if ((fS!=fO)) goto L_007777b7;
L_007777c4:; BB(0x007777c4);
    /* 007777c4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007777c6: jne 0x7777d4 */ if (!fZ) goto L_007777d4;
L_007777c8:; BB(0x007777c8);
    /* 007777c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007777ca: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007777cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007777ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007777cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007777d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007777d1: ret 4 */ FN_RET(0x0077776c); r_esp += 8; return;
L_007777d4:; BB(0x007777d4);
    /* 007777d4: add ebx, 0x168 */ {  u32 a = r_ebx; u32 b = 0x168u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007777da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007777dc: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x7777e1u); f_00763498();
    /* 007777e1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007777e4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007777e7: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007777ea: fadd dword ptr [eax*4 + 0x977f90] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x977f90u));
    /* 007777f1: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 007777f5: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 007777f9: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 007777fc: fadd dword ptr [ebp*4 + 0x977f90] */ ST(0) = ST(0) + R_F32((u32)(r_ebp*4+0x977f90u));
    /* 00777803: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00777805: fdiv dword ptr [0x97818c] */ ST(0) = ST(0) / R_F32((u32)(0x97818cu));
    /* 0077780b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0077780d: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00777811: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00777816: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077781b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0077781f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00777823: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00777827: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0077782b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0077782f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777831: jle 0x777873 */ if ((fZ||fS!=fO)) goto L_00777873;
L_00777833:; BB(0x00777833);
    /* 00777833: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777836: jl 0x777867 */ if ((fS!=fO)) goto L_00777867;
L_00777838:; BB(0x00777838);
    /* 00777838: cmp edx, dword ptr [esi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077783b: jl 0x777873 */ if ((fS!=fO)) goto L_00777873;
L_0077783d:; BB(0x0077783d);
    /* 0077783d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00777840: cmp edx, dword ptr [esi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777843: jl 0x777873 */ if ((fS!=fO)) goto L_00777873;
L_00777845:; BB(0x00777845);
    /* 00777845: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00777848: cmp edx, dword ptr [esi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077784b: jl 0x777873 */ if ((fS!=fO)) goto L_00777873;
L_0077784d:; BB(0x0077784d);
    /* 0077784d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00777850: cmp edx, dword ptr [esi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777853: jl 0x777873 */ if ((fS!=fO)) goto L_00777873;
L_00777855:; BB(0x00777855);
    /* 00777855: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00777858: cmp edx, dword ptr [esi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077785b: jl 0x777873 */ if ((fS!=fO)) goto L_00777873;
L_0077785d:; BB(0x0077785d);
    /* 0077785d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00777860: lea ecx, [edi - 6] */ r_ecx = (u32)(r_edi+0xfffffffau);
    /* 00777863: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777865: jle 0x777838 */ if ((fZ||fS!=fO)) goto L_00777838;
L_00777867:; BB(0x00777867);
    /* 00777867: cmp edx, dword ptr [esi + ebx*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_ebx*4)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077786a: jl 0x777873 */ if ((fS!=fO)) goto L_00777873;
L_0077786c:; BB(0x0077786c);
    /* 0077786c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0077786f: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777871: jl 0x777867 */ if ((fS!=fO)) goto L_00777867;
L_00777873:; BB(0x00777873);
    /* 00777873: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00777874: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x777879u); f_00857e98();
    /* 00777879: mov eax, ebx */ r_eax = r_ebx;
    /* 0077787b: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0077787e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0077787f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00777880: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777881: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777882: ret 4 */ FN_RET(0x0077776c); r_esp += 8; return;
L_00777885:; BB(0x00777885);
    /* 00777885: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00777889: mov dword ptr [esp + 0x2c], edi */ W32((u32)(r_esp+0x2cu), r_edi);
    /* 0077788d: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 00777891: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
L_00777894:; BB(0x00777894);
    /* 00777894: add ebp, dword ptr [edx + ecx*4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+r_ecx*4)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00777897: mov dword ptr [esi + ecx*4], ebp */ W32((u32)(r_esi+r_ecx*4), r_ebp);
    /* 0077789a: mov ebx, dword ptr [edx + ecx*4 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 0077789e: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007778a0: mov dword ptr [esi + ecx*4 + 4], ebx */ W32((u32)(r_esi+r_ecx*4+0x4u), r_ebx);
    /* 007778a4: mov ebp, dword ptr [edx + ecx*4 + 8] */ r_ebp = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 007778a8: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007778aa: mov dword ptr [esi + ecx*4 + 8], ebp */ W32((u32)(r_esi+r_ecx*4+0x8u), r_ebp);
    /* 007778ae: mov edi, dword ptr [edx + ecx*4 + 0xc] */ r_edi = R32((u32)(r_edx+r_ecx*4+0xcu));
    /* 007778b2: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007778b4: mov dword ptr [esi + ecx*4 + 0xc], edi */ W32((u32)(r_esi+r_ecx*4+0xcu), r_edi);
    /* 007778b8: mov ebp, dword ptr [edx + ecx*4 + 0x10] */ r_ebp = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 007778bc: add ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007778be: mov dword ptr [esi + ecx*4 + 0x10], ebp */ W32((u32)(r_esi+r_ecx*4+0x10u), r_ebp);
    /* 007778c2: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007778c5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007778c7: jle 0x777894 */ if ((fZ||fS!=fO)) goto L_00777894;
L_007778c9:; BB(0x007778c9);
    /* 007778c9: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 007778cd: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007778d1: jmp 0x7777b3 */ goto L_007777b3;
}

void f_007778d8(void) /* sub_7778D8 */
{
    FN_ENTER(0x007778d8);
    /* 007778d8: movzx eax, word ptr [ecx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ecx+0x2d8u));
    /* 007778df: ret  */ FN_RET(0x007778d8); r_esp += 4; return;
}

void f_007778e0(void) /* sub_7778E0 */
{
    FN_ENTER(0x007778e0);
    /* 007778e0: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 007778e5: mov word ptr [ecx + 0x2d8], ax */ W16((u32)(r_ecx+0x2d8u), (u16)r_eax);
    /* 007778ec: ret 4 */ FN_RET(0x007778e0); r_esp += 8; return;
}

void f_007778f0(void) /* sub_7778F0 */
{
    FN_ENTER(0x007778f0);
    /* 007778f0: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x7778f5u); f_00770738();
    /* 007778f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007778f7: je 0x7778fc */ if (fZ) goto L_007778fc;
L_007778f9:; BB(0x007778f9);
    /* 007778f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007778fb: ret  */ FN_RET(0x007778f0); r_esp += 4; return;
L_007778fc:; BB(0x007778fc);
    /* 007778fc: mov eax, 1 */ r_eax = 0x1u;
    /* 00777901: ret  */ FN_RET(0x007778f0); r_esp += 4; return;
}

void f_00777904(void) /* sub_777904 */
{
    FN_ENTER(0x00777904);
    /* 00777904: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00777905: mov ebx, esp */ r_ebx = r_esp;
    /* 00777907: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0077790a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077790b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0077790c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0077790d: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777910: mov esi, ecx */ r_esi = r_ecx;
    /* 00777912: mov ecx, esi */ r_ecx = r_esi;
    /* 00777914: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x777919u); f_00770738();
    /* 00777919: mov ebp, eax */ r_ebp = r_eax;
    /* 0077791b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077791d: je 0x77794e */ if (fZ) goto L_0077794e;
L_0077791f:; BB(0x0077791f);
    /* 0077791f: mov edx, dword ptr [esi + 0x31c] */ r_edx = R32((u32)(r_esi+0x31cu));
    /* 00777925: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777927: je 0x77794e */ if (fZ) goto L_0077794e;
L_00777929:; BB(0x00777929);
    /* 00777929: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077792b: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x777930u); f_008173b4();
    /* 00777930: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777932: je 0x77794e */ if (fZ) goto L_0077794e;
L_00777934:; BB(0x00777934);
    /* 00777934: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00777938: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777939: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x77793eu); f_007b4d18();
    /* 0077793e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077793f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777941: je 0x77794e */ if (fZ) goto L_0077794e;
L_00777943:; BB(0x00777943);
    /* 00777943: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00777946: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077794c: je 0x77795a */ if (fZ) goto L_0077795a;
L_0077794e:; BB(0x0077794e);
    /* 0077794e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777950: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777953: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00777954: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777955: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777956: mov esp, ebx */ r_esp = r_ebx;
    /* 00777958: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00777959: ret  */ FN_RET(0x00777904); r_esp += 4; return;
L_0077795a:; BB(0x0077795a);
    /* 0077795a: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00777960: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00777964: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777966: je 0x777ae1 */ if (fZ) goto L_00777ae1;
L_0077796c:; BB(0x0077796c);
    /* 0077796c: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0077796f: mov edi, dword ptr [ebp + 0x3c] */ r_edi = R32((u32)(r_ebp+0x3cu));
    /* 00777972: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00777975: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00777977: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0077797b: mov ecx, dword ptr [ebp + 0xa8] */ r_ecx = R32((u32)(r_ebp+0xa8u));
    /* 00777981: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00777985: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777987: jle 0x77794e */ if ((fZ||fS!=fO)) goto L_0077794e;
L_00777989:; BB(0x00777989);
    /* 00777989: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0077798d: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 00777991: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00777995: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00777999: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0077799d: mov eax, ecx */ r_eax = r_ecx;
    /* 0077799f: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 007779a3: jmp 0x7779ab */ goto L_007779ab;
L_007779a5:; BB(0x007779a5);
    /* 007779a5: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
L_007779ab:; BB(0x007779ab);
    /* 007779ab: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 007779ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007779b0: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007779b2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007779b4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007779b6: sub esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007779b8: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 007779bb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007779bd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007779bf: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 007779c2: test ecx, 0x2000000 */ {  u32 a = r_ecx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007779c8: jne 0x777ad1 */ if (!fZ) goto L_00777ad1;
L_007779ce:; BB(0x007779ce);
    /* 007779ce: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 007779d0: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007779d4: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 007779d7: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007779dc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007779e0: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 007779e3: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007779e7: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7779ecu); f_0082d990();
    /* 007779ec: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 007779ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007779f1: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7779f6u); f_0082d8bc();
    /* 007779f6: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007779fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007779fb: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007779ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00777a01: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x777a06u); f_0082eab8();
    /* 00777a06: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x777a0bu); f_0082da80();
    /* 00777a0b: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00777a0f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00777a13: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x777a18u); f_0082ebac();
    /* 00777a18: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00777a1c: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00777a20: lea edx, [edx + 0x38] */ r_edx = (u32)(r_edx+0x38u);
    /* 00777a23: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x777a28u); f_0082f9c4();
    /* 00777a28: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00777a2c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00777a30: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00777a32: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00777a36: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00777a3a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00777a3c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00777a3e: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00777a42: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 00777a48: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00777a4e: fld dword ptr [edx + esi*4 + 0xc] */ FPUSH(R_F32((u32)(r_edx+r_esi*4+0xcu)));
    /* 00777a52: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00777a55: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00777a57: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00777a59: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00777a5d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00777a5f: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00777a63: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00777a65: fmul qword ptr [0x977f88] */ ST(0) = ST(0) * R_F64((u32)(0x977f88u));
    /* 00777a6b: fdiv qword ptr [0x977f80] */ ST(0) = ST(0) / R_F64((u32)(0x977f80u));
    /* 00777a71: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00777a75: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00777a7a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00777a7f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00777a83: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00777a87: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00777a8b: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00777a8f: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00777a93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777a94: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 00777a98: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00777a9b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x777aa0u); f_007a9018();
    /* 00777aa0: mov ecx, eax */ r_ecx = r_eax;
    /* 00777aa2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777aa5: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00777aa9: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 00777aad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00777aaf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00777ab0: jb 0x777aba */ if (fC) goto L_00777aba;
L_00777ab2:; BB(0x00777ab2);
    /* 00777ab2: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 00777ab8: jmp 0x777ad1 */ goto L_00777ad1;
L_00777aba:; BB(0x00777aba);
    /* 00777aba: mov edx, esi */ r_edx = r_esi;
    /* 00777abc: mov esi, dword ptr [edx + 0x31c] */ r_esi = R32((u32)(r_edx+0x31cu));
    /* 00777ac2: cmp ecx, dword ptr [esi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777ac5: jl 0x777b87 */ if ((fS!=fO)) goto L_00777b87;
L_00777acb:; BB(0x00777acb);
    /* 00777acb: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
L_00777ad1:; BB(0x00777ad1);
    /* 00777ad1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00777ad4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777ad6: jl 0x7779a5 */ if ((fS!=fO)) goto L_007779a5;
L_00777adc:; BB(0x00777adc);
    /* 00777adc: jmp 0x77794e */ goto L_0077794e;
L_00777ae1:; BB(0x00777ae1);
    /* 00777ae1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00777ae4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777ae5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00777ae6: mov ecx, esi */ r_ecx = r_esi;
    /* 00777ae8: call 0x771458 */ r_esp -= 4; W32(r_esp, 0x777aedu); f_00771458();
    /* 00777aed: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00777af1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00777af4: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 00777af8: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00777afa: fmul qword ptr [0x977f88] */ ST(0) = ST(0) * R_F64((u32)(0x977f88u));
    /* 00777b00: fdiv qword ptr [0x977f80] */ ST(0) = ST(0) / R_F64((u32)(0x977f80u));
    /* 00777b06: fnstcw word ptr [esp + 0x28] */ W16((u32)(r_esp+0x28u), fcw);
    /* 00777b0a: movzx eax, word ptr [esp + 0x28] */ r_eax = (u32)R16((u32)(r_esp+0x28u));
    /* 00777b0f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00777b14: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00777b18: fldcw word ptr [esp + 0x30] */ fcw = R16((u32)(r_esp+0x30u));
    /* 00777b1c: fistp dword ptr [esp + 0x38] */ W32((u32)(r_esp+0x38u), (u32)fx_int32(ST(0))); FPOP();
    /* 00777b20: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00777b24: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00777b28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777b29: push dword ptr [esi + 0x60] */ { u32 v = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00777b2c: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x777b31u); f_007a9018();
    /* 00777b31: mov ecx, eax */ r_ecx = r_eax;
    /* 00777b33: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777b36: mov edx, dword ptr [ebp + 0xa4] */ r_edx = R32((u32)(r_ebp+0xa4u));
    /* 00777b3c: mov ebp, dword ptr [esi + 0x31c] */ r_ebp = R32((u32)(r_esi+0x31cu));
    /* 00777b42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777b44: je 0x777b80 */ if (fZ) goto L_00777b80;
L_00777b46:; BB(0x00777b46);
    /* 00777b46: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00777b49: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00777b4c: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00777b4f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00777b51: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00777b53: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00777b55: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00777b57: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
L_00777b59:; BB(0x00777b59);
    /* 00777b59: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00777b5d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00777b5f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00777b61: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00777b62: ja 0x77794e */ if ((!fC&&!fZ)) goto L_0077794e;
L_00777b68:; BB(0x00777b68);
    /* 00777b68: cmp ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777b6b: jg 0x77794e */ if ((!fZ&&fS==fO)) goto L_0077794e;
L_00777b71:; BB(0x00777b71);
    /* 00777b71: mov eax, 1 */ r_eax = 0x1u;
    /* 00777b76: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777b79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00777b7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777b7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777b7c: mov esp, ebx */ r_esp = r_ebx;
    /* 00777b7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00777b7f: ret  */ FN_RET(0x00777904); r_esp += 4; return;
L_00777b80:; BB(0x00777b80);
    /* 00777b80: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 00777b83: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00777b85: jmp 0x777b59 */ goto L_00777b59;
L_00777b87:; BB(0x00777b87);
    /* 00777b87: mov eax, 1 */ r_eax = 0x1u;
    /* 00777b8c: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777b8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00777b90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777b91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777b92: mov esp, ebx */ r_esp = r_ebx;
    /* 00777b94: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00777b95: ret  */ FN_RET(0x00777904); r_esp += 4; return;
}

void f_00777b98(void) /* sub_777B98 */
{
    FN_ENTER(0x00777b98);
    /* 00777b98: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00777b9b: and eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777ba0: ret  */ FN_RET(0x00777b98); r_esp += 4; return;
}

void f_00777ba4(void) /* sub_777BA4 */
{
    FN_ENTER(0x00777ba4);
    /* 00777ba4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00777ba7: and eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777bac: ret  */ FN_RET(0x00777ba4); r_esp += 4; return;
}

void f_00777bb0(void) /* sub_777BB0 */
{
    FN_ENTER(0x00777bb0);
    /* 00777bb0: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00777bb3: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777bb8: ret  */ FN_RET(0x00777bb0); r_esp += 4; return;
}

void f_00777bbc(void) /* sub_777BBC */
{
    FN_ENTER(0x00777bbc);
    /* 00777bbc: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00777bbf: and eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777bc4: ret  */ FN_RET(0x00777bbc); r_esp += 4; return;
}

void f_00777bc8(void) /* sub_777BC8 */
{
    FN_ENTER(0x00777bc8);
    /* 00777bc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00777bc9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00777bca: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777bcd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00777bcf: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 00777bd2: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777bd8: je 0x777d07 */ if (fZ) goto L_00777d07;
L_00777bde:; BB(0x00777bde);
    /* 00777bde: mov ecx, dword ptr [ebx + 0x264] */ r_ecx = R32((u32)(r_ebx+0x264u));
    /* 00777be4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00777be7: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00777bec: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00777bee: mov eax, ecx */ r_eax = r_ecx;
    /* 00777bf0: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00777bf3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777bf5: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00777bf8: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777bfa: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00777bfd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00777bff: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00777c01: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00777c04: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777c06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777c08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777c0a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777c0c: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777c0e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777c10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777c12: jne 0x777cd2 */ if (!fZ) goto L_00777cd2;
L_00777c18:; BB(0x00777c18);
    /* 00777c18: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777c1e: jne 0x777c5b */ if (!fZ) goto L_00777c5b;
L_00777c20:; BB(0x00777c20);
    /* 00777c20: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00777c22: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 00777c24: mov dword ptr [ebx + 0x264], ecx */ W32((u32)(r_ebx+0x264u), r_ecx);
    /* 00777c2a: lea eax, [ebx + 0x300] */ r_eax = (u32)(r_ebx+0x300u);
    /* 00777c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777c31: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x777c36u); f_0050b7a4();
    /* 00777c36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777c3b: je 0x777c49 */ if (fZ) goto L_00777c49;
L_00777c3d:; BB(0x00777c3d);
    /* 00777c3d: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00777c41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777c42: mov ecx, eax */ r_ecx = r_eax;
    /* 00777c44: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x777c49u); f_00508f14();
L_00777c49:; BB(0x00777c49);
    /* 00777c49: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00777c4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777c4e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777c4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777c50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777c51: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00777c53: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x777c58u); f_00814298();
    /* 00777c58: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00777c5b:; BB(0x00777c5b);
    /* 00777c5b: movsx edx, word ptr [ebx + 0x334] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 00777c62: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00777c65: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00777c68: fmul dword ptr [0x978188] */ ST(0) = ST(0) * R_F32((u32)(0x978188u));
    /* 00777c6e: mov dword ptr [ebx + 0x264], 0 */ W32((u32)(r_ebx+0x264u), 0x0u);
    /* 00777c78: mov edi, dword ptr [0xa9cd68] */ r_edi = R32((u32)(0xa9cd68u));
    /* 00777c7e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00777c82: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00777c87: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00777c8c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00777c90: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00777c94: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00777c98: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00777c9c: movsx edx, word ptr [esp + 0x18] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x18u));
    /* 00777ca1: mov eax, 1 */ r_eax = 0x1u;
    /* 00777ca6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777ca9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00777cab: jg 0x777caf */ if ((!fZ&&fS==fO)) goto L_00777caf;
L_00777cad:; BB(0x00777cad);
    /* 00777cad: mov edx, eax */ r_edx = r_eax;
L_00777caf:; BB(0x00777caf);
    /* 00777caf: movzx eax, word ptr [edi*2 + 0x978180] */ r_eax = (u32)R16((u32)(r_edi*2+0x978180u));
    /* 00777cb7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00777cb9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00777cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777cbd: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x777cc2u); f_00777414();
    /* 00777cc2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00777cc4: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x777cc9u); f_00775270();
    /* 00777cc9: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00777ccc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777cce: jg 0x777cd8 */ if ((!fZ&&fS==fO)) goto L_00777cd8;
L_00777cd0:; BB(0x00777cd0);
    /* 00777cd0: jmp 0x777ce3 */ goto L_00777ce3;
L_00777cd2:; BB(0x00777cd2);
    /* 00777cd2: mov dword ptr [ebx + 0x264], ecx */ W32((u32)(r_ebx+0x264u), r_ecx);
L_00777cd8:; BB(0x00777cd8);
    /* 00777cd8: mov eax, 1 */ r_eax = 0x1u;
    /* 00777cdd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777ce0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00777ce1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777ce2: ret  */ FN_RET(0x00777bc8); r_esp += 4; return;
L_00777ce3:; BB(0x00777ce3);
    /* 00777ce3: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 00777ce6: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777ceb: jne 0x777d07 */ if (!fZ) goto L_00777d07;
L_00777ced:; BB(0x00777ced);
    /* 00777ced: mov eax, 1 */ r_eax = 0x1u;
    /* 00777cf2: mov word ptr [ebx + 0x334], ax */ W16((u32)(r_ebx+0x334u), (u16)r_eax);
    /* 00777cf9: lea edx, [ebx + 0x334] */ r_edx = (u32)(r_ebx+0x334u);
    /* 00777cff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777d00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00777d02: call 0x770b74 */ r_esp -= 4; W32(r_esp, 0x777d07u); f_00770b74();
L_00777d07:; BB(0x00777d07);
    /* 00777d07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777d09: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777d0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00777d0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777d0e: ret  */ FN_RET(0x00777bc8); r_esp += 4; return;
}

void f_00777d10(void) /* sub_777D10 */
{
    FN_ENTER(0x00777d10);
    /* 00777d10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00777d11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00777d12: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00777d15: mov esi, ecx */ r_esi = r_ecx;
    /* 00777d17: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00777d1a: test edi, 0x4000 */ {  u32 a = r_edi; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777d20: je 0x777d4f */ if (fZ) goto L_00777d4f;
L_00777d22:; BB(0x00777d22);
    /* 00777d22: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00777d26: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777d2b: jl 0x777d4f */ if ((fS!=fO)) goto L_00777d4f;
L_00777d2d:; BB(0x00777d2d);
    /* 00777d2d: mov eax, dword ptr [esi + 0x294] */ r_eax = R32((u32)(r_esi+0x294u));
    /* 00777d33: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00777d36: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 00777d3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777d3e: jle 0x777e1a */ if ((fZ||fS!=fO)) goto L_00777e1a;
L_00777d44:; BB(0x00777d44);
    /* 00777d44: mov eax, 1 */ r_eax = 0x1u;
    /* 00777d49: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777d4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777d4d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777d4e: ret  */ FN_RET(0x00777d10); r_esp += 4; return;
L_00777d4f:; BB(0x00777d4f);
    /* 00777d4f: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777d55: je 0x777e12 */ if (fZ) goto L_00777e12;
L_00777d5b:; BB(0x00777d5b);
    /* 00777d5b: mov ecx, dword ptr [esi + 0x264] */ r_ecx = R32((u32)(r_esi+0x264u));
    /* 00777d61: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00777d65: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00777d68: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777d6d: jge 0x777d88 */ if ((fS==fO)) goto L_00777d88;
L_00777d6f:; BB(0x00777d6f);
    /* 00777d6f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777d71: jle 0x777e40 */ if ((fZ||fS!=fO)) goto L_00777e40;
L_00777d77:; BB(0x00777d77);
    /* 00777d77: mov dword ptr [esi + 0x264], ecx */ W32((u32)(r_esi+0x264u), r_ecx);
L_00777d7d:; BB(0x00777d7d);
    /* 00777d7d: mov eax, 1 */ r_eax = 0x1u;
    /* 00777d82: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777d85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777d86: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777d87: ret  */ FN_RET(0x00777d10); r_esp += 4; return;
L_00777d88:; BB(0x00777d88);
    /* 00777d88: mov dword ptr [esi + 0x264], ecx */ W32((u32)(r_esi+0x264u), r_ecx);
    /* 00777d8e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777d90: jle 0x777e92 */ if ((fZ||fS!=fO)) goto L_00777e92;
L_00777d96:; BB(0x00777d96);
    /* 00777d96: and edi, 0xfffffffc */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00777d99: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00777d9c: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00777d9f: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00777da4: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00777da6: mov eax, ecx */ r_eax = r_ecx;
    /* 00777da8: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00777dab: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777dad: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00777db0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777db2: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00777db5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00777db7: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00777db9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00777dbc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777dbe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777dc0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777dc2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777dc4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00777dc6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777dc8: jne 0x777e07 */ if (!fZ) goto L_00777e07;
L_00777dca:; BB(0x00777dca);
    /* 00777dca: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777dd0: jne 0x777e07 */ if (!fZ) goto L_00777e07;
L_00777dd2:; BB(0x00777dd2);
    /* 00777dd2: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00777dd4: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00777dd6: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00777ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777ddd: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x777de2u); f_0050b7a4();
    /* 00777de2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777de5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777de7: je 0x777df5 */ if (fZ) goto L_00777df5;
L_00777de9:; BB(0x00777de9);
    /* 00777de9: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00777ded: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777dee: mov ecx, eax */ r_ecx = r_eax;
    /* 00777df0: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x777df5u); f_00508f14();
L_00777df5:; BB(0x00777df5);
    /* 00777df5: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00777df8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777dfa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777dfc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00777dfd: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00777dff: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x777e04u); f_00814298();
    /* 00777e04: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00777e07:; BB(0x00777e07);
    /* 00777e07: mov eax, 1 */ r_eax = 0x1u;
    /* 00777e0c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777e0f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777e10: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777e11: ret  */ FN_RET(0x00777d10); r_esp += 4; return;
L_00777e12:; BB(0x00777e12);
    /* 00777e12: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777e14: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00777e17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777e18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777e19: ret  */ FN_RET(0x00777d10); r_esp += 4; return;
L_00777e1a:; BB(0x00777e1a);
    /* 00777e1a: mov dword ptr [esi + 0x290], 0 */ W32((u32)(r_esi+0x290u), 0x0u);
    /* 00777e24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777e26: mov dword ptr [esi + 0x28c], eax */ W32((u32)(r_esi+0x28cu), r_eax);
    /* 00777e2c: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 00777e32: and edi, 0xffffbfff */ {  u32 a = r_edi; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00777e38: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00777e3b: jmp 0x777d44 */ goto L_00777d44;
L_00777e40:; BB(0x00777e40);
    /* 00777e40: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777e46: jne 0x777e83 */ if (!fZ) goto L_00777e83;
L_00777e48:; BB(0x00777e48);
    /* 00777e48: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00777e4a: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 00777e4c: mov dword ptr [esi + 0x264], ecx */ W32((u32)(r_esi+0x264u), r_ecx);
    /* 00777e52: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00777e58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777e59: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x777e5eu); f_0050b7a4();
    /* 00777e5e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777e63: je 0x777e71 */ if (fZ) goto L_00777e71;
L_00777e65:; BB(0x00777e65);
    /* 00777e65: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00777e69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777e6a: mov ecx, eax */ r_ecx = r_eax;
    /* 00777e6c: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x777e71u); f_00508f14();
L_00777e71:; BB(0x00777e71);
    /* 00777e71: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00777e74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777e76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777e77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777e78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777e79: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00777e7b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x777e80u); f_00814298();
    /* 00777e80: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00777e83:; BB(0x00777e83);
    /* 00777e83: mov dword ptr [esi + 0x264], 0x2d */ W32((u32)(r_esi+0x264u), 0x2du);
    /* 00777e8d: jmp 0x777d7d */ goto L_00777d7d;
L_00777e92:; BB(0x00777e92);
    /* 00777e92: movsx edx, word ptr [esi + 0x2c8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2c8u));
    /* 00777e99: fld dword ptr [esi + 0x260] */ FPUSH(R_F32((u32)(r_esi+0x260u)));
    /* 00777e9f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00777ea2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00777ea5: mov dword ptr [esi + 0x260], 0 */ W32((u32)(r_esi+0x260u), 0x0u);
    /* 00777eaf: and edi, 0xfffffffc */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00777eb2: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00777eb5: and edi, 0x3f */ {  u32 a = r_edi; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00777eb8: mov dword ptr [esi + 0x338], edi */ W32((u32)(r_esi+0x338u), r_edi);
    /* 00777ebe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00777ec0: fchs  */ ST(0) = -ST(0);
    /* 00777ec2: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00777ec4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00777ec8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00777ecd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00777ed2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00777ed6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00777eda: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00777ede: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00777ee2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00777ee4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00777ee8: add word ptr [esi + 0x2d0], ax */ { u32 ad = (u32)(r_esi+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00777eef: mov dword ptr [esi + 0x25c], edi */ W32((u32)(r_esi+0x25cu), r_edi);
    /* 00777ef5: mov dword ptr [esi + 0x264], edi */ W32((u32)(r_esi+0x264u), r_edi);
    /* 00777efb: jmp 0x777e12 */ goto L_00777e12;
}

void f_00777f00(void) /* sub_777F00 */
{
    FN_ENTER(0x00777f00);
    /* 00777f00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00777f01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00777f02: mov esi, ecx */ r_esi = r_ecx;
    /* 00777f04: mov edi, dword ptr [esi + 0x30] */ r_edi = R32((u32)(r_esi+0x30u));
    /* 00777f07: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777f0d: je 0x777fa5 */ if (fZ) goto L_00777fa5;
L_00777f13:; BB(0x00777f13);
    /* 00777f13: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00777f17: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00777f1c: jge 0x777fa5 */ if ((fS==fO)) goto L_00777fa5;
L_00777f22:; BB(0x00777f22);
    /* 00777f22: mov ecx, dword ptr [esi + 0x270] */ r_ecx = R32((u32)(r_esi+0x270u));
    /* 00777f28: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00777f2b: mov dword ptr [esi + 0x270], ecx */ W32((u32)(r_esi+0x270u), r_ecx);
    /* 00777f31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777f33: jle 0x777faa */ if ((fZ||fS!=fO)) goto L_00777faa;
L_00777f35:; BB(0x00777f35);
    /* 00777f35: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00777f3a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00777f3c: mov eax, ecx */ r_eax = r_ecx;
    /* 00777f3e: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00777f41: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777f43: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00777f46: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777f48: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00777f4b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00777f4d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00777f4f: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00777f52: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777f54: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777f56: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00777f58: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00777f5a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00777f5c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777f5e: jne 0x777f9d */ if (!fZ) goto L_00777f9d;
L_00777f60:; BB(0x00777f60);
    /* 00777f60: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777f66: jne 0x777f9d */ if (!fZ) goto L_00777f9d;
L_00777f68:; BB(0x00777f68);
    /* 00777f68: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 00777f6a: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00777f6c: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00777f72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777f73: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x777f78u); f_0050b7a4();
    /* 00777f78: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00777f7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777f7d: je 0x777f8b */ if (fZ) goto L_00777f8b;
L_00777f7f:; BB(0x00777f7f);
    /* 00777f7f: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 00777f83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00777f84: mov ecx, eax */ r_ecx = r_eax;
    /* 00777f86: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x777f8bu); f_00508f14();
L_00777f8b:; BB(0x00777f8b);
    /* 00777f8b: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00777f8e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777f91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00777f92: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00777f93: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00777f95: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x777f9au); f_00814298();
    /* 00777f9a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00777f9d:; BB(0x00777f9d);
    /* 00777f9d: mov eax, 1 */ r_eax = 0x1u;
    /* 00777fa2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777fa3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777fa4: ret  */ FN_RET(0x00777f00); r_esp += 4; return;
L_00777fa5:; BB(0x00777fa5);
    /* 00777fa5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00777fa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00777fa8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00777fa9: ret  */ FN_RET(0x00777f00); r_esp += 4; return;
L_00777faa:; BB(0x00777faa);
    /* 00777faa: mov dword ptr [esi + 0x26c], 0 */ W32((u32)(r_esi+0x26cu), 0x0u);
    /* 00777fb4: and edi, 0xffffffc3 */ {  u32 a = r_edi; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00777fb7: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
    /* 00777fba: and edi, 0x3f */ {  u32 a = r_edi; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00777fbd: mov dword ptr [esi + 0x338], edi */ W32((u32)(r_esi+0x338u), r_edi);
    /* 00777fc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00777fc5: mov dword ptr [esi + 0x268], eax */ W32((u32)(r_esi+0x268u), r_eax);
    /* 00777fcb: mov dword ptr [esi + 0x270], eax */ W32((u32)(r_esi+0x270u), r_eax);
    /* 00777fd1: jmp 0x777fa5 */ goto L_00777fa5;
}

void f_00777fd4(void) /* sub_777FD4 */
{
    FN_ENTER(0x00777fd4);
    /* 00777fd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00777fd5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00777fd6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00777fd8: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00777fdb: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00777fe1: je 0x778077 */ if (fZ) goto L_00778077;
L_00777fe7:; BB(0x00777fe7);
    /* 00777fe7: mov ecx, dword ptr [ebp + 0x270] */ r_ecx = R32((u32)(r_ebp+0x270u));
    /* 00777fed: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00777ff0: mov dword ptr [ebp + 0x270], ecx */ W32((u32)(r_ebp+0x270u), r_ecx);
    /* 00777ff6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00777ff8: jle 0x77807c */ if ((fZ||fS!=fO)) goto L_0077807c;
L_00777ffe:; BB(0x00777ffe);
    /* 00777ffe: and edi, 0xffffffc3 */ {  u32 a = r_edi; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00778001: or edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00778004: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00778007: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 0077800c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0077800e: mov eax, ecx */ r_eax = r_ecx;
    /* 00778010: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00778013: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00778015: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00778018: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077801a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0077801d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0077801f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00778021: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00778024: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00778026: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00778028: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0077802a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0077802c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0077802e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00778030: jne 0x77806f */ if (!fZ) goto L_0077806f;
L_00778032:; BB(0x00778032);
    /* 00778032: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00778038: jne 0x77806f */ if (!fZ) goto L_0077806f;
L_0077803a:; BB(0x0077803a);
    /* 0077803a: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0077803c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0077803e: lea eax, [ebp + 0x300] */ r_eax = (u32)(r_ebp+0x300u);
    /* 00778044: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778045: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x77804au); f_0050b7a4();
    /* 0077804a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0077804d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077804f: je 0x77805d */ if (fZ) goto L_0077805d;
L_00778051:; BB(0x00778051);
    /* 00778051: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00778055: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00778056: mov ecx, eax */ r_ecx = r_eax;
    /* 00778058: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x77805du); f_00508f14();
L_0077805d:; BB(0x0077805d);
    /* 0077805d: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00778060: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778062: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778063: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00778064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00778065: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00778067: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x77806cu); f_00814298();
    /* 0077806c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0077806f:; BB(0x0077806f);
    /* 0077806f: mov eax, 1 */ r_eax = 0x1u;
    /* 00778074: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00778075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00778076: ret  */ FN_RET(0x00777fd4); r_esp += 4; return;
L_00778077:; BB(0x00778077);
    /* 00778077: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00778079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0077807a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0077807b: ret  */ FN_RET(0x00777fd4); r_esp += 4; return;
L_0077807c:; BB(0x0077807c);
    /* 0077807c: mov dword ptr [ebp + 0x26c], 0 */ W32((u32)(r_ebp+0x26cu), 0x0u);
    /* 00778086: and edi, 0xffffffc3 */ {  u32 a = r_edi; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00778089: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 0077808c: and edi, 0x3f */ {  u32 a = r_edi; u32 b = 0x3fu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0077808f: mov dword ptr [ebp + 0x338], edi */ W32((u32)(r_ebp+0x338u), r_edi);
    /* 00778095: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00778097: mov dword ptr [ebp + 0x268], eax */ W32((u32)(r_ebp+0x268u), r_eax);
    /* 0077809d: mov dword ptr [ebp + 0x270], eax */ W32((u32)(r_ebp+0x270u), r_eax);
    /* 007780a3: jmp 0x778077 */ goto L_00778077;
}

