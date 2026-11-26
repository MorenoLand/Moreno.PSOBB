#include "protos.h"

void f_005d100c(void) /* sub_5D100C */
{
    FN_ENTER(0x005d100c);
    /* 005d100c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d100d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d100f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d1011: call 0x5d1030 */ r_esp -= 4; W32(r_esp, 0x5d1016u); f_005d1030();
    /* 005d1016: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d101a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d101c: jne 0x5d1022 */ if (!fZ) goto L_005d1022;
L_005d101e:; BB(0x005d101e);
    /* 005d101e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d101f: ret 4 */ FN_RET(0x005d100c); r_esp += 8; return;
L_005d1022:; BB(0x005d1022);
    /* 005d1022: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1023: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d1028u); f_005c2f74();
    /* 005d1028: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1029: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d102a: ret 4 */ FN_RET(0x005d100c); r_esp += 8; return;
}

void f_005d1030(void) /* sub_5D1030 */
{
    FN_ENTER(0x005d1030);
    /* 005d1030: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1031: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1033: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1035: push 0x8da568 */ { u32 v = 0x8da568u; r_esp -= 4; W32(r_esp, v); }
    /* 005d103a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1041: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d1048: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d104b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d104e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d1051: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d1054: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d1057: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d105a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d105d: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005d1060: mov dword ptr [ecx], 0xb0d230 */ W32((u32)(r_ecx), 0xb0d230u);
    /* 005d1066: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1068: je 0x5d1081 */ if (fZ) goto L_005d1081;
L_005d106a:; BB(0x005d106a);
    /* 005d106a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d106d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005d1071: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1076: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005d107a: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
L_005d1081:; BB(0x005d1081);
    /* 005d1081: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d1088: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d108du); f_008171e8();
    /* 005d108d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1090: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d1097: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1099: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d109a: ret  */ FN_RET(0x005d1030); r_esp += 4; return;
}

void f_005d109c(void) /* sub_5D109C */
{
    FN_ENTER(0x005d109c);
    /* 005d109c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d109d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d109f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d10a1: call 0x5d10c0 */ r_esp -= 4; W32(r_esp, 0x5d10a6u); f_005d10c0();
    /* 005d10a6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d10aa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d10ac: jne 0x5d10b2 */ if (!fZ) goto L_005d10b2;
L_005d10ae:; BB(0x005d10ae);
    /* 005d10ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d10af: ret 4 */ FN_RET(0x005d109c); r_esp += 8; return;
L_005d10b2:; BB(0x005d10b2);
    /* 005d10b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d10b3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d10b8u); f_005c2f74();
    /* 005d10b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d10b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d10ba: ret 4 */ FN_RET(0x005d109c); r_esp += 8; return;
}

void f_005d10c0(void) /* sub_5D10C0 */
{
    FN_ENTER(0x005d10c0);
    /* 005d10c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d10c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005d10c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d10c5: push 0x8da584 */ { u32 v = 0x8da584u; r_esp -= 4; W32(r_esp, v); }
    /* 005d10ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d10d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d10d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d10d8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d10db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d10de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d10e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d10e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d10e7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d10ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d10ed: mov dword ptr [ecx], 0xb0d240 */ W32((u32)(r_ecx), 0xb0d240u);
    /* 005d10f3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d10fa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5d10ffu); f_008171e8();
    /* 005d10ff: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1102: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d1109: mov esp, ebp */ r_esp = r_ebp;
    /* 005d110b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d110c: ret  */ FN_RET(0x005d10c0); r_esp += 4; return;
}

void f_005d1110(void) /* sub_5D1110 */
{
    FN_ENTER(0x005d1110);
    /* 005d1110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1111: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1115: push 0x8da5ac */ { u32 v = 0x8da5acu; r_esp -= 4; W32(r_esp, v); }
    /* 005d111a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d1128: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d112b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d112e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d1131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d1134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d1137: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005d113a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d113c: je 0x5d1190 */ if (fZ) goto L_005d1190;
L_005d113e:; BB(0x005d113e);
    /* 005d113e: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005d1142: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d1147: je 0x5d1190 */ if (fZ) goto L_005d1190;
L_005d1149:; BB(0x005d1149);
    /* 005d1149: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d114c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d114e: je 0x5d1190 */ if (fZ) goto L_005d1190;
L_005d1150:; BB(0x005d1150);
    /* 005d1150: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005d1157: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1159: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d115eu); f_005caba4();
    /* 005d115e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d115f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005d1162: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1164: je 0x5d1190 */ if (fZ) goto L_005d1190;
L_005d1166:; BB(0x005d1166);
    /* 005d1166: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005d116d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1174: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005d1177: movzx edx, word ptr [ebp + 0xc] */ r_edx = (u32)R16((u32)(r_ebp+0xcu));
    /* 005d117b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 005d117e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d1181: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1182: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1183: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1184: call 0x5d11a4 */ r_esp -= 4; W32(r_esp, 0x5d1189u); f_005d11a4();
    /* 005d1189: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005d1190:; BB(0x005d1190);
    /* 005d1190: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1193: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1196: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d119d: mov esp, ebp */ r_esp = r_ebp;
    /* 005d119f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d11a0: ret  */ FN_RET(0x005d1110); r_esp += 4; return;
}

void f_005d11a4(void) /* sub_5D11A4 */
{
    FN_ENTER(0x005d11a4);
    /* 005d11a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d11a5: mov edi, ecx */ r_edi = r_ecx;
    /* 005d11a7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d11ab: mov ecx, edi */ r_ecx = r_edi;
    /* 005d11ad: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d11b2u); f_008193cc();
    /* 005d11b2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005d11b6: mov dword ptr [edi], 0xb0d220 */ W32((u32)(r_edi), 0xb0d220u);
    /* 005d11bc: mov edx, dword ptr [0x9c2744] */ r_edx = R32((u32)(0x9c2744u));
    /* 005d11c2: mov dword ptr [edi + 0x40], 0x24 */ W32((u32)(r_edi+0x40u), 0x24u);
    /* 005d11c9: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005d11cc: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 005d11cf: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005d11d4: mov word ptr [edi + 0x44], ax */ W16((u32)(r_edi+0x44u), (u16)r_eax);
    /* 005d11d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d11da: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005d11dd: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 005d11e0: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005d11e4: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d11e9: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d11ed: mov eax, edi */ r_eax = r_edi;
    /* 005d11ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d11f0: ret 0xc */ FN_RET(0x005d11a4); r_esp += 16; return;
}

void f_005d11f4(void) /* sub_5D11F4 */
{
    FN_ENTER(0x005d11f4);
    /* 005d11f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d11f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d11f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d11f7: mov edi, ecx */ r_edi = r_ecx;
    /* 005d11f9: movzx eax, word ptr [edi + 0x44] */ r_eax = (u32)R16((u32)(r_edi+0x44u));
    /* 005d11fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d11fe: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d1203u); f_0068d5a8();
    /* 005d1203: mov esi, eax */ r_esi = r_eax;
    /* 005d1205: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1208: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d120a: je 0x5d12d9 */ if (fZ) goto L_005d12d9;
L_005d1210:; BB(0x005d1210);
    /* 005d1210: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005d1212: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 005d1215: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1216: mov ecx, esi */ r_ecx = r_esi;
    /* 005d1218: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d121b: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5d1221u); call_ind(t); }
    /* 005d1221: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 005d1224: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 005d1227: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 005d122a: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 005d122d: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 005d1230: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005d1233: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005d1236: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 005d1239: cmp edx, dword ptr [eax + 0x28] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d123c: je 0x5d12d9 */ if (fZ) goto L_005d12d9;
L_005d1242:; BB(0x005d1242);
    /* 005d1242: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1244: jne 0x5d129e */ if (!fZ) goto L_005d129e;
L_005d1246:; BB(0x005d1246);
    /* 005d1246: mov esi, dword ptr [edi + 0x38] */ r_esi = R32((u32)(r_edi+0x38u));
    /* 005d1249: lea edx, [esi - 1] */ r_edx = (u32)(r_esi+0xffffffffu);
    /* 005d124c: cmp edx, dword ptr [eax + 0x20] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d124f: je 0x5d125b */ if (fZ) goto L_005d125b;
L_005d1251:; BB(0x005d1251);
    /* 005d1251: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1254: mov dword ptr [edi + 0x38], esi */ W32((u32)(r_edi+0x38u), r_esi);
    /* 005d1257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1258: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d1259: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d125a: ret  */ FN_RET(0x005d11f4); r_esp += 4; return;
L_005d125b:; BB(0x005d125b);
    /* 005d125b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d125d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d125e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d125f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1260: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1262: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5d1267u); f_00814298();
    /* 005d1267: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d126a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005d126c:; BB(0x005d126c);
    /* 005d126c: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 005d126f: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 005d1272: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d1275: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1278: je 0x5d128a */ if (fZ) goto L_005d128a;
L_005d127a:; BB(0x005d127a);
    /* 005d127a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d127c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d127d: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 005d1280: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1281: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1282: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x5d1287u); f_0050bd5c();
    /* 005d1287: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d128a:; BB(0x005d128a);
    /* 005d128a: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d128d: jl 0x5d126c */ if ((fS!=fO)) goto L_005d126c;
L_005d128f:; BB(0x005d128f);
    /* 005d128f: add dword ptr [edi + 0x3c], 1 */ { u32 ad = (u32)(r_edi+0x3cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1293: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 005d129a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d129b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d129c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d129d: ret  */ FN_RET(0x005d11f4); r_esp += 4; return;
L_005d129e:; BB(0x005d129e);
    /* 005d129e: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 005d12a1: cmp edx, dword ptr [eax + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d12a4: je 0x5d12b0 */ if (fZ) goto L_005d12b0;
L_005d12a6:; BB(0x005d12a6);
    /* 005d12a6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d12a9: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 005d12ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d12ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d12ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d12af: ret  */ FN_RET(0x005d11f4); r_esp += 4; return;
L_005d12b0:; BB(0x005d12b0);
    /* 005d12b0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d12b2: jmp 0x5d12b7 */ goto L_005d12b7;
L_005d12b4:; BB(0x005d12b4);
    /* 005d12b4: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
L_005d12b7:; BB(0x005d12b7);
    /* 005d12b7: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 005d12ba: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d12bd: je 0x5d12cf */ if (fZ) goto L_005d12cf;
L_005d12bf:; BB(0x005d12bf);
    /* 005d12bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d12c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d12c2: lea edx, [edi + 0x28] */ r_edx = (u32)(r_edi+0x28u);
    /* 005d12c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d12c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d12c7: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x5d12ccu); f_0050bd5c();
    /* 005d12cc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005d12cf:; BB(0x005d12cf);
    /* 005d12cf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d12d2: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d12d5: jl 0x5d12b4 */ if ((fS!=fO)) goto L_005d12b4;
L_005d12d7:; BB(0x005d12d7);
    /* 005d12d7: jmp 0x5d12ea */ goto L_005d12ea;
L_005d12d9:; BB(0x005d12d9);
    /* 005d12d9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005d12dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d12e2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d12e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d12e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d12e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d12e9: ret  */ FN_RET(0x005d11f4); r_esp += 4; return;
L_005d12ea:; BB(0x005d12ea);
    /* 005d12ea: add dword ptr [edi + 0x3c], 1 */ { u32 ad = (u32)(r_edi+0x3cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d12ee: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 005d12f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d12f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d12f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d12f8: ret  */ FN_RET(0x005d11f4); r_esp += 4; return;
}

void f_005d12fc(void) /* sub_5D12FC */
{
    FN_ENTER(0x005d12fc);
    /* 005d12fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d12fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005d12ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1301: push 0x8da5c8 */ { u32 v = 0x8da5c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1306: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d130c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d130d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d1314: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1317: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d131a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d131d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d1320: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d1323: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005d1327: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d132a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d132d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d1330: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d1335u); f_008193cc();
    /* 005d1335: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d133c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d133f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1342: mov dword ptr [edx], 0xb0d230 */ W32((u32)(r_edx), 0xb0d230u);
    /* 005d1348: mov word ptr [edx + 0x24], ax */ W16((u32)(r_edx+0x24u), (u16)r_eax);
    /* 005d134c: mov dword ptr [edx + 0x20], 0xffffffff */ W32((u32)(r_edx+0x20u), 0xffffffffu);
    /* 005d1353: mov dword ptr [edx + 0x1c], 0 */ W32((u32)(r_edx+0x1cu), 0x0u);
    /* 005d135a: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5d135fu); f_005c3a8c();
    /* 005d135f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d1362: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005d1365: mov eax, edx */ r_eax = r_edx;
    /* 005d1367: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d136a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d1371: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1373: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1374: ret 8 */ FN_RET(0x005d12fc); r_esp += 12; return;
}

void f_005d1378(void) /* sub_5D1378 */
{
    FN_ENTER(0x005d1378);
    /* 005d1378: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1379: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d137a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d137b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d137e: mov edi, ecx */ r_edi = r_ecx;
    /* 005d1380: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5d1385u); f_005c3a8c();
    /* 005d1385: cmp eax, dword ptr [edi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1388: je 0x5d139e */ if (fZ) goto L_005d139e;
L_005d138a:; BB(0x005d138a);
    /* 005d138a: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005d138e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1393: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d1397: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d139a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d139b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d139c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d139d: ret  */ FN_RET(0x005d1378); r_esp += 4; return;
L_005d139e:; BB(0x005d139e);
    /* 005d139e: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 005d13a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d13a3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d13a8u); f_0068d5a8();
    /* 005d13a8: mov esi, eax */ r_esi = r_eax;
    /* 005d13aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d13ad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d13af: je 0x5d1448 */ if (fZ) goto L_005d1448;
L_005d13b5:; BB(0x005d13b5);
    /* 005d13b5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005d13b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d13b9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005d13bb: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 005d13bd: mov ecx, esi */ r_ecx = r_esi;
    /* 005d13bf: call dword ptr [ebx + 0x10c] */ { u32 t = R32((u32)(r_ebx+0x10cu)); r_esp -= 4; W32(r_esp, 0x5d13c5u); call_ind(t); }
    /* 005d13c5: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 005d13cb: cmp ebx, dword ptr [edi + 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d13ce: je 0x5d1403 */ if (fZ) goto L_005d1403;
L_005d13d0:; BB(0x005d13d0);
    /* 005d13d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d13d1: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 005d13d4: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5d13d9u); f_00807d8c();
    /* 005d13d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d13da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d13dc: je 0x5d13e6 */ if (fZ) goto L_005d13e6;
L_005d13de:; BB(0x005d13de);
    /* 005d13de: cmp ebx, dword ptr [esi + 0x3f0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d13e4: je 0x5d13ef */ if (fZ) goto L_005d13ef;
L_005d13e6:; BB(0x005d13e6);
    /* 005d13e6: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 005d13ed: jmp 0x5d1403 */ goto L_005d1403;
L_005d13ef:; BB(0x005d13ef);
    /* 005d13ef: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005d13f2: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 005d13f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d13f8: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5d13fdu); f_00509590();
    /* 005d13fd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1400: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
L_005d1403:; BB(0x005d1403);
    /* 005d1403: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1405: add esi, 0xdf8 */ {  u32 a = r_esi; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d140b: mov ecx, esi */ r_ecx = r_esi;
    /* 005d140d: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5d1412u); f_0069792c();
    /* 005d1412: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005d1415: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1417: je 0x5d143a */ if (fZ) goto L_005d143a;
L_005d1419:; BB(0x005d1419);
    /* 005d1419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d141b: je 0x5d1429 */ if (fZ) goto L_005d1429;
L_005d141d:; BB(0x005d141d);
    /* 005d141d: movzx eax, byte ptr [eax + 0xf3] */ r_eax = (u32)R8((u32)(r_eax+0xf3u));
    /* 005d1424: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1427: je 0x5d1441 */ if (fZ) goto L_005d1441;
L_005d1429:; BB(0x005d1429);
    /* 005d1429: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5d142eu); f_00508f48();
L_005d142e:; BB(0x005d142e);
    /* 005d142e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d1431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1432: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005d1435: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5d143au); f_00508db8();
L_005d143a:; BB(0x005d143a);
    /* 005d143a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d143d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d143e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d143f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1440: ret  */ FN_RET(0x005d1378); r_esp += 4; return;
L_005d1441:; BB(0x005d1441);
    /* 005d1441: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x5d1446u); f_00509580();
    /* 005d1446: jmp 0x5d142e */ goto L_005d142e;
L_005d1448:; BB(0x005d1448);
    /* 005d1448: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005d144c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1451: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d1455: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1458: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d1459: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d145a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d145b: ret  */ FN_RET(0x005d1378); r_esp += 4; return;
}

void f_005d145c(void) /* sub_5D145C */
{
    FN_ENTER(0x005d145c);
    /* 005d145c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d145d: mov ebp, esp */ r_ebp = r_esp;
    /* 005d145f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1461: push 0x8da5e4 */ { u32 v = 0x8da5e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1466: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d146c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d146d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d1474: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1477: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d147a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005d147d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005d1480: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005d1483: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 005d1487: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d148a: movzx edx, byte ptr [ebp + 0x10] */ r_edx = (u32)R8((u32)(r_ebp+0x10u));
    /* 005d148e: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 005d1491: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005d1494: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005d1497: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5d149cu); f_008193cc();
    /* 005d149c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d14a3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d14a6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005d14a9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005d14ac: lea ecx, [eax - 0x53] */ r_ecx = (u32)(r_eax+0xffffffadu);
    /* 005d14af: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 005d14b2: mov edx, dword ptr [ecx*4 + 0x92c060] */ r_edx = R32((u32)(r_ecx*4+0x92c060u));
    /* 005d14b9: mov ebx, dword ptr [ecx*4 + 0x92c040] */ r_ebx = R32((u32)(r_ecx*4+0x92c040u));
    /* 005d14c0: mov dword ptr [edi], 0xb0d240 */ W32((u32)(r_edi), 0xb0d240u);
    /* 005d14c6: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 005d14c9: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 005d14d0: mov dword ptr [edi + 0x24], ebx */ W32((u32)(r_edi+0x24u), r_ebx);
    /* 005d14d3: mov word ptr [edi + 0x28], si */ W16((u32)(r_edi+0x28u), (u16)r_esi);
    /* 005d14d7: mov byte ptr [edi + 0x2a], al */ W8((u32)(r_edi+0x2au), (u8)r_eax);
    /* 005d14da: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5d14dfu); f_005c3a8c();
    /* 005d14df: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 005d14e2: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d14e5: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d14e8: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d14eb: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005d14ee: mov eax, edx */ r_eax = r_edx;
    /* 005d14f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d14f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d14fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005d14fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d14fd: ret 0xc */ FN_RET(0x005d145c); r_esp += 16; return;
}

void f_005d1500(void) /* sub_5D1500 */
{
    FN_ENTER(0x005d1500);
    /* 005d1500: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1501: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1502: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1505: mov edi, ecx */ r_edi = r_ecx;
    /* 005d1507: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5d150cu); f_005c3a8c();
    /* 005d150c: cmp eax, dword ptr [edi + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d150f: jne 0x5d1525 */ if (!fZ) goto L_005d1525;
L_005d1511:; BB(0x005d1511);
    /* 005d1511: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005d1514: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1517: je 0x5d1538 */ if (fZ) goto L_005d1538;
L_005d1519:; BB(0x005d1519);
    /* 005d1519: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d151c: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005d151f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1523: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1524: ret  */ FN_RET(0x005d1500); r_esp += 4; return;
L_005d1525:; BB(0x005d1525);
    /* 005d1525: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005d1529: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d152e: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005d1532: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1535: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1536: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1537: ret  */ FN_RET(0x005d1500); r_esp += 4; return;
L_005d1538:; BB(0x005d1538);
    /* 005d1538: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005d153b: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5d1540u); f_005d6a3c();
    /* 005d1540: movzx eax, byte ptr [edi + 0x2a] */ r_eax = (u32)R8((u32)(r_edi+0x2au));
    /* 005d1544: movzx ebp, word ptr [edi + 0x28] */ r_ebp = (u32)R16((u32)(r_edi+0x28u));
    /* 005d1548: mov byte ptr [esp], 1 */ W8((u32)(r_esp), 0x1u);
    /* 005d154c: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 005d1551: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d1555: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005d1558: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1559: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d155a: call 0x5e26dc */ r_esp -= 4; W32(r_esp, 0x5d155fu); f_005e26dc();
    /* 005d155f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1562: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005d1565: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d1567: jle 0x5d1595 */ if ((fZ||fS!=fO)) goto L_005d1595;
L_005d1569:; BB(0x005d1569);
    /* 005d1569: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005d156c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d156f: je 0x5d1595 */ if (fZ) goto L_005d1595;
L_005d1571:; BB(0x005d1571);
    /* 005d1571: movzx eax, word ptr [edi + 0x28] */ r_eax = (u32)R16((u32)(r_edi+0x28u));
    /* 005d1575: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1576: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5d157bu); f_0068d5a8();
    /* 005d157b: mov ebp, eax */ r_ebp = r_eax;
    /* 005d157d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1580: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1582: je 0x5d1595 */ if (fZ) goto L_005d1595;
L_005d1584:; BB(0x005d1584);
    /* 005d1584: push dword ptr [ebp + 0x3ec] */ { u32 v = R32((u32)(r_ebp+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d158a: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5d158fu); f_00807d8c();
    /* 005d158f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1590: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1593: je 0x5d1599 */ if (fZ) goto L_005d1599;
L_005d1595:; BB(0x005d1595);
    /* 005d1595: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1597: jmp 0x5d1519 */ goto L_005d1519;
L_005d1599:; BB(0x005d1599);
    /* 005d1599: mov edx, dword ptr [edi + 0x24] */ r_edx = R32((u32)(r_edi+0x24u));
    /* 005d159c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d159e: jne 0x5d15b8 */ if (!fZ) goto L_005d15b8;
L_005d15a0:; BB(0x005d15a0);
    /* 005d15a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005d15a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d15a4: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d15aa: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d15ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d15ae: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5d15b3u); f_0050a984();
    /* 005d15b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d15b6: jmp 0x5d1595 */ goto L_005d1595;
L_005d15b8:; BB(0x005d15b8);
    /* 005d15b8: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d15bb: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005d15c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d15c2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5d15c7u); f_0050b510();
    /* 005d15c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d15ca: jmp 0x5d1595 */ goto L_005d1595;
}

void f_005d15cc(void) /* sub_5D15CC */
{
    FN_ENTER(0x005d15cc);
    /* 005d15cc: mov dword ptr [0xa8d9ac], 0x3f800000 */ W32((u32)(0xa8d9acu), 0x3f800000u);
    /* 005d15d6: mov dword ptr [0xa8d9b0], 0x41000000 */ W32((u32)(0xa8d9b0u), 0x41000000u);
    /* 005d15e0: mov dword ptr [0xa8d9b4], 0x3fc00000 */ W32((u32)(0xa8d9b4u), 0x3fc00000u);
    /* 005d15ea: ret  */ FN_RET(0x005d15cc); r_esp += 4; return;
}

void f_005d15ec(void) /* sub_5D15EC */
{
    FN_ENTER(0x005d15ec);
    /* 005d15ec: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d15ef: movzx edx, word ptr [esp + 0x18] */ r_edx = (u32)R16((u32)(r_esp+0x18u));
    /* 005d15f4: movsx eax, word ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 005d15f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d15fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d15fb: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5d1600u); f_007b9df0();
    /* 005d1600: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1603: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1605: je 0x5d161e */ if (fZ) goto L_005d161e;
L_005d1607:; BB(0x005d1607);
    /* 005d1607: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 005d160a: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 005d160d: mov eax, dword ptr [eax + 0x304] */ r_eax = R32((u32)(r_eax+0x304u));
    /* 005d1613: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005d1616: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005d161a: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
L_005d161e:; BB(0x005d161e);
    /* 005d161e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d1621: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1624: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5d1629u); f_0050b510();
    /* 005d1629: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d162c: ret  */ FN_RET(0x005d15ec); r_esp += 4; return;
}

void f_005d1630(void) /* sub_5D1630 */
{
    FN_ENTER(0x005d1630);
    /* 005d1630: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1631: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d1633: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d1635: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5d163au); f_005d1654();
    /* 005d163a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005d163e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1640: jne 0x5d1646 */ if (!fZ) goto L_005d1646;
L_005d1642:; BB(0x005d1642);
    /* 005d1642: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d1643: ret 4 */ FN_RET(0x005d1630); r_esp += 8; return;
L_005d1646:; BB(0x005d1646);
    /* 005d1646: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1647: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5d164cu); f_005c2f74();
    /* 005d164c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d164d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d164e: ret 4 */ FN_RET(0x005d1630); r_esp += 8; return;
}

void f_005d1654(void) /* sub_5D1654 */
{
    FN_ENTER(0x005d1654);
    /* 005d1654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1655: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1657: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1659: push 0x8da600 */ { u32 v = 0x8da600u; r_esp -= 4; W32(r_esp, v); }
    /* 005d165e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1665: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d166c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d166f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d1672: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005d1675: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005d1678: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005d167b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005d167e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1685: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d1688: mov dword ptr [ecx], 0xb0d2c0 */ W32((u32)(r_ecx), 0xb0d2c0u);
    /* 005d168e: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5d1693u); f_005d16b0();
    /* 005d1693: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005d169a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d169d: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5d16a2u); f_005c2e50();
    /* 005d16a2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d16a5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d16ac: mov esp, ebp */ r_esp = r_ebp;
    /* 005d16ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d16af: ret  */ FN_RET(0x005d1654); r_esp += 4; return;
}

void f_005d16b0(void) /* sub_5D16B0 */
{
    FN_ENTER(0x005d16b0);
    /* 005d16b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d16b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005d16b3: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
    /* 005d16b9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d16bb: je 0x5d16d6 */ if (fZ) goto L_005d16d6;
L_005d16bd:; BB(0x005d16bd);
    /* 005d16bd: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d16c0: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d16c6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005d16c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005d16ca: call dword ptr [eax + 0xb4] */ { u32 t = R32((u32)(r_eax+0xb4u)); r_esp -= 4; W32(r_esp, 0x5d16d0u); call_ind(t); }
    /* 005d16d0: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d16d6:; BB(0x005d16d6);
    /* 005d16d6: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d16d8: je 0x5d16f7 */ if (fZ) goto L_005d16f7;
L_005d16da:; BB(0x005d16da);
    /* 005d16da: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d16dd: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d16e3: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d16ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d16eb: call 0x5e6078 */ r_esp -= 4; W32(r_esp, 0x5d16f0u); f_005e6078();
    /* 005d16f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d16f1: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d16f7:; BB(0x005d16f7);
    /* 005d16f7: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d16f9: je 0x5d171c */ if (fZ) goto L_005d171c;
L_005d16fb:; BB(0x005d16fb);
    /* 005d16fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d16fd: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1700: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d1706: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d170d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d170e: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1713u); f_005e362c();
    /* 005d1713: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1716: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d171c:; BB(0x005d171c);
    /* 005d171c: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d171e: je 0x5d1748 */ if (fZ) goto L_005d1748;
L_005d1720:; BB(0x005d1720);
    /* 005d1720: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 005d1726: and eax, 0xffffffbf */ {  u32 a = r_eax; u32 b = 0xffffffbfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1729: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d172f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1731: je 0x5d1748 */ if (fZ) goto L_005d1748;
L_005d1733:; BB(0x005d1733);
    /* 005d1733: mov eax, dword ptr [edx + 0x8ac] */ r_eax = R32((u32)(r_edx+0x8acu));
    /* 005d1739: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d173c: mov dword ptr [edx + 0x8ac], eax */ W32((u32)(r_edx+0x8acu), r_eax);
    /* 005d1742: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d1748:; BB(0x005d1748);
    /* 005d1748: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d174d: je 0x5d1772 */ if (fZ) goto L_005d1772;
L_005d174f:; BB(0x005d174f);
    /* 005d174f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1751: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1756: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d175c: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d1763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1764: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1769u); f_005e362c();
    /* 005d1769: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d176c: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d1772:; BB(0x005d1772);
    /* 005d1772: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1777: je 0x5d179c */ if (fZ) goto L_005d179c;
L_005d1779:; BB(0x005d1779);
    /* 005d1779: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d177b: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1780: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d1786: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d178d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d178e: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1793u); f_005e362c();
    /* 005d1793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1796: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d179c:; BB(0x005d179c);
    /* 005d179c: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17a1: je 0x5d17c6 */ if (fZ) goto L_005d17c6;
L_005d17a3:; BB(0x005d17a3);
    /* 005d17a3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17a5: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d17aa: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d17b0: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d17b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d17b8: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d17bdu); f_005e362c();
    /* 005d17bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d17c0: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d17c6:; BB(0x005d17c6);
    /* 005d17c6: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17cb: je 0x5d17f0 */ if (fZ) goto L_005d17f0;
L_005d17cd:; BB(0x005d17cd);
    /* 005d17cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17cf: and eax, 0xffffbfff */ {  u32 a = r_eax; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d17d4: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d17da: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d17e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d17e2: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d17e7u); f_005e362c();
    /* 005d17e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d17ea: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d17f0:; BB(0x005d17f0);
    /* 005d17f0: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17f5: je 0x5d181a */ if (fZ) goto L_005d181a;
L_005d17f7:; BB(0x005d17f7);
    /* 005d17f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17f9: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d17fe: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d1804: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d180b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d180c: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1811u); f_005e362c();
    /* 005d1811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1814: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d181a:; BB(0x005d181a);
    /* 005d181a: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d181f: je 0x5d183e */ if (fZ) goto L_005d183e;
L_005d1821:; BB(0x005d1821);
    /* 005d1821: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1823: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1828: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d182e: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d1835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1836: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d183bu); f_005e362c();
    /* 005d183b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005d183e:; BB(0x005d183e);
    /* 005d183e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d183f: ret  */ FN_RET(0x005d16b0); r_esp += 4; return;
}

void f_005d1740(void)
{
    FN_ENTER(0x005d1740);
    /* 005d1740: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005d1742: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
    /* 005d1748: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d174d: je 0x5d1772 */ if (fZ) goto L_005d1772;
L_005d174f:; BB(0x005d174f);
    /* 005d174f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1751: and eax, 0xfffffeff */ {  u32 a = r_eax; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1756: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d175c: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d1763: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1764: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1769u); f_005e362c();
    /* 005d1769: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d176c: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d1772:; BB(0x005d1772);
    /* 005d1772: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1777: je 0x5d179c */ if (fZ) goto L_005d179c;
L_005d1779:; BB(0x005d1779);
    /* 005d1779: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d177b: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1780: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d1786: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d178d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d178e: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1793u); f_005e362c();
    /* 005d1793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1796: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d179c:; BB(0x005d179c);
    /* 005d179c: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17a1: je 0x5d17c6 */ if (fZ) goto L_005d17c6;
L_005d17a3:; BB(0x005d17a3);
    /* 005d17a3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17a5: and eax, 0xffffefff */ {  u32 a = r_eax; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d17aa: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d17b0: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d17b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d17b8: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d17bdu); f_005e362c();
    /* 005d17bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d17c0: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d17c6:; BB(0x005d17c6);
    /* 005d17c6: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17cb: je 0x5d17f0 */ if (fZ) goto L_005d17f0;
L_005d17cd:; BB(0x005d17cd);
    /* 005d17cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17cf: and eax, 0xffffbfff */ {  u32 a = r_eax; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d17d4: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d17da: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d17e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d17e2: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d17e7u); f_005e362c();
    /* 005d17e7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d17ea: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d17f0:; BB(0x005d17f0);
    /* 005d17f0: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d17f5: je 0x5d181a */ if (fZ) goto L_005d181a;
L_005d17f7:; BB(0x005d17f7);
    /* 005d17f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d17f9: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d17fe: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d1804: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d180b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d180c: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d1811u); f_005e362c();
    /* 005d1811: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1814: mov eax, dword ptr [ebx + 0x190] */ r_eax = R32((u32)(r_ebx+0x190u));
L_005d181a:; BB(0x005d181a);
    /* 005d181a: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d181f: je 0x5d183e */ if (fZ) goto L_005d183e;
L_005d1821:; BB(0x005d1821);
    /* 005d1821: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1823: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005d1828: mov dword ptr [ebx + 0x190], eax */ W32((u32)(r_ebx+0x190u), r_eax);
    /* 005d182e: movzx eax, word ptr [ebx + 0xe4] */ r_eax = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005d1835: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1836: call 0x5e362c */ r_esp -= 4; W32(r_esp, 0x5d183bu); f_005e362c();
    /* 005d183b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005d183e:; BB(0x005d183e);
    /* 005d183e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d183f: ret  */ FN_RET(0x005d1740); r_esp += 4; return;
}

void f_005d1840(void) /* sub_5D1840 */
{
    FN_ENTER(0x005d1840);
    /* 005d1840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1841: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d1843: movsx eax, word ptr [ebp + 0x18a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x18au));
    /* 005d184a: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d184d: je 0x5d1897 */ if (fZ) goto L_005d1897;
L_005d184f:; BB(0x005d184f);
    /* 005d184f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005d1852: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005d1854: call dword ptr [eax + 0xc4] */ { u32 t = R32((u32)(r_eax+0xc4u)); r_esp -= 4; W32(r_esp, 0x5d185au); call_ind(t); }
    /* 005d185a: movsx eax, word ptr [ebp + 0x18a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x18au));
    /* 005d1861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1862: call 0x5d79cc */ r_esp -= 4; W32(r_esp, 0x5d1867u); f_005d79cc();
    /* 005d1867: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1868: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005d186d: mov word ptr [ebp + 0x18a], ax */ W16((u32)(r_ebp+0x18au), (u16)r_eax);
    /* 005d1874: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1876: mov dword ptr [ebp + 0xfc], edx */ W32((u32)(r_ebp+0xfcu), r_edx);
    /* 005d187c: mov dword ptr [ebp + 0x24], edx */ W32((u32)(r_ebp+0x24u), r_edx);
    /* 005d187f: mov dword ptr [ebp + 0x1ac], edx */ W32((u32)(r_ebp+0x1acu), r_edx);
    /* 005d1885: mov dword ptr [ebp + 0x194], edx */ W32((u32)(r_ebp+0x194u), r_edx);
    /* 005d188b: mov dword ptr [ebp + 0x198], edx */ W32((u32)(r_ebp+0x198u), r_edx);
    /* 005d1891: mov dword ptr [ebp + 0x19c], edx */ W32((u32)(r_ebp+0x19cu), r_edx);
L_005d1897:; BB(0x005d1897);
    /* 005d1897: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1898: ret  */ FN_RET(0x005d1840); r_esp += 4; return;
}

void f_005d189c(void) /* sub_5D189C */
{
    FN_ENTER(0x005d189c);
    /* 005d189c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d189d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d189e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d18a1: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 005d18a5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d18a7: je 0x5d196e */ if (fZ) goto L_005d196e;
L_005d18ad:; BB(0x005d18ad);
    /* 005d18ad: movzx eax, byte ptr [ecx + 0xf2] */ r_eax = (u32)R8((u32)(r_ecx+0xf2u));
    /* 005d18b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d18b6: jne 0x5d18c1 */ if (!fZ) goto L_005d18c1;
L_005d18b8:; BB(0x005d18b8);
    /* 005d18b8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005d18ba: mov eax, 3 */ r_eax = 0x3u;
    /* 005d18bf: jmp 0x5d18f9 */ goto L_005d18f9;
L_005d18c1:; BB(0x005d18c1);
    /* 005d18c1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d18c4: jne 0x5d18ef */ if (!fZ) goto L_005d18ef;
L_005d18c6:; BB(0x005d18c6);
    /* 005d18c6: movzx ebx, byte ptr [ecx + 0xf3] */ r_ebx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005d18cd: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d18d0: jne 0x5d18de */ if (!fZ) goto L_005d18de;
L_005d18d2:; BB(0x005d18d2);
    /* 005d18d2: mov esi, 6 */ r_esi = 0x6u;
    /* 005d18d7: mov eax, 3 */ r_eax = 0x3u;
    /* 005d18dc: jmp 0x5d18f9 */ goto L_005d18f9;
L_005d18de:; BB(0x005d18de);
    /* 005d18de: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d18e1: jne 0x5d18f9 */ if (!fZ) goto L_005d18f9;
L_005d18e3:; BB(0x005d18e3);
    /* 005d18e3: mov esi, 3 */ r_esi = 0x3u;
    /* 005d18e8: mov eax, 3 */ r_eax = 0x3u;
    /* 005d18ed: jmp 0x5d18f9 */ goto L_005d18f9;
L_005d18ef:; BB(0x005d18ef);
    /* 005d18ef: mov esi, 3 */ r_esi = 0x3u;
    /* 005d18f4: mov eax, 3 */ r_eax = 0x3u;
L_005d18f9:; BB(0x005d18f9);
    /* 005d18f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005d18fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005d18fd: jle 0x5d196e */ if ((fZ||fS!=fO)) goto L_005d196e;
L_005d18ff:; BB(0x005d18ff);
    /* 005d18ff: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 005d1903: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d1905: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 005d1909: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 005d190d: mov ebp, eax */ r_ebp = r_eax;
    /* 005d190f: mov edi, edx */ r_edi = r_edx;
L_005d1911:; BB(0x005d1911);
    /* 005d1911: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005d1919: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d191c: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005d1921: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 005d1925: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1927: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 005d192c: movsx ecx, byte ptr [edi] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 005d192f: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 005d1933: movzx ecx, byte ptr [edi + 1] */ r_ecx = (u32)R8((u32)(r_edi+0x1u));
    /* 005d1937: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 005d193c: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 005d193f: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 005d1943: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005d1947: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1948: movzx ecx, word ptr [ecx + 0xe4] */ r_ecx = (u32)R16((u32)(r_ecx+0xe4u));
    /* 005d194f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1951: call 0x6e1d40 */ r_esp -= 4; W32(r_esp, 0x5d1956u); f_006e1d40();
    /* 005d1956: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1959: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d195c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005d195f: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005d1962: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1964: jl 0x5d1911 */ if ((fS!=fO)) goto L_005d1911;
L_005d1966:; BB(0x005d1966);
    /* 005d1966: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005d196a: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
L_005d196e:; BB(0x005d196e);
    /* 005d196e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d1972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d1973: ret 4 */ FN_RET(0x005d189c); r_esp += 8; return;
}

void f_005d1978(void) /* sub_5D1978 */
{
    FN_ENTER(0x005d1978);
    /* 005d1978: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1979: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d197a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d197b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d197e: mov edx, ecx */ r_edx = r_ecx;
    /* 005d1980: movzx eax, byte ptr [edx + 0xf2] */ r_eax = (u32)R8((u32)(r_edx+0xf2u));
    /* 005d1987: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1989: jne 0x5d198f */ if (!fZ) goto L_005d198f;
L_005d198b:; BB(0x005d198b);
    /* 005d198b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d198d: jmp 0x5d19b3 */ goto L_005d19b3;
L_005d198f:; BB(0x005d198f);
    /* 005d198f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1992: jne 0x5d19ae */ if (!fZ) goto L_005d19ae;
L_005d1994:; BB(0x005d1994);
    /* 005d1994: movzx eax, byte ptr [edx + 0xf3] */ r_eax = (u32)R8((u32)(r_edx+0xf3u));
    /* 005d199b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d199e: jne 0x5d19a7 */ if (!fZ) goto L_005d19a7;
L_005d19a0:; BB(0x005d19a0);
    /* 005d19a0: mov eax, 6 */ r_eax = 0x6u;
    /* 005d19a5: jmp 0x5d19b3 */ goto L_005d19b3;
L_005d19a7:; BB(0x005d19a7);
    /* 005d19a7: mov eax, 3 */ r_eax = 0x3u;
    /* 005d19ac: jmp 0x5d19b3 */ goto L_005d19b3;
L_005d19ae:; BB(0x005d19ae);
    /* 005d19ae: mov eax, 3 */ r_eax = 0x3u;
L_005d19b3:; BB(0x005d19b3);
    /* 005d19b3: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005d19bb: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 005d19c0: mov esi, eax */ r_esi = r_eax;
    /* 005d19c2: mov edi, edx */ r_edi = r_edx;
    /* 005d19c4: mov word ptr [esp], cx */ W16((u32)(r_esp), (u16)r_ecx);
    /* 005d19c8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005d19ca: mov word ptr [esp + 2], cx */ W16((u32)(r_esp+0x2u), (u16)r_ecx);
    /* 005d19cf: lea ecx, [eax + 3] */ r_ecx = (u32)(r_eax+0x3u);
    /* 005d19d2: mov ebx, ecx */ r_ebx = r_ecx;
L_005d19d4:; BB(0x005d19d4);
    /* 005d19d4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005d19d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d19d8: movzx eax, word ptr [edi + 0xe4] */ r_eax = (u32)R16((u32)(r_edi+0xe4u));
    /* 005d19df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d19e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d19e1: call 0x6e1d40 */ r_esp -= 4; W32(r_esp, 0x5d19e6u); f_006e1d40();
    /* 005d19e6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d19e9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005d19ec: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d19ee: jg 0x5d19d4 */ if ((!fZ&&fS==fO)) goto L_005d19d4;
L_005d19f0:; BB(0x005d19f0);
    /* 005d19f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d19f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d19f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d19f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d19f6: ret  */ FN_RET(0x005d1978); r_esp += 4; return;
}

void f_005d19f8(void) /* sub_5D19F8 */
{
    FN_ENTER(0x005d19f8);
    /* 005d19f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d19f9: mov edi, ecx */ r_edi = r_ecx;
    /* 005d19fb: mov eax, dword ptr [edi + 0xfc] */ r_eax = R32((u32)(r_edi+0xfcu));
    /* 005d1a01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1a03: je 0x5d1a07 */ if (fZ) goto L_005d1a07;
L_005d1a05:; BB(0x005d1a05);
    /* 005d1a05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1a06: ret  */ FN_RET(0x005d19f8); r_esp += 4; return;
L_005d1a07:; BB(0x005d1a07);
    /* 005d1a07: movsx eax, word ptr [edi + 0x18a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x18au));
    /* 005d1a0e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d1a11: je 0x5d1a05 */ if (fZ) goto L_005d1a05;
L_005d1a13:; BB(0x005d1a13);
    /* 005d1a13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a14: call 0x5d783c */ r_esp -= 4; W32(r_esp, 0x5d1a19u); f_005d783c();
    /* 005d1a19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1a1a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005d1a1d: jne 0x5d1a05 */ if (!fZ) goto L_005d1a05;
L_005d1a1f:; BB(0x005d1a1f);
    /* 005d1a1f: movsx eax, word ptr [edi + 0x18a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x18au));
    /* 005d1a26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a27: call 0x5d7af0 */ r_esp -= 4; W32(r_esp, 0x5d1a2cu); f_005d7af0();
    /* 005d1a2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1a2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1a2f: je 0x5d1a05 */ if (fZ) goto L_005d1a05;
L_005d1a31:; BB(0x005d1a31);
    /* 005d1a31: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005d1a33: mov dword ptr [edi + 0xfc], edx */ W32((u32)(r_edi+0xfcu), r_edx);
    /* 005d1a39: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005d1a3c: mov dword ptr [edi + 0x1ac], edx */ W32((u32)(r_edi+0x1acu), r_edx);
    /* 005d1a42: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005d1a45: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 005d1a48: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005d1a4b: mov dword ptr [edi + 0x194], edx */ W32((u32)(r_edi+0x194u), r_edx);
    /* 005d1a51: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005d1a54: mov dword ptr [edi + 0x198], edx */ W32((u32)(r_edi+0x198u), r_edx);
    /* 005d1a5a: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 005d1a5d: mov dword ptr [edi + 0x19c], eax */ W32((u32)(r_edi+0x19cu), r_eax);
    /* 005d1a63: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005d1a65: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1a67: call dword ptr [eax + 0xc0] */ { u32 t = R32((u32)(r_eax+0xc0u)); r_esp -= 4; W32(r_esp, 0x5d1a6du); call_ind(t); }
    /* 005d1a6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1a6e: ret  */ FN_RET(0x005d19f8); r_esp += 4; return;
}

void f_005d1a70(void) /* sub_5D1A70 */
{
    FN_ENTER(0x005d1a70);
    /* 005d1a70: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005d1a77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a78: call 0x5d1a80 */ r_esp -= 4; W32(r_esp, 0x5d1a7du); f_005d1a80();
    /* 005d1a7d: ret  */ FN_RET(0x005d1a70); r_esp += 4; return;
}

void f_005d1a80(void) /* sub_5D1A80 */
{
    FN_ENTER(0x005d1a80);
    /* 005d1a80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1a81: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1a84: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d1a86: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005d1a89: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x5d1a8eu); f_005d6a3c();
    /* 005d1a8e: movzx eax, byte ptr [esp + 0x1c] */ r_eax = (u32)R8((u32)(r_esp+0x1cu));
    /* 005d1a93: movzx edx, byte ptr [ebp + 0xf2] */ r_edx = (u32)R8((u32)(r_ebp+0xf2u));
    /* 005d1a9a: mov byte ptr [esp], dl */ W8((u32)(r_esp), (u8)r_edx);
    /* 005d1a9d: mov byte ptr [esp + 1], al */ W8((u32)(r_esp+0x1u), (u8)r_eax);
    /* 005d1aa1: movzx eax, byte ptr [ebp + 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005d1aa8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1aab: je 0x5d1b37 */ if (fZ) goto L_005d1b37;
L_005d1ab1:; BB(0x005d1ab1);
    /* 005d1ab1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005d1ab3:; BB(0x005d1ab3);
    /* 005d1ab3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1ab5: je 0x5d1b1c */ if (fZ) goto L_005d1b1c;
L_005d1ab7:; BB(0x005d1ab7);
    /* 005d1ab7: cmp eax, 0x95 */ {  u32 a = r_eax; u32 b = 0x95u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1abc: jne 0x5d1ae5 */ if (!fZ) goto L_005d1ae5;
L_005d1abe:; BB(0x005d1abe);
    /* 005d1abe: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005d1ac4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1ac6: je 0x5d1adf */ if (fZ) goto L_005d1adf;
L_005d1ac8:; BB(0x005d1ac8);
    /* 005d1ac8: movzx edx, word ptr [edx + 0x1c] */ r_edx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005d1acc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d1ace: jl 0x5d1ad5 */ if ((fS!=fO)) goto L_005d1ad5;
L_005d1ad0:; BB(0x005d1ad0);
    /* 005d1ad0: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1ad3: jle 0x5d1ad7 */ if ((fZ||fS!=fO)) goto L_005d1ad7;
L_005d1ad5:; BB(0x005d1ad5);
    /* 005d1ad5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005d1ad7:; BB(0x005d1ad7);
    /* 005d1ad7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1ad9: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d1add: jmp 0x5d1b20 */ goto L_005d1b20;
L_005d1adf:; BB(0x005d1adf);
    /* 005d1adf: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d1ae3: jmp 0x5d1b20 */ goto L_005d1b20;
L_005d1ae5:; BB(0x005d1ae5);
    /* 005d1ae5: cmp eax, 0x9b */ {  u32 a = r_eax; u32 b = 0x9bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1aea: jne 0x5d1b16 */ if (!fZ) goto L_005d1b16;
L_005d1aec:; BB(0x005d1aec);
    /* 005d1aec: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005d1af2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1af4: je 0x5d1b10 */ if (fZ) goto L_005d1b10;
L_005d1af6:; BB(0x005d1af6);
    /* 005d1af6: movsx edx, byte ptr [edx + 0x960] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+0x960u));
    /* 005d1afd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005d1aff: jl 0x5d1b06 */ if ((fS!=fO)) goto L_005d1b06;
L_005d1b01:; BB(0x005d1b01);
    /* 005d1b01: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1b04: jle 0x5d1b08 */ if ((fZ||fS!=fO)) goto L_005d1b08;
L_005d1b06:; BB(0x005d1b06);
    /* 005d1b06: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_005d1b08:; BB(0x005d1b08);
    /* 005d1b08: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005d1b0a: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d1b0e: jmp 0x5d1b20 */ goto L_005d1b20;
L_005d1b10:; BB(0x005d1b10);
    /* 005d1b10: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d1b14: jmp 0x5d1b20 */ goto L_005d1b20;
L_005d1b16:; BB(0x005d1b16);
    /* 005d1b16: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
    /* 005d1b1a: jmp 0x5d1b20 */ goto L_005d1b20;
L_005d1b1c:; BB(0x005d1b1c);
    /* 005d1b1c: mov byte ptr [esp + 2], al */ W8((u32)(r_esp+0x2u), (u8)r_eax);
L_005d1b20:; BB(0x005d1b20);
    /* 005d1b20: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d1b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b24: call 0x5d7868 */ r_esp -= 4; W32(r_esp, 0x5d1b29u); f_005d7868();
    /* 005d1b29: mov word ptr [ebp + 0x18a], ax */ W16((u32)(r_ebp+0x18au), (u16)r_eax);
    /* 005d1b30: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d1b33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1b34: ret 4 */ FN_RET(0x005d1a80); r_esp += 8; return;
L_005d1b37:; BB(0x005d1b37);
    /* 005d1b37: movzx edx, byte ptr [esp + 1] */ r_edx = (u32)R8((u32)(r_esp+0x1u));
    /* 005d1b3c: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1b3f: jne 0x5d1ab1 */ if (!fZ) goto L_005d1ab1;
L_005d1b45:; BB(0x005d1b45);
    /* 005d1b45: mov edx, 1 */ r_edx = 0x1u;
    /* 005d1b4a: jmp 0x5d1ab3 */ goto L_005d1ab3;
}

void f_005d1b50(void) /* sub_5D1B50 */
{
    FN_ENTER(0x005d1b50);
    /* 005d1b50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b51: mov ebp, esp */ r_ebp = r_esp;
    /* 005d1b53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b55: push 0x8da636 */ { u32 v = 0x8da636u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005d1b60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1b61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005d1b68: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1b6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005d1b6e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005d1b71: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005d1b74: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005d1b77: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d1b7a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d1b7d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005d1b80: call 0x5c3a94 */ r_esp -= 4; W32(r_esp, 0x5d1b85u); f_005c3a94();
    /* 005d1b85: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005d1b8c: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d1b8f: mov dword ptr [ecx], 0xb0d2c0 */ W32((u32)(r_ecx), 0xb0d2c0u);
    /* 005d1b95: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
    /* 005d1b9f: mov eax, dword ptr [0x9c274c] */ r_eax = R32((u32)(0x9c274cu));
    /* 005d1ba4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005d1ba7: call 0x5d1c70 */ r_esp -= 4; W32(r_esp, 0x5d1bacu); f_005d1c70();
    /* 005d1bac: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d1baf: mov edi, dword ptr [eax + 0xdc] */ r_edi = R32((u32)(r_eax+0xdcu));
    /* 005d1bb5: mov dword ptr [eax + 0x1a0], 0 */ W32((u32)(r_eax+0x1a0u), 0x0u);
    /* 005d1bbf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005d1bc1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 005d1bc4: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005d1bc6: mov byte ptr [eax + 0x188], dl */ W8((u32)(r_eax+0x188u), (u8)r_edx);
    /* 005d1bcc: mov byte ptr [eax + 0x189], dl */ W8((u32)(r_eax+0x189u), (u8)r_edx);
    /* 005d1bd2: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 005d1bd7: mov word ptr [eax + 0x18a], si */ W16((u32)(r_eax+0x18au), (u16)r_esi);
    /* 005d1bde: mov dword ptr [eax + 0x190], edx */ W32((u32)(r_eax+0x190u), r_edx);
    /* 005d1be4: mov dword ptr [eax + 0x1a4], edx */ W32((u32)(r_eax+0x1a4u), r_edx);
    /* 005d1bea: mov dword ptr [eax + 0x1a8], edx */ W32((u32)(r_eax+0x1a8u), r_edx);
    /* 005d1bf0: or edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 005d1bf3: mov dword ptr [eax + 0xdc], edi */ W32((u32)(r_eax+0xdcu), r_edi);
    /* 005d1bf9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5d1bfeu); f_005caba4();
    /* 005d1bfe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d1c01: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1c04: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005d1c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1c09: je 0x5d1c66 */ if (fZ) goto L_005d1c66;
L_005d1c0b:; BB(0x005d1c0b);
    /* 005d1c0b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005d1c12: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005d1c19: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005d1c1c: mov ecx, eax */ r_ecx = r_eax;
    /* 005d1c1e: call 0x5cab88 */ r_esp -= 4; W32(r_esp, 0x5d1c23u); f_005cab88();
    /* 005d1c23: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005d1c2a:; BB(0x005d1c2a);
    /* 005d1c2a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005d1c2d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005d1c30: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005d1c33: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005d1c36: mov dword ptr [eax + 0x18c], edx */ W32((u32)(r_eax+0x18cu), r_edx);
    /* 005d1c3c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1c3e: mov dword ptr [eax + 0x194], ecx */ W32((u32)(r_eax+0x194u), r_ecx);
    /* 005d1c44: mov dword ptr [eax + 0x1ac], ecx */ W32((u32)(r_eax+0x1acu), r_ecx);
    /* 005d1c4a: mov dword ptr [eax + 0x198], ecx */ W32((u32)(r_eax+0x198u), r_ecx);
    /* 005d1c50: mov dword ptr [eax + 0x19c], ecx */ W32((u32)(r_eax+0x19cu), r_ecx);
    /* 005d1c56: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005d1c59: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005d1c60: mov esp, ebp */ r_esp = r_ebp;
    /* 005d1c62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1c63: ret 8 */ FN_RET(0x005d1b50); r_esp += 12; return;
L_005d1c66:; BB(0x005d1c66);
    /* 005d1c66: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1c68: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005d1c6b: jmp 0x5d1c2a */ goto L_005d1c2a;
}

void f_005d1c70(void) /* sub_5D1C70 */
{
    FN_ENTER(0x005d1c70);
    /* 005d1c70: lea edx, [ecx + 0x100] */ r_edx = (u32)(r_ecx+0x100u);
    /* 005d1c76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1c78: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d1c7a: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d1c7d: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d1c80: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005d1c83: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005d1c86: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005d1c89: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005d1c8c: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005d1c8f: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005d1c92: lea edx, [ecx + 0x124] */ r_edx = (u32)(r_ecx+0x124u);
    /* 005d1c98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1c9a: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d1c9c: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d1c9f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d1ca2: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005d1ca5: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005d1ca8: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005d1cab: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005d1cae: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005d1cb1: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005d1cb4: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005d1cb7: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005d1cba: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 005d1cbd: lea edx, [ecx + 0x154] */ r_edx = (u32)(r_ecx+0x154u);
    /* 005d1cc3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005d1cc5: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005d1cc7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005d1cca: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005d1ccd: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005d1cd0: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005d1cd3: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005d1cd6: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005d1cd9: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005d1cdc: add ecx, 0x174 */ {  u32 a = r_ecx; u32 b = 0x174u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005d1ce2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1ce4: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 005d1ce6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005d1ce9: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 005d1cec: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 005d1cef: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 005d1cf2: ret  */ FN_RET(0x005d1c70); r_esp += 4; return;
}

void f_005d1cf4(void) /* sub_5D1CF4 */
{
    FN_ENTER(0x005d1cf4);
    /* 005d1cf4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1cf5: mov edi, ecx */ r_edi = r_ecx;
    /* 005d1cf7: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005d1cfd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1cff: je 0x5d1d60 */ if (fZ) goto L_005d1d60;
L_005d1d01:; BB(0x005d1d01);
    /* 005d1d01: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1d03: call 0x5c3f7c */ r_esp -= 4; W32(r_esp, 0x5d1d08u); f_005c3f7c();
    /* 005d1d08: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d0a: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1d0c: call 0x5c4f94 */ r_esp -= 4; W32(r_esp, 0x5d1d11u); f_005c4f94();
    /* 005d1d11: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d13: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005d1d19: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005d1d1b: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1d1e: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 005d1d24: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1d26: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x5d1d29u); call_ind(t); }
    /* 005d1d29: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x5d1d2eu); f_0080a640();
    /* 005d1d2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1d30: jne 0x5d1d4f */ if (!fZ) goto L_005d1d4f;
L_005d1d32:; BB(0x005d1d32);
    /* 005d1d32: mov eax, dword ptr [edi + 0x190] */ r_eax = R32((u32)(r_edi+0x190u));
    /* 005d1d38: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1d3a: jne 0x5d1d4f */ if (!fZ) goto L_005d1d4f;
L_005d1d3c:; BB(0x005d1d3c);
    /* 005d1d3c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1d3f: mov dword ptr [edi + 0x190], eax */ W32((u32)(r_edi+0x190u), r_eax);
    /* 005d1d45: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005d1d47: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1d49: call dword ptr [eax + 0xb0] */ { u32 t = R32((u32)(r_eax+0xb0u)); r_esp -= 4; W32(r_esp, 0x5d1d4fu); call_ind(t); }
L_005d1d4f:; BB(0x005d1d4f);
    /* 005d1d4f: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1d51: call 0x5d1d64 */ r_esp -= 4; W32(r_esp, 0x5d1d56u); f_005d1d64();
    /* 005d1d56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005d1d58: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1d5a: call dword ptr [eax + 0xa8] */ { u32 t = R32((u32)(r_eax+0xa8u)); r_esp -= 4; W32(r_esp, 0x5d1d60u); call_ind(t); }
L_005d1d60:; BB(0x005d1d60);
    /* 005d1d60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d1d61: ret  */ FN_RET(0x005d1cf4); r_esp += 4; return;
}

void f_005d1d64(void) /* sub_5D1D64 */
{
    FN_ENTER(0x005d1d64);
    /* 005d1d64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d65: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005d1d67: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
    /* 005d1d6d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1d6f: je 0x5d1d92 */ if (fZ) goto L_005d1d92;
L_005d1d71:; BB(0x005d1d71);
    /* 005d1d71: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1d73: jne 0x5d1d92 */ if (!fZ) goto L_005d1d92;
L_005d1d75:; BB(0x005d1d75);
    /* 005d1d75: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1d78: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1d7e: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1d85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d86: call 0x5e6094 */ r_esp -= 4; W32(r_esp, 0x5d1d8bu); f_005e6094();
    /* 005d1d8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005d1d8c: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1d92:; BB(0x005d1d92);
    /* 005d1d92: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1d94: je 0x5d1dbb */ if (fZ) goto L_005d1dbb;
L_005d1d96:; BB(0x005d1d96);
    /* 005d1d96: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1d98: jne 0x5d1dbb */ if (!fZ) goto L_005d1dbb;
L_005d1d9a:; BB(0x005d1d9a);
    /* 005d1d9a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1d9c: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1d9f: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1da5: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1dac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1dad: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1db2u); f_005e3600();
    /* 005d1db2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1db5: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1dbb:; BB(0x005d1dbb);
    /* 005d1dbb: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1dbd: je 0x5d1de7 */ if (fZ) goto L_005d1de7;
L_005d1dbf:; BB(0x005d1dbf);
    /* 005d1dbf: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005d1dc1: jne 0x5d1de7 */ if (!fZ) goto L_005d1de7;
L_005d1dc3:; BB(0x005d1dc3);
    /* 005d1dc3: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 005d1dc9: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1dcc: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1dd2: mov eax, dword ptr [edx + 0x8ac] */ r_eax = R32((u32)(r_edx+0x8acu));
    /* 005d1dd8: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1ddb: mov dword ptr [edx + 0x8ac], eax */ W32((u32)(r_edx+0x8acu), r_eax);
    /* 005d1de1: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1de7:; BB(0x005d1de7);
    /* 005d1de7: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1dec: je 0x5d1e18 */ if (fZ) goto L_005d1e18;
L_005d1dee:; BB(0x005d1dee);
    /* 005d1dee: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1df3: jne 0x5d1e18 */ if (!fZ) goto L_005d1e18;
L_005d1df5:; BB(0x005d1df5);
    /* 005d1df5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1df7: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1dfc: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1e02: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1e09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e0a: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1e0fu); f_005e3600();
    /* 005d1e0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1e12: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1e18:; BB(0x005d1e18);
    /* 005d1e18: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e1d: je 0x5d1e49 */ if (fZ) goto L_005d1e49;
L_005d1e1f:; BB(0x005d1e1f);
    /* 005d1e1f: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e24: jne 0x5d1e49 */ if (!fZ) goto L_005d1e49;
L_005d1e26:; BB(0x005d1e26);
    /* 005d1e26: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e28: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1e2d: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1e33: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e3b: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1e40u); f_005e3600();
    /* 005d1e40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1e43: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1e49:; BB(0x005d1e49);
    /* 005d1e49: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e4e: je 0x5d1e7a */ if (fZ) goto L_005d1e7a;
L_005d1e50:; BB(0x005d1e50);
    /* 005d1e50: test eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e55: jne 0x5d1e7a */ if (!fZ) goto L_005d1e7a;
L_005d1e57:; BB(0x005d1e57);
    /* 005d1e57: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e59: or eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1e5e: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1e64: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1e6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e6c: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1e71u); f_005e3600();
    /* 005d1e71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1e74: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1e7a:; BB(0x005d1e7a);
    /* 005d1e7a: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e7f: je 0x5d1eab */ if (fZ) goto L_005d1eab;
L_005d1e81:; BB(0x005d1e81);
    /* 005d1e81: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1e86: jne 0x5d1eab */ if (!fZ) goto L_005d1eab;
L_005d1e88:; BB(0x005d1e88);
    /* 005d1e88: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e8a: or eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1e8f: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1e95: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1e9d: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1ea2u); f_005e3600();
    /* 005d1ea2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1ea5: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1eab:; BB(0x005d1eab);
    /* 005d1eab: test eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1eb0: je 0x5d1edc */ if (fZ) goto L_005d1edc;
L_005d1eb2:; BB(0x005d1eb2);
    /* 005d1eb2: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1eb7: jne 0x5d1edc */ if (!fZ) goto L_005d1edc;
L_005d1eb9:; BB(0x005d1eb9);
    /* 005d1eb9: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1ebe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ec0: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1ec6: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1ecd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ece: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1ed3u); f_005e3600();
    /* 005d1ed3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005d1ed6: mov eax, dword ptr [ebp + 0x190] */ r_eax = R32((u32)(r_ebp+0x190u));
L_005d1edc:; BB(0x005d1edc);
    /* 005d1edc: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1ee1: je 0x5d1f07 */ if (fZ) goto L_005d1f07;
L_005d1ee3:; BB(0x005d1ee3);
    /* 005d1ee3: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005d1ee8: jne 0x5d1f07 */ if (!fZ) goto L_005d1f07;
L_005d1eea:; BB(0x005d1eea);
    /* 005d1eea: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005d1eef: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005d1ef1: mov dword ptr [ebp + 0x190], eax */ W32((u32)(r_ebp+0x190u), r_eax);
    /* 005d1ef7: movzx eax, word ptr [ebp + 0xe4] */ r_eax = (u32)R16((u32)(r_ebp+0xe4u));
    /* 005d1efe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1eff: call 0x5e3600 */ r_esp -= 4; W32(r_esp, 0x5d1f04u); f_005e3600();
    /* 005d1f04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005d1f07:; BB(0x005d1f07);
    /* 005d1f07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005d1f08: ret  */ FN_RET(0x005d1d64); r_esp += 4; return;
}

void f_005d1f0c(void) /* sub_5D1F0C */
{
    FN_ENTER(0x005d1f0c);
    /* 005d1f0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f0f: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005d1f12: mov edi, ecx */ r_edi = r_ecx;
    /* 005d1f14: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005d1f1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1f1c: je 0x5d20af */ if (fZ) goto L_005d20af;
L_005d1f22:; BB(0x005d1f22);
    /* 005d1f22: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005d1f25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f26: mov ecx, edi */ r_ecx = r_edi;
    /* 005d1f28: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x5d1f2du); f_005c425c();
    /* 005d1f2d: mov ebx, dword ptr [edi + 0x1a0] */ r_ebx = R32((u32)(r_edi+0x1a0u));
    /* 005d1f33: mov dword ptr [edi + 0x184], ebx */ W32((u32)(r_edi+0x184u), r_ebx);
    /* 005d1f39: lea edx, [edi + 0x124] */ r_edx = (u32)(r_edi+0x124u);
    /* 005d1f3f: lea ebx, [edi + 0x154] */ r_ebx = (u32)(r_edi+0x154u);
    /* 005d1f45: lea esi, [edi + 0x100] */ r_esi = (u32)(r_edi+0x100u);
    /* 005d1f4b: lea eax, [edi + 0x174] */ r_eax = (u32)(r_edi+0x174u);
    /* 005d1f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1f55: push dword ptr [edi + 0xf8] */ { u32 v = R32((u32)(r_edi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005d1f5b: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 005d1f5f: call 0x5d330c */ r_esp -= 4; W32(r_esp, 0x5d1f64u); f_005d330c();
    /* 005d1f64: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d1f6a: mov eax, dword ptr [ecx + 0x31c] */ r_eax = R32((u32)(r_ecx+0x31cu));
    /* 005d1f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1f72: je 0x5d1f9a */ if (fZ) goto L_005d1f9a;
L_005d1f74:; BB(0x005d1f74);
    /* 005d1f74: movzx edx, word ptr [edi + 0x124] */ r_edx = (u32)R16((u32)(r_edi+0x124u));
    /* 005d1f7b: add word ptr [eax], dx */ { u32 ad = (u32)(r_eax);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d1f7e: movzx edx, word ptr [edi + 0x126] */ r_edx = (u32)R16((u32)(r_edi+0x126u));
    /* 005d1f85: add word ptr [eax + 2], dx */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d1f89: movzx edx, word ptr [edi + 0x128] */ r_edx = (u32)R16((u32)(r_edi+0x128u));
    /* 005d1f90: add word ptr [eax + 4], dx */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R16(ad); u32 b = (u16)r_edx; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 005d1f94: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
L_005d1f9a:; BB(0x005d1f9a);
    /* 005d1f9a: mov eax, dword ptr [ecx + 0x320] */ r_eax = R32((u32)(r_ecx+0x320u));
    /* 005d1fa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1fa2: je 0x5d1fb0 */ if (fZ) goto L_005d1fb0;
L_005d1fa4:; BB(0x005d1fa4);
    /* 005d1fa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fa5: call 0x68c5c0 */ r_esp -= 4; W32(r_esp, 0x5d1faau); f_0068c5c0();
    /* 005d1faa: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
L_005d1fb0:; BB(0x005d1fb0);
    /* 005d1fb0: mov eax, dword ptr [ecx + 0x2b4] */ r_eax = R32((u32)(r_ecx+0x2b4u));
    /* 005d1fb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1fb8: je 0x5d1fc6 */ if (fZ) goto L_005d1fc6;
L_005d1fba:; BB(0x005d1fba);
    /* 005d1fba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005d1fbb: call 0x68c4c4 */ r_esp -= 4; W32(r_esp, 0x5d1fc0u); f_0068c4c4();
    /* 005d1fc0: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
L_005d1fc6:; BB(0x005d1fc6);
    /* 005d1fc6: mov edx, dword ptr [ecx + 0x324] */ r_edx = R32((u32)(r_ecx+0x324u));
    /* 005d1fcc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d1fce: je 0x5d2069 */ if (fZ) goto L_005d2069;
L_005d1fd4:; BB(0x005d1fd4);
    /* 005d1fd4: movsx esi, word ptr [edi + 0x178] */ r_esi = (u32)(i32)(i16)R16((u32)(r_edi+0x178u));
    /* 005d1fdb: movsx ebx, word ptr [edx] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx));
    /* 005d1fde: movsx eax, word ptr [edx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 005d1fe2: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005d1fe5: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1fe7: jg 0x5d1feb */ if ((!fZ&&fS==fO)) goto L_005d1feb;
L_005d1fe9:; BB(0x005d1fe9);
    /* 005d1fe9: mov esi, ebx */ r_esi = r_ebx;
L_005d1feb:; BB(0x005d1feb);
    /* 005d1feb: mov word ptr [edx], si */ W16((u32)(r_edx), (u16)r_esi);
    /* 005d1fee: movsx ebx, word ptr [edi + 0x17a] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x17au));
    /* 005d1ff5: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d1ff7: jg 0x5d1ffb */ if ((!fZ&&fS==fO)) goto L_005d1ffb;
L_005d1ff9:; BB(0x005d1ff9);
    /* 005d1ff9: mov ebx, eax */ r_ebx = r_eax;
L_005d1ffb:; BB(0x005d1ffb);
    /* 005d1ffb: movsx eax, word ptr [edx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x4u));
    /* 005d1fff: mov word ptr [edx + 2], bx */ W16((u32)(r_edx+0x2u), (u16)r_ebx);
    /* 005d2003: movsx ebx, word ptr [edi + 0x17c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x17cu));
    /* 005d200a: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d200c: jg 0x5d2010 */ if ((!fZ&&fS==fO)) goto L_005d2010;
L_005d200e:; BB(0x005d200e);
    /* 005d200e: mov ebx, eax */ r_ebx = r_eax;
L_005d2010:; BB(0x005d2010);
    /* 005d2010: movsx eax, word ptr [edx + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x6u));
    /* 005d2014: mov word ptr [edx + 4], bx */ W16((u32)(r_edx+0x4u), (u16)r_ebx);
    /* 005d2018: movsx ebx, word ptr [edi + 0x17e] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x17eu));
    /* 005d201f: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2021: jg 0x5d2025 */ if ((!fZ&&fS==fO)) goto L_005d2025;
L_005d2023:; BB(0x005d2023);
    /* 005d2023: mov ebx, eax */ r_ebx = r_eax;
L_005d2025:; BB(0x005d2025);
    /* 005d2025: movsx eax, word ptr [edx + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x8u));
    /* 005d2029: mov word ptr [edx + 6], bx */ W16((u32)(r_edx+0x6u), (u16)r_ebx);
    /* 005d202d: movsx ebx, word ptr [edi + 0x180] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x180u));
    /* 005d2034: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d2036: jg 0x5d203a */ if ((!fZ&&fS==fO)) goto L_005d203a;
L_005d2038:; BB(0x005d2038);
    /* 005d2038: mov ebx, eax */ r_ebx = r_eax;
L_005d203a:; BB(0x005d203a);
    /* 005d203a: movsx eax, word ptr [edx + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0xau));
    /* 005d203e: mov word ptr [edx + 8], bx */ W16((u32)(r_edx+0x8u), (u16)r_ebx);
    /* 005d2042: movsx ebx, word ptr [edi + 0x182] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edi+0x182u));
    /* 005d2049: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005d204b: jg 0x5d204f */ if ((!fZ&&fS==fO)) goto L_005d204f;
L_005d204d:; BB(0x005d204d);
    /* 005d204d: mov ebx, eax */ r_ebx = r_eax;
L_005d204f:; BB(0x005d204f);
    /* 005d204f: mov word ptr [edx + 0xa], bx */ W16((u32)(r_edx+0xau), (u16)r_ebx);
    /* 005d2053: fld dword ptr [edi + 0x184] */ FPUSH(R_F32((u32)(r_edi+0x184u)));
    /* 005d2059: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005d205b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005d205d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005d205e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005d2060: ja 0x5d2064 */ if ((!fC&&!fZ)) goto L_005d2064;
L_005d2062:; BB(0x005d2062);
    /* 005d2062: fst st(1) */ ST(1) = ST(0);
L_005d2064:; BB(0x005d2064);
    /* 005d2064: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005d2066: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
L_005d2069:; BB(0x005d2069);
    /* 005d2069: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 005d206d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005d206f: je 0x5d20af */ if (fZ) goto L_005d20af;
L_005d2071:; BB(0x005d2071);
    /* 005d2071: movsx eax, word ptr [edi + 0x174] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x174u));
    /* 005d2078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d2079: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d207f: call 0x770ba4 */ r_esp -= 4; W32(r_esp, 0x5d2084u); f_00770ba4();
    /* 005d2084: movsx eax, word ptr [edi + 0x176] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x176u));
    /* 005d208b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005d208c: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d2092: call 0x770c18 */ r_esp -= 4; W32(r_esp, 0x5d2097u); f_00770c18();
    /* 005d2097: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005d2099: mov ecx, edi */ r_ecx = r_edi;
    /* 005d209b: call dword ptr [eax + 0xb8] */ { u32 t = R32((u32)(r_eax+0xb8u)); r_esp -= 4; W32(r_esp, 0x5d20a1u); call_ind(t); }
    /* 005d20a1: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005d20a7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005d20a9: call dword ptr [eax + 0x12c] */ { u32 t = R32((u32)(r_eax+0x12cu)); r_esp -= 4; W32(r_esp, 0x5d20afu); call_ind(t); }
L_005d20af:; BB(0x005d20af);
    /* 005d20af: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005d20b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005d20b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005d20b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005d20b5: ret 4 */ FN_RET(0x005d1f0c); r_esp += 8; return;
}

