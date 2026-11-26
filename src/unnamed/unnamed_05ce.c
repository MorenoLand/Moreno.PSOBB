#include "protos.h"

void f_005ce020(void) /* sub_5CE020 */
{
    FN_ENTER(0x005ce020);
    /* 005ce020: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce021: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ce023: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 005ce026: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5ce02bu); f_0082dcbc();
    /* 005ce02b: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005ce02e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ce030: fadd dword ptr [ebx + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1cu));
    /* 005ce033: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005ce036: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 005ce039: fstp dword ptr [ebx + 0x34] */ W_F32((u32)(r_ebx+0x34u), ST(0)); FPOP();
    /* 005ce03c: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 005ce03f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5ce044u); f_0082ddd8();
    /* 005ce044: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005ce047: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ce049: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 005ce04c: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 005ce04f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce050: ret  */ FN_RET(0x005ce020); r_esp += 4; return;
}

void f_005ce054(void) /* sub_5CE054 */
{
    FN_ENTER(0x005ce054);
    /* 005ce054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce055: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce057: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce059: push 0x8da05c */ { u32 v = 0x8da05cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce05e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ce064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce065: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ce06c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce06f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ce072: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ce075: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ce078: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ce07b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005ce07e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce080: je 0x5ce089 */ if (fZ) goto L_005ce089;
L_005ce082:; BB(0x005ce082);
    /* 005ce082: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce085: je 0x5ce0ab */ if (fZ) goto L_005ce0ab;
L_005ce087:; BB(0x005ce087);
    /* 005ce087: jmp 0x5ce09d */ goto L_005ce09d;
L_005ce089:; BB(0x005ce089);
    /* 005ce089: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ce08c: push 0x69 */ { u32 v = 0x69u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce08e: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce094: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce095: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce09au); f_0050b510();
    /* 005ce09a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce09d:; BB(0x005ce09d);
    /* 005ce09d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce0a0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ce0a7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce0a9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce0aa: ret  */ FN_RET(0x005ce054); r_esp += 4; return;
L_005ce0ab:; BB(0x005ce0ab);
    /* 005ce0ab: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ce0b2: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0b4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ce0b9u); f_005caba4();
    /* 005ce0b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ce0ba: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ce0bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce0bf: je 0x5ce113 */ if (fZ) goto L_005ce113;
L_005ce0c1:; BB(0x005ce0c1);
    /* 005ce0c1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ce0c8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ce0cf: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce0d5: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ce0dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce0df: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce0e2: call 0x6ee0d0 */ r_esp -= 4; W32(r_esp, 0x5ce0e7u); f_006ee0d0();
    /* 005ce0e7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ce0ea: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ce0f1:; BB(0x005ce0f1);
    /* 005ce0f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce0f3: je 0x5ce09d */ if (fZ) goto L_005ce09d;
L_005ce0f5:; BB(0x005ce0f5);
    /* 005ce0f5: mov dword ptr [eax + 0x34], 0x3f19999a */ W32((u32)(r_eax+0x34u), 0x3f19999au);
    /* 005ce0fc: mov dword ptr [eax + 0x38], 0x3f19999a */ W32((u32)(r_eax+0x38u), 0x3f19999au);
    /* 005ce103: mov dword ptr [eax + 0x3c], 0x3f19999a */ W32((u32)(r_eax+0x3cu), 0x3f19999au);
    /* 005ce10a: mov dword ptr [eax + 0x40], 0x3f4ccccd */ W32((u32)(r_eax+0x40u), 0x3f4ccccdu);
    /* 005ce111: jmp 0x5ce09d */ goto L_005ce09d;
L_005ce113:; BB(0x005ce113);
    /* 005ce113: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce115: jmp 0x5ce0f1 */ goto L_005ce0f1;
}

void f_005ce118(void) /* sub_5CE118 */
{
    FN_ENTER(0x005ce118);
    /* 005ce118: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce11b: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ce11f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce121: jne 0x5ce147 */ if (!fZ) goto L_005ce147;
L_005ce123:; BB(0x005ce123);
    /* 005ce123: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce127: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ce12a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce12b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ce12d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce12f: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005ce133: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ce139u); call_ind(t); }
    /* 005ce139: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ce13c: push 0x6a */ { u32 v = 0x6au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce13e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce13f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce144u); f_0050b510();
    /* 005ce144: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce147:; BB(0x005ce147);
    /* 005ce147: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce14a: ret  */ FN_RET(0x005ce118); r_esp += 4; return;
}

void f_005ce14c(void) /* sub_5CE14C */
{
    FN_ENTER(0x005ce14c);
    /* 005ce14c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce14d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce14e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005ce152: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce154: je 0x5ce15d */ if (fZ) goto L_005ce15d;
L_005ce156:; BB(0x005ce156);
    /* 005ce156: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce159: je 0x5ce178 */ if (fZ) goto L_005ce178;
L_005ce15b:; BB(0x005ce15b);
    /* 005ce15b: jmp 0x5ce175 */ goto L_005ce175;
L_005ce15d:; BB(0x005ce15d);
    /* 005ce15d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ce161: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce166: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce16c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce16d: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce172u); f_0050b510();
    /* 005ce172: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce175:; BB(0x005ce175);
    /* 005ce175: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce176: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce177: ret  */ FN_RET(0x005ce14c); r_esp += 4; return;
L_005ce178:; BB(0x005ce178);
    /* 005ce178: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce17a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce17c: push 0x9a */ { u32 v = 0x9au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce181: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce185: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5ce18au); f_0050a984();
    /* 005ce18a: mov ebp, eax */ r_ebp = r_eax;
    /* 005ce18c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce18f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce191: je 0x5ce175 */ if (fZ) goto L_005ce175;
L_005ce193:; BB(0x005ce193);
    /* 005ce193: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 005ce199: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce19b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5ce1a0u); f_005b8610();
    /* 005ce1a0: mov ebx, eax */ r_ebx = r_eax;
    /* 005ce1a2: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 005ce1a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce1aa: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x5ce1afu); f_005b8638();
    /* 005ce1af: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 005ce1b5: movzx ecx, word ptr [ebp + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 005ce1b9: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 005ce1c0: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 005ce1c3: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 005ce1c6: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 005ce1c9: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce1cf: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
    /* 005ce1d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce1d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce1d5: ret  */ FN_RET(0x005ce14c); r_esp += 4; return;
}

void f_005ce1d8(void) /* sub_5CE1D8 */
{
    FN_ENTER(0x005ce1d8);
    /* 005ce1d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce1d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce1da: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 005ce1de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce1e0: je 0x5ce1e9 */ if (fZ) goto L_005ce1e9;
L_005ce1e2:; BB(0x005ce1e2);
    /* 005ce1e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce1e5: je 0x5ce204 */ if (fZ) goto L_005ce204;
L_005ce1e7:; BB(0x005ce1e7);
    /* 005ce1e7: jmp 0x5ce201 */ goto L_005ce201;
L_005ce1e9:; BB(0x005ce1e9);
    /* 005ce1e9: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005ce1ed: push 0xbd */ { u32 v = 0xbdu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce1f2: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce1f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce1f9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce1feu); f_0050b510();
    /* 005ce1fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce201:; BB(0x005ce201);
    /* 005ce201: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce202: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce203: ret  */ FN_RET(0x005ce1d8); r_esp += 4; return;
L_005ce204:; BB(0x005ce204);
    /* 005ce204: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce206: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce208: push 0xbf */ { u32 v = 0xbfu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce20d: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce211: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5ce216u); f_0050a984();
    /* 005ce216: mov ebp, eax */ r_ebp = r_eax;
    /* 005ce218: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce21b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce21d: je 0x5ce201 */ if (fZ) goto L_005ce201;
L_005ce21f:; BB(0x005ce21f);
    /* 005ce21f: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 005ce225: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce227: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5ce22cu); f_005b8610();
    /* 005ce22c: mov ebx, eax */ r_ebx = r_eax;
    /* 005ce22e: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 005ce234: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce236: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x5ce23bu); f_005b8638();
    /* 005ce23b: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 005ce241: movzx ecx, word ptr [ebp + 0x2c] */ r_ecx = (u32)R16((u32)(r_ebp+0x2cu));
    /* 005ce245: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 005ce24c: mov dword ptr [ebp + 0x50], ebx */ W32((u32)(r_ebp+0x50u), r_ebx);
    /* 005ce24f: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 005ce252: mov dword ptr [ebp + 0x58], eax */ W32((u32)(r_ebp+0x58u), r_eax);
    /* 005ce255: or ecx, 0xffff0200 */ {  u32 a = r_ecx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce25b: mov word ptr [ebp + 0x2c], cx */ W16((u32)(r_ebp+0x2cu), (u16)r_ecx);
    /* 005ce25f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce260: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce261: ret  */ FN_RET(0x005ce1d8); r_esp += 4; return;
}

void f_005ce264(void) /* sub_5CE264 */
{
    FN_ENTER(0x005ce264);
    /* 005ce264: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce265: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce267: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce269: push 0x8da084 */ { u32 v = 0x8da084u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce26e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ce274: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce275: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ce27c: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce27f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ce282: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ce285: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ce288: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ce28b: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005ce28e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce290: je 0x5ce299 */ if (fZ) goto L_005ce299;
L_005ce292:; BB(0x005ce292);
    /* 005ce292: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce295: je 0x5ce2d5 */ if (fZ) goto L_005ce2d5;
L_005ce297:; BB(0x005ce297);
    /* 005ce297: jmp 0x5ce2be */ goto L_005ce2be;
L_005ce299:; BB(0x005ce299);
    /* 005ce299: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ce29c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005ce29f: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 005ce2a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2a3: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 005ce2a5: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2a7: call dword ptr [ebx + 0x10c] */ { u32 t = R32((u32)(r_ebx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ce2adu); call_ind(t); }
    /* 005ce2ad: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 005ce2b0: push 0xbe */ { u32 v = 0xbeu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce2b6: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce2bbu); f_0050b510();
    /* 005ce2bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce2be:; BB(0x005ce2be);
    /* 005ce2be: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ce2c1: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce2c4: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ce2c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce2ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ce2d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce2d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce2d4: ret  */ FN_RET(0x005ce264); r_esp += 4; return;
L_005ce2d5:; BB(0x005ce2d5);
    /* 005ce2d5: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005ce2d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005ce2db: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 005ce2de: fld dword ptr [0x92bf5c] */ FPUSH(R_F32((u32)(0x92bf5cu)));
    /* 005ce2e4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ce2e6: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 005ce2e9: mov ebx, dword ptr [ecx + 4] */ r_ebx = R32((u32)(r_ecx+0x4u));
    /* 005ce2ec: mov dword ptr [ebp - 0x38], ebx */ W32((u32)(r_ebp+0xffffffc8u), r_ebx);
    /* 005ce2ef: fadd dword ptr [ebp - 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffc8u));
    /* 005ce2f2: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 005ce2f5: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 005ce2f8: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ce2ff: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 005ce302: mov dword ptr [ebp - 0x2c], 0xbf800000 */ W32((u32)(r_ebp+0xffffffd4u), 0xbf800000u);
    /* 005ce309: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce30e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005ce315: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ce31c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ce321u); f_005caba4();
    /* 005ce321: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ce322: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ce325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce327: je 0x5ce2be */ if (fZ) goto L_005ce2be;
L_005ce329:; BB(0x005ce329);
    /* 005ce329: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ce330: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ce337: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ce33a: lea edx, [ebp - 0x3c] */ r_edx = (u32)(r_ebp+0xffffffc4u);
    /* 005ce33d: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 005ce340: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce342: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce347: push 0x3fe66666 */ { u32 v = 0x3fe66666u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce34c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce351: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce352: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce353: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce359: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x5ce35eu); f_006f3ba4();
    /* 005ce35e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ce365: jmp 0x5ce2be */ goto L_005ce2be;
}

void f_005ce36c(void) /* sub_5CE36C */
{
    FN_ENTER(0x005ce36c);
    /* 005ce36c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce372: je 0x5ce388 */ if (fZ) goto L_005ce388;
L_005ce374:; BB(0x005ce374);
    /* 005ce374: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce377: jne 0x5ce3a0 */ if (!fZ) goto L_005ce3a0;
L_005ce379:; BB(0x005ce379);
    /* 005ce379: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce37b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce37f: call 0x5ce3a4 */ r_esp -= 4; W32(r_esp, 0x5ce384u); f_005ce3a4();
    /* 005ce384: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce387: ret  */ FN_RET(0x005ce36c); r_esp += 4; return;
L_005ce388:; BB(0x005ce388);
    /* 005ce388: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce38c: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce391: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce397: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce398: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce39du); f_0050b510();
    /* 005ce39d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce3a0:; BB(0x005ce3a0);
    /* 005ce3a0: ret  */ FN_RET(0x005ce36c); r_esp += 4; return;
}

void f_005ce3a4(void) /* sub_5CE3A4 */
{
    FN_ENTER(0x005ce3a4);
    /* 005ce3a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ce3a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3a9: push 0x8da0ac */ { u32 v = 0x8da0acu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ce3b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce3b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ce3bc: sub esp, 0x1b8 */ {  u32 a = r_esp; u32 b = 0x1b8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce3c2: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ce3c5: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005ce3c8: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005ce3cb: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005ce3ce: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005ce3d0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005ce3d2: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005ce3d5: fld dword ptr [0x92bf54] */ FPUSH(R_F32((u32)(0x92bf54u)));
    /* 005ce3db: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 005ce3de: fstp dword ptr [ebp - 0x1c0] */ W_F32((u32)(r_ebp+0xfffffe40u), ST(0)); FPOP();
L_005ce3e4:; BB(0x005ce3e4);
    /* 005ce3e4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5ce3e9u); f_008587a5();
    /* 005ce3e9: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 005ce3ec: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 005ce3ef: fst dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0));
    /* 005ce3f2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ce3f5: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 005ce3f8: fdiv dword ptr [0x92bf50] */ ST(0) = ST(0) / R_F32((u32)(0x92bf50u));
    /* 005ce3fe: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ce400: fmul dword ptr [0x92bf4c] */ ST(0) = ST(0) * R_F32((u32)(0x92bf4cu));
    /* 005ce406: fadd dword ptr [edi] */ ST(0) = ST(0) + R_F32((u32)(r_edi));
    /* 005ce408: fstp dword ptr [ebp + ebx - 0x1c4] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe3cu), ST(0)); FPOP();
    /* 005ce40f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5ce414u); f_008587a5();
    /* 005ce414: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 005ce417: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ce41a: fild dword ptr [ebp - 0x2c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd4u)));
    /* 005ce41d: fdiv dword ptr [0x92bf50] */ ST(0) = ST(0) / R_F32((u32)(0x92bf50u));
    /* 005ce423: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005ce425: lea eax, [ebp - 0x1b8] */ r_eax = (u32)(r_ebp+0xfffffe48u);
    /* 005ce42b: fmul dword ptr [0x92bf4c] */ ST(0) = ST(0) * R_F32((u32)(0x92bf4cu));
    /* 005ce431: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 005ce434: fst dword ptr [ebp + ebx - 0x1bc] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe44u), ST(0));
    /* 005ce43b: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 005ce43d: fsub dword ptr [ebp + ebx - 0x1c4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ebx+0xfffffe3cu));
    /* 005ce444: lea ecx, [eax + ebx] */ r_ecx = (u32)(r_eax+r_ebx);
    /* 005ce447: fstp dword ptr [ebp + ebx - 0x1b8] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe48u), ST(0)); FPOP();
    /* 005ce44e: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 005ce451: fsub dword ptr [ebp + ebx - 0x1c0] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+r_ebx+0xfffffe40u));
    /* 005ce458: fstp dword ptr [ebp + ebx - 0x1b4] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe4cu), ST(0)); FPOP();
    /* 005ce45f: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 005ce462: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 005ce464: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005ce467: fstp dword ptr [ebp + ebx - 0x1b0] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe50u), ST(0)); FPOP();
    /* 005ce46e: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x5ce473u); f_0083173c();
    /* 005ce473: fcom dword ptr [0x92bf48] */ fx_compare(ST(0), R_F32((u32)(0x92bf48u))); 
    /* 005ce479: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005ce47b: fstp dword ptr [ebp + ebx - 0x1ac] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe54u), ST(0)); FPOP();
    /* 005ce482: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005ce483: je 0x5ce48f */ if (fZ) goto L_005ce48f;
L_005ce485:; BB(0x005ce485);
    /* 005ce485: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce488: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5ce48du); f_0082df08();
    /* 005ce48d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005ce48f:; BB(0x005ce48f);
    /* 005ce48f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005ce492: cmp esi, 0xe */ {  u32 a = r_esi; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce495: jge 0x5ce4ba */ if ((fS==fO)) goto L_005ce4ba;
L_005ce497:; BB(0x005ce497);
    /* 005ce497: fld dword ptr [0x92bf54] */ FPUSH(R_F32((u32)(0x92bf54u)));
    /* 005ce49d: fadd dword ptr [edi + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x4u));
    /* 005ce4a0: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005ce4a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce4a5: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 005ce4a8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ce4aa: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ce4ac: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005ce4ae: fstp dword ptr [ebp + ebx - 0x1c0] */ W_F32((u32)(r_ebp+r_ebx+0xfffffe40u), ST(0)); FPOP();
    /* 005ce4b5: jmp 0x5ce3e4 */ goto L_005ce3e4;
L_005ce4ba:; BB(0x005ce4ba);
    /* 005ce4ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ce4bc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005ce4bf:; BB(0x005ce4bf);
    /* 005ce4bf: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 005ce4c6: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4cb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ce4d0u); f_005caba4();
    /* 005ce4d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ce4d1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 005ce4d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce4d6: je 0x5ce533 */ if (fZ) goto L_005ce533;
L_005ce4d8:; BB(0x005ce4d8);
    /* 005ce4d8: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 005ce4df: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005ce4e6: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce4e9: lea ebx, [ebp - 0x1c4] */ r_ebx = (u32)(r_ebp+0xfffffe3cu);
    /* 005ce4ef: lea esi, [ebp - 0x1b8] */ r_esi = (u32)(r_ebp+0xfffffe48u);
    /* 005ce4f5: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4f7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005ce4fa: push 0x14000000 */ { u32 v = 0x14000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce4ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ce501: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 005ce504: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005ce506: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005ce508: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce50d: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 005ce50f: lea eax, [ebx + edi] */ r_eax = (u32)(r_ebx+r_edi);
    /* 005ce512: lea ecx, [esi + edi] */ r_ecx = (u32)(r_esi+r_edi);
    /* 005ce515: push dword ptr [ebp + edi - 0x1ac] */ { u32 v = R32((u32)(r_ebp+r_edi+0xfffffe54u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce51c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce51d: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 005ce520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce521: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce527: call 0x6f3ba4 */ r_esp -= 4; W32(r_esp, 0x5ce52cu); f_006f3ba4();
    /* 005ce52c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_005ce533:; BB(0x005ce533);
    /* 005ce533: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ce53a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ce53d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce540: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005ce543: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce546: jl 0x5ce4bf */ if ((fS!=fO)) goto L_005ce4bf;
L_005ce54c:; BB(0x005ce54c);
    /* 005ce54c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ce54f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ce552: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ce555: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ce558: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ce55f: mov esp, ebp */ r_esp = r_ebp;
    /* 005ce561: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce562: ret  */ FN_RET(0x005ce3a4); r_esp += 4; return;
}

void f_005ce564(void) /* sub_5CE564 */
{
    FN_ENTER(0x005ce564);
    /* 005ce564: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce567: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ce56b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce56d: je 0x5ce576 */ if (fZ) goto L_005ce576;
L_005ce56f:; BB(0x005ce56f);
    /* 005ce56f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce572: je 0x5ce5b0 */ if (fZ) goto L_005ce5b0;
L_005ce574:; BB(0x005ce574);
    /* 005ce574: jmp 0x5ce5ac */ goto L_005ce5ac;
L_005ce576:; BB(0x005ce576);
    /* 005ce576: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce57a: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ce57d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce57e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ce580: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce582: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005ce586: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ce58cu); call_ind(t); }
    /* 005ce58c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ce58f: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce595: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce59au); f_0050b510();
    /* 005ce59a: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005ce59e: push 0x1a9 */ { u32 v = 0x1a9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5a4: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce5a9u); f_0050b510();
    /* 005ce5a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce5ac:; BB(0x005ce5ac);
    /* 005ce5ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce5af: ret  */ FN_RET(0x005ce564); r_esp += 4; return;
L_005ce5b0:; BB(0x005ce5b0);
    /* 005ce5b0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5b2: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5b7: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005ce5bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5bc: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x5ce5c1u); f_0050b7a4();
    /* 005ce5c1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5c3: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5c5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5c7: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5cc: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005ce5d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5d1: call 0x50ac1c */ r_esp -= 4; W32(r_esp, 0x5ce5d6u); f_0050ac1c();
    /* 005ce5d6: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce5d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce5dc: ret  */ FN_RET(0x005ce564); r_esp += 4; return;
}

void f_005ce5e0(void) /* sub_5CE5E0 */
{
    FN_ENTER(0x005ce5e0);
    /* 005ce5e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5e1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005ce5e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce5e7: je 0x5ce5f0 */ if (fZ) goto L_005ce5f0;
L_005ce5e9:; BB(0x005ce5e9);
    /* 005ce5e9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce5ec: je 0x5ce615 */ if (fZ) goto L_005ce615;
L_005ce5ee:; BB(0x005ce5ee);
    /* 005ce5ee: jmp 0x5ce613 */ goto L_005ce613;
L_005ce5f0:; BB(0x005ce5f0);
    /* 005ce5f0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ce5f4: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce5f9: lea ebp, [eax + 0x300] */ r_ebp = (u32)(r_eax+0x300u);
    /* 005ce5ff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce600: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce605u); f_0050b510();
    /* 005ce605: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce60a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce60b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce610u); f_0050b510();
    /* 005ce610: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce613:; BB(0x005ce613);
    /* 005ce613: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce614: ret  */ FN_RET(0x005ce5e0); r_esp += 4; return;
L_005ce615:; BB(0x005ce615);
    /* 005ce615: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce61a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005ce61e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce61f: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce624u); f_0050b510();
    /* 005ce624: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce629: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ce62d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce62e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce633u); f_0050b510();
    /* 005ce633: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce637: ret  */ FN_RET(0x005ce5e0); r_esp += 4; return;
}

void f_005ce638(void) /* sub_5CE638 */
{
    FN_ENTER(0x005ce638);
    /* 005ce638: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce639: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005ce63d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce63f: je 0x5ce648 */ if (fZ) goto L_005ce648;
L_005ce641:; BB(0x005ce641);
    /* 005ce641: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce644: je 0x5ce66d */ if (fZ) goto L_005ce66d;
L_005ce646:; BB(0x005ce646);
    /* 005ce646: jmp 0x5ce66b */ goto L_005ce66b;
L_005ce648:; BB(0x005ce648);
    /* 005ce648: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ce64c: push 0xc6 */ { u32 v = 0xc6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce651: lea ebx, [eax + 0x300] */ r_ebx = (u32)(r_eax+0x300u);
    /* 005ce657: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce658: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce65du); f_0050b510();
    /* 005ce65d: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce662: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce663: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce668u); f_0050b510();
    /* 005ce668: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005ce66b:; BB(0x005ce66b);
    /* 005ce66b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce66c: ret  */ FN_RET(0x005ce638); r_esp += 4; return;
L_005ce66d:; BB(0x005ce66d);
    /* 005ce66d: push 0x1c5 */ { u32 v = 0x1c5u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce672: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005ce676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce677: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce67cu); f_0050b510();
    /* 005ce67c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce67f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce681: je 0x5ce691 */ if (fZ) goto L_005ce691;
L_005ce683:; BB(0x005ce683);
    /* 005ce683: mov dword ptr [eax + 0x44], 0x40000000 */ W32((u32)(r_eax+0x44u), 0x40000000u);
    /* 005ce68a: mov dword ptr [eax + 0x48], 0x40000000 */ W32((u32)(r_eax+0x48u), 0x40000000u);
L_005ce691:; BB(0x005ce691);
    /* 005ce691: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce696: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005ce69a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce69b: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce6a0u); f_0050b510();
    /* 005ce6a0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce6a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce6a5: je 0x5ce66b */ if (fZ) goto L_005ce66b;
L_005ce6a7:; BB(0x005ce6a7);
    /* 005ce6a7: mov dword ptr [eax + 0x44], 0x40000000 */ W32((u32)(r_eax+0x44u), 0x40000000u);
    /* 005ce6ae: mov dword ptr [eax + 0x48], 0x40000000 */ W32((u32)(r_eax+0x48u), 0x40000000u);
    /* 005ce6b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce6b6: ret  */ FN_RET(0x005ce638); r_esp += 4; return;
}

void f_005ce6b8(void) /* sub_5CE6B8 */
{
    FN_ENTER(0x005ce6b8);
    /* 005ce6b8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce6bb: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ce6bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce6c1: jne 0x5ce6ea */ if (!fZ) goto L_005ce6ea;
L_005ce6c3:; BB(0x005ce6c3);
    /* 005ce6c3: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce6c7: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ce6ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6cb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ce6cd: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6cf: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005ce6d3: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ce6d9u); call_ind(t); }
    /* 005ce6d9: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ce6dc: push 0x1aa */ { u32 v = 0x1aau; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce6e2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce6e7u); f_0050b510();
    /* 005ce6e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce6ea:; BB(0x005ce6ea);
    /* 005ce6ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce6ed: ret  */ FN_RET(0x005ce6b8); r_esp += 4; return;
}

void f_005ce6f0(void) /* sub_5CE6F0 */
{
    FN_ENTER(0x005ce6f0);
    /* 005ce6f0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce6f3: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ce6f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce6f9: jne 0x5ce722 */ if (!fZ) goto L_005ce722;
L_005ce6fb:; BB(0x005ce6fb);
    /* 005ce6fb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce6ff: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005ce702: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce703: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005ce705: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce707: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 005ce70b: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5ce711u); call_ind(t); }
    /* 005ce711: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005ce714: push 0x1ab */ { u32 v = 0x1abu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce719: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce71a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce71fu); f_0050b510();
    /* 005ce71f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce722:; BB(0x005ce722);
    /* 005ce722: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce725: ret  */ FN_RET(0x005ce6f0); r_esp += 4; return;
}

void f_005ce728(void) /* sub_5CE728 */
{
    FN_ENTER(0x005ce728);
    /* 005ce728: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce72c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce72e: je 0x5ce74b */ if (fZ) goto L_005ce74b;
L_005ce730:; BB(0x005ce730);
    /* 005ce730: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce733: jne 0x5ce754 */ if (!fZ) goto L_005ce754;
L_005ce735:; BB(0x005ce735);
    /* 005ce735: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce739: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce73b: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce742: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce747u); f_0050b510();
    /* 005ce747: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce74a: ret  */ FN_RET(0x005ce728); r_esp += 4; return;
L_005ce74b:; BB(0x005ce74b);
    /* 005ce74b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce74f: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce754u); f_0068cb90();
L_005ce754:; BB(0x005ce754);
    /* 005ce754: ret  */ FN_RET(0x005ce728); r_esp += 4; return;
}

void f_005ce758(void) /* sub_5CE758 */
{
    FN_ENTER(0x005ce758);
    /* 005ce758: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce75e: je 0x5ce77b */ if (fZ) goto L_005ce77b;
L_005ce760:; BB(0x005ce760);
    /* 005ce760: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce763: jne 0x5ce784 */ if (!fZ) goto L_005ce784;
L_005ce765:; BB(0x005ce765);
    /* 005ce765: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce769: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce76b: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce771: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce772: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce777u); f_0050b510();
    /* 005ce777: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce77a: ret  */ FN_RET(0x005ce758); r_esp += 4; return;
L_005ce77b:; BB(0x005ce77b);
    /* 005ce77b: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce77f: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce784u); f_0068cb90();
L_005ce784:; BB(0x005ce784);
    /* 005ce784: ret  */ FN_RET(0x005ce758); r_esp += 4; return;
}

void f_005ce788(void) /* sub_5CE788 */
{
    FN_ENTER(0x005ce788);
    /* 005ce788: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce78c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce78e: je 0x5ce797 */ if (fZ) goto L_005ce797;
L_005ce790:; BB(0x005ce790);
    /* 005ce790: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce793: je 0x5ce7a1 */ if (fZ) goto L_005ce7a1;
L_005ce795:; BB(0x005ce795);
    /* 005ce795: jmp 0x5ce7a0 */ goto L_005ce7a0;
L_005ce797:; BB(0x005ce797);
    /* 005ce797: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce79b: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce7a0u); f_0068cb90();
L_005ce7a0:; BB(0x005ce7a0);
    /* 005ce7a0: ret  */ FN_RET(0x005ce788); r_esp += 4; return;
L_005ce7a1:; BB(0x005ce7a1);
    /* 005ce7a1: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce7a5: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7a7: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce7ad: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7ae: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce7b3u); f_0050b510();
    /* 005ce7b3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce7b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce7b8: je 0x5ce7a0 */ if (fZ) goto L_005ce7a0;
L_005ce7ba:; BB(0x005ce7ba);
    /* 005ce7ba: mov dword ptr [eax + 0x44], 0x3e4ccccd */ W32((u32)(r_eax+0x44u), 0x3e4ccccdu);
    /* 005ce7c1: mov dword ptr [eax + 0x48], 0x3e99999a */ W32((u32)(r_eax+0x48u), 0x3e99999au);
    /* 005ce7c8: ret  */ FN_RET(0x005ce788); r_esp += 4; return;
}

void f_005ce7cc(void) /* sub_5CE7CC */
{
    FN_ENTER(0x005ce7cc);
    /* 005ce7cc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce7d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce7d2: je 0x5ce7eb */ if (fZ) goto L_005ce7eb;
L_005ce7d4:; BB(0x005ce7d4);
    /* 005ce7d4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce7d7: jne 0x5ce7f4 */ if (!fZ) goto L_005ce7f4;
L_005ce7d9:; BB(0x005ce7d9);
    /* 005ce7d9: push 0x1ac */ { u32 v = 0x1acu; r_esp -= 4; W32(r_esp, v); }
    /* 005ce7de: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ce7e2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce7e7u); f_0050b510();
    /* 005ce7e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce7ea: ret  */ FN_RET(0x005ce7cc); r_esp += 4; return;
L_005ce7eb:; BB(0x005ce7eb);
    /* 005ce7eb: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce7ef: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce7f4u); f_0068cb90();
L_005ce7f4:; BB(0x005ce7f4);
    /* 005ce7f4: ret  */ FN_RET(0x005ce7cc); r_esp += 4; return;
}

void f_005ce7f8(void) /* sub_5CE7F8 */
{
    FN_ENTER(0x005ce7f8);
    /* 005ce7f8: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce7fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce7fe: je 0x5ce81e */ if (fZ) goto L_005ce81e;
L_005ce800:; BB(0x005ce800);
    /* 005ce800: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce803: jne 0x5ce827 */ if (!fZ) goto L_005ce827;
L_005ce805:; BB(0x005ce805);
    /* 005ce805: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce809: push 0x10a */ { u32 v = 0x10au; r_esp -= 4; W32(r_esp, v); }
    /* 005ce80e: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce814: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce815: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce81au); f_0050b510();
    /* 005ce81a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce81d: ret  */ FN_RET(0x005ce7f8); r_esp += 4; return;
L_005ce81e:; BB(0x005ce81e);
    /* 005ce81e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce822: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce827u); f_0068cb90();
L_005ce827:; BB(0x005ce827);
    /* 005ce827: ret  */ FN_RET(0x005ce7f8); r_esp += 4; return;
}

void f_005ce828(void) /* sub_5CE828 */
{
    FN_ENTER(0x005ce828);
    /* 005ce828: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce82c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce82e: je 0x5ce837 */ if (fZ) goto L_005ce837;
L_005ce830:; BB(0x005ce830);
    /* 005ce830: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce833: je 0x5ce841 */ if (fZ) goto L_005ce841;
L_005ce835:; BB(0x005ce835);
    /* 005ce835: jmp 0x5ce840 */ goto L_005ce840;
L_005ce837:; BB(0x005ce837);
    /* 005ce837: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce83b: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce840u); f_0068cb90();
L_005ce840:; BB(0x005ce840);
    /* 005ce840: ret  */ FN_RET(0x005ce828); r_esp += 4; return;
L_005ce841:; BB(0x005ce841);
    /* 005ce841: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce845: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce84a: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce850: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce851: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce856u); f_0050b510();
    /* 005ce856: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ce859: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce85b: je 0x5ce840 */ if (fZ) goto L_005ce840;
L_005ce85d:; BB(0x005ce85d);
    /* 005ce85d: mov dword ptr [eax + 0x44], 0x3e4ccccd */ W32((u32)(r_eax+0x44u), 0x3e4ccccdu);
    /* 005ce864: mov dword ptr [eax + 0x48], 0x3e99999a */ W32((u32)(r_eax+0x48u), 0x3e99999au);
    /* 005ce86b: ret  */ FN_RET(0x005ce828); r_esp += 4; return;
}

void f_005ce86c(void) /* sub_5CE86C */
{
    FN_ENTER(0x005ce86c);
    /* 005ce86c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005ce870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce872: je 0x5ce892 */ if (fZ) goto L_005ce892;
L_005ce874:; BB(0x005ce874);
    /* 005ce874: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005ce877: jne 0x5ce89b */ if (!fZ) goto L_005ce89b;
L_005ce879:; BB(0x005ce879);
    /* 005ce879: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005ce87d: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce882: lea edx, [eax + 0x300] */ r_edx = (u32)(r_eax+0x300u);
    /* 005ce888: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce889: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5ce88eu); f_0050b510();
    /* 005ce88e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce891: ret  */ FN_RET(0x005ce86c); r_esp += 4; return;
L_005ce892:; BB(0x005ce892);
    /* 005ce892: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 005ce896: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce89bu); f_0068cb90();
L_005ce89b:; BB(0x005ce89b);
    /* 005ce89b: ret  */ FN_RET(0x005ce86c); r_esp += 4; return;
}

void f_005ce89c(void) /* sub_5CE89C */
{
    FN_ENTER(0x005ce89c);
    /* 005ce89c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce89d: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ce8a0: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 005ce8a4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce8a6: jne 0x5ce8b4 */ if (!fZ) goto L_005ce8b4;
L_005ce8a8:; BB(0x005ce8a8);
    /* 005ce8a8: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005ce8ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce8ae: je 0x5ce94a */ if (fZ) goto L_005ce94a;
L_005ce8b4:; BB(0x005ce8b4);
    /* 005ce8b4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005ce8b8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ce8bb: jl 0x5ce8c2 */ if ((fS!=fO)) goto L_005ce8c2;
L_005ce8bd:; BB(0x005ce8bd);
    /* 005ce8bd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce8c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce8c1: ret  */ FN_RET(0x005ce89c); r_esp += 4; return;
L_005ce8c2:; BB(0x005ce8c2);
    /* 005ce8c2: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5ce8c7u); f_00807d60();
    /* 005ce8c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce8c9: jne 0x5ce8d0 */ if (!fZ) goto L_005ce8d0;
L_005ce8cb:; BB(0x005ce8cb);
    /* 005ce8cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce8ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce8cf: ret  */ FN_RET(0x005ce89c); r_esp += 4; return;
L_005ce8d0:; BB(0x005ce8d0);
    /* 005ce8d0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ce8d2: lea ecx, [ebp + 0xdf8] */ r_ecx = (u32)(r_ebp+0xdf8u);
    /* 005ce8d8: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ce8ddu); f_0069792c();
    /* 005ce8dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce8df: je 0x5ce94a */ if (fZ) goto L_005ce94a;
L_005ce8e1:; BB(0x005ce8e1);
    /* 005ce8e1: movzx edx, byte ptr [eax + 0xf2] */ r_edx = (u32)R8((u32)(r_eax+0xf2u));
    /* 005ce8e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce8ea: je 0x5ce8f1 */ if (fZ) goto L_005ce8f1;
L_005ce8ec:; BB(0x005ce8ec);
    /* 005ce8ec: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce8ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce8f0: ret  */ FN_RET(0x005ce89c); r_esp += 4; return;
L_005ce8f1:; BB(0x005ce8f1);
    /* 005ce8f1: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005ce8f7: test edx, 0x400020 */ {  u32 a = r_edx; u32 b = 0x400020u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce8fd: je 0x5ce91b */ if (fZ) goto L_005ce91b;
L_005ce8ff:; BB(0x005ce8ff);
    /* 005ce8ff: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005ce903: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 005ce907: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 005ce90b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005ce90f: mov eax, ebp */ r_eax = r_ebp;
    /* 005ce911: call 0x5ce95c */ r_esp -= 4; W32(r_esp, 0x5ce916u); f_005ce95c();
    /* 005ce916: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce91a: ret  */ FN_RET(0x005ce89c); r_esp += 4; return;
L_005ce91b:; BB(0x005ce91b);
    /* 005ce91b: mov ecx, eax */ r_ecx = r_eax;
    /* 005ce91d: call 0x5e952c */ r_esp -= 4; W32(r_esp, 0x5ce922u); f_005e952c();
    /* 005ce922: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ce925: cmp eax, 0x29 */ {  u32 a = r_eax; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ce928: jae 0x5ce94a */ if (!fC) goto L_005ce94a;
L_005ce92a:; BB(0x005ce92a);
    /* 005ce92a: mov eax, dword ptr [eax*4 + 0x9c2660] */ r_eax = R32((u32)(r_eax*4+0x9c2660u));
    /* 005ce931: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce933: je 0x5ce94a */ if (fZ) goto L_005ce94a;
L_005ce935:; BB(0x005ce935);
    /* 005ce935: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005ce939: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce93a: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 005ce93e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce93f: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005ce943: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce944: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce945: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5ce947u); call_ind(t); }
    /* 005ce947: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005ce94a:; BB(0x005ce94a);
    /* 005ce94a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce94d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce94e: ret  */ FN_RET(0x005ce89c); r_esp += 4; return;
}

void f_005ce95c(void) /* sub_5CE95C */
{
    FN_ENTER(0x005ce95c);
    /* 005ce95c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005ce960: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce962: jne 0x5ce96b */ if (!fZ) goto L_005ce96b;
L_005ce964:; BB(0x005ce964);
    /* 005ce964: mov ecx, eax */ r_ecx = r_eax;
    /* 005ce966: call 0x68cb90 */ r_esp -= 4; W32(r_esp, 0x5ce96bu); f_0068cb90();
L_005ce96b:; BB(0x005ce96b);
    /* 005ce96b: ret  */ FN_RET(0x005ce95c); r_esp += 4; return;
}

void f_005ce96c(void) /* sub_5CE96C */
{
    FN_ENTER(0x005ce96c);
    /* 005ce96c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ce96d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ce96f: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 005ce972: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 005ce975: fsub dword ptr [0x92bf2c] */ ST(0) = ST(0) - R_F32((u32)(0x92bf2cu));
    /* 005ce97b: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 005ce97e: add eax, 0xffffe667 */ {  u32 a = r_eax; u32 b = 0xffffe667u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005ce983: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 005ce986: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ce988: call 0x5ce020 */ r_esp -= 4; W32(r_esp, 0x5ce98du); f_005ce020();
    /* 005ce98d: mov ecx, dword ptr [ebp + 0x4c] */ r_ecx = R32((u32)(r_ebp+0x4cu));
    /* 005ce990: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ce992: je 0x5ce99d */ if (fZ) goto L_005ce99d;
L_005ce994:; BB(0x005ce994);
    /* 005ce994: lea eax, [ebp + 0x34] */ r_eax = (u32)(r_ebp+0x34u);
    /* 005ce997: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ce998: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5ce99du); f_00508db8();
L_005ce99d:; BB(0x005ce99d);
    /* 005ce99d: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 005ce9a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005ce9a2: jle 0x5ce9ac */ if ((fZ||fS!=fO)) goto L_005ce9ac;
L_005ce9a4:; BB(0x005ce9a4);
    /* 005ce9a4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ce9a7: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 005ce9aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce9ab: ret  */ FN_RET(0x005ce96c); r_esp += 4; return;
L_005ce9ac:; BB(0x005ce9ac);
    /* 005ce9ac: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005ce9b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce9b5: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005ce9b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ce9ba: ret  */ FN_RET(0x005ce96c); r_esp += 4; return;
}

void f_005ce9bc(void) /* sub_5CE9BC */
{
    FN_ENTER(0x005ce9bc);
    /* 005ce9bc: mov dword ptr [0xa8d94c], 0x3f800000 */ W32((u32)(0xa8d94cu), 0x3f800000u);
    /* 005ce9c6: mov dword ptr [0xa8d950], 0x41000000 */ W32((u32)(0xa8d950u), 0x41000000u);
    /* 005ce9d0: mov dword ptr [0xa8d954], 0x3fc00000 */ W32((u32)(0xa8d954u), 0x3fc00000u);
    /* 005ce9da: ret  */ FN_RET(0x005ce9bc); r_esp += 4; return;
}

void f_005ce9dc(void) /* sub_5CE9DC */
{
    FN_ENTER(0x005ce9dc);
    /* 005ce9dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ce9df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ce9e1: call 0x5cea00 */ r_esp -= 4; W32(r_esp, 0x5ce9e6u); f_005cea00();
    /* 005ce9e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ce9ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ce9ec: jne 0x5ce9f2 */ if (!fZ) goto L_005ce9f2;
L_005ce9ee:; BB(0x005ce9ee);
    /* 005ce9ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce9ef: ret 4 */ FN_RET(0x005ce9dc); r_esp += 8; return;
L_005ce9f2:; BB(0x005ce9f2);
    /* 005ce9f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ce9f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ce9f8u); f_005c2f74();
    /* 005ce9f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ce9f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ce9fa: ret 4 */ FN_RET(0x005ce9dc); r_esp += 8; return;
}

void f_005cea00(void) /* sub_5CEA00 */
{
    FN_ENTER(0x005cea00);
    /* 005cea00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cea01: mov ebp, esp */ r_ebp = r_esp;
    /* 005cea03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cea05: push 0x8da0c8 */ { u32 v = 0x8da0c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005cea0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cea10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cea11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cea18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cea1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cea1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005cea21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005cea24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005cea27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005cea2a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cea31: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cea34: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005cea37: mov dword ptr [eax], 0xb0cbb8 */ W32((u32)(r_eax), 0xb0cbb8u);
    /* 005cea3d: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cea42u); f_005cdcc0();
    /* 005cea42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cea43: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005cea4a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cea4d: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5cea52u); f_008171e8();
    /* 005cea52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cea55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cea5c: mov esp, ebp */ r_esp = r_ebp;
    /* 005cea5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cea5f: ret  */ FN_RET(0x005cea00); r_esp += 4; return;
}

void f_005cea60(void) /* sub_5CEA60 */
{
    FN_ENTER(0x005cea60);
    /* 005cea60: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005cea64: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005cea68: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cea6d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005cea71: ret  */ FN_RET(0x005cea60); r_esp += 4; return;
}

void f_005cea74(void) /* sub_5CEA74 */
{
    FN_ENTER(0x005cea74);
    /* 005cea74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cea75: mov ebp, esp */ r_ebp = r_esp;
    /* 005cea77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cea79: push 0x8da10a */ { u32 v = 0x8da10au; r_esp -= 4; W32(r_esp, v); }
    /* 005cea7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cea84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cea85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cea8c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cea8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cea92: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cea95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cea98: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cea9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cea9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ceaa0: je 0x5ceb37 */ if (fZ) goto L_005ceb37;
L_005ceaa6:; BB(0x005ceaa6);
    /* 005ceaa6: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005ceaad: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceaaf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ceab4u); f_005caba4();
    /* 005ceab4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ceab7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ceaba: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005ceabd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceabf: je 0x5ceb45 */ if (fZ) goto L_005ceb45;
L_005ceac5:; BB(0x005ceac5);
    /* 005ceac5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005ceacc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cead3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cead6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cead9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceada: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ceae0: call 0x5ceb4c */ r_esp -= 4; W32(r_esp, 0x5ceae5u); f_005ceb4c();
    /* 005ceae5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005ceaec:; BB(0x005ceaec);
    /* 005ceaec: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ceaf3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ceaf6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ceaf8: je 0x5ceb37 */ if (fZ) goto L_005ceb37;
L_005ceafa:; BB(0x005ceafa);
    /* 005ceafa: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005ceb01: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb03: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ceb08u); f_005caba4();
    /* 005ceb08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ceb09: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ceb0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ceb0e: je 0x5ceb37 */ if (fZ) goto L_005ceb37;
L_005ceb10:; BB(0x005ceb10);
    /* 005ceb10: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005ceb17: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005ceb1e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ceb21: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb23: push 0x5cea60 */ { u32 v = 0x5cea60u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb29: mov ecx, eax */ r_ecx = r_eax;
    /* 005ceb2b: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5ceb30u); f_005e5b88();
    /* 005ceb30: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005ceb37:; BB(0x005ceb37);
    /* 005ceb37: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ceb3a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ceb41: mov esp, ebp */ r_esp = r_ebp;
    /* 005ceb43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceb44: ret  */ FN_RET(0x005cea74); r_esp += 4; return;
L_005ceb45:; BB(0x005ceb45);
    /* 005ceb45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ceb47: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ceb4a: jmp 0x5ceaec */ goto L_005ceaec;
}

void f_005ceb4c(void) /* sub_5CEB4C */
{
    FN_ENTER(0x005ceb4c);
    /* 005ceb4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb4d: mov ebp, esp */ r_ebp = r_esp;
    /* 005ceb4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb51: push 0x8da124 */ { u32 v = 0x8da124u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ceb5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceb5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ceb64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ceb67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ceb6a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ceb6d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ceb70: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ceb73: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ceb76: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ceb79: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ceb7c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ceb7f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5ceb84u); f_008193cc();
    /* 005ceb84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ceb8b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ceb8e: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005ceb91: mov dword ptr [ebx], 0xb0cbb8 */ W32((u32)(r_ebx), 0xb0cbb8u);
    /* 005ceb97: mov eax, dword ptr [0x9c2720] */ r_eax = R32((u32)(0x9c2720u));
    /* 005ceb9c: push 0x1bb */ { u32 v = 0x1bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceba1: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005ceba4: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005ceba6: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005cebaa: mov word ptr [ebx + 0x20], cx */ W16((u32)(r_ebx+0x20u), (u16)r_ecx);
    /* 005cebae: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 005cebb1: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 005cebb4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005cebb6: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 005cebbc: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005cebbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cebc1: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cebc3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cebc5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cebc7: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cebc9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cebcb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cebcd: lea eax, [edx + eax + 0x1c] */ r_eax = (u32)(r_edx+r_eax+0x1cu);
    /* 005cebd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cebd2: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5cebd7u); f_00509590();
    /* 005cebd7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cebda: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005cebdd: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cebe0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cebe3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cebe6: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 005cebea: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 005cebed: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cebf3: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 005cebf7: mov eax, ecx */ r_eax = r_ecx;
    /* 005cebf9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cebfc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cec03: mov esp, ebp */ r_esp = r_ebp;
    /* 005cec05: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cec06: ret 8 */ FN_RET(0x005ceb4c); r_esp += 12; return;
}

void f_005cec0c(void) /* sub_5CEC0C */
{
    FN_ENTER(0x005cec0c);
    /* 005cec0c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005cec0d: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cec10: mov esi, ecx */ r_esi = r_ecx;
    /* 005cec12: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 005cec15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cec17: je 0x5cecce */ if (fZ) goto L_005cecce;
L_005cec1d:; BB(0x005cec1d);
    /* 005cec1d: movzx eax, word ptr [esi + 0x20] */ r_eax = (u32)R16((u32)(r_esi+0x20u));
    /* 005cec21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cec22: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5cec27u); f_007b4d18();
    /* 005cec27: mov ecx, eax */ r_ecx = r_eax;
    /* 005cec29: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cec2c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cec2e: je 0x5cecce */ if (fZ) goto L_005cecce;
L_005cec34:; BB(0x005cec34);
    /* 005cec34: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005cec37: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005cec3a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cec3c: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cec3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cec40: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005cec42: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cec44: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005cec4a: mov ecx, dword ptr [eax + edx*4 + 0x1c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 005cec4e: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005cec51: mov ecx, dword ptr [eax + edx*4 + 0x20] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cec55: mov eax, dword ptr [eax + edx*4 + 0x24] */ r_eax = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 005cec59: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005cec5d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005cec61: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5cec66u); f_008587a5();
    /* 005cec66: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005cec6a: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 005cec6e: fdiv dword ptr [0x92bf80] */ ST(0) = ST(0) / R_F32((u32)(0x92bf80u));
    /* 005cec74: fmul dword ptr [0x92bf7c] */ ST(0) = ST(0) * R_F32((u32)(0x92bf7cu));
    /* 005cec7a: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 005cec7d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005cec80: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5cec85u); f_008587a5();
    /* 005cec85: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005cec89: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005cec8d: fdiv dword ptr [0x92bf80] */ ST(0) = ST(0) / R_F32((u32)(0x92bf80u));
    /* 005cec93: fmul dword ptr [0x92bf7c] */ ST(0) = ST(0) * R_F32((u32)(0x92bf7cu));
    /* 005cec99: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 005cec9d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005ceca1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5ceca6u); f_008587a5();
    /* 005ceca6: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 005ceca9: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005cecad: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005cecb1: fdiv dword ptr [0x92bf80] */ ST(0) = ST(0) / R_F32((u32)(0x92bf80u));
    /* 005cecb7: fmul dword ptr [0x92bf7c] */ ST(0) = ST(0) * R_F32((u32)(0x92bf7cu));
    /* 005cecbd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005cecc0: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 005cecc4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005cecc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cecc9: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5cecceu); f_00508db8();
L_005cecce:; BB(0x005cecce);
    /* 005cecce: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cecd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cecd2: ret  */ FN_RET(0x005cec0c); r_esp += 4; return;
}

void f_005cecd4(void) /* sub_5CECD4 */
{
    FN_ENTER(0x005cecd4);
    /* 005cecd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cecd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005cecd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cecd9: push 0x8da140 */ { u32 v = 0x8da140u; r_esp -= 4; W32(r_esp, v); }
    /* 005cecde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cece4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cece5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cecec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cecef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cecf2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cecf5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cecf8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cecfb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005cecfe: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005ced01: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ced08: mov eax, ecx */ r_eax = r_ecx;
    /* 005ced0a: mov dword ptr [eax], 0xb0cc18 */ W32((u32)(r_eax), 0xb0cc18u);
    /* 005ced10: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005ced12:; BB(0x005ced12);
    /* 005ced12: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ced15: push dword ptr [eax + ebx*4 + 0x28] */ { u32 v = R32((u32)(r_eax+r_ebx*4+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ced19: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5ced1eu); f_005cdcc0();
    /* 005ced1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ced1f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ced22: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ced25: jl 0x5ced12 */ if ((fS!=fO)) goto L_005ced12;
L_005ced27:; BB(0x005ced27);
    /* 005ced27: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ced2e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ced31: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5ced36u); f_008171e8();
    /* 005ced36: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ced39: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ced3b: jne 0x5ced56 */ if (!fZ) goto L_005ced56;
L_005ced3d:; BB(0x005ced3d);
    /* 005ced3d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ced40: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005ced43: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005ced46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ced49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ced50: mov esp, ebp */ r_esp = r_ebp;
    /* 005ced52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ced53: ret 4 */ FN_RET(0x005cecd4); r_esp += 8; return;
L_005ced56:; BB(0x005ced56);
    /* 005ced56: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005ced59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ced5a: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ced5fu); f_005c2f74();
    /* 005ced5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ced60: jmp 0x5ced3d */ goto L_005ced3d;
}

void f_005ced64(void) /* sub_5CED64 */
{
    FN_ENTER(0x005ced64);
    /* 005ced64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ced65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ced66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ced67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced68: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ced6b: mov esi, ecx */ r_esi = r_ecx;
    /* 005ced6d: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005ced71: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 005ced75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ced76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced77: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5ced7cu); f_007b9df0();
    /* 005ced7c: mov ebp, eax */ r_ebp = r_eax;
    /* 005ced7e: movzx edx, word ptr [esi + 0x1e] */ r_edx = (u32)R16((u32)(r_esi+0x1eu));
    /* 005ced82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ced83: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5ced88u); f_0068d5a8();
    /* 005ced88: mov ebx, eax */ r_ebx = r_eax;
    /* 005ced8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005ced8d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ced8f: je 0x5cef17 */ if (fZ) goto L_005cef17;
L_005ced95:; BB(0x005ced95);
    /* 005ced95: mov edi, dword ptr [esi + 0x20] */ r_edi = R32((u32)(r_esi+0x20u));
    /* 005ced98: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005ced9e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005ceda1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ceda3: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005ceda5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ceda7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005ceda9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005cedab: mov edi, dword ptr [eax + edx*4 + 0x1c] */ r_edi = R32((u32)(r_eax+r_edx*4+0x1cu));
    /* 005cedaf: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 005cedb2: mov edi, dword ptr [eax + edx*4 + 0x20] */ r_edi = R32((u32)(r_eax+r_edx*4+0x20u));
    /* 005cedb6: mov dword ptr [esi + 0x3c], edi */ W32((u32)(r_esi+0x3cu), r_edi);
    /* 005cedb9: mov edx, dword ptr [eax + edx*4 + 0x24] */ r_edx = R32((u32)(r_eax+r_edx*4+0x24u));
    /* 005cedbd: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 005cedc0: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005cedc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cedc5: jne 0x5cede0 */ if (!fZ) goto L_005cede0;
L_005cedc7:; BB(0x005cedc7);
    /* 005cedc7: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005cedc9: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 005cedce: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 005cedd1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cedd2: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5cedd7u); f_0050981c();
    /* 005cedd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cedda: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005ceddd: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
L_005cede0:; BB(0x005cede0);
    /* 005cede0: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cede3: je 0x5ceee3 */ if (fZ) goto L_005ceee3;
L_005cede9:; BB(0x005cede9);
    /* 005cede9: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cedec: jl 0x5cee09 */ if ((fS!=fO)) goto L_005cee09;
L_005cedee:; BB(0x005cedee);
    /* 005cedee: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005cedf1: jge 0x5cee09 */ if ((fS==fO)) goto L_005cee09;
L_005cedf3:; BB(0x005cedf3);
    /* 005cedf3: fld dword ptr [0x92bf98] */ FPUSH(R_F32((u32)(0x92bf98u)));
    /* 005cedf9: fadd dword ptr [esi + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x34u));
    /* 005cedfc: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 005cedff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005cee01: fst dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0));
    /* 005cee04: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005cee06: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
L_005cee09:; BB(0x005cee09);
    /* 005cee09: cmp edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cee0c: jne 0x5cee70 */ if (!fZ) goto L_005cee70;
L_005cee0e:; BB(0x005cee0e);
    /* 005cee0e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005cee11: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 005cee14: lea edi, [esi + 0x30] */ r_edi = (u32)(r_esi+0x30u);
    /* 005cee17: mov esi, eax */ r_esi = r_eax;
L_005cee19:; BB(0x005cee19);
    /* 005cee19: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 005cee1b: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cee20u); f_005cdcc0();
    /* 005cee20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005cee21: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 005cee27: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005cee2a: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005cee2c: ja 0x5cee19 */ if ((!fC&&!fZ)) goto L_005cee19;
L_005cee2e:; BB(0x005cee2e);
    /* 005cee2e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 005cee31: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cee33: je 0x5ceede */ if (fZ) goto L_005ceede;
L_005cee39:; BB(0x005cee39);
    /* 005cee39: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cee3b: je 0x5cee6d */ if (fZ) goto L_005cee6d;
L_005cee3d:; BB(0x005cee3d);
    /* 005cee3d: mov edi, dword ptr [ebp] */ r_edi = R32((u32)(r_ebp));
    /* 005cee40: mov dword ptr [esp + 4], 4 */ W32((u32)(r_esp+0x4u), 0x4u);
    /* 005cee48: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005cee4d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005cee4f: mov dword ptr [esp + 8], 0x44fa0000 */ W32((u32)(r_esp+0x8u), 0x44fa0000u);
    /* 005cee57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee5b: push 0x44fa0000 */ { u32 v = 0x44fa0000u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee60: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005cee63: call dword ptr [edi + 0x60] */ { u32 t = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, 0x5cee66u); call_ind(t); }
    /* 005cee66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005cee68: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005cee6b: jmp 0x5cee70 */ goto L_005cee70;
L_005cee6d:; BB(0x005cee6d);
    /* 005cee6d: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
L_005cee70:; BB(0x005cee70);
    /* 005cee70: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cee73: jne 0x5cee8e */ if (!fZ) goto L_005cee8e;
L_005cee75:; BB(0x005cee75);
    /* 005cee75: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee77: push 0x139 */ { u32 v = 0x139u; r_esp -= 4; W32(r_esp, v); }
    /* 005cee7c: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005cee7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cee80: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5cee85u); f_0050981c();
    /* 005cee85: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cee88: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005cee8b: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
L_005cee8e:; BB(0x005cee8e);
    /* 005cee8e: cmp edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005cee91: jne 0x5ceeb7 */ if (!fZ) goto L_005ceeb7;
L_005cee93:; BB(0x005cee93);
    /* 005cee93: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 005cee96: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5cee9bu); f_005cdcc0();
    /* 005cee9b: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005cee9f: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 005ceea6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005ceeab: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005ceeaf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ceeb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ceeb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceeb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ceeb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ceeb6: ret  */ FN_RET(0x005ced64); r_esp += 4; return;
L_005ceeb7:; BB(0x005ceeb7);
    /* 005ceeb7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005ceeb9:; BB(0x005ceeb9);
    /* 005ceeb9: mov ecx, dword ptr [esi + ebx*4 + 0x28] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x28u));
    /* 005ceebd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005ceec0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ceec2: je 0x5ceecd */ if (fZ) goto L_005ceecd;
L_005ceec4:; BB(0x005ceec4);
    /* 005ceec4: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 005ceec7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ceec8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5ceecdu); f_00508db8();
L_005ceecd:; BB(0x005ceecd);
    /* 005ceecd: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005ceed0: jl 0x5ceeb9 */ if ((fS!=fO)) goto L_005ceeb9;
L_005ceed2:; BB(0x005ceed2);
    /* 005ceed2: add dword ptr [esi + 0x24], 1 */ { u32 ad = (u32)(r_esi+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005ceed6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ceed9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ceeda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ceedb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ceedc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005ceedd: ret  */ FN_RET(0x005ced64); r_esp += 4; return;
L_005ceede:; BB(0x005ceede);
    /* 005ceede: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005ceee1: jmp 0x5cee70 */ goto L_005cee70;
L_005ceee3:; BB(0x005ceee3);
    /* 005ceee3: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 005ceee6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005ceee8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceee9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ceeea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ceeeb: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 005ceef0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5ceef5u); f_00814298();
    /* 005ceef5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceef7: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 005ceefc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005ceefd: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x5cef02u); f_0050981c();
    /* 005cef02: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cef05: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 005cef08: mov dword ptr [esi + 0x34], 0x43480000 */ W32((u32)(r_esi+0x34u), 0x43480000u);
    /* 005cef0f: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 005cef12: jmp 0x5cede9 */ goto L_005cede9;
L_005cef17:; BB(0x005cef17);
    /* 005cef17: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005cef1b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005cef20: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005cef24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005cef27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005cef28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cef29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005cef2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005cef2b: ret  */ FN_RET(0x005ced64); r_esp += 4; return;
}

void f_005cef2c(void) /* sub_5CEF2C */
{
    FN_ENTER(0x005cef2c);
    /* 005cef2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005cef2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005cef2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005cef31: push 0x8da168 */ { u32 v = 0x8da168u; r_esp -= 4; W32(r_esp, v); }
    /* 005cef36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005cef3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cef3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005cef44: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005cef47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005cef4a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005cef4d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005cef50: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005cef53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cef56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cef58: je 0x5cf00c */ if (fZ) goto L_005cf00c;
L_005cef5e:; BB(0x005cef5e);
    /* 005cef5e: movzx eax, word ptr [ebp + 0x10] */ r_eax = (u32)R16((u32)(r_ebp+0x10u));
    /* 005cef62: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005cef67: je 0x5cf00c */ if (fZ) goto L_005cf00c;
L_005cef6d:; BB(0x005cef6d);
    /* 005cef6d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005cef70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cef72: je 0x5cf00c */ if (fZ) goto L_005cf00c;
L_005cef78:; BB(0x005cef78);
    /* 005cef78: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005cef7f: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005cef81: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5cef86u); f_005caba4();
    /* 005cef86: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005cef89: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005cef8c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005cef8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cef91: je 0x5cf00c */ if (fZ) goto L_005cf00c;
L_005cef93:; BB(0x005cef93);
    /* 005cef93: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005cef9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005cefa1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005cefa4: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005cefa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005cefa8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5cefadu); f_008193cc();
    /* 005cefad: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005cefb0: movzx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)R16((u32)(r_ebp+0x10u));
    /* 005cefb4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005cefb7: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 005cefba: mov word ptr [eax + 0x1c], cx */ W16((u32)(r_eax+0x1cu), (u16)r_ecx);
    /* 005cefbe: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005cefc0: mov dword ptr [eax], 0xb0cc18 */ W32((u32)(r_eax), 0xb0cc18u);
    /* 005cefc6: mov edx, dword ptr [0x9c2724] */ r_edx = R32((u32)(0x9c2724u));
    /* 005cefcc: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 005cefcf: movzx esi, word ptr [ebx + 0x1c] */ r_esi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 005cefd3: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 005cefd7: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 005cefde: mov word ptr [eax + 0x1e], si */ W16((u32)(r_eax+0x1eu), (u16)r_esi);
    /* 005cefe2: mov dword ptr [eax + 0x20], edi */ W32((u32)(r_eax+0x20u), r_edi);
    /* 005cefe5: mov dword ptr [eax + 0x3c], 0 */ W32((u32)(r_eax+0x3cu), 0x0u);
    /* 005cefec: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 005cefef: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 005ceff2: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 005ceff5: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
    /* 005ceffc: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 005cefff: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005cf005: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 005cf009: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
L_005cf00c:; BB(0x005cf00c);
    /* 005cf00c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005cf00f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005cf012: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005cf015: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005cf018: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005cf01f: mov esp, ebp */ r_esp = r_ebp;
    /* 005cf021: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005cf022: ret  */ FN_RET(0x005cef2c); r_esp += 4; return;
}

