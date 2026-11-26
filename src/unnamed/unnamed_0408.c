#include "protos.h"

void f_00408000(void)
{
    FN_ENTER(0x00408000);
    /* 00408000: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00408002: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00408005: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00408008: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0040800c: mov ecx, 0x8f000000 */ r_ecx = 0x8f000000u;
    /* 00408011: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00408015: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 00408018: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0040801c: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 0040801e: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00408021: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00408024: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00408027: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0040802b: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 0040802e: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00408032: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00408035: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00408039: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0040803b: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 0040803d: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00408040: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00408044: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00408047: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 0040804a: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 0040804d: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00408051: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00408054: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 00408056: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00408058: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0040805c: fstp dword ptr [ebx + 0x18] */ W_F32((u32)(r_ebx+0x18u), ST(0)); FPOP();
    /* 0040805f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00408063: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00408066: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00408069: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 0040806d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00408070: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00408074: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00408076: push 0xc2f00000 */ { u32 v = 0xc2f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040807b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040807c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040807d: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x408082u); f_0082b5d8();
    /* 00408082: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408085: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408086: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408087: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00408088: ret  */ FN_RET(0x00408000); r_esp += 4; return;
}

void f_0040808c(void) /* sub_40808C */
{
    FN_ENTER(0x0040808c);
    /* 0040808c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040808f: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00408092: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408094: je 0x4080a5 */ if (fZ) goto L_004080a5;
L_00408096:; BB(0x00408096);
    /* 00408096: mov eax, 0x8f8eb4 */ r_eax = 0x8f8eb4u;
    /* 0040809b: mov edx, 0x8f8ebc */ r_edx = 0x8f8ebcu;
    /* 004080a0: call 0x407fd8 */ r_esp -= 4; W32(r_esp, 0x4080a5u); f_00407fd8();
L_004080a5:; BB(0x004080a5);
    /* 004080a5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004080a8: ret  */ FN_RET(0x0040808c); r_esp += 4; return;
}

void f_004080ac(void) /* sub_4080AC */
{
    FN_ENTER(0x004080ac);
    /* 004080ac: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 004080af: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004080b2: ja 0x4081e3 */ if ((!fC&&!fZ)) goto L_004081e3;
L_004080b8:; BB(0x004080b8);
    /* 004080b8: mov eax, dword ptr [eax*4 + 0x8f8ec4] */ r_eax = R32((u32)(r_eax*4+0x8f8ec4u));
    /* 004080bf: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004081e3:; BB(0x004081e3);
    /* 004081e3: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 004081e5: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004081e7: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4081ecu); f_00792fe8();
    /* 004081ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004081ed: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081f2: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081f7: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x4081fcu); f_007ab534();
    /* 004081fc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004081ff: ret  */ FN_RET(0x004080ac); r_esp += 4; return;
}

void f_004080c1(void)
{
    FN_ENTER(0x004080c1);
    /* 004080c1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 004080c3: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004080c5: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4080cau); f_00792fe8();
    /* 004080ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004080cb: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 004080d0: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004080d5: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x4080dau); f_007ab534();
    /* 004080da: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004080dd: ret  */ FN_RET(0x004080c1); r_esp += 4; return;
}

void f_004080de(void)
{
    FN_ENTER(0x004080de);
    /* 004080de: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 004080e0: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004080e2: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4080e7u); f_00792fe8();
    /* 004080e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004080e8: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 004080ed: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004080f2: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x4080f7u); f_007ab534();
    /* 004080f7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004080fa: ret  */ FN_RET(0x004080de); r_esp += 4; return;
}

void f_004080fb(void)
{
    FN_ENTER(0x004080fb);
    /* 004080fb: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 004080fd: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004080ff: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x408104u); f_00792fe8();
    /* 00408104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408105: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040810a: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040810f: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x408114u); f_007ab534();
    /* 00408114: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408117: ret  */ FN_RET(0x004080fb); r_esp += 4; return;
}

void f_00408118(void)
{
    FN_ENTER(0x00408118);
    /* 00408118: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0040811a: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0040811c: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x408121u); f_00792fe8();
    /* 00408121: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408122: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408127: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040812c: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x408131u); f_007ab534();
    /* 00408131: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408134: ret  */ FN_RET(0x00408118); r_esp += 4; return;
}

void f_00408135(void)
{
    FN_ENTER(0x00408135);
    /* 00408135: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00408137: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00408139: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40813eu); f_00792fe8();
    /* 0040813e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040813f: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408144: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408149: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x40814eu); f_007ab534();
    /* 0040814e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408151: ret  */ FN_RET(0x00408135); r_esp += 4; return;
}

void f_00408152(void)
{
    FN_ENTER(0x00408152);
    /* 00408152: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00408154: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00408156: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x40815bu); f_00792fe8();
    /* 0040815b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040815c: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408161: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408166: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x40816bu); f_007ab534();
    /* 0040816b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040816e: ret  */ FN_RET(0x00408152); r_esp += 4; return;
}

void f_0040816f(void)
{
    FN_ENTER(0x0040816f);
    /* 0040816f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00408171: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00408173: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x408178u); f_00792fe8();
    /* 00408178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408179: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040817e: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408183: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x408188u); f_007ab534();
    /* 00408188: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040818b: ret  */ FN_RET(0x0040816f); r_esp += 4; return;
}

void f_0040818c(void)
{
    FN_ENTER(0x0040818c);
    /* 0040818c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0040818e: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 00408190: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x408195u); f_00792fe8();
    /* 00408195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408196: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040819b: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081a0: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x4081a5u); f_007ab534();
    /* 004081a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004081a8: ret  */ FN_RET(0x0040818c); r_esp += 4; return;
}

void f_004081a9(void)
{
    FN_ENTER(0x004081a9);
    /* 004081a9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004081ab: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004081ad: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4081b2u); f_00792fe8();
    /* 004081b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004081b3: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081b8: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081bd: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x4081c2u); f_007ab534();
    /* 004081c2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004081c5: ret  */ FN_RET(0x004081a9); r_esp += 4; return;
}

void f_004081c6(void)
{
    FN_ENTER(0x004081c6);
    /* 004081c6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004081c8: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 004081ca: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x4081cfu); f_00792fe8();
    /* 004081cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004081d0: push 0x43a58000 */ { u32 v = 0x43a58000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081d5: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004081da: call 0x7ab534 */ r_esp -= 4; W32(r_esp, 0x4081dfu); f_007ab534();
    /* 004081df: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004081e2: ret  */ FN_RET(0x004081c6); r_esp += 4; return;
}

void f_004081ff(void)
{
    FN_ENTER(0x004081ff);
    /* 004081ff: ret  */ FN_RET(0x004081ff); r_esp += 4; return;
}

void f_00408200(void) /* sub_408200 */
{
    FN_ENTER(0x00408200);
    /* 00408200: mov edx, dword ptr [0xa3ad08] */ r_edx = R32((u32)(0xa3ad08u));
    /* 00408206: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408208: je 0x408218 */ if (fZ) goto L_00408218;
L_0040820a:; BB(0x0040820a);
    /* 0040820a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040820e: mov dword ptr [edx + 0x1c], 2 */ W32((u32)(r_edx+0x1cu), 0x2u);
    /* 00408215: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_00408218:; BB(0x00408218);
    /* 00408218: ret  */ FN_RET(0x00408200); r_esp += 4; return;
}

void f_0040821c(void) /* sub_40821C */
{
    FN_ENTER(0x0040821c);
    /* 0040821c: mov eax, dword ptr [0xa3ad04] */ r_eax = R32((u32)(0xa3ad04u));
    /* 00408221: ret  */ FN_RET(0x0040821c); r_esp += 4; return;
}

void f_00408224(void) /* sub_408224 */
{
    FN_ENTER(0x00408224);
    /* 00408224: mov dword ptr [0xa3acf8], 0x3f800000 */ W32((u32)(0xa3acf8u), 0x3f800000u);
    /* 0040822e: mov dword ptr [0xa3acfc], 0x41000000 */ W32((u32)(0xa3acfcu), 0x41000000u);
    /* 00408238: mov dword ptr [0xa3ad00], 0x3fc00000 */ W32((u32)(0xa3ad00u), 0x3fc00000u);
    /* 00408242: ret  */ FN_RET(0x00408224); r_esp += 4; return;
}

void f_00408244(void) /* sub_408244 */
{
    FN_ENTER(0x00408244);
    /* 00408244: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00408246: mov dword ptr [0xa3ad08], eax */ W32((u32)(0xa3ad08u), r_eax);
    /* 0040824b: mov dword ptr [0xa3ad04], eax */ W32((u32)(0xa3ad04u), r_eax);
    /* 00408250: call 0x41560c */ r_esp -= 4; W32(r_esp, 0x408255u); f_0041560c();
    /* 00408255: call 0x415a28 */ r_esp -= 4; W32(r_esp, 0x40825au); f_00415a28();
    /* 0040825a: ret  */ FN_RET(0x00408244); r_esp += 4; return;
}

void f_0040825c(void) /* sub_40825C */
{
    FN_ENTER(0x0040825c);
    /* 0040825c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0040825d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040825f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00408261: call 0x408280 */ r_esp -= 4; W32(r_esp, 0x408266u); f_00408280();
    /* 00408266: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0040826a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040826c: jne 0x408272 */ if (!fZ) goto L_00408272;
L_0040826e:; BB(0x0040826e);
    /* 0040826e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040826f: ret 4 */ FN_RET(0x0040825c); r_esp += 8; return;
L_00408272:; BB(0x00408272);
    /* 00408272: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408273: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x408278u); f_005c2f74();
    /* 00408278: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00408279: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040827a: ret 4 */ FN_RET(0x0040825c); r_esp += 8; return;
}

void f_00408280(void) /* sub_408280 */
{
    FN_ENTER(0x00408280);
    /* 00408280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408281: mov ebp, esp */ r_ebp = r_esp;
    /* 00408283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408285: push 0x8cc350 */ { u32 v = 0x8cc350u; r_esp -= 4; W32(r_esp, v); }
    /* 0040828a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00408290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408291: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00408298: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0040829b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040829e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004082a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004082a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004082a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004082aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004082b1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004082b4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 004082b7: mov dword ptr [eax], 0xaf2540 */ W32((u32)(r_eax), 0xaf2540u);
    /* 004082bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004082bf: je 0x4082ca */ if (fZ) goto L_004082ca;
L_004082c1:; BB(0x004082c1);
    /* 004082c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004082c3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004082c5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4082c7u); call_ind(t); }
    /* 004082c7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_004082ca:; BB(0x004082ca);
    /* 004082ca: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004082d1: mov ecx, eax */ r_ecx = r_eax;
    /* 004082d3: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4082d8u); f_008171e8();
    /* 004082d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004082db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004082e2: mov esp, ebp */ r_esp = r_ebp;
    /* 004082e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004082e5: ret  */ FN_RET(0x00408280); r_esp += 4; return;
}

void f_004082e8(void) /* sub_4082E8 */
{
    FN_ENTER(0x004082e8);
    /* 004082e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004082e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004082eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004082ed: call 0x40830c */ r_esp -= 4; W32(r_esp, 0x4082f2u); f_0040830c();
    /* 004082f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004082f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004082f8: jne 0x4082fe */ if (!fZ) goto L_004082fe;
L_004082fa:; BB(0x004082fa);
    /* 004082fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004082fb: ret 4 */ FN_RET(0x004082e8); r_esp += 8; return;
L_004082fe:; BB(0x004082fe);
    /* 004082fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004082ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x408304u); f_005c2f74();
    /* 00408304: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00408305: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408306: ret 4 */ FN_RET(0x004082e8); r_esp += 8; return;
}

void f_0040830c(void) /* sub_40830C */
{
    FN_ENTER(0x0040830c);
    /* 0040830c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040830d: mov ebp, esp */ r_ebp = r_esp;
    /* 0040830f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408311: push 0x8cc36c */ { u32 v = 0x8cc36cu; r_esp -= 4; W32(r_esp, v); }
    /* 00408316: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0040831c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0040831d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00408324: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408327: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0040832a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0040832d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00408330: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00408333: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00408336: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408339: mov dword ptr [ecx], 0xaf2550 */ W32((u32)(r_ecx), 0xaf2550u);
    /* 0040833f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00408346: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x40834bu); f_008171e8();
    /* 0040834b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040834e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408355: mov esp, ebp */ r_esp = r_ebp;
    /* 00408357: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408358: ret  */ FN_RET(0x0040830c); r_esp += 4; return;
}

void f_0040835c(void) /* sub_40835C */
{
    FN_ENTER(0x0040835c);
    /* 0040835c: call 0x7bc4e8 */ r_esp -= 4; W32(r_esp, 0x408361u); f_007bc4e8();
    /* 00408361: call 0x7bc508 */ r_esp -= 4; W32(r_esp, 0x408366u); f_007bc508();
    /* 00408366: ret  */ FN_RET(0x0040835c); r_esp += 4; return;
}

void f_00408368(void) /* sub_408368 */
{
    FN_ENTER(0x00408368);
    /* 00408368: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408369: mov ebp, esp */ r_ebp = r_esp;
    /* 0040836b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0040836d: push 0x8cc394 */ { u32 v = 0x8cc394u; r_esp -= 4; W32(r_esp, v); }
    /* 00408372: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00408378: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408379: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00408380: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408383: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00408386: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00408389: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0040838c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0040838f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00408392: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408394: je 0x4083f8 */ if (fZ) goto L_004083f8;
L_00408396:; BB(0x00408396);
    /* 00408396: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00408399: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0040839c: fcomp dword ptr [0x8f8fb0] */ fx_compare(ST(0), R_F32((u32)(0x8f8fb0u))); FPOP();
    /* 004083a2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004083a4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004083a5: je 0x4083f8 */ if (fZ) goto L_004083f8;
L_004083a7:; BB(0x004083a7);
    /* 004083a7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004083ae: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 004083b3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4083b8u); f_005caba4();
    /* 004083b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004083b9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004083bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004083be: je 0x408408 */ if (fZ) goto L_00408408;
L_004083c0:; BB(0x004083c0);
    /* 004083c0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004083c7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004083ce: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 004083d1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004083d4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004083d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004083d8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004083db: call 0x40840c */ r_esp -= 4; W32(r_esp, 0x4083e0u); f_0040840c();
    /* 004083e0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004083e3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004083ea:; BB(0x004083ea);
    /* 004083ea: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004083ed: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004083f4: mov esp, ebp */ r_esp = r_ebp;
    /* 004083f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004083f7: ret  */ FN_RET(0x00408368); r_esp += 4; return;
L_004083f8:; BB(0x004083f8);
    /* 004083f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004083fa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004083fd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408404: mov esp, ebp */ r_esp = r_ebp;
    /* 00408406: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408407: ret  */ FN_RET(0x00408368); r_esp += 4; return;
L_00408408:; BB(0x00408408);
    /* 00408408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040840a: jmp 0x4083ea */ goto L_004083ea;
}

void f_0040840c(void) /* sub_40840C */
{
    FN_ENTER(0x0040840c);
    /* 0040840c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040840d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0040840e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0040840f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408410: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408413: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00408415: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00408417: mov ebx, dword ptr [esp + 0x4c] */ r_ebx = R32((u32)(r_esp+0x4cu));
    /* 0040841b: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 0040841f: push dword ptr [esp + 0x48] */ { u32 v = R32((u32)(r_esp+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00408423: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x408428u); f_008193cc();
    /* 00408428: fld dword ptr [0x8f8fac] */ FPUSH(R_F32((u32)(0x8f8facu)));
    /* 0040842e: mov dword ptr [ebp], 0xaf2550 */ W32((u32)(r_ebp), 0xaf2550u);
    /* 00408435: mov eax, dword ptr [0x9a3028] */ r_eax = R32((u32)(0x9a3028u));
    /* 0040843a: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0040843d: mov dword ptr [ebp + 0x1c], esi */ W32((u32)(r_ebp+0x1cu), r_esi);
    /* 00408440: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00408442: mov dword ptr [ebp + 0x20], edx */ W32((u32)(r_ebp+0x20u), r_edx);
    /* 00408445: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00408448: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 0040844b: mov dword ptr [ebp + 0x24], esi */ W32((u32)(r_ebp+0x24u), r_esi);
    /* 0040844e: fld dword ptr [ebx + 8] */ FPUSH(R_F32((u32)(r_ebx+0x8u)));
    /* 00408451: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00408454: mov dword ptr [ebp + 0x28], edi */ W32((u32)(r_ebp+0x28u), r_edi);
    /* 00408457: fld dword ptr [ebx + 0xc] */ FPUSH(R_F32((u32)(r_ebx+0xcu)));
    /* 0040845a: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0040845c: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0040845f: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 00408462: mov eax, dword ptr [ebx + 0x10] */ r_eax = R32((u32)(r_ebx+0x10u));
    /* 00408465: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00408468: fld dword ptr [ebx + 0x14] */ FPUSH(R_F32((u32)(r_ebx+0x14u)));
    /* 0040846b: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0040846d: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00408470: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00408472: fst dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0));
    /* 00408476: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00408478: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 0040847b: fld dword ptr [ebx + 0x18] */ FPUSH(R_F32((u32)(r_ebx+0x18u)));
    /* 0040847e: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 00408480: mov eax, dword ptr [ebx + 0x18] */ r_eax = R32((u32)(r_ebx+0x18u));
    /* 00408483: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408485: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
    /* 00408489: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0040848b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0040848d: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00408490: fld dword ptr [ebx + 0x1c] */ FPUSH(R_F32((u32)(r_ebx+0x1cu)));
    /* 00408493: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 00408495: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00408498: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 0040849b: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 0040849e: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 004084a1: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004084a4: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004084a7: mov ebx, dword ptr [ebx + 0x28] */ r_ebx = R32((u32)(r_ebx+0x28u));
    /* 004084aa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004084ac: fstp dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0)); FPOP();
    /* 004084af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004084b1: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004084b4: mov dword ptr [ebp + 0x48], ebx */ W32((u32)(r_ebp+0x48u), r_ebx);
    /* 004084b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004084b8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004084bb: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x4084c0u); f_0082dc9c();
    /* 004084c0: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004084c4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004084c8: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 004084cb: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 004084ce: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004084d1: fsub dword ptr [ebp + 0x2c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x2cu));
    /* 004084d4: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 004084d7: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 004084da: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004084dc: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 004084de: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 004084e0: fst dword ptr [ebp + 0x50] */ W_F32((u32)(r_ebp+0x50u), ST(0));
    /* 004084e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004084e5: fstp dword ptr [ebp + 0x5c] */ W_F32((u32)(r_ebp+0x5cu), ST(0)); FPOP();
    /* 004084e8: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004084ec: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004084ee: fstp dword ptr [ebp + 0x54] */ W_F32((u32)(r_ebp+0x54u), ST(0)); FPOP();
    /* 004084f1: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004084f4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004084f8: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004084fa: fstp dword ptr [ebp + 0x58] */ W_F32((u32)(r_ebp+0x58u), ST(0)); FPOP();
    /* 004084fd: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 00408500: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00408504: mov dword ptr [ebp + 0x4c], 0 */ W32((u32)(r_ebp+0x4cu), 0x0u);
    /* 0040850b: movzx edi, bl */ r_edi = (u32)(u8)r_ebx;
    /* 0040850e: sub edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00408510: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00408513: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00408516: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00408518: mov esi, ebx */ r_esi = r_ebx;
    /* 0040851a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0040851e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00408523: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00408528: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0040852c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00408530: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00408534: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00408538: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0040853c: mov byte ptr [ebp + 0x60], al */ W8((u32)(r_ebp+0x60u), (u8)r_eax);
    /* 0040853f: mov eax, edx */ r_eax = r_edx;
    /* 00408541: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00408544: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00408547: shr esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0040854a: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00408550: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00408552: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00408556: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040855a: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0040855c: mov esi, ebx */ r_esi = r_ebx;
    /* 0040855e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00408562: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00408567: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040856c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00408570: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00408574: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00408578: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0040857c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00408580: mov byte ptr [ebp + 0x61], al */ W8((u32)(r_ebp+0x61u), (u8)r_eax);
    /* 00408583: mov eax, edx */ r_eax = r_edx;
    /* 00408585: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00408588: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0040858b: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0040858e: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00408594: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00408596: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 0040859a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0040859e: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 004085a0: shr ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 004085a3: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004085a7: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004085ac: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004085b1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004085b5: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004085b9: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004085bd: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004085c1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004085c5: mov byte ptr [ebp + 0x62], al */ W8((u32)(r_ebp+0x62u), (u8)r_eax);
    /* 004085c8: mov eax, edx */ r_eax = r_edx;
    /* 004085ca: shr eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004085cd: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 004085cf: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 004085d3: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004085d7: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 004085d9: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 004085dc: fdiv dword ptr [0x8f8fa4] */ ST(0) = ST(0) / R_F32((u32)(0x8f8fa4u));
    /* 004085e2: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 004085e4: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004085e6: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 004085e8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004085ea: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004085ee: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004085f3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004085f8: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004085fc: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00408600: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 00408604: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00408608: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 0040860c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040860e: fst dword ptr [ebp + 0xac] */ W_F32((u32)(r_ebp+0xacu), ST(0));
    /* 00408614: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 00408617: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408619: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0040861b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0040861d: fst dword ptr [ebp + 0x78] */ W_F32((u32)(r_ebp+0x78u), ST(0));
    /* 00408620: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 00408626: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00408628: fst dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0));
    /* 0040862b: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 00408631: mov byte ptr [ebp + 0x63], al */ W8((u32)(r_ebp+0x63u), (u8)r_eax);
    /* 00408634: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00408638: mov dword ptr [ebp + 0xa4], edx */ W32((u32)(r_ebp+0xa4u), r_edx);
    /* 0040863e: fchs  */ ST(0) = -ST(0);
    /* 00408640: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00408642: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00408645: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00408647: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00408649: fst dword ptr [ebp + 0xa8] */ W_F32((u32)(r_ebp+0xa8u), ST(0));
    /* 0040864f: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 00408652: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408654: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00408656: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00408658: fst dword ptr [ebp + 0x74] */ W_F32((u32)(r_ebp+0x74u), ST(0));
    /* 0040865b: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 00408661: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00408663: fst dword ptr [ebp + 0x64] */ W_F32((u32)(r_ebp+0x64u), ST(0));
    /* 00408666: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 0040866c: mov dword ptr [ebp + 0x6c], eax */ W32((u32)(r_ebp+0x6cu), r_eax);
    /* 0040866f: mov dword ptr [ebp + 0x70], edx */ W32((u32)(r_ebp+0x70u), r_edx);
    /* 00408672: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 00408675: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 0040867b: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 00408681: mov dword ptr [ebp + 0x90], edx */ W32((u32)(r_ebp+0x90u), r_edx);
    /* 00408687: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 0040868d: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00408691: mov dword ptr [ebp + 0xa0], edx */ W32((u32)(r_ebp+0xa0u), r_edx);
    /* 00408697: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040869c: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004086a0: mov eax, ebp */ r_eax = r_ebp;
    /* 004086a2: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004086a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004086a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004086a7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004086a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004086a9: ret 0xc */ FN_RET(0x0040840c); r_esp += 16; return;
}

void f_004086ac(void) /* sub_4086AC */
{
    FN_ENTER(0x004086ac);
    /* 004086ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004086ad: mov ebp, esp */ r_ebp = r_esp;
    /* 004086af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004086b1: push 0x8cc3ca */ { u32 v = 0x8cc3cau; r_esp -= 4; W32(r_esp, v); }
    /* 004086b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004086bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004086bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004086c4: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004086c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004086ca: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 004086cd: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 004086d0: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 004086d3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004086d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004086d9: fld dword ptr [ebp + 0x10] */ FPUSH(R_F32((u32)(r_ebp+0x10u)));
    /* 004086dc: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004086df: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 004086e2: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 004086e5: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004086e8: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 004086eb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4086f0u); f_008193cc();
    /* 004086f0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004086f7: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 004086fa: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004086fd: mov dword ptr [ecx], 0xaf2540 */ W32((u32)(r_ecx), 0xaf2540u);
    /* 00408703: mov eax, dword ptr [0x9a302c] */ r_eax = R32((u32)(0x9a302cu));
    /* 00408708: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 0040870f: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00408712: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00408715: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00408717: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x40871cu); f_005caba4();
    /* 0040871c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0040871f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408722: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00408725: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408727: je 0x4088ab */ if (fZ) goto L_004088ab;
L_0040872d:; BB(0x0040872d);
    /* 0040872d: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00408734: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0040873b: mov ecx, eax */ r_ecx = r_eax;
    /* 0040873d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040873f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x408744u); f_008193cc();
    /* 00408744: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_0040874b:; BB(0x0040874b);
    /* 0040874b: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0040874e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408751: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00408754: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00408757: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040875e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408761: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00408764: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00408767: mov dword ptr [edx + 0x28], 1 */ W32((u32)(r_edx+0x28u), 0x1u);
    /* 0040876e: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 00408771: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408773: je 0x4087ba */ if (fZ) goto L_004087ba;
L_00408775:; BB(0x00408775);
    /* 00408775: fld dword ptr [0x8f8fa0] */ FPUSH(R_F32((u32)(0x8f8fa0u)));
    /* 0040877b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0040877d:; BB(0x0040877d);
    /* 0040877d: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 00408780: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00408782: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408784: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00408785: je 0x4087ab */ if (fZ) goto L_004087ab;
L_00408787:; BB(0x00408787);
    /* 00408787: fld dword ptr [0x8f8f9c] */ FPUSH(R_F32((u32)(0x8f8f9cu)));
    /* 0040878d: fdiv dword ptr [ebp - 0x14] */ ST(0) = ST(0) / R_F32((u32)(r_ebp+0xffffffecu));
    /* 00408790: fst dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0));
    /* 00408793: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 00408796: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
    /* 00408799: fst dword ptr [ecx + 0x7c] */ W_F32((u32)(r_ecx+0x7cu), ST(0));
    /* 0040879c: fst dword ptr [ecx + 0x8c] */ W_F32((u32)(r_ecx+0x8cu), ST(0));
    /* 004087a2: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 004087a8: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
L_004087ab:; BB(0x004087ab);
    /* 004087ab: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 004087ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087b0: jne 0x40877d */ if (!fZ) goto L_0040877d;
L_004087b2:; BB(0x004087b2);
    /* 004087b2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004087b4: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004087b7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_004087ba:; BB(0x004087ba);
    /* 004087ba: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004087bd: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004087c0: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004087c2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 004087c4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004087c6: je 0x408877 */ if (fZ) goto L_00408877;
L_004087cc:; BB(0x004087cc);
    /* 004087cc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004087cf: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 004087d2: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004087d5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087d8: jne 0x40886c */ if (!fZ) goto L_0040886c;
L_004087de:; BB(0x004087de);
    /* 004087de: mov edx, dword ptr [ecx + esi*4 + 4] */ r_edx = R32((u32)(r_ecx+r_esi*4+0x4u));
    /* 004087e2: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004087e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087e7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004087e9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087ed: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004087ef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087f1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087f3: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004087f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004087fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004087fb: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004087fe: call 0x408368 */ r_esp -= 4; W32(r_esp, 0x408803u); f_00408368();
    /* 00408803: mov ecx, eax */ r_ecx = r_eax;
    /* 00408805: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408808: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040880a: je 0x40889e */ if (fZ) goto L_0040889e;
L_00408810:; BB(0x00408810);
    /* 00408810: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00408813: fld dword ptr [0x8f8fa0] */ FPUSH(R_F32((u32)(0x8f8fa0u)));
    /* 00408819: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0040881c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040881e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408820: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00408823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00408824: je 0x408861 */ if (fZ) goto L_00408861;
L_00408826:; BB(0x00408826);
    /* 00408826: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00408828: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040882a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040882c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040882e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040882f: je 0x408893 */ if (fZ) goto L_00408893;
L_00408831:; BB(0x00408831);
    /* 00408831: fdivr dword ptr [0x8f8f9c] */ ST(0) = R_F32((u32)(0x8f8f9cu)) / ST(0);
    /* 00408837: fst dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0));
    /* 0040883a: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 0040883d: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
    /* 00408840: fst dword ptr [ecx + 0x7c] */ W_F32((u32)(r_ecx+0x7cu), ST(0));
    /* 00408843: fst dword ptr [ecx + 0x8c] */ W_F32((u32)(r_ecx+0x8cu), ST(0));
    /* 00408849: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 0040884f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00408852: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00408855: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00408857: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0040885a: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040885d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0040885f: jmp 0x40886c */ goto L_0040886c;
L_00408861:; BB(0x00408861);
    /* 00408861: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00408863: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408865: mov eax, edx */ r_eax = r_edx;
    /* 00408867: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040886a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
L_0040886c:; BB(0x0040886c);
    /* 0040886c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040886f: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00408871: jne 0x4087cc */ if (!fZ) goto L_004087cc;
L_00408877:; BB(0x00408877);
    /* 00408877: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040887a: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040887d: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00408880: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00408883: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408886: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040888d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040888f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408890: ret 0xc */ FN_RET(0x004086ac); r_esp += 16; return;
L_00408893:; BB(0x00408893);
    /* 00408893: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408895: mov eax, edx */ r_eax = r_edx;
    /* 00408897: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040889a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0040889c: jmp 0x40886c */ goto L_0040886c;
L_0040889e:; BB(0x0040889e);
    /* 0040889e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004088a1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004088a4: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004088a7: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004088a9: jmp 0x40886c */ goto L_0040886c;
L_004088ab:; BB(0x004088ab);
    /* 004088ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004088ad: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 004088b0: jmp 0x40874b */ goto L_0040874b;
}

void f_00408840(void)
{
    FN_ENTER(0x00408840);
    goto L_00408840;
L_004087cc:; BB(0x004087cc);
    /* 004087cc: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004087cf: mov edx, dword ptr [ecx + ebx*8] */ r_edx = R32((u32)(r_ecx+r_ebx*8));
    /* 004087d2: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004087d5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004087d8: jne 0x40886c */ if (!fZ) goto L_0040886c;
L_004087de:; BB(0x004087de);
    /* 004087de: mov edx, dword ptr [ecx + esi*4 + 4] */ r_edx = R32((u32)(r_ecx+r_esi*4+0x4u));
    /* 004087e2: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 004087e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087e7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004087e9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087ed: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004087ef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087f1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087f3: add ecx, dword ptr [eax + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004087f6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004087f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004087fa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004087fb: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004087fe: call 0x408368 */ r_esp -= 4; W32(r_esp, 0x408803u); f_00408368();
    /* 00408803: mov ecx, eax */ r_ecx = r_eax;
    /* 00408805: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408808: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040880a: je 0x40889e */ if (fZ) goto L_0040889e;
L_00408810:; BB(0x00408810);
    /* 00408810: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00408813: fld dword ptr [0x8f8fa0] */ FPUSH(R_F32((u32)(0x8f8fa0u)));
    /* 00408819: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 0040881c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0040881e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408820: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00408823: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00408824: je 0x408861 */ if (fZ) goto L_00408861;
L_00408826:; BB(0x00408826);
    /* 00408826: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00408828: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0040882a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0040882c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0040882e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0040882f: je 0x408893 */ if (fZ) goto L_00408893;
L_00408831:; BB(0x00408831);
    /* 00408831: fdivr dword ptr [0x8f8f9c] */ ST(0) = R_F32((u32)(0x8f8f9cu)) / ST(0);
    /* 00408837: fst dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0));
    /* 0040883a: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 0040883d: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
L_00408840:; BB(0x00408840);
    /* 00408840: fst dword ptr [ecx + 0x7c] */ W_F32((u32)(r_ecx+0x7cu), ST(0));
    /* 00408843: fst dword ptr [ecx + 0x8c] */ W_F32((u32)(r_ecx+0x8cu), ST(0));
    /* 00408849: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 0040884f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00408852: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00408855: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00408857: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 0040885a: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040885d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0040885f: jmp 0x40886c */ goto L_0040886c;
L_00408861:; BB(0x00408861);
    /* 00408861: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00408863: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408865: mov eax, edx */ r_eax = r_edx;
    /* 00408867: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040886a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
L_0040886c:; BB(0x0040886c);
    /* 0040886c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040886f: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00408871: jne 0x4087cc */ if (!fZ) goto L_004087cc;
L_00408877:; BB(0x00408877);
    /* 00408877: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0040887a: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0040887d: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00408880: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00408883: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408886: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0040888d: mov esp, ebp */ r_esp = r_ebp;
    /* 0040888f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408890: ret 0xc */ FN_RET(0x00408840); r_esp += 16; return;
L_00408893:; BB(0x00408893);
    /* 00408893: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408895: mov eax, edx */ r_eax = r_edx;
    /* 00408897: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 0040889a: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0040889c: jmp 0x40886c */ goto L_0040886c;
L_0040889e:; BB(0x0040889e);
    /* 0040889e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 004088a1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004088a4: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004088a7: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 004088a9: jmp 0x40886c */ goto L_0040886c;
}

void f_004088b8(void) /* sub_4088B8 */
{
    FN_ENTER(0x004088b8);
    /* 004088b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004088b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004088bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004088bd: push 0x8cc3f0 */ { u32 v = 0x8cc3f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004088c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004088c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004088c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004088d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004088d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004088d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004088d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004088dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004088df: mov eax, dword ptr [0xa3ad14] */ r_eax = R32((u32)(0xa3ad14u));
    /* 004088e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004088e6: je 0x40894d */ if (fZ) goto L_0040894d;
L_004088e8:; BB(0x004088e8);
    /* 004088e8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004088ef: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004088f1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4088f6u); f_005caba4();
    /* 004088f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004088f7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004088fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004088fc: je 0x408949 */ if (fZ) goto L_00408949;
L_004088fe:; BB(0x004088fe);
    /* 004088fe: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00408905: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0040890c: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040890f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00408912: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00408915: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00408917: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0040891a: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0040891d: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0040891f: add ebx, dword ptr [0xa3ad14] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa3ad14u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00408925: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408926: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00408929: call 0x4086ac */ r_esp -= 4; W32(r_esp, 0x40892eu); f_004086ac();
    /* 0040892e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408931: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00408938:; BB(0x00408938);
    /* 00408938: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0040893b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0040893e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408945: mov esp, ebp */ r_esp = r_ebp;
    /* 00408947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408948: ret  */ FN_RET(0x004088b8); r_esp += 4; return;
L_00408949:; BB(0x00408949);
    /* 00408949: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040894b: jmp 0x408938 */ goto L_00408938;
L_0040894d:; BB(0x0040894d);
    /* 0040894d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040894f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408952: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408959: mov esp, ebp */ r_esp = r_ebp;
    /* 0040895b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040895c: ret  */ FN_RET(0x004088b8); r_esp += 4; return;
}

void f_00408960(void) /* sub_408960 */
{
    FN_ENTER(0x00408960);
    /* 00408960: mov ecx, dword ptr [0xa3ad18] */ r_ecx = R32((u32)(0xa3ad18u));
    /* 00408966: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408968: je 0x40897e */ if (fZ) goto L_0040897e;
L_0040896a:; BB(0x0040896a);
    /* 0040896a: je 0x408972 */ if (fZ) goto L_00408972;
L_0040896c:; BB(0x0040896c);
    /* 0040896c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0040896e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00408970: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x408972u); call_ind(t); }
L_00408972:; BB(0x00408972);
    /* 00408972: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408974: mov dword ptr [0xa3ad18], eax */ W32((u32)(0xa3ad18u), r_eax);
    /* 00408979: mov dword ptr [0xa3ad14], eax */ W32((u32)(0xa3ad14u), r_eax);
L_0040897e:; BB(0x0040897e);
    /* 0040897e: ret  */ FN_RET(0x00408960); r_esp += 4; return;
}

void f_00408980(void) /* sub_408980 */
{
    FN_ENTER(0x00408980);
    /* 00408980: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 00408983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408985: je 0x40898f */ if (fZ) goto L_0040898f;
L_00408987:; BB(0x00408987);
    /* 00408987: mov ecx, eax */ r_ecx = r_eax;
    /* 00408989: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x40898eu); f_00817574();
    /* 0040898e: ret  */ FN_RET(0x00408980); r_esp += 4; return;
L_0040898f:; BB(0x0040898f);
    /* 0040898f: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 00408993: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408998: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 0040899c: ret  */ FN_RET(0x00408980); r_esp += 4; return;
}

void f_004089a0(void) /* sub_4089A0 */
{
    FN_ENTER(0x004089a0);
    /* 004089a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004089a1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004089a3: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004089a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004089a8: jne 0x4089b7 */ if (!fZ) goto L_004089b7;
L_004089aa:; BB(0x004089aa);
    /* 004089aa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004089ac: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x4089b1u); f_008173d0();
    /* 004089b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004089b3: je 0x4089db */ if (fZ) goto L_004089db;
L_004089b5:; BB(0x004089b5);
    /* 004089b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004089b6: ret  */ FN_RET(0x004089a0); r_esp += 4; return;
L_004089b7:; BB(0x004089b7);
    /* 004089b7: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x4089bcu); f_007a61a4();
    /* 004089bc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004089bf: je 0x4089e9 */ if (fZ) goto L_004089e9;
L_004089c1:; BB(0x004089c1);
    /* 004089c1: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x4089c6u); f_007a9044();
    /* 004089c6: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 004089c9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004089cb: je 0x4089d2 */ if (fZ) goto L_004089d2;
L_004089cd:; BB(0x004089cd);
    /* 004089cd: call 0x818f50 */ r_esp -= 4; W32(r_esp, 0x4089d2u); f_00818f50();
L_004089d2:; BB(0x004089d2);
    /* 004089d2: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004089d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004089d7: je 0x4089e2 */ if (fZ) goto L_004089e2;
L_004089d9:; BB(0x004089d9);
    /* 004089d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004089da: ret  */ FN_RET(0x004089a0); r_esp += 4; return;
L_004089db:; BB(0x004089db);
    /* 004089db: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x4089e0u); f_007a93d8();
    /* 004089e0: jmp 0x4089c1 */ goto L_004089c1;
L_004089e2:; BB(0x004089e2);
    /* 004089e2: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4089e7u); f_007a9318();
    /* 004089e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004089e8: ret  */ FN_RET(0x004089a0); r_esp += 4; return;
L_004089e9:; BB(0x004089e9);
    /* 004089e9: mov eax, dword ptr [0xa16380] */ r_eax = R32((u32)(0xa16380u));
    /* 004089ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004089f1: jne 0x4089c1 */ if (!fZ) goto L_004089c1;
L_004089f3:; BB(0x004089f3);
    /* 004089f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004089f4: ret  */ FN_RET(0x004089a0); r_esp += 4; return;
}

void f_004089f8(void) /* sub_4089F8 */
{
    FN_ENTER(0x004089f8);
    /* 004089f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004089f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004089fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004089fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004089fc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004089fe: fld dword ptr [0x8f8f88] */ FPUSH(R_F32((u32)(0x8f8f88u)));
    /* 00408a04: fadd dword ptr [ebp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4cu));
    /* 00408a07: fcom dword ptr [ebp + 0x50] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x50u))); 
    /* 00408a0a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408a0c: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00408a10: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00408a16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00408a17: jae 0x408acc */ if (!fC) goto L_00408acc;
L_00408a1d:; BB(0x00408a1d);
    /* 00408a1d: movzx eax, byte ptr [ebp + 0x60] */ r_eax = (u32)R8((u32)(r_ebp+0x60u));
    /* 00408a21: fld dword ptr [ebp + 0x54] */ FPUSH(R_F32((u32)(r_ebp+0x54u)));
    /* 00408a24: fld dword ptr [ebp + 0x84] */ FPUSH(R_F32((u32)(r_ebp+0x84u)));
    /* 00408a2a: fld dword ptr [ebp + 0x58] */ FPUSH(R_F32((u32)(r_ebp+0x58u)));
    /* 00408a2d: fld dword ptr [ebp + 0x88] */ FPUSH(R_F32((u32)(r_ebp+0x88u)));
    /* 00408a33: fld dword ptr [ebp + 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0x8cu)));
    /* 00408a39: fld dword ptr [ebp + 0x94] */ FPUSH(R_F32((u32)(r_ebp+0x94u)));
    /* 00408a3f: fld dword ptr [ebp + 0x98] */ FPUSH(R_F32((u32)(r_ebp+0x98u)));
    /* 00408a45: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00408a47: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 00408a4a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00408a4c: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00408a4e: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 00408a54: fld dword ptr [ebp + 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0x5cu)));
    /* 00408a57: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00408a59: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00408a5b: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 00408a61: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00408a63: fstp dword ptr [ebp + 0x8c] */ W_F32((u32)(r_ebp+0x8cu), ST(0)); FPOP();
    /* 00408a69: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00408a6b: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00408a6d: fld dword ptr [ebp + 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0x9cu)));
    /* 00408a73: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00408a75: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 00408a7b: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00408a7d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00408a7f: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 00408a85: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00408a87: fstp dword ptr [ebp + 0x9c] */ W_F32((u32)(r_ebp+0x9cu), ST(0)); FPOP();
    /* 00408a8d: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 00408a91: movzx edx, byte ptr [ebp + 0x61] */ r_edx = (u32)R8((u32)(r_ebp+0x61u));
    /* 00408a95: add byte ptr [ebp + 0xa4], al */ { u32 ad = (u32)(r_ebp+0xa4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00408a9b: movzx eax, byte ptr [ebp + 0x62] */ r_eax = (u32)R8((u32)(r_ebp+0x62u));
    /* 00408a9f: add byte ptr [ebp + 0xa5], dl */ { u32 ad = (u32)(r_ebp+0xa5u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00408aa5: add byte ptr [ebp + 0xa6], al */ { u32 ad = (u32)(r_ebp+0xa6u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00408aab: movzx eax, byte ptr [ebp + 0x63] */ r_eax = (u32)R8((u32)(r_ebp+0x63u));
    /* 00408aaf: add byte ptr [ebp + 0xa7], al */ { u32 ad = (u32)(r_ebp+0xa7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00408ab5: mov esi, dword ptr [ebp + 0xa4] */ r_esi = R32((u32)(r_ebp+0xa4u));
    /* 00408abb: mov dword ptr [ebp + 0x90], esi */ W32((u32)(r_ebp+0x90u), r_esi);
    /* 00408ac1: mov dword ptr [ebp + 0xa0], esi */ W32((u32)(r_ebp+0xa0u), r_esi);
    /* 00408ac7: jmp 0x408bf0 */ goto L_00408bf0;
L_00408acc:; BB(0x00408acc);
    /* 00408acc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408ace: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 00408ad1: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 00408ad4: fld dword ptr [ebp + 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xa8u)));
    /* 00408ada: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00408adc: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00408adf: fld dword ptr [ebp + 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xacu)));
    /* 00408ae5: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 00408ae8: mov esi, dword ptr [ebp + 0x40] */ r_esi = R32((u32)(r_ebp+0x40u));
    /* 00408aeb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00408aed: fstp dword ptr [ebp + 0x94] */ W_F32((u32)(r_ebp+0x94u), ST(0)); FPOP();
    /* 00408af3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408af5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00408af7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408af9: fstp dword ptr [ebp + 0x84] */ W_F32((u32)(r_ebp+0x84u), ST(0)); FPOP();
    /* 00408aff: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00408b02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408b04: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00408b06: fstp dword ptr [ebp + 0x98] */ W_F32((u32)(r_ebp+0x98u), ST(0)); FPOP();
    /* 00408b0c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00408b0e: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 00408b14: mov dword ptr [ebp + 0x8c], eax */ W32((u32)(r_ebp+0x8cu), r_eax);
    /* 00408b1a: mov dword ptr [ebp + 0x90], esi */ W32((u32)(r_ebp+0x90u), r_esi);
    /* 00408b20: mov dword ptr [ebp + 0x9c], eax */ W32((u32)(r_ebp+0x9cu), r_eax);
    /* 00408b26: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00408b29: mov dword ptr [ebp + 0xa0], esi */ W32((u32)(r_ebp+0xa0u), r_esi);
    /* 00408b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b31: je 0x408be6 */ if (fZ) goto L_00408be6;
L_00408b37:; BB(0x00408b37);
    /* 00408b37: mov esi, dword ptr [ebp + 0x20] */ r_esi = R32((u32)(r_ebp+0x20u));
    /* 00408b3a: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 00408b3e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00408b41: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00408b43: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00408b45: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b47: je 0x408be6 */ if (fZ) goto L_00408be6;
L_00408b4d:; BB(0x00408b4d);
    /* 00408b4d: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00408b50: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00408b53: mov ebx, eax */ r_ebx = r_eax;
L_00408b55:; BB(0x00408b55);
    /* 00408b55: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 00408b58: cmp esi, dword ptr [ecx + edi*8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+r_edi*8)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b5b: jne 0x408bd4 */ if (!fZ) goto L_00408bd4;
L_00408b5d:; BB(0x00408b5d);
    /* 00408b5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408b5e: mov ecx, dword ptr [ecx + edi*8 + 4] */ r_ecx = R32((u32)(r_ecx+r_edi*8+0x4u));
    /* 00408b62: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00408b65: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b67: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00408b69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b6d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00408b6f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b71: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b73: add eax, dword ptr [edx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408b76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408b77: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00408b7a: call 0x408368 */ r_esp -= 4; W32(r_esp, 0x408b7fu); f_00408368();
    /* 00408b7f: mov ecx, eax */ r_ecx = r_eax;
    /* 00408b81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408b84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408b86: je 0x408bfc */ if (fZ) goto L_00408bfc;
L_00408b88:; BB(0x00408b88);
    /* 00408b88: fld dword ptr [0x8f8f84] */ FPUSH(R_F32((u32)(0x8f8f84u)));
    /* 00408b8e: fld dword ptr [ebx + 0x24] */ FPUSH(R_F32((u32)(r_ebx+0x24u)));
    /* 00408b91: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00408b93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408b95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00408b96: je 0x408bcd */ if (fZ) goto L_00408bcd;
L_00408b98:; BB(0x00408b98);
    /* 00408b98: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00408b9a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00408b9c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408b9e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00408ba0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00408ba1: je 0x408bf5 */ if (fZ) goto L_00408bf5;
L_00408ba3:; BB(0x00408ba3);
    /* 00408ba3: fld dword ptr [0x8f8f80] */ FPUSH(R_F32((u32)(0x8f8f80u)));
    /* 00408ba9: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00408bab: fst dword ptr [ecx + 0x2c] */ W_F32((u32)(r_ecx+0x2cu), ST(0));
    /* 00408bae: fst dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0));
    /* 00408bb1: fst dword ptr [ecx + 0x6c] */ W_F32((u32)(r_ecx+0x6cu), ST(0));
    /* 00408bb4: fst dword ptr [ecx + 0x7c] */ W_F32((u32)(r_ecx+0x7cu), ST(0));
    /* 00408bb7: fst dword ptr [ecx + 0x8c] */ W_F32((u32)(r_ecx+0x8cu), ST(0));
    /* 00408bbd: fstp dword ptr [ecx + 0x9c] */ W_F32((u32)(r_ecx+0x9cu), ST(0)); FPOP();
    /* 00408bc3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00408bc5: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00408bc8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00408bcb: jmp 0x408bd4 */ goto L_00408bd4;
L_00408bcd:; BB(0x00408bcd);
    /* 00408bcd: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00408bcf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408bd1: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_00408bd4:; BB(0x00408bd4);
    /* 00408bd4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00408bd7: cmp edi, dword ptr [edx] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408bd9: jne 0x408b55 */ if (!fZ) goto L_00408b55;
L_00408bdf:; BB(0x00408bdf);
    /* 00408bdf: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00408be2: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
L_00408be6:; BB(0x00408be6);
    /* 00408be6: or edx, 0xffff0004 */ {  u32 a = r_edx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408bec: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
L_00408bf0:; BB(0x00408bf0);
    /* 00408bf0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00408bf1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408bf2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00408bf3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00408bf4: ret  */ FN_RET(0x004089f8); r_esp += 4; return;
L_00408bf5:; BB(0x00408bf5);
    /* 00408bf5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00408bf7: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00408bfa: jmp 0x408bd4 */ goto L_00408bd4;
L_00408bfc:; BB(0x00408bfc);
    /* 00408bfc: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 00408bff: jmp 0x408bd4 */ goto L_00408bd4;
}

void f_00408c04(void) /* sub_408C04 */
{
    FN_ENTER(0x00408c04);
    /* 00408c04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00408c05: mov esi, ecx */ r_esi = r_ecx;
    /* 00408c07: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x408c0cu); f_007a9044();
    /* 00408c0c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c0e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c10: add esi, 0x64 */ {  u32 a = r_esi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00408c13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00408c14: call 0x82b1a0 */ r_esp -= 4; W32(r_esp, 0x408c19u); f_0082b1a0();
    /* 00408c19: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408c1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00408c1d: ret  */ FN_RET(0x00408c04); r_esp += 4; return;
}

void f_00408c20(void) /* sub_408C20 */
{
    FN_ENTER(0x00408c20);
    /* 00408c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408c21: mov ebp, esp */ r_ebp = r_esp;
    /* 00408c23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408c25: push 0x8cc418 */ { u32 v = 0x8cc418u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00408c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408c31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00408c38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408c3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00408c3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00408c41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00408c44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00408c47: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00408c49: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00408c50: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x408c55u); f_008581c5();
    /* 00408c55: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00408c56: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00408c59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408c5b: je 0x408cb0 */ if (fZ) goto L_00408cb0;
L_00408c5d:; BB(0x00408c5d);
    /* 00408c5d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00408c64: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408c6b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408c6e: push 0x6000 */ { u32 v = 0x6000u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c73: push 0x8f8f64 */ { u32 v = 0x8f8f64u; r_esp -= 4; W32(r_esp, v); }
    /* 00408c78: call 0x5d7150 */ r_esp -= 4; W32(r_esp, 0x408c7du); f_005d7150();
    /* 00408c7d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408c80: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00408c87:; BB(0x00408c87);
    /* 00408c87: mov dword ptr [0xa3ad18], ecx */ W32((u32)(0xa3ad18u), r_ecx);
    /* 00408c8d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00408c94: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408c96: je 0x408ca2 */ if (fZ) goto L_00408ca2;
L_00408c98:; BB(0x00408c98);
    /* 00408c98: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00408c9a: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x408c9du); call_ind(t); }
    /* 00408c9d: mov dword ptr [0xa3ad14], eax */ W32((u32)(0xa3ad14u), r_eax);
L_00408ca2:; BB(0x00408ca2);
    /* 00408ca2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408ca5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408cac: mov esp, ebp */ r_esp = r_ebp;
    /* 00408cae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408caf: ret  */ FN_RET(0x00408c20); r_esp += 4; return;
L_00408cb0:; BB(0x00408cb0);
    /* 00408cb0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00408cb2: jmp 0x408c87 */ goto L_00408c87;
}

void f_00408cb4(void) /* sub_408CB4 */
{
    FN_ENTER(0x00408cb4);
    /* 00408cb4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408cb5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00408cb7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00408cb9: call 0x408cd8 */ r_esp -= 4; W32(r_esp, 0x408cbeu); f_00408cd8();
    /* 00408cbe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00408cc2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408cc4: jne 0x408cca */ if (!fZ) goto L_00408cca;
L_00408cc6:; BB(0x00408cc6);
    /* 00408cc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408cc7: ret 4 */ FN_RET(0x00408cb4); r_esp += 8; return;
L_00408cca:; BB(0x00408cca);
    /* 00408cca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ccb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x408cd0u); f_005c2f74();
    /* 00408cd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00408cd1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408cd2: ret 4 */ FN_RET(0x00408cb4); r_esp += 8; return;
}

void f_00408cd8(void) /* sub_408CD8 */
{
    FN_ENTER(0x00408cd8);
    /* 00408cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00408cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408cdd: push 0x8cc434 */ { u32 v = 0x8cc434u; r_esp -= 4; W32(r_esp, v); }
    /* 00408ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00408ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00408cf0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00408cf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00408cf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00408cfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00408cff: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00408d02: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408d05: mov dword ptr [ecx], 0xaf25b0 */ W32((u32)(r_ecx), 0xaf25b0u);
    /* 00408d0b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00408d12: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x408d17u); f_008171e8();
    /* 00408d17: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408d1a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408d21: mov esp, ebp */ r_esp = r_ebp;
    /* 00408d23: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408d24: ret  */ FN_RET(0x00408cd8); r_esp += 4; return;
}

void f_00408d28(void) /* sub_408D28 */
{
    FN_ENTER(0x00408d28);
    /* 00408d28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00408d29: mov ebp, esp */ r_ebp = r_esp;
    /* 00408d2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408d2d: push 0x8cc450 */ { u32 v = 0x8cc450u; r_esp -= 4; W32(r_esp, v); }
    /* 00408d32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00408d38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408d39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00408d40: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408d43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00408d46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00408d49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00408d4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00408d4f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00408d52: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00408d55: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x408d5au); f_008193cc();
    /* 00408d5a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00408d61: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408d64: mov dword ptr [eax], 0xaf25b0 */ W32((u32)(r_eax), 0xaf25b0u);
    /* 00408d6a: mov byte ptr [0xa3ad30], 0 */ W8((u32)(0xa3ad30u), 0x0u);
    /* 00408d71: mov dword ptr [ebp - 0x40], 0xc4fa0000 */ W32((u32)(r_ebp+0xffffffc0u), 0xc4fa0000u);
    /* 00408d78: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 00408d7f: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00408d86: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00408d8b: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x408d90u); f_006c1bcc();
    /* 00408d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408d91: call 0x6abefc */ r_esp -= 4; W32(r_esp, 0x408d96u); f_006abefc();
    /* 00408d96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00408d99: mov dword ptr [0xa3ad34], eax */ W32((u32)(0xa3ad34u), r_eax);
    /* 00408d9e: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 00408da1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408da2: mov ecx, eax */ r_ecx = r_eax;
    /* 00408da4: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x408da9u); f_006ac1a4();
    /* 00408da9: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00408dac: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x408db1u); f_005d6a3c();
    /* 00408db1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408db4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408db7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408dbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00408dc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408dc1: ret 4 */ FN_RET(0x00408d28); r_esp += 8; return;
}

void f_00408da0(void)
{
    FN_ENTER(0x00408da0);
    /* 00408da0: rcl byte ptr [edx - 0x75], 0xc8 */ UNSUP(0x00408da0, "rcl byte ptr [edx - 0x75], 0xc8");
    /* 00408da4: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x408da9u); f_006ac1a4();
    /* 00408da9: lea ecx, [ebp - 0x34] */ r_ecx = (u32)(r_ebp+0xffffffccu);
    /* 00408dac: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x408db1u); f_005d6a3c();
    /* 00408db1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00408db4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00408db7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00408dbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00408dc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00408dc1: ret 4 */ FN_RET(0x00408da0); r_esp += 8; return;
}

void f_00408dc4(void) /* sub_408DC4 */
{
    FN_ENTER(0x00408dc4);
    /* 00408dc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408dc5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00408dc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00408dc9: call 0x408dd8 */ r_esp -= 4; W32(r_esp, 0x408dceu); f_00408dd8();
    /* 00408dce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00408dd0: call 0x408e28 */ r_esp -= 4; W32(r_esp, 0x408dd5u); f_00408e28();
    /* 00408dd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408dd6: ret  */ FN_RET(0x00408dc4); r_esp += 4; return;
}

void f_00408dd8(void) /* sub_408DD8 */
{
    FN_ENTER(0x00408dd8);
    /* 00408dd8: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408ddb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00408ddd: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x408de2u); f_004d31f4();
    /* 00408de2: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 00408dea: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00408dee: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 00408df6: mov dword ptr [esp + 0x28], 0x428f2f9e */ W32((u32)(r_esp+0x28u), 0x428f2f9eu);
    /* 00408dfe: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 00408e06: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 00408e0e: mov dword ptr [esp + 0x34], 0xbf800000 */ W32((u32)(r_esp+0x34u), 0xbf800000u);
    /* 00408e16: mov dword ptr [esp + 0x18], 0x1693 */ W32((u32)(r_esp+0x18u), 0x1693u);
    /* 00408e1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408e1f: call 0x4d3374 */ r_esp -= 4; W32(r_esp, 0x408e24u); f_004d3374();
    /* 00408e24: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408e27: ret  */ FN_RET(0x00408dd8); r_esp += 4; return;
}

void f_00408e28(void) /* sub_408E28 */
{
    FN_ENTER(0x00408e28);
    /* 00408e28: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408e2b: movsx eax, byte ptr [0xa3ad30] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa3ad30u));
    /* 00408e32: fld dword ptr [0x8f94a8] */ FPUSH(R_F32((u32)(0x8f94a8u)));
    /* 00408e38: movzx edx, byte ptr [eax*4 + 0x8f9440] */ r_edx = (u32)R8((u32)(r_eax*4+0x8f9440u));
    /* 00408e40: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00408e44: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00408e48: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00408e4a: movzx edx, byte ptr [eax*4 + 0x8f9441] */ r_edx = (u32)R8((u32)(r_eax*4+0x8f9441u));
    /* 00408e52: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00408e55: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00408e59: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00408e5d: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00408e5f: movzx edx, byte ptr [eax*4 + 0x8f9442] */ r_edx = (u32)R8((u32)(r_eax*4+0x8f9442u));
    /* 00408e67: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00408e6b: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00408e6f: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00408e73: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 00408e75: movzx edx, byte ptr [eax*4 + 0x8f9443] */ r_edx = (u32)R8((u32)(r_eax*4+0x8f9443u));
    /* 00408e7d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00408e81: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408e83: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00408e87: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00408e8b: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00408e8d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00408e91: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00408e93: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00408e96: lea edx, [eax + edx + 0x8f93a0] */ r_edx = (u32)(r_eax+r_edx+0x8f93a0u);
    /* 00408e9d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00408ea0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00408ea1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408ea2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00408ea4: call 0x794418 */ r_esp -= 4; W32(r_esp, 0x408ea9u); f_00794418();
    /* 00408ea9: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408eac: ret  */ FN_RET(0x00408e28); r_esp += 4; return;
}

void f_00408eb0(void) /* sub_408EB0 */
{
    FN_ENTER(0x00408eb0);
    /* 00408eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408eb1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408eb4: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 00408eb9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408ebc: je 0x408eed */ if (fZ) goto L_00408eed;
L_00408ebe:; BB(0x00408ebe);
    /* 00408ebe: mov eax, dword ptr [0xa9c1f4] */ r_eax = R32((u32)(0xa9c1f4u));
    /* 00408ec3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408ec5: je 0x408ecc */ if (fZ) goto L_00408ecc;
L_00408ec7:; BB(0x00408ec7);
    /* 00408ec7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408eca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408ecb: ret  */ FN_RET(0x00408eb0); r_esp += 4; return;
L_00408ecc:; BB(0x00408ecc);
    /* 00408ecc: movsx ebx, byte ptr [esp + 0x10] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x10u));
    /* 00408ed1: mov eax, dword ptr [0xa3ad34] */ r_eax = R32((u32)(0xa3ad34u));
    /* 00408ed6: mov byte ptr [0xa3ad30], bl */ W8((u32)(0xa3ad30u), (u8)r_ebx);
    /* 00408edc: call 0x408ef8 */ r_esp -= 4; W32(r_esp, 0x408ee1u); f_00408ef8();
    /* 00408ee1: mov dword ptr [0xa3ad38], eax */ W32((u32)(0xa3ad38u), r_eax);
    /* 00408ee6: mov edx, ebx */ r_edx = r_ebx;
    /* 00408ee8: call 0x408f21 */ r_esp -= 4; W32(r_esp, 0x408eedu); f_00408f21();
L_00408eed:; BB(0x00408eed);
    /* 00408eed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408ef0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408ef1: ret  */ FN_RET(0x00408eb0); r_esp += 4; return;
}

void f_00408ef8(void) /* sub_408EF8 */
{
    FN_ENTER(0x00408ef8);
    /* 00408ef8: mov eax, dword ptr [eax + 0x964] */ r_eax = R32((u32)(r_eax+0x964u));
    /* 00408efe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00408f00: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00408f02: je 0x408f09 */ if (fZ) goto L_00408f09;
L_00408f04:; BB(0x00408f04);
    /* 00408f04: mov edx, 1 */ r_edx = 0x1u;
L_00408f09:; BB(0x00408f09);
    /* 00408f09: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00408f0e: je 0x408f15 */ if (fZ) goto L_00408f15;
L_00408f10:; BB(0x00408f10);
    /* 00408f10: mov edx, 2 */ r_edx = 0x2u;
L_00408f15:; BB(0x00408f15);
    /* 00408f15: mov eax, edx */ r_eax = r_edx;
    /* 00408f17: ret  */ FN_RET(0x00408ef8); r_esp += 4; return;
}

void f_00408f21(void) /* sub_408F21 */
{
    FN_ENTER(0x00408f21);
    /* 00408f21: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00408f22: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00408f23: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00408f26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408f28: je 0x409006 */ if (fZ) goto L_00409006;
L_00408f2e:; BB(0x00408f2e);
    /* 00408f2e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408f31: jne 0x408f98 */ if (!fZ) goto L_00408f98;
L_00408f33:; BB(0x00408f33);
    /* 00408f33: mov ecx, dword ptr [0xa3ad34] */ r_ecx = R32((u32)(0xa3ad34u));
    /* 00408f39: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00408f3c: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 00408f3f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00408f41: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00408f44: lea edx, [ebx + eax + 0x8f91c0] */ r_edx = (u32)(r_ebx+r_eax+0x8f91c0u);
    /* 00408f4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408f4c: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x408f51u); f_006ac1a4();
    /* 00408f51: fild dword ptr [ebx + edi*8 + 0x8f9124] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_edi*8+0x8f9124u)));
    /* 00408f58: fmul dword ptr [0x8f94a4] */ ST(0) = ST(0) * R_F32((u32)(0x8f94a4u));
    /* 00408f5e: fdiv dword ptr [0x8f94a0] */ ST(0) = ST(0) / R_F32((u32)(0x8f94a0u));
    /* 00408f64: mov ecx, dword ptr [0xa3ad34] */ r_ecx = R32((u32)(0xa3ad34u));
    /* 00408f6a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00408f6d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00408f71: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00408f76: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00408f7a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00408f7e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00408f82: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00408f85: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00408f89: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00408f8a: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00408f8d: call 0x6ac1bc */ r_esp -= 4; W32(r_esp, 0x408f92u); f_006ac1bc();
    /* 00408f92: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00408f95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00408f96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00408f97: ret  */ FN_RET(0x00408f21); r_esp += 4; return;
L_00408f98:; BB(0x00408f98);
    /* 00408f98: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00408f9b: jne 0x409065 */ if (!fZ) goto L_00409065;
L_00408fa1:; BB(0x00408fa1);
    /* 00408fa1: mov ecx, dword ptr [0xa3ad34] */ r_ecx = R32((u32)(0xa3ad34u));
    /* 00408fa7: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 00408faa: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 00408fad: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00408faf: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00408fb2: lea edx, [ebx + eax + 0x8f9300] */ r_edx = (u32)(r_ebx+r_eax+0x8f9300u);
    /* 00408fb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00408fba: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x408fbfu); f_006ac1a4();
    /* 00408fbf: fild dword ptr [ebx + edi*8 + 0x8f9264] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_edi*8+0x8f9264u)));
    /* 00408fc6: fmul dword ptr [0x8f94a4] */ ST(0) = ST(0) * R_F32((u32)(0x8f94a4u));
    /* 00408fcc: fdiv dword ptr [0x8f94a0] */ ST(0) = ST(0) / R_F32((u32)(0x8f94a0u));
    /* 00408fd2: mov ecx, dword ptr [0xa3ad34] */ r_ecx = R32((u32)(0xa3ad34u));
    /* 00408fd8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00408fdb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00408fdf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00408fe4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00408fe8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00408fec: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00408ff0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00408ff3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00408ff7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00408ff8: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00408ffb: call 0x6ac1bc */ r_esp -= 4; W32(r_esp, 0x409000u); f_006ac1bc();
    /* 00409000: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409004: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00409005: ret  */ FN_RET(0x00408f21); r_esp += 4; return;
L_00409006:; BB(0x00409006);
    /* 00409006: mov ecx, dword ptr [0xa3ad34] */ r_ecx = R32((u32)(0xa3ad34u));
    /* 0040900c: movsx edi, dl */ r_edi = (u32)(i32)(i8)(u8)r_edx;
    /* 0040900f: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 00409012: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00409014: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00409017: lea edx, [ebx + eax + 0x8f9080] */ r_edx = (u32)(r_ebx+r_eax+0x8f9080u);
    /* 0040901e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0040901f: call 0x6ac1a4 */ r_esp -= 4; W32(r_esp, 0x409024u); f_006ac1a4();
    /* 00409024: fild dword ptr [ebx + edi*8 + 0x8f8fe4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_edi*8+0x8f8fe4u)));
    /* 0040902b: fmul dword ptr [0x8f94a4] */ ST(0) = ST(0) * R_F32((u32)(0x8f94a4u));
    /* 00409031: fdiv dword ptr [0x8f94a0] */ ST(0) = ST(0) / R_F32((u32)(0x8f94a0u));
    /* 00409037: mov ecx, dword ptr [0xa3ad34] */ r_ecx = R32((u32)(0xa3ad34u));
    /* 0040903d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00409040: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00409044: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00409049: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0040904d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00409051: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00409055: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00409058: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0040905c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0040905d: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00409060: call 0x6ac1bc */ r_esp -= 4; W32(r_esp, 0x409065u); f_006ac1bc();
L_00409065:; BB(0x00409065);
    /* 00409065: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00409068: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00409069: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040906a: ret  */ FN_RET(0x00408f21); r_esp += 4; return;
}

