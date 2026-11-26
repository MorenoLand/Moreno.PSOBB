#include "protos.h"

void f_005f1028(void) /* sub_5F1028 */
{
    FN_ENTER(0x005f1028);
    /* 005f1028: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1029: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f102b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f102f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1033: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1035: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f103au); f_005e959c();
    /* 005f103a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f1040: mov dword ptr [ebx], 0xb14420 */ W32((u32)(r_ebx), 0xb14420u);
    /* 005f1046: or edx, 0x23 */ {  u32 a = r_edx; u32 b = 0x23u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1049: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f104f: mov byte ptr [ebx + 0x1c2], 6 */ W8((u32)(r_ebx+0x1c2u), 0x6u);
    /* 005f1056: mov eax, ebx */ r_eax = r_ebx;
    /* 005f1058: mov byte ptr [ebx + 0x1c6], 5 */ W8((u32)(r_ebx+0x1c6u), 0x5u);
    /* 005f105f: mov dword ptr [ebx + 0x1e8], 0xd */ W32((u32)(r_ebx+0x1e8u), 0xdu);
    /* 005f1069: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f106a: ret 8 */ FN_RET(0x005f1028); r_esp += 12; return;
}

void f_005f1070(void) /* sub_5F1070 */
{
    FN_ENTER(0x005f1070);
    /* 005f1070: mov dword ptr [0xa8df30], 0x3f800000 */ W32((u32)(0xa8df30u), 0x3f800000u);
    /* 005f107a: mov dword ptr [0xa8df34], 0x41000000 */ W32((u32)(0xa8df34u), 0x41000000u);
    /* 005f1084: mov dword ptr [0xa8df38], 0x3fc00000 */ W32((u32)(0xa8df38u), 0x3fc00000u);
    /* 005f108e: ret  */ FN_RET(0x005f1070); r_esp += 4; return;
}

void f_005f1090(void) /* sub_5F1090 */
{
    FN_ENTER(0x005f1090);
    /* 005f1090: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1091: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1093: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1095: push 0x8dcb40 */ { u32 v = 0x8dcb40u; r_esp -= 4; W32(r_esp, v); }
    /* 005f109a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f10a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f10a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f10a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f10ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f10ae: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f10b1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f10b4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f10b7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f10ba: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f10bd: mov eax, ecx */ r_eax = r_ecx;
    /* 005f10bf: mov dword ptr [eax], 0xb14580 */ W32((u32)(r_eax), 0xb14580u);
    /* 005f10c5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f10cc: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f10d1u); f_005e61c8();
    /* 005f10d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f10d4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f10d6: jne 0x5f10e8 */ if (!fZ) goto L_005f10e8;
L_005f10d8:; BB(0x005f10d8);
    /* 005f10d8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f10db: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f10e2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f10e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f10e5: ret 4 */ FN_RET(0x005f1090); r_esp += 8; return;
L_005f10e8:; BB(0x005f10e8);
    /* 005f10e8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f10eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f10ec: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f10f1u); f_005c2f74();
    /* 005f10f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f10f2: jmp 0x5f10d8 */ goto L_005f10d8;
}

void f_005f10f4(void) /* sub_5F10F4 */
{
    FN_ENTER(0x005f10f4);
    /* 005f10f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f10f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f10f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f10f9: push 0x8dcb68 */ { u32 v = 0x8dcb68u; r_esp -= 4; W32(r_esp, v); }
    /* 005f10fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1104: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1105: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f110c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f110f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1112: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1115: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1118: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f111b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f111e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1120: je 0x5f1177 */ if (fZ) goto L_005f1177;
L_005f1122:; BB(0x005f1122);
    /* 005f1122: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f1129: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f112e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1133u); f_005caba4();
    /* 005f1133: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1134: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f1137: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1139: je 0x5f1173 */ if (fZ) goto L_005f1173;
L_005f113b:; BB(0x005f113b);
    /* 005f113b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f1142: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1149: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f114c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f114f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1150: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1156: call 0x5f1188 */ r_esp -= 4; W32(r_esp, 0x5f115bu); f_005f1188();
    /* 005f115b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f115e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f1165:; BB(0x005f1165);
    /* 005f1165: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1168: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f116f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1171: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1172: ret  */ FN_RET(0x005f10f4); r_esp += 4; return;
L_005f1173:; BB(0x005f1173);
    /* 005f1173: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1175: jmp 0x5f1165 */ goto L_005f1165;
L_005f1177:; BB(0x005f1177);
    /* 005f1177: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1179: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f117c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1183: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1186: ret  */ FN_RET(0x005f10f4); r_esp += 4; return;
}

void f_005f1188(void) /* sub_5F1188 */
{
    FN_ENTER(0x005f1188);
    /* 005f1188: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1189: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f118b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f118f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1193: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f1195: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f119au); f_005e959c();
    /* 005f119a: mov dword ptr [ebp], 0xb14580 */ W32((u32)(r_ebp), 0xb14580u);
    /* 005f11a1: mov eax, ebp */ r_eax = r_ebp;
    /* 005f11a3: mov dword ptr [ebp + 0x238], 0x5e4264 */ W32((u32)(r_ebp+0x238u), 0x5e4264u);
    /* 005f11ad: mov dword ptr [ebp + 0x208], 0x41300000 */ W32((u32)(r_ebp+0x208u), 0x41300000u);
    /* 005f11b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f11b8: ret 8 */ FN_RET(0x005f1188); r_esp += 12; return;
}

void f_005f11bc(void) /* sub_5F11BC */
{
    FN_ENTER(0x005f11bc);
    /* 005f11bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f11bd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f11bf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f11c1: call 0x5f11e0 */ r_esp -= 4; W32(r_esp, 0x5f11c6u); f_005f11e0();
    /* 005f11c6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f11ca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f11cc: jne 0x5f11d2 */ if (!fZ) goto L_005f11d2;
L_005f11ce:; BB(0x005f11ce);
    /* 005f11ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f11cf: ret 4 */ FN_RET(0x005f11bc); r_esp += 8; return;
L_005f11d2:; BB(0x005f11d2);
    /* 005f11d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f11d3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f11d8u); f_005c2f74();
    /* 005f11d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f11d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f11da: ret 4 */ FN_RET(0x005f11bc); r_esp += 8; return;
}

void f_005f11e0(void) /* sub_5F11E0 */
{
    FN_ENTER(0x005f11e0);
    /* 005f11e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f11e1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f11e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f11e5: push 0x8dcb84 */ { u32 v = 0x8dcb84u; r_esp -= 4; W32(r_esp, v); }
    /* 005f11ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f11f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f11f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f11f8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f11fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f11fe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1201: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1204: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1207: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f120a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f120d: mov dword ptr [ecx], 0xb14720 */ W32((u32)(r_ecx), 0xb14720u);
    /* 005f1213: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f121a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f121fu); f_005e61c8();
    /* 005f121f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1222: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1229: mov esp, ebp */ r_esp = r_ebp;
    /* 005f122b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f122c: ret  */ FN_RET(0x005f11e0); r_esp += 4; return;
}

void f_005f1230(void) /* sub_5F1230 */
{
    FN_ENTER(0x005f1230);
    /* 005f1230: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1231: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1233: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1235: call 0x5f1254 */ r_esp -= 4; W32(r_esp, 0x5f123au); f_005f1254();
    /* 005f123a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f123e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1240: jne 0x5f1246 */ if (!fZ) goto L_005f1246;
L_005f1242:; BB(0x005f1242);
    /* 005f1242: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1243: ret 4 */ FN_RET(0x005f1230); r_esp += 8; return;
L_005f1246:; BB(0x005f1246);
    /* 005f1246: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1247: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f124cu); f_005c2f74();
    /* 005f124c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f124d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f124e: ret 4 */ FN_RET(0x005f1230); r_esp += 8; return;
}

void f_005f1254(void) /* sub_5F1254 */
{
    FN_ENTER(0x005f1254);
    /* 005f1254: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1255: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1257: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1259: push 0x8dcba0 */ { u32 v = 0x8dcba0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f125e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1264: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1265: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f126c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f126f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1272: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1275: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1278: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f127b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f127e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1281: mov dword ptr [ecx], 0xb14820 */ W32((u32)(r_ecx), 0xb14820u);
    /* 005f1287: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f128e: call 0x5c5a94 */ r_esp -= 4; W32(r_esp, 0x5f1293u); f_005c5a94();
    /* 005f1293: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1296: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f129d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f129f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f12a0: ret  */ FN_RET(0x005f1254); r_esp += 4; return;
}

void f_005f12a4(void) /* sub_5F12A4 */
{
    FN_ENTER(0x005f12a4);
    /* 005f12a4: mov dword ptr [ecx + 0x290], 0 */ W32((u32)(r_ecx+0x290u), 0x0u);
    /* 005f12ae: ret  */ FN_RET(0x005f12a4); r_esp += 4; return;
}

void f_005f12b0(void) /* sub_5F12B0 */
{
    FN_ENTER(0x005f12b0);
    /* 005f12b0: mov eax, dword ptr [ecx + 0x290] */ r_eax = R32((u32)(r_ecx+0x290u));
    /* 005f12b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f12b8: jle 0x5f12c3 */ if ((fZ||fS!=fO)) goto L_005f12c3;
L_005f12ba:; BB(0x005f12ba);
    /* 005f12ba: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f12bd: mov dword ptr [ecx + 0x290], eax */ W32((u32)(r_ecx+0x290u), r_eax);
L_005f12c3:; BB(0x005f12c3);
    /* 005f12c3: ret  */ FN_RET(0x005f12b0); r_esp += 4; return;
}

void f_005f12c4(void) /* sub_5F12C4 */
{
    FN_ENTER(0x005f12c4);
    /* 005f12c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f12c5: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f12ca: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f12cd: je 0x5f12d1 */ if (fZ) goto L_005f12d1;
L_005f12cf:; BB(0x005f12cf);
    /* 005f12cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f12d0: ret  */ FN_RET(0x005f12c4); r_esp += 4; return;
L_005f12d1:; BB(0x005f12d1);
    /* 005f12d1: mov edx, dword ptr [ecx + 0x1ac] */ r_edx = R32((u32)(r_ecx+0x1acu));
    /* 005f12d7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f12d9: je 0x5f12cf */ if (fZ) goto L_005f12cf;
L_005f12db:; BB(0x005f12db);
    /* 005f12db: mov eax, dword ptr [ecx + 0x290] */ r_eax = R32((u32)(r_ecx+0x290u));
    /* 005f12e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f12e3: jne 0x5f12cf */ if (!fZ) goto L_005f12cf;
L_005f12e5:; BB(0x005f12e5);
    /* 005f12e5: mov ebx, dword ptr [edx + 0x2c] */ r_ebx = R32((u32)(r_edx+0x2cu));
    /* 005f12e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f12ea: je 0x5f12cf */ if (fZ) goto L_005f12cf;
L_005f12ec:; BB(0x005f12ec);
    /* 005f12ec: mov dword ptr [ebx + 0x20], 0x3dcccccd */ W32((u32)(r_ebx+0x20u), 0x3dcccccdu);
    /* 005f12f3: mov dword ptr [ebx + 0x24], 0x3dcccccd */ W32((u32)(r_ebx+0x24u), 0x3dcccccdu);
    /* 005f12fa: mov dword ptr [ebx + 0x28], 0x3dcccccd */ W32((u32)(r_ebx+0x28u), 0x3dcccccdu);
    /* 005f1301: and dword ptr [ebx], 0xfffffffb */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 005f1304: mov ecx, dword ptr [ecx + 0x1ac] */ r_ecx = R32((u32)(r_ecx+0x1acu));
    /* 005f130a: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5f130fu); f_00831758();
    /* 005f130f: or dword ptr [ebx], 4 */ { u32 ad = (u32)(r_ebx);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1312: mov dword ptr [ebx + 0x20], 0x3f800000 */ W32((u32)(r_ebx+0x20u), 0x3f800000u);
    /* 005f1319: mov dword ptr [ebx + 0x24], 0x3f800000 */ W32((u32)(r_ebx+0x24u), 0x3f800000u);
    /* 005f1320: mov dword ptr [ebx + 0x28], 0x3f800000 */ W32((u32)(r_ebx+0x28u), 0x3f800000u);
    /* 005f1327: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1328: ret  */ FN_RET(0x005f12c4); r_esp += 4; return;
}

void f_005f132c(void) /* sub_5F132C */
{
    FN_ENTER(0x005f132c);
    /* 005f132c: mov dword ptr [ecx + 0x290], 0x3c */ W32((u32)(r_ecx+0x290u), 0x3cu);
    /* 005f1336: ret  */ FN_RET(0x005f132c); r_esp += 4; return;
}

void f_005f1338(void) /* sub_5F1338 */
{
    FN_ENTER(0x005f1338);
    /* 005f1338: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f133c: mov dword ptr [edx + 0x74], 0x5f149c */ W32((u32)(r_edx+0x74u), 0x5f149cu);
    /* 005f1343: mov dword ptr [edx + 0x70], 0x5f1630 */ W32((u32)(r_edx+0x70u), 0x5f1630u);
    /* 005f134a: mov dword ptr [edx + 0x50], 0xffffc000 */ W32((u32)(r_edx+0x50u), 0xffffc000u);
    /* 005f1351: mov eax, dword ptr [ecx + 0x298] */ r_eax = R32((u32)(r_ecx+0x298u));
    /* 005f1357: or dword ptr [edx + 0x40], eax */ { u32 ad = (u32)(r_edx+0x40u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f135a: mov dword ptr [edx + 0x78], 0x1bb */ W32((u32)(r_edx+0x78u), 0x1bbu);
    /* 005f1361: mov dword ptr [edx + 0x7c], 0x1bc */ W32((u32)(r_edx+0x7cu), 0x1bcu);
    /* 005f1368: ret 4 */ FN_RET(0x005f1338); r_esp += 8; return;
}

void f_005f136c(void) /* sub_5F136C */
{
    FN_ENTER(0x005f136c);
    /* 005f136c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f136d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f136f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1371: push 0x8dcbc8 */ { u32 v = 0x8dcbc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1376: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f137c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f137d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1384: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1387: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f138a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f138d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1390: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1393: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1396: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1398: je 0x5f13ef */ if (fZ) goto L_005f13ef;
L_005f139a:; BB(0x005f139a);
    /* 005f139a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f13a1: push 0x29c */ { u32 v = 0x29cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f13a6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f13abu); f_005caba4();
    /* 005f13ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f13ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f13af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f13b1: je 0x5f13eb */ if (fZ) goto L_005f13eb;
L_005f13b3:; BB(0x005f13b3);
    /* 005f13b3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f13ba: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f13c1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f13c4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f13c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f13c8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f13ce: call 0x5f1400 */ r_esp -= 4; W32(r_esp, 0x5f13d3u); f_005f1400();
    /* 005f13d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f13d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f13dd:; BB(0x005f13dd);
    /* 005f13dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f13e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f13e7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f13e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f13ea: ret  */ FN_RET(0x005f136c); r_esp += 4; return;
L_005f13eb:; BB(0x005f13eb);
    /* 005f13eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f13ed: jmp 0x5f13dd */ goto L_005f13dd;
L_005f13ef:; BB(0x005f13ef);
    /* 005f13ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f13f1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f13f4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f13fb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f13fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f13fe: ret  */ FN_RET(0x005f136c); r_esp += 4; return;
}

void f_005f1400(void) /* sub_5F1400 */
{
    FN_ENTER(0x005f1400);
    /* 005f1400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1401: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f1403: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1407: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f140b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f140d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f1412u); f_005e959c();
    /* 005f1412: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005f1418: movzx edx, byte ptr [ebp + 0xf4] */ r_edx = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005f141f: mov dword ptr [ebp], 0xb14720 */ W32((u32)(r_ebp), 0xb14720u);
    /* 005f1426: mov dword ptr [ebp + 0x248], 0x3dcccccd */ W32((u32)(r_ebp+0x248u), 0x3dcccccdu);
    /* 005f1430: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f1435: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 005f143b: mov dword ptr [ebp + 0x244], 0x3dcccccd */ W32((u32)(r_ebp+0x244u), 0x3dcccccdu);
    /* 005f1445: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f1448: mov dword ptr [ebp + 0x240], 0x3dcccccd */ W32((u32)(r_ebp+0x240u), 0x3dcccccdu);
    /* 005f1452: mov dword ptr [ebp + 0x290], 0 */ W32((u32)(r_ebp+0x290u), 0x0u);
    /* 005f145c: mov dword ptr [ebp + 0x208], 0x41200000 */ W32((u32)(r_ebp+0x208u), 0x41200000u);
    /* 005f1466: je 0x5f1482 */ if (fZ) goto L_005f1482;
L_005f1468:; BB(0x005f1468);
    /* 005f1468: mov dword ptr [ebp + 0x294], 0x40200000 */ W32((u32)(r_ebp+0x294u), 0x40200000u);
    /* 005f1472: mov dword ptr [ebp + 0x298], 0 */ W32((u32)(r_ebp+0x298u), 0x0u);
L_005f147c:; BB(0x005f147c);
    /* 005f147c: mov eax, ebp */ r_eax = r_ebp;
    /* 005f147e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f147f: ret 8 */ FN_RET(0x005f1400); r_esp += 12; return;
L_005f1482:; BB(0x005f1482);
    /* 005f1482: mov dword ptr [ebp + 0x298], 0x80 */ W32((u32)(r_ebp+0x298u), 0x80u);
    /* 005f148c: mov edx, 0x41200000 */ r_edx = 0x41200000u;
    /* 005f1491: mov dword ptr [ebp + 0x294], edx */ W32((u32)(r_ebp+0x294u), r_edx);
    /* 005f1497: jmp 0x5f147c */ goto L_005f147c;
}

void f_005f149c(void)
{
    FN_ENTER(0x005f149c);
    /* 005f149c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f149d: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f14a1: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f14a6u); f_005c5528();
    /* 005f14a6: mov ecx, eax */ r_ecx = r_eax;
    /* 005f14a8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f14ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f14ad: je 0x5f14d9 */ if (fZ) goto L_005f14d9;
L_005f14af:; BB(0x005f14af);
    /* 005f14af: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005f14b3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005f14b5: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 005f14b8: mov edx, dword ptr [edx + 0xa4] */ r_edx = R32((u32)(r_edx+0xa4u));
    /* 005f14be: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 005f14c1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f14c3: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f14c5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f14c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f14c9: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005f14cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f14cd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005f14cf: lea edx, [edx + eax + 0x1c] */ r_edx = (u32)(r_edx+r_eax+0x1cu);
    /* 005f14d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f14d4: call 0x5f14dc */ r_esp -= 4; W32(r_esp, 0x5f14d9u); f_005f14dc();
L_005f14d9:; BB(0x005f14d9);
    /* 005f14d9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f14da: ret  */ FN_RET(0x005f149c); r_esp += 4; return;
}

void f_005f14dc(void) /* sub_5F14DC */
{
    FN_ENTER(0x005f14dc);
    /* 005f14dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f14dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f14df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f14e1: push 0x8dcbf0 */ { u32 v = 0x8dcbf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f14e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f14ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f14ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f14f4: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f14fa: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f14fd: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1500: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1503: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1506: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1508: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005f150f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005f1512: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1515: je 0x5f155f */ if (fZ) goto L_005f155f;
L_005f1517:; BB(0x005f1517);
    /* 005f1517: lea ebx, [ebp - 0xb0] */ r_ebx = (u32)(r_ebp+0xffffff50u);
    /* 005f151d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005f151f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1521: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005f1523: mov dword ptr [ebp - 0xb0], eax */ W32((u32)(r_ebp+0xffffff50u), r_eax);
    /* 005f1529: push 0x17e */ { u32 v = 0x17eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f152e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005f1531: mov dword ptr [ebp - 0xac], edx */ W32((u32)(r_ebp+0xffffff54u), r_edx);
    /* 005f1537: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1538: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 005f153b: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 005f1541: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5f1546u); f_0050a984();
    /* 005f1546: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f1549:; BB(0x005f1549);
    /* 005f1549: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f154c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f154f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1552: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1559: mov esp, ebp */ r_esp = r_ebp;
    /* 005f155b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f155c: ret 4 */ FN_RET(0x005f14dc); r_esp += 8; return;
L_005f155f:; BB(0x005f155f);
    /* 005f155f: lea ecx, [ebp - 0xa4] */ r_ecx = (u32)(r_ebp+0xffffff5cu);
    /* 005f1565: call 0x5c5ae4 */ r_esp -= 4; W32(r_esp, 0x5f156au); f_005c5ae4();
    /* 005f156a: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 005f1570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1571: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1573: call 0x5e8f04 */ r_esp -= 4; W32(r_esp, 0x5f1578u); f_005e8f04();
    /* 005f1578: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f157d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005f157f: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 005f1585: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005f1588: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f158f: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 005f1595: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 005f1598: mov dword ptr [ebp - 0x94], 0xa */ W32((u32)(r_ebp+0xffffff6cu), 0xau);
    /* 005f15a2: mov dword ptr [ebp - 0x9c], ecx */ W32((u32)(r_ebp+0xffffff64u), r_ecx);
    /* 005f15a8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f15adu); f_005caba4();
    /* 005f15ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f15ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f15b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f15b3: je 0x5f15de */ if (fZ) goto L_005f15de;
L_005f15b5:; BB(0x005f15b5);
    /* 005f15b5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f15bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f15c3: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 005f15c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f15ca: mov ecx, eax */ r_ecx = r_eax;
    /* 005f15cc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f15d2: call 0x5f1604 */ r_esp -= 4; W32(r_esp, 0x5f15d7u); f_005f1604();
    /* 005f15d7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f15de:; BB(0x005f15de);
    /* 005f15de: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f15e5: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 005f15eb: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 005f15ed: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f15ef: push 0x17f */ { u32 v = 0x17fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f15f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f15f5: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5f15fau); f_0050a984();
    /* 005f15fa: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f15fd: jmp 0x5f1549 */ goto L_005f1549;
}

void f_005f1604(void) /* sub_5F1604 */
{
    FN_ENTER(0x005f1604);
    /* 005f1604: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1605: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f1607: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f160b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f160f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f1611: call 0x5c6a78 */ r_esp -= 4; W32(r_esp, 0x5f1616u); f_005c6a78();
    /* 005f1616: mov dword ptr [ebp], 0xb14820 */ W32((u32)(r_ebp), 0xb14820u);
    /* 005f161d: mov eax, ebp */ r_eax = r_ebp;
    /* 005f161f: mov dword ptr [ebp + 0xc4], 0x42480000 */ W32((u32)(r_ebp+0xc4u), 0x42480000u);
    /* 005f1629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f162a: ret 8 */ FN_RET(0x005f1604); r_esp += 12; return;
}

void f_005f1630(void)
{
    FN_ENTER(0x005f1630);
    /* 005f1630: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1634: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f1639u); f_005c5528();
    /* 005f1639: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f163a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f163c: je 0x5f1649 */ if (fZ) goto L_005f1649;
L_005f163e:; BB(0x005f163e);
    /* 005f163e: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1642: mov ecx, eax */ r_ecx = r_eax;
    /* 005f1644: call 0x5f14dc */ r_esp -= 4; W32(r_esp, 0x5f1649u); f_005f14dc();
L_005f1649:; BB(0x005f1649);
    /* 005f1649: ret  */ FN_RET(0x005f1630); r_esp += 4; return;
}

void f_005f164c(void) /* sub_5F164C */
{
    FN_ENTER(0x005f164c);
    /* 005f164c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f164d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f164f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1651: call 0x5c6f80 */ r_esp -= 4; W32(r_esp, 0x5f1656u); f_005c6f80();
    /* 005f1656: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1658: je 0x5f169c */ if (fZ) goto L_005f169c;
L_005f165a:; BB(0x005f165a);
    /* 005f165a: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 005f165d: fld dword ptr [ebx + 0xc4] */ FPUSH(R_F32((u32)(r_ebx+0xc4u)));
    /* 005f1663: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f1665: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f1667: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f1668: jbe 0x5f1684 */ if ((fC||fZ)) goto L_005f1684;
L_005f166a:; BB(0x005f166a);
    /* 005f166a: fld dword ptr [0x92d9cc] */ FPUSH(R_F32((u32)(0x92d9ccu)));
    /* 005f1670: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 005f1672: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f1674: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f1676: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f1677: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f1679: jb 0x5f167d */ if (fC) goto L_005f167d;
L_005f167b:; BB(0x005f167b);
    /* 005f167b: fst st(1) */ ST(1) = ST(0);
L_005f167d:; BB(0x005f167d);
    /* 005f167d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f167f: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 005f1682: jmp 0x5f1695 */ goto L_005f1695;
L_005f1684:; BB(0x005f1684);
    /* 005f1684: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f1686: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f1688: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005f168c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f1691: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_005f1695:; BB(0x005f1695);
    /* 005f1695: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1697: call 0x5c5b94 */ r_esp -= 4; W32(r_esp, 0x5f169cu); f_005c5b94();
L_005f169c:; BB(0x005f169c);
    /* 005f169c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f169d: ret  */ FN_RET(0x005f164c); r_esp += 4; return;
}

void f_005f16a0(void) /* sub_5F16A0 */
{
    FN_ENTER(0x005f16a0);
    /* 005f16a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f16a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f16a3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f16a5: call 0x5f16c4 */ r_esp -= 4; W32(r_esp, 0x5f16aau); f_005f16c4();
    /* 005f16aa: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f16ae: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f16b0: jne 0x5f16b6 */ if (!fZ) goto L_005f16b6;
L_005f16b2:; BB(0x005f16b2);
    /* 005f16b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f16b3: ret 4 */ FN_RET(0x005f16a0); r_esp += 8; return;
L_005f16b6:; BB(0x005f16b6);
    /* 005f16b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f16b7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f16bcu); f_005c2f74();
    /* 005f16bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f16bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f16be: ret 4 */ FN_RET(0x005f16a0); r_esp += 8; return;
}

void f_005f16c4(void) /* sub_5F16C4 */
{
    FN_ENTER(0x005f16c4);
    /* 005f16c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f16c5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f16c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f16c9: push 0x8dcc0c */ { u32 v = 0x8dcc0cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f16ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f16d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f16d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f16dc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f16df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f16e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f16e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f16e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f16eb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f16ee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f16f1: mov dword ptr [ecx], 0xb14940 */ W32((u32)(r_ecx), 0xb14940u);
    /* 005f16f7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f16fe: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f1703u); f_005e61c8();
    /* 005f1703: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1706: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f170d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f170f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1710: ret  */ FN_RET(0x005f16c4); r_esp += 4; return;
}

void f_005f1714(void) /* sub_5F1714 */
{
    FN_ENTER(0x005f1714);
    /* 005f1714: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1715: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1717: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1719: call 0x5f1738 */ r_esp -= 4; W32(r_esp, 0x5f171eu); f_005f1738();
    /* 005f171e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f1722: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1724: jne 0x5f172a */ if (!fZ) goto L_005f172a;
L_005f1726:; BB(0x005f1726);
    /* 005f1726: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1727: ret 4 */ FN_RET(0x005f1714); r_esp += 8; return;
L_005f172a:; BB(0x005f172a);
    /* 005f172a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f172b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f1730u); f_005c2f74();
    /* 005f1730: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1731: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1732: ret 4 */ FN_RET(0x005f1714); r_esp += 8; return;
}

void f_005f1738(void) /* sub_5F1738 */
{
    FN_ENTER(0x005f1738);
    /* 005f1738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1739: mov ebp, esp */ r_ebp = r_esp;
    /* 005f173b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f173d: push 0x8dcc28 */ { u32 v = 0x8dcc28u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1742: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1749: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1750: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1753: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1756: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1759: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f175c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f175f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f1762: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1765: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 005f1768: mov dword ptr [ecx], 0xb14a40 */ W32((u32)(r_ecx), 0xb14a40u);
    /* 005f176e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1770: je 0x5f1789 */ if (fZ) goto L_005f1789;
L_005f1772:; BB(0x005f1772);
    /* 005f1772: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1775: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005f1779: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f177e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005f1782: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
L_005f1789:; BB(0x005f1789);
    /* 005f1789: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f1790: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5f1795u); f_008171e8();
    /* 005f1795: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1798: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f179f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f17a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f17a2: ret  */ FN_RET(0x005f1738); r_esp += 4; return;
}

void f_005f17a4(void) /* sub_5F17A4 */
{
    FN_ENTER(0x005f17a4);
    /* 005f17a4: mov dword ptr [ecx + 0x240], 0xffffffff */ W32((u32)(r_ecx+0x240u), 0xffffffffu);
    /* 005f17ae: ret  */ FN_RET(0x005f17a4); r_esp += 4; return;
}

void f_005f17b0(void) /* sub_5F17B0 */
{
    FN_ENTER(0x005f17b0);
    /* 005f17b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f17b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f17b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f17b5: push 0x8dcc6a */ { u32 v = 0x8dcc6au; r_esp -= 4; W32(r_esp, v); }
    /* 005f17ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f17c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f17c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f17c8: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f17cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f17ce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005f17d1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005f17d4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005f17d7: mov ebx, dword ptr [0xaafca0] */ r_ebx = R32((u32)(0xaafca0u));
    /* 005f17dd: cmp ebx, dword ptr [ecx + 0x240] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x240u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f17e3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f17e6: je 0x5f18c3 */ if (fZ) goto L_005f18c3;
L_005f17ec:; BB(0x005f17ec);
    /* 005f17ec: call 0x5c5160 */ r_esp -= 4; W32(r_esp, 0x5f17f1u); f_005c5160();
    /* 005f17f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f17f3: je 0x5f18c3 */ if (fZ) goto L_005f18c3;
L_005f17f9:; BB(0x005f17f9);
    /* 005f17f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f17fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f17fd: mov dword ptr [eax + 0x240], ebx */ W32((u32)(r_eax+0x240u), r_ebx);
    /* 005f1803: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5f1808u); f_00807d8c();
    /* 005f1808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f180b: je 0x5f18c3 */ if (fZ) goto L_005f18c3;
L_005f1811:; BB(0x005f1811);
    /* 005f1811: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005f1816: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f1819: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f181b: je 0x5f1874 */ if (fZ) goto L_005f1874;
L_005f181d:; BB(0x005f181d);
    /* 005f181d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1820: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1822: je 0x5f1874 */ if (fZ) goto L_005f1874;
L_005f1824:; BB(0x005f1824);
    /* 005f1824: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005f182b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f182d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1832u); f_005caba4();
    /* 005f1832: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1833: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f1836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1838: je 0x5f1865 */ if (fZ) goto L_005f1865;
L_005f183a:; BB(0x005f183a);
    /* 005f183a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005f1841: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1848: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f184b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f184e: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1853: mov ecx, eax */ r_ecx = r_eax;
    /* 005f1855: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1857: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1858: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1859: call 0x5f18d4 */ r_esp -= 4; W32(r_esp, 0x5f185eu); f_005f18d4();
    /* 005f185e: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005f1865:; BB(0x005f1865);
    /* 005f1865: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f186c: mov eax, dword ptr [0xaca36c] */ r_eax = R32((u32)(0xaca36cu));
    /* 005f1871: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_005f1874:; BB(0x005f1874);
    /* 005f1874: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1877: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1879: je 0x5f18c3 */ if (fZ) goto L_005f18c3;
L_005f187b:; BB(0x005f187b);
    /* 005f187b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f187e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1880: je 0x5f18c3 */ if (fZ) goto L_005f18c3;
L_005f1882:; BB(0x005f1882);
    /* 005f1882: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f1889: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f188b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1890u); f_005caba4();
    /* 005f1890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1891: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f1894: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1896: je 0x5f18c3 */ if (fZ) goto L_005f18c3;
L_005f1898:; BB(0x005f1898);
    /* 005f1898: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f189f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f18a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f18a9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f18ac: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 005f18b1: mov ecx, eax */ r_ecx = r_eax;
    /* 005f18b3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f18b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f18b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f18b7: call 0x5f18d4 */ r_esp -= 4; W32(r_esp, 0x5f18bcu); f_005f18d4();
    /* 005f18bc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f18c3:; BB(0x005f18c3);
    /* 005f18c3: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f18c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f18c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f18d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005f18d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f18d3: ret  */ FN_RET(0x005f17b0); r_esp += 4; return;
}

void f_005f18d4(void) /* sub_5F18D4 */
{
    FN_ENTER(0x005f18d4);
    /* 005f18d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f18d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f18d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f18d9: push 0x8dcc84 */ { u32 v = 0x8dcc84u; r_esp -= 4; W32(r_esp, v); }
    /* 005f18de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f18e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f18e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f18ec: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f18ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f18f2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005f18f5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005f18f8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005f18fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005f18fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1901: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005f1904: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005f1907: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f190a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005f190d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 005f1910: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005f1913: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5f1918u); f_008193cc();
    /* 005f1918: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f191f: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f1922: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1925: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1928: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005f192c: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f1931: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005f1935: mov dword ptr [ebx], 0xb14a40 */ W32((u32)(r_ebx), 0xb14a40u);
    /* 005f193b: lea esi, [ebp - 0x38] */ r_esi = (u32)(r_ebp+0xffffffc8u);
    /* 005f193e: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 005f1944: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 005f1947: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1949: mov dword ptr [ebx + 0x20], edi */ W32((u32)(r_ebx+0x20u), r_edi);
    /* 005f194c: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f1951u); f_005e83c8();
    /* 005f1951: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f1954: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 005f1957: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1958: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1959: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5f195eu); f_00509590();
    /* 005f195e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1961: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f1964: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 005f1967: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5f196cu); f_005c3a8c();
    /* 005f196c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 005f196f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005f1972: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005f1975: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1978: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 005f197b: mov eax, edx */ r_eax = r_edx;
    /* 005f197d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1980: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1987: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1989: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f198a: ret 0x10 */ FN_RET(0x005f18d4); r_esp += 20; return;
}

void f_005f1990(void) /* sub_5F1990 */
{
    FN_ENTER(0x005f1990);
    /* 005f1990: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1991: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1994: mov esi, ecx */ r_esi = r_ecx;
    /* 005f1996: mov ecx, esi */ r_ecx = r_esi;
    /* 005f1998: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f199du); f_005e90b0();
    /* 005f199d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f199f: je 0x5f19e7 */ if (fZ) goto L_005f19e7;
L_005f19a1:; BB(0x005f19a1);
    /* 005f19a1: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f19a7: movsx edx, word ptr [eax + 0x8b2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x8b2u));
    /* 005f19ae: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f19b0: jne 0x5f19ee */ if (!fZ) goto L_005f19ee;
L_005f19b2:; BB(0x005f19b2);
    /* 005f19b2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f19b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f19b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f19b8: mov ecx, esi */ r_ecx = r_esi;
    /* 005f19ba: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f19bfu); f_005e83c8();
    /* 005f19bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f19c1: je 0x5f19ee */ if (fZ) goto L_005f19ee;
L_005f19c3:; BB(0x005f19c3);
    /* 005f19c3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f19c6: push dword ptr [esi + 0x1e4] */ { u32 v = R32((u32)(r_esi+0x1e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f19cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f19cd: push dword ptr [esi + 0xf8] */ { u32 v = R32((u32)(r_esi+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f19d3: call 0x6e46ac */ r_esp -= 4; W32(r_esp, 0x5f19d8u); f_006e46ac();
    /* 005f19d8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f19db: mov ecx, esi */ r_ecx = r_esi;
    /* 005f19dd: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5f19e2u); f_005e7480();
    /* 005f19e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f19e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f19e6: ret  */ FN_RET(0x005f1990); r_esp += 4; return;
L_005f19e7:; BB(0x005f19e7);
    /* 005f19e7: mov ecx, esi */ r_ecx = r_esi;
    /* 005f19e9: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f19eeu); f_005e90e8();
L_005f19ee:; BB(0x005f19ee);
    /* 005f19ee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f19f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f19f2: ret  */ FN_RET(0x005f1990); r_esp += 4; return;
}

void f_005f19f4(void) /* sub_5F19F4 */
{
    FN_ENTER(0x005f19f4);
    /* 005f19f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f19f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f19f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f19f9: push 0x8dccac */ { u32 v = 0x8dccacu; r_esp -= 4; W32(r_esp, v); }
    /* 005f19fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1a0c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1a0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1a12: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005f1a15: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005f1a18: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005f1a1b: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005f1a21: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f1a24: mov dword ptr [ecx + 0x240], 0xffffffff */ W32((u32)(r_ecx+0x240u), 0xffffffffu);
    /* 005f1a2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1a30: je 0x5f1a8c */ if (fZ) goto L_005f1a8c;
L_005f1a32:; BB(0x005f1a32);
    /* 005f1a32: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f1a39: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1a40u); f_005caba4();
    /* 005f1a40: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f1a43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1a46: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f1a49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1a4b: je 0x5f1a85 */ if (fZ) goto L_005f1a85;
L_005f1a4d:; BB(0x005f1a4d);
    /* 005f1a4d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f1a54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1a5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1a5e: mov ecx, eax */ r_ecx = r_eax;
    /* 005f1a60: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a62: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f1a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1a6a: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1a70: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f1a75u); f_005e5cac();
    /* 005f1a75: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f1a78: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005f1a7e: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f1a85:; BB(0x005f1a85);
    /* 005f1a85: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005f1a8c:; BB(0x005f1a8c);
    /* 005f1a8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1a8f: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5f1a94u); f_005e7480();
    /* 005f1a94: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1a97: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5f1a9cu); f_005e7480();
    /* 005f1a9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1a9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1aa6: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1aa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1aa9: ret  */ FN_RET(0x005f19f4); r_esp += 4; return;
}

void f_005f1aac(void) /* sub_5F1AAC */
{
    FN_ENTER(0x005f1aac);
    /* 005f1aac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1aad: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1aaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ab1: push 0x8dccd4 */ { u32 v = 0x8dccd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ab6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1abc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1abd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1ac4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1ac7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1aca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1acd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1ad0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1ad3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1ad6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1ad8: je 0x5f1b2f */ if (fZ) goto L_005f1b2f;
L_005f1ada:; BB(0x005f1ada);
    /* 005f1ada: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f1ae1: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ae6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1aebu); f_005caba4();
    /* 005f1aeb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1aec: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f1aef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1af1: je 0x5f1b2b */ if (fZ) goto L_005f1b2b;
L_005f1af3:; BB(0x005f1af3);
    /* 005f1af3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f1afa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1b01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1b04: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1b07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b08: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1b0e: call 0x5f1b40 */ r_esp -= 4; W32(r_esp, 0x5f1b13u); f_005f1b40();
    /* 005f1b13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1b16: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f1b1d:; BB(0x005f1b1d);
    /* 005f1b1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1b20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1b27: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1b29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1b2a: ret  */ FN_RET(0x005f1aac); r_esp += 4; return;
L_005f1b2b:; BB(0x005f1b2b);
    /* 005f1b2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1b2d: jmp 0x5f1b1d */ goto L_005f1b1d;
L_005f1b2f:; BB(0x005f1b2f);
    /* 005f1b2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1b31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1b34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1b3b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1b3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1b3e: ret  */ FN_RET(0x005f1aac); r_esp += 4; return;
}

void f_005f1b40(void) /* sub_5F1B40 */
{
    FN_ENTER(0x005f1b40);
    /* 005f1b40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1b43: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1b47: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1b4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1b4d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f1b52u); f_005e959c();
    /* 005f1b52: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f1b58: mov dword ptr [ebx], 0xb14940 */ W32((u32)(r_ebx), 0xb14940u);
    /* 005f1b5e: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1b61: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f1b67: mov dword ptr [ebx + 0x1e8], 0xa */ W32((u32)(r_ebx+0x1e8u), 0xau);
    /* 005f1b71: mov eax, ebx */ r_eax = r_ebx;
    /* 005f1b73: mov dword ptr [ebx + 0x240], 0xffffffff */ W32((u32)(r_ebx+0x240u), 0xffffffffu);
    /* 005f1b7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1b7e: ret 8 */ FN_RET(0x005f1b40); r_esp += 12; return;
}

void f_005f1b84(void) /* sub_5F1B84 */
{
    FN_ENTER(0x005f1b84);
    /* 005f1b84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b85: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1b86: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1b89: mov esi, ecx */ r_esi = r_ecx;
    /* 005f1b8b: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5f1b90u); f_005c3a8c();
    /* 005f1b90: cmp eax, dword ptr [esi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1b93: jne 0x5f1bcc */ if (!fZ) goto L_005f1bcc;
L_005f1b95:; BB(0x005f1b95);
    /* 005f1b95: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005f1b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1b9a: je 0x5f1bb9 */ if (fZ) goto L_005f1bb9;
L_005f1b9c:; BB(0x005f1b9c);
    /* 005f1b9c: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1b9f: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5f1ba4u); f_005c5528();
    /* 005f1ba4: mov ebx, eax */ r_ebx = r_eax;
    /* 005f1ba6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f1ba9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1bab: je 0x5f1bb9 */ if (fZ) goto L_005f1bb9;
L_005f1bad:; BB(0x005f1bad);
    /* 005f1bad: movsx edx, byte ptr [ebx + 0xf1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0xf1u));
    /* 005f1bb4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1bb7: je 0x5f1bdf */ if (fZ) goto L_005f1bdf;
L_005f1bb9:; BB(0x005f1bb9);
    /* 005f1bb9: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005f1bbd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f1bc2: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005f1bc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f1bc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1bca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f1bcb: ret  */ FN_RET(0x005f1b84); r_esp += 4; return;
L_005f1bcc:; BB(0x005f1bcc);
    /* 005f1bcc: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005f1bd0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f1bd5: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005f1bd9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f1bdc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1bdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f1bde: ret  */ FN_RET(0x005f1b84); r_esp += 4; return;
L_005f1bdf:; BB(0x005f1bdf);
    /* 005f1bdf: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f1be2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1be3: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1be6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1be8: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f1bedu); f_005e83c8();
    /* 005f1bed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1bef: je 0x5f1c2e */ if (fZ) goto L_005f1c2e;
L_005f1bf1:; BB(0x005f1bf1);
    /* 005f1bf1: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f1bf4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1bf5: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005f1bf8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5f1bfdu); f_00508db8();
    /* 005f1bfd: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 005f1c03: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f1c06: je 0x5f1c20 */ if (fZ) goto L_005f1c20;
L_005f1c08:; BB(0x005f1c08);
    /* 005f1c08: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 005f1c0b: test eax, 0x8000000 */ {  u32 a = r_eax; u32 b = 0x8000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1c10: je 0x5f1c20 */ if (fZ) goto L_005f1c20;
L_005f1c12:; BB(0x005f1c12);
    /* 005f1c12: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005f1c15: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5f1c1au); f_00508f48();
    /* 005f1c1a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f1c1d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1c1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f1c1f: ret  */ FN_RET(0x005f1b84); r_esp += 4; return;
L_005f1c20:; BB(0x005f1c20);
    /* 005f1c20: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005f1c23: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x5f1c28u); f_00509580();
    /* 005f1c28: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f1c2b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1c2c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f1c2d: ret  */ FN_RET(0x005f1b84); r_esp += 4; return;
L_005f1c2e:; BB(0x005f1c2e);
    /* 005f1c2e: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 005f1c31: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5f1c36u); f_00508f48();
    /* 005f1c36: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f1c39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1c3a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f1c3b: ret  */ FN_RET(0x005f1b84); r_esp += 4; return;
}

void f_005f1c3c(void) /* sub_5F1C3C */
{
    FN_ENTER(0x005f1c3c);
    /* 005f1c3c: mov dword ptr [0xa8df3c], 0x3f800000 */ W32((u32)(0xa8df3cu), 0x3f800000u);
    /* 005f1c46: mov dword ptr [0xa8df40], 0x41000000 */ W32((u32)(0xa8df40u), 0x41000000u);
    /* 005f1c50: mov dword ptr [0xa8df44], 0x3fc00000 */ W32((u32)(0xa8df44u), 0x3fc00000u);
    /* 005f1c5a: ret  */ FN_RET(0x005f1c3c); r_esp += 4; return;
}

void f_005f1c5c(void) /* sub_5F1C5C */
{
    FN_ENTER(0x005f1c5c);
    /* 005f1c5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1c5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1c61: call 0x5f1c80 */ r_esp -= 4; W32(r_esp, 0x5f1c66u); f_005f1c80();
    /* 005f1c66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f1c6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1c6c: jne 0x5f1c72 */ if (!fZ) goto L_005f1c72;
L_005f1c6e:; BB(0x005f1c6e);
    /* 005f1c6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1c6f: ret 4 */ FN_RET(0x005f1c5c); r_esp += 8; return;
L_005f1c72:; BB(0x005f1c72);
    /* 005f1c72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f1c78u); f_005c2f74();
    /* 005f1c78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1c79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1c7a: ret 4 */ FN_RET(0x005f1c5c); r_esp += 8; return;
}

void f_005f1c80(void) /* sub_5F1C80 */
{
    FN_ENTER(0x005f1c80);
    /* 005f1c80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c81: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1c83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c85: push 0x8dccf0 */ { u32 v = 0x8dccf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1c90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1c91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1c98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1c9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1c9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1ca1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1ca4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1ca7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f1caa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1cad: mov dword ptr [ecx], 0xb14aa0 */ W32((u32)(r_ecx), 0xb14aa0u);
    /* 005f1cb3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f1cba: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f1cbfu); f_005e61c8();
    /* 005f1cbf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1cc2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1cc9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1ccb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1ccc: ret  */ FN_RET(0x005f1c80); r_esp += 4; return;
}

void f_005f1cd0(void) /* sub_5F1CD0 */
{
    FN_ENTER(0x005f1cd0);
    /* 005f1cd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cd1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1cd3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1cd5: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f1cdau); f_005e7f6c();
    /* 005f1cda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1cdc: jne 0x5f1cef */ if (!fZ) goto L_005f1cef;
L_005f1cde:; BB(0x005f1cde);
    /* 005f1cde: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ce0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ce1: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1ce7: call 0x5cc554 */ r_esp -= 4; W32(r_esp, 0x5f1cecu); f_005cc554();
    /* 005f1cec: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f1cef:; BB(0x005f1cef);
    /* 005f1cef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1cf0: ret  */ FN_RET(0x005f1cd0); r_esp += 4; return;
}

void f_005f1cf4(void) /* sub_5F1CF4 */
{
    FN_ENTER(0x005f1cf4);
    /* 005f1cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cf5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1cf7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cf9: push 0x8dcd18 */ { u32 v = 0x8dcd18u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1cfe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1d04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1d0c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1d0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1d12: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1d15: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1d18: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1d1b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1d1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1d20: je 0x5f1d77 */ if (fZ) goto L_005f1d77;
L_005f1d22:; BB(0x005f1d22);
    /* 005f1d22: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f1d29: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d2e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1d33u); f_005caba4();
    /* 005f1d33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1d34: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f1d37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1d39: je 0x5f1d73 */ if (fZ) goto L_005f1d73;
L_005f1d3b:; BB(0x005f1d3b);
    /* 005f1d3b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f1d42: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1d49: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1d4c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1d4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d50: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1d56: call 0x5f1d88 */ r_esp -= 4; W32(r_esp, 0x5f1d5bu); f_005f1d88();
    /* 005f1d5b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1d5e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f1d65:; BB(0x005f1d65);
    /* 005f1d65: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1d68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1d6f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1d71: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1d72: ret  */ FN_RET(0x005f1cf4); r_esp += 4; return;
L_005f1d73:; BB(0x005f1d73);
    /* 005f1d73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1d75: jmp 0x5f1d65 */ goto L_005f1d65;
L_005f1d77:; BB(0x005f1d77);
    /* 005f1d77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1d79: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1d7c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1d83: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1d85: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1d86: ret  */ FN_RET(0x005f1cf4); r_esp += 4; return;
}

void f_005f1d88(void) /* sub_5F1D88 */
{
    FN_ENTER(0x005f1d88);
    /* 005f1d88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1d89: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f1d8b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1d8f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1d93: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f1d95: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f1d9au); f_005e959c();
    /* 005f1d9a: mov dword ptr [ebp], 0xb14aa0 */ W32((u32)(r_ebp), 0xb14aa0u);
    /* 005f1da1: mov eax, ebp */ r_eax = r_ebp;
    /* 005f1da3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1da4: ret 8 */ FN_RET(0x005f1d88); r_esp += 12; return;
}

void f_005f1da8(void) /* sub_5F1DA8 */
{
    FN_ENTER(0x005f1da8);
    /* 005f1da8: mov dword ptr [0xa8df48], 0x3f800000 */ W32((u32)(0xa8df48u), 0x3f800000u);
    /* 005f1db2: mov dword ptr [0xa8df4c], 0x41000000 */ W32((u32)(0xa8df4cu), 0x41000000u);
    /* 005f1dbc: mov dword ptr [0xa8df50], 0x3fc00000 */ W32((u32)(0xa8df50u), 0x3fc00000u);
    /* 005f1dc6: ret  */ FN_RET(0x005f1da8); r_esp += 4; return;
}

void f_005f1dc8(void) /* sub_5F1DC8 */
{
    FN_ENTER(0x005f1dc8);
    /* 005f1dc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1dc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1dcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1dcd: push 0x8dcd34 */ { u32 v = 0x8dcd34u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1dd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1dd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1dd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1de0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1de3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1de6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f1de9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f1dec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f1def: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f1df2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f1df5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f1df7: mov dword ptr [eax], 0xb14c00 */ W32((u32)(r_eax), 0xb14c00u);
    /* 005f1dfd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f1e04: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f1e09u); f_005e61c8();
    /* 005f1e09: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1e0c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1e0e: jne 0x5f1e20 */ if (!fZ) goto L_005f1e20;
L_005f1e10:; BB(0x005f1e10);
    /* 005f1e10: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1e13: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1e1a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1e1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1e1d: ret 4 */ FN_RET(0x005f1dc8); r_esp += 8; return;
L_005f1e20:; BB(0x005f1e20);
    /* 005f1e20: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f1e23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e24: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f1e29u); f_005c2f74();
    /* 005f1e29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1e2a: jmp 0x5f1e10 */ goto L_005f1e10;
}

void f_005f1e2c(void) /* sub_5F1E2C */
{
    FN_ENTER(0x005f1e2c);
    /* 005f1e2c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005f1e30: mov dword ptr [edx + 0x78], 0x1bb */ W32((u32)(r_edx+0x78u), 0x1bbu);
    /* 005f1e37: mov dword ptr [edx + 0x74], 0x5cea74 */ W32((u32)(r_edx+0x74u), 0x5cea74u);
    /* 005f1e3e: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005f1e44: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005f1e47: ret 4 */ FN_RET(0x005f1e2c); r_esp += 8; return;
}

void f_005f1e4c(void) /* sub_5F1E4C */
{
    FN_ENTER(0x005f1e4c);
    /* 005f1e4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e4d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1e4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e51: push 0x8dcd5c */ { u32 v = 0x8dcd5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1e5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1e64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1e67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1e6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1e6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1e70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1e73: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1e76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1e78: je 0x5f1ecf */ if (fZ) goto L_005f1ecf;
L_005f1e7a:; BB(0x005f1e7a);
    /* 005f1e7a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f1e81: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1e86: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1e8bu); f_005caba4();
    /* 005f1e8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1e8c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f1e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f1e91: je 0x5f1ecb */ if (fZ) goto L_005f1ecb;
L_005f1e93:; BB(0x005f1e93);
    /* 005f1e93: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f1e9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f1ea1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f1ea4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1ea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ea8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1eae: call 0x5f1ee0 */ r_esp -= 4; W32(r_esp, 0x5f1eb3u); f_005f1ee0();
    /* 005f1eb3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1eb6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f1ebd:; BB(0x005f1ebd);
    /* 005f1ebd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1ec0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1ec7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1ec9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1eca: ret  */ FN_RET(0x005f1e4c); r_esp += 4; return;
L_005f1ecb:; BB(0x005f1ecb);
    /* 005f1ecb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1ecd: jmp 0x5f1ebd */ goto L_005f1ebd;
L_005f1ecf:; BB(0x005f1ecf);
    /* 005f1ecf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1ed1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1ed4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1edb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1edd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1ede: ret  */ FN_RET(0x005f1e4c); r_esp += 4; return;
}

void f_005f1ee0(void) /* sub_5F1EE0 */
{
    FN_ENTER(0x005f1ee0);
    /* 005f1ee0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ee1: mov edi, ecx */ r_edi = r_ecx;
    /* 005f1ee3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1ee7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f1eeb: mov ecx, edi */ r_ecx = r_edi;
    /* 005f1eed: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f1ef2u); f_005e959c();
    /* 005f1ef2: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005f1ef8: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005f1eff: mov dword ptr [edi], 0xb14c00 */ W32((u32)(r_edi), 0xb14c00u);
    /* 005f1f05: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f1f0a: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005f1f10: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f1f13: jne 0x5f1f2b */ if (!fZ) goto L_005f1f2b;
L_005f1f15:; BB(0x005f1f15);
    /* 005f1f15: mov dword ptr [edi + 0x240], 0xa */ W32((u32)(r_edi+0x240u), 0xau);
    /* 005f1f1f: mov dword ptr [edi + 0x208], 0x40a00000 */ W32((u32)(r_edi+0x208u), 0x40a00000u);
    /* 005f1f29: jmp 0x5f1f3f */ goto L_005f1f3f;
L_005f1f2b:; BB(0x005f1f2b);
    /* 005f1f2b: mov dword ptr [edi + 0x240], 1 */ W32((u32)(r_edi+0x240u), 0x1u);
    /* 005f1f35: mov dword ptr [edi + 0x208], 0x40a00000 */ W32((u32)(r_edi+0x208u), 0x40a00000u);
L_005f1f3f:; BB(0x005f1f3f);
    /* 005f1f3f: mov eax, edi */ r_eax = r_edi;
    /* 005f1f41: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f1f42: ret 8 */ FN_RET(0x005f1ee0); r_esp += 12; return;
}

void f_005f1f48(void) /* sub_5F1F48 */
{
    FN_ENTER(0x005f1f48);
    /* 005f1f48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f1f4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f1f4d: call 0x5f1f6c */ r_esp -= 4; W32(r_esp, 0x5f1f52u); f_005f1f6c();
    /* 005f1f52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f1f56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1f58: jne 0x5f1f5e */ if (!fZ) goto L_005f1f5e;
L_005f1f5a:; BB(0x005f1f5a);
    /* 005f1f5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1f5b: ret 4 */ FN_RET(0x005f1f48); r_esp += 8; return;
L_005f1f5e:; BB(0x005f1f5e);
    /* 005f1f5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f1f64u); f_005c2f74();
    /* 005f1f64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f1f65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f1f66: ret 4 */ FN_RET(0x005f1f48); r_esp += 8; return;
}

void f_005f1f6c(void) /* sub_5F1F6C */
{
    FN_ENTER(0x005f1f6c);
    /* 005f1f6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f6d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1f6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f71: push 0x8dcd78 */ { u32 v = 0x8dcd78u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1f7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1f7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1f84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1f87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1f8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f1f8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f1f90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f1f93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f1f96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f1f99: mov dword ptr [ecx], 0xb14d80 */ W32((u32)(r_ecx), 0xb14d80u);
    /* 005f1f9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f1fa6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f1fabu); f_005e61c8();
    /* 005f1fab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f1fae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f1fb5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f1fb7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f1fb8: ret  */ FN_RET(0x005f1f6c); r_esp += 4; return;
}

void f_005f1fbc(void) /* sub_5F1FBC */
{
    FN_ENTER(0x005f1fbc);
    /* 005f1fbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fbd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f1fbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fc1: push 0x8dcda0 */ { u32 v = 0x8dcda0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f1fcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f1fcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f1fd4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f1fd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f1fda: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005f1fdd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005f1fe0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005f1fe3: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005f1fe9: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005f1fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f1fee: je 0x5f204d */ if (fZ) goto L_005f204d;
L_005f1ff0:; BB(0x005f1ff0);
    /* 005f1ff0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f1ff7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f1ff9: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f1ffeu); f_005caba4();
    /* 005f1ffe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005f2001: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f2004: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f2007: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f2009: je 0x5f204d */ if (fZ) goto L_005f204d;
L_005f200b:; BB(0x005f200b);
    /* 005f200b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f2012: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f2019: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f201c: mov ecx, eax */ r_ecx = r_eax;
    /* 005f201e: push 0xe10 */ { u32 v = 0xe10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f2023: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f202a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f202b: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f2031: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f2036u); f_005e5cac();
    /* 005f2036: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f2039: mov dword ptr [eax], 0xb0f808 */ W32((u32)(r_eax), 0xb0f808u);
    /* 005f203f: mov dword ptr [eax + 0x2c], 0x3e800000 */ W32((u32)(r_eax+0x2cu), 0x3e800000u);
    /* 005f2046: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f204d:; BB(0x005f204d);
    /* 005f204d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f2050: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f2057: mov esp, ebp */ r_esp = r_ebp;
    /* 005f2059: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f205a: ret  */ FN_RET(0x005f1fbc); r_esp += 4; return;
}

