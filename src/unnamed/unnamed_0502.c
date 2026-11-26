#include "protos.h"

void f_00502118(void) /* sub_502118 */
{
    FN_ENTER(0x00502118);
    /* 00502118: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050211b: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0050211f: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00502123: call 0x502134 */ r_esp -= 4; W32(r_esp, 0x502128u); f_00502134();
    /* 00502128: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050212b: ret  */ FN_RET(0x00502118); r_esp += 4; return;
}

void f_0050212c(void) /* sub_50212C */
{
    FN_ENTER(0x0050212c);
    /* 0050212c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00502130: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00502134: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00502135: mov ebx, esp */ r_ebx = r_esp;
    /* 00502137: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0050213a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050213b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050213c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050213f: mov edi, edx */ r_edi = r_edx;
    /* 00502141: mov esi, eax */ r_esi = r_eax;
    /* 00502143: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502148u); f_00482a10();
    /* 00502148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050214a: jne 0x502155 */ if (!fZ) goto L_00502155;
L_0050214c:; BB(0x0050214c);
    /* 0050214c: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050214f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502150: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00502151: mov esp, ebx */ r_esp = r_ebx;
    /* 00502153: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502154: ret  */ FN_RET(0x0050212c); r_esp += 4; return;
L_00502155:; BB(0x00502155);
    /* 00502155: mov edx, dword ptr [esi*4 + 0x9ba410] */ r_edx = R32((u32)(r_esi*4+0x9ba410u));
    /* 0050215c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050215e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502163: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x502168u); f_00835e68();
    /* 00502168: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050216d: mov edx, edi */ r_edx = r_edi;
    /* 0050216f: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x502174u); f_00835ee0();
    /* 00502174: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502179u); f_00482a10();
    /* 00502179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050217b: je 0x502286 */ if (fZ) goto L_00502286;
L_00502181:; BB(0x00502181);
    /* 00502181: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00502185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502186: call 0x82f548 */ r_esp -= 4; W32(r_esp, 0x50218bu); f_0082f548();
    /* 0050218b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050218c: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00502192: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00502198: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0050219c: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0050219e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005021a2: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 005021a4: fld dword ptr [0x91fc2c] */ FPUSH(R_F32((u32)(0x91fc2cu)));
    /* 005021aa: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005021ae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005021b0: fdivrp st(5) */ ST(5) = ST(0) / ST(5); FPOP();
    /* 005021b2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005021b4: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005021b6: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 005021ba: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005021bc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005021be: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 005021c0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 005021c2: mov eax, dword ptr [0x91fb00] */ r_eax = R32((u32)(0x91fb00u));
    /* 005021c7: mov esi, dword ptr [0x91fb04] */ r_esi = R32((u32)(0x91fb04u));
    /* 005021cd: mov edi, dword ptr [0x91fb08] */ r_edi = R32((u32)(0x91fb08u));
    /* 005021d3: mov ecx, dword ptr [0x91fb0c] */ r_ecx = R32((u32)(0x91fb0cu));
    /* 005021d9: mov edx, dword ptr [0x91fb10] */ r_edx = R32((u32)(0x91fb10u));
    /* 005021df: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005021e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005021e3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005021e6: mov eax, dword ptr [0x91fb14] */ r_eax = R32((u32)(0x91fb14u));
    /* 005021eb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005021ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005021f0: fchs  */ ST(0) = -ST(0);
    /* 005021f2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005021f6: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005021fa: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005021fe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00502202: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 00502207: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0050220b: mov eax, dword ptr [0x91fb18] */ r_eax = R32((u32)(0x91fb18u));
    /* 00502210: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00502214: mov eax, dword ptr [0x91fb1c] */ r_eax = R32((u32)(0x91fb1cu));
    /* 00502219: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0050221d: mov eax, dword ptr [0x91fb20] */ r_eax = R32((u32)(0x91fb20u));
    /* 00502222: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00502226: mov eax, dword ptr [0x91fb24] */ r_eax = R32((u32)(0x91fb24u));
    /* 0050222b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0050222f: mov eax, dword ptr [0x91fb28] */ r_eax = R32((u32)(0x91fb28u));
    /* 00502234: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00502238: mov eax, dword ptr [0x91fb2c] */ r_eax = R32((u32)(0x91fb2cu));
    /* 0050223d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00502241: mov eax, dword ptr [0x91fb30] */ r_eax = R32((u32)(0x91fb30u));
    /* 00502246: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0050224a: mov eax, dword ptr [0x91fb34] */ r_eax = R32((u32)(0x91fb34u));
    /* 0050224f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00502253: mov eax, dword ptr [0x91fb38] */ r_eax = R32((u32)(0x91fb38u));
    /* 00502258: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0050225c: mov eax, dword ptr [0x91fb3c] */ r_eax = R32((u32)(0x91fb3cu));
    /* 00502261: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00502265: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00502269: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0050226d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00502271: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00502274: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x502279u); f_00831308();
    /* 00502279: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0050227c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502281: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x502286u); f_00835cfc();
L_00502286:; BB(0x00502286);
    /* 00502286: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502288: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050228d: mov edx, 1 */ r_edx = 0x1u;
    /* 00502292: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x502297u); f_00835e1c();
    /* 00502297: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050229a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050229b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050229c: mov esp, ebx */ r_esp = r_ebx;
    /* 0050229e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050229f: ret  */ FN_RET(0x0050212c); r_esp += 4; return;
}

void f_00502134(void) /* sub_502134 */
{
    FN_ENTER(0x00502134);
    /* 00502134: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00502135: mov ebx, esp */ r_ebx = r_esp;
    /* 00502137: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0050213a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050213b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050213c: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050213f: mov edi, edx */ r_edi = r_edx;
    /* 00502141: mov esi, eax */ r_esi = r_eax;
    /* 00502143: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502148u); f_00482a10();
    /* 00502148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050214a: jne 0x502155 */ if (!fZ) goto L_00502155;
L_0050214c:; BB(0x0050214c);
    /* 0050214c: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050214f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502150: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00502151: mov esp, ebx */ r_esp = r_ebx;
    /* 00502153: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502154: ret  */ FN_RET(0x00502134); r_esp += 4; return;
L_00502155:; BB(0x00502155);
    /* 00502155: mov edx, dword ptr [esi*4 + 0x9ba410] */ r_edx = R32((u32)(r_esi*4+0x9ba410u));
    /* 0050215c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050215e: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502163: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x502168u); f_00835e68();
    /* 00502168: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050216d: mov edx, edi */ r_edx = r_edi;
    /* 0050216f: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x502174u); f_00835ee0();
    /* 00502174: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502179u); f_00482a10();
    /* 00502179: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050217b: je 0x502286 */ if (fZ) goto L_00502286;
L_00502181:; BB(0x00502181);
    /* 00502181: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00502185: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502186: call 0x82f548 */ r_esp -= 4; W32(r_esp, 0x50218bu); f_0082f548();
    /* 0050218b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050218c: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00502192: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00502198: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0050219c: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0050219e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 005021a2: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 005021a4: fld dword ptr [0x91fc2c] */ FPUSH(R_F32((u32)(0x91fc2cu)));
    /* 005021aa: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 005021ae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005021b0: fdivrp st(5) */ ST(5) = ST(0) / ST(5); FPOP();
    /* 005021b2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005021b4: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005021b6: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 005021ba: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005021bc: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005021be: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 005021c0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 005021c2: mov eax, dword ptr [0x91fb00] */ r_eax = R32((u32)(0x91fb00u));
    /* 005021c7: mov esi, dword ptr [0x91fb04] */ r_esi = R32((u32)(0x91fb04u));
    /* 005021cd: mov edi, dword ptr [0x91fb08] */ r_edi = R32((u32)(0x91fb08u));
    /* 005021d3: mov ecx, dword ptr [0x91fb0c] */ r_ecx = R32((u32)(0x91fb0cu));
    /* 005021d9: mov edx, dword ptr [0x91fb10] */ r_edx = R32((u32)(0x91fb10u));
    /* 005021df: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005021e1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005021e3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005021e6: mov eax, dword ptr [0x91fb14] */ r_eax = R32((u32)(0x91fb14u));
    /* 005021eb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005021ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005021f0: fchs  */ ST(0) = -ST(0);
    /* 005021f2: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005021f6: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 005021fa: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005021fe: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00502202: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 00502207: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0050220b: mov eax, dword ptr [0x91fb18] */ r_eax = R32((u32)(0x91fb18u));
    /* 00502210: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00502214: mov eax, dword ptr [0x91fb1c] */ r_eax = R32((u32)(0x91fb1cu));
    /* 00502219: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0050221d: mov eax, dword ptr [0x91fb20] */ r_eax = R32((u32)(0x91fb20u));
    /* 00502222: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00502226: mov eax, dword ptr [0x91fb24] */ r_eax = R32((u32)(0x91fb24u));
    /* 0050222b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0050222f: mov eax, dword ptr [0x91fb28] */ r_eax = R32((u32)(0x91fb28u));
    /* 00502234: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00502238: mov eax, dword ptr [0x91fb2c] */ r_eax = R32((u32)(0x91fb2cu));
    /* 0050223d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 00502241: mov eax, dword ptr [0x91fb30] */ r_eax = R32((u32)(0x91fb30u));
    /* 00502246: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0050224a: mov eax, dword ptr [0x91fb34] */ r_eax = R32((u32)(0x91fb34u));
    /* 0050224f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 00502253: mov eax, dword ptr [0x91fb38] */ r_eax = R32((u32)(0x91fb38u));
    /* 00502258: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0050225c: mov eax, dword ptr [0x91fb3c] */ r_eax = R32((u32)(0x91fb3cu));
    /* 00502261: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00502265: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00502269: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0050226d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00502271: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00502274: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x502279u); f_00831308();
    /* 00502279: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0050227c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502281: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x502286u); f_00835cfc();
L_00502286:; BB(0x00502286);
    /* 00502286: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502288: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050228d: mov edx, 1 */ r_edx = 0x1u;
    /* 00502292: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x502297u); f_00835e1c();
    /* 00502297: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050229a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050229b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050229c: mov esp, ebx */ r_esp = r_ebx;
    /* 0050229e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050229f: ret  */ FN_RET(0x00502134); r_esp += 4; return;
}

void f_005022a0(void) /* sub_5022A0 */
{
    FN_ENTER(0x005022a0);
    /* 005022a0: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x5022a5u); f_00482a10();
    /* 005022a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005022a7: jne 0x5022aa */ if (!fZ) goto L_005022aa;
L_005022a9:; BB(0x005022a9);
    /* 005022a9: ret  */ FN_RET(0x005022a0); r_esp += 4; return;
L_005022aa:; BB(0x005022aa);
    /* 005022aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005022ac: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005022b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005022b3: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x5022b8u); f_00835e68();
    /* 005022b8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005022bd: call 0x835f44 */ r_esp -= 4; W32(r_esp, 0x5022c2u); f_00835f44();
    /* 005022c2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005022c7: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x5022ccu); f_00835de8();
    /* 005022cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005022ce: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005022d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005022d5: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x5022dau); f_00835e1c();
    /* 005022da: ret  */ FN_RET(0x005022a0); r_esp += 4; return;
}

void f_005022dc(void) /* sub_5022DC */
{
    FN_ENTER(0x005022dc);
    /* 005022dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005022dd: mov ebx, esp */ r_ebx = r_esp;
    /* 005022df: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 005022e2: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005022e5: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x5022eau); f_00482a10();
    /* 005022ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005022ec: jne 0x5022f2 */ if (!fZ) goto L_005022f2;
L_005022ee:; BB(0x005022ee);
    /* 005022ee: mov esp, ebx */ r_esp = r_ebx;
    /* 005022f0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005022f1: ret  */ FN_RET(0x005022dc); r_esp += 4; return;
L_005022f2:; BB(0x005022f2);
    /* 005022f2: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 005022f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005022f7: call 0x82f548 */ r_esp -= 4; W32(r_esp, 0x5022fcu); f_0082f548();
    /* 005022fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005022fd: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00502303: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00502309: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0050230d: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0050230f: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00502313: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00502315: fld dword ptr [0x91fc28] */ FPUSH(R_F32((u32)(0x91fc28u)));
    /* 0050231b: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0050231f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00502321: fdivrp st(5) */ ST(5) = ST(0) / ST(5); FPOP();
    /* 00502323: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00502325: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00502327: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0050232b: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0050232d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050232f: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 00502331: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00502333: mov eax, dword ptr [0x91fb40] */ r_eax = R32((u32)(0x91fb40u));
    /* 00502338: mov ecx, dword ptr [0x91fb44] */ r_ecx = R32((u32)(0x91fb44u));
    /* 0050233e: mov edx, dword ptr [0x91fb48] */ r_edx = R32((u32)(0x91fb48u));
    /* 00502344: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00502346: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00502348: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050234a: fchs  */ ST(0) = -ST(0);
    /* 0050234c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0050234f: mov eax, dword ptr [0x91fb4c] */ r_eax = R32((u32)(0x91fb4cu));
    /* 00502354: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00502356: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00502359: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0050235d: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00502361: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00502365: mov eax, dword ptr [0x91fb50] */ r_eax = R32((u32)(0x91fb50u));
    /* 0050236a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050236e: mov eax, dword ptr [0x91fb54] */ r_eax = R32((u32)(0x91fb54u));
    /* 00502373: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00502377: mov eax, dword ptr [0x91fb58] */ r_eax = R32((u32)(0x91fb58u));
    /* 0050237c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00502380: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 00502385: mov eax, dword ptr [0x91fb5c] */ r_eax = R32((u32)(0x91fb5cu));
    /* 0050238a: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0050238e: mov eax, dword ptr [0x91fb60] */ r_eax = R32((u32)(0x91fb60u));
    /* 00502393: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00502397: mov eax, dword ptr [0x91fb64] */ r_eax = R32((u32)(0x91fb64u));
    /* 0050239c: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005023a0: mov eax, dword ptr [0x91fb68] */ r_eax = R32((u32)(0x91fb68u));
    /* 005023a5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005023a9: mov eax, dword ptr [0x91fb6c] */ r_eax = R32((u32)(0x91fb6cu));
    /* 005023ae: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005023b2: mov eax, dword ptr [0x91fb70] */ r_eax = R32((u32)(0x91fb70u));
    /* 005023b7: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005023bb: mov eax, dword ptr [0x91fb74] */ r_eax = R32((u32)(0x91fb74u));
    /* 005023c0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005023c4: mov eax, dword ptr [0x91fb78] */ r_eax = R32((u32)(0x91fb78u));
    /* 005023c9: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005023cd: mov eax, dword ptr [0x91fb7c] */ r_eax = R32((u32)(0x91fb7cu));
    /* 005023d2: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005023d6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005023d8: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005023dc: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005023e0: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005023e4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005023e7: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x5023ecu); f_00831308();
    /* 005023ec: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005023ef: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005023f4: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x5023f9u); f_00835cfc();
    /* 005023f9: mov esp, ebx */ r_esp = r_ebx;
    /* 005023fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005023fc: ret  */ FN_RET(0x005022dc); r_esp += 4; return;
}

void f_00502400(void) /* sub_502400 */
{
    FN_ENTER(0x00502400);
    /* 00502400: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00502402: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x502407u); f_00835de8();
    /* 00502407: ret  */ FN_RET(0x00502400); r_esp += 4; return;
}

void f_00502408(void) /* sub_502408 */
{
    FN_ENTER(0x00502408);
    /* 00502408: mov ecx, dword ptr [0xa72ae0] */ r_ecx = R32((u32)(0xa72ae0u));
    /* 0050240e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502410: je 0x50241d */ if (fZ) goto L_0050241d;
L_00502412:; BB(0x00502412);
    /* 00502412: call 0x501700 */ r_esp -= 4; W32(r_esp, 0x502417u); f_00501700();
    /* 00502417: mov ecx, dword ptr [0xa72ae0] */ r_ecx = R32((u32)(0xa72ae0u));
L_0050241d:; BB(0x0050241d);
    /* 0050241d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050241f: je 0x502432 */ if (fZ) goto L_00502432;
L_00502421:; BB(0x00502421);
    /* 00502421: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502422: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x502427u); f_00857e98();
    /* 00502427: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502428: mov dword ptr [0xa72ae0], 0 */ W32((u32)(0xa72ae0u), 0x0u);
L_00502432:; BB(0x00502432);
    /* 00502432: ret  */ FN_RET(0x00502408); r_esp += 4; return;
}

void f_00502434(void) /* sub_502434 */
{
    FN_ENTER(0x00502434);
    /* 00502434: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00502435: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00502436: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00502437: mov esi, ecx */ r_esi = r_ecx;
    /* 00502439: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 0050243d: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00502441: mov ecx, esi */ r_ecx = r_esi;
    /* 00502443: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502447: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50244cu); f_008193cc();
    /* 0050244c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00502450: mov dword ptr [esi], 0xafe8d8 */ W32((u32)(r_esi), 0xafe8d8u);
    /* 00502456: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00502459: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0050245b: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050245e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00502461: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00502464: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 00502467: mov dword ptr [esi + 0x28], ebx */ W32((u32)(r_esi+0x28u), r_ebx);
    /* 0050246a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0050246d: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00502470: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 00502473: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00502476: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 00502479: mov dword ptr [esi + 0x34], ebp */ W32((u32)(r_esi+0x34u), r_ebp);
    /* 0050247c: mov eax, esi */ r_eax = r_esi;
    /* 0050247e: mov byte ptr [esi + 0x1c], 0 */ W8((u32)(r_esi+0x1cu), 0x0u);
    /* 00502482: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502483: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00502484: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502485: ret 0x14 */ FN_RET(0x00502434); r_esp += 24; return;
}

void f_00502488(void) /* sub_502488 */
{
    FN_ENTER(0x00502488);
    /* 00502488: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0050248c: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502491: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 00502494: ret  */ FN_RET(0x00502488); r_esp += 4; return;
}

void f_00502498(void) /* sub_502498 */
{
    FN_ENTER(0x00502498);
    /* 00502498: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 0050249c: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005024a1: mov byte ptr [ecx + 0x1c], al */ W8((u32)(r_ecx+0x1cu), (u8)r_eax);
    /* 005024a4: ret  */ FN_RET(0x00502498); r_esp += 4; return;
}

void f_005024a8(void) /* sub_5024A8 */
{
    FN_ENTER(0x005024a8);
    /* 005024a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005024a9: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005024ac: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005024ae: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x5024b3u); f_00482a10();
    /* 005024b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005024b5: je 0x5025ff */ if (fZ) goto L_005025ff;
L_005024bb:; BB(0x005024bb);
    /* 005024bb: movzx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)R8((u32)(r_ebp+0x1cu));
    /* 005024bf: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005024c1: jne 0x5025ff */ if (!fZ) goto L_005025ff;
L_005024c7:; BB(0x005024c7);
    /* 005024c7: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x5024ccu); f_004d28a4();
    /* 005024cc: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 005024d1: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 005024d7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005024db: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005024df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005024e1: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005024e4: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005024e8: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005024ec: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005024f0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005024f3: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x5024f8u); f_0082f308();
    /* 005024f8: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005024fd: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 00502503: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0050250b: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00502513: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 0050251b: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502520: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502525: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 0050252a: call 0x82ebc8 */ r_esp -= 4; W32(r_esp, 0x50252fu); f_0082ebc8();
    /* 0050252f: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 00502533: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502534: lea ecx, [ebp + 0x20] */ r_ecx = (u32)(r_ebp+0x20u);
    /* 00502537: lea edx, [ebp + 0x2c] */ r_edx = (u32)(r_ebp+0x2cu);
    /* 0050253a: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x50253fu); f_0082f108();
    /* 0050253f: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00502544: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502546: je 0x502592 */ if (fZ) goto L_00502592;
L_00502548:; BB(0x00502548);
    /* 00502548: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 0050254c: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00502550: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00502554: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 00502557: fsub dword ptr [ebp + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x20u));
    /* 0050255a: fld dword ptr [ebp + 0x30] */ FPUSH(R_F32((u32)(r_ebp+0x30u)));
    /* 0050255d: fsub dword ptr [ebp + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x24u));
    /* 00502560: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 00502563: fsub dword ptr [ebp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x28u));
    /* 00502566: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00502568: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0050256c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00502570: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00502574: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502575: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00502576: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502577: call 0x4d6448 */ r_esp -= 4; W32(r_esp, 0x50257cu); f_004d6448();
    /* 0050257c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050257f: push dword ptr [esp + 0x30] */ { u32 v = R32((u32)(r_esp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502583: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502587: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 0050258d: call 0x4d44cc */ r_esp -= 4; W32(r_esp, 0x502592u); f_004d44cc();
L_00502592:; BB(0x00502592);
    /* 00502592: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00502599: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050259e: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 005025a3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 005025a8: call 0x818940 */ r_esp -= 4; W32(r_esp, 0x5025adu); f_00818940();
    /* 005025ad: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 005025b4: mov ecx, dword ptr [0xa72ae0] */ r_ecx = R32((u32)(0xa72ae0u));
    /* 005025ba: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005025bf: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 005025c4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005025c6: je 0x5025e2 */ if (fZ) goto L_005025e2;
L_005025c8:; BB(0x005025c8);
    /* 005025c8: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005025cb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5025d0u); f_00829cc8();
    /* 005025d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005025d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005025d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005025d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005025d6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005025d8: call 0x82aa38 */ r_esp -= 4; W32(r_esp, 0x5025ddu); f_0082aa38();
    /* 005025dd: call 0x83ae98 */ r_esp -= 4; W32(r_esp, 0x5025e2u); f_0083ae98();
L_005025e2:; BB(0x005025e2);
    /* 005025e2: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x5025e7u); f_004d2968();
    /* 005025e7: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 005025ed: call 0x4d3fb0 */ r_esp -= 4; W32(r_esp, 0x5025f2u); f_004d3fb0();
    /* 005025f2: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 005025f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005025fa: call 0x4d4164 */ r_esp -= 4; W32(r_esp, 0x5025ffu); f_004d4164();
L_005025ff:; BB(0x005025ff);
    /* 005025ff: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502602: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00502603: ret  */ FN_RET(0x005024a8); r_esp += 4; return;
}

void f_00502604(void) /* sub_502604 */
{
    FN_ENTER(0x00502604);
    /* 00502604: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00502608: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0050260a: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 0050260d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00502610: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00502613: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00502616: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00502619: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050261d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0050261f: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 00502622: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00502625: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00502628: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0050262b: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 0050262e: ret 8 */ FN_RET(0x00502604); r_esp += 12; return;
}

void f_00502634(void) /* sub_502634 */
{
    FN_ENTER(0x00502634);
    /* 00502634: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502639u); f_00482a10();
    /* 00502639: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050263b: je 0x502661 */ if (fZ) goto L_00502661;
L_0050263d:; BB(0x0050263d);
    /* 0050263d: mov ecx, dword ptr [0xa72ae0] */ r_ecx = R32((u32)(0xa72ae0u));
    /* 00502643: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502645: je 0x502661 */ if (fZ) goto L_00502661;
L_00502647:; BB(0x00502647);
    /* 00502647: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050264a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x50264fu); f_00829cc8();
    /* 0050264f: call 0x501df4 */ r_esp -= 4; W32(r_esp, 0x502654u); f_00501df4();
    /* 00502654: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00502656: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502658: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050265a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050265c: call 0x618a44 */ r_esp -= 4; W32(r_esp, 0x502661u); f_00618a44();
L_00502661:; BB(0x00502661);
    /* 00502661: ret  */ FN_RET(0x00502634); r_esp += 4; return;
}

void f_00502664(void) /* sub_502664 */
{
    FN_ENTER(0x00502664);
    /* 00502664: mov eax, dword ptr [0x9ba400] */ r_eax = R32((u32)(0x9ba400u));
    /* 00502669: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0050266c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050266e: je 0x50267a */ if (fZ) goto L_0050267a;
L_00502670:; BB(0x00502670);
    /* 00502670: mov ecx, 0x9ba400 */ r_ecx = 0x9ba400u;
    /* 00502675: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x50267au); f_00829de0();
L_0050267a:; BB(0x0050267a);
    /* 0050267a: ret  */ FN_RET(0x00502664); r_esp += 4; return;
}

void f_0050267c(void) /* sub_50267C */
{
    FN_ENTER(0x0050267c);
    /* 0050267c: call 0x482a18 */ r_esp -= 4; W32(r_esp, 0x502681u); f_00482a18();
    /* 00502681: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00502684: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502686: mov eax, 0 */ r_eax = 0x0u;
    /* 0050268b: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0050268e: ret  */ FN_RET(0x0050267c); r_esp += 4; return;
}

void f_00502690(void) /* sub_502690 */
{
    FN_ENTER(0x00502690);
    /* 00502690: mov dword ptr [0xa72aa4], 0 */ W32((u32)(0xa72aa4u), 0x0u);
    /* 0050269a: ret  */ FN_RET(0x00502690); r_esp += 4; return;
}

void f_0050269c(void) /* sub_50269C */
{
    FN_ENTER(0x0050269c);
    /* 0050269c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050269d: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005026a0: call 0x482a18 */ r_esp -= 4; W32(r_esp, 0x5026a5u); f_00482a18();
    /* 005026a5: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005026a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005026aa: je 0x5029f7 */ if (fZ) goto L_005029f7;
L_005026b0:; BB(0x005026b0);
    /* 005026b0: mov dword ptr [0xa72aa4], 1 */ W32((u32)(0xa72aa4u), 0x1u);
    /* 005026ba: mov ebx, 1 */ r_ebx = 0x1u;
    /* 005026bf: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x5026c4u); f_007a61a4();
    /* 005026c4: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005026c7: je 0x502a30 */ if (fZ) goto L_00502a30;
L_005026cd:; BB(0x005026cd);
    /* 005026cd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005026cf: jne 0x5026d6 */ if (!fZ) goto L_005026d6;
L_005026d1:; BB(0x005026d1);
    /* 005026d1: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005026d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005026d5: ret  */ FN_RET(0x0050269c); r_esp += 4; return;
L_005026d6:; BB(0x005026d6);
    /* 005026d6: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x5026dbu); f_004d28a4();
    /* 005026db: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005026e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005026e2: je 0x5029f7 */ if (fZ) goto L_005029f7;
L_005026e8:; BB(0x005026e8);
    /* 005026e8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005026ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5026f3u); f_0068d5a8();
    /* 005026f3: mov ebx, eax */ r_ebx = r_eax;
    /* 005026f5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005026f8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005026fa: je 0x5029f7 */ if (fZ) goto L_005029f7;
L_00502700:; BB(0x00502700);
    /* 00502700: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 00502706: fld dword ptr [edx + 0x184] */ FPUSH(R_F32((u32)(r_edx+0x184u)));
    /* 0050270c: fsub dword ptr [edx + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x178u));
    /* 00502712: fld dword ptr [edx + 0x188] */ FPUSH(R_F32((u32)(r_edx+0x188u)));
    /* 00502718: fsub dword ptr [edx + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x17cu));
    /* 0050271e: fld dword ptr [edx + 0x18c] */ FPUSH(R_F32((u32)(r_edx+0x18cu)));
    /* 00502724: fsub dword ptr [edx + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x180u));
    /* 0050272a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050272c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050272f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00502733: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00502737: mov ecx, 0x9ba400 */ r_ecx = 0x9ba400u;
    /* 0050273c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x502741u); f_00829cc8();
    /* 00502741: call 0x835e40 */ r_esp -= 4; W32(r_esp, 0x502746u); f_00835e40();
    /* 00502746: fild dword ptr [0x9ba40c] */ FPUSH((long double)(i32)R32((u32)(0x9ba40cu)));
    /* 0050274c: fild dword ptr [0x9ba408] */ FPUSH((long double)(i32)R32((u32)(0x9ba408u)));
    /* 00502752: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00502754: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00502758: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0050275c: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00502764: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00502768: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00502770: call 0x82f2e4 */ r_esp -= 4; W32(r_esp, 0x502775u); f_0082f2e4();
    /* 00502775: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 00502779: mov edx, 1 */ r_edx = 0x1u;
    /* 0050277e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00502782: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00502786: mov edx, dword ptr [0x9ba40c] */ r_edx = R32((u32)(0x9ba40cu));
    /* 0050278c: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050278f: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00502793: mov edx, dword ptr [0x9ba408] */ r_edx = R32((u32)(0x9ba408u));
    /* 00502799: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050279c: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 005027a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005027a2: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005027a6: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005027aa: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x5027afu); f_0082f308();
    /* 005027af: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005027b4: call 0x83aebc */ r_esp -= 4; W32(r_esp, 0x5027b9u); f_0083aebc();
    /* 005027b9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005027bc: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5027c1u); f_0082df08();
    /* 005027c1: fcomp dword ptr [0x91fc08] */ fx_compare(ST(0), R_F32((u32)(0x91fc08u))); FPOP();
    /* 005027c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005027c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005027ca: je 0x502a0c */ if (fZ) goto L_00502a0c;
L_005027d0:; BB(0x005027d0);
    /* 005027d0: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 005027d6: fld dword ptr [0x9ba3e8] */ FPUSH(R_F32((u32)(0x9ba3e8u)));
    /* 005027dc: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005027df: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005027e1: fadd dword ptr [edx + 0x178] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x178u));
    /* 005027e7: fld dword ptr [0x91fc04] */ FPUSH(R_F32((u32)(0x91fc04u)));
    /* 005027ed: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 005027f0: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005027f4: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005027f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005027f8: fadd dword ptr [edx + 0x180] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x180u));
    /* 005027fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00502800: fstp dword ptr [0xa72a80] */ W_F32((u32)(0xa72a80u), ST(0)); FPOP();
    /* 00502806: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00502808: fstp dword ptr [0xa72a84] */ W_F32((u32)(0xa72a84u), ST(0)); FPOP();
    /* 0050280e: fstp dword ptr [0xa72a88] */ W_F32((u32)(0xa72a88u), ST(0)); FPOP();
    /* 00502814: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00502816: push 0xa72a80 */ { u32 v = 0xa72a80u; r_esp -= 4; W32(r_esp, v); }
    /* 0050281b: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x502820u); f_00780630();
    /* 00502820: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00502823: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502825: je 0x5029fc */ if (fZ) goto L_005029fc;
L_0050282b:; BB(0x0050282b);
    /* 0050282b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0050282e: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00502831: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00502834: mov dword ptr [0xa72a84], edx */ W32((u32)(0xa72a84u), r_edx);
L_0050283a:; BB(0x0050283a);
    /* 0050283a: mov eax, dword ptr [0xa72a80] */ r_eax = R32((u32)(0xa72a80u));
    /* 0050283f: mov edx, dword ptr [0xa72a88] */ r_edx = R32((u32)(0xa72a88u));
    /* 00502845: fld dword ptr [0x9ba3e4] */ FPUSH(R_F32((u32)(0x9ba3e4u)));
    /* 0050284b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050284d: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 00502851: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00502853: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00502857: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0050285b: mov dword ptr [0xa72a8c], 1 */ W32((u32)(0xa72a8cu), 0x1u);
    /* 00502865: mov ecx, 0xa72980 */ r_ecx = 0xa72980u;
    /* 0050286a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 0050286e: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00502872: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00502876: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x50287bu); f_00831650();
    /* 0050287b: push 0x46a41000 */ { u32 v = 0x46a41000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502880: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502885: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 0050288a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050288f: mov ecx, dword ptr [eax + 0x19c] */ r_ecx = R32((u32)(r_eax+0x19cu));
    /* 00502895: call 0x82eea0 */ r_esp -= 4; W32(r_esp, 0x50289au); f_0082eea0();
    /* 0050289a: mov eax, dword ptr [0xacc040] */ r_eax = R32((u32)(0xacc040u));
    /* 0050289f: mov ebx, dword ptr [0xacc044] */ r_ebx = R32((u32)(0xacc044u));
    /* 005028a5: mov ecx, dword ptr [0xacc048] */ r_ecx = R32((u32)(0xacc048u));
    /* 005028ab: mov edx, dword ptr [0xacc04c] */ r_edx = R32((u32)(0xacc04cu));
    /* 005028b1: mov dword ptr [0xa729c0], eax */ W32((u32)(0xa729c0u), r_eax);
    /* 005028b6: mov eax, dword ptr [0xacc050] */ r_eax = R32((u32)(0xacc050u));
    /* 005028bb: mov dword ptr [0xa729c4], ebx */ W32((u32)(0xa729c4u), r_ebx);
    /* 005028c1: mov dword ptr [0xa729c8], ecx */ W32((u32)(0xa729c8u), r_ecx);
    /* 005028c7: mov dword ptr [0xa729cc], edx */ W32((u32)(0xa729ccu), r_edx);
    /* 005028cd: mov dword ptr [0xa729d0], eax */ W32((u32)(0xa729d0u), r_eax);
    /* 005028d2: mov eax, dword ptr [0xacc054] */ r_eax = R32((u32)(0xacc054u));
    /* 005028d7: mov dword ptr [0xa729d4], eax */ W32((u32)(0xa729d4u), r_eax);
    /* 005028dc: mov eax, dword ptr [0xacc058] */ r_eax = R32((u32)(0xacc058u));
    /* 005028e1: mov dword ptr [0xa729d8], eax */ W32((u32)(0xa729d8u), r_eax);
    /* 005028e6: mov eax, dword ptr [0xacc05c] */ r_eax = R32((u32)(0xacc05cu));
    /* 005028eb: mov dword ptr [0xa729dc], eax */ W32((u32)(0xa729dcu), r_eax);
    /* 005028f0: mov eax, dword ptr [0xacc060] */ r_eax = R32((u32)(0xacc060u));
    /* 005028f5: mov dword ptr [0xa729e0], eax */ W32((u32)(0xa729e0u), r_eax);
    /* 005028fa: mov eax, dword ptr [0xacc064] */ r_eax = R32((u32)(0xacc064u));
    /* 005028ff: mov dword ptr [0xa729e4], eax */ W32((u32)(0xa729e4u), r_eax);
    /* 00502904: mov eax, dword ptr [0xacc068] */ r_eax = R32((u32)(0xacc068u));
    /* 00502909: mov dword ptr [0xa729e8], eax */ W32((u32)(0xa729e8u), r_eax);
    /* 0050290e: mov eax, dword ptr [0xacc06c] */ r_eax = R32((u32)(0xacc06cu));
    /* 00502913: mov dword ptr [0xa729ec], eax */ W32((u32)(0xa729ecu), r_eax);
    /* 00502918: mov eax, dword ptr [0xacc070] */ r_eax = R32((u32)(0xacc070u));
    /* 0050291d: mov dword ptr [0xa729f0], eax */ W32((u32)(0xa729f0u), r_eax);
    /* 00502922: mov eax, dword ptr [0xacc074] */ r_eax = R32((u32)(0xacc074u));
    /* 00502927: mov dword ptr [0xa729f4], eax */ W32((u32)(0xa729f4u), r_eax);
    /* 0050292c: mov eax, dword ptr [0xacc078] */ r_eax = R32((u32)(0xacc078u));
    /* 00502931: mov dword ptr [0xa729f8], eax */ W32((u32)(0xa729f8u), r_eax);
    /* 00502936: mov eax, dword ptr [0xacc07c] */ r_eax = R32((u32)(0xacc07cu));
    /* 0050293b: mov dword ptr [0xa729fc], eax */ W32((u32)(0xa729fcu), r_eax);
    /* 00502940: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00502943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502944: lea ecx, [esp + 0x44] */ r_ecx = (u32)(r_esp+0x44u);
    /* 00502948: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 0050294c: call 0x82f108 */ r_esp -= 4; W32(r_esp, 0x502951u); f_0082f108();
    /* 00502951: mov ecx, 0xa72a00 */ r_ecx = 0xa72a00u;
    /* 00502956: call 0x82f274 */ r_esp -= 4; W32(r_esp, 0x50295bu); f_0082f274();
    /* 0050295b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0050295f: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 00502963: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00502967: fsub dword ptr [esp + 0x44] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x44u));
    /* 0050296b: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 0050296f: fsub dword ptr [esp + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x48u));
    /* 00502973: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00502975: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00502979: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0050297d: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00502981: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 00502985: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 00502989: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 0050298d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050298e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050298f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00502990: call 0x4d6448 */ r_esp -= 4; W32(r_esp, 0x502995u); f_004d6448();
    /* 00502995: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00502998: push dword ptr [esp + 0x58] */ { u32 v = R32((u32)(r_esp+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050299c: push dword ptr [esp + 0x60] */ { u32 v = R32((u32)(r_esp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005029a0: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 005029a6: call 0x4d44cc */ r_esp -= 4; W32(r_esp, 0x5029abu); f_004d44cc();
    /* 005029ab: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 005029b2: or eax, 0xffffff04 */ {  u32 a = r_eax; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005029b7: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 005029bc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005029be: call 0x83af28 */ r_esp -= 4; W32(r_esp, 0x5029c3u); f_0083af28();
    /* 005029c3: mov dword ptr [esp + 0x60], 0x3f266666 */ W32((u32)(r_esp+0x60u), 0x3f266666u);
    /* 005029cb: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 005029cf: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 005029d7: mov dword ptr [esp + 0x68], 0 */ W32((u32)(r_esp+0x68u), 0x0u);
    /* 005029df: mov dword ptr [esp + 0x6c], 0 */ W32((u32)(r_esp+0x6cu), 0x0u);
    /* 005029e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005029e8: call 0x82e720 */ r_esp -= 4; W32(r_esp, 0x5029edu); f_0082e720();
    /* 005029ed: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005029ee: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 005029f2: call 0x834bcc */ r_esp -= 4; W32(r_esp, 0x5029f7u); f_00834bcc();
L_005029f7:; BB(0x005029f7);
    /* 005029f7: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005029fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005029fb: ret  */ FN_RET(0x0050269c); r_esp += 4; return;
L_005029fc:; BB(0x005029fc);
    /* 005029fc: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 005029ff: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00502a02: mov dword ptr [0xa72a84], eax */ W32((u32)(0xa72a84u), r_eax);
    /* 00502a07: jmp 0x50283a */ goto L_0050283a;
L_00502a0c:; BB(0x00502a0c);
    /* 00502a0c: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00502a0f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x502a14u); f_0082dcbc();
    /* 00502a14: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 00502a17: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00502a1a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00502a22: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x502a27u); f_0082ddd8();
    /* 00502a27: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00502a2b: jmp 0x5027d0 */ goto L_005027d0;
L_00502a30:; BB(0x00502a30);
    /* 00502a30: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 00502a34: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00502a36: mov esi, eax */ r_esi = r_eax;
L_00502a38:; BB(0x00502a38);
    /* 00502a38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00502a39: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x502a3eu); f_0068d5a8();
    /* 00502a3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502a3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502a41: je 0x502a5c */ if (fZ) goto L_00502a5c;
L_00502a43:; BB(0x00502a43);
    /* 00502a43: mov edx, dword ptr [eax + 0xdf0] */ r_edx = R32((u32)(r_eax+0xdf0u));
    /* 00502a49: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502a4b: jne 0x502a54 */ if (!fZ) goto L_00502a54;
L_00502a4d:; BB(0x00502a4d);
    /* 00502a4d: mov edx, 1 */ r_edx = 0x1u;
    /* 00502a52: jmp 0x502a56 */ goto L_00502a56;
L_00502a54:; BB(0x00502a54);
    /* 00502a54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00502a56:; BB(0x00502a56);
    /* 00502a56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502a58: jne 0x502a5c */ if (!fZ) goto L_00502a5c;
L_00502a5a:; BB(0x00502a5a);
    /* 00502a5a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00502a5c:; BB(0x00502a5c);
    /* 00502a5c: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00502a5f: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00502a62: jl 0x502a38 */ if ((fS!=fO)) goto L_00502a38;
L_00502a64:; BB(0x00502a64);
    /* 00502a64: mov esi, dword ptr [esp + 0x70] */ r_esi = R32((u32)(r_esp+0x70u));
    /* 00502a68: jmp 0x5026cd */ goto L_005026cd;
}

void f_00502a70(void) /* sub_502A70 */
{
    FN_ENTER(0x00502a70);
    /* 00502a70: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502a73: mov eax, dword ptr [0xa72a8c] */ r_eax = R32((u32)(0xa72a8cu));
    /* 00502a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502a7a: je 0x502b0a */ if (fZ) goto L_00502b0a;
L_00502a80:; BB(0x00502a80);
    /* 00502a80: mov dword ptr [0xa72a8c], 0 */ W32((u32)(0xa72a8cu), 0x0u);
    /* 00502a8a: call 0x834c1c */ r_esp -= 4; W32(r_esp, 0x502a8fu); f_00834c1c();
    /* 00502a8f: call 0x82e754 */ r_esp -= 4; W32(r_esp, 0x502a94u); f_0082e754();
    /* 00502a94: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00502a9b: and eax, 0xfb */ {  u32 a = r_eax; u32 b = 0xfbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00502aa0: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00502aa5: call 0x835e60 */ r_esp -= 4; W32(r_esp, 0x502aaau); f_00835e60();
    /* 00502aaa: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 00502ab0: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00502ab6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00502ab8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00502abc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00502ac0: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00502ac7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00502aca: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00502ad2: call 0x82f2e4 */ r_esp -= 4; W32(r_esp, 0x502ad7u); f_0082f2e4();
    /* 00502ad7: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x502adcu); f_004d2968();
    /* 00502adc: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00502ae2: call 0x4d3fb0 */ r_esp -= 4; W32(r_esp, 0x502ae7u); f_004d3fb0();
    /* 00502ae7: mov ecx, dword ptr [0xa48a54] */ r_ecx = R32((u32)(0xa48a54u));
    /* 00502aed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00502aef: call 0x4d4164 */ r_esp -= 4; W32(r_esp, 0x502af4u); f_004d4164();
    /* 00502af4: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00502af9: call 0x83af28 */ r_esp -= 4; W32(r_esp, 0x502afeu); f_0083af28();
    /* 00502afe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00502b00: mov edx, 0xa72980 */ r_edx = 0xa72980u;
    /* 00502b05: call 0x83b410 */ r_esp -= 4; W32(r_esp, 0x502b0au); f_0083b410();
L_00502b0a:; BB(0x00502b0a);
    /* 00502b0a: call 0x83ae98 */ r_esp -= 4; W32(r_esp, 0x502b0fu); f_0083ae98();
    /* 00502b0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502b12: ret  */ FN_RET(0x00502a70); r_esp += 4; return;
}

void f_00502b14(void) /* sub_502B14 */
{
    FN_ENTER(0x00502b14);
    /* 00502b14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00502b15: mov ebx, esp */ r_ebx = r_esp;
    /* 00502b17: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00502b1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00502b1b: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502b21: call 0x482a18 */ r_esp -= 4; W32(r_esp, 0x502b26u); f_00482a18();
    /* 00502b26: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00502b29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502b2b: je 0x502be8 */ if (fZ) goto L_00502be8;
L_00502b31:; BB(0x00502b31);
    /* 00502b31: mov eax, dword ptr [0xa72aa4] */ r_eax = R32((u32)(0xa72aa4u));
    /* 00502b36: mov esi, 1 */ r_esi = 0x1u;
    /* 00502b3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502b3d: je 0x502b51 */ if (fZ) goto L_00502b51;
L_00502b3f:; BB(0x00502b3f);
    /* 00502b3f: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x502b44u); f_007a61a4();
    /* 00502b44: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502b47: je 0x502bf3 */ if (fZ) goto L_00502bf3;
L_00502b4d:; BB(0x00502b4d);
    /* 00502b4d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502b4f: jne 0x502b5c */ if (!fZ) goto L_00502b5c;
L_00502b51:; BB(0x00502b51);
    /* 00502b51: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502b57: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502b58: mov esp, ebx */ r_esp = r_ebx;
    /* 00502b5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502b5b: ret  */ FN_RET(0x00502b14); r_esp += 4; return;
L_00502b5c:; BB(0x00502b5c);
    /* 00502b5c: mov dword ptr [0xa72a90], 1 */ W32((u32)(0xa72a90u), 0x1u);
    /* 00502b66: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00502b6a: call 0x83607c */ r_esp -= 4; W32(r_esp, 0x502b6fu); f_0083607c();
    /* 00502b6f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00502b73: mov edx, 0xa729c0 */ r_edx = 0xa729c0u;
    /* 00502b78: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x502b7du); f_00831308();
    /* 00502b7d: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 00502b81: call 0x82f204 */ r_esp -= 4; W32(r_esp, 0x502b86u); f_0082f204();
    /* 00502b86: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00502b8a: mov edx, 0xa72a00 */ r_edx = 0xa72a00u;
    /* 00502b8f: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x502b94u); f_00831308();
    /* 00502b94: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00502b98: lea edx, [esp + 0x50] */ r_edx = (u32)(r_esp+0x50u);
    /* 00502b9c: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x502ba1u); f_00831308();
    /* 00502ba1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00502ba3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502ba8: mov edx, 0x9ba400 */ r_edx = 0x9ba400u;
    /* 00502bad: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x502bb2u); f_00835e68();
    /* 00502bb2: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502bb7: mov edx, 2 */ r_edx = 0x2u;
    /* 00502bbc: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x502bc1u); f_00835ee0();
    /* 00502bc1: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00502bc5: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502bca: call 0x835d34 */ r_esp -= 4; W32(r_esp, 0x502bcfu); f_00835d34();
    /* 00502bcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502bd1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502bd6: mov edx, 1 */ r_edx = 0x1u;
    /* 00502bdb: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x502be0u); f_00835e1c();
    /* 00502be0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00502be2: call 0x506840 */ r_esp -= 4; W32(r_esp, 0x502be7u); f_00506840();
    /* 00502be7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00502be8:; BB(0x00502be8);
    /* 00502be8: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502bee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00502bef: mov esp, ebx */ r_esp = r_ebx;
    /* 00502bf1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502bf2: ret  */ FN_RET(0x00502b14); r_esp += 4; return;
L_00502bf3:; BB(0x00502bf3);
    /* 00502bf3: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00502bf6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00502bf8: mov edi, eax */ r_edi = r_eax;
L_00502bfa:; BB(0x00502bfa);
    /* 00502bfa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00502bfb: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x502c00u); f_0068d5a8();
    /* 00502c00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502c03: je 0x502c1e */ if (fZ) goto L_00502c1e;
L_00502c05:; BB(0x00502c05);
    /* 00502c05: mov edx, dword ptr [eax + 0xdf0] */ r_edx = R32((u32)(r_eax+0xdf0u));
    /* 00502c0b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502c0d: jne 0x502c16 */ if (!fZ) goto L_00502c16;
L_00502c0f:; BB(0x00502c0f);
    /* 00502c0f: mov edx, 1 */ r_edx = 0x1u;
    /* 00502c14: jmp 0x502c18 */ goto L_00502c18;
L_00502c16:; BB(0x00502c16);
    /* 00502c16: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00502c18:; BB(0x00502c18);
    /* 00502c18: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502c1a: jne 0x502c1e */ if (!fZ) goto L_00502c1e;
L_00502c1c:; BB(0x00502c1c);
    /* 00502c1c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00502c1e:; BB(0x00502c1e);
    /* 00502c1e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00502c21: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00502c24: jl 0x502bfa */ if ((fS!=fO)) goto L_00502bfa;
L_00502c26:; BB(0x00502c26);
    /* 00502c26: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00502c29: jmp 0x502b4d */ goto L_00502b4d;
}

void f_00502c30(void) /* sub_502C30 */
{
    FN_ENTER(0x00502c30);
    /* 00502c30: call 0x506860 */ r_esp -= 4; W32(r_esp, 0x502c35u); f_00506860();
    /* 00502c35: mov eax, dword ptr [0xa72a90] */ r_eax = R32((u32)(0xa72a90u));
    /* 00502c3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502c3c: je 0x502c74 */ if (fZ) goto L_00502c74;
L_00502c3e:; BB(0x00502c3e);
    /* 00502c3e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00502c40: mov dword ptr [0xa72a90], eax */ W32((u32)(0xa72a90u), r_eax);
    /* 00502c45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502c46: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502c4b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00502c4d: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x502c52u); f_00835e68();
    /* 00502c52: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502c57: call 0x835f44 */ r_esp -= 4; W32(r_esp, 0x502c5cu); f_00835f44();
    /* 00502c5c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502c61: call 0x835de8 */ r_esp -= 4; W32(r_esp, 0x502c66u); f_00835de8();
    /* 00502c66: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502c68: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502c6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00502c6f: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x502c74u); f_00835e1c();
L_00502c74:; BB(0x00502c74);
    /* 00502c74: ret  */ FN_RET(0x00502c30); r_esp += 4; return;
}

void f_00502c78(void) /* sub_502C78 */
{
    FN_ENTER(0x00502c78);
    /* 00502c78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00502c79: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00502c7d: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00502c82: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00502c85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502c87: je 0x502cb7 */ if (fZ) goto L_00502cb7;
L_00502c89:; BB(0x00502c89);
    /* 00502c89: push 0xa72a80 */ { u32 v = 0xa72a80u; r_esp -= 4; W32(r_esp, v); }
    /* 00502c8e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00502c92: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x502c97u); f_007a9180();
    /* 00502c97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00502c9a: fld dword ptr [0xa72a94] */ FPUSH(R_F32((u32)(0xa72a94u)));
    /* 00502ca0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00502ca2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00502ca5: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00502ca7: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00502ca9: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00502cab: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00502cad: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00502cae: jb 0x502cb7 */ if (fC) goto L_00502cb7;
L_00502cb0:; BB(0x00502cb0);
    /* 00502cb0: mov eax, 1 */ r_eax = 0x1u;
    /* 00502cb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502cb6: ret  */ FN_RET(0x00502c78); r_esp += 4; return;
L_00502cb7:; BB(0x00502cb7);
    /* 00502cb7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502cb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502cba: ret  */ FN_RET(0x00502c78); r_esp += 4; return;
}

void f_00502cbc(void) /* sub_502CBC */
{
    FN_ENTER(0x00502cbc);
    /* 00502cbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00502cbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00502cbf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502cc3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00502cc5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x502ccau); f_008193cc();
    /* 00502cca: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00502cce: mov dword ptr [ebx], 0xafe8c8 */ W32((u32)(r_ebx), 0xafe8c8u);
    /* 00502cd4: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 00502cd7: mov eax, ebx */ r_eax = r_ebx;
    /* 00502cd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502cda: ret 8 */ FN_RET(0x00502cbc); r_esp += 12; return;
}

void f_00502ce0(void) /* sub_502CE0 */
{
    FN_ENTER(0x00502ce0);
    /* 00502ce0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00502ce1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502ce4: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00502ceb: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00502ced: jne 0x502d20 */ if (!fZ) goto L_00502d20;
L_00502cef:; BB(0x00502cef);
    /* 00502cef: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 00502cf2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00502cf5: jne 0x502d25 */ if (!fZ) goto L_00502d25;
L_00502cf7:; BB(0x00502cf7);
    /* 00502cf7: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00502cfc: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00502d01: call 0x501e04 */ r_esp -= 4; W32(r_esp, 0x502d06u); f_00501e04();
    /* 00502d06: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
L_00502d0d:; BB(0x00502d0d);
    /* 00502d0d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00502d0f: je 0x502d20 */ if (fZ) goto L_00502d20;
L_00502d11:; BB(0x00502d11);
    /* 00502d11: and eax, 0xef */ {  u32 a = r_eax; u32 b = 0xefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00502d16: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00502d1b: call 0x7a95ec */ r_esp -= 4; W32(r_esp, 0x502d20u); f_007a95ec();
L_00502d20:; BB(0x00502d20);
    /* 00502d20: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502d23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00502d24: ret  */ FN_RET(0x00502ce0); r_esp += 4; return;
L_00502d25:; BB(0x00502d25);
    /* 00502d25: mov edx, eax */ r_edx = r_eax;
    /* 00502d27: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00502d2a: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502d2d: jne 0x502d0d */ if (!fZ) goto L_00502d0d;
L_00502d2f:; BB(0x00502d2f);
    /* 00502d2f: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x502d34u); f_004d28a4();
    /* 00502d34: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x502d39u); f_0082dbac();
    /* 00502d39: movzx edi, byte ptr [0x9ba3fc] */ r_edi = (u32)R8((u32)(0x9ba3fcu));
    /* 00502d40: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00502d43: or edi, 0xffffff */ {  u32 a = r_edi; u32 b = 0xffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00502d49: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502d4eu); f_00482a10();
    /* 00502d4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502d50: je 0x502dde */ if (fZ) goto L_00502dde;
L_00502d56:; BB(0x00502d56);
    /* 00502d56: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00502d5b: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x502d60u); f_00829cc8();
    /* 00502d60: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x502d65u); f_007a9044();
    /* 00502d65: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x502d6au); f_007a93d8();
    /* 00502d6a: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00502d71: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00502d79: mov dword ptr [esp + 8], 0x44200000 */ W32((u32)(r_esp+0x8u), 0x44200000u);
    /* 00502d81: mov dword ptr [esp + 0xc], 0x43f00000 */ W32((u32)(r_esp+0xcu), 0x43f00000u);
    /* 00502d89: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00502d91: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00502d99: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00502da1: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00502da9: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x502daeu); f_0082dbac();
    /* 00502dae: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502db3: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x502db8u); f_0082bb30();
    /* 00502db8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00502dba: mov edx, edi */ r_edx = r_edi;
    /* 00502dbc: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x502dc1u); f_0082bb60();
    /* 00502dc1: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502dc6: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00502dca: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x502dcfu); f_0082b440();
    /* 00502dcf: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x502dd4u); f_004ac444();
    /* 00502dd4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x502dd9u); f_0082dab0();
    /* 00502dd9: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x502ddeu); f_007a9318();
L_00502dde:; BB(0x00502dde);
    /* 00502dde: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x502de3u); f_0082dab0();
    /* 00502de3: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x502de8u); f_004d2968();
    /* 00502de8: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00502def: mov byte ptr [0x9ba3fc], 0x8f */ W8((u32)(0x9ba3fcu), 0x8fu);
    /* 00502df6: and eax, 0xfd */ {  u32 a = r_eax; u32 b = 0xfdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00502dfb: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00502e00: jmp 0x502d0d */ goto L_00502d0d;
}

void f_00502e08(void)
{
    FN_ENTER(0x00502e08);
    /* 00502e08: fild dword ptr [0x9ba40c] */ FPUSH((long double)(i32)R32((u32)(0x9ba40cu)));
    /* 00502e0e: fmul dword ptr [0x91fbd0] */ ST(0) = ST(0) * R_F32((u32)(0x91fbd0u));
    /* 00502e14: fadd dword ptr [0x91fbd8] */ ST(0) = ST(0) + R_F32((u32)(0x91fbd8u));
    /* 00502e1a: fstp dword ptr [0xa72a94] */ W_F32((u32)(0xa72a94u), ST(0)); FPOP();
    /* 00502e20: mov dword ptr [0xa72a98], 0x3f800000 */ W32((u32)(0xa72a98u), 0x3f800000u);
    /* 00502e2a: mov dword ptr [0xa72a9c], 0x41000000 */ W32((u32)(0xa72a9cu), 0x41000000u);
    /* 00502e34: mov dword ptr [0xa72aa0], 0x3fc00000 */ W32((u32)(0xa72aa0u), 0x3fc00000u);
    /* 00502e3e: ret  */ FN_RET(0x00502e08); r_esp += 4; return;
}

void f_00502e40(void) /* sub_502E40 */
{
    FN_ENTER(0x00502e40);
    /* 00502e40: mov eax, dword ptr [0xaf0344] */ r_eax = R32((u32)(0xaf0344u));
    /* 00502e45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502e47: je 0x502e70 */ if (fZ) goto L_00502e70;
L_00502e49:; BB(0x00502e49);
    /* 00502e49: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00502e4c: je 0x502e6a */ if (fZ) goto L_00502e6a;
L_00502e4e:; BB(0x00502e4e);
    /* 00502e4e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00502e51: jne 0x502e59 */ if (!fZ) goto L_00502e59;
L_00502e53:; BB(0x00502e53);
    /* 00502e53: mov eax, 8 */ r_eax = 0x8u;
    /* 00502e58: ret  */ FN_RET(0x00502e40); r_esp += 4; return;
L_00502e59:; BB(0x00502e59);
    /* 00502e59: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00502e5c: jne 0x502e64 */ if (!fZ) goto L_00502e64;
L_00502e5e:; BB(0x00502e5e);
    /* 00502e5e: mov eax, 6 */ r_eax = 0x6u;
    /* 00502e63: ret  */ FN_RET(0x00502e40); r_esp += 4; return;
L_00502e64:; BB(0x00502e64);
    /* 00502e64: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00502e69: ret  */ FN_RET(0x00502e40); r_esp += 4; return;
L_00502e6a:; BB(0x00502e6a);
    /* 00502e6a: mov eax, 5 */ r_eax = 0x5u;
    /* 00502e6f: ret  */ FN_RET(0x00502e40); r_esp += 4; return;
L_00502e70:; BB(0x00502e70);
    /* 00502e70: mov eax, 1 */ r_eax = 0x1u;
    /* 00502e75: ret  */ FN_RET(0x00502e40); r_esp += 4; return;
}

void f_00502e78(void) /* sub_502E78 */
{
    FN_ENTER(0x00502e78);
    /* 00502e78: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502e7b: call 0x482a18 */ r_esp -= 4; W32(r_esp, 0x502e80u); f_00482a18();
    /* 00502e80: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00502e83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502e85: je 0x502f36 */ if (fZ) goto L_00502f36;
L_00502e8b:; BB(0x00502e8b);
    /* 00502e8b: call 0x482a18 */ r_esp -= 4; W32(r_esp, 0x502e90u); f_00482a18();
    /* 00502e90: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00502e93: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502e96: jne 0x502ea9 */ if (!fZ) goto L_00502ea9;
L_00502e98:; BB(0x00502e98);
    /* 00502e98: mov eax, 0x200 */ r_eax = 0x200u;
    /* 00502e9d: mov dword ptr [0x9ba408], eax */ W32((u32)(0x9ba408u), r_eax);
    /* 00502ea2: mov dword ptr [0x9ba40c], eax */ W32((u32)(0x9ba40cu), r_eax);
    /* 00502ea7: jmp 0x502ebd */ goto L_00502ebd;
L_00502ea9:; BB(0x00502ea9);
    /* 00502ea9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502eac: jne 0x502ebd */ if (!fZ) goto L_00502ebd;
L_00502eae:; BB(0x00502eae);
    /* 00502eae: mov eax, 0x400 */ r_eax = 0x400u;
    /* 00502eb3: mov dword ptr [0x9ba408], eax */ W32((u32)(0x9ba408u), r_eax);
    /* 00502eb8: mov dword ptr [0x9ba40c], eax */ W32((u32)(0x9ba40cu), r_eax);
L_00502ebd:; BB(0x00502ebd);
    /* 00502ebd: push dword ptr [0x9ba408] */ { u32 v = R32((u32)(0x9ba408u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502ec3: push dword ptr [0x9ba40c] */ { u32 v = R32((u32)(0x9ba40cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00502ec9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00502ecb: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00502ecf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00502ed1: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x502ed6u); f_0082a9dc();
    /* 00502ed6: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502edb: mov ecx, dword ptr [0x9ba400] */ r_ecx = R32((u32)(0x9ba400u));
    /* 00502ee1: push 0x2ee1 */ { u32 v = 0x2ee1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502ee6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00502eea: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x502eefu); f_0082aa0c();
    /* 00502eef: mov ecx, 0x9ba400 */ r_ecx = 0x9ba400u;
    /* 00502ef4: mov edx, 2 */ r_edx = 0x2u;
    /* 00502ef9: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x502efeu); f_00829e74();
    /* 00502efe: mov eax, dword ptr [0x9ba400] */ r_eax = R32((u32)(0x9ba400u));
    /* 00502f03: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00502f06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502f08: je 0x502f28 */ if (fZ) goto L_00502f28;
L_00502f0a:; BB(0x00502f0a);
    /* 00502f0a: mov ecx, 0x9ba400 */ r_ecx = 0x9ba400u;
    /* 00502f0f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x502f14u); f_00829cc8();
    /* 00502f14: call 0x835e40 */ r_esp -= 4; W32(r_esp, 0x502f19u); f_00835e40();
    /* 00502f19: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00502f1e: call 0x83aebc */ r_esp -= 4; W32(r_esp, 0x502f23u); f_0083aebc();
    /* 00502f23: call 0x835e60 */ r_esp -= 4; W32(r_esp, 0x502f28u); f_00835e60();
L_00502f28:; BB(0x00502f28);
    /* 00502f28: mov dword ptr [0xa72aa4], 0 */ W32((u32)(0xa72aa4u), 0x0u);
    /* 00502f32: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502f35: ret  */ FN_RET(0x00502e78); r_esp += 4; return;
L_00502f36:; BB(0x00502f36);
    /* 00502f36: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502f39: ret  */ FN_RET(0x00502e78); r_esp += 4; return;
}

void f_00502f3c(void) /* sub_502F3C */
{
    FN_ENTER(0x00502f3c);
    /* 00502f3c: mov dword ptr [0xa72ae0], 0 */ W32((u32)(0xa72ae0u), 0x0u);
    /* 00502f46: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x502f4bu); f_00807ac0();
    /* 00502f4b: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00502f4e: je 0x502f51 */ if (fZ) goto L_00502f51;
L_00502f50:; BB(0x00502f50);
    /* 00502f50: ret  */ FN_RET(0x00502f3c); r_esp += 4; return;
L_00502f51:; BB(0x00502f51);
    /* 00502f51: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502f56u); f_00482a10();
    /* 00502f56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502f58: je 0x502f50 */ if (fZ) goto L_00502f50;
L_00502f5a:; BB(0x00502f5a);
    /* 00502f5a: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00502f5c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x502f61u); f_008581c5();
    /* 00502f61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502f62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502f64: je 0x502f87 */ if (fZ) goto L_00502f87;
L_00502f66:; BB(0x00502f66);
    /* 00502f66: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00502f68: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00502f6a: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00502f6d: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00502f70: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00502f73: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00502f76: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00502f79: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00502f7c: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00502f7f: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00502f82: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00502f85: jmp 0x502f89 */ goto L_00502f89;
L_00502f87:; BB(0x00502f87);
    /* 00502f87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00502f89:; BB(0x00502f89);
    /* 00502f89: mov dword ptr [0xa72ae0], eax */ W32((u32)(0xa72ae0u), r_eax);
    /* 00502f8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00502f90: je 0x502f50 */ if (fZ) goto L_00502f50;
L_00502f92:; BB(0x00502f92);
    /* 00502f92: mov ecx, eax */ r_ecx = r_eax;
    /* 00502f94: call 0x501730 */ r_esp -= 4; W32(r_esp, 0x502f99u); f_00501730();
    /* 00502f99: ret  */ FN_RET(0x00502f3c); r_esp += 4; return;
}

void f_00502f9c(void) /* sub_502F9C */
{
    FN_ENTER(0x00502f9c);
    /* 00502f9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00502f9e: mov byte ptr [0xa72ae4], al */ W8((u32)(0xa72ae4u), (u8)r_eax);
    /* 00502fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502fa4: call 0x502fac */ r_esp -= 4; W32(r_esp, 0x502fa9u); f_00502fac();
    /* 00502fa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502faa: ret  */ FN_RET(0x00502f9c); r_esp += 4; return;
}

void f_00502fac(void) /* sub_502FAC */
{
    FN_ENTER(0x00502fac);
    /* 00502fac: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00502faf: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x502fb4u); f_00482a10();
    /* 00502fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00502fb6: jne 0x502fbc */ if (!fZ) goto L_00502fbc;
L_00502fb8:; BB(0x00502fb8);
    /* 00502fb8: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00502fbb: ret  */ FN_RET(0x00502fac); r_esp += 4; return;
L_00502fbc:; BB(0x00502fbc);
    /* 00502fbc: call 0x502e40 */ r_esp -= 4; W32(r_esp, 0x502fc1u); f_00502e40();
    /* 00502fc1: push dword ptr [0xaf0354] */ { u32 v = R32((u32)(0xaf0354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502fc7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00502fc9: push dword ptr [0xaf0350] */ { u32 v = R32((u32)(0xaf0350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00502fcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502fd0: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00502fd4: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x502fd9u); f_0082a9dc();
    /* 00502fd9: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00502fde: mov ecx, dword ptr [0x9ba3ec] */ r_ecx = R32((u32)(0x9ba3ecu));
    /* 00502fe4: push 0x2ee0 */ { u32 v = 0x2ee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00502fe9: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00502fed: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x502ff2u); f_0082aa0c();
    /* 00502ff2: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00502ff7: mov edx, 1 */ r_edx = 0x1u;
    /* 00502ffc: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x503001u); f_00829e74();
    /* 00503001: call 0x502e40 */ r_esp -= 4; W32(r_esp, 0x503006u); f_00502e40();
    /* 00503006: mov ecx, 0x80 */ r_ecx = 0x80u;
    /* 0050300b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050300c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050300e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0050300f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00503010: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00503014: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x503019u); f_0082a9dc();
    /* 00503019: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0050301e: mov ecx, dword ptr [0x9ba3f4] */ r_ecx = R32((u32)(0x9ba3f4u));
    /* 00503024: push 0x2ee3 */ { u32 v = 0x2ee3u; r_esp -= 4; W32(r_esp, v); }
    /* 00503029: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0050302d: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x503032u); f_0082aa0c();
    /* 00503032: mov ecx, 0x9ba3f4 */ r_ecx = 0x9ba3f4u;
    /* 00503037: mov edx, 2 */ r_edx = 0x2u;
    /* 0050303c: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x503041u); f_00829e74();
    /* 00503041: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00503044: ret  */ FN_RET(0x00502fac); r_esp += 4; return;
}

