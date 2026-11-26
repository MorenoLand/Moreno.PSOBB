#include "protos.h"

void f_00678030(void) /* sub_678030 */
{
    FN_ENTER(0x00678030);
    /* 00678030: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00678031: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678032: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678035: mov edi, ecx */ r_edi = r_ecx;
    /* 00678037: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 0067803d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067803f: je 0x678048 */ if (fZ) goto L_00678048;
L_00678041:; BB(0x00678041);
    /* 00678041: mov ecx, edi */ r_ecx = r_edi;
    /* 00678043: call 0x61347c */ r_esp -= 4; W32(r_esp, 0x678048u); f_0061347c();
L_00678048:; BB(0x00678048);
    /* 00678048: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067804d: mov ecx, edi */ r_ecx = r_edi;
    /* 0067804f: call 0x6132ac */ r_esp -= 4; W32(r_esp, 0x678054u); f_006132ac();
    /* 00678054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678056: je 0x67812f */ if (fZ) goto L_0067812f;
L_0067805c:; BB(0x0067805c);
    /* 0067805c: movsx eax, word ptr [edi + 0x1e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x1eu));
    /* 00678060: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678062: je 0x67812f */ if (fZ) goto L_0067812f;
L_00678068:; BB(0x00678068);
    /* 00678068: fld dword ptr [0x93b124] */ FPUSH(R_F32((u32)(0x93b124u)));
    /* 0067806e: fmul dword ptr [edi + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6cu));
    /* 00678071: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00678075: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0067807a: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 00678082: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00678089: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x67808eu); f_0082d990();
    /* 0067808e: mov edx, dword ptr [edi + 0x64] */ r_edx = R32((u32)(r_edi+0x64u));
    /* 00678091: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00678093: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x678098u); f_00830c04();
    /* 00678098: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0067809b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067809d: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6780a2u); f_0082e9e4();
    /* 006780a2: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006780a5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006780a7: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6780acu); f_0082d8bc();
    /* 006780ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006780af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006780b0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006780b4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006780b6: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6780bbu); f_00830aa0();
    /* 006780bb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6780c0u); f_0082da80();
    /* 006780c0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006780c3: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 006780c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006780c7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006780c8: call 0x7a8c04 */ r_esp -= 4; W32(r_esp, 0x6780cdu); f_007a8c04();
    /* 006780cd: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006780d1: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006780d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006780d7: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6780dcu); f_0050b510();
    /* 006780dc: mov ebx, eax */ r_ebx = r_eax;
    /* 006780de: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006780e1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006780e3: je 0x67812f */ if (fZ) goto L_0067812f;
L_006780e5:; BB(0x006780e5);
    /* 006780e5: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 006780ea: call 0x50cd1c */ r_esp -= 4; W32(r_esp, 0x6780efu); f_0050cd1c();
    /* 006780ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006780f0: fld dword ptr [0x93b120] */ FPUSH(R_F32((u32)(0x93b120u)));
    /* 006780f6: fmul dword ptr [edi + 0x6c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6cu));
    /* 006780f9: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006780fd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006780ff: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00678101: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x678106u); f_00508f08();
    /* 00678106: mov edx, dword ptr [edi + 0x84] */ r_edx = R32((u32)(r_edi+0x84u));
    /* 0067810c: push dword ptr [edx*4 + 0x93b118] */ { u32 v = R32((u32)(r_edx*4+0x93b118u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678113: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00678115: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x67811au); f_00508ee4();
    /* 0067811a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0067811e: fst dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0));
    /* 00678121: fstp dword ptr [ebx + 0x48] */ W_F32((u32)(r_ebx+0x48u), ST(0)); FPOP();
    /* 00678124: add edi, 0x5c */ {  u32 a = r_edi; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00678127: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00678128: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067812a: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x67812fu); f_00508dd0();
L_0067812f:; BB(0x0067812f);
    /* 0067812f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00678132: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678133: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00678134: ret  */ FN_RET(0x00678030); r_esp += 4; return;
}

void f_00678138(void) /* sub_678138 */
{
    FN_ENTER(0x00678138);
    /* 00678138: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00678139: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0067813a: mov esi, ecx */ r_esi = r_ecx;
    /* 0067813c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0067813e: mov ecx, esi */ r_ecx = r_esi;
    /* 00678140: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00678145: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0067814a: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x67814du); call_ind(t); }
    /* 0067814d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067814f: jne 0x678154 */ if (!fZ) goto L_00678154;
L_00678151:; BB(0x00678151);
    /* 00678151: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00678153: ret  */ FN_RET(0x00678138); r_esp += 4; return;
L_00678154:; BB(0x00678154);
    /* 00678154: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x678159u); f_0082d7b0();
    /* 00678159: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0067815c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x678161u); f_0082d838();
    /* 00678161: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 00678164: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00678166: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x67816bu); f_00830c04();
    /* 0067816b: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 0067816e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00678170: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x678175u); f_0082e9e4();
    /* 00678175: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00678178: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067817a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x67817fu); f_0082d8bc();
    /* 0067817f: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00678182: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x678187u); f_00829cc8();
    /* 00678187: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 0067818a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067818b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067818c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067818e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067818f: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x678194u); f_0082fa0c();
    /* 00678194: fld dword ptr [0x93b10c] */ FPUSH(R_F32((u32)(0x93b10cu)));
    /* 0067819a: fdiv dword ptr [esi + 0x6c] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x6cu));
    /* 0067819d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006781a0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6781a5u); f_0061cdb0();
    /* 006781a5: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006781ab: push dword ptr [esi + 0xbc] */ { u32 v = R32((u32)(r_esi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006781b1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006781b3: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 006781b6: call 0x8304e0 */ r_esp -= 4; W32(r_esp, 0x6781bbu); f_008304e0();
    /* 006781bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006781be: call 0x520e88 */ r_esp -= 4; W32(r_esp, 0x6781c3u); f_00520e88();
    /* 006781c3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6781c8u); f_0082da80();
    /* 006781c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006781c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006781ca: ret  */ FN_RET(0x00678138); r_esp += 4; return;
}

void f_006781cc(void) /* sub_6781CC */
{
    FN_ENTER(0x006781cc);
    /* 006781cc: mov ecx, dword ptr [0xa8ff78] */ r_ecx = R32((u32)(0xa8ff78u));
    /* 006781d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006781d4: je 0x6781e9 */ if (fZ) goto L_006781e9;
L_006781d6:; BB(0x006781d6);
    /* 006781d6: je 0x6781df */ if (fZ) goto L_006781df;
L_006781d8:; BB(0x006781d8);
    /* 006781d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006781da: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6781dfu); f_004066a8();
L_006781df:; BB(0x006781df);
    /* 006781df: mov dword ptr [0xa8ff78], 0 */ W32((u32)(0xa8ff78u), 0x0u);
L_006781e9:; BB(0x006781e9);
    /* 006781e9: ret  */ FN_RET(0x006781cc); r_esp += 4; return;
}

void f_006781ec(void)
{
    FN_ENTER(0x006781ec);
    /* 006781ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006781ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006781ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006781f1: push 0x8e9c30 */ { u32 v = 0x8e9c30u; r_esp -= 4; W32(r_esp, v); }
    /* 006781f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006781fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006781fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678204: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678207: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067820a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067820d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678210: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678213: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00678218: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067821f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x678224u); f_005caba4();
    /* 00678224: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678225: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00678228: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067822a: je 0x678263 */ if (fZ) goto L_00678263;
L_0067822c:; BB(0x0067822c);
    /* 0067822c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00678233: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067823a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067823d: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678243: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678246: call 0x678268 */ r_esp -= 4; W32(r_esp, 0x67824bu); f_00678268();
    /* 0067824b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067824e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00678255:; BB(0x00678255);
    /* 00678255: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678258: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067825f: mov esp, ebp */ r_esp = r_ebp;
    /* 00678261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678262: ret  */ FN_RET(0x006781ec); r_esp += 4; return;
L_00678263:; BB(0x00678263);
    /* 00678263: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678265: jmp 0x678255 */ goto L_00678255;
}

void f_00678268(void) /* sub_678268 */
{
    FN_ENTER(0x00678268);
    /* 00678268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678269: mov ebp, esp */ r_ebp = r_esp;
    /* 0067826b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0067826d: push 0x8e9c4c */ { u32 v = 0x8e9c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 00678272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678280: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678286: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00678289: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0067828c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067828f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00678292: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678295: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00678298: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0067829b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x6782a0u); f_006132e4();
    /* 006782a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006782a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006782aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006782ad: mov dword ptr [ecx], 0xb374d0 */ W32((u32)(r_ecx), 0xb374d0u);
    /* 006782b3: mov eax, dword ptr [0x9c9e64] */ r_eax = R32((u32)(0x9c9e64u));
    /* 006782b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006782b9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006782bc: call dword ptr [0xb374e4] */ { u32 t = R32((u32)(0xb374e4u)); r_esp -= 4; W32(r_esp, 0x6782c2u); call_ind(t); }
    /* 006782c2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006782c5: call 0x6782e8 */ r_esp -= 4; W32(r_esp, 0x6782cau); f_006782e8();
    /* 006782ca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006782cd: call 0x678310 */ r_esp -= 4; W32(r_esp, 0x6782d2u); f_00678310();
    /* 006782d2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006782d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006782d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006782df: mov esp, ebp */ r_esp = r_ebp;
    /* 006782e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006782e2: ret 8 */ FN_RET(0x00678268); r_esp += 12; return;
}

void f_006782e8(void) /* sub_6782E8 */
{
    FN_ENTER(0x006782e8);
    /* 006782e8: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 006782ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006782f0: jge 0x6782f6 */ if ((fS==fO)) goto L_006782f6;
L_006782f2:; BB(0x006782f2);
    /* 006782f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006782f4: jmp 0x6782fd */ goto L_006782fd;
L_006782f6:; BB(0x006782f6);
    /* 006782f6: jle 0x6782fd */ if ((fZ||fS!=fO)) goto L_006782fd;
L_006782f8:; BB(0x006782f8);
    /* 006782f8: mov eax, 1 */ r_eax = 0x1u;
L_006782fd:; BB(0x006782fd);
    /* 006782fd: mov dword ptr [ecx + 0x84], eax */ W32((u32)(r_ecx+0x84u), r_eax);
    /* 00678303: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00678306: mov dword ptr [ecx + 0xb8], eax */ W32((u32)(r_ecx+0xb8u), r_eax);
    /* 0067830c: ret  */ FN_RET(0x006782e8); r_esp += 4; return;
}

void f_00678310(void) /* sub_678310 */
{
    FN_ENTER(0x00678310);
    /* 00678310: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00678311: mov esi, ecx */ r_esi = r_ecx;
    /* 00678313: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678319: mov ecx, dword ptr [0xa8ff78] */ r_ecx = R32((u32)(0xa8ff78u));
    /* 0067831f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x678324u); f_005b8610();
    /* 00678324: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067832a: mov ecx, dword ptr [0xa8ff78] */ r_ecx = R32((u32)(0xa8ff78u));
    /* 00678330: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00678333: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x678338u); f_005b8624();
    /* 00678338: mov ecx, dword ptr [0xa8ff78] */ r_ecx = R32((u32)(0xa8ff78u));
    /* 0067833e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678340: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 00678343: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x678348u); f_005b8638();
    /* 00678348: mov dword ptr [esi + 0xbc], eax */ W32((u32)(r_esi+0xbcu), r_eax);
    /* 0067834e: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00678351: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00678354: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00678357: fadd dword ptr [edx*4 + 0x93b100] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x93b100u));
    /* 0067835e: fadd dword ptr [0x93b108] */ ST(0) = ST(0) + R_F32((u32)(0x93b108u));
    /* 00678364: fstp dword ptr [esi + 0xb4] */ W_F32((u32)(r_esi+0xb4u), ST(0)); FPOP();
    /* 0067836a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067836b: ret  */ FN_RET(0x00678310); r_esp += 4; return;
}

void f_0067836c(void) /* sub_67836C */
{
    FN_ENTER(0x0067836c);
    /* 0067836c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067836d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067836f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678371: push 0x8e9c74 */ { u32 v = 0x8e9c74u; r_esp -= 4; W32(r_esp, v); }
    /* 00678376: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067837c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067837d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678384: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678387: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067838a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067838d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678390: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678393: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00678398: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0067839f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6783a4u); f_008581c5();
    /* 006783a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006783a5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006783a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006783aa: je 0x6783eb */ if (fZ) goto L_006783eb;
L_006783ac:; BB(0x006783ac);
    /* 006783ac: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006783b3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006783ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006783bd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006783bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006783c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006783c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006783c2: push 0x9c9e54 */ { u32 v = 0x9c9e54u; r_esp -= 4; W32(r_esp, v); }
    /* 006783c7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006783c9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6783ceu); f_005b7a84();
    /* 006783ce: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006783d1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006783d8:; BB(0x006783d8);
    /* 006783d8: mov dword ptr [0xa8ff78], eax */ W32((u32)(0xa8ff78u), r_eax);
    /* 006783dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006783e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006783e7: mov esp, ebp */ r_esp = r_ebp;
    /* 006783e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006783ea: ret  */ FN_RET(0x0067836c); r_esp += 4; return;
L_006783eb:; BB(0x006783eb);
    /* 006783eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006783ed: jmp 0x6783d8 */ goto L_006783d8;
}

void f_006783f0(void) /* sub_6783F0 */
{
    FN_ENTER(0x006783f0);
    /* 006783f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006783f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006783f3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006783f5: call 0x678414 */ r_esp -= 4; W32(r_esp, 0x6783fau); f_00678414();
    /* 006783fa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006783fe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678400: jne 0x678406 */ if (!fZ) goto L_00678406;
L_00678402:; BB(0x00678402);
    /* 00678402: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678403: ret 4 */ FN_RET(0x006783f0); r_esp += 8; return;
L_00678406:; BB(0x00678406);
    /* 00678406: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678407: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x67840cu); f_005c2f74();
    /* 0067840c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0067840d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067840e: ret 4 */ FN_RET(0x006783f0); r_esp += 8; return;
}

void f_00678414(void) /* sub_678414 */
{
    FN_ENTER(0x00678414);
    /* 00678414: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678415: mov ebp, esp */ r_ebp = r_esp;
    /* 00678417: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678419: push 0x8e9c90 */ { u32 v = 0x8e9c90u; r_esp -= 4; W32(r_esp, v); }
    /* 0067841e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678424: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678425: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067842c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067842f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678432: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00678435: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678438: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0067843b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0067843e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678445: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678448: mov dword ptr [eax], 0xb375a0 */ W32((u32)(r_eax), 0xb375a0u);
    /* 0067844e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067844f: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x678454u); f_007b4e84();
    /* 00678454: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678455: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678458: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x67845du); f_007b9c8c();
    /* 0067845d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00678464: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678467: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x67846cu); f_006131f4();
    /* 0067846c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067846f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678476: mov esp, ebp */ r_esp = r_ebp;
    /* 00678478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678479: ret  */ FN_RET(0x00678414); r_esp += 4; return;
}

void f_0067847c(void) /* sub_67847C */
{
    FN_ENTER(0x0067847c);
    /* 0067847c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067847f: mov eax, dword ptr [ecx + 0xac] */ r_eax = R32((u32)(r_ecx+0xacu));
    /* 00678485: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678487: je 0x678495 */ if (fZ) goto L_00678495;
L_00678489:; BB(0x00678489);
    /* 00678489: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067848c: jne 0x6784e5 */ if (!fZ) goto L_006784e5;
L_0067848e:; BB(0x0067848e);
    /* 0067848e: call 0x6784ec */ r_esp -= 4; W32(r_esp, 0x678493u); f_006784ec();
    /* 00678493: jmp 0x6784e5 */ goto L_006784e5;
L_00678495:; BB(0x00678495);
    /* 00678495: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00678499: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0067849c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0067849e: mov ebx, eax */ r_ebx = r_eax;
    /* 006784a0: mov esi, ecx */ r_esi = r_ecx;
L_006784a2:; BB(0x006784a2);
    /* 006784a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006784a3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6784a8u); f_0068d5a8();
    /* 006784a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006784a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006784ab: je 0x6784d6 */ if (fZ) goto L_006784d6;
L_006784ad:; BB(0x006784ad);
    /* 006784ad: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 006784b3: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006784b9: jne 0x6784d6 */ if (!fZ) goto L_006784d6;
L_006784bb:; BB(0x006784bb);
    /* 006784bb: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006784c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006784c1: mov ecx, esi */ r_ecx = r_esi;
    /* 006784c3: call 0x7b65b4 */ r_esp -= 4; W32(r_esp, 0x6784c8u); f_007b65b4();
    /* 006784c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006784ca: je 0x6784d6 */ if (fZ) goto L_006784d6;
L_006784cc:; BB(0x006784cc);
    /* 006784cc: mov dword ptr [esi + 0xac], 1 */ W32((u32)(r_esi+0xacu), 0x1u);
L_006784d6:; BB(0x006784d6);
    /* 006784d6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006784d9: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006784dc: jl 0x6784a2 */ if ((fS!=fO)) goto L_006784a2;
L_006784de:; BB(0x006784de);
    /* 006784de: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006784e2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006784e5:; BB(0x006784e5);
    /* 006784e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006784e8: ret  */ FN_RET(0x0067847c); r_esp += 4; return;
}

void f_006784ec(void) /* sub_6784EC */
{
    FN_ENTER(0x006784ec);
    /* 006784ec: fld dword ptr [ecx + 0xb0] */ FPUSH(R_F32((u32)(r_ecx+0xb0u)));
    /* 006784f2: fadd dword ptr [ecx + 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xb8u));
    /* 006784f8: fcom dword ptr [ecx + 0xb4] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0xb4u))); 
    /* 006784fe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00678500: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00678501: jbe 0x67851a */ if ((fC||fZ)) goto L_0067851a;
L_00678503:; BB(0x00678503);
    /* 00678503: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00678505: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 0067850f: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 00678519: ret  */ FN_RET(0x006784ec); r_esp += 4; return;
L_0067851a:; BB(0x0067851a);
    /* 0067851a: fstp dword ptr [ecx + 0xb0] */ W_F32((u32)(r_ecx+0xb0u), ST(0)); FPOP();
    /* 00678520: ret  */ FN_RET(0x006784ec); r_esp += 4; return;
}

void f_00678524(void) /* sub_678524 */
{
    FN_ENTER(0x00678524);
    /* 00678524: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00678525: mov esi, ecx */ r_esi = r_ecx;
    /* 00678527: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00678529: mov ecx, esi */ r_ecx = r_esi;
    /* 0067852b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00678530: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00678535: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x678538u); call_ind(t); }
    /* 00678538: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067853a: jne 0x67853e */ if (!fZ) goto L_0067853e;
L_0067853c:; BB(0x0067853c);
    /* 0067853c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0067853d: ret  */ FN_RET(0x00678524); r_esp += 4; return;
L_0067853e:; BB(0x0067853e);
    /* 0067853e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x678543u); f_0082d7b0();
    /* 00678543: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00678546: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x67854bu); f_0082d838();
    /* 0067854b: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 0067854e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00678550: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x678555u); f_00830c04();
    /* 00678555: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00678558: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0067855a: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x67855fu); f_0082e9e4();
    /* 0067855f: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00678562: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00678564: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x678569u); f_0082d8bc();
    /* 00678569: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 0067856c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x678571u); f_00829cc8();
    /* 00678571: mov eax, dword ptr [esi + 0xac] */ r_eax = R32((u32)(r_esi+0xacu));
    /* 00678577: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067857a: jne 0x678595 */ if (!fZ) goto L_00678595;
L_0067857c:; BB(0x0067857c);
    /* 0067857c: push dword ptr [esi + 0xb0] */ { u32 v = R32((u32)(r_esi+0xb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678582: push dword ptr [esi + 0xbc] */ { u32 v = R32((u32)(r_esi+0xbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00678588: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067858b: call 0x830a28 */ r_esp -= 4; W32(r_esp, 0x678590u); f_00830a28();
    /* 00678590: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678593: jmp 0x67859e */ goto L_0067859e;
L_00678595:; BB(0x00678595);
    /* 00678595: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678598: call 0x82e760 */ r_esp -= 4; W32(r_esp, 0x67859du); f_0082e760();
    /* 0067859d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0067859e:; BB(0x0067859e);
    /* 0067859e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6785a3u); f_0082da80();
    /* 006785a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006785a4: ret  */ FN_RET(0x00678524); r_esp += 4; return;
}

void f_006785a8(void) /* sub_6785A8 */
{
    FN_ENTER(0x006785a8);
    /* 006785a8: mov ecx, dword ptr [0xa8ff8c] */ r_ecx = R32((u32)(0xa8ff8cu));
    /* 006785ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006785b0: je 0x6785c5 */ if (fZ) goto L_006785c5;
L_006785b2:; BB(0x006785b2);
    /* 006785b2: je 0x6785bb */ if (fZ) goto L_006785bb;
L_006785b4:; BB(0x006785b4);
    /* 006785b4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006785b6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6785bbu); f_004066a8();
L_006785bb:; BB(0x006785bb);
    /* 006785bb: mov dword ptr [0xa8ff8c], 0 */ W32((u32)(0xa8ff8cu), 0x0u);
L_006785c5:; BB(0x006785c5);
    /* 006785c5: ret  */ FN_RET(0x006785a8); r_esp += 4; return;
}

void f_006785c8(void)
{
    FN_ENTER(0x006785c8);
    /* 006785c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006785c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006785cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006785cd: push 0x8e9cb8 */ { u32 v = 0x8e9cb8u; r_esp -= 4; W32(r_esp, v); }
    /* 006785d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006785d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006785d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006785e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006785e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006785e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006785e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006785ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006785ef: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006785f4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006785fb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x678600u); f_005caba4();
    /* 00678600: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678601: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00678604: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678606: je 0x67863f */ if (fZ) goto L_0067863f;
L_00678608:; BB(0x00678608);
    /* 00678608: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0067860f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678616: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678619: push dword ptr [0xaca354] */ { u32 v = R32((u32)(0xaca354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067861f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678622: call 0x678644 */ r_esp -= 4; W32(r_esp, 0x678627u); f_00678644();
    /* 00678627: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0067862a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00678631:; BB(0x00678631);
    /* 00678631: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678634: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067863b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067863d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067863e: ret  */ FN_RET(0x006785c8); r_esp += 4; return;
L_0067863f:; BB(0x0067863f);
    /* 0067863f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678641: jmp 0x678631 */ goto L_00678631;
}

void f_00678644(void) /* sub_678644 */
{
    FN_ENTER(0x00678644);
    /* 00678644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678645: mov ebp, esp */ r_ebp = r_esp;
    /* 00678647: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678649: push 0x8e9cd4 */ { u32 v = 0x8e9cd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0067864e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678655: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067865c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067865f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678662: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00678665: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00678668: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0067866b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0067866e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678671: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00678674: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00678677: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x67867cu); f_006132e4();
    /* 0067867c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678683: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00678686: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678689: mov dword ptr [ecx], 0xb375a0 */ W32((u32)(r_ecx), 0xb375a0u);
    /* 0067868f: mov eax, dword ptr [0x9c9e8c] */ r_eax = R32((u32)(0x9c9e8cu));
    /* 00678694: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678695: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00678698: call dword ptr [0xb375b4] */ { u32 t = R32((u32)(0xb375b4u)); r_esp -= 4; W32(r_esp, 0x67869eu); call_ind(t); }
    /* 0067869e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006786a1: call 0x6797a0 */ r_esp -= 4; W32(r_esp, 0x6786a6u); f_006797a0();
    /* 006786a6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006786a9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006786ab: push 0x9c9e90 */ { u32 v = 0x9c9e90u; r_esp -= 4; W32(r_esp, v); }
    /* 006786b0: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6786b5u); f_007b9a88();
    /* 006786b5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006786b8: push 0x1f00 */ { u32 v = 0x1f00u; r_esp -= 4; W32(r_esp, v); }
    /* 006786bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006786bf: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x6786c4u); f_007b52c4();
    /* 006786c4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006786c7: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6786ccu); f_007b4f54();
    /* 006786cc: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006786cf: call 0x678724 */ r_esp -= 4; W32(r_esp, 0x6786d4u); f_00678724();
    /* 006786d4: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006786d7: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 006786da: mov ecx, dword ptr [ebx + 0xbc] */ r_ecx = R32((u32)(r_ebx+0xbcu));
    /* 006786e0: mov dword ptr [ebx + 0xb8], edx */ W32((u32)(r_ebx+0xb8u), r_edx);
    /* 006786e6: fild dword ptr [ecx + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x4u)));
    /* 006786e9: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 006786ec: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 006786ef: fadd dword ptr [eax*4 + 0x93b188] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x93b188u));
    /* 006786f6: fadd dword ptr [0x93b19c] */ ST(0) = ST(0) + R_F32((u32)(0x93b19cu));
    /* 006786fc: mov dword ptr [ebx + 0xac], 0 */ W32((u32)(r_ebx+0xacu), 0x0u);
    /* 00678706: fstp dword ptr [ebx + 0xb4] */ W_F32((u32)(r_ebx+0xb4u), ST(0)); FPOP();
    /* 0067870c: mov eax, ebx */ r_eax = r_ebx;
    /* 0067870e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678711: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678714: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0067871b: mov esp, ebp */ r_esp = r_ebp;
    /* 0067871d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0067871e: ret 8 */ FN_RET(0x00678644); r_esp += 12; return;
}

void f_00678724(void) /* sub_678724 */
{
    FN_ENTER(0x00678724);
    /* 00678724: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00678725: mov edi, ecx */ r_edi = r_ecx;
    /* 00678727: push dword ptr [edi + 0x84] */ { u32 v = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067872d: mov ecx, dword ptr [0xa8ff8c] */ r_ecx = R32((u32)(0xa8ff8cu));
    /* 00678733: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x678738u); f_005b8610();
    /* 00678738: push dword ptr [edi + 0x84] */ { u32 v = R32((u32)(r_edi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 0067873e: mov ecx, dword ptr [0xa8ff8c] */ r_ecx = R32((u32)(0xa8ff8cu));
    /* 00678744: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00678747: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x67874cu); f_005b8624();
    /* 0067874c: mov ecx, dword ptr [0xa8ff8c] */ r_ecx = R32((u32)(0xa8ff8cu));
    /* 00678752: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678754: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00678757: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x67875cu); f_005b8638();
    /* 0067875c: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 00678762: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00678763: ret  */ FN_RET(0x00678724); r_esp += 4; return;
}

void f_00678764(void) /* sub_678764 */
{
    FN_ENTER(0x00678764);
    /* 00678764: mov dword ptr [0xa8ff80], 0x3f800000 */ W32((u32)(0xa8ff80u), 0x3f800000u);
    /* 0067876e: mov dword ptr [0xa8ff84], 0x41000000 */ W32((u32)(0xa8ff84u), 0x41000000u);
    /* 00678778: mov dword ptr [0xa8ff88], 0x3fc00000 */ W32((u32)(0xa8ff88u), 0x3fc00000u);
    /* 00678782: ret  */ FN_RET(0x00678764); r_esp += 4; return;
}

void f_00678784(void) /* sub_678784 */
{
    FN_ENTER(0x00678784);
    /* 00678784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678785: mov ebp, esp */ r_ebp = r_esp;
    /* 00678787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678789: push 0x8e9cfc */ { u32 v = 0x8e9cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0067878e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0067879c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0067879f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006787a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006787a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006787a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006787ab: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006787b0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006787b7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6787bcu); f_008581c5();
    /* 006787bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006787bd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006787c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006787c2: je 0x678803 */ if (fZ) goto L_00678803;
L_006787c4:; BB(0x006787c4);
    /* 006787c4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006787cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006787d2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006787d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006787d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006787d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006787d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006787da: push 0x9c9e7c */ { u32 v = 0x9c9e7cu; r_esp -= 4; W32(r_esp, v); }
    /* 006787df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006787e1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6787e6u); f_005b7a84();
    /* 006787e6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006787e9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006787f0:; BB(0x006787f0);
    /* 006787f0: mov dword ptr [0xa8ff8c], eax */ W32((u32)(0xa8ff8cu), r_eax);
    /* 006787f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006787f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006787ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00678801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678802: ret  */ FN_RET(0x00678784); r_esp += 4; return;
L_00678803:; BB(0x00678803);
    /* 00678803: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678805: jmp 0x6787f0 */ goto L_006787f0;
}

void f_00678808(void) /* sub_678808 */
{
    FN_ENTER(0x00678808);
    /* 00678808: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678809: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067880b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0067880d: call 0x67882c */ r_esp -= 4; W32(r_esp, 0x678812u); f_0067882c();
    /* 00678812: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00678816: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678818: jne 0x67881e */ if (!fZ) goto L_0067881e;
L_0067881a:; BB(0x0067881a);
    /* 0067881a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067881b: ret 4 */ FN_RET(0x00678808); r_esp += 8; return;
L_0067881e:; BB(0x0067881e);
    /* 0067881e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067881f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x678824u); f_005c2f74();
    /* 00678824: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678825: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678826: ret 4 */ FN_RET(0x00678808); r_esp += 8; return;
}

void f_0067882c(void) /* sub_67882C */
{
    FN_ENTER(0x0067882c);
    /* 0067882c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0067882d: mov ebp, esp */ r_ebp = r_esp;
    /* 0067882f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678831: push 0x8e9d18 */ { u32 v = 0x8e9d18u; r_esp -= 4; W32(r_esp, v); }
    /* 00678836: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0067883c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0067883d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678844: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678847: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0067884a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0067884d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678850: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678853: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00678856: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678859: mov dword ptr [ecx], 0xb376c0 */ W32((u32)(r_ecx), 0xb376c0u);
    /* 0067885f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00678866: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x67886bu); f_007ba1f0();
    /* 0067886b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067886e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678875: mov esp, ebp */ r_esp = r_ebp;
    /* 00678877: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678878: ret  */ FN_RET(0x0067882c); r_esp += 4; return;
}

void f_0067887c(void) /* sub_67887C */
{
    FN_ENTER(0x0067887c);
    /* 0067887c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067887d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067887f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00678881: call 0x6788a0 */ r_esp -= 4; W32(r_esp, 0x678886u); f_006788a0();
    /* 00678886: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0067888a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067888c: jne 0x678892 */ if (!fZ) goto L_00678892;
L_0067888e:; BB(0x0067888e);
    /* 0067888e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067888f: ret 4 */ FN_RET(0x0067887c); r_esp += 8; return;
L_00678892:; BB(0x00678892);
    /* 00678892: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678893: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x678898u); f_005c2f74();
    /* 00678898: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678899: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067889a: ret 4 */ FN_RET(0x0067887c); r_esp += 8; return;
}

void f_006788a0(void) /* sub_6788A0 */
{
    FN_ENTER(0x006788a0);
    /* 006788a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006788a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006788a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006788a5: push 0x8e9d34 */ { u32 v = 0x8e9d34u; r_esp -= 4; W32(r_esp, v); }
    /* 006788aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006788b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006788b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006788b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006788bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006788be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006788c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006788c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006788c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006788ca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006788d1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006788d4: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006788da: mov dword ptr [eax], 0xb37700 */ W32((u32)(r_eax), 0xb37700u);
    /* 006788e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006788e2: je 0x6788fe */ if (fZ) goto L_006788fe;
L_006788e4:; BB(0x006788e4);
    /* 006788e4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006788e8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006788ed: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006788f1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006788f4: mov dword ptr [eax + 0x33c], 0 */ W32((u32)(r_eax+0x33cu), 0x0u);
L_006788fe:; BB(0x006788fe);
    /* 006788fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006788ff: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x678904u); f_007b4e84();
    /* 00678904: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678905: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678908: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x67890du); f_007b9c8c();
    /* 0067890d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00678914: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678917: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x67891cu); f_00770660();
    /* 0067891c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0067891f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678926: mov esp, ebp */ r_esp = r_ebp;
    /* 00678928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678929: ret  */ FN_RET(0x006788a0); r_esp += 4; return;
}

void f_0067892c(void) /* sub_67892C */
{
    FN_ENTER(0x0067892c);
    /* 0067892c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0067892d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0067892f: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 00678935: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00678938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0067893a: jle 0x678944 */ if ((fZ||fS!=fO)) goto L_00678944;
L_0067893c:; BB(0x0067893c);
    /* 0067893c: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
L_00678942:; BB(0x00678942);
    /* 00678942: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678943: ret  */ FN_RET(0x0067892c); r_esp += 4; return;
L_00678944:; BB(0x00678944);
    /* 00678944: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0067894a: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 00678950: mov dword ptr [ebx + 0x90], eax */ W32((u32)(r_ebx+0x90u), r_eax);
    /* 00678956: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00678959: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067895f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678960: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678961: call 0x78ea2c */ r_esp -= 4; W32(r_esp, 0x678966u); f_0078ea2c();
    /* 00678966: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00678969: fcomp dword ptr [0x93b270] */ fx_compare(ST(0), R_F32((u32)(0x93b270u))); FPOP();
    /* 0067896f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00678971: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00678972: jae 0x678942 */ if (!fC) goto L_00678942;
L_00678974:; BB(0x00678974);
    /* 00678974: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00678976: call 0x678980 */ r_esp -= 4; W32(r_esp, 0x67897bu); f_00678980();
    /* 0067897b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0067897c: ret  */ FN_RET(0x0067892c); r_esp += 4; return;
}

void f_00678980(void) /* sub_678980 */
{
    FN_ENTER(0x00678980);
    /* 00678980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00678981: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678983: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678986: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00678988: mov ebp, dword ptr [ebx + 0x60] */ r_ebp = R32((u32)(r_ebx+0x60u));
    /* 0067898b: mov edi, dword ptr [ebx + 0x5c] */ r_edi = R32((u32)(r_ebx+0x5cu));
    /* 0067898e: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00678991: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00678995: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00678997: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x67899cu); f_0082ddd8();
    /* 0067899c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0067899f: mov ecx, edi */ r_ecx = r_edi;
    /* 006789a1: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6789a6u); f_0082ddd8();
    /* 006789a6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006789a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006789ab: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 006789af: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006789b3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006789b5: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6789bau); f_0082dcbc();
    /* 006789ba: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006789bd: mov ecx, edi */ r_ecx = r_edi;
    /* 006789bf: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6789c4u); f_0082ddd8();
    /* 006789c4: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006789c7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006789c9: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 006789cd: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006789d1: mov ecx, edi */ r_ecx = r_edi;
    /* 006789d3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6789d8u); f_0082dcbc();
    /* 006789d8: fmul dword ptr [esp + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4u));
    /* 006789dc: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006789e0: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 006789e3: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006789e7: push dword ptr [ebx + 0x6c] */ { u32 v = R32((u32)(r_ebx+0x6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006789ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006789eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006789ec: call 0x678a08 */ r_esp -= 4; W32(r_esp, 0x6789f1u); f_00678a08();
    /* 006789f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006789f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006789f6: je 0x678a00 */ if (fZ) goto L_00678a00;
L_006789f8:; BB(0x006789f8);
    /* 006789f8: movzx edx, word ptr [ebx + 0x28] */ r_edx = (u32)R16((u32)(r_ebx+0x28u));
    /* 006789fc: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
L_00678a00:; BB(0x00678a00);
    /* 00678a00: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00678a03: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678a04: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678a05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00678a06: ret  */ FN_RET(0x00678980); r_esp += 4; return;
}

void f_00678a08(void) /* sub_678A08 */
{
    FN_ENTER(0x00678a08);
    /* 00678a08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678a09: mov ebp, esp */ r_ebp = r_esp;
    /* 00678a0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678a0d: push 0x8e9d5c */ { u32 v = 0x8e9d5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00678a12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678a18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678a19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678a20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678a23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678a26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00678a29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678a2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678a2f: push 0x348 */ { u32 v = 0x348u; r_esp -= 4; W32(r_esp, v); }
    /* 00678a34: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00678a3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x678a40u); f_005caba4();
    /* 00678a40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678a41: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00678a44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678a46: je 0x678a85 */ if (fZ) goto L_00678a85;
L_00678a48:; BB(0x00678a48);
    /* 00678a48: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00678a4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678a56: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678a59: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00678a5c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678a5f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678a62: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678a68: call 0x678a8c */ r_esp -= 4; W32(r_esp, 0x678a6du); f_00678a8c();
    /* 00678a6d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678a70: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00678a77:; BB(0x00678a77);
    /* 00678a77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678a7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678a81: mov esp, ebp */ r_esp = r_ebp;
    /* 00678a83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678a84: ret  */ FN_RET(0x00678a08); r_esp += 4; return;
L_00678a85:; BB(0x00678a85);
    /* 00678a85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678a87: jmp 0x678a77 */ goto L_00678a77;
}

void f_00678a8c(void) /* sub_678A8C */
{
    FN_ENTER(0x00678a8c);
    /* 00678a8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678a8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00678a8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678a91: push 0x8e9d78 */ { u32 v = 0x8e9d78u; r_esp -= 4; W32(r_esp, v); }
    /* 00678a96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678a9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678a9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678aa4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678aa7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678aaa: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00678aad: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00678ab0: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00678ab3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00678ab6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678ab9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00678abc: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00678abf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00678ac2: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00678ac5: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00678ac8: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00678acb: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x678ad0u); f_00770748();
    /* 00678ad0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678ad7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678ada: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678add: mov dword ptr [ecx], 0xb37700 */ W32((u32)(r_ecx), 0xb37700u);
    /* 00678ae3: mov eax, dword ptr [0x9c9ec0] */ r_eax = R32((u32)(0x9c9ec0u));
    /* 00678ae8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678aea: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00678aed: mov ebx, dword ptr [edx] */ r_ebx = R32((u32)(r_edx));
    /* 00678aef: mov dword ptr [ecx + 0x50], ebx */ W32((u32)(r_ecx+0x50u), r_ebx);
    /* 00678af2: push 0x9c9ec4 */ { u32 v = 0x9c9ec4u; r_esp -= 4; W32(r_esp, v); }
    /* 00678af7: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 00678afa: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 00678afd: mov edi, dword ptr [edx + 8] */ r_edi = R32((u32)(r_edx+0x8u));
    /* 00678b00: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678b03: mov dword ptr [ecx + 0x58], edi */ W32((u32)(r_ecx+0x58u), r_edi);
    /* 00678b06: mov dword ptr [ecx + 0x38], ebx */ W32((u32)(r_ecx+0x38u), r_ebx);
    /* 00678b09: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00678b0c: mov dword ptr [ecx + 0x40], edi */ W32((u32)(r_ecx+0x40u), r_edi);
    /* 00678b0f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678b11: mov dword ptr [ecx + 0x30c], eax */ W32((u32)(r_ecx+0x30cu), r_eax);
    /* 00678b17: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00678b1a: mov dword ptr [ecx + 0x310], eax */ W32((u32)(r_ecx+0x310u), r_eax);
    /* 00678b20: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00678b23: mov dword ptr [ecx + 0x314], eax */ W32((u32)(r_ecx+0x314u), r_eax);
    /* 00678b29: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00678b2c: mov dword ptr [ecx + 0x344], 0 */ W32((u32)(r_ecx+0x344u), 0x0u);
    /* 00678b36: mov dword ptr [ecx + 0x340], eax */ W32((u32)(r_ecx+0x340u), r_eax);
    /* 00678b3c: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x678b41u); f_007b9a88();
    /* 00678b41: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678b44: push 0x1f00 */ { u32 v = 0x1f00u; r_esp -= 4; W32(r_esp, v); }
    /* 00678b49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678b4b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x678b50u); f_007b52c4();
    /* 00678b50: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678b53: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x678b58u); f_007b4f54();
    /* 00678b58: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678b5b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00678b5d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00678b5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678b60: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x678b65u); f_0050981c();
    /* 00678b65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678b68: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678b6b: mov dword ptr [ecx + 0x33c], eax */ W32((u32)(r_ecx+0x33cu), r_eax);
    /* 00678b71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678b73: je 0x678bd7 */ if (fZ) goto L_00678bd7;
L_00678b75:; BB(0x00678b75);
    /* 00678b75: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00678b77: mov ecx, eax */ r_ecx = r_eax;
    /* 00678b79: call 0x508f08 */ r_esp -= 4; W32(r_esp, 0x678b7eu); f_00508f08();
    /* 00678b7e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678b81: push 0xffffbf7f */ { u32 v = 0xffffbf7fu; r_esp -= 4; W32(r_esp, v); }
    /* 00678b86: mov ecx, dword ptr [eax + 0x33c] */ r_ecx = R32((u32)(r_eax+0x33cu));
    /* 00678b8c: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x678b91u); f_00508ee4();
    /* 00678b91: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00678b96: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678b99: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00678b9f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678ba2: mov dword ptr [edx + 0x44], 0x40800000 */ W32((u32)(r_edx+0x44u), 0x40800000u);
    /* 00678ba9: mov dword ptr [edx + 0x48], 0x40800000 */ W32((u32)(r_edx+0x48u), 0x40800000u);
    /* 00678bb0: mov ecx, dword ptr [ebx + 0x33c] */ r_ecx = R32((u32)(r_ebx+0x33cu));
    /* 00678bb6: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x678bbbu); f_00508dac();
    /* 00678bbb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678bbe: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00678bc1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00678bc4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678bc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678bca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678bd1: mov esp, ebp */ r_esp = r_ebp;
    /* 00678bd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678bd4: ret 0x10 */ FN_RET(0x00678a8c); r_esp += 20; return;
L_00678bd7:; BB(0x00678bd7);
    /* 00678bd7: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00678bda: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00678bdd: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678be0: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 00678be4: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678bea: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00678bee: mov eax, ecx */ r_eax = r_ecx;
    /* 00678bf0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678bf3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00678bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678bfd: ret 0x10 */ FN_RET(0x00678a8c); r_esp += 20; return;
}

void f_00678ba0(void)
{
    FN_ENTER(0x00678ba0);
    /* 00678ba0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678ba1: aam 0xc7 */ UNSUP(0x00678ba1, "aam 0xc7");
    /* 00678ba3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678ba4: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678ba5: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00678ba7: add byte ptr [eax - 0x39], 0x42 */ { u32 ad = (u32)(r_eax+0xffffffc7u);  u32 a = R8(ad); u32 b = 0x42u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00678bab: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00678bac: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00678bae: add byte ptr [eax - 0x75], 0x8b */ { u32 ad = (u32)(r_eax+0xffffff8bu);  u32 a = R8(ad); u32 b = 0x8bu; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00678bb2: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;   }
    /* 00678bb4: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00678bb6: call 0x508dac */ r_esp -= 4; W32(r_esp, 0x678bbbu); f_00508dac();
    /* 00678bbb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678bbe: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00678bc1: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00678bc4: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678bc7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678bca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678bd1: mov esp, ebp */ r_esp = r_ebp;
    /* 00678bd3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678bd4: ret 0x10 */ FN_RET(0x00678ba0); r_esp += 20; return;
}

void f_00678c00(void)
{
    FN_ENTER(0x00678c00);
    /* 00678c00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678c01: mov ebp, esp */ r_ebp = r_esp;
    /* 00678c03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678c05: push 0x8e9da0 */ { u32 v = 0x8e9da0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678c0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678c11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678c18: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678c1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678c1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00678c21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678c24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678c27: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00678c2c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00678c33: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x678c38u); f_005caba4();
    /* 00678c38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678c39: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00678c3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678c3e: je 0x678c77 */ if (fZ) goto L_00678c77;
L_00678c40:; BB(0x00678c40);
    /* 00678c40: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00678c47: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678c4e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678c51: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678c57: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678c5a: call 0x678c7c */ r_esp -= 4; W32(r_esp, 0x678c5fu); f_00678c7c();
    /* 00678c5f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678c62: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00678c69:; BB(0x00678c69);
    /* 00678c69: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678c6c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678c73: mov esp, ebp */ r_esp = r_ebp;
    /* 00678c75: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678c76: ret  */ FN_RET(0x00678c00); r_esp += 4; return;
L_00678c77:; BB(0x00678c77);
    /* 00678c77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678c79: jmp 0x678c69 */ goto L_00678c69;
}

void f_00678c7c(void) /* sub_678C7C */
{
    FN_ENTER(0x00678c7c);
    /* 00678c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678c7d: mov ebp, esp */ r_ebp = r_esp;
    /* 00678c7f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678c81: push 0x8e9dbc */ { u32 v = 0x8e9dbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00678c86: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678c8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678c8d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678c94: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678c97: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678c9a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00678c9d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00678ca0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00678ca3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00678ca6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678ca9: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00678cac: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00678caf: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x678cb4u); f_007ba278();
    /* 00678cb4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678cbb: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00678cbe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678cc1: mov dword ptr [ecx], 0xb376c0 */ W32((u32)(r_ecx), 0xb376c0u);
    /* 00678cc7: mov eax, dword ptr [0x9c9ebc] */ r_eax = R32((u32)(0x9c9ebcu));
    /* 00678ccc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678ccd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00678cd0: call dword ptr [0xb376d4] */ { u32 t = R32((u32)(0xb376d4u)); r_esp -= 4; W32(r_esp, 0x678cd6u); call_ind(t); }
    /* 00678cd6: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00678cd9: mov ebx, dword ptr [eax + 0x84] */ r_ebx = R32((u32)(r_eax+0x84u));
    /* 00678cdf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x678ce4u); f_008587a5();
    /* 00678ce4: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00678ce7: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 00678cea: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00678ced: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678cf0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00678cf3: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00678cf6: fdiv dword ptr [0x93b264] */ ST(0) = ST(0) / R_F32((u32)(0x93b264u));
    /* 00678cfc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00678cfe: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00678d01: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00678d05: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678d0a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00678d0d: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00678d10: fistp dword ptr [edx + 0x90] */ W32((u32)(r_edx+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00678d16: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00678d19: mov eax, edx */ r_eax = r_edx;
    /* 00678d1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678d1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678d25: mov esp, ebp */ r_esp = r_ebp;
    /* 00678d27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678d28: ret 8 */ FN_RET(0x00678c7c); r_esp += 12; return;
}

void f_00678d2c(void) /* sub_678D2C */
{
    FN_ENTER(0x00678d2c);
    /* 00678d2c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678d2f: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00678d35: fld dword ptr [0x93b24c] */ FPUSH(R_F32((u32)(0x93b24cu)));
    /* 00678d3b: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00678d42: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 00678d4a: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 00678d52: mov dword ptr [esp + 0xc], 0x40c00000 */ W32((u32)(r_esp+0xcu), 0x40c00000u);
    /* 00678d5a: fmul dword ptr [esp + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4));
    /* 00678d5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00678d60: ret  */ FN_RET(0x00678d2c); r_esp += 4; return;
}

void f_00678d64(void) /* sub_678D64 */
{
    FN_ENTER(0x00678d64);
    /* 00678d64: mov edx, ecx */ r_edx = r_ecx;
    /* 00678d66: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00678d6a: mov eax, 1 */ r_eax = 0x1u;
    /* 00678d6f: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00678d71: or dword ptr [edx + 0x344], eax */ { u32 ad = (u32)(r_edx+0x344u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678d77: ret 4 */ FN_RET(0x00678d64); r_esp += 8; return;
}

void f_00678d7c(void) /* sub_678D7C */
{
    FN_ENTER(0x00678d7c);
    /* 00678d7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00678d7d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678d7e: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678d81: mov esi, ecx */ r_esi = r_ecx;
    /* 00678d83: fld dword ptr [0x93b248] */ FPUSH(R_F32((u32)(0x93b248u)));
    /* 00678d89: fadd dword ptr [esi + 0x310] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x310u));
    /* 00678d8f: fstp dword ptr [esi + 0x310] */ W_F32((u32)(r_esi+0x310u), ST(0)); FPOP();
    /* 00678d95: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 00678d98: lea edx, [esi + 0x30c] */ r_edx = (u32)(r_esi+0x30cu);
    /* 00678d9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00678da0: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x678da5u); f_0082ebac();
    /* 00678da5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678da6: mov ecx, dword ptr [esi + 0x33c] */ r_ecx = R32((u32)(r_esi+0x33cu));
    /* 00678dac: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x678db1u); f_00508db8();
    /* 00678db1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00678db2: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x678db7u); f_007b999c();
    /* 00678db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678db8: fld dword ptr [esi + 0x310] */ FPUSH(R_F32((u32)(r_esi+0x310u)));
    /* 00678dbe: fcomp dword ptr [0x93b244] */ fx_compare(ST(0), R_F32((u32)(0x93b244u))); FPOP();
    /* 00678dc4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00678dc6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00678dc7: jae 0x678ded */ if (!fC) goto L_00678ded;
L_00678dc9:; BB(0x00678dc9);
    /* 00678dc9: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00678dcc: fsub dword ptr [esi + 0x54] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x54u));
    /* 00678dcf: fcomp dword ptr [esi + 0x340] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x340u))); FPOP();
    /* 00678dd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00678dd7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00678dd8: jae 0x678ded */ if (!fC) goto L_00678ded;
L_00678dda:; BB(0x00678dda);
    /* 00678dda: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 00678dde: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00678de3: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 00678de7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00678dea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678deb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00678dec: ret  */ FN_RET(0x00678d7c); r_esp += 4; return;
L_00678ded:; BB(0x00678ded);
    /* 00678ded: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x678df2u); f_004f7c84();
    /* 00678df2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678df4: je 0x678dfc */ if (fZ) goto L_00678dfc;
L_00678df6:; BB(0x00678df6);
    /* 00678df6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00678df9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678dfa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00678dfb: ret  */ FN_RET(0x00678d7c); r_esp += 4; return;
L_00678dfc:; BB(0x00678dfc);
    /* 00678dfc: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00678e00: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00678e02:; BB(0x00678e02);
    /* 00678e02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678e03: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x678e08u); f_0068d5a8();
    /* 00678e08: mov edi, eax */ r_edi = r_eax;
    /* 00678e0a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678e0d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e0f: je 0x678ef7 */ if (fZ) goto L_00678ef7;
L_00678e15:; BB(0x00678e15);
    /* 00678e15: mov edx, dword ptr [edi + 0x3f0] */ r_edx = R32((u32)(r_edi+0x3f0u));
    /* 00678e1b: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e21: jne 0x678ef7 */ if (!fZ) goto L_00678ef7;
L_00678e27:; BB(0x00678e27);
    /* 00678e27: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00678e2a: test edx, 0x4000e00 */ {  u32 a = r_edx; u32 b = 0x4000e00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00678e30: jne 0x678ef7 */ if (!fZ) goto L_00678ef7;
L_00678e36:; BB(0x00678e36);
    /* 00678e36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00678e38: mov edx, 1 */ r_edx = 0x1u;
    /* 00678e3d: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00678e3f: test dword ptr [esi + 0x344], edx */ {  u32 a = R32((u32)(r_esi+0x344u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e45: je 0x678e4e */ if (fZ) goto L_00678e4e;
L_00678e47:; BB(0x00678e47);
    /* 00678e47: mov edx, 1 */ r_edx = 0x1u;
    /* 00678e4c: jmp 0x678e50 */ goto L_00678e50;
L_00678e4e:; BB(0x00678e4e);
    /* 00678e4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00678e50:; BB(0x00678e50);
    /* 00678e50: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e52: jne 0x678ef7 */ if (!fZ) goto L_00678ef7;
L_00678e58:; BB(0x00678e58);
    /* 00678e58: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00678e5b: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00678e5e: mov edx, dword ptr [esi + 0xa4] */ r_edx = R32((u32)(r_esi+0xa4u));
    /* 00678e64: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00678e67: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 00678e69: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00678e6b: fld dword ptr [0x93b240] */ FPUSH(R_F32((u32)(0x93b240u)));
    /* 00678e71: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00678e74: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 00678e76: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00678e78: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00678e7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00678e7c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00678e7e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00678e7f: jae 0x678f0d */ if (!fC) goto L_00678f0d;
L_00678e85:; BB(0x00678e85);
    /* 00678e85: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00678e87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00678e89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00678e8a: jae 0x678ef7 */ if (!fC) goto L_00678ef7;
L_00678e8c:; BB(0x00678e8c);
    /* 00678e8c: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00678e91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00678e92: mov ecx, esi */ r_ecx = r_esi;
    /* 00678e94: call 0x7b8338 */ r_esp -= 4; W32(r_esp, 0x678e99u); f_007b8338();
    /* 00678e99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e9b: je 0x678ef7 */ if (fZ) goto L_00678ef7;
L_00678e9d:; BB(0x00678e9d);
    /* 00678e9d: mov dword ptr [esp], 1 */ W32((u32)(r_esp), 0x1u);
    /* 00678ea4: mov ecx, esi */ r_ecx = r_esi;
    /* 00678ea6: call 0x678d2c */ r_esp -= 4; W32(r_esp, 0x678eabu); f_00678d2c();
    /* 00678eab: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00678ead: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00678eb1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00678eb6: mov ecx, edi */ r_ecx = r_edi;
    /* 00678eb8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678eb9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678eba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00678ebc: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678ec0: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00678ec4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00678ec5: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x678ec8u); call_ind(t); }
    /* 00678ec8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00678eca: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00678ecd: or edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00678ed3: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00678ed6: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 00678ed9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00678edb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678edc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00678edd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678ede: push 0xaf */ { u32 v = 0xafu; r_esp -= 4; W32(r_esp, v); }
    /* 00678ee3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x678ee8u); f_00814298();
    /* 00678ee8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00678eeb: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 00678eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678ef0: mov ecx, esi */ r_ecx = r_esi;
    /* 00678ef2: call 0x678d64 */ r_esp -= 4; W32(r_esp, 0x678ef7u); f_00678d64();
L_00678ef7:; BB(0x00678ef7);
    /* 00678ef7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00678efa: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678efd: jl 0x678e02 */ if ((fS!=fO)) goto L_00678e02;
L_00678f03:; BB(0x00678f03);
    /* 00678f03: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00678f07: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00678f0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678f0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00678f0c: ret  */ FN_RET(0x00678d7c); r_esp += 4; return;
L_00678f0d:; BB(0x00678f0d);
    /* 00678f0d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00678f0f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00678f11: jmp 0x678ef7 */ goto L_00678ef7;
}

void f_00678f14(void) /* sub_678F14 */
{
    FN_ENTER(0x00678f14);
    /* 00678f14: mov dword ptr [0xa8ff94], 0x3f800000 */ W32((u32)(0xa8ff94u), 0x3f800000u);
    /* 00678f1e: mov dword ptr [0xa8ff98], 0x41000000 */ W32((u32)(0xa8ff98u), 0x41000000u);
    /* 00678f28: mov dword ptr [0xa8ff9c], 0x3fc00000 */ W32((u32)(0xa8ff9cu), 0x3fc00000u);
    /* 00678f32: ret  */ FN_RET(0x00678f14); r_esp += 4; return;
}

void f_00678f34(void) /* sub_678F34 */
{
    FN_ENTER(0x00678f34);
    /* 00678f34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678f35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00678f37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00678f39: call 0x678f58 */ r_esp -= 4; W32(r_esp, 0x678f3eu); f_00678f58();
    /* 00678f3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00678f42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00678f44: jne 0x678f4a */ if (!fZ) goto L_00678f4a;
L_00678f46:; BB(0x00678f46);
    /* 00678f46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678f47: ret 4 */ FN_RET(0x00678f34); r_esp += 8; return;
L_00678f4a:; BB(0x00678f4a);
    /* 00678f4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00678f4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x678f50u); f_005c2f74();
    /* 00678f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678f51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00678f52: ret 4 */ FN_RET(0x00678f34); r_esp += 8; return;
}

void f_00678f58(void) /* sub_678F58 */
{
    FN_ENTER(0x00678f58);
    /* 00678f58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678f59: mov ebp, esp */ r_ebp = r_esp;
    /* 00678f5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678f5d: push 0x8e9dd8 */ { u32 v = 0x8e9dd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00678f62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678f69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00678f70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678f73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00678f76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00678f79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00678f7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00678f7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00678f82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678f89: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678f8c: mov edx, dword ptr [eax + 0x340] */ r_edx = R32((u32)(r_eax+0x340u));
    /* 00678f92: mov dword ptr [eax], 0xb37900 */ W32((u32)(r_eax), 0xb37900u);
    /* 00678f98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678f9a: je 0x678fac */ if (fZ) goto L_00678fac;
L_00678f9c:; BB(0x00678f9c);
    /* 00678f9c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00678fa0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00678fa5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00678fa9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00678fac:; BB(0x00678fac);
    /* 00678fac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678fad: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x678fb2u); f_007b4e84();
    /* 00678fb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00678fb3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678fb6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x678fbbu); f_007b9c8c();
    /* 00678fbb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00678fc2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678fc5: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x678fcau); f_00770660();
    /* 00678fca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00678fcd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00678fd4: mov esp, ebp */ r_esp = r_ebp;
    /* 00678fd6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678fd7: ret  */ FN_RET(0x00678f58); r_esp += 4; return;
}

void f_00678fd8(void) /* sub_678FD8 */
{
    FN_ENTER(0x00678fd8);
    /* 00678fd8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678fdb: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00678fe1: fld dword ptr [0x93b2a4] */ FPUSH(R_F32((u32)(0x93b2a4u)));
    /* 00678fe7: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00678fee: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 00678ff6: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 00678ffe: mov dword ptr [esp + 0xc], 0x40c00000 */ W32((u32)(r_esp+0xcu), 0x40c00000u);
    /* 00679006: fmul dword ptr [esp + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esp+r_edx*4));
    /* 00679009: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0067900c: ret  */ FN_RET(0x00678fd8); r_esp += 4; return;
}

