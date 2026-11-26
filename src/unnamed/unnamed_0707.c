#include "protos.h"

void f_0070706d(void) /* sub_70706D */
{
    FN_ENTER(0x0070706d);
    /* 0070706d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070706e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00707071: cmp edx, 0x2c8 */ {  u32 a = r_edx; u32 b = 0x2c8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707077: je 0x707082 */ if (fZ) goto L_00707082;
L_00707079:; BB(0x00707079);
    /* 00707079: call 0x707095 */ r_esp -= 4; W32(r_esp, 0x70707eu); f_00707095();
    /* 0070707e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707080: je 0x707086 */ if (fZ) goto L_00707086;
L_00707082:; BB(0x00707082);
    /* 00707082: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707084: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00707085: ret  */ FN_RET(0x0070706d); r_esp += 4; return;
L_00707086:; BB(0x00707086);
    /* 00707086: mov eax, 1 */ r_eax = 0x1u;
    /* 0070708b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070708c: ret  */ FN_RET(0x0070706d); r_esp += 4; return;
}

void f_00707090(void) /* sub_707090 */
{
    FN_ENTER(0x00707090);
    /* 00707090: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00707095: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00707098: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070709b: jl 0x7070a8 */ if ((fS!=fO)) goto L_007070a8;
L_0070709d:; BB(0x0070709d);
    /* 0070709d: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007070a0: jg 0x7070a8 */ if ((!fZ&&fS==fO)) goto L_007070a8;
L_007070a2:; BB(0x007070a2);
    /* 007070a2: mov eax, 1 */ r_eax = 0x1u;
    /* 007070a7: ret  */ FN_RET(0x00707090); r_esp += 4; return;
L_007070a8:; BB(0x007070a8);
    /* 007070a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007070aa: ret  */ FN_RET(0x00707090); r_esp += 4; return;
}

void f_00707095(void) /* sub_707095 */
{
    FN_ENTER(0x00707095);
    /* 00707095: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00707098: cmp eax, 0x37 */ {  u32 a = r_eax; u32 b = 0x37u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0070709b: jl 0x7070a8 */ if ((fS!=fO)) goto L_007070a8;
L_0070709d:; BB(0x0070709d);
    /* 0070709d: cmp eax, 0x45 */ {  u32 a = r_eax; u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007070a0: jg 0x7070a8 */ if ((!fZ&&fS==fO)) goto L_007070a8;
L_007070a2:; BB(0x007070a2);
    /* 007070a2: mov eax, 1 */ r_eax = 0x1u;
    /* 007070a7: ret  */ FN_RET(0x00707095); r_esp += 4; return;
L_007070a8:; BB(0x007070a8);
    /* 007070a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007070aa: ret  */ FN_RET(0x00707095); r_esp += 4; return;
}

void f_007070ac(void) /* sub_7070AC */
{
    FN_ENTER(0x007070ac);
    /* 007070ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007070ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007070ae: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007070b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007070b3: movzx ecx, word ptr [0xa9c4f4] */ r_ecx = (u32)R16((u32)(0xa9c4f4u));
    /* 007070ba: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007070be: mov edx, dword ptr [0xa96ef0] */ r_edx = R32((u32)(0xa96ef0u));
    /* 007070c4: call 0x70717d */ r_esp -= 4; W32(r_esp, 0x7070c9u); f_0070717d();
    /* 007070c9: mov ebx, dword ptr [ebx + 0x70] */ r_ebx = R32((u32)(r_ebx+0x70u));
    /* 007070cc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007070ce: je 0x707165 */ if (fZ) goto L_00707165;
L_007070d4:; BB(0x007070d4);
    /* 007070d4: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007070d7: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 007070d9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007070db: je 0x707165 */ if (fZ) goto L_00707165;
L_007070e1:; BB(0x007070e1);
    /* 007070e1: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007070e6: mov ecx, esi */ r_ecx = r_esi;
    /* 007070e8: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7070edu); f_0072ddf4();
    /* 007070ed: fld dword ptr [0x96ea24] */ FPUSH(R_F32((u32)(0x96ea24u)));
    /* 007070f3: fld dword ptr [0x96ea20] */ FPUSH(R_F32((u32)(0x96ea20u)));
    /* 007070f9: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 007070fc: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 007070fe: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707100: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00707102: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00707104: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00707105: jb 0x70711e */ if (fC) goto L_0070711e;
L_00707107:; BB(0x00707107);
    /* 00707107: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00707109: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0070710b: fld dword ptr [0x96ea20] */ FPUSH(R_F32((u32)(0x96ea20u)));
    /* 00707111: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707113: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00707116: fld dword ptr [0x96ea1c] */ FPUSH(R_F32((u32)(0x96ea1cu)));
    /* 0070711c: jmp 0x70712f */ goto L_0070712f;
L_0070711e:; BB(0x0070711e);
    /* 0070711e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00707120: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00707122: fld dword ptr [0x96ea1c] */ FPUSH(R_F32((u32)(0x96ea1cu)));
    /* 00707128: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
L_0070712f:; BB(0x0070712f);
    /* 0070712f: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00707131: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00707133: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00707134: fld dword ptr [0x96e520] */ FPUSH(R_F32((u32)(0x96e520u)));
    /* 0070713a: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0070713c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070713e: fstp dword ptr [ebx + 0x38] */ W_F32((u32)(r_ebx+0x38u), ST(0)); FPOP();
    /* 00707141: jb 0x707158 */ if (fC) goto L_00707158;
L_00707143:; BB(0x00707143);
    /* 00707143: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00707149: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0070714b: call 0x700c5c */ r_esp -= 4; W32(r_esp, 0x707150u); f_00700c5c();
    /* 00707150: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707153: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707154: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707155: ret 4 */ FN_RET(0x007070ac); r_esp += 8; return;
L_00707158:; BB(0x00707158);
    /* 00707158: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 0070715e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00707160: call 0x700cac */ r_esp -= 4; W32(r_esp, 0x707165u); f_00700cac();
L_00707165:; BB(0x00707165);
    /* 00707165: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707168: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707169: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070716a: ret 4 */ FN_RET(0x007070ac); r_esp += 8; return;
}

void f_00707170(void) /* sub_707170 */
{
    FN_ENTER(0x00707170);
    /* 00707170: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00707174: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00707178: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 0070717d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070717e: mov edi, dword ptr [0xa96ef4] */ r_edi = R32((u32)(0xa96ef4u));
    /* 00707184: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707186: je 0x7071cb */ if (fZ) goto L_007071cb;
L_00707188:; BB(0x00707188);
    /* 00707188: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070718b: je 0x7071be */ if (fZ) goto L_007071be;
L_0070718d:; BB(0x0070718d);
    /* 0070718d: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707190: jne 0x70719f */ if (!fZ) goto L_0070719f;
L_00707192:; BB(0x00707192);
    /* 00707192: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00707193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00707194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707195: call 0x704598 */ r_esp -= 4; W32(r_esp, 0x70719au); f_00704598();
    /* 0070719a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070719d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070719e: ret  */ FN_RET(0x00707170); r_esp += 4; return;
L_0070719f:; BB(0x0070719f);
    /* 0070719f: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007071a2: jne 0x7071b1 */ if (!fZ) goto L_007071b1;
L_007071a4:; BB(0x007071a4);
    /* 007071a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071a7: call 0x704df4 */ r_esp -= 4; W32(r_esp, 0x7071acu); f_00704df4();
    /* 007071ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071b0: ret  */ FN_RET(0x00707170); r_esp += 4; return;
L_007071b1:; BB(0x007071b1);
    /* 007071b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071b4: call 0x7038f0 */ r_esp -= 4; W32(r_esp, 0x7071b9u); f_007038f0();
    /* 007071b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071bd: ret  */ FN_RET(0x00707170); r_esp += 4; return;
L_007071be:; BB(0x007071be);
    /* 007071be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071c1: call 0x703ed4 */ r_esp -= 4; W32(r_esp, 0x7071c6u); f_00703ed4();
    /* 007071c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071ca: ret  */ FN_RET(0x00707170); r_esp += 4; return;
L_007071cb:; BB(0x007071cb);
    /* 007071cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071ce: call 0x703690 */ r_esp -= 4; W32(r_esp, 0x7071d3u); f_00703690();
    /* 007071d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071d7: ret  */ FN_RET(0x00707170); r_esp += 4; return;
}

void f_0070717d(void) /* sub_70717D */
{
    FN_ENTER(0x0070717d);
    /* 0070717d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070717e: mov edi, dword ptr [0xa96ef4] */ r_edi = R32((u32)(0xa96ef4u));
    /* 00707184: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707186: je 0x7071cb */ if (fZ) goto L_007071cb;
L_00707188:; BB(0x00707188);
    /* 00707188: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070718b: je 0x7071be */ if (fZ) goto L_007071be;
L_0070718d:; BB(0x0070718d);
    /* 0070718d: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707190: jne 0x70719f */ if (!fZ) goto L_0070719f;
L_00707192:; BB(0x00707192);
    /* 00707192: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00707193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00707194: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707195: call 0x704598 */ r_esp -= 4; W32(r_esp, 0x70719au); f_00704598();
    /* 0070719a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070719d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070719e: ret  */ FN_RET(0x0070717d); r_esp += 4; return;
L_0070719f:; BB(0x0070719f);
    /* 0070719f: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007071a2: jne 0x7071b1 */ if (!fZ) goto L_007071b1;
L_007071a4:; BB(0x007071a4);
    /* 007071a4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071a7: call 0x704df4 */ r_esp -= 4; W32(r_esp, 0x7071acu); f_00704df4();
    /* 007071ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071b0: ret  */ FN_RET(0x0070717d); r_esp += 4; return;
L_007071b1:; BB(0x007071b1);
    /* 007071b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071b4: call 0x7038f0 */ r_esp -= 4; W32(r_esp, 0x7071b9u); f_007038f0();
    /* 007071b9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071bd: ret  */ FN_RET(0x0070717d); r_esp += 4; return;
L_007071be:; BB(0x007071be);
    /* 007071be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071c1: call 0x703ed4 */ r_esp -= 4; W32(r_esp, 0x7071c6u); f_00703ed4();
    /* 007071c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071ca: ret  */ FN_RET(0x0070717d); r_esp += 4; return;
L_007071cb:; BB(0x007071cb);
    /* 007071cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007071cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007071cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071ce: call 0x703690 */ r_esp -= 4; W32(r_esp, 0x7071d3u); f_00703690();
    /* 007071d3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007071d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007071d7: ret  */ FN_RET(0x0070717d); r_esp += 4; return;
}

void f_007071d8(void) /* sub_7071D8 */
{
    FN_ENTER(0x007071d8);
    /* 007071d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007071d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007071db: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007071de: mov ecx, dword ptr [ebp + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ebp+r_eax*4+0x24u));
    /* 007071e2: call 0x7001b4 */ r_esp -= 4; W32(r_esp, 0x7071e7u); f_007001b4();
    /* 007071e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007071e8: push dword ptr [ebp + 0x88] */ { u32 v = R32((u32)(r_ebp+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 007071ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007071f0: push dword ptr [ebp + 0xb0] */ { u32 v = R32((u32)(r_ebp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007071f6: call 0x707218 */ r_esp -= 4; W32(r_esp, 0x7071fbu); f_00707218();
    /* 007071fb: cmp eax, dword ptr [ebp + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00707201: je 0x707216 */ if (fZ) goto L_00707216;
L_00707203:; BB(0x00707203);
    /* 00707203: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00707206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707207: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 0070720d: mov ecx, dword ptr [ebp + edx*4 + 0x28] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x28u));
    /* 00707211: call 0x700fbc */ r_esp -= 4; W32(r_esp, 0x707216u); f_00700fbc();
L_00707216:; BB(0x00707216);
    /* 00707216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707217: ret  */ FN_RET(0x007071d8); r_esp += 4; return;
}

void f_007071e8(void)
{
    FN_ENTER(0x007071e8);
    /* 007071e8: push dword ptr [ebp + 0x88] */ { u32 v = R32((u32)(r_ebp+0x88u)); r_esp -= 4; W32(r_esp, v); }
    /* 007071ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007071f0: push dword ptr [ebp + 0xb0] */ { u32 v = R32((u32)(r_ebp+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007071f6: call 0x707218 */ r_esp -= 4; W32(r_esp, 0x7071fbu); f_00707218();
    /* 007071fb: cmp eax, dword ptr [ebp + 0x8c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00707201: je 0x707216 */ if (fZ) goto L_00707216;
L_00707203:; BB(0x00707203);
    /* 00707203: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00707206: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707207: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 0070720d: mov ecx, dword ptr [ebp + edx*4 + 0x28] */ r_ecx = R32((u32)(r_ebp+r_edx*4+0x28u));
    /* 00707211: call 0x700fbc */ r_esp -= 4; W32(r_esp, 0x707216u); f_00700fbc();
L_00707216:; BB(0x00707216);
    /* 00707216: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707217: ret  */ FN_RET(0x007071e8); r_esp += 4; return;
}

void f_00707218(void)
{
    FN_ENTER(0x00707218);
    /* 00707218: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707219: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070721a: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0070721e: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00707222: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00707226: mov eax, dword ptr [0xa96ef4] */ r_eax = R32((u32)(0xa96ef4u));
    /* 0070722b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070722d: je 0x707272 */ if (fZ) goto L_00707272;
L_0070722f:; BB(0x0070722f);
    /* 0070722f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707232: je 0x707265 */ if (fZ) goto L_00707265;
L_00707234:; BB(0x00707234);
    /* 00707234: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707237: jne 0x707246 */ if (!fZ) goto L_00707246;
L_00707239:; BB(0x00707239);
    /* 00707239: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070723a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070723b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070723c: call 0x705b10 */ r_esp -= 4; W32(r_esp, 0x707241u); f_00705b10();
    /* 00707241: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707242: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707243: ret 0xc */ FN_RET(0x00707218); r_esp += 16; return;
L_00707246:; BB(0x00707246);
    /* 00707246: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707249: jne 0x707258 */ if (!fZ) goto L_00707258;
L_0070724b:; BB(0x0070724b);
    /* 0070724b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0070724c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070724d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070724e: call 0x705ce4 */ r_esp -= 4; W32(r_esp, 0x707253u); f_00705ce4();
    /* 00707253: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707254: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707255: ret 0xc */ FN_RET(0x00707218); r_esp += 16; return;
L_00707258:; BB(0x00707258);
    /* 00707258: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00707259: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070725a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0070725b: call 0x705768 */ r_esp -= 4; W32(r_esp, 0x707260u); f_00705768();
    /* 00707260: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707261: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707262: ret 0xc */ FN_RET(0x00707218); r_esp += 16; return;
L_00707265:; BB(0x00707265);
    /* 00707265: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00707266: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707267: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707268: call 0x70593c */ r_esp -= 4; W32(r_esp, 0x70726du); f_0070593c();
    /* 0070726d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070726e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070726f: ret 0xc */ FN_RET(0x00707218); r_esp += 16; return;
L_00707272:; BB(0x00707272);
    /* 00707272: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00707273: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707274: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707275: call 0x705614 */ r_esp -= 4; W32(r_esp, 0x70727au); f_00705614();
    /* 0070727a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070727b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070727c: ret 0xc */ FN_RET(0x00707218); r_esp += 16; return;
}

void f_0070726c(void)
{
    FN_ENTER(0x0070726c);
    /* 0070726c: call ptr [esi + 0x5f] */ { u32 t = R32((u32)(r_esi+0x5fu)); r_esp -= 4; W32(r_esp, 0x70726fu); call_ind(t); }
    /* 0070726f: ret 0xc */ FN_RET(0x0070726c); r_esp += 16; return;
}

void f_00707280(void) /* sub_707280 */
{
    FN_ENTER(0x00707280);
    /* 00707280: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00707285: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707286: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00707288: call 0x707f40 */ r_esp -= 4; W32(r_esp, 0x70728du); f_00707f40();
    /* 0070728d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707290: ret 4 */ FN_RET(0x00707280); r_esp += 8; return;
}

void f_00707294(void) /* sub_707294 */
{
    FN_ENTER(0x00707294);
    /* 00707294: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00707298: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0070729a: call 0x707f40 */ r_esp -= 4; W32(r_esp, 0x70729fu); f_00707f40();
    /* 0070729f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007072a2: ret 4 */ FN_RET(0x00707294); r_esp += 8; return;
}

void f_007072a8(void) /* sub_7072A8 */
{
    FN_ENTER(0x007072a8);
    /* 007072a8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007072ab: mov ecx, dword ptr [ecx + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 007072af: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007072b1: je 0x7072b9 */ if (fZ) goto L_007072b9;
L_007072b3:; BB(0x007072b3);
    /* 007072b3: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x7072b8u); f_00700f98();
    /* 007072b8: ret  */ FN_RET(0x007072a8); r_esp += 4; return;
L_007072b9:; BB(0x007072b9);
    /* 007072b9: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007072be: ret  */ FN_RET(0x007072a8); r_esp += 4; return;
}

void f_007072c0(void) /* sub_7072C0 */
{
    FN_ENTER(0x007072c0);
    /* 007072c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007072c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007072c2: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007072c5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007072c7: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 007072ca: add eax, dword ptr [esp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007072ce: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007072d1: jge 0x7072e5 */ if ((fS==fO)) goto L_007072e5;
L_007072d3:; BB(0x007072d3);
    /* 007072d3: mov ebx, dword ptr [ebp + eax*4 + 0x24] */ r_ebx = R32((u32)(r_ebp+r_eax*4+0x24u));
    /* 007072d7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007072d9: je 0x7072ef */ if (fZ) goto L_007072ef;
L_007072db:; BB(0x007072db);
    /* 007072db: mov eax, ebx */ r_eax = r_ebx;
    /* 007072dd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007072e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007072e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007072e2: ret 8 */ FN_RET(0x007072c0); r_esp += 12; return;
L_007072e5:; BB(0x007072e5);
    /* 007072e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007072e7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007072ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007072eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007072ec: ret 8 */ FN_RET(0x007072c0); r_esp += 12; return;
L_007072ef:; BB(0x007072ef);
    /* 007072ef: fld dword ptr [0x96e51c] */ FPUSH(R_F32((u32)(0x96e51cu)));
    /* 007072f5: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007072f8: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007072fc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00707301: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00707305: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00707309: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070730d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00707310: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00707314: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707315: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00707319: call 0x700db8 */ r_esp -= 4; W32(r_esp, 0x70731eu); f_00700db8();
    /* 0070731e: mov ebx, eax */ r_ebx = r_eax;
    /* 00707320: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00707323: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00707324: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00707326: call 0x707d50 */ r_esp -= 4; W32(r_esp, 0x70732bu); f_00707d50();
    /* 0070732b: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 0070732e: add edx, dword ptr [esp + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00707332: mov dword ptr [ebp + edx*4 + 0x24], ebx */ W32((u32)(r_ebp+r_edx*4+0x24u), r_ebx);
    /* 00707336: jmp 0x7072db */ goto L_007072db;
}

void f_00707338(void) /* sub_707338 */
{
    FN_ENTER(0x00707338);
    /* 00707338: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707339: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070733a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070733b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070733c: mov esi, ecx */ r_esi = r_ecx;
    /* 0070733e: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00707342: call 0x700f98 */ r_esp -= 4; W32(r_esp, 0x707347u); f_00700f98();
    /* 00707347: mov ebp, eax */ r_ebp = r_eax;
    /* 00707349: mov eax, ebp */ r_eax = r_ebp;
    /* 0070734b: call 0x70706d */ r_esp -= 4; W32(r_esp, 0x707350u); f_0070706d();
    /* 00707350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707352: je 0x707384 */ if (fZ) goto L_00707384;
L_00707354:; BB(0x00707354);
    /* 00707354: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00707355: lea edi, [esi + 0xc4] */ r_edi = (u32)(r_esi+0xc4u);
    /* 0070735b: mov ecx, edi */ r_ecx = r_edi;
    /* 0070735d: call 0x7080d0 */ r_esp -= 4; W32(r_esp, 0x707362u); f_007080d0();
    /* 00707362: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707363: mov ecx, esi */ r_ecx = r_esi;
    /* 00707365: call 0x7070ac */ r_esp -= 4; W32(r_esp, 0x70736au); f_007070ac();
    /* 0070736a: mov dword ptr [esi + 0x98], 1 */ W32((u32)(r_esi+0x98u), 0x1u);
    /* 00707374: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 00707377: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 0070737d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0070737e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070737f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707380: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707381: ret 4 */ FN_RET(0x00707338); r_esp += 8; return;
L_00707384:; BB(0x00707384);
    /* 00707384: mov ecx, dword ptr [esi + 0x70] */ r_ecx = R32((u32)(r_esi+0x70u));
    /* 00707387: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707389: je 0x707396 */ if (fZ) goto L_00707396;
L_0070738b:; BB(0x0070738b);
    /* 0070738b: push dword ptr [0x96e518] */ { u32 v = R32((u32)(0x96e518u)); r_esp -= 4; W32(r_esp, v); }
    /* 00707391: call 0x700c5c */ r_esp -= 4; W32(r_esp, 0x707396u); f_00700c5c();
L_00707396:; BB(0x00707396);
    /* 00707396: mov dword ptr [esi + 0x98], 0 */ W32((u32)(r_esi+0x98u), 0x0u);
    /* 007073a0: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 007073a3: mov dword ptr [esi + 0x9c], eax */ W32((u32)(r_esi+0x9cu), r_eax);
    /* 007073a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007073aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007073ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007073ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007073ad: ret 4 */ FN_RET(0x00707338); r_esp += 8; return;
}

void f_007073b0(void) /* sub_7073B0 */
{
    FN_ENTER(0x007073b0);
    /* 007073b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007073b1: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007073b4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007073b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007073b8: jle 0x7073c2 */ if ((fZ||fS!=fO)) goto L_007073c2;
L_007073ba:; BB(0x007073ba);
    /* 007073ba: mov ebp, dword ptr [ecx + eax*4 + 0x20] */ r_ebp = R32((u32)(r_ecx+r_eax*4+0x20u));
    /* 007073be: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007073c0: jne 0x7073c6 */ if (!fZ) goto L_007073c6;
L_007073c2:; BB(0x007073c2);
    /* 007073c2: mov eax, ebp */ r_eax = r_ebp;
    /* 007073c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007073c5: ret  */ FN_RET(0x007073b0); r_esp += 4; return;
L_007073c6:; BB(0x007073c6);
    /* 007073c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007073c8: call 0x700f28 */ r_esp -= 4; W32(r_esp, 0x7073cdu); f_00700f28();
    /* 007073cd: push dword ptr [0x96e538] */ { u32 v = R32((u32)(0x96e538u)); r_esp -= 4; W32(r_esp, v); }
    /* 007073d3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007073d5: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x7073dau); f_00700f48();
    /* 007073da: mov edx, dword ptr [0x96e540] */ r_edx = R32((u32)(0x96e540u));
    /* 007073e0: mov dword ptr [ebp + 0x38], edx */ W32((u32)(r_ebp+0x38u), r_edx);
    /* 007073e3: jmp 0x7073c2 */ goto L_007073c2;
}

void f_007073e8(void) /* sub_7073E8 */
{
    FN_ENTER(0x007073e8);
    /* 007073e8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007073eb: add eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007073ef: mov ecx, dword ptr [ecx + eax*4 + 0x24] */ r_ecx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 007073f3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007073f5: je 0x707402 */ if (fZ) goto L_00707402;
L_007073f7:; BB(0x007073f7);
    /* 007073f7: push dword ptr [0x96e554] */ { u32 v = R32((u32)(0x96e554u)); r_esp -= 4; W32(r_esp, v); }
    /* 007073fd: call 0x700f48 */ r_esp -= 4; W32(r_esp, 0x707402u); f_00700f48();
L_00707402:; BB(0x00707402);
    /* 00707402: ret 4 */ FN_RET(0x007073e8); r_esp += 8; return;
}

void f_00707408(void) /* sub_707408 */
{
    FN_ENTER(0x00707408);
    /* 00707408: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707409: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070740a: mov edi, ecx */ r_edi = r_ecx;
    /* 0070740c: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0070740f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707411: jle 0x707433 */ if ((fZ||fS!=fO)) goto L_00707433;
L_00707413:; BB(0x00707413);
    /* 00707413: mov esi, dword ptr [edi + eax*4 + 0x20] */ r_esi = R32((u32)(r_edi+r_eax*4+0x20u));
    /* 00707417: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707419: je 0x707433 */ if (fZ) goto L_00707433;
L_0070741b:; BB(0x0070741b);
    /* 0070741b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070741c: mov ecx, edi */ r_ecx = r_edi;
    /* 0070741e: call 0x707438 */ r_esp -= 4; W32(r_esp, 0x707423u); f_00707438();
    /* 00707423: mov ecx, esi */ r_ecx = r_esi;
    /* 00707425: call 0x700fb0 */ r_esp -= 4; W32(r_esp, 0x70742au); f_00700fb0();
    /* 0070742a: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0070742d: mov dword ptr [edi + 0x88], eax */ W32((u32)(r_edi+0x88u), r_eax);
L_00707433:; BB(0x00707433);
    /* 00707433: mov eax, esi */ r_eax = r_esi;
    /* 00707435: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707436: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707437: ret  */ FN_RET(0x00707408); r_esp += 4; return;
}

void f_00707438(void) /* sub_707438 */
{
    FN_ENTER(0x00707438);
    /* 00707438: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707439: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070743a: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070743d: mov esi, ecx */ r_esi = r_ecx;
    /* 0070743f: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00707443: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00707445: call 0x700f00 */ r_esp -= 4; W32(r_esp, 0x70744au); f_00700f00();
    /* 0070744a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070744c: call 0x700ef0 */ r_esp -= 4; W32(r_esp, 0x707451u); f_00700ef0();
    /* 00707451: mov eax, dword ptr [esi + 0x7c] */ r_eax = R32((u32)(r_esi+0x7cu));
    /* 00707454: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707456: je 0x7074a0 */ if (fZ) goto L_007074a0;
L_00707458:; BB(0x00707458);
    /* 00707458: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0070745a: call 0x700fb8 */ r_esp -= 4; W32(r_esp, 0x70745fu); f_00700fb8();
    /* 0070745f: mov ecx, eax */ r_ecx = r_eax;
    /* 00707461: fld dword ptr [0x96e51c] */ FPUSH(R_F32((u32)(0x96e51cu)));
    /* 00707467: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0070746a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0070746e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00707473: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00707477: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0070747b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0070747f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00707482: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00707486: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00707487: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00707488: mov ecx, dword ptr [esi + 0x7c] */ r_ecx = R32((u32)(r_esi+0x7cu));
    /* 0070748b: call 0x700948 */ r_esp -= 4; W32(r_esp, 0x707490u); f_00700948();
    /* 00707490: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00707492: call 0x700f90 */ r_esp -= 4; W32(r_esp, 0x707497u); f_00700f90();
    /* 00707497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707498: mov ecx, dword ptr [esi + 0x7c] */ r_ecx = R32((u32)(r_esi+0x7cu));
    /* 0070749b: call 0x700968 */ r_esp -= 4; W32(r_esp, 0x7074a0u); f_00700968();
L_007074a0:; BB(0x007074a0);
    /* 007074a0: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007074a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007074a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007074a5: ret 4 */ FN_RET(0x00707438); r_esp += 8; return;
}

void f_007074a8(void) /* sub_7074A8 */
{
    FN_ENTER(0x007074a8);
    /* 007074a8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007074ab: add eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007074af: mov edx, dword ptr [ecx + eax*4 + 0x24] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x24u));
    /* 007074b3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007074b5: je 0x7074d3 */ if (fZ) goto L_007074d3;
L_007074b7:; BB(0x007074b7);
    /* 007074b7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007074bb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007074c0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007074c4: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 007074c7: add edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007074cb: mov dword ptr [ecx + edx*4 + 0x24], 0 */ W32((u32)(r_ecx+r_edx*4+0x24u), 0x0u);
L_007074d3:; BB(0x007074d3);
    /* 007074d3: ret 4 */ FN_RET(0x007074a8); r_esp += 8; return;
}

void f_007074d8(void) /* sub_7074D8 */
{
    FN_ENTER(0x007074d8);
    /* 007074d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007074d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007074da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007074db: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007074dd: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 007074e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007074e5: je 0x7074f6 */ if (fZ) goto L_007074f6;
L_007074e7:; BB(0x007074e7);
    /* 007074e7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7074ecu); f_007127b0();
    /* 007074ec: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
L_007074f6:; BB(0x007074f6);
    /* 007074f6: mov ecx, dword ptr [ebx + 0x80] */ r_ecx = R32((u32)(r_ebx+0x80u));
    /* 007074fc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007074fe: je 0x70750f */ if (fZ) goto L_0070750f;
L_00707500:; BB(0x00707500);
    /* 00707500: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x707505u); f_007127b0();
    /* 00707505: mov dword ptr [ebx + 0x80], 0 */ W32((u32)(r_ebx+0x80u), 0x0u);
L_0070750f:; BB(0x0070750f);
    /* 0070750f: mov ecx, dword ptr [ebx + 0x7c] */ r_ecx = R32((u32)(r_ebx+0x7cu));
    /* 00707512: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707514: je 0x707522 */ if (fZ) goto L_00707522;
L_00707516:; BB(0x00707516);
    /* 00707516: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x70751bu); f_007127b0();
    /* 0070751b: mov dword ptr [ebx + 0x7c], 0 */ W32((u32)(r_ebx+0x7cu), 0x0u);
L_00707522:; BB(0x00707522);
    /* 00707522: lea edx, [ebx + 0x64] */ r_edx = (u32)(r_ebx+0x64u);
    /* 00707525: lea eax, [ebx + 0x7c] */ r_eax = (u32)(r_ebx+0x7cu);
    /* 00707528: mov ebp, eax */ r_ebp = r_eax;
    /* 0070752a: mov esi, edx */ r_esi = r_edx;
L_0070752c:; BB(0x0070752c);
    /* 0070752c: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0070752e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707530: je 0x70753d */ if (fZ) goto L_0070753d;
L_00707532:; BB(0x00707532);
    /* 00707532: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x707537u); f_007127b0();
    /* 00707537: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
L_0070753d:; BB(0x0070753d);
    /* 0070753d: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00707540: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00707542: ja 0x70752c */ if ((!fC&&!fZ)) goto L_0070752c;
L_00707544:; BB(0x00707544);
    /* 00707544: lea eax, [ebx + 0x44] */ r_eax = (u32)(r_ebx+0x44u);
    /* 00707547: add ebx, 0x28 */ {  u32 a = r_ebx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0070754a: mov esi, eax */ r_esi = r_eax;
L_0070754c:; BB(0x0070754c);
    /* 0070754c: mov ecx, dword ptr [esi - 4] */ r_ecx = R32((u32)(r_esi+0xfffffffcu));
    /* 0070754f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707551: je 0x70755f */ if (fZ) goto L_0070755f;
L_00707553:; BB(0x00707553);
    /* 00707553: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x707558u); f_007127b0();
    /* 00707558: mov dword ptr [esi - 4], 0 */ W32((u32)(r_esi+0xfffffffcu), 0x0u);
L_0070755f:; BB(0x0070755f);
    /* 0070755f: add esi, -4 */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00707562: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00707564: jbe 0x70754c */ if ((fC||fZ)) goto L_0070754c;
L_00707566:; BB(0x00707566);
    /* 00707566: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707567: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707568: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707569: ret  */ FN_RET(0x007074d8); r_esp += 4; return;
}

void f_0070756c(void) /* sub_70756C */
{
    FN_ENTER(0x0070756c);
    /* 0070756c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070756d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070756e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00707570: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00707572: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00707574: call 0x7075d8 */ r_esp -= 4; W32(r_esp, 0x707579u); f_007075d8();
    /* 00707579: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070757b: je 0x7075ce */ if (fZ) goto L_007075ce;
L_0070757d:; BB(0x0070757d);
    /* 0070757d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707580: je 0x7075c7 */ if (fZ) goto L_007075c7;
L_00707582:; BB(0x00707582);
    /* 00707582: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707585: je 0x7075c0 */ if (fZ) goto L_007075c0;
L_00707587:; BB(0x00707587);
    /* 00707587: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070758a: je 0x7075a4 */ if (fZ) goto L_007075a4;
L_0070758c:; BB(0x0070758c);
    /* 0070758c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070758f: jne 0x707598 */ if (!fZ) goto L_00707598;
L_00707591:; BB(0x00707591);
    /* 00707591: mov ebx, 9 */ r_ebx = 0x9u;
    /* 00707596: jmp 0x7075a9 */ goto L_007075a9;
L_00707598:; BB(0x00707598);
    /* 00707598: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070759b: jne 0x7075a9 */ if (!fZ) goto L_007075a9;
L_0070759d:; BB(0x0070759d);
    /* 0070759d: mov ebx, 0xb */ r_ebx = 0xbu;
    /* 007075a2: jmp 0x7075a9 */ goto L_007075a9;
L_007075a4:; BB(0x007075a4);
    /* 007075a4: mov ebx, 7 */ r_ebx = 0x7u;
L_007075a9:; BB(0x007075a9);
    /* 007075a9: movsx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x1cu));
    /* 007075ad: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007075af: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007075b2: je 0x7075b9 */ if (fZ) goto L_007075b9;
L_007075b4:; BB(0x007075b4);
    /* 007075b4: mov edx, 1 */ r_edx = 0x1u;
L_007075b9:; BB(0x007075b9);
    /* 007075b9: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007075bb: mov eax, ebx */ r_eax = r_ebx;
    /* 007075bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007075be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007075bf: ret  */ FN_RET(0x0070756c); r_esp += 4; return;
L_007075c0:; BB(0x007075c0);
    /* 007075c0: mov ebx, 5 */ r_ebx = 0x5u;
    /* 007075c5: jmp 0x7075a9 */ goto L_007075a9;
L_007075c7:; BB(0x007075c7);
    /* 007075c7: mov ebx, 3 */ r_ebx = 0x3u;
    /* 007075cc: jmp 0x7075a9 */ goto L_007075a9;
L_007075ce:; BB(0x007075ce);
    /* 007075ce: mov ebx, 1 */ r_ebx = 0x1u;
    /* 007075d3: jmp 0x7075a9 */ goto L_007075a9;
}

void f_007075d8(void) /* sub_7075D8 */
{
    FN_ENTER(0x007075d8);
    /* 007075d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007075d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007075da: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007075dc: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x7075e1u); f_00807ac0();
    /* 007075e1: mov ebx, eax */ r_ebx = r_eax;
    /* 007075e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007075e4: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x7075e9u); f_00807e20();
    /* 007075e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007075ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007075ec: je 0x7075f6 */ if (fZ) goto L_007075f6;
L_007075ee:; BB(0x007075ee);
    /* 007075ee: mov eax, 1 */ r_eax = 0x1u;
    /* 007075f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007075f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007075f5: ret  */ FN_RET(0x007075d8); r_esp += 4; return;
L_007075f6:; BB(0x007075f6);
    /* 007075f6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007075f7: call 0x8076d4 */ r_esp -= 4; W32(r_esp, 0x7075fcu); f_008076d4();
    /* 007075fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007075fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007075ff: je 0x707606 */ if (fZ) goto L_00707606;
L_00707601:; BB(0x00707601);
    /* 00707601: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707603: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707604: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707605: ret  */ FN_RET(0x007075d8); r_esp += 4; return;
L_00707606:; BB(0x00707606);
    /* 00707606: mov eax, dword ptr [0xa942c0] */ r_eax = R32((u32)(0xa942c0u));
    /* 0070760b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070760d: je 0x707617 */ if (fZ) goto L_00707617;
L_0070760f:; BB(0x0070760f);
    /* 0070760f: mov eax, 4 */ r_eax = 0x4u;
    /* 00707614: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707615: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707616: ret  */ FN_RET(0x007075d8); r_esp += 4; return;
L_00707617:; BB(0x00707617);
    /* 00707617: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 0070761c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070761e: je 0x707628 */ if (fZ) goto L_00707628;
L_00707620:; BB(0x00707620);
    /* 00707620: mov eax, 5 */ r_eax = 0x5u;
    /* 00707625: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707626: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707627: ret  */ FN_RET(0x007075d8); r_esp += 4; return;
L_00707628:; BB(0x00707628);
    /* 00707628: mov eax, dword ptr [ebp + 0xa0] */ r_eax = R32((u32)(r_ebp+0xa0u));
    /* 0070762e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707630: je 0x70763a */ if (fZ) goto L_0070763a;
L_00707632:; BB(0x00707632);
    /* 00707632: mov eax, 3 */ r_eax = 0x3u;
    /* 00707637: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707638: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707639: ret  */ FN_RET(0x007075d8); r_esp += 4; return;
L_0070763a:; BB(0x0070763a);
    /* 0070763a: mov eax, 2 */ r_eax = 0x2u;
    /* 0070763f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707640: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707641: ret  */ FN_RET(0x007075d8); r_esp += 4; return;
}

void f_00707644(void) /* sub_707644 */
{
    FN_ENTER(0x00707644);
    /* 00707644: mov eax, dword ptr [ecx + 0xa8] */ r_eax = R32((u32)(r_ecx+0xa8u));
    /* 0070764a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0070764d: je 0x707657 */ if (fZ) goto L_00707657;
L_0070764f:; BB(0x0070764f);
    /* 0070764f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00707652: je 0x70765d */ if (fZ) goto L_0070765d;
L_00707654:; BB(0x00707654);
    /* 00707654: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707656: ret  */ FN_RET(0x00707644); r_esp += 4; return;
L_00707657:; BB(0x00707657);
    /* 00707657: mov eax, 1 */ r_eax = 0x1u;
    /* 0070765c: ret  */ FN_RET(0x00707644); r_esp += 4; return;
L_0070765d:; BB(0x0070765d);
    /* 0070765d: mov eax, 2 */ r_eax = 0x2u;
    /* 00707662: ret  */ FN_RET(0x00707644); r_esp += 4; return;
}

void f_007076a0(void) /* sub_7076A0 */
{
    FN_ENTER(0x007076a0);
    /* 007076a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007076a1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007076a4: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 007076a8: mov byte ptr [esp], 0x74 */ W8((u32)(r_esp), 0x74u);
    /* 007076ac: mov byte ptr [esp + 1], 8 */ W8((u32)(r_esp+0x1u), 0x8u);
    /* 007076b1: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7076b6u); f_006dc358();
    /* 007076b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007076b8: je 0x7076bf */ if (fZ) goto L_007076bf;
L_007076ba:; BB(0x007076ba);
    /* 007076ba: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007076bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007076be: ret  */ FN_RET(0x007076a0); r_esp += 4; return;
L_007076bf:; BB(0x007076bf);
    /* 007076bf: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 007076c4: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007076c6: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 007076c9: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 007076ce: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 007076d1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007076d5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007076d9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007076dd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007076e0: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 007076e3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007076e7: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 007076ea: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007076ee: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 007076f1: mov esi, dword ptr [esi + 0x18] */ r_esi = R32((u32)(r_esi+0x18u));
    /* 007076f4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007076f8: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 007076fc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x707701u); f_008003e0();
    /* 00707701: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707704: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707705: ret  */ FN_RET(0x007076a0); r_esp += 4; return;
}

void f_00707708(void)
{
    FN_ENTER(0x00707708);
    /* 00707708: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707709: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070770a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0070770b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070770c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0070770f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x707714u); f_006dc358();
    /* 00707714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707716: je 0x707720 */ if (fZ) goto L_00707720;
L_00707718:; BB(0x00707718);
    /* 00707718: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0070771b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0070771c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0070771d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0070771e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0070771f: ret  */ FN_RET(0x00707708); r_esp += 4; return;
L_00707720:; BB(0x00707720);
    /* 00707720: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00707724: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 00707728: cmp ecx, dword ptr [0xa9c4f4] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0070772e: lea eax, [edx + 4] */ r_eax = (u32)(r_edx+0x4u);
    /* 00707731: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00707735: je 0x70773c */ if (fZ) goto L_0070773c;
L_00707737:; BB(0x00707737);
    /* 00707737: call 0x7078a0 */ r_esp -= 4; W32(r_esp, 0x70773cu); f_007078a0();
L_0070773c:; BB(0x0070773c);
    /* 0070773c: mov eax, dword ptr [0xa96ee0] */ r_eax = R32((u32)(0xa96ee0u));
    /* 00707741: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00707744: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00707749: mov edx, 0x2c7 */ r_edx = 0x2c7u;
    /* 0070774e: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00707751: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00707753: mov edi, 0x68c */ r_edi = 0x68cu;
    /* 00707758: mov ebx, eax */ r_ebx = r_eax;
L_0070775a:; BB(0x0070775a);
    /* 0070775a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0070775b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x707760u); f_0068d5a8();
    /* 00707760: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00707761: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707763: je 0x70779a */ if (fZ) goto L_0070779a;
L_00707765:; BB(0x00707765);
    /* 00707765: mov ecx, eax */ r_ecx = r_eax;
    /* 00707767: call 0x6936b4 */ r_esp -= 4; W32(r_esp, 0x70776cu); f_006936b4();
    /* 0070776c: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 00707772: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00707774: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707775: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00707778: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x70777du); f_00857dec();
    /* 0070777d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00707780: cmp esi, dword ptr [0xa9c4f4] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707786: je 0x7077a8 */ if (fZ) goto L_007077a8;
L_00707788:; BB(0x00707788);
    /* 00707788: mov word ptr [ebx + ebp*2], di */ W16((u32)(r_ebx+r_ebp*2), (u16)r_edi);
    /* 0070778c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0070778f: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00707792: jge 0x707895 */ if ((fS==fO)) goto L_00707895;
L_00707798:; BB(0x00707798);
    /* 00707798: jmp 0x7077a8 */ goto L_007077a8;
L_0070779a:; BB(0x0070779a);
    /* 0070779a: mov edx, dword ptr [0xa96ee4] */ r_edx = R32((u32)(0xa96ee4u));
    /* 007077a0: mov edx, dword ptr [edx + esi*4] */ r_edx = R32((u32)(r_edx+r_esi*4));
    /* 007077a3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007077a5: mov word ptr [edx], cx */ W16((u32)(r_edx), (u16)r_ecx);
L_007077a8:; BB(0x007077a8);
    /* 007077a8: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007077ab: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007077ae: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007077b1: jl 0x70775a */ if ((fS!=fO)) goto L_0070775a;
L_007077b3:; BB(0x007077b3);
    /* 007077b3: mov eax, ebx */ r_eax = r_ebx;
L_007077b5:; BB(0x007077b5);
    /* 007077b5: mov esi, dword ptr [0xa96ee0] */ r_esi = R32((u32)(0xa96ee0u));
    /* 007077bb: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 007077be: mov dword ptr [esi + 0x14], ebp */ W32((u32)(r_esi+0x14u), r_ebp);
    /* 007077c1: mov esi, 1 */ r_esi = 0x1u;
    /* 007077c6: mov edx, 0x2c4 */ r_edx = 0x2c4u;
    /* 007077cb: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 007077ce: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007077d1: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007077d3: jle 0x7077ed */ if ((fZ||fS!=fO)) goto L_007077ed;
L_007077d5:; BB(0x007077d5);
    /* 007077d5: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 007077d8: lea edx, [eax + ebp*2 + 2] */ r_edx = (u32)(r_eax+r_ebp*2+0x2u);
L_007077dc:; BB(0x007077dc);
    /* 007077dc: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 007077df: mov word ptr [edi + esi*2], bx */ W16((u32)(r_edi+r_esi*2), (u16)r_ebx);
    /* 007077e3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007077e6: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007077e9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007077eb: jb 0x7077dc */ if (fC) goto L_007077dc;
L_007077ed:; BB(0x007077ed);
    /* 007077ed: mov edx, 0x2c5 */ r_edx = 0x2c5u;
    /* 007077f2: mov word ptr [edi + esi*2], dx */ W16((u32)(r_edi+r_esi*2), (u16)r_edx);
    /* 007077f6: mov ecx, 0x2c6 */ r_ecx = 0x2c6u;
    /* 007077fb: mov edx, 0x2c7 */ r_edx = 0x2c7u;
    /* 00707800: mov word ptr [edi + esi*2 + 2], cx */ W16((u32)(r_edi+r_esi*2+0x2u), (u16)r_ecx);
    /* 00707805: mov word ptr [edi + esi*2 + 4], dx */ W16((u32)(r_edi+r_esi*2+0x4u), (u16)r_edx);
    /* 0070780a: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0070780d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00707812: mov edi, dword ptr [0xa96ee0] */ r_edi = R32((u32)(0xa96ee0u));
    /* 00707818: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0070781b: mov dword ptr [edi + 0x1c], esi */ W32((u32)(r_edi+0x1cu), r_esi);
    /* 0070781e: mov esi, dword ptr [edi + 0x20] */ r_esi = R32((u32)(r_edi+0x20u));
    /* 00707821: mov edi, 0x2c4 */ r_edi = 0x2c4u;
    /* 00707826: mov word ptr [esi], di */ W16((u32)(r_esi), (u16)r_edi);
    /* 00707829: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 0070782c: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0070782f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00707831: jle 0x707854 */ if ((fZ||fS!=fO)) goto L_00707854;
L_00707833:; BB(0x00707833);
    /* 00707833: lea edi, [eax + 2] */ r_edi = (u32)(r_eax+0x2u);
    /* 00707836: lea eax, [eax + ebp*2 + 2] */ r_eax = (u32)(r_eax+r_ebp*2+0x2u);
L_0070783a:; BB(0x0070783a);
    /* 0070783a: movsx ebx, word ptr [edi] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi));
    /* 0070783d: mov word ptr [esi + ecx*2], bx */ W16((u32)(r_esi+r_ecx*2), (u16)r_ebx);
    /* 00707841: mov ebp, edx */ r_ebp = r_edx;
    /* 00707843: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00707846: mov word ptr [ebp], bx */ W16((u32)(r_ebp), (u16)r_ebx);
    /* 0070784a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070784d: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00707850: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00707852: jb 0x70783a */ if (fC) goto L_0070783a;
L_00707854:; BB(0x00707854);
    /* 00707854: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00707858: mov ebp, 0x2c7 */ r_ebp = 0x2c7u;
    /* 0070785d: mov word ptr [esi + ecx*2], bp */ W16((u32)(r_esi+r_ecx*2), (u16)r_ebp);
    /* 00707861: mov word ptr [edx], bp */ W16((u32)(r_edx), (u16)r_ebp);
    /* 00707864: mov edi, 0x2c8 */ r_edi = 0x2c8u;
    /* 00707869: mov word ptr [esi + ecx*2 + 2], di */ W16((u32)(r_esi+r_ecx*2+0x2u), (u16)r_edi);
    /* 0070786e: mov edx, dword ptr [0xa96ee0] */ r_edx = R32((u32)(0xa96ee0u));
    /* 00707874: lea esi, [ecx + 2] */ r_esi = (u32)(r_ecx+0x2u);
    /* 00707877: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 0070787a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070787d: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00707880: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00707884: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 00707888: call 0x7078f1 */ r_esp -= 4; W32(r_esp, 0x70788du); f_007078f1();
    /* 0070788d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707890: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707892: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707893: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707894: ret  */ FN_RET(0x00707708); r_esp += 4; return;
L_00707895:; BB(0x00707895);
    /* 00707895: mov eax, ebx */ r_eax = r_ebx;
    /* 00707897: jmp 0x7077b5 */ goto L_007077b5;
}

void f_00707865(void) /* sub_707865 */
{
    FN_ENTER(0x00707865);
    /* 00707865: enter 2, 0 */ { u32 f = 0x2u; u32 lv = 0u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00707869: mov word ptr [esi + ecx*2 + 2], di */ W16((u32)(r_esi+r_ecx*2+0x2u), (u16)r_edi);
    /* 0070786e: mov edx, dword ptr [0xa96ee0] */ r_edx = R32((u32)(0xa96ee0u));
    /* 00707874: lea esi, [ecx + 2] */ r_esi = (u32)(r_ecx+0x2u);
    /* 00707877: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 0070787a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0070787d: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00707880: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00707884: movzx edx, word ptr [ecx + 2] */ r_edx = (u32)R16((u32)(r_ecx+0x2u));
    /* 00707888: call 0x7078f1 */ r_esp -= 4; W32(r_esp, 0x70788du); f_007078f1();
    /* 0070788d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707890: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707891: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707892: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707893: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707894: ret  */ FN_RET(0x00707865); r_esp += 4; return;
}

void f_007078a0(void) /* sub_7078A0 */
{
    FN_ENTER(0x007078a0);
    /* 007078a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007078a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007078a2: movsx edx, word ptr [eax + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 007078a6: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007078a9: je 0x7078ae */ if (fZ) goto L_007078ae;
L_007078ab:; BB(0x007078ab);
    /* 007078ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007078ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007078ad: ret  */ FN_RET(0x007078a0); r_esp += 4; return;
L_007078ae:; BB(0x007078ae);
    /* 007078ae: movsx ebx, word ptr [eax + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 007078b2: mov eax, ebx */ r_eax = r_ebx;
    /* 007078b4: call 0x7078cd */ r_esp -= 4; W32(r_esp, 0x7078b9u); f_007078cd();
    /* 007078b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007078bb: je 0x7078ab */ if (fZ) goto L_007078ab;
L_007078bd:; BB(0x007078bd);
    /* 007078bd: mov word ptr [0xa96ed8], bx */ W16((u32)(0xa96ed8u), (u16)r_ebx);
    /* 007078c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007078c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007078c6: ret  */ FN_RET(0x007078a0); r_esp += 4; return;
}

void f_007078cd(void) /* sub_7078CD */
{
    FN_ENTER(0x007078cd);
    /* 007078cd: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 007078d0: cmp eax, 0x7f */ {  u32 a = r_eax; u32 b = 0x7fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007078d3: jl 0x7078e2 */ if ((fS!=fO)) goto L_007078e2;
L_007078d5:; BB(0x007078d5);
    /* 007078d5: cmp eax, 0x138 */ {  u32 a = r_eax; u32 b = 0x138u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007078da: jg 0x7078e2 */ if ((!fZ&&fS==fO)) goto L_007078e2;
L_007078dc:; BB(0x007078dc);
    /* 007078dc: mov eax, 1 */ r_eax = 0x1u;
    /* 007078e1: ret  */ FN_RET(0x007078cd); r_esp += 4; return;
L_007078e2:; BB(0x007078e2);
    /* 007078e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007078e4: ret  */ FN_RET(0x007078cd); r_esp += 4; return;
}

void f_007078f1(void) /* sub_7078F1 */
{
    FN_ENTER(0x007078f1);
    /* 007078f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007078f2: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007078f5: mov ebx, edx */ r_ebx = r_edx;
    /* 007078f7: mov edx, dword ptr [0xa96eec] */ r_edx = R32((u32)(0xa96eecu));
    /* 007078fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007078ff: call 0x70717d */ r_esp -= 4; W32(r_esp, 0x707904u); f_0070717d();
    /* 00707904: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00707906: push dword ptr [0xa96eec] */ { u32 v = R32((u32)(0xa96eecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0070790c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0070790d: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x707912u); f_007184f8();
    /* 00707912: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707915: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707916: ret  */ FN_RET(0x007078f1); r_esp += 4; return;
}

void f_00707918(void) /* sub_707918 */
{
    FN_ENTER(0x00707918);
    /* 00707918: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0070791c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00707920: fld dword ptr [0x96e520] */ FPUSH(R_F32((u32)(0x96e520u)));
    /* 00707926: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00707929: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0070792b: fld dword ptr [0x96e524] */ FPUSH(R_F32((u32)(0x96e524u)));
    /* 00707931: fld dword ptr [0x96e520] */ FPUSH(R_F32((u32)(0x96e520u)));
    /* 00707937: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00707939: fld dword ptr [0x96e524] */ FPUSH(R_F32((u32)(0x96e524u)));
    /* 0070793f: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00707941: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 00707944: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00707946: fld dword ptr [eax + 0x48] */ FPUSH(R_F32((u32)(r_eax+0x48u)));
    /* 00707949: fsubr st(3), st(0) */ ST(3) = ST(0) - ST(3);
    /* 0070794b: fld dword ptr [eax + 0x4c] */ FPUSH(R_F32((u32)(r_eax+0x4cu)));
    /* 0070794e: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00707950: fst dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0));
    /* 00707953: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00707955: fst dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0));
    /* 00707958: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0070795a: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0070795d: fld dword ptr [0x96e520] */ FPUSH(R_F32((u32)(0x96e520u)));
    /* 00707963: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00707965: fstp dword ptr [edx + 0x3c] */ W_F32((u32)(r_edx+0x3cu), ST(0)); FPOP();
    /* 00707968: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0070796a: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 0070796d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0070796f: fsubr st(5) */ ST(0) = ST(5) - ST(0);
    /* 00707971: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00707974: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707976: fsubr st(3) */ ST(0) = ST(3) - ST(0);
    /* 00707978: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0070797a: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 0070797d: fld dword ptr [0x96e524] */ FPUSH(R_F32((u32)(0x96e524u)));
    /* 00707983: fsubr st(2) */ ST(0) = ST(2) - ST(0);
    /* 00707985: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00707987: fstp dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0)); FPOP();
    /* 0070798a: fld dword ptr [0x96ea18] */ FPUSH(R_F32((u32)(0x96ea18u)));
    /* 00707990: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00707992: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00707994: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00707996: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707998: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 0070799b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0070799d: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 007079a0: ret  */ FN_RET(0x00707918); r_esp += 4; return;
}

void f_007079a4(void) /* sub_7079A4 */
{
    FN_ENTER(0x007079a4);
    /* 007079a4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007079a8: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007079aa: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007079ad: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 007079b0: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 007079b2: ret  */ FN_RET(0x007079a4); r_esp += 4; return;
}

void f_007079b4(void) /* sub_7079B4 */
{
    FN_ENTER(0x007079b4);
    /* 007079b4: fld dword ptr [0x96ea10] */ FPUSH(R_F32((u32)(0x96ea10u)));
    /* 007079ba: fmul dword ptr [esp + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x8u));
    /* 007079be: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 007079c2: fdivr dword ptr [0x96ea14] */ ST(0) = R_F32((u32)(0x96ea14u)) / ST(0);
    /* 007079c8: ret  */ FN_RET(0x007079b4); r_esp += 4; return;
}

void f_007079cc(void) /* sub_7079CC */
{
    FN_ENTER(0x007079cc);
    /* 007079cc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007079d0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007079d4: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007079d7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007079d9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007079db: mov ecx, dword ptr [eax*8 + 0xa96b80] */ r_ecx = R32((u32)(r_eax*8+0xa96b80u));
    /* 007079e2: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 007079e5: mov ecx, dword ptr [eax*8 + 0xa96b84] */ r_ecx = R32((u32)(r_eax*8+0xa96b84u));
    /* 007079ec: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 007079ef: mov ecx, dword ptr [eax*8 + 0xa96b88] */ r_ecx = R32((u32)(r_eax*8+0xa96b88u));
    /* 007079f6: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 007079f9: mov ecx, dword ptr [eax*8 + 0xa96b8c] */ r_ecx = R32((u32)(r_eax*8+0xa96b8cu));
    /* 00707a00: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00707a03: mov ecx, dword ptr [eax*8 + 0xa96b90] */ r_ecx = R32((u32)(r_eax*8+0xa96b90u));
    /* 00707a0a: mov dword ptr [edx + 0x3c], ecx */ W32((u32)(r_edx+0x3cu), r_ecx);
    /* 00707a0d: mov ecx, dword ptr [eax*8 + 0xa96b94] */ r_ecx = R32((u32)(r_eax*8+0xa96b94u));
    /* 00707a14: mov dword ptr [edx + 0x40], ecx */ W32((u32)(r_edx+0x40u), r_ecx);
    /* 00707a17: mov ecx, dword ptr [eax*8 + 0xa96b98] */ r_ecx = R32((u32)(r_eax*8+0xa96b98u));
    /* 00707a1e: mov dword ptr [edx + 0x54], ecx */ W32((u32)(r_edx+0x54u), r_ecx);
    /* 00707a21: mov ecx, dword ptr [eax*8 + 0xa96b9c] */ r_ecx = R32((u32)(r_eax*8+0xa96b9cu));
    /* 00707a28: mov dword ptr [edx + 0x58], ecx */ W32((u32)(r_edx+0x58u), r_ecx);
    /* 00707a2b: mov ecx, dword ptr [eax*8 + 0xa96ba0] */ r_ecx = R32((u32)(r_eax*8+0xa96ba0u));
    /* 00707a32: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 00707a35: mov ecx, dword ptr [eax*8 + 0xa96ba4] */ r_ecx = R32((u32)(r_eax*8+0xa96ba4u));
    /* 00707a3c: mov dword ptr [edx + 0x70], ecx */ W32((u32)(r_edx+0x70u), r_ecx);
    /* 00707a3f: mov ecx, dword ptr [eax*8 + 0xa96ba8] */ r_ecx = R32((u32)(r_eax*8+0xa96ba8u));
    /* 00707a46: mov dword ptr [edx + 0x84], ecx */ W32((u32)(r_edx+0x84u), r_ecx);
    /* 00707a4c: mov ecx, dword ptr [eax*8 + 0xa96bac] */ r_ecx = R32((u32)(r_eax*8+0xa96bacu));
    /* 00707a53: mov dword ptr [edx + 0x88], ecx */ W32((u32)(r_edx+0x88u), r_ecx);
    /* 00707a59: mov ecx, dword ptr [eax*8 + 0xa96bb0] */ r_ecx = R32((u32)(r_eax*8+0xa96bb0u));
    /* 00707a60: mov dword ptr [edx + 0x9c], ecx */ W32((u32)(r_edx+0x9cu), r_ecx);
    /* 00707a66: mov ecx, dword ptr [eax*8 + 0xa96bb4] */ r_ecx = R32((u32)(r_eax*8+0xa96bb4u));
    /* 00707a6d: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 00707a73: mov ecx, dword ptr [eax*8 + 0xa96bb8] */ r_ecx = R32((u32)(r_eax*8+0xa96bb8u));
    /* 00707a7a: mov dword ptr [edx + 0xb4], ecx */ W32((u32)(r_edx+0xb4u), r_ecx);
    /* 00707a80: mov eax, dword ptr [eax*8 + 0xa96bbc] */ r_eax = R32((u32)(r_eax*8+0xa96bbcu));
    /* 00707a87: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 00707a8d: ret  */ FN_RET(0x007079cc); r_esp += 4; return;
}

void f_00707a90(void) /* sub_707A90 */
{
    FN_ENTER(0x00707a90);
    /* 00707a90: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 00707a94: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00707a98: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00707a9b: fmul dword ptr [0x96ea0c] */ ST(0) = ST(0) * R_F32((u32)(0x96ea0cu));
    /* 00707aa1: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00707aa5: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 00707aab: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 00707aae: fld dword ptr [eax + 0x2c] */ FPUSH(R_F32((u32)(r_eax+0x2cu)));
    /* 00707ab1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707ab3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00707ab5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707ab7: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00707ab9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707abb: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00707abd: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00707ac0: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00707ac2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707ac4: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00707ac6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707ac8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00707aca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707acc: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00707acf: fst dword ptr [edx + 0x34] */ W_F32((u32)(r_edx+0x34u), ST(0));
    /* 00707ad2: fst dword ptr [edx + 0x64] */ W_F32((u32)(r_edx+0x64u), ST(0));
    /* 00707ad5: fst dword ptr [edx + 0x94] */ W_F32((u32)(r_edx+0x94u), ST(0));
    /* 00707adb: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00707add: fst dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0));
    /* 00707ae0: fst dword ptr [edx + 0x4c] */ W_F32((u32)(r_edx+0x4cu), ST(0));
    /* 00707ae3: fst dword ptr [edx + 0x7c] */ W_F32((u32)(r_edx+0x7cu), ST(0));
    /* 00707ae6: fstp dword ptr [edx + 0xac] */ W_F32((u32)(r_edx+0xacu), ST(0)); FPOP();
    /* 00707aec: ret  */ FN_RET(0x00707a90); r_esp += 4; return;
}

void f_00707af0(void) /* sub_707AF0 */
{
    FN_ENTER(0x00707af0);
    /* 00707af0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00707af1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00707af2: sub esp, 0xcc */ {  u32 a = r_esp; u32 b = 0xccu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00707af8: mov edx, dword ptr [esp + 0xd8] */ r_edx = R32((u32)(r_esp+0xd8u));
    /* 00707aff: mov ebx, dword ptr [esp + 0xdc] */ r_ebx = R32((u32)(r_esp+0xdcu));
    /* 00707b06: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00707b0c: fld dword ptr [0x96ea04] */ FPUSH(R_F32((u32)(0x96ea04u)));
    /* 00707b12: fmul dword ptr [esp + 0xe4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0xe4u));
    /* 00707b19: fadd dword ptr [edx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x54u));
    /* 00707b1c: fdivr dword ptr [0x96ea08] */ ST(0) = R_F32((u32)(0x96ea08u)) / ST(0);
    /* 00707b22: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00707b24: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00707b27: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00707b2a: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00707b2c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00707b30: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00707b34: mov dword ptr [esp + 8], 0xffffffff */ W32((u32)(r_esp+0x8u), 0xffffffffu);
    /* 00707b3c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00707b3f: call 0x6ffdd4 */ r_esp -= 4; W32(r_esp, 0x707b44u); f_006ffdd4();
    /* 00707b44: mov edx, dword ptr [esp + 0xe0] */ r_edx = R32((u32)(r_esp+0xe0u));
    /* 00707b4b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00707b4e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00707b50: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00707b52: mov eax, ebx */ r_eax = r_ebx;
    /* 00707b54: mov edx, dword ptr [ecx*8 + 0xa96b80] */ r_edx = R32((u32)(r_ecx*8+0xa96b80u));
    /* 00707b5b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00707b5f: mov edx, dword ptr [ecx*8 + 0xa96b84] */ r_edx = R32((u32)(r_ecx*8+0xa96b84u));
    /* 00707b66: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00707b6a: mov edx, dword ptr [ecx*8 + 0xa96b88] */ r_edx = R32((u32)(r_ecx*8+0xa96b88u));
    /* 00707b71: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 00707b75: mov edx, dword ptr [ecx*8 + 0xa96b8c] */ r_edx = R32((u32)(r_ecx*8+0xa96b8cu));
    /* 00707b7c: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 00707b80: mov edx, dword ptr [ecx*8 + 0xa96b90] */ r_edx = R32((u32)(r_ecx*8+0xa96b90u));
    /* 00707b87: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00707b8b: mov edx, dword ptr [ecx*8 + 0xa96b94] */ r_edx = R32((u32)(r_ecx*8+0xa96b94u));
    /* 00707b92: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00707b96: mov edx, dword ptr [ecx*8 + 0xa96b98] */ r_edx = R32((u32)(r_ecx*8+0xa96b98u));
    /* 00707b9d: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 00707ba1: mov edx, dword ptr [ecx*8 + 0xa96b9c] */ r_edx = R32((u32)(r_ecx*8+0xa96b9cu));
    /* 00707ba8: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00707bac: mov edx, dword ptr [ecx*8 + 0xa96ba0] */ r_edx = R32((u32)(r_ecx*8+0xa96ba0u));
    /* 00707bb3: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 00707bb7: mov edx, dword ptr [ecx*8 + 0xa96ba4] */ r_edx = R32((u32)(r_ecx*8+0xa96ba4u));
    /* 00707bbe: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00707bc2: mov edx, dword ptr [ecx*8 + 0xa96ba8] */ r_edx = R32((u32)(r_ecx*8+0xa96ba8u));
    /* 00707bc9: mov dword ptr [esp + 0x90], edx */ W32((u32)(r_esp+0x90u), r_edx);
    /* 00707bd0: mov edx, dword ptr [ecx*8 + 0xa96bac] */ r_edx = R32((u32)(r_ecx*8+0xa96bacu));
    /* 00707bd7: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 00707bde: mov edx, dword ptr [ecx*8 + 0xa96bb0] */ r_edx = R32((u32)(r_ecx*8+0xa96bb0u));
    /* 00707be5: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 00707bec: mov edx, dword ptr [ecx*8 + 0xa96bb4] */ r_edx = R32((u32)(r_ecx*8+0xa96bb4u));
    /* 00707bf3: mov dword ptr [esp + 0xac], edx */ W32((u32)(r_esp+0xacu), r_edx);
    /* 00707bfa: mov edx, dword ptr [ecx*8 + 0xa96bb8] */ r_edx = R32((u32)(r_ecx*8+0xa96bb8u));
    /* 00707c01: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
    /* 00707c08: mov edx, dword ptr [ecx*8 + 0xa96bbc] */ r_edx = R32((u32)(r_ecx*8+0xa96bbcu));
    /* 00707c0f: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 00707c16: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00707c1a: call 0x707c9c */ r_esp -= 4; W32(r_esp, 0x707c1fu); f_00707c9c();
    /* 00707c1f: fld dword ptr [0x96e4ac] */ FPUSH(R_F32((u32)(0x96e4acu)));
    /* 00707c25: fld dword ptr [0x96e9fc] */ FPUSH(R_F32((u32)(0x96e9fcu)));
    /* 00707c2b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00707c2f: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 00707c32: fmul dword ptr [0x96ea00] */ ST(0) = ST(0) * R_F32((u32)(0x96ea00u));
    /* 00707c38: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 00707c3b: fld dword ptr [ebx + 0x2c] */ FPUSH(R_F32((u32)(r_ebx+0x2cu)));
    /* 00707c3e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00707c40: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00707c42: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707c44: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00707c46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707c48: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00707c4a: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00707c4d: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00707c4f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00707c51: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00707c53: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00707c55: fst dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0));
    /* 00707c59: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 00707c5d: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 00707c61: fst dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0));
    /* 00707c68: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00707c6a: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00707c6e: fst dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0));
    /* 00707c72: fst dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0));
    /* 00707c79: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 00707c80: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00707c82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00707c83: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00707c85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00707c86: call 0x82b158 */ r_esp -= 4; W32(r_esp, 0x707c8bu); f_0082b158();
    /* 00707c8b: add esp, 0xdc */ {  u32 a = r_esp; u32 b = 0xdcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707c91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707c92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707c93: ret  */ FN_RET(0x00707af0); r_esp += 4; return;
}

void f_00707c94(void) /* sub_707C94 */
{
    FN_ENTER(0x00707c94);
    /* 00707c94: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00707c98: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00707c9c: fld dword ptr [0x96e4a8] */ FPUSH(R_F32((u32)(0x96e4a8u)));
    /* 00707ca2: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00707ca5: fmul dword ptr [0x96e9f8] */ ST(0) = ST(0) * R_F32((u32)(0x96e9f8u));
    /* 00707cab: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00707cae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00707cb0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00707cb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cb4: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00707cb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00707cb8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707cba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00707cbc: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00707cbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cc0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00707cc2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707cc4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00707cc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00707cc7: jae 0x707cd7 */ if (!fC) goto L_00707cd7;
L_00707cc9:; BB(0x00707cc9);
    /* 00707cc9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00707ccb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00707ccd: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00707ccf: fdiv dword ptr [0x96e9f4] */ ST(0) = ST(0) / R_F32((u32)(0x96e9f4u));
    /* 00707cd5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00707cd7:; BB(0x00707cd7);
    /* 00707cd7: fst dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0));
    /* 00707cda: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 00707cdc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cde: fst dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0));
    /* 00707ce4: fst dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0));
    /* 00707cea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cec: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00707cee: fst dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0));
    /* 00707cf1: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 00707cf4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00707cf6: fst dword ptr [edx + 0x78] */ W_F32((u32)(r_edx+0x78u), ST(0));
    /* 00707cf9: fstp dword ptr [edx + 0x60] */ W_F32((u32)(r_edx+0x60u), ST(0)); FPOP();
    /* 00707cfc: ret  */ FN_RET(0x00707c94); r_esp += 4; return;
}

void f_00707c9c(void)
{
    FN_ENTER(0x00707c9c);
    /* 00707c9c: fld dword ptr [0x96e4a8] */ FPUSH(R_F32((u32)(0x96e4a8u)));
    /* 00707ca2: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00707ca5: fmul dword ptr [0x96e9f8] */ ST(0) = ST(0) * R_F32((u32)(0x96e9f8u));
    /* 00707cab: fld dword ptr [eax + 0x28] */ FPUSH(R_F32((u32)(r_eax+0x28u)));
    /* 00707cae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00707cb0: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00707cb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cb4: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00707cb6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00707cb8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707cba: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00707cbc: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00707cbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cc0: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00707cc2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00707cc4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00707cc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00707cc7: jae 0x707cd7 */ if (!fC) goto L_00707cd7;
L_00707cc9:; BB(0x00707cc9);
    /* 00707cc9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00707ccb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00707ccd: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00707ccf: fdiv dword ptr [0x96e9f4] */ ST(0) = ST(0) / R_F32((u32)(0x96e9f4u));
    /* 00707cd5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_00707cd7:; BB(0x00707cd7);
    /* 00707cd7: fst dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0));
    /* 00707cda: fst dword ptr [edx] */ W_F32((u32)(r_edx), ST(0));
    /* 00707cdc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cde: fst dword ptr [edx + 0xa8] */ W_F32((u32)(r_edx+0xa8u), ST(0));
    /* 00707ce4: fst dword ptr [edx + 0x90] */ W_F32((u32)(r_edx+0x90u), ST(0));
    /* 00707cea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00707cec: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00707cee: fst dword ptr [edx + 0x48] */ W_F32((u32)(r_edx+0x48u), ST(0));
    /* 00707cf1: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 00707cf4: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00707cf6: fst dword ptr [edx + 0x78] */ W_F32((u32)(r_edx+0x78u), ST(0));
    /* 00707cf9: fstp dword ptr [edx + 0x60] */ W_F32((u32)(r_edx+0x60u), ST(0)); FPOP();
    /* 00707cfc: ret  */ FN_RET(0x00707c9c); r_esp += 4; return;
}

void f_00707d00(void) /* sub_707D00 */
{
    FN_ENTER(0x00707d00);
    /* 00707d00: mov dword ptr [0xa96efc], 0x3f800000 */ W32((u32)(0xa96efcu), 0x3f800000u);
    /* 00707d0a: mov dword ptr [0xa96f00], 0x41000000 */ W32((u32)(0xa96f00u), 0x41000000u);
    /* 00707d14: mov dword ptr [0xa96f04], 0x3fc00000 */ W32((u32)(0xa96f04u), 0x3fc00000u);
    /* 00707d1e: ret  */ FN_RET(0x00707d00); r_esp += 4; return;
}

void f_00707d20(void) /* sub_707D20 */
{
    FN_ENTER(0x00707d20);
    /* 00707d20: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00707d24: call 0x700f14 */ r_esp -= 4; W32(r_esp, 0x707d29u); f_00700f14();
    /* 00707d29: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00707d2d: call 0x700ef0 */ r_esp -= 4; W32(r_esp, 0x707d32u); f_00700ef0();
    /* 00707d32: ret 4 */ FN_RET(0x00707d20); r_esp += 8; return;
}

void f_00707d38(void) /* sub_707D38 */
{
    FN_ENTER(0x00707d38);
    /* 00707d38: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00707d3c: call 0x700f14 */ r_esp -= 4; W32(r_esp, 0x707d41u); f_00700f14();
    /* 00707d41: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00707d45: call 0x700ef8 */ r_esp -= 4; W32(r_esp, 0x707d4au); f_00700ef8();
    /* 00707d4a: ret 4 */ FN_RET(0x00707d38); r_esp += 8; return;
}

void f_00707d50(void) /* sub_707D50 */
{
    FN_ENTER(0x00707d50);
    /* 00707d50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707d51: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00707d55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707d56: call 0x707d38 */ r_esp -= 4; W32(r_esp, 0x707d5bu); f_00707d38();
    /* 00707d5b: mov eax, dword ptr [0x96e554] */ r_eax = R32((u32)(0x96e554u));
    /* 00707d60: mov edx, dword ptr [0xa96db4] */ r_edx = R32((u32)(0xa96db4u));
    /* 00707d66: mov ecx, dword ptr [0xa96db0] */ r_ecx = R32((u32)(0xa96db0u));
    /* 00707d6c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00707d6f: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00707d72: mov eax, dword ptr [0xa96dac] */ r_eax = R32((u32)(0xa96dacu));
    /* 00707d77: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 00707d7a: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 00707d7d: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 00707d80: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00707d83: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00707d86: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00707d89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707d8a: ret 4 */ FN_RET(0x00707d50); r_esp += 8; return;
}

void f_00707d90(void) /* sub_707D90 */
{
    FN_ENTER(0x00707d90);
    /* 00707d90: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707d91: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00707d95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707d96: call 0x707d38 */ r_esp -= 4; W32(r_esp, 0x707d9bu); f_00707d38();
    /* 00707d9b: mov eax, dword ptr [0x96e548] */ r_eax = R32((u32)(0x96e548u));
    /* 00707da0: mov edx, dword ptr [0x96e54c] */ r_edx = R32((u32)(0x96e54cu));
    /* 00707da6: mov ecx, dword ptr [0x96e550] */ r_ecx = R32((u32)(0x96e550u));
    /* 00707dac: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00707daf: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00707db2: mov eax, dword ptr [0xa96dcc] */ r_eax = R32((u32)(0xa96dccu));
    /* 00707db7: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 00707dba: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 00707dbd: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 00707dc0: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00707dc3: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00707dc6: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00707dc9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707dca: ret 4 */ FN_RET(0x00707d90); r_esp += 8; return;
}

void f_00707dd0(void) /* sub_707DD0 */
{
    FN_ENTER(0x00707dd0);
    /* 00707dd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707dd1: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00707dd5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707dd6: call 0x707438 */ r_esp -= 4; W32(r_esp, 0x707ddbu); f_00707438();
    /* 00707ddb: mov eax, dword ptr [0x96e538] */ r_eax = R32((u32)(0x96e538u));
    /* 00707de0: mov edx, dword ptr [0x96e53c] */ r_edx = R32((u32)(0x96e53cu));
    /* 00707de6: mov ecx, dword ptr [0x96e540] */ r_ecx = R32((u32)(0x96e540u));
    /* 00707dec: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00707def: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 00707df2: mov eax, dword ptr [0xa96dd0] */ r_eax = R32((u32)(0xa96dd0u));
    /* 00707df7: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 00707dfa: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 00707dfd: mov dword ptr [esi + 0x38], ecx */ W32((u32)(r_esi+0x38u), r_ecx);
    /* 00707e00: mov dword ptr [esi + 0x48], ecx */ W32((u32)(r_esi+0x48u), r_ecx);
    /* 00707e03: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 00707e06: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 00707e09: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707e0a: ret 4 */ FN_RET(0x00707dd0); r_esp += 8; return;
}

void f_00707e10(void) /* sub_707E10 */
{
    FN_ENTER(0x00707e10);
    /* 00707e10: mov edx, dword ptr [0xa96f2c] */ r_edx = R32((u32)(0xa96f2cu));
    /* 00707e16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707e18: je 0x707e51 */ if (fZ) goto L_00707e51;
L_00707e1a:; BB(0x00707e1a);
    /* 00707e1a: mov eax, dword ptr [0xa96f30] */ r_eax = R32((u32)(0xa96f30u));
    /* 00707e1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707e21: je 0x707e51 */ if (fZ) goto L_00707e51;
L_00707e23:; BB(0x00707e23);
    /* 00707e23: mov eax, dword ptr [0xa96f3c] */ r_eax = R32((u32)(0xa96f3cu));
    /* 00707e28: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00707e2b: mov ecx, dword ptr [0xa96f30] */ r_ecx = R32((u32)(0xa96f30u));
    /* 00707e31: mov edx, dword ptr [0xa96f3c] */ r_edx = R32((u32)(0xa96f3cu));
    /* 00707e37: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 00707e3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00707e3c: mov dword ptr [0xa96f2c], eax */ W32((u32)(0xa96f2cu), r_eax);
    /* 00707e41: mov dword ptr [0xa96f30], eax */ W32((u32)(0xa96f30u), r_eax);
    /* 00707e46: mov dword ptr [0xa96f34], eax */ W32((u32)(0xa96f34u), r_eax);
    /* 00707e4b: mov dword ptr [0xa96f38], eax */ W32((u32)(0xa96f38u), r_eax);
    /* 00707e50: ret  */ FN_RET(0x00707e10); r_esp += 4; return;
L_00707e51:; BB(0x00707e51);
    /* 00707e51: ret  */ FN_RET(0x00707e10); r_esp += 4; return;
}

void f_00707e54(void) /* sub_707E54 */
{
    FN_ENTER(0x00707e54);
    /* 00707e54: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00707e59: cmp ax, word ptr [0xa96f0c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(0xa96f0cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00707e60: je 0x707f3f */ if (fZ) goto L_00707f3f;
L_00707e66:; BB(0x00707e66);
    /* 00707e66: movzx edx, word ptr [0xa96f28] */ r_edx = (u32)R16((u32)(0xa96f28u));
    /* 00707e6d: movzx ecx, word ptr [0xa96f26] */ r_ecx = (u32)R16((u32)(0xa96f26u));
    /* 00707e74: mov word ptr [0xa96f2a], dx */ W16((u32)(0xa96f2au), (u16)r_edx);
    /* 00707e7b: movzx edx, word ptr [0xa96f24] */ r_edx = (u32)R16((u32)(0xa96f24u));
    /* 00707e82: mov word ptr [0xa96f28], cx */ W16((u32)(0xa96f28u), (u16)r_ecx);
    /* 00707e89: mov word ptr [0xa96f26], dx */ W16((u32)(0xa96f26u), (u16)r_edx);
    /* 00707e90: movzx edx, word ptr [0xa96f22] */ r_edx = (u32)R16((u32)(0xa96f22u));
    /* 00707e97: mov word ptr [0xa96f24], dx */ W16((u32)(0xa96f24u), (u16)r_edx);
    /* 00707e9e: movzx edx, word ptr [0xa96f20] */ r_edx = (u32)R16((u32)(0xa96f20u));
    /* 00707ea5: mov word ptr [0xa96f22], dx */ W16((u32)(0xa96f22u), (u16)r_edx);
    /* 00707eac: movzx edx, word ptr [0xa96f1e] */ r_edx = (u32)R16((u32)(0xa96f1eu));
    /* 00707eb3: mov word ptr [0xa96f20], dx */ W16((u32)(0xa96f20u), (u16)r_edx);
    /* 00707eba: movzx edx, word ptr [0xa96f1c] */ r_edx = (u32)R16((u32)(0xa96f1cu));
    /* 00707ec1: mov word ptr [0xa96f1e], dx */ W16((u32)(0xa96f1eu), (u16)r_edx);
    /* 00707ec8: movzx edx, word ptr [0xa96f1a] */ r_edx = (u32)R16((u32)(0xa96f1au));
    /* 00707ecf: mov word ptr [0xa96f1c], dx */ W16((u32)(0xa96f1cu), (u16)r_edx);
    /* 00707ed6: movzx edx, word ptr [0xa96f18] */ r_edx = (u32)R16((u32)(0xa96f18u));
    /* 00707edd: mov word ptr [0xa96f1a], dx */ W16((u32)(0xa96f1au), (u16)r_edx);
    /* 00707ee4: movzx edx, word ptr [0xa96f16] */ r_edx = (u32)R16((u32)(0xa96f16u));
    /* 00707eeb: mov word ptr [0xa96f18], dx */ W16((u32)(0xa96f18u), (u16)r_edx);
    /* 00707ef2: movzx edx, word ptr [0xa96f14] */ r_edx = (u32)R16((u32)(0xa96f14u));
    /* 00707ef9: mov word ptr [0xa96f16], dx */ W16((u32)(0xa96f16u), (u16)r_edx);
    /* 00707f00: movzx edx, word ptr [0xa96f12] */ r_edx = (u32)R16((u32)(0xa96f12u));
    /* 00707f07: mov word ptr [0xa96f14], dx */ W16((u32)(0xa96f14u), (u16)r_edx);
    /* 00707f0e: movzx edx, word ptr [0xa96f10] */ r_edx = (u32)R16((u32)(0xa96f10u));
    /* 00707f15: mov word ptr [0xa96f12], dx */ W16((u32)(0xa96f12u), (u16)r_edx);
    /* 00707f1c: movzx edx, word ptr [0xa96f0e] */ r_edx = (u32)R16((u32)(0xa96f0eu));
    /* 00707f23: mov word ptr [0xa96f10], dx */ W16((u32)(0xa96f10u), (u16)r_edx);
    /* 00707f2a: movzx edx, word ptr [0xa96f0c] */ r_edx = (u32)R16((u32)(0xa96f0cu));
    /* 00707f31: mov word ptr [0xa96f0e], dx */ W16((u32)(0xa96f0eu), (u16)r_edx);
    /* 00707f38: mov word ptr [0xa96f0c], ax */ W16((u32)(0xa96f0cu), (u16)r_eax);
    /* 00707f3e: ret  */ FN_RET(0x00707e54); r_esp += 4; return;
L_00707f3f:; BB(0x00707f3f);
    /* 00707f3f: ret  */ FN_RET(0x00707e54); r_esp += 4; return;
}

void f_00707e98(void)
{
    FN_ENTER(0x00707e98);
    /* 00707e98: mov dword ptr [0xa96f24], edx */ W32((u32)(0xa96f24u), r_edx);
    /* 00707e9e: movzx edx, word ptr [0xa96f20] */ r_edx = (u32)R16((u32)(0xa96f20u));
    /* 00707ea5: mov word ptr [0xa96f22], dx */ W16((u32)(0xa96f22u), (u16)r_edx);
    /* 00707eac: movzx edx, word ptr [0xa96f1e] */ r_edx = (u32)R16((u32)(0xa96f1eu));
    /* 00707eb3: mov word ptr [0xa96f20], dx */ W16((u32)(0xa96f20u), (u16)r_edx);
    /* 00707eba: movzx edx, word ptr [0xa96f1c] */ r_edx = (u32)R16((u32)(0xa96f1cu));
    /* 00707ec1: mov word ptr [0xa96f1e], dx */ W16((u32)(0xa96f1eu), (u16)r_edx);
    /* 00707ec8: movzx edx, word ptr [0xa96f1a] */ r_edx = (u32)R16((u32)(0xa96f1au));
    /* 00707ecf: mov word ptr [0xa96f1c], dx */ W16((u32)(0xa96f1cu), (u16)r_edx);
    /* 00707ed6: movzx edx, word ptr [0xa96f18] */ r_edx = (u32)R16((u32)(0xa96f18u));
    /* 00707edd: mov word ptr [0xa96f1a], dx */ W16((u32)(0xa96f1au), (u16)r_edx);
    /* 00707ee4: movzx edx, word ptr [0xa96f16] */ r_edx = (u32)R16((u32)(0xa96f16u));
    /* 00707eeb: mov word ptr [0xa96f18], dx */ W16((u32)(0xa96f18u), (u16)r_edx);
    /* 00707ef2: movzx edx, word ptr [0xa96f14] */ r_edx = (u32)R16((u32)(0xa96f14u));
    /* 00707ef9: mov word ptr [0xa96f16], dx */ W16((u32)(0xa96f16u), (u16)r_edx);
    /* 00707f00: movzx edx, word ptr [0xa96f12] */ r_edx = (u32)R16((u32)(0xa96f12u));
    /* 00707f07: mov word ptr [0xa96f14], dx */ W16((u32)(0xa96f14u), (u16)r_edx);
    /* 00707f0e: movzx edx, word ptr [0xa96f10] */ r_edx = (u32)R16((u32)(0xa96f10u));
    /* 00707f15: mov word ptr [0xa96f12], dx */ W16((u32)(0xa96f12u), (u16)r_edx);
    /* 00707f1c: movzx edx, word ptr [0xa96f0e] */ r_edx = (u32)R16((u32)(0xa96f0eu));
    /* 00707f23: mov word ptr [0xa96f10], dx */ W16((u32)(0xa96f10u), (u16)r_edx);
    /* 00707f2a: movzx edx, word ptr [0xa96f0c] */ r_edx = (u32)R16((u32)(0xa96f0cu));
    /* 00707f31: mov word ptr [0xa96f0e], dx */ W16((u32)(0xa96f0eu), (u16)r_edx);
    /* 00707f38: mov word ptr [0xa96f0c], ax */ W16((u32)(0xa96f0cu), (u16)r_eax);
    /* 00707f3e: ret  */ FN_RET(0x00707e98); r_esp += 4; return;
}

void f_00707f40(void) /* sub_707F40 */
{
    FN_ENTER(0x00707f40);
    /* 00707f40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707f41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00707f42: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00707f43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00707f44: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00707f48: movzx edx, byte ptr [0xa96f08] */ r_edx = (u32)R8((u32)(0xa96f08u));
    /* 00707f4f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00707f52: jne 0x707f90 */ if (!fZ) goto L_00707f90;
L_00707f54:; BB(0x00707f54);
    /* 00707f54: mov ecx, dword ptr [0x96ea84] */ r_ecx = R32((u32)(0x96ea84u));
    /* 00707f5a: mov dword ptr [0x9d06a4], ecx */ W32((u32)(0x9d06a4u), r_ecx);
    /* 00707f60: mov ecx, dword ptr [0x96ea88] */ r_ecx = R32((u32)(0x96ea88u));
    /* 00707f66: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00707f6c: mov dword ptr [0x9d06b0], ecx */ W32((u32)(0x9d06b0u), r_ecx);
    /* 00707f72: mov ecx, dword ptr [0x96ea8c] */ r_ecx = R32((u32)(0x96ea8cu));
    /* 00707f78: mov dword ptr [0x9d06bc], ecx */ W32((u32)(0x9d06bcu), r_ecx);
    /* 00707f7e: mov ecx, dword ptr [0x96ea90] */ r_ecx = R32((u32)(0x96ea90u));
    /* 00707f84: mov dword ptr [0x9d06c8], ecx */ W32((u32)(0x9d06c8u), r_ecx);
    /* 00707f8a: mov byte ptr [0xa96f08], dl */ W8((u32)(0xa96f08u), (u8)r_edx);
L_00707f90:; BB(0x00707f90);
    /* 00707f90: mov ecx, 5 */ r_ecx = 0x5u;
    /* 00707f95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00707f97:; BB(0x00707f97);
    /* 00707f97: mov esi, dword ptr [edx + 0x9d06a0] */ r_esi = R32((u32)(r_edx+0x9d06a0u));
    /* 00707f9d: mov ebp, dword ptr [edx + 0x9d06a4] */ r_ebp = R32((u32)(r_edx+0x9d06a4u));
    /* 00707fa3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00707fa5: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00707fa8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00707faa: jle 0x707fc1 */ if ((fZ||fS!=fO)) goto L_00707fc1;
L_00707fac:; BB(0x00707fac);
    /* 00707fac: mov edi, dword ptr [esi + ebx*4] */ r_edi = R32((u32)(r_esi+r_ebx*4));
    /* 00707faf: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00707fb2: cmp edi, dword ptr [esp + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707fb6: je 0x707fef */ if (fZ) goto L_00707fef;
L_00707fb8:; BB(0x00707fb8);
    /* 00707fb8: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00707fba: jl 0x707fac */ if ((fS!=fO)) goto L_00707fac;
L_00707fbc:; BB(0x00707fbc);
    /* 00707fbc: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707fbf: jne 0x707fc8 */ if (!fZ) goto L_00707fc8;
L_00707fc1:; BB(0x00707fc1);
    /* 00707fc1: cmp edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00707fc4: jl 0x707f97 */ if ((fS!=fO)) goto L_00707f97;
L_00707fc6:; BB(0x00707fc6);
    /* 00707fc6: jmp 0x707fcd */ goto L_00707fcd;
L_00707fc8:; BB(0x00707fc8);
    /* 00707fc8: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707fcb: je 0x707fde */ if (fZ) goto L_00707fde;
L_00707fcd:; BB(0x00707fcd);
    /* 00707fcd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00707fd0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00707fd2: mov eax, dword ptr [edx + ecx*8 + 0x96ea38] */ r_eax = R32((u32)(r_edx+r_ecx*8+0x96ea38u));
    /* 00707fd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00707fda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00707fdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00707fdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00707fdd: ret  */ FN_RET(0x00707f40); r_esp += 4; return;
L_00707fde:; BB(0x00707fde);
    /* 00707fde: mov edx, dword ptr [0xa96ef4] */ r_edx = R32((u32)(0xa96ef4u));
    /* 00707fe4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00707fe6: jne 0x707fcd */ if (!fZ) goto L_00707fcd;
L_00707fe8:; BB(0x00707fe8);
    /* 00707fe8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00707fed: jmp 0x707fcd */ goto L_00707fcd;
L_00707fef:; BB(0x00707fef);
    /* 00707fef: mov ecx, dword ptr [edx + 0x9d069c] */ r_ecx = R32((u32)(r_edx+0x9d069cu));
    /* 00707ff5: jmp 0x707fbc */ goto L_00707fbc;
}

void f_00707ff8(void) /* sub_707FF8 */
{
    FN_ENTER(0x00707ff8);
    /* 00707ff8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00707ff9: mov edx, dword ptr [0xa96ed0] */ r_edx = R32((u32)(0xa96ed0u));
    /* 00707fff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00708001: je 0x7080c4 */ if (fZ) goto L_007080c4;
L_00708007:; BB(0x00708007);
    /* 00708007: mov eax, dword ptr [0xa96ecc] */ r_eax = R32((u32)(0xa96eccu));
    /* 0070800c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0070800e: je 0x7080c4 */ if (fZ) goto L_007080c4;
L_00708014:; BB(0x00708014);
    /* 00708014: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00708019: mov word ptr [0xa96f0c], cx */ W16((u32)(0xa96f0cu), (u16)r_ecx);
    /* 00708020: mov word ptr [0xa96f0e], cx */ W16((u32)(0xa96f0eu), (u16)r_ecx);
    /* 00708027: mov word ptr [0xa96f10], cx */ W16((u32)(0xa96f10u), (u16)r_ecx);
    /* 0070802e: mov word ptr [0xa96f12], cx */ W16((u32)(0xa96f12u), (u16)r_ecx);
    /* 00708035: mov word ptr [0xa96f14], cx */ W16((u32)(0xa96f14u), (u16)r_ecx);
    /* 0070803c: mov word ptr [0xa96f16], cx */ W16((u32)(0xa96f16u), (u16)r_ecx);
    /* 00708043: mov word ptr [0xa96f18], cx */ W16((u32)(0xa96f18u), (u16)r_ecx);
    /* 0070804a: mov word ptr [0xa96f1a], cx */ W16((u32)(0xa96f1au), (u16)r_ecx);
    /* 00708051: mov word ptr [0xa96f1c], cx */ W16((u32)(0xa96f1cu), (u16)r_ecx);
    /* 00708058: mov word ptr [0xa96f1e], cx */ W16((u32)(0xa96f1eu), (u16)r_ecx);
    /* 0070805f: mov word ptr [0xa96f20], cx */ W16((u32)(0xa96f20u), (u16)r_ecx);
    /* 00708066: mov word ptr [0xa96f22], cx */ W16((u32)(0xa96f22u), (u16)r_ecx);
    /* 0070806d: mov word ptr [0xa96f24], cx */ W16((u32)(0xa96f24u), (u16)r_ecx);
    /* 00708074: mov word ptr [0xa96f26], cx */ W16((u32)(0xa96f26u), (u16)r_ecx);
    /* 0070807b: mov word ptr [0xa96f28], cx */ W16((u32)(0xa96f28u), (u16)r_ecx);
    /* 00708082: mov word ptr [0xa96f2a], cx */ W16((u32)(0xa96f2au), (u16)r_ecx);
    /* 00708089: mov dword ptr [0xa96f2c], edx */ W32((u32)(0xa96f2cu), r_edx);
    /* 0070808f: mov dword ptr [0xa96f30], eax */ W32((u32)(0xa96f30u), r_eax);
    /* 00708094: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00708096: mov dword ptr [0xa96f34], ecx */ W32((u32)(0xa96f34u), r_ecx);
    /* 0070809c: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0070809e: mov dword ptr [0xa96f38], edi */ W32((u32)(0xa96f38u), r_edi);
    /* 007080a4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007080a6: je 0x7080c4 */ if (fZ) goto L_007080c4;
L_007080a8:; BB(0x007080a8);
    /* 007080a8: mov ecx, dword ptr [0xa96f38] */ r_ecx = R32((u32)(0xa96f38u));
    /* 007080ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007080b0: je 0x7080c4 */ if (fZ) goto L_007080c4;
L_007080b2:; BB(0x007080b2);
    /* 007080b2: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 007080b5: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007080b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007080ba: jle 0x7080c4 */ if ((fZ||fS!=fO)) goto L_007080c4;
L_007080bc:; BB(0x007080bc);
    /* 007080bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007080be: jle 0x7080c4 */ if ((fZ||fS!=fO)) goto L_007080c4;
L_007080c0:; BB(0x007080c0);
    /* 007080c0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007080c2: je 0x7080c6 */ if (fZ) goto L_007080c6;
L_007080c4:; BB(0x007080c4);
    /* 007080c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007080c5: ret  */ FN_RET(0x00707ff8); r_esp += 4; return;
L_007080c6:; BB(0x007080c6);
    /* 007080c6: mov dword ptr [0xa96f3c], edx */ W32((u32)(0xa96f3cu), r_edx);
    /* 007080cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007080cd: ret  */ FN_RET(0x00707ff8); r_esp += 4; return;
}

