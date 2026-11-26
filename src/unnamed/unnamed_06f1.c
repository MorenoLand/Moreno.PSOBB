#include "protos.h"

void f_006f1000(void) /* sub_6F1000 */
{
    FN_ENTER(0x006f1000);
    /* 006f1000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1001: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1003: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1005: push 0x8efb1e */ { u32 v = 0x8efb1eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f100a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1011: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1018: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f101b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f101e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f1021: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f1024: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f1027: mov edx, dword ptr [ecx + 0x124] */ r_edx = R32((u32)(r_ecx+0x124u));
    /* 006f102d: mov dword ptr [ecx], 0xb3e618 */ W32((u32)(r_ecx), 0xb3e618u);
    /* 006f1033: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1035: je 0x6f104e */ if (fZ) goto L_006f104e;
L_006f1037:; BB(0x006f1037);
    /* 006f1037: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f103b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f1040: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f1044: mov dword ptr [ecx + 0x124], 0 */ W32((u32)(r_ecx+0x124u), 0x0u);
L_006f104e:; BB(0x006f104e);
    /* 006f104e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f1055: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6f105au); f_007ba1f0();
    /* 006f105a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f105d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1064: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1066: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1067: ret  */ FN_RET(0x006f1000); r_esp += 4; return;
}

void f_006f1068(void) /* sub_6F1068 */
{
    FN_ENTER(0x006f1068);
    /* 006f1068: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 006f106b: fsub dword ptr [0x96e018] */ ST(0) = ST(0) - R_F32((u32)(0x96e018u));
    /* 006f1071: fcom dword ptr [0x96e01c] */ fx_compare(ST(0), R_F32((u32)(0x96e01cu))); 
    /* 006f1077: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f1079: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f107a: jb 0x6f1080 */ if (fC) goto L_006f1080;
L_006f107c:; BB(0x006f107c);
    /* 006f107c: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006f107f: ret  */ FN_RET(0x006f1068); r_esp += 4; return;
L_006f1080:; BB(0x006f1080);
    /* 006f1080: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006f1082: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006f1086: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f1088: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 006f108b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1091: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006f1095: ret  */ FN_RET(0x006f1068); r_esp += 4; return;
}

void f_006f1098(void) /* sub_6F1098 */
{
    FN_ENTER(0x006f1098);
    /* 006f1098: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1099: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f109c: mov esi, ecx */ r_esi = r_ecx;
    /* 006f109e: mov ecx, esi */ r_ecx = r_esi;
    /* 006f10a0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6f10a5u); f_008173b4();
    /* 006f10a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f10a7: jne 0x6f10ae */ if (!fZ) goto L_006f10ae;
L_006f10a9:; BB(0x006f10a9);
    /* 006f10a9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f10ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f10ad: ret  */ FN_RET(0x006f1098); r_esp += 4; return;
L_006f10ae:; BB(0x006f10ae);
    /* 006f10ae: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f10b1: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x6f10b6u); f_005c57ac();
    /* 006f10b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f10b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f10b9: je 0x6f10a9 */ if (fZ) goto L_006f10a9;
L_006f10bb:; BB(0x006f10bb);
    /* 006f10bb: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006f10c0: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 006f10c3: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 006f10c8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006f10cb: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 006f10ce: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006f10d2: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 006f10d5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006f10d9: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 006f10dc: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006f10e0: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 006f10e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f10e5: je 0x6f10f1 */ if (fZ) goto L_006f10f1;
L_006f10e7:; BB(0x006f10e7);
    /* 006f10e7: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f10ea: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006f10ef: jmp 0x6f1105 */ goto L_006f1105;
L_006f10f1:; BB(0x006f10f1);
    /* 006f10f1: fld dword ptr [0x96e014] */ FPUSH(R_F32((u32)(0x96e014u)));
    /* 006f10f7: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 006f10fa: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006f10fd: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f1100: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_006f1105:; BB(0x006f1105);
    /* 006f1105: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 006f1108: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f110a: je 0x6f1174 */ if (fZ) goto L_006f1174;
L_006f110c:; BB(0x006f110c);
    /* 006f110c: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 006f110f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1111: je 0x6f1174 */ if (fZ) goto L_006f1174;
L_006f1113:; BB(0x006f1113);
    /* 006f1113: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1114: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x6f1119u); f_0081a9b8();
    /* 006f1119: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f111a: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6f111fu); f_0082dbac();
    /* 006f111f: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6f1124u); f_0082d7b0();
    /* 006f1124: lea ecx, [esi + 0x28] */ r_ecx = (u32)(r_esi+0x28u);
    /* 006f1127: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6f112cu); f_0082d838();
    /* 006f112c: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 006f112f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1131: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6f1136u); f_0082d8bc();
    /* 006f1136: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006f1139: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f113b: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6f1140u); f_00830c04();
    /* 006f1140: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 006f1143: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1145: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6f114au); f_0082e9e4();
    /* 006f114a: lea ecx, [esi + 0x4c] */ r_ecx = (u32)(r_esi+0x4cu);
    /* 006f114d: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x6f1152u); f_00831290();
    /* 006f1152: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006f1155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1156: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6f115bu); f_0082d710();
    /* 006f115b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f115c: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 006f115f: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6f1164u); f_00831758();
    /* 006f1164: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1169: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6f116eu); f_0082d710();
    /* 006f116e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f116f: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6f1174u); f_0082dab0();
L_006f1174:; BB(0x006f1174);
    /* 006f1174: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6f1179u); f_0082da80();
    /* 006f1179: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006f117e: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006f1183: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f1186: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f1187: ret  */ FN_RET(0x006f1098); r_esp += 4; return;
}

void f_006f1188(void) /* sub_6F1188 */
{
    FN_ENTER(0x006f1188);
    /* 006f1188: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1189: mov ebp, esp */ r_ebp = r_esp;
    /* 006f118b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f118d: push 0x8efb5e */ { u32 v = 0x8efb5eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1192: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1199: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f11a0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f11a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f11a6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006f11a9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006f11ac: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006f11af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f11b1: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 006f11b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f11b7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f11b9: je 0x6f1272 */ if (fZ) goto L_006f1272;
L_006f11bf:; BB(0x006f11bf);
    /* 006f11bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006f11c2: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006f11c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f11c6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6f11cbu); f_0068d5a8();
    /* 006f11cb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006f11ce: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f11d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f11d3: je 0x6f1272 */ if (fZ) goto L_006f1272;
L_006f11d9:; BB(0x006f11d9);
    /* 006f11d9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006f11e0: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 006f11e5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f11eau); f_005caba4();
    /* 006f11ea: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f11ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f11f0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006f11f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f11f5: je 0x6f1286 */ if (fZ) goto L_006f1286;
L_006f11fb:; BB(0x006f11fb);
    /* 006f11fb: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006f1202: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f1209: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f120c: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f120f: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 006f1212: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006f1215: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1219: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f121a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f121b: call 0x6f1290 */ r_esp -= 4; W32(r_esp, 0x6f1220u); f_006f1290();
    /* 006f1220: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006f1227:; BB(0x006f1227);
    /* 006f1227: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f122e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1233: je 0x6f1272 */ if (fZ) goto L_006f1272;
L_006f1235:; BB(0x006f1235);
    /* 006f1235: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006f123c: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006f123e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f1243u); f_005caba4();
    /* 006f1243: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1244: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006f1247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1249: je 0x6f1272 */ if (fZ) goto L_006f1272;
L_006f124b:; BB(0x006f124b);
    /* 006f124b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006f1252: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f1259: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f125c: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 006f125e: push 0x5cdcc0 */ { u32 v = 0x5cdcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1263: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1264: mov ecx, eax */ r_ecx = r_eax;
    /* 006f1266: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x6f126bu); f_005e5b88();
    /* 006f126b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006f1272:; BB(0x006f1272);
    /* 006f1272: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1275: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f1278: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f127b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1282: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1284: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1285: ret  */ FN_RET(0x006f1188); r_esp += 4; return;
L_006f1286:; BB(0x006f1286);
    /* 006f1286: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f1288: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f128b: jmp 0x6f1227 */ goto L_006f1227;
}

void f_006f1290(void) /* sub_6F1290 */
{
    FN_ENTER(0x006f1290);
    /* 006f1290: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1291: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1293: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1295: push 0x8efb7a */ { u32 v = 0x8efb7au; r_esp -= 4; W32(r_esp, v); }
    /* 006f129a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f12a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f12a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f12a8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f12ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f12ae: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006f12b1: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006f12b4: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006f12b7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006f12ba: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f12c0: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006f12c3: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 006f12c6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f12c9: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006f12cc: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006f12cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006f12d2: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x6f12d7u); f_007ba278();
    /* 006f12d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f12de: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f12e1: mov dword ptr [ecx], 0xb3e618 */ W32((u32)(r_ecx), 0xb3e618u);
    /* 006f12e7: mov dword ptr [ecx + 0xc0], 0 */ W32((u32)(r_ecx+0xc0u), 0x0u);
    /* 006f12f1: add ecx, 0xc8 */ {  u32 a = r_ecx; u32 b = 0xc8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f12f7: call 0x6f15ac */ r_esp -= 4; W32(r_esp, 0x6f12fcu); f_006f15ac();
    /* 006f12fc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006f1303: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f1306: add ecx, 0xe8 */ {  u32 a = r_ecx; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f130c: call 0x6f15ac */ r_esp -= 4; W32(r_esp, 0x6f1311u); f_006f15ac();
    /* 006f1311: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006f1318: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f131b: mov eax, dword ptr [0x9cfa28] */ r_eax = R32((u32)(0x9cfa28u));
    /* 006f1320: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006f1324: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006f1327: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006f132d: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 006f1331: call 0x5c8498 */ r_esp -= 4; W32(r_esp, 0x6f1336u); f_005c8498();
    /* 006f1336: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f1339: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
    /* 006f133d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1340: mov ebx, dword ptr [eax + 8] */ r_ebx = R32((u32)(r_eax+0x8u));
    /* 006f1343: mov dword ptr [edx + 0x110], ebx */ W32((u32)(r_edx+0x110u), r_ebx);
    /* 006f1349: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 006f134c: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 006f134f: movzx edi, word ptr [eax] */ r_edi = (u32)R16((u32)(r_eax));
    /* 006f1352: mov word ptr [edx + 0x114], di */ W16((u32)(r_edx+0x114u), (u16)r_edi);
    /* 006f1359: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 006f135c: mov dword ptr [edx + 0x118], ecx */ W32((u32)(r_edx+0x118u), r_ecx);
    /* 006f1362: movzx ecx, word ptr [eax + 0x10] */ r_ecx = (u32)R16((u32)(r_eax+0x10u));
    /* 006f1366: mov word ptr [edx + 0x11c], cx */ W16((u32)(r_edx+0x11cu), (u16)r_ecx);
    /* 006f136d: movzx ecx, word ptr [eax + 0x12] */ r_ecx = (u32)R16((u32)(r_eax+0x12u));
    /* 006f1371: mov word ptr [edx + 0x11e], cx */ W16((u32)(r_edx+0x11eu), (u16)r_ecx);
    /* 006f1378: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 006f137b: mov dword ptr [edx + 0x120], ecx */ W32((u32)(r_edx+0x120u), r_ecx);
    /* 006f1381: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006f1384: mov dword ptr [edx + 0x128], ecx */ W32((u32)(r_edx+0x128u), r_ecx);
    /* 006f138a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006f138d: mov dword ptr [edx + 0x12c], ecx */ W32((u32)(r_edx+0x12cu), r_ecx);
    /* 006f1393: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006f1396: mov dword ptr [edx + 0x130], ecx */ W32((u32)(r_edx+0x130u), r_ecx);
    /* 006f139c: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 006f139f: mov dword ptr [edx + 0x134], ecx */ W32((u32)(r_edx+0x134u), r_ecx);
    /* 006f13a5: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f13a8: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 006f13ab: mov dword ptr [edx + 0x138], eax */ W32((u32)(r_edx+0x138u), r_eax);
    /* 006f13b1: mov dword ptr [edx + 0x13c], 1 */ W32((u32)(r_edx+0x13cu), 0x1u);
    /* 006f13bb: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6f13c0u); f_0082dcbc();
    /* 006f13c0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f13c3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f13c6: fstp dword ptr [eax + 0x90] */ W_F32((u32)(r_eax+0x90u), ST(0)); FPOP();
    /* 006f13cc: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 006f13d6: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6f13dbu); f_0082ddd8();
    /* 006f13db: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f13de: fstp dword ptr [ecx + 0x98] */ W_F32((u32)(r_ecx+0x98u), ST(0)); FPOP();
    /* 006f13e4: add ecx, 0x90 */ {  u32 a = r_ecx; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f13ea: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x6f13efu); f_0083173c();
    /* 006f13ef: fcomp dword ptr [0x96e010] */ fx_compare(ST(0), R_F32((u32)(0x96e010u))); FPOP();
    /* 006f13f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f13f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f13f8: je 0x6f140a */ if (fZ) goto L_006f140a;
L_006f13fa:; BB(0x006f13fa);
    /* 006f13fa: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f13fd: add ecx, 0x90 */ {  u32 a = r_ecx; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1403: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6f1408u); f_0082df08();
    /* 006f1408: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f140a:; BB(0x006f140a);
    /* 006f140a: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f140d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f1410: push dword ptr [edx + 0x118] */ { u32 v = R32((u32)(r_edx+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1416: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 006f141c: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x6f1421u); f_005c5528();
    /* 006f1421: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1422: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f1425: mov dword ptr [ecx + 0x108], eax */ W32((u32)(r_ecx+0x108u), r_eax);
    /* 006f142b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f142e: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1431: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1437: call 0x6f15b8 */ r_esp -= 4; W32(r_esp, 0x6f143cu); f_006f15b8();
    /* 006f143c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f143f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1442: lea edx, [eax + 0x30] */ r_edx = (u32)(r_eax+0x30u);
    /* 006f1445: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f1448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1449: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f144a: push dword ptr [ecx + 0x10c] */ { u32 v = R32((u32)(r_ecx+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1450: call 0x6f15fc */ r_esp -= 4; W32(r_esp, 0x6f1455u); f_006f15fc();
    /* 006f1455: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f1458: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f145a: push dword ptr [eax + 0x108] */ { u32 v = R32((u32)(r_eax+0x108u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1460: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x6f1465u); f_005e4ba8();
    /* 006f1465: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f1468: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f146b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006f146d: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 006f1470: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 006f1473: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 006f1476: mov edi, dword ptr [esi + 0x10c] */ r_edi = R32((u32)(r_esi+0x10cu));
    /* 006f147c: mov dword ptr [esi + 0xb4], 0x40c00000 */ W32((u32)(r_esi+0xb4u), 0x40c00000u);
    /* 006f1486: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 006f1489: mov dword ptr [esi + 0xb8], eax */ W32((u32)(r_esi+0xb8u), r_eax);
    /* 006f148f: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 006f1499: mov dword ptr [esi + 0x9c], edx */ W32((u32)(r_esi+0x9cu), r_edx);
    /* 006f149f: mov dword ptr [esi + 0xa0], ecx */ W32((u32)(r_esi+0xa0u), r_ecx);
    /* 006f14a5: mov dword ptr [esi + 0xa4], ebx */ W32((u32)(r_esi+0xa4u), r_ebx);
    /* 006f14ab: mov dword ptr [esi + 0xa8], edx */ W32((u32)(r_esi+0xa8u), r_edx);
    /* 006f14b1: mov dword ptr [esi + 0xac], ecx */ W32((u32)(r_esi+0xacu), r_ecx);
    /* 006f14b7: mov dword ptr [esi + 0xb0], ebx */ W32((u32)(r_esi+0xb0u), r_ebx);
    /* 006f14bd: add edi, 0x8d0 */ {  u32 a = r_edi; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006f14c3: je 0x6f156b */ if (fZ) goto L_006f156b;
L_006f14c9:; BB(0x006f14c9);
    /* 006f14c9: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f14cc: mov ebx, dword ptr [eax + 0x8d0] */ r_ebx = R32((u32)(r_eax+0x8d0u));
    /* 006f14d2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f14d4: jl 0x6f155c */ if ((fS!=fO)) goto L_006f155c;
L_006f14da:; BB(0x006f14da);
    /* 006f14da: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f14dd: jg 0x6f155c */ if ((!fZ&&fS==fO)) goto L_006f155c;
L_006f14e3:; BB(0x006f14e3);
    /* 006f14e3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006f14e5: je 0x6f155c */ if (fZ) goto L_006f155c;
L_006f14e7:; BB(0x006f14e7);
    /* 006f14e7: mov ecx, 0 */ r_ecx = 0x0u;
    /* 006f14ec: jl 0x6f14f3 */ if ((fS!=fO)) goto L_006f14f3;
L_006f14ee:; BB(0x006f14ee);
    /* 006f14ee: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f14f1: jle 0x6f14f7 */ if ((fZ||fS!=fO)) goto L_006f14f7;
L_006f14f3:; BB(0x006f14f3);
    /* 006f14f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f14f5: jmp 0x6f14f9 */ goto L_006f14f9;
L_006f14f7:; BB(0x006f14f7);
    /* 006f14f7: mov eax, ebx */ r_eax = r_ebx;
L_006f14f9:; BB(0x006f14f9);
    /* 006f14f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f14fb: je 0x6f156b */ if (fZ) goto L_006f156b;
L_006f14fd:; BB(0x006f14fd);
    /* 006f14fd: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f1500: movzx edx, word ptr [edi + ecx*4 + 0x8d4] */ r_edx = (u32)R16((u32)(r_edi+r_ecx*4+0x8d4u));
    /* 006f1508: movzx eax, word ptr [edi + ecx*4 + 0x8d6] */ r_eax = (u32)R16((u32)(r_edi+r_ecx*4+0x8d6u));
    /* 006f1510: movsx edi, byte ptr [esi + 0xe6] */ r_edi = (u32)(i32)(i8)R8((u32)(r_esi+0xe6u));
    /* 006f1517: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f151a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006f151d: lea eax, [esi + 0xc8] */ r_eax = (u32)(r_esi+0xc8u);
    /* 006f1523: jge 0x6f1544 */ if ((fS==fO)) goto L_006f1544;
L_006f1525:; BB(0x006f1525);
    /* 006f1525: mov word ptr [eax + edi*2], dx */ W16((u32)(r_eax+r_edi*2), (u16)r_edx);
    /* 006f1529: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f152c: movsx esi, byte ptr [eax + 0x1e] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x1eu));
    /* 006f1530: mov byte ptr [esi + eax + 0x14], dl */ W8((u32)(r_esi+r_eax+0x14u), (u8)r_edx);
    /* 006f1534: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006f1537: add byte ptr [eax + 0x1e], 1 */ { u32 ad = (u32)(r_eax+0x1eu);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006f153b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f153e: mov ebx, dword ptr [eax + 0x8d0] */ r_ebx = R32((u32)(r_eax+0x8d0u));
L_006f1544:; BB(0x006f1544);
    /* 006f1544: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1547: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f1549: jl 0x6f1550 */ if ((fS!=fO)) goto L_006f1550;
L_006f154b:; BB(0x006f154b);
    /* 006f154b: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f154e: jle 0x6f1554 */ if ((fZ||fS!=fO)) goto L_006f1554;
L_006f1550:; BB(0x006f1550);
    /* 006f1550: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f1552: jmp 0x6f1556 */ goto L_006f1556;
L_006f1554:; BB(0x006f1554);
    /* 006f1554: mov eax, ebx */ r_eax = r_ebx;
L_006f1556:; BB(0x006f1556);
    /* 006f1556: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1558: jne 0x6f14fd */ if (!fZ) goto L_006f14fd;
L_006f155a:; BB(0x006f155a);
    /* 006f155a: jmp 0x6f156b */ goto L_006f156b;
L_006f155c:; BB(0x006f155c);
    /* 006f155c: mov eax, dword ptr [esi + 0xc0] */ r_eax = R32((u32)(r_esi+0xc0u));
    /* 006f1562: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f1565: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
L_006f156b:; BB(0x006f156b);
    /* 006f156b: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006f1570: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006f1573: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1576: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1578: mov dword ptr [esi + 0x124], ecx */ W32((u32)(r_esi+0x124u), r_ecx);
    /* 006f157e: mov dword ptr [esi + 0x10c], ecx */ W32((u32)(r_esi+0x10cu), r_ecx);
    /* 006f1584: mov dword ptr [esi + 0x108], ecx */ W32((u32)(r_esi+0x108u), r_ecx);
    /* 006f158a: mov word ptr [esi + 0xc4], dx */ W16((u32)(r_esi+0xc4u), (u16)r_edx);
    /* 006f1591: mov byte ptr [esi + 0xc6], cl */ W8((u32)(r_esi+0xc6u), (u8)r_ecx);
    /* 006f1597: mov eax, esi */ r_eax = r_esi;
    /* 006f1599: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f159c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f159f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f15a6: mov esp, ebp */ r_esp = r_ebp;
    /* 006f15a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f15a9: ret 0x10 */ FN_RET(0x006f1290); r_esp += 20; return;
}

void f_006f15ac(void) /* sub_6F15AC */
{
    FN_ENTER(0x006f15ac);
    /* 006f15ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f15ae: mov byte ptr [ecx + 0x1e], dl */ W8((u32)(r_ecx+0x1eu), (u8)r_edx);
    /* 006f15b1: mov byte ptr [ecx + 0x1f], dl */ W8((u32)(r_ecx+0x1fu), (u8)r_edx);
    /* 006f15b4: mov eax, ecx */ r_eax = r_ecx;
    /* 006f15b6: ret  */ FN_RET(0x006f15ac); r_esp += 4; return;
}

void f_006f15b8(void) /* sub_6F15B8 */
{
    FN_ENTER(0x006f15b8);
    /* 006f15b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f15b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f15ba: mov edi, ecx */ r_edi = r_ecx;
    /* 006f15bc: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006f15c0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6f15c5u); f_0082d7b0();
    /* 006f15c5: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006f15c9: mov dword ptr [edi + 0x5c], 0xffffc000 */ W32((u32)(r_edi+0x5cu), 0xffffc000u);
    /* 006f15d0: mov dword ptr [edi + 0x60], ebx */ W32((u32)(r_edi+0x60u), r_ebx);
    /* 006f15d3: movsx ebx, word ptr [edi + 0x11e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x11eu));
    /* 006f15da: call 0x687660 */ r_esp -= 4; W32(r_esp, 0x6f15dfu); f_00687660();
    /* 006f15df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f15e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f15e3: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006f15e6: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006f15e8: mov eax, dword ptr [edx + ebx*4 + 0x96dfa0] */ r_eax = R32((u32)(r_edx+r_ebx*4+0x96dfa0u));
    /* 006f15ef: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
    /* 006f15f2: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6f15f7u); f_0082da80();
    /* 006f15f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f15f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f15f9: ret 8 */ FN_RET(0x006f15b8); r_esp += 12; return;
}

void f_006f15fc(void) /* sub_6F15FC */
{
    FN_ENTER(0x006f15fc);
    /* 006f15fc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f1600: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006f1604: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006f1606: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 006f1608: fld dword ptr [0x96e008] */ FPUSH(R_F32((u32)(0x96e008u)));
    /* 006f160e: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 006f1610: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f1612: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 006f1615: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006f1618: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 006f161b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 006f161d: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006f1620: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 006f1623: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 006f1626: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006f1628: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 006f162b: ret 0xc */ FN_RET(0x006f15fc); r_esp += 16; return;
}

void f_006f1600(void)
{
    FN_ENTER(0x006f1600);
    /* 006f1600: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006f1604: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 006f1606: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 006f1608: fld dword ptr [0x96e008] */ FPUSH(R_F32((u32)(0x96e008u)));
    /* 006f160e: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 006f1610: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f1612: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 006f1615: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 006f1618: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 006f161b: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 006f161d: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006f1620: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 006f1623: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 006f1626: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 006f1628: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 006f162b: ret 0xc */ FN_RET(0x006f1600); r_esp += 16; return;
}

void f_006f1630(void) /* sub_6F1630 */
{
    FN_ENTER(0x006f1630);
    /* 006f1630: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1631: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1633: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1635: push 0x8efba0 */ { u32 v = 0x8efba0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f163a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1640: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1641: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1648: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f164b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f164e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006f1651: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006f1654: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006f1657: movzx eax, word ptr [ecx + 0x114] */ r_eax = (u32)R16((u32)(r_ecx+0x114u));
    /* 006f165e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006f1661: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1662: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6f1667u); f_0068d5a8();
    /* 006f1667: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f166a: push dword ptr [edx + 0x118] */ { u32 v = R32((u32)(r_edx+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1670: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 006f1676: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x6f167bu); f_005c57ac();
    /* 006f167b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f167e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1681: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 006f1687: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1689: je 0x6f17a7 */ if (fZ) goto L_006f17a7;
L_006f168f:; BB(0x006f168f);
    /* 006f168f: mov eax, edx */ r_eax = r_edx;
    /* 006f1691: mov edx, dword ptr [eax + 0x10c] */ r_edx = R32((u32)(r_eax+0x10cu));
    /* 006f1697: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1699: je 0x6f17a7 */ if (fZ) goto L_006f17a7;
L_006f169f:; BB(0x006f169f);
    /* 006f169f: mov edx, eax */ r_edx = r_eax;
    /* 006f16a1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f16a5: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006f16aa: mov ecx, dword ptr [edx + 0x13c] */ r_ecx = R32((u32)(r_edx+0x13cu));
    /* 006f16b0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f16b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f16b6: je 0x6f16c5 */ if (fZ) goto L_006f16c5;
L_006f16b8:; BB(0x006f16b8);
    /* 006f16b8: mov eax, edx */ r_eax = r_edx;
    /* 006f16ba: lea edx, [eax + 0x128] */ r_edx = (u32)(r_eax+0x128u);
    /* 006f16c0: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006f16c3: jmp 0x6f16ca */ goto L_006f16ca;
L_006f16c5:; BB(0x006f16c5);
    /* 006f16c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f16c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006f16ca:; BB(0x006f16ca);
    /* 006f16ca: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006f16d1: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 006f16d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f16d8u); f_005caba4();
    /* 006f16d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f16d9: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006f16dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f16de: je 0x6f170d */ if (fZ) goto L_006f170d;
L_006f16e0:; BB(0x006f16e0);
    /* 006f16e0: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006f16e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f16ee: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f16f1: push dword ptr [ebx + 0x118] */ { u32 v = R32((u32)(r_ebx+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f16f7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f16fa: mov ecx, eax */ r_ecx = r_eax;
    /* 006f16fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f16fd: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1700: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1701: call 0x6f17c8 */ r_esp -= 4; W32(r_esp, 0x6f1706u); f_006f17c8();
    /* 006f1706: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006f170d:; BB(0x006f170d);
    /* 006f170d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f1714: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1717: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 006f171d: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006f1720: jne 0x6f1729 */ if (!fZ) goto L_006f1729;
L_006f1722:; BB(0x006f1722);
    /* 006f1722: mov ecx, eax */ r_ecx = r_eax;
    /* 006f1724: call 0x6f1888 */ r_esp -= 4; W32(r_esp, 0x6f1729u); f_006f1888();
L_006f1729:; BB(0x006f1729);
    /* 006f1729: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f172c: call 0x6f1ac4 */ r_esp -= 4; W32(r_esp, 0x6f1731u); f_006f1ac4();
    /* 006f1731: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1734: mov ecx, dword ptr [eax + 0x124] */ r_ecx = R32((u32)(r_eax+0x124u));
    /* 006f173a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f173c: je 0x6f1747 */ if (fZ) goto L_006f1747;
L_006f173e:; BB(0x006f173e);
    /* 006f173e: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 006f1741: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1742: call 0x5073d0 */ r_esp -= 4; W32(r_esp, 0x6f1747u); f_005073d0();
L_006f1747:; BB(0x006f1747);
    /* 006f1747: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006f174a: mov edx, dword ptr [eax + 0xc0] */ r_edx = R32((u32)(r_eax+0xc0u));
    /* 006f1750: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006f1753: je 0x6f1775 */ if (fZ) goto L_006f1775;
L_006f1755:; BB(0x006f1755);
    /* 006f1755: mov edx, eax */ r_edx = r_eax;
    /* 006f1757: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f175a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f175e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1763: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f1767: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f176a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1771: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1773: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1774: ret  */ FN_RET(0x006f1630); r_esp += 4; return;
L_006f1775:; BB(0x006f1775);
    /* 006f1775: mov ecx, eax */ r_ecx = r_eax;
    /* 006f1777: mov eax, dword ptr [ecx + 0x138] */ r_eax = R32((u32)(r_ecx+0x138u));
    /* 006f177d: add dword ptr [ecx + 0x5c], eax */ { u32 ad = (u32)(r_ecx+0x5cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006f1780: call 0x6f1b14 */ r_esp -= 4; W32(r_esp, 0x6f1785u); f_006f1b14();
    /* 006f1785: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1788: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f178b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f178d: mov dword ptr [edx + 0x108], eax */ W32((u32)(r_edx+0x108u), r_eax);
    /* 006f1793: mov dword ptr [edx + 0x10c], eax */ W32((u32)(r_edx+0x10cu), r_eax);
    /* 006f1799: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f179c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f17a3: mov esp, ebp */ r_esp = r_ebp;
    /* 006f17a5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f17a6: ret  */ FN_RET(0x006f1630); r_esp += 4; return;
L_006f17a7:; BB(0x006f17a7);
    /* 006f17a7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f17aa: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006f17ae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f17b3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006f17b7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f17ba: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f17c1: mov esp, ebp */ r_esp = r_ebp;
    /* 006f17c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f17c4: ret  */ FN_RET(0x006f1630); r_esp += 4; return;
}

void f_006f17c8(void) /* sub_6F17C8 */
{
    FN_ENTER(0x006f17c8);
    /* 006f17c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f17c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f17ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f17cb: mov esi, ecx */ r_esi = r_ecx;
    /* 006f17cd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006f17d1: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006f17d5: mov ecx, esi */ r_ecx = r_esi;
    /* 006f17d7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f17d8: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f17ddu); f_008193cc();
    /* 006f17dd: mov dword ptr [esi], 0xb3e608 */ W32((u32)(r_esi), 0xb3e608u);
    /* 006f17e3: mov eax, dword ptr [0x9cfa2c] */ r_eax = R32((u32)(0x9cfa2cu));
    /* 006f17e8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 006f17eb: mov edx, dword ptr [ebp + 0x5c] */ r_edx = R32((u32)(r_ebp+0x5cu));
    /* 006f17ee: mov dword ptr [esi + 0x1c], edx */ W32((u32)(r_esi+0x1cu), r_edx);
    /* 006f17f1: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 006f17f4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006f17f7: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 006f17fa: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 006f17fd: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 006f1800: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 006f1803: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 006f1806: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006f1809: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 006f180c: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 006f180f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1811: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 006f1815: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006f1818: je 0x6f1862 */ if (fZ) goto L_006f1862;
L_006f181a:; BB(0x006f181a);
    /* 006f181a: mov dword ptr [esi + 0x5c], 1 */ W32((u32)(r_esi+0x5cu), 0x1u);
    /* 006f1821: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006f1823: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
    /* 006f1826: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006f1829: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 006f182c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 006f182f: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 006f1832: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 006f1835: mov dword ptr [esi + 0x48], ebx */ W32((u32)(r_esi+0x48u), r_ebx);
L_006f1838:; BB(0x006f1838);
    /* 006f1838: mov edx, dword ptr [ebp + 0x110] */ r_edx = R32((u32)(r_ebp+0x110u));
    /* 006f183e: mov dword ptr [esi + 0x34], edx */ W32((u32)(r_esi+0x34u), r_edx);
    /* 006f1841: mov eax, dword ptr [ebp + 0x68] */ r_eax = R32((u32)(r_ebp+0x68u));
    /* 006f1844: mov dword ptr [esi + 0x4c], eax */ W32((u32)(r_esi+0x4cu), r_eax);
    /* 006f1847: mov ebx, dword ptr [ebp + 0x6c] */ r_ebx = R32((u32)(r_ebp+0x6cu));
    /* 006f184a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006f184e: mov dword ptr [esi + 0x50], ebx */ W32((u32)(r_esi+0x50u), r_ebx);
    /* 006f1851: mov ebp, dword ptr [ebp + 0x70] */ r_ebp = R32((u32)(r_ebp+0x70u));
    /* 006f1854: mov dword ptr [esi + 0x54], ebp */ W32((u32)(r_esi+0x54u), r_ebp);
    /* 006f1857: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 006f185a: mov eax, esi */ r_eax = r_esi;
    /* 006f185c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f185d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f185e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f185f: ret 0x10 */ FN_RET(0x006f17c8); r_esp += 20; return;
L_006f1862:; BB(0x006f1862);
    /* 006f1862: mov dword ptr [esi + 0x5c], 0 */ W32((u32)(r_esi+0x5cu), 0x0u);
    /* 006f1869: mov dword ptr [esi + 0x3c], 0x3f800000 */ W32((u32)(r_esi+0x3cu), 0x3f800000u);
    /* 006f1870: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
    /* 006f1877: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
    /* 006f187e: mov dword ptr [esi + 0x48], 0 */ W32((u32)(r_esi+0x48u), 0x0u);
    /* 006f1885: jmp 0x6f1838 */ goto L_006f1838;
}

void f_006f1888(void) /* sub_6F1888 */
{
    FN_ENTER(0x006f1888);
    /* 006f1888: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1889: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f188a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f188b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f188c: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006f188e: lea esi, [ebp + 0x38] */ r_esi = (u32)(r_ebp+0x38u);
    /* 006f1891: lea edi, [ebp + 0xa8] */ r_edi = (u32)(r_ebp+0xa8u);
    /* 006f1897: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1898: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1899: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6f189eu); f_007a9180();
    /* 006f189e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006f18a1: fcomp dword ptr [0x96dffc] */ fx_compare(ST(0), R_F32((u32)(0x96dffcu))); FPOP();
    /* 006f18a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f18a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f18aa: jae 0x6f19f7 */ if (!fC) goto L_006f19f7;
L_006f18b0:; BB(0x006f18b0);
    /* 006f18b0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006f18b2: call 0x6f1a3c */ r_esp -= 4; W32(r_esp, 0x6f18b7u); f_006f1a3c();
    /* 006f18b7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f18b9: je 0x6f19c6 */ if (fZ) goto L_006f19c6;
L_006f18bf:; BB(0x006f18bf);
    /* 006f18bf: movsx eax, byte ptr [ebp + 0xe7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xe7u));
    /* 006f18c6: cmp al, byte ptr [ebp + 0xe6] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0xe6u)); u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006f18cc: jge 0x6f19c6 */ if ((fS==fO)) goto L_006f19c6;
L_006f18d2:; BB(0x006f18d2);
    /* 006f18d2: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_006f18d5:; BB(0x006f18d5);
    /* 006f18d5: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f18d8: jge 0x6f19c3 */ if ((fS==fO)) goto L_006f19c3;
L_006f18de:; BB(0x006f18de);
    /* 006f18de: movzx edi, word ptr [ebp + eax*2 + 0xc8] */ r_edi = (u32)R16((u32)(r_ebp+r_eax*2+0xc8u));
    /* 006f18e6: movsx eax, byte ptr [eax + ebp + 0xdc] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_ebp+0xdcu));
    /* 006f18ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f18ef: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006f18f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f18f2: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x6f18f7u); f_007b9df0();
    /* 006f18f7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f18fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f18fc: je 0x6f199e */ if (fZ) goto L_006f199e;
L_006f1902:; BB(0x006f1902);
    /* 006f1902: movsx ebx, byte ptr [ebp + 0xe7] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xe7u));
    /* 006f1909: movzx ebx, word ptr [ebp + ebx*2 + 0xc8] */ r_ebx = (u32)R16((u32)(r_ebp+r_ebx*2+0xc8u));
    /* 006f1911: mov word ptr [ebp + 0xc4], bx */ W16((u32)(r_ebp+0xc4u), (u16)r_ebx);
    /* 006f1918: movsx ebx, byte ptr [ebp + 0xe7] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xe7u));
    /* 006f191f: movzx ebx, byte ptr [ebx + ebp + 0xdc] */ r_ebx = (u32)R8((u32)(r_ebx+r_ebp+0xdcu));
    /* 006f1927: mov byte ptr [ebp + 0xc6], bl */ W8((u32)(r_ebp+0xc6u), (u8)r_ebx);
    /* 006f192d: movsx ebx, byte ptr [ebp + 0xe7] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xe7u));
    /* 006f1934: movsx ebx, byte ptr [ebx + ebp + 0xdc] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp+0xdcu));
    /* 006f193c: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 006f1942: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006f1945: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f1947: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f1949: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f194b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f194d: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f194f: mov ebx, dword ptr [edx + edi*4 + 0x1c] */ r_ebx = R32((u32)(r_edx+r_edi*4+0x1cu));
    /* 006f1953: mov dword ptr [ebp + 0xa8], ebx */ W32((u32)(r_ebp+0xa8u), r_ebx);
    /* 006f1959: mov ebx, dword ptr [edx + edi*4 + 0x20] */ r_ebx = R32((u32)(r_edx+r_edi*4+0x20u));
    /* 006f195d: mov dword ptr [ebp + 0xac], ebx */ W32((u32)(r_ebp+0xacu), r_ebx);
    /* 006f1963: mov ebx, dword ptr [edx + edi*4 + 0x24] */ r_ebx = R32((u32)(r_edx+r_edi*4+0x24u));
    /* 006f1967: mov dword ptr [ebp + 0xb0], ebx */ W32((u32)(r_ebp+0xb0u), r_ebx);
    /* 006f196d: movsx ebx, byte ptr [ebp + 0xe7] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xe7u));
    /* 006f1974: movsx ebx, byte ptr [ebx + ebp + 0xdc] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebx+r_ebp+0xdcu));
    /* 006f197c: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 006f1982: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 006f1985: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f1987: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f1989: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f198b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f198d: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006f198f: mov eax, dword ptr [eax + edi*4 + 0xc] */ r_eax = R32((u32)(r_eax+r_edi*4+0xcu));
    /* 006f1993: mov dword ptr [ebp + 0xbc], eax */ W32((u32)(r_ebp+0xbcu), r_eax);
    /* 006f1999: mov ebx, 1 */ r_ebx = 0x1u;
L_006f199e:; BB(0x006f199e);
    /* 006f199e: movsx eax, byte ptr [ebp + 0xe7] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xe7u));
    /* 006f19a5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f19a8: mov byte ptr [ebp + 0xe7], al */ W8((u32)(r_ebp+0xe7u), (u8)r_eax);
    /* 006f19ae: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f19b0: jne 0x6f19fc */ if (!fZ) goto L_006f19fc;
L_006f19b2:; BB(0x006f19b2);
    /* 006f19b2: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006f19b5: cmp al, byte ptr [ebp + 0xe6] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_ebp+0xe6u)); u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 006f19bb: jl 0x6f18d5 */ if ((fS!=fO)) goto L_006f18d5;
L_006f19c1:; BB(0x006f19c1);
    /* 006f19c1: jmp 0x6f1a34 */ goto L_006f1a34;
L_006f19c3:; BB(0x006f19c3);
    /* 006f19c3: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006f19c6:; BB(0x006f19c6);
    /* 006f19c6: mov edx, dword ptr [ebp + 0xc0] */ r_edx = R32((u32)(r_ebp+0xc0u));
    /* 006f19cc: mov byte ptr [ebp + 0xc6], 0 */ W8((u32)(r_ebp+0xc6u), 0x0u);
    /* 006f19d3: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006f19d6: mov dword ptr [ebp + 0xc0], edx */ W32((u32)(r_ebp+0xc0u), r_edx);
    /* 006f19dc: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006f19e1: mov word ptr [ebp + 0xc4], ax */ W16((u32)(r_ebp+0xc4u), (u16)r_eax);
    /* 006f19e8: add ebp, 0x90 */ {  u32 a = r_ebp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006f19ee:; BB(0x006f19ee);
    /* 006f19ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006f19f0: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x6f19f5u); f_0082df08();
    /* 006f19f5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006f19f7:; BB(0x006f19f7);
    /* 006f19f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f19f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f19f9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f19fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f19fb: ret  */ FN_RET(0x006f1888); r_esp += 4; return;
L_006f19fc:; BB(0x006f19fc);
    /* 006f19fc: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006f19ff: mov eax, dword ptr [ebp + 0xa8] */ r_eax = R32((u32)(r_ebp+0xa8u));
    /* 006f1a05: mov edi, dword ptr [ebp + 0xac] */ r_edi = R32((u32)(r_ebp+0xacu));
    /* 006f1a0b: mov dword ptr [ebp + 0x90], eax */ W32((u32)(r_ebp+0x90u), r_eax);
    /* 006f1a11: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 006f1a17: mov dword ptr [ebp + 0x94], edi */ W32((u32)(r_ebp+0x94u), r_edi);
    /* 006f1a1d: mov dword ptr [ebp + 0x98], eax */ W32((u32)(r_ebp+0x98u), r_eax);
    /* 006f1a23: add ebp, 0x90 */ {  u32 a = r_ebp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006f1a29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006f1a2b: mov edx, esi */ r_edx = r_esi;
    /* 006f1a2d: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x6f1a32u); f_0082f9c4();
    /* 006f1a32: jmp 0x6f19ee */ goto L_006f19ee;
L_006f1a34:; BB(0x006f1a34);
    /* 006f1a34: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006f1a37: jmp 0x6f19c6 */ goto L_006f19c6;
}

void f_006f1a3c(void) /* sub_6F1A3C */
{
    FN_ENTER(0x006f1a3c);
    /* 006f1a3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a3f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006f1a41: movzx eax, word ptr [ebp + 0xc4] */ r_eax = (u32)R16((u32)(r_ebp+0xc4u));
    /* 006f1a48: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006f1a4d: je 0x6f1abe */ if (fZ) goto L_006f1abe;
L_006f1a4f:; BB(0x006f1a4f);
    /* 006f1a4f: lea edx, [ebp + 0x9c] */ r_edx = (u32)(r_ebp+0x9cu);
    /* 006f1a55: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 006f1a58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a5a: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6f1a5fu); f_007a9180();
    /* 006f1a5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006f1a62: fld dword ptr [ebp + 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xb8u)));
    /* 006f1a68: fadd dword ptr [ebp + 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xbcu));
    /* 006f1a6e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006f1a70: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006f1a72: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006f1a74: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006f1a75: jbe 0x6f1abe */ if ((fC||fZ)) goto L_006f1abe;
L_006f1a77:; BB(0x006f1a77);
    /* 006f1a77: movzx edx, word ptr [ebp + 0xc4] */ r_edx = (u32)R16((u32)(r_ebp+0xc4u));
    /* 006f1a7e: movsx eax, byte ptr [ebp + 0xc6] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xc6u));
    /* 006f1a85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a86: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1a87: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x6f1a8cu); f_007b9df0();
    /* 006f1a8c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f1a8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1a91: je 0x6f1abe */ if (fZ) goto L_006f1abe;
L_006f1a93:; BB(0x006f1a93);
    /* 006f1a93: mov ecx, dword ptr [ebp + 0x108] */ r_ecx = R32((u32)(r_ebp+0x108u));
    /* 006f1a99: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006f1a9b: movsx edi, word ptr [ebp + 0x11c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x11cu));
    /* 006f1aa2: movsx esi, byte ptr [ebp + 0xc6] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xc6u));
    /* 006f1aa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1aaa: push dword ptr [ebp + 0x120] */ { u32 v = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1ab0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1ab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1ab2: push dword ptr [ebp + 0x10c] */ { u32 v = R32((u32)(r_ebp+0x10cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1ab8: call dword ptr [edx + 0xf8] */ { u32 t = R32((u32)(r_edx+0xf8u)); r_esp -= 4; W32(r_esp, 0x6f1abeu); call_ind(t); }
L_006f1abe:; BB(0x006f1abe);
    /* 006f1abe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1abf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006f1ac0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f1ac1: ret  */ FN_RET(0x006f1a3c); r_esp += 4; return;
}

void f_006f1ac4(void) /* sub_6F1AC4 */
{
    FN_ENTER(0x006f1ac4);
    /* 006f1ac4: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 006f1ac7: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006f1aca: fld dword ptr [ecx + 0xb4] */ FPUSH(R_F32((u32)(r_ecx+0xb4u)));
    /* 006f1ad0: fld dword ptr [ecx + 0x90] */ FPUSH(R_F32((u32)(r_ecx+0x90u)));
    /* 006f1ad6: fld dword ptr [ecx + 0x94] */ FPUSH(R_F32((u32)(r_ecx+0x94u)));
    /* 006f1adc: fld dword ptr [ecx + 0x98] */ FPUSH(R_F32((u32)(r_ecx+0x98u)));
    /* 006f1ae2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006f1ae4: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f1ae6: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 006f1ae9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f1aeb: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 006f1aed: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 006f1af0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006f1af2: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006f1af4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f1af6: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 006f1af9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f1afb: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 006f1afe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006f1b00: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 006f1b03: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 006f1b06: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 006f1b09: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 006f1b0c: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006f1b0f: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 006f1b12: ret  */ FN_RET(0x006f1ac4); r_esp += 4; return;
}

void f_006f1b14(void) /* sub_6F1B14 */
{
    FN_ENTER(0x006f1b14);
    /* 006f1b14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b15: mov edi, ecx */ r_edi = r_ecx;
    /* 006f1b17: lea edx, [edi + 0x44] */ r_edx = (u32)(r_edi+0x44u);
    /* 006f1b1a: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 006f1b1d: push 0x8100 */ { u32 v = 0x8100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b24: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x6f1b29u); f_0077fffc();
    /* 006f1b29: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f1b2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1b2e: je 0x6f1b3f */ if (fZ) goto L_006f1b3f;
L_006f1b30:; BB(0x006f1b30);
    /* 006f1b30: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006f1b34: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1b39: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006f1b3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f1b3e: ret  */ FN_RET(0x006f1b14); r_esp += 4; return;
L_006f1b3f:; BB(0x006f1b3f);
    /* 006f1b3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006f1b40: ret  */ FN_RET(0x006f1b14); r_esp += 4; return;
}

void f_006f1b44(void) /* sub_6F1B44 */
{
    FN_ENTER(0x006f1b44);
    /* 006f1b44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f1b47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f1b49: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6f1b4eu); f_008173b4();
    /* 006f1b4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1b50: je 0x6f1b67 */ if (fZ) goto L_006f1b67;
L_006f1b52:; BB(0x006f1b52);
    /* 006f1b52: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b57: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f1b59: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006f1b5b: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b60: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6f1b63u); call_ind(t); }
    /* 006f1b63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1b65: jne 0x6f1b69 */ if (!fZ) goto L_006f1b69;
L_006f1b67:; BB(0x006f1b67);
    /* 006f1b67: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f1b68: ret  */ FN_RET(0x006f1b44); r_esp += 4; return;
L_006f1b69:; BB(0x006f1b69);
    /* 006f1b69: push dword ptr [ebx + 0x118] */ { u32 v = R32((u32)(r_ebx+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1b6f: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x6f1b74u); f_005c57ac();
    /* 006f1b74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1b75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1b77: je 0x6f1b67 */ if (fZ) goto L_006f1b67;
L_006f1b79:; BB(0x006f1b79);
    /* 006f1b79: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 006f1b7f: mov eax, dword ptr [ebx + 0x13c] */ r_eax = R32((u32)(r_ebx+0x13cu));
    /* 006f1b85: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 006f1b8b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1b8d: je 0x6f1ba5 */ if (fZ) goto L_006f1ba5;
L_006f1b8f:; BB(0x006f1b8f);
    /* 006f1b8f: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006f1b92: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 006f1b98: lea eax, [ebx + 0x128] */ r_eax = (u32)(r_ebx+0x128u);
    /* 006f1b9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1b9f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6f1ba4u); f_0082d710();
    /* 006f1ba4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006f1ba5:; BB(0x006f1ba5);
    /* 006f1ba5: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 006f1ba8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1baa: je 0x6f1c10 */ if (fZ) goto L_006f1c10;
L_006f1bac:; BB(0x006f1bac);
    /* 006f1bac: mov eax, dword ptr [ebx + 0x110] */ r_eax = R32((u32)(r_ebx+0x110u));
    /* 006f1bb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1bb4: je 0x6f1c10 */ if (fZ) goto L_006f1c10;
L_006f1bb6:; BB(0x006f1bb6);
    /* 006f1bb6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1bb7: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x6f1bbcu); f_0081a9b8();
    /* 006f1bbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1bbd: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6f1bc2u); f_0082dbac();
    /* 006f1bc2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6f1bc7u); f_0082d7b0();
    /* 006f1bc7: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 006f1bca: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6f1bcfu); f_0082d838();
    /* 006f1bcf: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006f1bd2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1bd4: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6f1bd9u); f_0082d8bc();
    /* 006f1bd9: mov edx, dword ptr [ebx + 0x64] */ r_edx = R32((u32)(r_ebx+0x64u));
    /* 006f1bdc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1bde: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x6f1be3u); f_00830c04();
    /* 006f1be3: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 006f1be6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1be8: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6f1bedu); f_0082e9e4();
    /* 006f1bed: lea ecx, [ebx + 0x68] */ r_ecx = (u32)(r_ebx+0x68u);
    /* 006f1bf0: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x6f1bf5u); f_00831290();
    /* 006f1bf5: mov ecx, dword ptr [ebx + 0x110] */ r_ecx = R32((u32)(r_ebx+0x110u));
    /* 006f1bfb: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6f1c00u); f_00831758();
    /* 006f1c00: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c05: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6f1c0au); f_0082d710();
    /* 006f1c0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1c0b: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6f1c10u); f_0082dab0();
L_006f1c10:; BB(0x006f1c10);
    /* 006f1c10: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6f1c15u); f_0082da80();
    /* 006f1c15: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006f1c1a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006f1c1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f1c20: ret  */ FN_RET(0x006f1b44); r_esp += 4; return;
}

void f_006f1c24(void) /* sub_6F1C24 */
{
    FN_ENTER(0x006f1c24);
    /* 006f1c24: mov dword ptr [0xa968c0], 0x3f800000 */ W32((u32)(0xa968c0u), 0x3f800000u);
    /* 006f1c2e: mov dword ptr [0xa968c4], 0x41000000 */ W32((u32)(0xa968c4u), 0x41000000u);
    /* 006f1c38: mov dword ptr [0xa968c8], 0x3fc00000 */ W32((u32)(0xa968c8u), 0x3fc00000u);
    /* 006f1c42: ret  */ FN_RET(0x006f1c24); r_esp += 4; return;
}

void f_006f1c44(void) /* sub_6F1C44 */
{
    FN_ENTER(0x006f1c44);
    /* 006f1c44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c45: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f1c47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f1c49: call 0x6f1c68 */ r_esp -= 4; W32(r_esp, 0x6f1c4eu); f_006f1c68();
    /* 006f1c4e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f1c52: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1c54: jne 0x6f1c5a */ if (!fZ) goto L_006f1c5a;
L_006f1c56:; BB(0x006f1c56);
    /* 006f1c56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f1c57: ret 4 */ FN_RET(0x006f1c44); r_esp += 8; return;
L_006f1c5a:; BB(0x006f1c5a);
    /* 006f1c5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c5b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f1c60u); f_005c2f74();
    /* 006f1c60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1c61: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f1c62: ret 4 */ FN_RET(0x006f1c44); r_esp += 8; return;
}

void f_006f1c68(void) /* sub_6F1C68 */
{
    FN_ENTER(0x006f1c68);
    /* 006f1c68: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c69: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1c6b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c6d: push 0x8efbbc */ { u32 v = 0x8efbbcu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c72: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1c78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1c79: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1c80: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f1c83: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f1c86: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f1c89: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f1c8c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f1c8f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f1c92: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f1c99: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1c9c: push dword ptr [eax + 0x30] */ { u32 v = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1c9f: mov dword ptr [eax], 0xb3e698 */ W32((u32)(r_eax), 0xb3e698u);
    /* 006f1ca5: call 0x8148d4 */ r_esp -= 4; W32(r_esp, 0x6f1caau); f_008148d4();
    /* 006f1caa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1cab: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f1cb2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1cb5: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6f1cbau); f_008171e8();
    /* 006f1cba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f1cbd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1cc4: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1cc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1cc7: ret  */ FN_RET(0x006f1c68); r_esp += 4; return;
}

void f_006f1cc8(void) /* sub_6F1CC8 */
{
    FN_ENTER(0x006f1cc8);
    /* 006f1cc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1cc9: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1ccb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1ccd: push 0x8efbd8 */ { u32 v = 0x8efbd8u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1cd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1cd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1ce0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f1ce3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f1ce6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006f1ce9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006f1cec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006f1cef: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006f1cf2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1cf5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006f1cf8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006f1cfb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6f1d00u); f_008193cc();
    /* 006f1d00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f1d07: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f1d0a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f1d0d: mov dword ptr [edi], 0xb3e698 */ W32((u32)(r_edi), 0xb3e698u);
    /* 006f1d13: mov dword ptr [edi + 0x1c], ecx */ W32((u32)(r_edi+0x1cu), r_ecx);
    /* 006f1d16: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 006f1d1c: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 006f1d1f: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 006f1d25: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006f1d28: mov ebx, dword ptr [ecx + 0x308] */ r_ebx = R32((u32)(r_ecx+0x308u));
    /* 006f1d2e: mov dword ptr [edi + 0x28], ebx */ W32((u32)(r_edi+0x28u), r_ebx);
    /* 006f1d31: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006f1d33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1d34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1d35: mov dword ptr [edi + 0x2c], esi */ W32((u32)(r_edi+0x2cu), r_esi);
    /* 006f1d38: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006f1d3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1d3c: push 0xa5 */ { u32 v = 0xa5u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1d41: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f1d46u); f_00814298();
    /* 006f1d46: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f1d49: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006f1d4c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1d4f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f1d52: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f1d55: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006f1d58: mov eax, edx */ r_eax = r_edx;
    /* 006f1d5a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f1d5d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1d64: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1d66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1d67: ret 8 */ FN_RET(0x006f1cc8); r_esp += 12; return;
}

void f_006f1d6c(void) /* sub_6F1D6C */
{
    FN_ENTER(0x006f1d6c);
    /* 006f1d6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1d6d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f1d70: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006f1d72: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 006f1d75: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1d78: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006f1d7d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006f1d7f: mov dword ptr [ebp + 0x2c], ecx */ W32((u32)(r_ebp+0x2cu), r_ecx);
    /* 006f1d82: mov eax, ecx */ r_eax = r_ecx;
    /* 006f1d84: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006f1d87: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006f1d8a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006f1d8c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006f1d8f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f1d91: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f1d93: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f1d95: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1d97: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1d99: jne 0x6f1dc9 */ if (!fZ) goto L_006f1dc9;
L_006f1d9b:; BB(0x006f1d9b);
    /* 006f1d9b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006f1d9e: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006f1da2: lea edx, [ebp + 0x20] */ r_edx = (u32)(r_ebp+0x20u);
    /* 006f1da5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006f1da7: mov esi, eax */ r_esi = r_eax;
    /* 006f1da9: mov edi, edx */ r_edi = r_edx;
L_006f1dab:; BB(0x006f1dab);
    /* 006f1dab: push dword ptr [esi + 0x9cfa30] */ { u32 v = R32((u32)(r_esi+0x9cfa30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1db1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006f1db2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6f1db7u); f_0050b510();
    /* 006f1db7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f1dba: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f1dbd: cmp esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f1dc0: jl 0x6f1dab */ if ((fS!=fO)) goto L_006f1dab;
L_006f1dc2:; BB(0x006f1dc2);
    /* 006f1dc2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006f1dc5: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
L_006f1dc9:; BB(0x006f1dc9);
    /* 006f1dc9: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 006f1dcc: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006f1dd2: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1dd8: je 0x6f1de1 */ if (fZ) goto L_006f1de1;
L_006f1dda:; BB(0x006f1dda);
    /* 006f1dda: mov eax, 1 */ r_eax = 0x1u;
    /* 006f1ddf: jmp 0x6f1de3 */ goto L_006f1de3;
L_006f1de1:; BB(0x006f1de1);
    /* 006f1de1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006f1de3:; BB(0x006f1de3);
    /* 006f1de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1de5: je 0x6f1e08 */ if (fZ) goto L_006f1e08;
L_006f1de7:; BB(0x006f1de7);
    /* 006f1de7: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
    /* 006f1dea: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f1def: jl 0x6f1e03 */ if ((fS!=fO)) goto L_006f1e03;
L_006f1df1:; BB(0x006f1df1);
    /* 006f1df1: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006f1df5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f1dfa: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006f1dfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f1e01: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1e02: ret  */ FN_RET(0x006f1d6c); r_esp += 4; return;
L_006f1e03:; BB(0x006f1e03);
    /* 006f1e03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f1e06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1e07: ret  */ FN_RET(0x006f1d6c); r_esp += 4; return;
L_006f1e08:; BB(0x006f1e08);
    /* 006f1e08: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006f1e0c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006f1e11: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006f1e15: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006f1e18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1e19: ret  */ FN_RET(0x006f1d6c); r_esp += 4; return;
}

void f_006f1e1c(void) /* sub_6F1E1C */
{
    FN_ENTER(0x006f1e1c);
    /* 006f1e1c: mov dword ptr [0xa968d4], 0x3f800000 */ W32((u32)(0xa968d4u), 0x3f800000u);
    /* 006f1e26: mov dword ptr [0xa968d8], 0x41000000 */ W32((u32)(0xa968d8u), 0x41000000u);
    /* 006f1e30: mov dword ptr [0xa968dc], 0x3fc00000 */ W32((u32)(0xa968dcu), 0x3fc00000u);
    /* 006f1e3a: ret  */ FN_RET(0x006f1e1c); r_esp += 4; return;
}

void f_006f1e3c(void) /* sub_6F1E3C */
{
    FN_ENTER(0x006f1e3c);
    /* 006f1e3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1e3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006f1e3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006f1e41: call 0x6f1e60 */ r_esp -= 4; W32(r_esp, 0x6f1e46u); f_006f1e60();
    /* 006f1e46: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006f1e4a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1e4c: jne 0x6f1e52 */ if (!fZ) goto L_006f1e52;
L_006f1e4e:; BB(0x006f1e4e);
    /* 006f1e4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f1e4f: ret 4 */ FN_RET(0x006f1e3c); r_esp += 8; return;
L_006f1e52:; BB(0x006f1e52);
    /* 006f1e52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006f1e53: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6f1e58u); f_005c2f74();
    /* 006f1e58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1e59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006f1e5a: ret 4 */ FN_RET(0x006f1e3c); r_esp += 8; return;
}

void f_006f1e60(void) /* sub_6F1E60 */
{
    FN_ENTER(0x006f1e60);
    /* 006f1e60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1e61: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1e63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1e65: push 0x8efbf4 */ { u32 v = 0x8efbf4u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1e6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1e70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1e71: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1e78: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f1e7b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f1e7e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f1e81: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f1e84: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f1e87: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f1e8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1e8d: mov dword ptr [ecx], 0xb3e770 */ W32((u32)(r_ecx), 0xb3e770u);
    /* 006f1e93: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006f1e9a: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6f1e9fu); f_006de56c();
    /* 006f1e9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f1ea2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1ea9: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1eab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1eac: ret  */ FN_RET(0x006f1e60); r_esp += 4; return;
}

void f_006f1eb0(void) /* sub_6F1EB0 */
{
    FN_ENTER(0x006f1eb0);
    /* 006f1eb0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1eb1: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1eb3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1eb5: push 0x8efc1c */ { u32 v = 0x8efc1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1eba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1ec0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1ec1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1ec8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f1ecb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f1ece: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f1ed1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f1ed4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f1ed7: push 0x14c */ { u32 v = 0x14cu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1edc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006f1ee3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6f1ee8u); f_005caba4();
    /* 006f1ee8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006f1ee9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006f1eec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f1eee: je 0x6f1f19 */ if (fZ) goto L_006f1f19;
L_006f1ef0:; BB(0x006f1ef0);
    /* 006f1ef0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006f1ef7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f1efe: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f01: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f04: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f07: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1f0a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f0d: call 0x6f1f28 */ r_esp -= 4; W32(r_esp, 0x6f1f12u); f_006f1f28();
    /* 006f1f12: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006f1f19:; BB(0x006f1f19);
    /* 006f1f19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f1f1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f1f23: mov esp, ebp */ r_esp = r_ebp;
    /* 006f1f25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f1f26: ret  */ FN_RET(0x006f1eb0); r_esp += 4; return;
}

void f_006f1f28(void) /* sub_6F1F28 */
{
    FN_ENTER(0x006f1f28);
    /* 006f1f28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006f1f29: mov ebp, esp */ r_ebp = r_esp;
    /* 006f1f2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006f1f2d: push 0x8efc38 */ { u32 v = 0x8efc38u; r_esp -= 4; W32(r_esp, v); }
    /* 006f1f32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006f1f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f1f39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006f1f40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006f1f43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006f1f46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006f1f49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006f1f4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006f1f4f: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f52: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f55: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f58: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006f1f5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006f1f5e: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6f1f63u); f_006de5f0();
    /* 006f1f63: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006f1f6a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1f6d: mov dword ptr [eax], 0xb3e770 */ W32((u32)(r_eax), 0xb3e770u);
    /* 006f1f73: lea esi, [eax + 0xf4] */ r_esi = (u32)(r_eax+0xf4u);
    /* 006f1f79: mov edi, 0xb */ r_edi = 0xbu;
    /* 006f1f7e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006f1f80:; BB(0x006f1f80);
    /* 006f1f80: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006f1f85: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 006f1f88: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006f1f8a: mov word ptr [esi + 2], cx */ W16((u32)(r_esi+0x2u), (u16)r_ecx);
    /* 006f1f8e: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006f1f91: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006f1f94: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006f1f97: jne 0x6f1f80 */ if (!fZ) goto L_006f1f80;
L_006f1f99:; BB(0x006f1f99);
    /* 006f1f99: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f1f9b: mov dword ptr [eax + 0xf0], edx */ W32((u32)(r_eax+0xf0u), r_edx);
    /* 006f1fa1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1fa4: mov eax, dword ptr [0x9cfa3c] */ r_eax = R32((u32)(0x9cfa3cu));
    /* 006f1fa9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006f1fac: mov dword ptr [ecx + 0xec], edx */ W32((u32)(r_ecx+0xecu), r_edx);
    /* 006f1fb2: call 0x6f20cc */ r_esp -= 4; W32(r_esp, 0x6f1fb7u); f_006f20cc();
    /* 006f1fb7: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1fba: mov eax, dword ptr [ebx + 0x7c] */ r_eax = R32((u32)(r_ebx+0x7cu));
    /* 006f1fbd: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 006f1fc3: mov ecx, dword ptr [ebx + 0x84] */ r_ecx = R32((u32)(r_ebx+0x84u));
    /* 006f1fc9: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 006f1fcc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f1fcf: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 006f1fd2: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 006f1fd5: mov edx, dword ptr [eax + 0xe8] */ r_edx = R32((u32)(r_eax+0xe8u));
    /* 006f1fdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006f1fdd: je 0x6f1ff1 */ if (fZ) goto L_006f1ff1;
L_006f1fdf:; BB(0x006f1fdf);
    /* 006f1fdf: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 006f1fe5: mov eax, dword ptr [eax + 0x90] */ r_eax = R32((u32)(r_eax+0x90u));
    /* 006f1feb: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006f1fee: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006f1ff1:; BB(0x006f1ff1);
    /* 006f1ff1: movsx edx, word ptr [eax + 0x7a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x7au));
    /* 006f1ff5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f1ff7: jl 0x6f20a0 */ if ((fS!=fO)) goto L_006f20a0;
L_006f1ffd:; BB(0x006f1ffd);
    /* 006f1ffd: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2000: jle 0x6f206f */ if ((fZ||fS!=fO)) goto L_006f206f;
L_006f2002:; BB(0x006f2002);
    /* 006f2002: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2005: jl 0x6f20a0 */ if ((fS!=fO)) goto L_006f20a0;
L_006f200b:; BB(0x006f200b);
    /* 006f200b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f200e: jle 0x6f2055 */ if ((fZ||fS!=fO)) goto L_006f2055;
L_006f2010:; BB(0x006f2010);
    /* 006f2010: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f2013: jl 0x6f20a0 */ if ((fS!=fO)) goto L_006f20a0;
L_006f2019:; BB(0x006f2019);
    /* 006f2019: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006f201c: jg 0x6f20a0 */ if ((!fZ&&fS==fO)) goto L_006f20a0;
L_006f2022:; BB(0x006f2022);
    /* 006f2022: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2025: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2027: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2028: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2029: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f202a: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f202f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2034u); f_00814298();
    /* 006f2034: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2037: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2039: jl 0x6f2050 */ if ((fS!=fO)) goto L_006f2050;
L_006f203b:; BB(0x006f203b);
    /* 006f203b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f203d: push 0xffffff00 */ { u32 v = 0xffffff00u; r_esp -= 4; W32(r_esp, v); }
    /* 006f2042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2043: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f2048u); f_00814664();
    /* 006f2048: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f204b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f204e: jmp 0x6f20a0 */ goto L_006f20a0;
L_006f2050:; BB(0x006f2050);
    /* 006f2050: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f2053: jmp 0x6f20a0 */ goto L_006f20a0;
L_006f2055:; BB(0x006f2055);
    /* 006f2055: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2058: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f205a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f205b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f205c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f205d: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f2062: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2067u); f_00814298();
    /* 006f2067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f206a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f206d: jmp 0x6f20a0 */ goto L_006f20a0;
L_006f206f:; BB(0x006f206f);
    /* 006f206f: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006f2072: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006f2074: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2075: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006f2076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2077: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 006f207c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6f2081u); f_00814298();
    /* 006f2081: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006f2086: jl 0x6f209d */ if ((fS!=fO)) goto L_006f209d;
L_006f2088:; BB(0x006f2088);
    /* 006f2088: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006f208a: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006f208f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006f2090: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6f2095u); f_00814664();
    /* 006f2095: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006f2098: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006f209b: jmp 0x6f20a0 */ goto L_006f20a0;
L_006f209d:; BB(0x006f209d);
    /* 006f209d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006f20a0:; BB(0x006f20a0);
    /* 006f20a0: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006f20a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006f20a5: je 0x6f20b2 */ if (fZ) goto L_006f20b2;
L_006f20a7:; BB(0x006f20a7);
    /* 006f20a7: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 006f20ab: mov word ptr [eax + 0xb4], dx */ W16((u32)(r_eax+0xb4u), (u16)r_edx);
L_006f20b2:; BB(0x006f20b2);
    /* 006f20b2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006f20b5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006f20b8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006f20bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006f20be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006f20c5: mov esp, ebp */ r_esp = r_ebp;
    /* 006f20c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006f20c8: ret 0x10 */ FN_RET(0x006f1f28); r_esp += 20; return;
}

