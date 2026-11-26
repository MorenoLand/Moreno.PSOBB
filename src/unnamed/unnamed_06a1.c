#include "protos.h"

void f_006a1000(void) /* sub_6A1000 */
{
    FN_ENTER(0x006a1000);
    /* 006a1000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1001: mov esi, ecx */ r_esi = r_ecx;
    /* 006a1003: movsx eax, word ptr [esi + 0x330] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x330u));
    /* 006a100a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a100d: je 0x6a1072 */ if (fZ) goto L_006a1072;
L_006a100f:; BB(0x006a100f);
    /* 006a100f: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1015: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1017: je 0x6a1070 */ if (fZ) goto L_006a1070;
L_006a1019:; BB(0x006a1019);
    /* 006a1019: mov eax, dword ptr [esi + 0x8ac] */ r_eax = R32((u32)(r_esi+0x8acu));
    /* 006a101f: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a1025: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1027: je 0x6a1070 */ if (fZ) goto L_006a1070;
L_006a1029:; BB(0x006a1029);
    /* 006a1029: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x6a102eu); f_006a3250();
    /* 006a102e: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a1031: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1033: jne 0x6a1060 */ if (!fZ) goto L_006a1060;
L_006a1035:; BB(0x006a1035);
    /* 006a1035: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 006a103b: mov eax, 4 */ r_eax = 0x4u;
    /* 006a1040: mov word ptr [esi + 0x330], ax */ W16((u32)(r_esi+0x330u), (u16)r_eax);
    /* 006a1047: and edx, 0xffffffbf */ {  u32 a = r_edx; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a104a: mov dword ptr [esi + 0xb0], edx */ W32((u32)(r_esi+0xb0u), r_edx);
    /* 006a1050: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1052: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1057u); f_0069d1bc();
    /* 006a1057: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 006a105e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a105f: ret  */ FN_RET(0x006a1000); r_esp += 4; return;
L_006a1060:; BB(0x006a1060);
    /* 006a1060: jle 0x6a1070 */ if ((fZ||fS!=fO)) goto L_006a1070;
L_006a1062:; BB(0x006a1062);
    /* 006a1062: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a1065: jg 0x6a1070 */ if ((!fZ&&fS==fO)) goto L_006a1070;
L_006a1067:; BB(0x006a1067);
    /* 006a1067: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1069: mov ecx, esi */ r_ecx = r_esi;
    /* 006a106b: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a1070u); f_006a0994();
L_006a1070:; BB(0x006a1070);
    /* 006a1070: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1071: ret  */ FN_RET(0x006a1000); r_esp += 4; return;
L_006a1072:; BB(0x006a1072);
    /* 006a1072: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1074: call 0x7aa484 */ r_esp -= 4; W32(r_esp, 0x6a1079u); f_007aa484();
    /* 006a1079: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a107b: je 0x6a1070 */ if (fZ) goto L_006a1070;
L_006a107d:; BB(0x006a107d);
    /* 006a107d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a107f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1081: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a1086u); f_006a1ac0();
    /* 006a1086: jmp 0x6a1070 */ goto L_006a1070;
}

void f_006a1088(void) /* sub_6A1088 */
{
    FN_ENTER(0x006a1088);
    /* 006a1088: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1089: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a108a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a108b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a108c: mov edi, ecx */ r_edi = r_ecx;
    /* 006a108e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x6a1093u); f_00791b48();
    /* 006a1093: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1095: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 006a109a: mov ecx, edi */ r_ecx = r_edi;
    /* 006a109c: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a10a1u); f_0068aa04();
    /* 006a10a1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a10a4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a10a7: je 0x6a11d8 */ if (fZ) goto L_006a11d8;
L_006a10ad:; BB(0x006a10ad);
    /* 006a10ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a10af: mov ecx, edi */ r_ecx = r_edi;
    /* 006a10b1: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a10b6u); f_0068aa04();
    /* 006a10b6: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a10b9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a10bc: je 0x6a1199 */ if (fZ) goto L_006a1199;
L_006a10c2:; BB(0x006a10c2);
    /* 006a10c2: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006a10c4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a10c6: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a10cbu); f_0068aa04();
    /* 006a10cb: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a10ce: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a10d1: je 0x6a116d */ if (fZ) goto L_006a116d;
L_006a10d7:; BB(0x006a10d7);
    /* 006a10d7: mov eax, 0x23 */ r_eax = 0x23u;
    /* 006a10dc: mov ebx, 4 */ r_ebx = 0x4u;
    /* 006a10e1: mov ebp, eax */ r_ebp = r_eax;
L_006a10e3:; BB(0x006a10e3);
    /* 006a10e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a10e4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a10e6: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x6a10ebu); f_0068aa04();
    /* 006a10eb: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006a10ee: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a10f1: je 0x6a1135 */ if (fZ) goto L_006a1135;
L_006a10f3:; BB(0x006a10f3);
    /* 006a10f3: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006a10f6: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a10f9: cmp ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006a10fc: jle 0x6a10e3 */ if ((fZ||fS!=fO)) goto L_006a10e3;
L_006a10fe:; BB(0x006a10fe);
    /* 006a10fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a10ff: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1101: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x6a1106u); f_0068aa6c();
    /* 006a1106: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006a1109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a110a: mov ecx, edi */ r_ecx = r_edi;
    /* 006a110c: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x6a1111u); f_006994d4();
    /* 006a1111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1113: jne 0x6a111a */ if (!fZ) goto L_006a111a;
L_006a1115:; BB(0x006a1115);
    /* 006a1115: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
L_006a111a:; BB(0x006a111a);
    /* 006a111a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a111d: je 0x6a1130 */ if (fZ) goto L_006a1130;
L_006a111f:; BB(0x006a111f);
    /* 006a111f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1121: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1122: lea eax, [edi + 0x8a4] */ r_eax = (u32)(r_edi+0x8a4u);
    /* 006a1128: mov ecx, eax */ r_ecx = r_eax;
    /* 006a112a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a112b: call 0x6a31b0 */ r_esp -= 4; W32(r_esp, 0x6a1130u); f_006a31b0();
L_006a1130:; BB(0x006a1130);
    /* 006a1130: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a1131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1132: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1133: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a1134: ret  */ FN_RET(0x006a1088); r_esp += 4; return;
L_006a1135:; BB(0x006a1135);
    /* 006a1135: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x6a113au); f_007c00c4();
    /* 006a113a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a113c: jne 0x6a10f3 */ if (!fZ) goto L_006a10f3;
L_006a113e:; BB(0x006a113e);
    /* 006a113e: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x6a1143u); f_007c00d0();
    /* 006a1143: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1145: jne 0x6a10f3 */ if (!fZ) goto L_006a10f3;
L_006a1147:; BB(0x006a1147);
    /* 006a1147: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x6a114cu); f_007c00dc();
    /* 006a114c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a114e: jne 0x6a10f3 */ if (!fZ) goto L_006a10f3;
L_006a1150:; BB(0x006a1150);
    /* 006a1150: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x6a1155u); f_00791b48();
    /* 006a1155: mov edx, ebp */ r_edx = r_ebp;
    /* 006a1157: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006a115d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a115e: mov ecx, eax */ r_ecx = r_eax;
    /* 006a1160: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x6a1165u); f_0078fd68();
    /* 006a1165: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1167: je 0x6a10f3 */ if (fZ) goto L_006a10f3;
L_006a1169:; BB(0x006a1169);
    /* 006a1169: mov esi, ebx */ r_esi = r_ebx;
    /* 006a116b: jmp 0x6a10f3 */ goto L_006a10f3;
L_006a116d:; BB(0x006a116d);
    /* 006a116d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a1171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1172: lea ebx, [edi + 0x628] */ r_ebx = (u32)(r_edi+0x628u);
    /* 006a1178: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a117a: call 0x6a7cc4 */ r_esp -= 4; W32(r_esp, 0x6a117fu); f_006a7cc4();
    /* 006a117f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1180: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a1182: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a1187u); f_006a7c24();
    /* 006a1187: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1189: je 0x6a10d7 */ if (fZ) goto L_006a10d7;
L_006a118f:; BB(0x006a118f);
    /* 006a118f: mov esi, 3 */ r_esi = 0x3u;
    /* 006a1194: jmp 0x6a10d7 */ goto L_006a10d7;
L_006a1199:; BB(0x006a1199);
    /* 006a1199: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a119d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a119e: lea ebx, [edi + 0x628] */ r_ebx = (u32)(r_edi+0x628u);
    /* 006a11a4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a11a6: call 0x6a7cec */ r_esp -= 4; W32(r_esp, 0x6a11abu); f_006a7cec();
    /* 006a11ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a11ac: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a11ae: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a11b3u); f_006a7c24();
    /* 006a11b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a11b5: je 0x6a10c2 */ if (fZ) goto L_006a10c2;
L_006a11bb:; BB(0x006a11bb);
    /* 006a11bb: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a11bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a11c0: call 0x6a9f60 */ r_esp -= 4; W32(r_esp, 0x6a11c5u); f_006a9f60();
    /* 006a11c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a11c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a11c8: jne 0x6a10c2 */ if (!fZ) goto L_006a10c2;
L_006a11ce:; BB(0x006a11ce);
    /* 006a11ce: mov esi, 2 */ r_esi = 0x2u;
    /* 006a11d3: jmp 0x6a10c2 */ goto L_006a10c2;
L_006a11d8:; BB(0x006a11d8);
    /* 006a11d8: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a11de: lea ecx, [edi + 0x628] */ r_ecx = (u32)(r_edi+0x628u);
    /* 006a11e4: call 0x6a7c24 */ r_esp -= 4; W32(r_esp, 0x6a11e9u); f_006a7c24();
    /* 006a11e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a11eb: je 0x6a10ad */ if (fZ) goto L_006a10ad;
L_006a11f1:; BB(0x006a11f1);
    /* 006a11f1: mov esi, 1 */ r_esi = 0x1u;
    /* 006a11f6: jmp 0x6a10ad */ goto L_006a10ad;
}

void f_006a11fc(void) /* sub_6A11FC */
{
    FN_ENTER(0x006a11fc);
    /* 006a11fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a11fd: mov esi, ecx */ r_esi = r_ecx;
    /* 006a11ff: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 006a1206: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a1209: mov dword ptr [esi + 0x348], 5 */ W32((u32)(r_esi+0x348u), 0x5u);
    /* 006a1213: ja 0x6a133e */ if ((!fC&&!fZ)) goto L_006a133e;
L_006a1219:; BB(0x006a1219);
    /* 006a1219: mov eax, dword ptr [eax*4 + 0x93d6e0] */ r_eax = R32((u32)(r_eax*4+0x93d6e0u));
    /* 006a1220: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a11fc); r_esp += 4; return;
}

void f_006a1222(void)
{
    FN_ENTER(0x006a1222);
    /* 006a1222: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1224: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1226: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a122bu); f_0069bdf0();
    /* 006a122b: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1222); r_esp += 4; return;
}

void f_006a1230(void)
{
    FN_ENTER(0x006a1230);
    /* 006a1230: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1232: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1234: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a1239u); f_0069c6c0();
    /* 006a1239: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1230); r_esp += 4; return;
}

void f_006a123e(void)
{
    FN_ENTER(0x006a123e);
    /* 006a123e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1240: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1242: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a1247u); f_0069c988();
    /* 006a1247: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a123e); r_esp += 4; return;
}

void f_006a124c(void)
{
    FN_ENTER(0x006a124c);
    /* 006a124c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a124e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1250: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a1255u); f_0069cd20();
    /* 006a1255: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a124c); r_esp += 4; return;
}

void f_006a125a(void)
{
    FN_ENTER(0x006a125a);
    /* 006a125a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a125c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a125e: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a1263u); f_0069d1e4();
    /* 006a1263: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a125a); r_esp += 4; return;
}

void f_006a1268(void)
{
    FN_ENTER(0x006a1268);
    /* 006a1268: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a126a: mov ecx, esi */ r_ecx = r_esi;
    /* 006a126c: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a1271u); f_0069d43c();
    /* 006a1271: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1268); r_esp += 4; return;
}

void f_006a1276(void)
{
    FN_ENTER(0x006a1276);
    /* 006a1276: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1278: mov ecx, esi */ r_ecx = r_esi;
    /* 006a127a: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a127fu); f_0069d8f4();
    /* 006a127f: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1276); r_esp += 4; return;
}

void f_006a1284(void)
{
    FN_ENTER(0x006a1284);
    /* 006a1284: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1286: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1288: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a128du); f_0069dd60();
    /* 006a128d: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1284); r_esp += 4; return;
}

void f_006a1292(void)
{
    FN_ENTER(0x006a1292);
    /* 006a1292: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1294: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1296: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a129bu); f_0069e15c();
    /* 006a129b: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1292); r_esp += 4; return;
}

void f_006a12a0(void)
{
    FN_ENTER(0x006a12a0);
    /* 006a12a0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12a2: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12a4: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a12a9u); f_0069e718();
    /* 006a12a9: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12a0); r_esp += 4; return;
}

void f_006a12ae(void)
{
    FN_ENTER(0x006a12ae);
    /* 006a12ae: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12b0: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12b2: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a12b7u); f_0069ebc8();
    /* 006a12b7: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12ae); r_esp += 4; return;
}

void f_006a12bc(void)
{
    FN_ENTER(0x006a12bc);
    /* 006a12bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12be: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12c0: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a12c5u); f_0069ef04();
    /* 006a12c5: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12bc); r_esp += 4; return;
}

void f_006a12c7(void)
{
    FN_ENTER(0x006a12c7);
    /* 006a12c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12c9: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12cb: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a12d0u); f_0069f148();
    /* 006a12d0: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12c7); r_esp += 4; return;
}

void f_006a12d2(void)
{
    FN_ENTER(0x006a12d2);
    /* 006a12d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12d4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12d6: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a12dbu); f_0069f384();
    /* 006a12db: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12d2); r_esp += 4; return;
}

void f_006a12dd(void)
{
    FN_ENTER(0x006a12dd);
    /* 006a12dd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12df: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12e1: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a12e6u); f_0069f648();
    /* 006a12e6: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12dd); r_esp += 4; return;
}

void f_006a12e8(void)
{
    FN_ENTER(0x006a12e8);
    /* 006a12e8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12ea: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12ec: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a12f1u); f_0069fe2c();
    /* 006a12f1: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12e8); r_esp += 4; return;
}

void f_006a12f3(void)
{
    FN_ENTER(0x006a12f3);
    /* 006a12f3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a12f5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a12f7: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a12fcu); f_006a0624();
    /* 006a12fc: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12f3); r_esp += 4; return;
}

void f_006a12fe(void)
{
    FN_ENTER(0x006a12fe);
    /* 006a12fe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1300: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1302: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a1307u); f_006a0994();
    /* 006a1307: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a12fe); r_esp += 4; return;
}

void f_006a1309(void)
{
    FN_ENTER(0x006a1309);
    /* 006a1309: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a130b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a130d: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a1312u); f_006a0eb8();
    /* 006a1312: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1309); r_esp += 4; return;
}

void f_006a1314(void)
{
    FN_ENTER(0x006a1314);
    /* 006a1314: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1316: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1318: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a131du); f_006a139c();
    /* 006a131d: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1314); r_esp += 4; return;
}

void f_006a131f(void)
{
    FN_ENTER(0x006a131f);
    /* 006a131f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1321: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1323: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a1328u); f_006a1a60();
    /* 006a1328: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a131f); r_esp += 4; return;
}

void f_006a132a(void)
{
    FN_ENTER(0x006a132a);
    /* 006a132a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a132c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a132e: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a1333u); f_0069b93c();
    /* 006a1333: jmp 0x6a133e */ goto L_006a133e;
L_006a133e:; BB(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a132a); r_esp += 4; return;
}

void f_006a1335(void)
{
    FN_ENTER(0x006a1335);
    /* 006a1335: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1337: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1339: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a133eu); f_006a1ac0();
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a1335); r_esp += 4; return;
}

void f_006a133e(void)
{
    FN_ENTER(0x006a133e);
    /* 006a133e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1340: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a1345u); f_0077774c();
    /* 006a1345: lea ecx, [esi + 0x8a4] */ r_ecx = (u32)(r_esi+0x8a4u);
    /* 006a134b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a134d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a134f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1350: call 0x6a2f54 */ r_esp -= 4; W32(r_esp, 0x6a1355u); f_006a2f54();
    /* 006a1355: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1357: call 0x6a2d44 */ r_esp -= 4; W32(r_esp, 0x6a135cu); f_006a2d44();
    /* 006a135c: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a1362: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a1364: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x6a1367u); call_ind(t); }
    /* 006a1367: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006a136a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a136b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a136d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a136f: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1374u); f_00694390();
    /* 006a1374: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a137b: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1381: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1383: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1387: fmul dword ptr [esi + 0x8a8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8a8u));
    /* 006a138d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a138e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1391: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1393: call 0x690300 */ r_esp -= 4; W32(r_esp, 0x6a1398u); f_00690300();
    /* 006a1398: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1399: ret  */ FN_RET(0x006a133e); r_esp += 4; return;
}

void f_006a139c(void) /* sub_6A139C */
{
    FN_ENTER(0x006a139c);
    /* 006a139c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a139d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a139f: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 006a13a4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a13a7: ja 0x6a1442 */ if ((!fC&&!fZ)) goto L_006a1442;
L_006a13ad:; BB(0x006a13ad);
    /* 006a13ad: mov eax, dword ptr [eax*4 + 0x93d744] */ r_eax = R32((u32)(r_eax*4+0x93d744u));
    /* 006a13b4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a139c); r_esp += 8; return;
}

void f_006a13b6(void)
{
    FN_ENTER(0x006a13b6);
    /* 006a13b6: mov ecx, esi */ r_ecx = r_esi;
    /* 006a13b8: call 0x6a1448 */ r_esp -= 4; W32(r_esp, 0x6a13bdu); f_006a1448();
    /* 006a13bd: jmp 0x6a1442 */ goto L_006a1442;
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a13b6); r_esp += 8; return;
}

void f_006a13c2(void)
{
    FN_ENTER(0x006a13c2);
    /* 006a13c2: mov ecx, esi */ r_ecx = r_esi;
    /* 006a13c4: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x6a13c9u); f_0069b720();
    /* 006a13c9: jmp 0x6a1442 */ goto L_006a1442;
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a13c2); r_esp += 8; return;
}

void f_006a13cb(void)
{
    FN_ENTER(0x006a13cb);
    /* 006a13cb: mov ecx, esi */ r_ecx = r_esi;
    /* 006a13cd: call 0x6a2df8 */ r_esp -= 4; W32(r_esp, 0x6a13d2u); f_006a2df8();
    /* 006a13d2: jmp 0x6a1442 */ goto L_006a1442;
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a13cb); r_esp += 8; return;
}

void f_006a13d4(void)
{
    FN_ENTER(0x006a13d4);
    /* 006a13d4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a13d6: call 0x6a1464 */ r_esp -= 4; W32(r_esp, 0x6a13dbu); f_006a1464();
    /* 006a13db: jmp 0x6a1442 */ goto L_006a1442;
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a13d4); r_esp += 8; return;
}

void f_006a13dd(void)
{
    FN_ENTER(0x006a13dd);
    /* 006a13dd: mov ecx, esi */ r_ecx = r_esi;
    /* 006a13df: call 0x6a1584 */ r_esp -= 4; W32(r_esp, 0x6a13e4u); f_006a1584();
    /* 006a13e4: jmp 0x6a1442 */ goto L_006a1442;
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a13dd); r_esp += 8; return;
}

void f_006a13e6(void)
{
    FN_ENTER(0x006a13e6);
    /* 006a13e6: mov edx, dword ptr [esi + 0x634] */ r_edx = R32((u32)(r_esi+0x634u));
    /* 006a13ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a13ee: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a13f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a13f6: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a13fc: je 0x6a1427 */ if (fZ) goto L_006a1427;
L_006a13fe:; BB(0x006a13fe);
    /* 006a13fe: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 006a1404: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1406: je 0x6a140f */ if (fZ) goto L_006a140f;
L_006a1408:; BB(0x006a1408);
    /* 006a1408: mov eax, 1 */ r_eax = 0x1u;
    /* 006a140d: jmp 0x6a1411 */ goto L_006a1411;
L_006a140f:; BB(0x006a140f);
    /* 006a140f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a1411:; BB(0x006a1411);
    /* 006a1411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1413: jne 0x6a1427 */ if (!fZ) goto L_006a1427;
L_006a1415:; BB(0x006a1415);
    /* 006a1415: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a141a: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a141f: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a1424u); f_0070a60c();
    /* 006a1424: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a1427:; BB(0x006a1427);
    /* 006a1427: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1429: call 0x6a15a0 */ r_esp -= 4; W32(r_esp, 0x6a142eu); f_006a15a0();
    /* 006a142e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a142f: ret 4 */ FN_RET(0x006a13e6); r_esp += 8; return;
}

void f_006a1432(void)
{
    FN_ENTER(0x006a1432);
    /* 006a1432: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1434: call 0x6a1790 */ r_esp -= 4; W32(r_esp, 0x6a1439u); f_006a1790();
    /* 006a1439: jmp 0x6a1442 */ goto L_006a1442;
L_006a1442:; BB(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a1432); r_esp += 8; return;
}

void f_006a143b(void)
{
    FN_ENTER(0x006a143b);
    /* 006a143b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a143d: call 0x6a1898 */ r_esp -= 4; W32(r_esp, 0x6a1442u); f_006a1898();
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a143b); r_esp += 8; return;
}

void f_006a1442(void)
{
    FN_ENTER(0x006a1442);
    /* 006a1442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1443: ret 4 */ FN_RET(0x006a1442); r_esp += 8; return;
}

void f_006a1448(void) /* sub_6A1448 */
{
    FN_ENTER(0x006a1448);
    /* 006a1448: mov eax, dword ptr [ecx + 0x6c4] */ r_eax = R32((u32)(r_ecx+0x6c4u));
    /* 006a144e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1450: je 0x6a1462 */ if (fZ) goto L_006a1462;
L_006a1452:; BB(0x006a1452);
    /* 006a1452: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a1455: mov dword ptr [ecx + 0x6c4], eax */ W32((u32)(r_ecx+0x6c4u), r_eax);
    /* 006a145b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006a145d: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a1462u); f_006a1ac0();
L_006a1462:; BB(0x006a1462);
    /* 006a1462: ret  */ FN_RET(0x006a1448); r_esp += 4; return;
}

void f_006a1464(void) /* sub_6A1464 */
{
    FN_ENTER(0x006a1464);
    /* 006a1464: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1465: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a1468: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a146a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a146c: call 0x6a14e0 */ r_esp -= 4; W32(r_esp, 0x6a1471u); f_006a14e0();
    /* 006a1471: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1473: jne 0x6a147a */ if (!fZ) goto L_006a147a;
L_006a1475:; BB(0x006a1475);
    /* 006a1475: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a1478: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1479: ret  */ FN_RET(0x006a1464); r_esp += 4; return;
L_006a147a:; BB(0x006a147a);
    /* 006a147a: lea edx, [ebp + 0x404] */ r_edx = (u32)(r_ebp+0x404u);
    /* 006a1480: lea eax, [ebp + 0x40c] */ r_eax = (u32)(r_ebp+0x40cu);
    /* 006a1486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1487: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1489: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a148a: push dword ptr [ebp + 0x3fc] */ { u32 v = R32((u32)(r_ebp+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1490: call 0x69bb6c */ r_esp -= 4; W32(r_esp, 0x6a1495u); f_0069bb6c();
    /* 006a1495: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1497: je 0x6a14aa */ if (fZ) goto L_006a14aa;
L_006a1499:; BB(0x006a1499);
    /* 006a1499: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 006a14a0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a14a3: jne 0x6a14aa */ if (!fZ) goto L_006a14aa;
L_006a14a5:; BB(0x006a14a5);
    /* 006a14a5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a14a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a14a9: ret  */ FN_RET(0x006a1464); r_esp += 4; return;
L_006a14aa:; BB(0x006a14aa);
    /* 006a14aa: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 006a14ae: mov edx, dword ptr [ebp + 0x404] */ r_edx = R32((u32)(r_ebp+0x404u));
    /* 006a14b4: mov ebp, dword ptr [ebp + 0x40c] */ r_ebp = R32((u32)(r_ebp+0x40cu));
    /* 006a14ba: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006a14bf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006a14c3: mov byte ptr [esp], 0x42 */ W8((u32)(r_esp), 0x42u);
    /* 006a14c7: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006a14cc: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 006a14d0: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a14d3: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a14d8u); f_008003e0();
    /* 006a14d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a14db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a14dc: ret  */ FN_RET(0x006a1464); r_esp += 4; return;
}

void f_006a14e0(void) /* sub_6A14E0 */
{
    FN_ENTER(0x006a14e0);
    /* 006a14e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a14e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a14e3: mov eax, dword ptr [ebx + 0xdf0] */ r_eax = R32((u32)(r_ebx+0xdf0u));
    /* 006a14e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a14eb: jne 0x6a157e */ if (!fZ) goto L_006a157e;
L_006a14f1:; BB(0x006a14f1);
    /* 006a14f1: mov ecx, dword ptr [ebx + 0x3fc] */ r_ecx = R32((u32)(r_ebx+0x3fcu));
    /* 006a14f7: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6a14fcu); f_0082dcbc();
    /* 006a14fc: fld dword ptr [0xa94324] */ FPUSH(R_F32((u32)(0xa94324u)));
    /* 006a1502: mov ecx, dword ptr [ebx + 0x3fc] */ r_ecx = R32((u32)(r_ebx+0x3fcu));
    /* 006a1508: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a150a: fstp dword ptr [ebx + 0x30c] */ W_F32((u32)(r_ebx+0x30cu), ST(0)); FPOP();
    /* 006a1510: mov dword ptr [ebx + 0x310], 0 */ W32((u32)(r_ebx+0x310u), 0x0u);
    /* 006a151a: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6a151fu); f_0082ddd8();
    /* 006a151f: fld dword ptr [0xa94324] */ FPUSH(R_F32((u32)(0xa94324u)));
    /* 006a1525: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a1527: fstp dword ptr [ebx + 0x314] */ W_F32((u32)(r_ebx+0x314u), ST(0)); FPOP();
    /* 006a152d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a152f: call 0x694198 */ r_esp -= 4; W32(r_esp, 0x6a1534u); f_00694198();
    /* 006a1534: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1536: je 0x6a1543 */ if (fZ) goto L_006a1543;
L_006a1538:; BB(0x006a1538);
    /* 006a1538: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a153a: call 0x77774c */ r_esp -= 4; W32(r_esp, 0x6a153fu); f_0077774c();
    /* 006a153f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1541: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a1542: ret  */ FN_RET(0x006a14e0); r_esp += 4; return;
L_006a1543:; BB(0x006a1543);
    /* 006a1543: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a1545: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x6a154au); f_00693844();
    /* 006a154a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a154c: jne 0x6a1555 */ if (!fZ) goto L_006a1555;
L_006a154e:; BB(0x006a154e);
    /* 006a154e: mov eax, 1 */ r_eax = 0x1u;
    /* 006a1553: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a1554: ret  */ FN_RET(0x006a14e0); r_esp += 4; return;
L_006a1555:; BB(0x006a1555);
    /* 006a1555: movsx edx, word ptr [ebx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006a155c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a155f: jne 0x6a157e */ if (!fZ) goto L_006a157e;
L_006a1561:; BB(0x006a1561);
    /* 006a1561: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 006a1567: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a156a: je 0x6a1573 */ if (fZ) goto L_006a1573;
L_006a156c:; BB(0x006a156c);
    /* 006a156c: mov edx, 1 */ r_edx = 0x1u;
    /* 006a1571: jmp 0x6a1575 */ goto L_006a1575;
L_006a1573:; BB(0x006a1573);
    /* 006a1573: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a1575:; BB(0x006a1575);
    /* 006a1575: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1577: jne 0x6a157e */ if (!fZ) goto L_006a157e;
L_006a1579:; BB(0x006a1579);
    /* 006a1579: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a157c: je 0x6a154e */ if (fZ) goto L_006a154e;
L_006a157e:; BB(0x006a157e);
    /* 006a157e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1580: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a1581: ret  */ FN_RET(0x006a14e0); r_esp += 4; return;
}

void f_006a1584(void) /* sub_6A1584 */
{
    FN_ENTER(0x006a1584);
    /* 006a1584: mov eax, dword ptr [ecx + 0x6c4] */ r_eax = R32((u32)(r_ecx+0x6c4u));
    /* 006a158a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a158c: je 0x6a159e */ if (fZ) goto L_006a159e;
L_006a158e:; BB(0x006a158e);
    /* 006a158e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006a1591: mov dword ptr [ecx + 0x6c4], eax */ W32((u32)(r_ecx+0x6c4u), r_eax);
    /* 006a1597: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1599: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a159eu); f_006a1ac0();
L_006a159e:; BB(0x006a159e);
    /* 006a159e: ret  */ FN_RET(0x006a1584); r_esp += 4; return;
}

void f_006a15a0(void) /* sub_6A15A0 */
{
    FN_ENTER(0x006a15a0);
    /* 006a15a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a15a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a15a2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a15a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a15a4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a15a7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a15a9: lea ebx, [ebp + 0x628] */ r_ebx = (u32)(r_ebp+0x628u);
    /* 006a15af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a15b1: call 0x6a7cac */ r_esp -= 4; W32(r_esp, 0x6a15b6u); f_006a7cac();
    /* 006a15b6: mov esi, eax */ r_esi = r_eax;
    /* 006a15b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a15ba: call 0x6a7c8c */ r_esp -= 4; W32(r_esp, 0x6a15bfu); f_006a7c8c();
    /* 006a15bf: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 006a15c3: movsx edi, word ptr [0xa94330] */ r_edi = (u32)(i32)(i16)R16((u32)(0xa94330u));
    /* 006a15ca: movsx ecx, word ptr [0xa9432c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa9432cu));
    /* 006a15d1: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006a15d4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006a15d7: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006a15db: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a15df: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 006a15e1: imul ecx, ecx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ecx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006a15e4: imul edi, edi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006a15e7: fmul qword ptr [0x93d930] */ ST(0) = ST(0) * R_F64((u32)(0x93d930u));
    /* 006a15ed: fdiv qword ptr [0x93d928] */ ST(0) = ST(0) / R_F64((u32)(0x93d928u));
    /* 006a15f3: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 006a15f9: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006a15fd: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006a1602: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1607: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006a160b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006a160f: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006a1613: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006a1617: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 006a161b: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a161d: add ebx, dword ptr [edx + 0x94] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edx+0x94u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a1623: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006a1627: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 006a162b: fdiv dword ptr [0x93d9bc] */ ST(0) = ST(0) / R_F32((u32)(0x93d9bcu));
    /* 006a1631: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 006a1635: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1637: call 0x68a40c */ r_esp -= 4; W32(r_esp, 0x6a163cu); f_0068a40c();
    /* 006a163c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a163e: je 0x6a1658 */ if (fZ) goto L_006a1658;
L_006a1640:; BB(0x006a1640);
    /* 006a1640: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 006a1646: test dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1649: je 0x6a1652 */ if (fZ) goto L_006a1652;
L_006a164b:; BB(0x006a164b);
    /* 006a164b: mov edx, 1 */ r_edx = 0x1u;
    /* 006a1650: jmp 0x6a1654 */ goto L_006a1654;
L_006a1652:; BB(0x006a1652);
    /* 006a1652: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a1654:; BB(0x006a1654);
    /* 006a1654: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1656: jne 0x6a16bd */ if (!fZ) goto L_006a16bd;
L_006a1658:; BB(0x006a1658);
    /* 006a1658: fld dword ptr [0x93da84] */ FPUSH(R_F32((u32)(0x93da84u)));
    /* 006a165e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 006a1662: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006a1664: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a1666: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a1667: ja 0x6a170c */ if ((!fC&&!fZ)) goto L_006a170c;
L_006a166d:; BB(0x006a166d);
    /* 006a166d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006a1671: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006a1673: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a1675: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a1676: jbe 0x6a16f1 */ if ((fC||fZ)) goto L_006a16f1;
L_006a1678:; BB(0x006a1678);
    /* 006a1678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a1679: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a167b: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x6a1680u); f_0068c038();
    /* 006a1680: mov ecx, eax */ r_ecx = r_eax;
    /* 006a1682: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006a1685: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a168b: jne 0x6a16c5 */ if (!fZ) goto L_006a16c5;
L_006a168d:; BB(0x006a168d);
    /* 006a168d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 006a1691: fcomp dword ptr [0x93da70] */ fx_compare(ST(0), R_F32((u32)(0x93da70u))); FPOP();
    /* 006a1697: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a1699: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a169a: jb 0x6a16c5 */ if (fC) goto L_006a16c5;
L_006a169c:; BB(0x006a169c);
    /* 006a169c: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 006a16a2: add dword ptr [ebp + 0x6bc], 1 */ { u32 ad = (u32)(r_ebp+0x6bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a16a9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a16ac: je 0x6a16bd */ if (fZ) goto L_006a16bd;
L_006a16ae:; BB(0x006a16ae);
    /* 006a16ae: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 006a16b4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a16b6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a16b8: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a16bdu); f_006a139c();
L_006a16bd:; BB(0x006a16bd);
    /* 006a16bd: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a16c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a16c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a16c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a16c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a16c4: ret  */ FN_RET(0x006a15a0); r_esp += 4; return;
L_006a16c5:; BB(0x006a16c5);
    /* 006a16c5: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 006a16cb: mov dword ptr [ebp + 0x6bc], 0 */ W32((u32)(r_ebp+0x6bcu), 0x0u);
    /* 006a16d5: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a16d8: je 0x6a16bd */ if (fZ) goto L_006a16bd;
L_006a16da:; BB(0x006a16da);
    /* 006a16da: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 006a16e0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a16e2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a16e4: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a16e9u); f_0069b93c();
    /* 006a16e9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a16ec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a16ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a16ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a16ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a16f0: ret  */ FN_RET(0x006a15a0); r_esp += 4; return;
L_006a16f1:; BB(0x006a16f1);
    /* 006a16f1: mov eax, dword ptr [ebp + 0x6c4] */ r_eax = R32((u32)(r_ebp+0x6c4u));
    /* 006a16f7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a16f9: je 0x6a16bd */ if (fZ) goto L_006a16bd;
L_006a16fb:; BB(0x006a16fb);
    /* 006a16fb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a16fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a16ff: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a1704u); f_006a1ac0();
    /* 006a1704: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a1707: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a1708: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1709: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a170a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a170b: ret  */ FN_RET(0x006a15a0); r_esp += 4; return;
L_006a170c:; BB(0x006a170c);
    /* 006a170c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006a170e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a170f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1711: call 0x68c038 */ r_esp -= 4; W32(r_esp, 0x6a1716u); f_0068c038();
    /* 006a1716: mov ecx, eax */ r_ecx = r_eax;
    /* 006a1718: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 006a171b: test edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1721: jne 0x6a175f */ if (!fZ) goto L_006a175f;
L_006a1723:; BB(0x006a1723);
    /* 006a1723: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 006a1727: fcomp dword ptr [0x93da70] */ fx_compare(ST(0), R_F32((u32)(0x93da70u))); FPOP();
    /* 006a172d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a172f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a1730: jb 0x6a175f */ if (fC) goto L_006a175f;
L_006a1732:; BB(0x006a1732);
    /* 006a1732: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 006a1738: add dword ptr [ebp + 0x6bc], 1 */ { u32 ad = (u32)(r_ebp+0x6bcu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a173f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1742: je 0x6a16bd */ if (fZ) goto L_006a16bd;
L_006a1748:; BB(0x006a1748);
    /* 006a1748: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 006a174e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1750: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1752: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a1757u); f_006a139c();
    /* 006a1757: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a175a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a175b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a175c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a175d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a175e: ret  */ FN_RET(0x006a15a0); r_esp += 4; return;
L_006a175f:; BB(0x006a175f);
    /* 006a175f: mov edx, dword ptr [ebp + 0x6c4] */ r_edx = R32((u32)(r_ebp+0x6c4u));
    /* 006a1765: mov dword ptr [ebp + 0x6bc], 0 */ W32((u32)(r_ebp+0x6bcu), 0x0u);
    /* 006a176f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1772: je 0x6a16bd */ if (fZ) goto L_006a16bd;
L_006a1778:; BB(0x006a1778);
    /* 006a1778: mov dword ptr [ebp + 0x3fc], ecx */ W32((u32)(r_ebp+0x3fcu), r_ecx);
    /* 006a177e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1780: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1782: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a1787u); f_0069b93c();
    /* 006a1787: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a178a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a178b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a178c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a178d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a178e: ret  */ FN_RET(0x006a15a0); r_esp += 4; return;
}

void f_006a1790(void) /* sub_6A1790 */
{
    FN_ENTER(0x006a1790);
    /* 006a1790: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1791: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1792: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1793: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a1795: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a1798: lea eax, [ebp + 0x404] */ r_eax = (u32)(r_ebp+0x404u);
    /* 006a179e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a179f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a17a0: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a17a5u); f_007a90a8();
    /* 006a17a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a17a6: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a17a9: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a17af: call 0x7a8cd0 */ r_esp -= 4; W32(r_esp, 0x6a17b4u); f_007a8cd0();
    /* 006a17b4: push dword ptr [ebp + 0x3fc] */ { u32 v = R32((u32)(r_ebp+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a17ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a17bb: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 006a17be: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x6a17c3u); f_007a8cb8();
    /* 006a17c3: mov esi, eax */ r_esi = r_eax;
    /* 006a17c5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a17c8: fld dword ptr [ebp + 0x6b8] */ FPUSH(R_F32((u32)(r_ebp+0x6b8u)));
    /* 006a17ce: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a17d1: mov ecx, esi */ r_ecx = r_esi;
    /* 006a17d3: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6a17d8u); f_0082dcbc();
    /* 006a17d8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006a17db: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a17dd: fld dword ptr [ebp + 0x6b8] */ FPUSH(R_F32((u32)(r_ebp+0x6b8u)));
    /* 006a17e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a17e5: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 006a17eb: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a17ee: mov dword ptr [ebp + 0x310], 0 */ W32((u32)(r_ebp+0x310u), 0x0u);
    /* 006a17f8: mov ecx, esi */ r_ecx = r_esi;
    /* 006a17fa: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6a17ffu); f_0082ddd8();
    /* 006a17ff: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006a1802: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a1804: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 006a180a: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 006a180d: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 006a1813: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 006a1816: fld dword ptr [ebp + 0x6b8] */ FPUSH(R_F32((u32)(r_ebp+0x6b8u)));
    /* 006a181c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006a181e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006a1820: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a1822: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006a1824: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006a1826: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 006a182c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a182e: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 006a1830: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006a1832: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006a1834: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006a1836: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006a1838: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a183a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a183b: jae 0x6a184c */ if (!fC) goto L_006a184c;
L_006a183d:; BB(0x006a183d);
    /* 006a183d: mov eax, dword ptr [ebp + 0x6c4] */ r_eax = R32((u32)(r_ebp+0x6c4u));
    /* 006a1843: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1846: mov dword ptr [ebp + 0x6c4], eax */ W32((u32)(r_ebp+0x6c4u), r_eax);
L_006a184c:; BB(0x006a184c);
    /* 006a184c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a184e: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x6a1853u); f_00693844();
    /* 006a1853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1855: jne 0x6a1860 */ if (!fZ) goto L_006a1860;
L_006a1857:; BB(0x006a1857);
    /* 006a1857: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1859: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x6a185eu); f_00777724();
    /* 006a185e: jmp 0x6a186f */ goto L_006a186f;
L_006a1860:; BB(0x006a1860);
    /* 006a1860: mov eax, dword ptr [ebp + 0x6c4] */ r_eax = R32((u32)(r_ebp+0x6c4u));
    /* 006a1866: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1869: mov dword ptr [ebp + 0x6c4], eax */ W32((u32)(r_ebp+0x6c4u), r_eax);
L_006a186f:; BB(0x006a186f);
    /* 006a186f: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1874: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1876: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a187b: call 0x69049c */ r_esp -= 4; W32(r_esp, 0x6a1880u); f_0069049c();
    /* 006a1880: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1885: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1887: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a188c: call 0x68ca4c */ r_esp -= 4; W32(r_esp, 0x6a1891u); f_0068ca4c();
    /* 006a1891: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a1892: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1893: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1894: ret  */ FN_RET(0x006a1790); r_esp += 4; return;
}

void f_006a1898(void) /* sub_6A1898 */
{
    FN_ENTER(0x006a1898);
    /* 006a1898: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1899: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a189a: mov esi, ecx */ r_esi = r_ecx;
    /* 006a189c: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 006a18a3: mov dword ptr [esi + 0x348], 4 */ W32((u32)(r_esi+0x348u), 0x4u);
    /* 006a18ad: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a18b0: ja 0x6a19db */ if ((!fC&&!fZ)) goto L_006a19db;
L_006a18b6:; BB(0x006a18b6);
    /* 006a18b6: mov eax, dword ptr [eax*4 + 0x93d780] */ r_eax = R32((u32)(r_eax*4+0x93d780u));
    /* 006a18bd: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1898); r_esp += 4; return;
}

void f_006a18bf(void)
{
    FN_ENTER(0x006a18bf);
    /* 006a18bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a18c1: mov ecx, esi */ r_ecx = r_esi;
    /* 006a18c3: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a18c8u); f_0069bdf0();
    /* 006a18c8: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a18bf); r_esp += 4; return;
}

void f_006a18cd(void)
{
    FN_ENTER(0x006a18cd);
    /* 006a18cd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a18cf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a18d1: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a18d6u); f_0069c6c0();
    /* 006a18d6: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a18cd); r_esp += 4; return;
}

void f_006a18db(void)
{
    FN_ENTER(0x006a18db);
    /* 006a18db: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a18dd: mov ecx, esi */ r_ecx = r_esi;
    /* 006a18df: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a18e4u); f_0069c988();
    /* 006a18e4: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a18db); r_esp += 4; return;
}

void f_006a18e9(void)
{
    FN_ENTER(0x006a18e9);
    /* 006a18e9: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a18eb: mov ecx, esi */ r_ecx = r_esi;
    /* 006a18ed: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a18f2u); f_0069cd20();
    /* 006a18f2: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a18e9); r_esp += 4; return;
}

void f_006a18f7(void)
{
    FN_ENTER(0x006a18f7);
    /* 006a18f7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a18f9: mov ecx, esi */ r_ecx = r_esi;
    /* 006a18fb: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a1900u); f_0069d1e4();
    /* 006a1900: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a18f7); r_esp += 4; return;
}

void f_006a1905(void)
{
    FN_ENTER(0x006a1905);
    /* 006a1905: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1907: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1909: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a190eu); f_0069d43c();
    /* 006a190e: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1905); r_esp += 4; return;
}

void f_006a1913(void)
{
    FN_ENTER(0x006a1913);
    /* 006a1913: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1915: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1917: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a191cu); f_0069d8f4();
    /* 006a191c: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1913); r_esp += 4; return;
}

void f_006a1921(void)
{
    FN_ENTER(0x006a1921);
    /* 006a1921: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1923: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1925: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a192au); f_0069dd60();
    /* 006a192a: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1921); r_esp += 4; return;
}

void f_006a192f(void)
{
    FN_ENTER(0x006a192f);
    /* 006a192f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1931: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1933: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a1938u); f_0069e15c();
    /* 006a1938: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a192f); r_esp += 4; return;
}

void f_006a193d(void)
{
    FN_ENTER(0x006a193d);
    /* 006a193d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a193f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1941: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a1946u); f_0069e718();
    /* 006a1946: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a193d); r_esp += 4; return;
}

void f_006a194b(void)
{
    FN_ENTER(0x006a194b);
    /* 006a194b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a194d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a194f: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a1954u); f_0069ebc8();
    /* 006a1954: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a194b); r_esp += 4; return;
}

void f_006a1959(void)
{
    FN_ENTER(0x006a1959);
    /* 006a1959: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a195b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a195d: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a1962u); f_0069ef04();
    /* 006a1962: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1959); r_esp += 4; return;
}

void f_006a1964(void)
{
    FN_ENTER(0x006a1964);
    /* 006a1964: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1966: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1968: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a196du); f_0069f148();
    /* 006a196d: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1964); r_esp += 4; return;
}

void f_006a196f(void)
{
    FN_ENTER(0x006a196f);
    /* 006a196f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1971: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1973: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a1978u); f_0069f384();
    /* 006a1978: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a196f); r_esp += 4; return;
}

void f_006a197a(void)
{
    FN_ENTER(0x006a197a);
    /* 006a197a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a197c: mov ecx, esi */ r_ecx = r_esi;
    /* 006a197e: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a1983u); f_0069f648();
    /* 006a1983: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a197a); r_esp += 4; return;
}

void f_006a1985(void)
{
    FN_ENTER(0x006a1985);
    /* 006a1985: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1987: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1989: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a198eu); f_0069fe2c();
    /* 006a198e: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1985); r_esp += 4; return;
}

void f_006a1990(void)
{
    FN_ENTER(0x006a1990);
    /* 006a1990: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1992: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1994: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a1999u); f_006a0624();
    /* 006a1999: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a1990); r_esp += 4; return;
}

void f_006a199b(void)
{
    FN_ENTER(0x006a199b);
    /* 006a199b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a199d: mov ecx, esi */ r_ecx = r_esi;
    /* 006a199f: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a19a4u); f_006a0994();
    /* 006a19a4: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a199b); r_esp += 4; return;
}

void f_006a19a6(void)
{
    FN_ENTER(0x006a19a6);
    /* 006a19a6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a19a8: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19aa: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a19afu); f_006a0eb8();
    /* 006a19af: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a19a6); r_esp += 4; return;
}

void f_006a19b1(void)
{
    FN_ENTER(0x006a19b1);
    /* 006a19b1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a19b3: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19b5: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a19bau); f_006a139c();
    /* 006a19ba: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a19b1); r_esp += 4; return;
}

void f_006a19bc(void)
{
    FN_ENTER(0x006a19bc);
    /* 006a19bc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a19be: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19c0: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a19c5u); f_006a1a60();
    /* 006a19c5: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a19bc); r_esp += 4; return;
}

void f_006a19c7(void)
{
    FN_ENTER(0x006a19c7);
    /* 006a19c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a19c9: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19cb: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a19d0u); f_0069b93c();
    /* 006a19d0: jmp 0x6a19db */ goto L_006a19db;
L_006a19db:; BB(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a19c7); r_esp += 4; return;
}

void f_006a19d2(void)
{
    FN_ENTER(0x006a19d2);
    /* 006a19d2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a19d4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19d6: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a19dbu); f_006a1ac0();
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a19d2); r_esp += 4; return;
}

void f_006a19db(void)
{
    FN_ENTER(0x006a19db);
    /* 006a19db: mov ecx, dword ptr [esi + 0x38c] */ r_ecx = R32((u32)(r_esi+0x38cu));
    /* 006a19e1: mov dword ptr [esi + 0x6c4], 0 */ W32((u32)(r_esi+0x6c4u), 0x0u);
    /* 006a19eb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a19ed: call dword ptr [eax + 0x70] */ { u32 t = R32((u32)(r_eax+0x70u)); r_esp -= 4; W32(r_esp, 0x6a19f0u); call_ind(t); }
    /* 006a19f0: movsx ebp, ax */ r_ebp = (u32)(i32)(i16)(u16)r_eax;
    /* 006a19f3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a19f4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a19f6: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a19fbu); f_006942a4();
    /* 006a19fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a19fd: je 0x6a1a10 */ if (fZ) goto L_006a1a10;
L_006a19ff:; BB(0x006a19ff);
    /* 006a19ff: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006a1a05: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a0a: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
L_006a1a10:; BB(0x006a1a10);
    /* 006a1a10: push dword ptr [0xa94324] */ { u32 v = R32((u32)(0xa94324u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1a16: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a17: lea ecx, [esi + 0x6b8] */ r_ecx = (u32)(r_esi+0x6b8u);
    /* 006a1a1d: call 0x697914 */ r_esp -= 4; W32(r_esp, 0x6a1a22u); f_00697914();
    /* 006a1a22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a23: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1a25: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1a27: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1a2cu); f_00694390();
    /* 006a1a2c: movsx edx, word ptr [esi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xb8u));
    /* 006a1a33: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 006a1a39: mov ebp, dword ptr [esi + 0xb0] */ r_ebp = R32((u32)(r_esi+0xb0u));
    /* 006a1a3f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a1a41: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a1a45: fmul dword ptr [esi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x6c0u));
    /* 006a1a4b: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 006a1a51: or ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a57: mov dword ptr [esi + 0xb0], ebp */ W32((u32)(r_esi+0xb0u), r_ebp);
    /* 006a1a5d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1a5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1a5f: ret  */ FN_RET(0x006a19db); r_esp += 4; return;
}

void f_006a1a60(void) /* sub_6A1A60 */
{
    FN_ENTER(0x006a1a60);
    /* 006a1a60: movsx eax, word ptr [esp + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 006a1a65: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a1a68: ja 0x6a1abb */ if ((!fC&&!fZ)) goto L_006a1abb;
L_006a1a6a:; BB(0x006a1a6a);
    /* 006a1a6a: mov eax, dword ptr [eax*4 + 0x93d7e4] */ r_eax = R32((u32)(r_eax*4+0x93d7e4u));
    /* 006a1a71: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a1abb:; BB(0x006a1abb);
    /* 006a1abb: ret 4 */ FN_RET(0x006a1a60); r_esp += 8; return;
}

void f_006a1a73(void)
{
    FN_ENTER(0x006a1a73);
    /* 006a1a73: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x6a1a78u); f_0069b720();
    /* 006a1a78: jmp 0x6a1abb */ goto L_006a1abb;
L_006a1abb:; BB(0x006a1abb);
    /* 006a1abb: ret 4 */ FN_RET(0x006a1a73); r_esp += 8; return;
}

void f_006a1a7a(void)
{
    FN_ENTER(0x006a1a7a);
    /* 006a1a7a: mov edx, dword ptr [ecx + 0x634] */ r_edx = R32((u32)(r_ecx+0x634u));
    /* 006a1a80: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a1a82: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a1a88: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1a8a: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a1a90: je 0x6a1abb */ if (fZ) goto L_006a1abb;
L_006a1a92:; BB(0x006a1a92);
    /* 006a1a92: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 006a1a98: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1a9a: je 0x6a1aa3 */ if (fZ) goto L_006a1aa3;
L_006a1a9c:; BB(0x006a1a9c);
    /* 006a1a9c: mov eax, 1 */ r_eax = 0x1u;
    /* 006a1aa1: jmp 0x6a1aa5 */ goto L_006a1aa5;
L_006a1aa3:; BB(0x006a1aa3);
    /* 006a1aa3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a1aa5:; BB(0x006a1aa5);
    /* 006a1aa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1aa7: jne 0x6a1abb */ if (!fZ) goto L_006a1abb;
L_006a1aa9:; BB(0x006a1aa9);
    /* 006a1aa9: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a1aae: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ab3: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a1ab8u); f_0070a60c();
    /* 006a1ab8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006a1abb:; BB(0x006a1abb);
    /* 006a1abb: ret 4 */ FN_RET(0x006a1a7a); r_esp += 8; return;
}

void f_006a1abb(void)
{
    FN_ENTER(0x006a1abb);
    /* 006a1abb: ret 4 */ FN_RET(0x006a1abb); r_esp += 8; return;
}

void f_006a1ac0(void) /* sub_6A1AC0 */
{
    FN_ENTER(0x006a1ac0);
    /* 006a1ac0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ac1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a1ac3: movsx eax, word ptr [esp + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 006a1ac8: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006a1acb: ja 0x6a1b44 */ if ((!fC&&!fZ)) goto L_006a1b44;
L_006a1acd:; BB(0x006a1acd);
    /* 006a1acd: mov eax, dword ptr [eax*4 + 0x93d808] */ r_eax = R32((u32)(r_eax*4+0x93d808u));
    /* 006a1ad4: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a1b44:; BB(0x006a1b44);
    /* 006a1b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b45: ret 4 */ FN_RET(0x006a1ac0); r_esp += 8; return;
}

void f_006a1ad6(void)
{
    FN_ENTER(0x006a1ad6);
    /* 006a1ad6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1ad8: call 0x69b720 */ r_esp -= 4; W32(r_esp, 0x6a1addu); f_0069b720();
    /* 006a1add: jmp 0x6a1b44 */ goto L_006a1b44;
L_006a1b44:; BB(0x006a1b44);
    /* 006a1b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b45: ret 4 */ FN_RET(0x006a1ad6); r_esp += 8; return;
}

void f_006a1adf(void)
{
    FN_ENTER(0x006a1adf);
    /* 006a1adf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1ae1: call 0x6a1b48 */ r_esp -= 4; W32(r_esp, 0x6a1ae6u); f_006a1b48();
    /* 006a1ae6: jmp 0x6a1b44 */ goto L_006a1b44;
L_006a1b44:; BB(0x006a1b44);
    /* 006a1b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b45: ret 4 */ FN_RET(0x006a1adf); r_esp += 8; return;
}

void f_006a1ae8(void)
{
    FN_ENTER(0x006a1ae8);
    /* 006a1ae8: mov edx, dword ptr [ebp + 0x634] */ r_edx = R32((u32)(r_ebp+0x634u));
    /* 006a1aee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a1af0: mov word ptr [0xa9432c], ax */ W16((u32)(0xa9432cu), (u16)r_eax);
    /* 006a1af6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1af8: mov word ptr [0xa94330], ax */ W16((u32)(0xa94330u), (u16)r_eax);
    /* 006a1afe: je 0x6a1b29 */ if (fZ) goto L_006a1b29;
L_006a1b00:; BB(0x006a1b00);
    /* 006a1b00: mov eax, dword ptr [ebp + 0x33c] */ r_eax = R32((u32)(r_ebp+0x33cu));
    /* 006a1b06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1b08: je 0x6a1b11 */ if (fZ) goto L_006a1b11;
L_006a1b0a:; BB(0x006a1b0a);
    /* 006a1b0a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a1b0f: jmp 0x6a1b13 */ goto L_006a1b13;
L_006a1b11:; BB(0x006a1b11);
    /* 006a1b11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a1b13:; BB(0x006a1b13);
    /* 006a1b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1b15: jne 0x6a1b29 */ if (!fZ) goto L_006a1b29;
L_006a1b17:; BB(0x006a1b17);
    /* 006a1b17: push 0xa9432c */ { u32 v = 0xa9432cu; r_esp -= 4; W32(r_esp, v); }
    /* 006a1b1c: push 0xa94330 */ { u32 v = 0xa94330u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1b21: call 0x70a60c */ r_esp -= 4; W32(r_esp, 0x6a1b26u); f_0070a60c();
    /* 006a1b26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a1b29:; BB(0x006a1b29);
    /* 006a1b29: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1b2b: call 0x69b728 */ r_esp -= 4; W32(r_esp, 0x6a1b30u); f_0069b728();
    /* 006a1b30: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b31: ret 4 */ FN_RET(0x006a1ae8); r_esp += 8; return;
}

void f_006a1b34(void)
{
    FN_ENTER(0x006a1b34);
    /* 006a1b34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1b36: call 0x6a1c04 */ r_esp -= 4; W32(r_esp, 0x6a1b3bu); f_006a1c04();
    /* 006a1b3b: jmp 0x6a1b44 */ goto L_006a1b44;
L_006a1b44:; BB(0x006a1b44);
    /* 006a1b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b45: ret 4 */ FN_RET(0x006a1b34); r_esp += 8; return;
}

void f_006a1b3d(void)
{
    FN_ENTER(0x006a1b3d);
    /* 006a1b3d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1b3f: call 0x6a1c8c */ r_esp -= 4; W32(r_esp, 0x6a1b44u); f_006a1c8c();
    /* 006a1b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b45: ret 4 */ FN_RET(0x006a1b3d); r_esp += 8; return;
}

void f_006a1b44(void)
{
    FN_ENTER(0x006a1b44);
    /* 006a1b44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1b45: ret 4 */ FN_RET(0x006a1b44); r_esp += 8; return;
}

void f_006a1b48(void) /* sub_6A1B48 */
{
    FN_ENTER(0x006a1b48);
    /* 006a1b48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1b49: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a1b4c: mov edi, ecx */ r_edi = r_ecx;
    /* 006a1b4e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1b50: je 0x6a1b63 */ if (fZ) goto L_006a1b63;
L_006a1b52:; BB(0x006a1b52);
    /* 006a1b52: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006a1b59: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1b5c: jne 0x6a1b63 */ if (!fZ) goto L_006a1b63;
L_006a1b5e:; BB(0x006a1b5e);
    /* 006a1b5e: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a1b61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a1b62: ret  */ FN_RET(0x006a1b48); r_esp += 4; return;
L_006a1b63:; BB(0x006a1b63);
    /* 006a1b63: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006a1b66: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1b6b: je 0x6a1b74 */ if (fZ) goto L_006a1b74;
L_006a1b6d:; BB(0x006a1b6d);
    /* 006a1b6d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006a1b72: jmp 0x6a1b76 */ goto L_006a1b76;
L_006a1b74:; BB(0x006a1b74);
    /* 006a1b74: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_006a1b76:; BB(0x006a1b76);
    /* 006a1b76: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006a1b7a: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 006a1b82: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006a1b87: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 006a1b8c: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 006a1b94: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 006a1b99: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 006a1b9c: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006a1ba1: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 006a1ba6: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1ba8: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006a1bb0: mov byte ptr [esp], 0x3e */ W8((u32)(r_esp), 0x3eu);
    /* 006a1bb4: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006a1bb9: mov byte ptr [esp + 1], 6 */ W8((u32)(r_esp+0x1u), 0x6u);
    /* 006a1bbe: call 0x688c68 */ r_esp -= 4; W32(r_esp, 0x6a1bc3u); f_00688c68();
    /* 006a1bc3: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1bc5: call 0x688c58 */ r_esp -= 4; W32(r_esp, 0x6a1bcau); f_00688c58();
    /* 006a1bca: mov eax, dword ptr [edi + 0x3f0] */ r_eax = R32((u32)(r_edi+0x3f0u));
    /* 006a1bd0: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 006a1bd5: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1bd7: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6a1bdcu); f_007ba980();
    /* 006a1bdc: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 006a1bdf: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 006a1be4: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 006a1be7: mov edi, dword ptr [edi + 0x40] */ r_edi = R32((u32)(r_edi+0x40u));
    /* 006a1bea: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006a1bee: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006a1bf2: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006a1bf6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006a1bf9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6a1bfeu); f_008003e0();
    /* 006a1bfe: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a1c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a1c02: ret  */ FN_RET(0x006a1b48); r_esp += 4; return;
}

void f_006a1c04(void) /* sub_6A1C04 */
{
    FN_ENTER(0x006a1c04);
    /* 006a1c04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1c05: mov esi, ecx */ r_esi = r_ecx;
    /* 006a1c07: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c09: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x6a1c0eu); f_00693844();
    /* 006a1c0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1c10: je 0x6a1c19 */ if (fZ) goto L_006a1c19;
L_006a1c12:; BB(0x006a1c12);
    /* 006a1c12: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1c15: je 0x6a1c80 */ if (fZ) goto L_006a1c80;
L_006a1c17:; BB(0x006a1c17);
    /* 006a1c17: jmp 0x6a1c20 */ goto L_006a1c20;
L_006a1c19:; BB(0x006a1c19);
    /* 006a1c19: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c1b: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x6a1c20u); f_00777724();
L_006a1c20:; BB(0x006a1c20);
    /* 006a1c20: mov eax, dword ptr [esi + 0x964] */ r_eax = R32((u32)(r_esi+0x964u));
    /* 006a1c26: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a1c28: je 0x6a1c5d */ if (fZ) goto L_006a1c5d;
L_006a1c2a:; BB(0x006a1c2a);
    /* 006a1c2a: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x6a1c2fu); f_0068be84();
    /* 006a1c2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1c31: je 0x6a1c3b */ if (fZ) goto L_006a1c3b;
L_006a1c33:; BB(0x006a1c33);
    /* 006a1c33: mov eax, dword ptr [esi + 0x964] */ r_eax = R32((u32)(r_esi+0x964u));
    /* 006a1c39: jmp 0x6a1c5d */ goto L_006a1c5d;
L_006a1c3b:; BB(0x006a1c3b);
    /* 006a1c3b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c3d: call 0x694818 */ r_esp -= 4; W32(r_esp, 0x6a1c42u); f_00694818();
    /* 006a1c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1c44: jne 0x6a1c4e */ if (!fZ) goto L_006a1c4e;
L_006a1c46:; BB(0x006a1c46);
    /* 006a1c46: mov eax, dword ptr [esi + 0x964] */ r_eax = R32((u32)(r_esi+0x964u));
    /* 006a1c4c: jmp 0x6a1c5d */ goto L_006a1c5d;
L_006a1c4e:; BB(0x006a1c4e);
    /* 006a1c4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1c50: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c52: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x6a1c57u); f_00777368();
    /* 006a1c57: mov eax, dword ptr [esi + 0x964] */ r_eax = R32((u32)(r_esi+0x964u));
L_006a1c5d:; BB(0x006a1c5d);
    /* 006a1c5d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1c5f: je 0x6a1c7e */ if (fZ) goto L_006a1c7e;
L_006a1c61:; BB(0x006a1c61);
    /* 006a1c61: call 0x68be84 */ r_esp -= 4; W32(r_esp, 0x6a1c66u); f_0068be84();
    /* 006a1c66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1c68: jne 0x6a1c7e */ if (!fZ) goto L_006a1c7e;
L_006a1c6a:; BB(0x006a1c6a);
    /* 006a1c6a: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c6c: call 0x694818 */ r_esp -= 4; W32(r_esp, 0x6a1c71u); f_00694818();
    /* 006a1c71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a1c73: je 0x6a1c7e */ if (fZ) goto L_006a1c7e;
L_006a1c75:; BB(0x006a1c75);
    /* 006a1c75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1c77: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c79: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x6a1c7eu); f_007773d4();
L_006a1c7e:; BB(0x006a1c7e);
    /* 006a1c7e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1c7f: ret  */ FN_RET(0x006a1c04); r_esp += 4; return;
L_006a1c80:; BB(0x006a1c80);
    /* 006a1c80: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1c82: call 0x695254 */ r_esp -= 4; W32(r_esp, 0x6a1c87u); f_00695254();
    /* 006a1c87: jmp 0x6a1c20 */ goto L_006a1c20;
}

void f_006a1c8c(void) /* sub_6A1C8C */
{
    FN_ENTER(0x006a1c8c);
    /* 006a1c8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1c8d: mov esi, ecx */ r_esi = r_ecx;
    /* 006a1c8f: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 006a1c96: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a1c99: mov dword ptr [esi + 0x348], 1 */ W32((u32)(r_esi+0x348u), 0x1u);
    /* 006a1ca3: ja 0x6a1dce */ if ((!fC&&!fZ)) goto L_006a1dce;
L_006a1ca9:; BB(0x006a1ca9);
    /* 006a1ca9: mov eax, dword ptr [eax*4 + 0x93d840] */ r_eax = R32((u32)(r_eax*4+0x93d840u));
    /* 006a1cb0: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1c8c); r_esp += 4; return;
}

void f_006a1cb2(void)
{
    FN_ENTER(0x006a1cb2);
    /* 006a1cb2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1cb4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1cb6: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a1cbbu); f_0069bdf0();
    /* 006a1cbb: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1cb2); r_esp += 4; return;
}

void f_006a1cc0(void)
{
    FN_ENTER(0x006a1cc0);
    /* 006a1cc0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1cc2: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1cc4: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a1cc9u); f_0069c6c0();
    /* 006a1cc9: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1cc0); r_esp += 4; return;
}

void f_006a1cce(void)
{
    FN_ENTER(0x006a1cce);
    /* 006a1cce: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1cd0: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1cd2: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a1cd7u); f_0069c988();
    /* 006a1cd7: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1cce); r_esp += 4; return;
}

void f_006a1cdc(void)
{
    FN_ENTER(0x006a1cdc);
    /* 006a1cdc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1cde: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1ce0: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a1ce5u); f_0069cd20();
    /* 006a1ce5: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1cdc); r_esp += 4; return;
}

void f_006a1cea(void)
{
    FN_ENTER(0x006a1cea);
    /* 006a1cea: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1cec: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1cee: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a1cf3u); f_0069d1e4();
    /* 006a1cf3: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1cea); r_esp += 4; return;
}

void f_006a1cf8(void)
{
    FN_ENTER(0x006a1cf8);
    /* 006a1cf8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1cfa: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1cfc: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a1d01u); f_0069d43c();
    /* 006a1d01: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1cf8); r_esp += 4; return;
}

void f_006a1d06(void)
{
    FN_ENTER(0x006a1d06);
    /* 006a1d06: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d08: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d0a: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a1d0fu); f_0069d8f4();
    /* 006a1d0f: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d06); r_esp += 4; return;
}

void f_006a1d14(void)
{
    FN_ENTER(0x006a1d14);
    /* 006a1d14: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d16: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d18: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a1d1du); f_0069dd60();
    /* 006a1d1d: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d14); r_esp += 4; return;
}

void f_006a1d22(void)
{
    FN_ENTER(0x006a1d22);
    /* 006a1d22: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d24: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d26: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a1d2bu); f_0069e15c();
    /* 006a1d2b: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d22); r_esp += 4; return;
}

void f_006a1d30(void)
{
    FN_ENTER(0x006a1d30);
    /* 006a1d30: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d32: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d34: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a1d39u); f_0069e718();
    /* 006a1d39: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d30); r_esp += 4; return;
}

void f_006a1d3e(void)
{
    FN_ENTER(0x006a1d3e);
    /* 006a1d3e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d40: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d42: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a1d47u); f_0069ebc8();
    /* 006a1d47: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d3e); r_esp += 4; return;
}

void f_006a1d4c(void)
{
    FN_ENTER(0x006a1d4c);
    /* 006a1d4c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d4e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d50: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a1d55u); f_0069ef04();
    /* 006a1d55: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d4c); r_esp += 4; return;
}

void f_006a1d57(void)
{
    FN_ENTER(0x006a1d57);
    /* 006a1d57: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d59: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d5b: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a1d60u); f_0069f148();
    /* 006a1d60: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d57); r_esp += 4; return;
}

void f_006a1d62(void)
{
    FN_ENTER(0x006a1d62);
    /* 006a1d62: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d64: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d66: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a1d6bu); f_0069f384();
    /* 006a1d6b: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d62); r_esp += 4; return;
}

void f_006a1d6d(void)
{
    FN_ENTER(0x006a1d6d);
    /* 006a1d6d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d6f: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d71: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a1d76u); f_0069f648();
    /* 006a1d76: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d6d); r_esp += 4; return;
}

void f_006a1d78(void)
{
    FN_ENTER(0x006a1d78);
    /* 006a1d78: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d7a: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d7c: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a1d81u); f_0069fe2c();
    /* 006a1d81: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d78); r_esp += 4; return;
}

void f_006a1d83(void)
{
    FN_ENTER(0x006a1d83);
    /* 006a1d83: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d85: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d87: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a1d8cu); f_006a0624();
    /* 006a1d8c: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d83); r_esp += 4; return;
}

void f_006a1d8e(void)
{
    FN_ENTER(0x006a1d8e);
    /* 006a1d8e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d90: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d92: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a1d97u); f_006a0994();
    /* 006a1d97: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d8e); r_esp += 4; return;
}

void f_006a1d99(void)
{
    FN_ENTER(0x006a1d99);
    /* 006a1d99: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1d9b: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1d9d: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a1da2u); f_006a0eb8();
    /* 006a1da2: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1d99); r_esp += 4; return;
}

void f_006a1da4(void)
{
    FN_ENTER(0x006a1da4);
    /* 006a1da4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1da6: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1da8: call 0x6a139c */ r_esp -= 4; W32(r_esp, 0x6a1dadu); f_006a139c();
    /* 006a1dad: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1da4); r_esp += 4; return;
}

void f_006a1daf(void)
{
    FN_ENTER(0x006a1daf);
    /* 006a1daf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1db1: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1db3: call 0x6a1a60 */ r_esp -= 4; W32(r_esp, 0x6a1db8u); f_006a1a60();
    /* 006a1db8: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1daf); r_esp += 4; return;
}

void f_006a1dba(void)
{
    FN_ENTER(0x006a1dba);
    /* 006a1dba: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1dbc: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dbe: call 0x69b93c */ r_esp -= 4; W32(r_esp, 0x6a1dc3u); f_0069b93c();
    /* 006a1dc3: jmp 0x6a1dce */ goto L_006a1dce;
L_006a1dce:; BB(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1dba); r_esp += 4; return;
}

void f_006a1dc5(void)
{
    FN_ENTER(0x006a1dc5);
    /* 006a1dc5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1dc7: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dc9: call 0x6a1ac0 */ r_esp -= 4; W32(r_esp, 0x6a1dceu); f_006a1ac0();
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1dc5); r_esp += 4; return;
}

void f_006a1dce(void)
{
    FN_ENTER(0x006a1dce);
    /* 006a1dce: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd0: call 0x69d15c */ r_esp -= 4; W32(r_esp, 0x6a1dd5u); f_0069d15c();
    /* 006a1dd5: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1dd7: call 0x69d1bc */ r_esp -= 4; W32(r_esp, 0x6a1ddcu); f_0069d1bc();
    /* 006a1ddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ddf: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1de1: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a1de6u); f_00694390();
    /* 006a1de6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1de7: ret  */ FN_RET(0x006a1dce); r_esp += 4; return;
}

void f_006a1de8(void) /* sub_6A1DE8 */
{
    FN_ENTER(0x006a1de8);
    /* 006a1de8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1de9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a1dea: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1deb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006a1ded: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 006a1df0: lea eax, [ebp + 0x404] */ r_eax = (u32)(r_ebp+0x404u);
    /* 006a1df6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1df7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a1df8: call 0x7a90a8 */ r_esp -= 4; W32(r_esp, 0x6a1dfdu); f_007a90a8();
    /* 006a1dfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1dfe: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1e01: mov dword ptr [ebp + 0x3fc], eax */ W32((u32)(r_ebp+0x3fcu), r_eax);
    /* 006a1e07: call 0x7a8cd0 */ r_esp -= 4; W32(r_esp, 0x6a1e0cu); f_007a8cd0();
    /* 006a1e0c: push dword ptr [ebp + 0x3fc] */ { u32 v = R32((u32)(r_ebp+0x3fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006a1e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a1e13: mov dword ptr [ebp + 0x60], eax */ W32((u32)(r_ebp+0x60u), r_eax);
    /* 006a1e16: call 0x7a8cb8 */ r_esp -= 4; W32(r_esp, 0x6a1e1bu); f_007a8cb8();
    /* 006a1e1b: mov esi, eax */ r_esi = r_eax;
    /* 006a1e1d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006a1e20: fld dword ptr [ebp + 0x6b8] */ FPUSH(R_F32((u32)(r_ebp+0x6b8u)));
    /* 006a1e26: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1e29: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1e2b: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x6a1e30u); f_0082dcbc();
    /* 006a1e30: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006a1e33: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a1e35: fld dword ptr [ebp + 0x6b8] */ FPUSH(R_F32((u32)(r_ebp+0x6b8u)));
    /* 006a1e3b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a1e3d: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 006a1e43: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006a1e46: mov dword ptr [ebp + 0x310], 0 */ W32((u32)(r_ebp+0x310u), 0x0u);
    /* 006a1e50: mov ecx, esi */ r_ecx = r_esi;
    /* 006a1e52: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x6a1e57u); f_0082ddd8();
    /* 006a1e57: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 006a1e5a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006a1e5c: fld dword ptr [ebp + 0x404] */ FPUSH(R_F32((u32)(r_ebp+0x404u)));
    /* 006a1e62: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 006a1e65: fld dword ptr [ebp + 0x40c] */ FPUSH(R_F32((u32)(r_ebp+0x40cu)));
    /* 006a1e6b: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 006a1e6e: fld dword ptr [ebp + 0x6b8] */ FPUSH(R_F32((u32)(r_ebp+0x6b8u)));
    /* 006a1e74: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006a1e76: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006a1e78: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a1e7a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006a1e7c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006a1e7e: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
    /* 006a1e84: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006a1e86: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 006a1e88: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006a1e8a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006a1e8c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006a1e8e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006a1e90: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006a1e92: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006a1e93: jae 0x6a1ea4 */ if (!fC) goto L_006a1ea4;
L_006a1e95:; BB(0x006a1e95);
    /* 006a1e95: mov eax, dword ptr [ebp + 0x6c4] */ r_eax = R32((u32)(r_ebp+0x6c4u));
    /* 006a1e9b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1e9e: mov dword ptr [ebp + 0x6c4], eax */ W32((u32)(r_ebp+0x6c4u), r_eax);
L_006a1ea4:; BB(0x006a1ea4);
    /* 006a1ea4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1ea6: call 0x693844 */ r_esp -= 4; W32(r_esp, 0x6a1eabu); f_00693844();
    /* 006a1eab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a1ead: jne 0x6a1eb8 */ if (!fZ) goto L_006a1eb8;
L_006a1eaf:; BB(0x006a1eaf);
    /* 006a1eaf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1eb1: call 0x777724 */ r_esp -= 4; W32(r_esp, 0x6a1eb6u); f_00777724();
    /* 006a1eb6: jmp 0x6a1ec7 */ goto L_006a1ec7;
L_006a1eb8:; BB(0x006a1eb8);
    /* 006a1eb8: mov eax, dword ptr [ebp + 0x6c4] */ r_eax = R32((u32)(r_ebp+0x6c4u));
    /* 006a1ebe: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a1ec1: mov dword ptr [ebp + 0x6c4], eax */ W32((u32)(r_ebp+0x6c4u), r_eax);
L_006a1ec7:; BB(0x006a1ec7);
    /* 006a1ec7: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ecc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1ece: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ed3: call 0x69049c */ r_esp -= 4; W32(r_esp, 0x6a1ed8u); f_0069049c();
    /* 006a1ed8: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1edd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a1edf: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ee4: call 0x68ca4c */ r_esp -= 4; W32(r_esp, 0x6a1ee9u); f_0068ca4c();
    /* 006a1ee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a1eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a1eeb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006a1eec: ret  */ FN_RET(0x006a1de8); r_esp += 4; return;
}

void f_006a1ef0(void) /* sub_6A1EF0 */
{
    FN_ENTER(0x006a1ef0);
    /* 006a1ef0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ef1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ef2: mov edi, ecx */ r_edi = r_ecx;
    /* 006a1ef4: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 006a1efb: mov dword ptr [edi + 0x348], 2 */ W32((u32)(r_edi+0x348u), 0x2u);
    /* 006a1f05: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006a1f08: ja 0x6a2033 */ if ((!fC&&!fZ)) goto L_006a2033;
L_006a1f0e:; BB(0x006a1f0e);
    /* 006a1f0e: mov eax, dword ptr [eax*4 + 0x93d8c0] */ r_eax = R32((u32)(r_eax*4+0x93d8c0u));
    /* 006a1f15: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1ef0); r_esp += 4; return;
}

void f_006a1f17(void)
{
    FN_ENTER(0x006a1f17);
    /* 006a1f17: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f19: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f1b: call 0x69bdf0 */ r_esp -= 4; W32(r_esp, 0x6a1f20u); f_0069bdf0();
    /* 006a1f20: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f17); r_esp += 4; return;
}

void f_006a1f25(void)
{
    FN_ENTER(0x006a1f25);
    /* 006a1f25: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f27: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f29: call 0x69c6c0 */ r_esp -= 4; W32(r_esp, 0x6a1f2eu); f_0069c6c0();
    /* 006a1f2e: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f25); r_esp += 4; return;
}

void f_006a1f33(void)
{
    FN_ENTER(0x006a1f33);
    /* 006a1f33: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f35: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f37: call 0x69c988 */ r_esp -= 4; W32(r_esp, 0x6a1f3cu); f_0069c988();
    /* 006a1f3c: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f33); r_esp += 4; return;
}

void f_006a1f41(void)
{
    FN_ENTER(0x006a1f41);
    /* 006a1f41: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f43: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f45: call 0x69cd20 */ r_esp -= 4; W32(r_esp, 0x6a1f4au); f_0069cd20();
    /* 006a1f4a: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f41); r_esp += 4; return;
}

void f_006a1f4f(void)
{
    FN_ENTER(0x006a1f4f);
    /* 006a1f4f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f51: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f53: call 0x69d1e4 */ r_esp -= 4; W32(r_esp, 0x6a1f58u); f_0069d1e4();
    /* 006a1f58: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f4f); r_esp += 4; return;
}

void f_006a1f5d(void)
{
    FN_ENTER(0x006a1f5d);
    /* 006a1f5d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f5f: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f61: call 0x69d43c */ r_esp -= 4; W32(r_esp, 0x6a1f66u); f_0069d43c();
    /* 006a1f66: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f5d); r_esp += 4; return;
}

void f_006a1f6b(void)
{
    FN_ENTER(0x006a1f6b);
    /* 006a1f6b: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f6d: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f6f: call 0x69d8f4 */ r_esp -= 4; W32(r_esp, 0x6a1f74u); f_0069d8f4();
    /* 006a1f74: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f6b); r_esp += 4; return;
}

void f_006a1f79(void)
{
    FN_ENTER(0x006a1f79);
    /* 006a1f79: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f7b: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f7d: call 0x69dd60 */ r_esp -= 4; W32(r_esp, 0x6a1f82u); f_0069dd60();
    /* 006a1f82: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f79); r_esp += 4; return;
}

void f_006a1f87(void)
{
    FN_ENTER(0x006a1f87);
    /* 006a1f87: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f89: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f8b: call 0x69e15c */ r_esp -= 4; W32(r_esp, 0x6a1f90u); f_0069e15c();
    /* 006a1f90: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f87); r_esp += 4; return;
}

void f_006a1f95(void)
{
    FN_ENTER(0x006a1f95);
    /* 006a1f95: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1f97: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1f99: call 0x69e718 */ r_esp -= 4; W32(r_esp, 0x6a1f9eu); f_0069e718();
    /* 006a1f9e: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1f95); r_esp += 4; return;
}

void f_006a1fa3(void)
{
    FN_ENTER(0x006a1fa3);
    /* 006a1fa3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fa5: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fa7: call 0x69ebc8 */ r_esp -= 4; W32(r_esp, 0x6a1facu); f_0069ebc8();
    /* 006a1fac: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fa3); r_esp += 4; return;
}

void f_006a1fb1(void)
{
    FN_ENTER(0x006a1fb1);
    /* 006a1fb1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fb3: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fb5: call 0x69ef04 */ r_esp -= 4; W32(r_esp, 0x6a1fbau); f_0069ef04();
    /* 006a1fba: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fb1); r_esp += 4; return;
}

void f_006a1fbc(void)
{
    FN_ENTER(0x006a1fbc);
    /* 006a1fbc: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fbe: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fc0: call 0x69f148 */ r_esp -= 4; W32(r_esp, 0x6a1fc5u); f_0069f148();
    /* 006a1fc5: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fbc); r_esp += 4; return;
}

void f_006a1fc7(void)
{
    FN_ENTER(0x006a1fc7);
    /* 006a1fc7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fc9: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fcb: call 0x69f384 */ r_esp -= 4; W32(r_esp, 0x6a1fd0u); f_0069f384();
    /* 006a1fd0: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fc7); r_esp += 4; return;
}

void f_006a1fd2(void)
{
    FN_ENTER(0x006a1fd2);
    /* 006a1fd2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fd4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fd6: call 0x69f648 */ r_esp -= 4; W32(r_esp, 0x6a1fdbu); f_0069f648();
    /* 006a1fdb: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fd2); r_esp += 4; return;
}

void f_006a1fdd(void)
{
    FN_ENTER(0x006a1fdd);
    /* 006a1fdd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fdf: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fe1: call 0x69fe2c */ r_esp -= 4; W32(r_esp, 0x6a1fe6u); f_0069fe2c();
    /* 006a1fe6: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fdd); r_esp += 4; return;
}

void f_006a1fe8(void)
{
    FN_ENTER(0x006a1fe8);
    /* 006a1fe8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1fea: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1fec: call 0x6a0624 */ r_esp -= 4; W32(r_esp, 0x6a1ff1u); f_006a0624();
    /* 006a1ff1: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1fe8); r_esp += 4; return;
}

void f_006a1ff3(void)
{
    FN_ENTER(0x006a1ff3);
    /* 006a1ff3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a1ff5: mov ecx, edi */ r_ecx = r_edi;
    /* 006a1ff7: call 0x6a0994 */ r_esp -= 4; W32(r_esp, 0x6a1ffcu); f_006a0994();
    /* 006a1ffc: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1ff3); r_esp += 4; return;
}

void f_006a1ffe(void)
{
    FN_ENTER(0x006a1ffe);
    /* 006a1ffe: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2000: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2002: call 0x6a0eb8 */ r_esp -= 4; W32(r_esp, 0x6a2007u); f_006a0eb8();
    /* 006a2007: jmp 0x6a2033 */ goto L_006a2033;
L_006a2033:; BB(0x006a2033);
    /* 006a2033: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2035: call 0x6a20a4 */ r_esp -= 4; W32(r_esp, 0x6a203au); f_006a20a4();
    /* 006a203a: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 006a203d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a203e: mov ecx, edi */ r_ecx = r_edi;
    /* 006a2040: call 0x6942a4 */ r_esp -= 4; W32(r_esp, 0x6a2045u); f_006942a4();
    /* 006a2045: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a2047: je 0x6a205a */ if (fZ) goto L_006a205a;
L_006a2049:; BB(0x006a2049);
    /* 006a2049: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 006a204f: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a2054: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
L_006a205a:; BB(0x006a205a);
    /* 006a205a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a205b: lea ecx, [edi + 0x6b8] */ r_ecx = (u32)(r_edi+0x6b8u);
    /* 006a2061: call 0x697878 */ r_esp -= 4; W32(r_esp, 0x6a2066u); f_00697878();
    /* 006a2066: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a2067: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006a2069: mov ecx, edi */ r_ecx = r_edi;
    /* 006a206b: call 0x694390 */ r_esp -= 4; W32(r_esp, 0x6a2070u); f_00694390();
    /* 006a2070: movsx edx, word ptr [edi + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 006a2077: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 006a207d: mov ebx, dword ptr [edi + 0xb0] */ r_ebx = R32((u32)(r_edi+0xb0u));
    /* 006a2083: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a2085: fld dword ptr [eax + edx*8 + 8] */ FPUSH(R_F32((u32)(r_eax+r_edx*8+0x8u)));
    /* 006a2089: fmul dword ptr [edi + 0x6c0] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x6c0u));
    /* 006a208f: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 006a2095: or ebx, 0x100 */ {  u32 a = r_ebx; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a209b: mov dword ptr [edi + 0xb0], ebx */ W32((u32)(r_edi+0xb0u), r_ebx);
    /* 006a20a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006a20a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006a20a3: ret  */ FN_RET(0x006a1ffe); r_esp += 4; return;
}

