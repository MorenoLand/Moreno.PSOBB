#include "protos.h"

void f_005e1084(void) /* sub_5E1084 */
{
    FN_ENTER(0x005e1084);
    /* 005e1084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1086: mov edi, ecx */ r_edi = r_ecx;
    /* 005e1088: call 0x5c3a8c */ r_esp -= 4; W32(r_esp, 0x5e108du); f_005c3a8c();
    /* 005e108d: cmp eax, dword ptr [edi + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x28u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1090: jne 0x5e10d4 */ if (!fZ) goto L_005e10d4;
L_005e1092:; BB(0x005e1092);
    /* 005e1092: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 005e1095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1097: je 0x5e10c4 */ if (fZ) goto L_005e10c4;
L_005e1099:; BB(0x005e1099);
    /* 005e1099: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 005e109d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e109e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e10a3u); f_0068d5a8();
    /* 005e10a3: mov esi, eax */ r_esi = r_eax;
    /* 005e10a5: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e10a8: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x5e10adu); f_005c5528();
    /* 005e10ad: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e10b0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10b2: je 0x5e10c4 */ if (fZ) goto L_005e10c4;
L_005e10b4:; BB(0x005e10b4);
    /* 005e10b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10b6: je 0x5e10c4 */ if (fZ) goto L_005e10c4;
L_005e10b8:; BB(0x005e10b8);
    /* 005e10b8: movsx edx, byte ptr [eax + 0xf1] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0xf1u));
    /* 005e10bf: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10c2: je 0x5e10e4 */ if (fZ) goto L_005e10e4;
L_005e10c4:; BB(0x005e10c4);
    /* 005e10c4: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e10c8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e10cd: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005e10d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e10d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e10d3: ret  */ FN_RET(0x005e1084); r_esp += 4; return;
L_005e10d4:; BB(0x005e10d4);
    /* 005e10d4: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e10d8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e10dd: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005e10e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e10e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e10e3: ret  */ FN_RET(0x005e1084); r_esp += 4; return;
L_005e10e4:; BB(0x005e10e4);
    /* 005e10e4: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005e10e7: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e10ed: jne 0x5e1104 */ if (!fZ) goto L_005e1104;
L_005e10ef:; BB(0x005e10ef);
    /* 005e10ef: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 005e10f5: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e10f8: jne 0x5e1104 */ if (!fZ) goto L_005e1104;
L_005e10fa:; BB(0x005e10fa);
    /* 005e10fa: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 005e10fd: call 0x509580 */ r_esp -= 4; W32(r_esp, 0x5e1102u); f_00509580();
    /* 005e1102: jmp 0x5e110c */ goto L_005e110c;
L_005e1104:; BB(0x005e1104);
    /* 005e1104: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 005e1107: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x5e110cu); f_00508f48();
L_005e110c:; BB(0x005e110c);
    /* 005e110c: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 005e110f: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e1115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1116: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5e111bu); f_00508db8();
    /* 005e111b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e111c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e111d: ret  */ FN_RET(0x005e1084); r_esp += 4; return;
}

void f_005e1120(void) /* sub_5E1120 */
{
    FN_ENTER(0x005e1120);
    /* 005e1120: mov dword ptr [0xa8dbdc], 0x3f800000 */ W32((u32)(0xa8dbdcu), 0x3f800000u);
    /* 005e112a: mov dword ptr [0xa8dbe0], 0x41000000 */ W32((u32)(0xa8dbe0u), 0x41000000u);
    /* 005e1134: mov dword ptr [0xa8dbe4], 0x3fc00000 */ W32((u32)(0xa8dbe4u), 0x3fc00000u);
    /* 005e113e: ret  */ FN_RET(0x005e1120); r_esp += 4; return;
}

void f_005e1140(void) /* sub_5E1140 */
{
    FN_ENTER(0x005e1140);
    /* 005e1140: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1141: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1143: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1145: push 0x8db4ac */ { u32 v = 0x8db4acu; r_esp -= 4; W32(r_esp, v); }
    /* 005e114a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1150: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1151: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e1158: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e115b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e115e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e1161: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e1164: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e1167: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e116a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e116d: mov eax, ecx */ r_eax = r_ecx;
    /* 005e116f: mov dword ptr [eax], 0xb0f7f0 */ W32((u32)(r_eax), 0xb0f7f0u);
    /* 005e1175: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e117c: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e1181u); f_005e5c50();
    /* 005e1181: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1184: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1186: jne 0x5e1198 */ if (!fZ) goto L_005e1198;
L_005e1188:; BB(0x005e1188);
    /* 005e1188: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e118b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e1192: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1194: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1195: ret 4 */ FN_RET(0x005e1140); r_esp += 8; return;
L_005e1198:; BB(0x005e1198);
    /* 005e1198: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e119b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e119c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e11a1u); f_005c2f74();
    /* 005e11a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e11a2: jmp 0x5e1188 */ goto L_005e1188;
}

void f_005e11a4(void) /* sub_5E11A4 */
{
    FN_ENTER(0x005e11a4);
    /* 005e11a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e11a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005e11a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e11a9: push 0x8db4c8 */ { u32 v = 0x8db4c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e11ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e11b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e11b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e11bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e11bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e11c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e11c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e11c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e11cb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e11ce: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e11d1: mov eax, ecx */ r_eax = r_ecx;
    /* 005e11d3: mov dword ptr [eax], 0xb0f808 */ W32((u32)(r_eax), 0xb0f808u);
    /* 005e11d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e11e0: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e11e5u); f_005e5c50();
    /* 005e11e5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e11e8: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e11ea: jne 0x5e11fc */ if (!fZ) goto L_005e11fc;
L_005e11ec:; BB(0x005e11ec);
    /* 005e11ec: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e11ef: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e11f6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e11f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e11f9: ret 4 */ FN_RET(0x005e11a4); r_esp += 8; return;
L_005e11fc:; BB(0x005e11fc);
    /* 005e11fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e11ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1200: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e1205u); f_005c2f74();
    /* 005e1205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1206: jmp 0x5e11ec */ goto L_005e11ec;
}

void f_005e1208(void) /* sub_5E1208 */
{
    FN_ENTER(0x005e1208);
    /* 005e1208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1209: mov ebp, esp */ r_ebp = r_esp;
    /* 005e120b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e120d: push 0x8db4e4 */ { u32 v = 0x8db4e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e1220: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e1226: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e1229: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e122c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e122f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e1232: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e1235: mov eax, ecx */ r_eax = r_ecx;
    /* 005e1237: mov dword ptr [eax], 0xb0f820 */ W32((u32)(r_eax), 0xb0f820u);
    /* 005e123d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e1244: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e1249u); f_005e5c50();
    /* 005e1249: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e124c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e124e: jne 0x5e1260 */ if (!fZ) goto L_005e1260;
L_005e1250:; BB(0x005e1250);
    /* 005e1250: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1253: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e125a: mov esp, ebp */ r_esp = r_ebp;
    /* 005e125c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e125d: ret 4 */ FN_RET(0x005e1208); r_esp += 8; return;
L_005e1260:; BB(0x005e1260);
    /* 005e1260: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1264: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e1269u); f_005c2f74();
    /* 005e1269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e126a: jmp 0x5e1250 */ goto L_005e1250;
}

void f_005e126c(void) /* sub_5E126C */
{
    FN_ENTER(0x005e126c);
    /* 005e126c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e126d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e126f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1271: push 0x8db500 */ { u32 v = 0x8db500u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1276: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e127c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e127d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e1284: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1287: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e128a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e128d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e1290: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e1293: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e1296: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e1299: mov eax, ecx */ r_eax = r_ecx;
    /* 005e129b: mov dword ptr [eax], 0xb0f838 */ W32((u32)(r_eax), 0xb0f838u);
    /* 005e12a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e12a8: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e12adu); f_005e5c50();
    /* 005e12ad: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e12b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e12b2: jne 0x5e12c4 */ if (!fZ) goto L_005e12c4;
L_005e12b4:; BB(0x005e12b4);
    /* 005e12b4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e12b7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e12be: mov esp, ebp */ r_esp = r_ebp;
    /* 005e12c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e12c1: ret 4 */ FN_RET(0x005e126c); r_esp += 8; return;
L_005e12c4:; BB(0x005e12c4);
    /* 005e12c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e12c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e12c8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e12cdu); f_005c2f74();
    /* 005e12cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e12ce: jmp 0x5e12b4 */ goto L_005e12b4;
}

void f_005e12d0(void) /* sub_5E12D0 */
{
    FN_ENTER(0x005e12d0);
    /* 005e12d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e12d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e12d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e12d5: push 0x8db51c */ { u32 v = 0x8db51cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e12da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e12e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e12e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e12e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e12eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e12ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e12f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e12f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e12f7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e12fa: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e12fd: mov eax, ecx */ r_eax = r_ecx;
    /* 005e12ff: mov dword ptr [eax], 0xb0f850 */ W32((u32)(r_eax), 0xb0f850u);
    /* 005e1305: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e130c: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e1311u); f_005e5c50();
    /* 005e1311: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1314: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1316: jne 0x5e1328 */ if (!fZ) goto L_005e1328;
L_005e1318:; BB(0x005e1318);
    /* 005e1318: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e131b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e1322: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1324: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1325: ret 4 */ FN_RET(0x005e12d0); r_esp += 8; return;
L_005e1328:; BB(0x005e1328);
    /* 005e1328: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e132b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e132c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e1331u); f_005c2f74();
    /* 005e1331: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1332: jmp 0x5e1318 */ goto L_005e1318;
}

void f_005e1334(void) /* sub_5E1334 */
{
    FN_ENTER(0x005e1334);
    /* 005e1334: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1335: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e1337: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e1339: call 0x5e1358 */ r_esp -= 4; W32(r_esp, 0x5e133eu); f_005e1358();
    /* 005e133e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e1342: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1344: jne 0x5e134a */ if (!fZ) goto L_005e134a;
L_005e1346:; BB(0x005e1346);
    /* 005e1346: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e1347: ret 4 */ FN_RET(0x005e1334); r_esp += 8; return;
L_005e134a:; BB(0x005e134a);
    /* 005e134a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e134b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e1350u); f_005c2f74();
    /* 005e1350: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1351: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e1352: ret 4 */ FN_RET(0x005e1334); r_esp += 8; return;
}

void f_005e1358(void) /* sub_5E1358 */
{
    FN_ENTER(0x005e1358);
    /* 005e1358: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1359: mov ebp, esp */ r_ebp = r_esp;
    /* 005e135b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e135d: push 0x8db538 */ { u32 v = 0x8db538u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1362: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1369: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e1370: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1373: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e1376: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e1379: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e137c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e137f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e1382: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1389: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e138c: mov dword ptr [ecx], 0xb0f880 */ W32((u32)(r_ecx), 0xb0f880u);
    /* 005e1392: call 0x5d16b0 */ r_esp -= 4; W32(r_esp, 0x5e1397u); f_005d16b0();
    /* 005e1397: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e139e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e13a1: call 0x5d1654 */ r_esp -= 4; W32(r_esp, 0x5e13a6u); f_005d1654();
    /* 005e13a6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e13a9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e13b0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e13b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e13b3: ret  */ FN_RET(0x005e1358); r_esp += 4; return;
}

void f_005e13b4(void) /* sub_5E13B4 */
{
    FN_ENTER(0x005e13b4);
    /* 005e13b4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e13b5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e13b7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e13b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e13bb: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5e13c1u); call_ind(t); }
    /* 005e13c1: push dword ptr [ebx + 0x1b8] */ { u32 v = R32((u32)(r_ebx+0x1b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e13c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e13c9: call 0x5d189c */ r_esp -= 4; W32(r_esp, 0x5e13ceu); f_005d189c();
    /* 005e13ce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e13d0: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x5e13d5u); f_005c42f4();
    /* 005e13d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e13d7: call 0x5d19f8 */ r_esp -= 4; W32(r_esp, 0x5e13dcu); f_005d19f8();
    /* 005e13dc: mov eax, dword ptr [ebx + 0x194] */ r_eax = R32((u32)(r_ebx+0x194u));
    /* 005e13e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e13e4: je 0x5e1417 */ if (fZ) goto L_005e1417;
L_005e13e6:; BB(0x005e13e6);
    /* 005e13e6: fld dword ptr [ebx + 0x1ec] */ FPUSH(R_F32((u32)(r_ebx+0x1ecu)));
    /* 005e13ec: fadd dword ptr [ebx + 0x1e8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x1e8u));
    /* 005e13f2: fst dword ptr [ebx + 0x1ec] */ W_F32((u32)(r_ebx+0x1ecu), ST(0));
    /* 005e13f8: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 005e13fb: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e13fe: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005e1401: fadd dword ptr [edx*4 + 0x92d428] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92d428u));
    /* 005e1408: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005e140a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e140c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e140d: ja 0x5e1439 */ if ((!fC&&!fZ)) goto L_005e1439;
L_005e140f:; BB(0x005e140f);
    /* 005e140f: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005e1411: fstp dword ptr [ebx + 0x1ec] */ W_F32((u32)(r_ebx+0x1ecu), ST(0)); FPOP();
L_005e1417:; BB(0x005e1417);
    /* 005e1417: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005e141e: cmp eax, 0x93 */ {  u32 a = r_eax; u32 b = 0x93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1423: je 0x5e1427 */ if (fZ) goto L_005e1427;
L_005e1425:; BB(0x005e1425);
    /* 005e1425: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e1426: ret  */ FN_RET(0x005e13b4); r_esp += 4; return;
L_005e1427:; BB(0x005e1427);
    /* 005e1427: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5e142cu); f_0077bab4();
    /* 005e142c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005e142e: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1431: mov dword ptr [ebx + 0x1f8], eax */ W32((u32)(r_ebx+0x1f8u), r_eax);
    /* 005e1437: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e1438: ret  */ FN_RET(0x005e13b4); r_esp += 4; return;
L_005e1439:; BB(0x005e1439);
    /* 005e1439: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e143b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e143d: jmp 0x5e1417 */ goto L_005e1417;
}

void f_005e1440(void) /* sub_5E1440 */
{
    FN_ENTER(0x005e1440);
    /* 005e1440: movzx eax, byte ptr [ecx + 0x1e6] */ r_eax = (u32)R8((u32)(r_ecx+0x1e6u));
    /* 005e1447: movzx edx, byte ptr [ecx + 0x1e4] */ r_edx = (u32)R8((u32)(r_ecx+0x1e4u));
    /* 005e144e: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1450: jge 0x5e1459 */ if ((fS==fO)) goto L_005e1459;
L_005e1452:; BB(0x005e1452);
    /* 005e1452: mov byte ptr [ecx + 0x1e4], 0 */ W8((u32)(r_ecx+0x1e4u), 0x0u);
L_005e1459:; BB(0x005e1459);
    /* 005e1459: movzx eax, byte ptr [ecx + 0x1e7] */ r_eax = (u32)R8((u32)(r_ecx+0x1e7u));
    /* 005e1460: movzx edx, byte ptr [ecx + 0x1e5] */ r_edx = (u32)R8((u32)(r_ecx+0x1e5u));
    /* 005e1467: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1469: jge 0x5e1472 */ if ((fS==fO)) goto L_005e1472;
L_005e146b:; BB(0x005e146b);
    /* 005e146b: mov byte ptr [ecx + 0x1e5], 0 */ W8((u32)(r_ecx+0x1e5u), 0x0u);
L_005e1472:; BB(0x005e1472);
    /* 005e1472: ret  */ FN_RET(0x005e1440); r_esp += 4; return;
}

void f_005e1474(void) /* sub_5E1474 */
{
    FN_ENTER(0x005e1474);
    /* 005e1474: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1475: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1477: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1479: push 0x8db66e */ { u32 v = 0x8db66eu; r_esp -= 4; W32(r_esp, v); }
    /* 005e147e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1484: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1485: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e148c: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e148f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e1492: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005e1495: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005e1498: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005e149b: mov eax, dword ptr [ecx + 0xdc] */ r_eax = R32((u32)(r_ecx+0xdcu));
    /* 005e14a1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005e14a4: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e14a6: jne 0x5e14c2 */ if (!fZ) goto L_005e14c2;
L_005e14a8:; BB(0x005e14a8);
    /* 005e14a8: mov eax, ecx */ r_eax = r_ecx;
    /* 005e14aa: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 005e14b0: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e14b3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e14b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e14b8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005e14ba: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5e14bfu); f_00814298();
    /* 005e14bf: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e14c2:; BB(0x005e14c2);
    /* 005e14c2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005e14c5: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005e14cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e14cd: je 0x5e17c0 */ if (fZ) goto L_005e17c0;
L_005e14d3:; BB(0x005e14d3);
    /* 005e14d3: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005e14da: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005e14dd: cmp edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e14e0: je 0x5e1885 */ if (fZ) goto L_005e1885;
L_005e14e6:; BB(0x005e14e6);
    /* 005e14e6: mov eax, edx */ r_eax = r_edx;
    /* 005e14e8: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e14eb: je 0x5e1836 */ if (fZ) goto L_005e1836;
L_005e14f1:; BB(0x005e14f1);
    /* 005e14f1: cmp eax, 0x8d */ {  u32 a = r_eax; u32 b = 0x8du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e14f6: je 0x5e17d4 */ if (fZ) goto L_005e17d4;
L_005e14fc:; BB(0x005e14fc);
    /* 005e14fc: cmp eax, 0x8f */ {  u32 a = r_eax; u32 b = 0x8fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1501: je 0x5e15df */ if (fZ) goto L_005e15df;
L_005e1507:; BB(0x005e1507);
    /* 005e1507: cmp eax, 0x90 */ {  u32 a = r_eax; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e150c: jne 0x5e1572 */ if (!fZ) goto L_005e1572;
L_005e150e:; BB(0x005e150e);
    /* 005e150e: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 005e1515: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1517: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e151cu); f_005caba4();
    /* 005e151c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e151d: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005e1520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1522: je 0x5e1566 */ if (fZ) goto L_005e1566;
L_005e1524:; BB(0x005e1524);
    /* 005e1524: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 005e152b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005e1532: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1535: mov ebx, dword ptr [ebp - 0x70] */ r_ebx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e1538: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005e153d: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e1544: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e1546: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1547: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e154d: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e1552u); f_005e5cac();
    /* 005e1552: mov dword ptr [ebx], 0xb0f838 */ W32((u32)(r_ebx), 0xb0f838u);
    /* 005e1558: mov dword ptr [ebx + 0x2c], 0x3f800000 */ W32((u32)(r_ebx+0x2cu), 0x3f800000u);
    /* 005e155f: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_005e1566:; BB(0x005e1566);
    /* 005e1566: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e156d: jmp 0x5e176a */ goto L_005e176a;
L_005e1572:; BB(0x005e1572);
    /* 005e1572: cmp eax, 0x8e */ {  u32 a = r_eax; u32 b = 0x8eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1577: jne 0x5e176a */ if (!fZ) goto L_005e176a;
L_005e157d:; BB(0x005e157d);
    /* 005e157d: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 005e1584: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1586: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e158bu); f_005caba4();
    /* 005e158b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e158e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1591: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 005e1594: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1596: je 0x5e15d3 */ if (fZ) goto L_005e15d3;
L_005e1598:; BB(0x005e1598);
    /* 005e1598: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 005e159f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e15a6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e15a9: mov ecx, eax */ r_ecx = r_eax;
    /* 005e15ab: push 0x2b2 */ { u32 v = 0x2b2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e15b0: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e15b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e15b8: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e15be: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e15c3u); f_005e5cac();
    /* 005e15c3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e15c6: mov dword ptr [eax], 0xb0f7f0 */ W32((u32)(r_eax), 0xb0f7f0u);
    /* 005e15cc: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_005e15d3:; BB(0x005e15d3);
    /* 005e15d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e15da: jmp 0x5e176a */ goto L_005e176a;
L_005e15df:; BB(0x005e15df);
    /* 005e15df: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005e15e6: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e15e8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e15edu); f_005caba4();
    /* 005e15ed: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e15f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e15f3: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 005e15f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e15f8: je 0x5e163c */ if (fZ) goto L_005e163c;
L_005e15fa:; BB(0x005e15fa);
    /* 005e15fa: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 005e1601: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005e1608: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e160b: mov ecx, eax */ r_ecx = r_eax;
    /* 005e160d: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1612: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e1619: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e161a: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1620: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e1625u); f_005e5cac();
    /* 005e1625: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e1628: mov dword ptr [eax], 0xb0f808 */ W32((u32)(r_eax), 0xb0f808u);
    /* 005e162e: mov dword ptr [eax + 0x2c], 0x3e800000 */ W32((u32)(r_eax+0x2cu), 0x3e800000u);
    /* 005e1635: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_005e163c:; BB(0x005e163c);
    /* 005e163c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e1643: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 005e164a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e164c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e1651u); f_005caba4();
    /* 005e1651: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e1654: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1657: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
    /* 005e165a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e165c: je 0x5e16a0 */ if (fZ) goto L_005e16a0;
L_005e165e:; BB(0x005e165e);
    /* 005e165e: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 005e1665: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 005e166c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e166f: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1671: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1676: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e167d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e167e: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1684: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e1689u); f_005e5cac();
    /* 005e1689: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e168c: mov dword ptr [eax], 0xb0f820 */ W32((u32)(r_eax), 0xb0f820u);
    /* 005e1692: mov dword ptr [eax + 0x2c], 0x3e800000 */ W32((u32)(r_eax+0x2cu), 0x3e800000u);
    /* 005e1699: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
L_005e16a0:; BB(0x005e16a0);
    /* 005e16a0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e16a7: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005e16ae: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e16b0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e16b5u); f_005caba4();
    /* 005e16b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e16b6: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 005e16b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e16bb: je 0x5e16ff */ if (fZ) goto L_005e16ff;
L_005e16bd:; BB(0x005e16bd);
    /* 005e16bd: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 005e16c4: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 005e16cb: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e16ce: mov ebx, dword ptr [ebp - 0x70] */ r_ebx = R32((u32)(r_ebp+0xffffff90u));
    /* 005e16d1: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005e16d6: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e16dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e16df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e16e0: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e16e6: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e16ebu); f_005e5cac();
    /* 005e16eb: mov dword ptr [ebx], 0xb0f838 */ W32((u32)(r_ebx), 0xb0f838u);
    /* 005e16f1: mov dword ptr [ebx + 0x2c], 0x3e800000 */ W32((u32)(r_ebx+0x2cu), 0x3e800000u);
    /* 005e16f8: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_005e16ff:; BB(0x005e16ff);
    /* 005e16ff: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e1706: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005e170d: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e170f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e1714u); f_005caba4();
    /* 005e1714: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e1717: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e171a: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005e171d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e171f: je 0x5e1763 */ if (fZ) goto L_005e1763;
L_005e1721:; BB(0x005e1721);
    /* 005e1721: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005e1728: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 005e172f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1732: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1734: push 0x2328 */ { u32 v = 0x2328u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1739: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e1740: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1741: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1747: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e174cu); f_005e5cac();
    /* 005e174c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e174f: mov dword ptr [eax], 0xb0f850 */ W32((u32)(r_eax), 0xb0f850u);
    /* 005e1755: mov dword ptr [eax + 0x2c], 0x3e800000 */ W32((u32)(r_eax+0x2cu), 0x3e800000u);
    /* 005e175c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005e1763:; BB(0x005e1763);
    /* 005e1763: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_005e176a:; BB(0x005e176a);
    /* 005e176a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e176d: cmp eax, 0x53 */ {  u32 a = r_eax; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1770: jl 0x5e17c0 */ if ((fS!=fO)) goto L_005e17c0;
L_005e1772:; BB(0x005e1772);
    /* 005e1772: cmp eax, 0x82 */ {  u32 a = r_eax; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1777: jg 0x5e17c0 */ if ((!fZ&&fS==fO)) goto L_005e17c0;
L_005e1779:; BB(0x005e1779);
    /* 005e1779: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005e1780: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1782: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e1787u); f_005caba4();
    /* 005e1787: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1788: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005e178b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e178d: je 0x5e17c0 */ if (fZ) goto L_005e17c0;
L_005e178f:; BB(0x005e178f);
    /* 005e178f: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005e1796: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 005e179d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005e17a0: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e17a3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e17a4: movzx ebx, word ptr [esi + 0xe4] */ r_ebx = (u32)R16((u32)(r_esi+0xe4u));
    /* 005e17ab: mov ecx, eax */ r_ecx = r_eax;
    /* 005e17ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e17ae: push dword ptr [esi + 0x18c] */ { u32 v = R32((u32)(r_esi+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e17b4: call 0x5d145c */ r_esp -= 4; W32(r_esp, 0x5e17b9u); f_005d145c();
    /* 005e17b9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005e17c0:; BB(0x005e17c0);
    /* 005e17c0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e17c3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e17c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e17c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e17d0: mov esp, ebp */ r_esp = r_ebp;
    /* 005e17d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e17d3: ret  */ FN_RET(0x005e1474); r_esp += 4; return;
L_005e17d4:; BB(0x005e17d4);
    /* 005e17d4: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 005e17db: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e17dd: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e17e2u); f_005caba4();
    /* 005e17e2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e17e5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e17e8: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005e17eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e17ed: je 0x5e182a */ if (fZ) goto L_005e182a;
L_005e17ef:; BB(0x005e17ef);
    /* 005e17ef: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 005e17f6: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 005e17fd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1800: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1802: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1807: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e180e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e180f: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1815: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e181au); f_005e5cac();
    /* 005e181a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e181d: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005e1823: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_005e182a:; BB(0x005e182a);
    /* 005e182a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e1831: jmp 0x5e176a */ goto L_005e176a;
L_005e1836:; BB(0x005e1836);
    /* 005e1836: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005e183d: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e183f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e1844u); f_005caba4();
    /* 005e1844: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1845: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 005e1848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e184a: je 0x5e1879 */ if (fZ) goto L_005e1879;
L_005e184c:; BB(0x005e184c);
    /* 005e184c: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 005e1853: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 005e185a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e185d: movzx edx, word ptr [ebx + 0xe4] */ r_edx = (u32)R16((u32)(r_ebx+0xe4u));
    /* 005e1864: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1865: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1867: push dword ptr [ebx + 0x18c] */ { u32 v = R32((u32)(r_ebx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e186d: call 0x5d12fc */ r_esp -= 4; W32(r_esp, 0x5e1872u); f_005d12fc();
    /* 005e1872: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_005e1879:; BB(0x005e1879);
    /* 005e1879: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e1880: jmp 0x5e176a */ goto L_005e176a;
L_005e1885:; BB(0x005e1885);
    /* 005e1885: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 005e188c: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e188e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e1893u); f_005caba4();
    /* 005e1893: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e1896: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1899: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 005e189c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e189e: je 0x5e18db */ if (fZ) goto L_005e18db;
L_005e18a0:; BB(0x005e18a0);
    /* 005e18a0: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 005e18a7: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 005e18ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e18b1: mov ecx, eax */ r_ecx = r_eax;
    /* 005e18b3: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e18b8: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e18bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e18c0: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e18c6: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e18cbu); f_005e5cac();
    /* 005e18cb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e18ce: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005e18d4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_005e18db:; BB(0x005e18db);
    /* 005e18db: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e18e2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005e18e9: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e18eb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e18f0u); f_005caba4();
    /* 005e18f0: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005e18f3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e18f6: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005e18f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e18fb: je 0x5e1938 */ if (fZ) goto L_005e1938;
L_005e18fd:; BB(0x005e18fd);
    /* 005e18fd: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005e1904: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 005e190b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e190e: mov ecx, eax */ r_ecx = r_eax;
    /* 005e1910: push 0x1c2 */ { u32 v = 0x1c2u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1915: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005e191c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e191d: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1923: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5e1928u); f_005e5cac();
    /* 005e1928: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e192b: mov dword ptr [eax], 0xb0f2f0 */ W32((u32)(r_eax), 0xb0f2f0u);
    /* 005e1931: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005e1938:; BB(0x005e1938);
    /* 005e1938: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e193f: jmp 0x5e176a */ goto L_005e176a;
}

void f_005e1944(void) /* sub_5E1944 */
{
    FN_ENTER(0x005e1944);
    /* 005e1944: call 0x5d1978 */ r_esp -= 4; W32(r_esp, 0x5e1949u); f_005d1978();
    /* 005e1949: ret  */ FN_RET(0x005e1944); r_esp += 4; return;
}

void f_005e194c(void) /* sub_5E194C */
{
    FN_ENTER(0x005e194c);
    /* 005e194c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e194f: mov eax, ecx */ r_eax = r_ecx;
    /* 005e1951: movsx edx, word ptr [eax + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x1bcu));
    /* 005e1958: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e195a: je 0x5e1a1f */ if (fZ) goto L_005e1a1f;
L_005e1960:; BB(0x005e1960);
    /* 005e1960: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005e1964: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 005e1968: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e196c: mov edi, eax */ r_edi = r_eax;
    /* 005e196e: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 005e1971: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1973: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e1975: mov ebp, edx */ r_ebp = r_edx;
    /* 005e1977: mov esi, ecx */ r_esi = r_ecx;
L_005e1979:; BB(0x005e1979);
    /* 005e1979: cmp ebp, 0xe */ {  u32 a = r_ebp; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e197c: je 0x5e1a02 */ if (fZ) goto L_005e1a02;
L_005e1982:; BB(0x005e1982);
    /* 005e1982: cmp ebp, 0x11 */ {  u32 a = r_ebp; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1985: je 0x5e1a02 */ if (fZ) goto L_005e1a02;
L_005e1987:; BB(0x005e1987);
    /* 005e1987: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1988: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e198e: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1994: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x5e1999u); f_006ad17c();
    /* 005e1999: movzx ebx, al */ r_ebx = (u32)(u8)r_eax;
    /* 005e199c: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e19a2: je 0x5e1a02 */ if (fZ) goto L_005e1a02;
L_005e19a4:; BB(0x005e19a4);
    /* 005e19a4: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e19aa: movsx edx, byte ptr [eax + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x961u));
    /* 005e19b1: mov eax, esi */ r_eax = r_esi;
    /* 005e19b3: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e19b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e19b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e19ba: call 0x5e5260 */ r_esp -= 4; W32(r_esp, 0x5e19bfu); f_005e5260();
    /* 005e19bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e19c2: movsx edx, word ptr [edi + 0x1bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x1bcu));
    /* 005e19c9: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e19cb: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 005e19ce: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 005e19d1: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005e19d3: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e19d5: jge 0x5e19e7 */ if ((fS==fO)) goto L_005e19e7;
L_005e19d7:; BB(0x005e19d7);
    /* 005e19d7: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e19d9: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e19db: mov word ptr [edi + ebp + 0x1be], dx */ W16((u32)(r_edi+r_ebp+0x1beu), (u16)r_edx);
    /* 005e19e3: mov ebx, eax */ r_ebx = r_eax;
    /* 005e19e5: jmp 0x5e19ef */ goto L_005e19ef;
L_005e19e7:; BB(0x005e19e7);
    /* 005e19e7: mov word ptr [edi + ebp + 0x1be], dx */ W16((u32)(r_edi+r_ebp+0x1beu), (u16)r_edx);
L_005e19ef:; BB(0x005e19ef);
    /* 005e19ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e19f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e19f1: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e19f7: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e19fd: call 0x6acf64 */ r_esp -= 4; W32(r_esp, 0x5e1a02u); f_006acf64();
L_005e1a02:; BB(0x005e1a02);
    /* 005e1a02: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005e1a05: mov ebp, esi */ r_ebp = r_esi;
    /* 005e1a07: cmp ebp, 0x13 */ {  u32 a = r_ebp; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1a0a: jl 0x5e1979 */ if ((fS!=fO)) goto L_005e1979;
L_005e1a10:; BB(0x005e1a10);
    /* 005e1a10: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005e1a14: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 005e1a18: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e1a1c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e1a1f:; BB(0x005e1a1f);
    /* 005e1a1f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e1a22: ret  */ FN_RET(0x005e194c); r_esp += 4; return;
}

void f_005e1a24(void) /* sub_5E1A24 */
{
    FN_ENTER(0x005e1a24);
    /* 005e1a24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1a25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1a26: mov edx, ecx */ r_edx = r_ecx;
    /* 005e1a28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e1a2a: mov ebx, eax */ r_ebx = r_eax;
    /* 005e1a2c: mov esi, edx */ r_esi = r_edx;
L_005e1a2e:; BB(0x005e1a2e);
    /* 005e1a2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1a2f: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e1a35: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1a3b: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x5e1a40u); f_006ad17c();
    /* 005e1a40: mov edx, eax */ r_edx = r_eax;
    /* 005e1a42: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005e1a48: movzx eax, word ptr [esi + ebx*2 + 0x1be] */ r_eax = (u32)R16((u32)(r_esi+r_ebx*2+0x1beu));
    /* 005e1a50: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1a56: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005e1a58: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005e1a5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1a5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e1a5d: call 0x6acf64 */ r_esp -= 4; W32(r_esp, 0x5e1a62u); f_006acf64();
    /* 005e1a62: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e1a65: cmp ebx, 0x13 */ {  u32 a = r_ebx; u32 b = 0x13u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1a68: jl 0x5e1a2e */ if ((fS!=fO)) goto L_005e1a2e;
L_005e1a6a:; BB(0x005e1a6a);
    /* 005e1a6a: mov edx, esi */ r_edx = r_esi;
    /* 005e1a6c: add edx, 0x1be */ {  u32 a = r_edx; u32 b = 0x1beu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e1a72: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1a74: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005e1a76: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e1a79: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005e1a7c: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 005e1a7f: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005e1a82: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 005e1a85: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 005e1a88: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005e1a8b: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005e1a8e: mov word ptr [edx + 0x24], ax */ W16((u32)(r_edx+0x24u), (u16)r_eax);
    /* 005e1a92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e1a93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1a94: ret  */ FN_RET(0x005e1a24); r_esp += 4; return;
}

void f_005e1a98(void) /* sub_5E1A98 */
{
    FN_ENTER(0x005e1a98);
    /* 005e1a98: call 0x5d1a70 */ r_esp -= 4; W32(r_esp, 0x5e1a9du); f_005d1a70();
    /* 005e1a9d: ret  */ FN_RET(0x005e1a98); r_esp += 4; return;
}

void f_005e1aa0(void) /* sub_5E1AA0 */
{
    FN_ENTER(0x005e1aa0);
    /* 005e1aa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1aa1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1aa2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e1aa4: movzx eax, byte ptr [ebp + 0xf4] */ r_eax = (u32)R8((u32)(r_ebp+0xf4u));
    /* 005e1aab: cmp eax, 0x95 */ {  u32 a = r_eax; u32 b = 0x95u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1ab0: jne 0x5e1b1e */ if (!fZ) goto L_005e1b1e;
L_005e1ab2:; BB(0x005e1ab2);
    /* 005e1ab2: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005e1ab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ab7: je 0x5e1b1e */ if (fZ) goto L_005e1b1e;
L_005e1ab9:; BB(0x005e1ab9);
    /* 005e1ab9: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005e1abf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ac1: je 0x5e1b1e */ if (fZ) goto L_005e1b1e;
L_005e1ac3:; BB(0x005e1ac3);
    /* 005e1ac3: movzx esi, word ptr [eax + 0x1c] */ r_esi = (u32)R16((u32)(r_eax+0x1cu));
    /* 005e1ac7: mov eax, dword ptr [esi*4 + 0xa9c870] */ r_eax = R32((u32)(r_esi*4+0xa9c870u));
    /* 005e1ace: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ad0: je 0x5e1b1e */ if (fZ) goto L_005e1b1e;
L_005e1ad2:; BB(0x005e1ad2);
    /* 005e1ad2: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1ad4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e1ad9u); f_008581c5();
    /* 005e1ad9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1ada: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 005e1add: mov dword ptr [ebp + 0x1f4], eax */ W32((u32)(r_ebp+0x1f4u), r_eax);
    /* 005e1ae3: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 005e1ae5: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 005e1ae8: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 005e1aea: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 005e1aed: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 005e1af0: mov edx, dword ptr [edx + 0x14] */ r_edx = R32((u32)(r_edx+0x14u));
    /* 005e1af3: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005e1af6: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005e1af9: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005e1afb: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005e1afe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e1b00: mov eax, dword ptr [edx + esi*8 + 0xa9c760] */ r_eax = R32((u32)(r_edx+r_esi*8+0xa9c760u));
    /* 005e1b07: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 005e1b0a: mov eax, dword ptr [edx + esi*8 + 0xa9c764] */ r_eax = R32((u32)(r_edx+r_esi*8+0xa9c764u));
    /* 005e1b11: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 005e1b14: mov esi, dword ptr [edx + esi*8 + 0xa9c768] */ r_esi = R32((u32)(r_edx+r_esi*8+0xa9c768u));
    /* 005e1b1b: mov dword ptr [ebp + 0x14], esi */ W32((u32)(r_ebp+0x14u), r_esi);
L_005e1b1e:; BB(0x005e1b1e);
    /* 005e1b1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1b1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1b20: ret  */ FN_RET(0x005e1aa0); r_esp += 4; return;
}

void f_005e1b24(void) /* sub_5E1B24 */
{
    FN_ENTER(0x005e1b24);
    /* 005e1b24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b25: mov edi, ecx */ r_edi = r_ecx;
    /* 005e1b27: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005e1b2e: cmp eax, 0x95 */ {  u32 a = r_eax; u32 b = 0x95u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1b33: jne 0x5e1b6f */ if (!fZ) goto L_005e1b6f;
L_005e1b35:; BB(0x005e1b35);
    /* 005e1b35: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005e1b38: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1b3a: je 0x5e1b6f */ if (fZ) goto L_005e1b6f;
L_005e1b3c:; BB(0x005e1b3c);
    /* 005e1b3c: mov edx, dword ptr [edi + 0x1f4] */ r_edx = R32((u32)(r_edi+0x1f4u));
    /* 005e1b42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1b44: je 0x5e1b6f */ if (fZ) goto L_005e1b6f;
L_005e1b46:; BB(0x005e1b46);
    /* 005e1b46: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e1b48: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 005e1b4a: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 005e1b4d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005e1b50: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 005e1b53: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 005e1b56: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 005e1b59: push dword ptr [edi + 0x1f4] */ { u32 v = R32((u32)(r_edi+0x1f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1b5f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e1b64u); f_00857e98();
    /* 005e1b64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1b65: mov dword ptr [edi + 0x1f4], 0 */ W32((u32)(r_edi+0x1f4u), 0x0u);
L_005e1b6f:; BB(0x005e1b6f);
    /* 005e1b6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1b70: ret  */ FN_RET(0x005e1b24); r_esp += 4; return;
}

void f_005e1b74(void) /* sub_5E1B74 */
{
    FN_ENTER(0x005e1b74);
    /* 005e1b74: push dword ptr [0xa8dc04] */ { u32 v = R32((u32)(0xa8dc04u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1b7a: call 0x844ac4 */ r_esp -= 4; W32(r_esp, 0x5e1b7fu); f_00844ac4();
    /* 005e1b7f: mov dword ptr [0xa8dc04], 0 */ W32((u32)(0xa8dc04u), 0x0u);
    /* 005e1b89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1b8a: ret  */ FN_RET(0x005e1b74); r_esp += 4; return;
}

void f_005e1b8c(void) /* sub_5E1B8C */
{
    FN_ENTER(0x005e1b8c);
    /* 005e1b8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b8d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1b8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b91: push 0x8db694 */ { u32 v = 0x8db694u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1b9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1b9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e1ba4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1ba7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e1baa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e1bad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e1bb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e1bb3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1bb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1bb8: je 0x5e1c0f */ if (fZ) goto L_005e1c0f;
L_005e1bba:; BB(0x005e1bba);
    /* 005e1bba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e1bc1: push 0x1fc */ { u32 v = 0x1fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1bc6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e1bcbu); f_005caba4();
    /* 005e1bcb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1bcc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e1bcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1bd1: je 0x5e1c0b */ if (fZ) goto L_005e1c0b;
L_005e1bd3:; BB(0x005e1bd3);
    /* 005e1bd3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e1bda: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1be1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005e1be4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e1be7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1be8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1bee: call 0x5e1c20 */ r_esp -= 4; W32(r_esp, 0x5e1bf3u); f_005e1c20();
    /* 005e1bf3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e1bf6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e1bfd:; BB(0x005e1bfd);
    /* 005e1bfd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1c00: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e1c07: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1c0a: ret  */ FN_RET(0x005e1b8c); r_esp += 4; return;
L_005e1c0b:; BB(0x005e1c0b);
    /* 005e1c0b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1c0d: jmp 0x5e1bfd */ goto L_005e1bfd;
L_005e1c0f:; BB(0x005e1c0f);
    /* 005e1c0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1c11: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1c14: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e1c1b: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1c1d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1c1e: ret  */ FN_RET(0x005e1b8c); r_esp += 4; return;
}

void f_005e1c20(void) /* sub_5E1C20 */
{
    FN_ENTER(0x005e1c20);
    /* 005e1c20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c21: mov ebp, esp */ r_ebp = r_esp;
    /* 005e1c23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c25: push 0x8db6b0 */ { u32 v = 0x8db6b0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e1c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e1c38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1c3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e1c3e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005e1c41: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005e1c44: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005e1c47: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005e1c4a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005e1c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c4e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1c51: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005e1c54: call 0x5d1b50 */ r_esp -= 4; W32(r_esp, 0x5e1c59u); f_005d1b50();
    /* 005e1c59: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e1c60: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1c63: mov dword ptr [ecx], 0xb0f880 */ W32((u32)(r_ecx), 0xb0f880u);
    /* 005e1c69: mov eax, dword ptr [0x9c2820] */ r_eax = R32((u32)(0x9c2820u));
    /* 005e1c6e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1c70: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 005e1c73: call dword ptr [0xb0f8c4] */ { u32 t = R32((u32)(0xb0f8c4u)); r_esp -= 4; W32(r_esp, 0x5e1c79u); call_ind(t); }
    /* 005e1c79: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1c7c: mov dword ptr [ecx + 0x1ec], 0 */ W32((u32)(r_ecx+0x1ecu), 0x0u);
    /* 005e1c86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e1c88: mov word ptr [ecx + 0x1bc], ax */ W16((u32)(r_ecx+0x1bcu), (u16)r_eax);
    /* 005e1c8f: mov dword ptr [ecx + 0x1e8], 0x3f800000 */ W32((u32)(r_ecx+0x1e8u), 0x3f800000u);
    /* 005e1c99: add ecx, 0x1be */ {  u32 a = r_ecx; u32 b = 0x1beu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1c9f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e1ca1: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005e1ca3: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 005e1ca6: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 005e1ca9: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 005e1cac: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 005e1caf: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 005e1cb2: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 005e1cb5: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 005e1cb8: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 005e1cbb: mov word ptr [ecx + 0x24], dx */ W16((u32)(r_ecx+0x24u), (u16)r_edx);
    /* 005e1cbf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1cc2: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5e1cc7u); f_005d2890();
    /* 005e1cc7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1cca: mov dword ptr [ebx + 0x1b0], eax */ W32((u32)(r_ebx+0x1b0u), r_eax);
    /* 005e1cd0: movsx edx, byte ptr [eax + 0x11] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x11u));
    /* 005e1cd4: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005e1cd7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1cd9: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1cdb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1cdd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1cdf: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1ce1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1ce3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1ce5: add ecx, dword ptr [0xa8dc04] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa8dc04u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e1ceb: mov dword ptr [ebx + 0x1b4], ecx */ W32((u32)(r_ebx+0x1b4u), r_ecx);
    /* 005e1cf1: movzx eax, byte ptr [eax + 0x1d] */ r_eax = (u32)R8((u32)(r_eax+0x1du));
    /* 005e1cf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1cf6: call 0x5e5370 */ r_esp -= 4; W32(r_esp, 0x5e1cfbu); f_005e5370();
    /* 005e1cfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e1cfc: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1cff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1d02: mov esi, dword ptr [ebx + 0x1b0] */ r_esi = R32((u32)(r_ebx+0x1b0u));
    /* 005e1d08: mov dword ptr [ebx + 0x1b8], eax */ W32((u32)(r_ebx+0x1b8u), r_eax);
    /* 005e1d0e: movzx eax, byte ptr [esi + 0x1a] */ r_eax = (u32)R8((u32)(r_esi+0x1au));
    /* 005e1d12: mov byte ptr [ebx + 0x1e6], al */ W8((u32)(r_ebx+0x1e6u), (u8)r_eax);
    /* 005e1d18: movzx edx, byte ptr [esi + 0x1b] */ r_edx = (u32)R8((u32)(r_esi+0x1bu));
    /* 005e1d1c: mov byte ptr [ebx + 0x1e7], dl */ W8((u32)(r_ebx+0x1e7u), (u8)r_edx);
    /* 005e1d22: call 0x5d2880 */ r_esp -= 4; W32(r_esp, 0x5e1d27u); f_005d2880();
    /* 005e1d27: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1d2a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005e1d2d: mov byte ptr [edx + 0x1e4], al */ W8((u32)(r_edx+0x1e4u), (u8)r_eax);
    /* 005e1d33: call 0x5d2888 */ r_esp -= 4; W32(r_esp, 0x5e1d38u); f_005d2888();
    /* 005e1d38: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1d3b: mov byte ptr [ecx + 0x1e5], al */ W8((u32)(r_ecx+0x1e5u), (u8)r_eax);
    /* 005e1d41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e1d43: mov dword ptr [ecx + 0x1f0], eax */ W32((u32)(r_ecx+0x1f0u), r_eax);
    /* 005e1d49: mov dword ptr [ecx + 0x1f4], eax */ W32((u32)(r_ecx+0x1f4u), r_eax);
    /* 005e1d4f: mov dword ptr [ecx + 0x1f8], eax */ W32((u32)(r_ecx+0x1f8u), r_eax);
    /* 005e1d55: call 0x5e1d74 */ r_esp -= 4; W32(r_esp, 0x5e1d5au); f_005e1d74();
    /* 005e1d5a: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005e1d5d: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005e1d60: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005e1d63: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e1d66: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e1d6d: mov esp, ebp */ r_esp = r_ebp;
    /* 005e1d6f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e1d70: ret 8 */ FN_RET(0x005e1c20); r_esp += 12; return;
}

void f_005e1d74(void) /* sub_5E1D74 */
{
    FN_ENTER(0x005e1d74);
    /* 005e1d74: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d75: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1d76: mov edi, ecx */ r_edi = r_ecx;
    /* 005e1d78: movzx esi, byte ptr [edi + 0xf4] */ r_esi = (u32)R8((u32)(r_edi+0xf4u));
    /* 005e1d7f: lea eax, [esi - 0x16] */ r_eax = (u32)(r_esi+0xffffffeau);
    /* 005e1d82: cmp eax, 0x85 */ {  u32 a = r_eax; u32 b = 0x85u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005e1d87: ja 0x5e1e44 */ if ((!fC&&!fZ)) goto L_005e1e44;
L_005e1d8d:; BB(0x005e1d8d);
    /* 005e1d8d: mov eax, dword ptr [esi*4 + 0x92d1a8] */ r_eax = R32((u32)(r_esi*4+0x92d1a8u));
    /* 005e1d94: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1d74); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1d74); r_esp += 4; return;
}

void f_005e1d96(void)
{
    FN_ENTER(0x005e1d96);
    /* 005e1d96: mov eax, 1 */ r_eax = 0x1u;
    /* 005e1d9b: mov word ptr [edi + 0x1bc], ax */ W16((u32)(r_edi+0x1bcu), (u16)r_eax);
    /* 005e1da2: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1d96); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1d96); r_esp += 4; return;
}

void f_005e1da7(void)
{
    FN_ENTER(0x005e1da7);
    /* 005e1da7: push 0x25 */ { u32 v = 0x25u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1da9: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1dab: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1db0u); f_005d240c();
    /* 005e1db0: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1da7); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1da7); r_esp += 4; return;
}

void f_005e1db5(void)
{
    FN_ENTER(0x005e1db5);
    /* 005e1db5: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005e1db7: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1db9: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1dbeu); f_005d240c();
    /* 005e1dbe: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1db5); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1db5); r_esp += 4; return;
}

void f_005e1dc3(void)
{
    FN_ENTER(0x005e1dc3);
    /* 005e1dc3: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005e1dc5: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1dc7: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1dccu); f_005d240c();
    /* 005e1dcc: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1dd2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1dd5: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ddb: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1dc3); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1dc3); r_esp += 4; return;
}

void f_005e1ddd(void)
{
    FN_ENTER(0x005e1ddd);
    /* 005e1ddd: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 005e1ddf: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1de1: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1de6u); f_005d240c();
    /* 005e1de6: mov eax, dword ptr [edi + 0x190] */ r_eax = R32((u32)(r_edi+0x190u));
    /* 005e1dec: mov edx, dword ptr [edi + 0x1f0] */ r_edx = R32((u32)(r_edi+0x1f0u));
    /* 005e1df2: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1df5: mov dword ptr [edi + 0x190], eax */ W32((u32)(r_edi+0x190u), r_eax);
    /* 005e1dfb: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005e1dfe: mov dword ptr [edi + 0x1f0], edx */ W32((u32)(r_edi+0x1f0u), r_edx);
    /* 005e1e04: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1ddd); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1ddd); r_esp += 4; return;
}

void f_005e1e06(void)
{
    FN_ENTER(0x005e1e06);
    /* 005e1e06: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e08: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e0a: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e0fu); f_005d240c();
    /* 005e1e0f: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1e06); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1e06); r_esp += 4; return;
}

void f_005e1e11(void)
{
    FN_ENTER(0x005e1e11);
    /* 005e1e11: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e17: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e1a: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e20: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1e11); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1e11); r_esp += 4; return;
}

void f_005e1e22(void)
{
    FN_ENTER(0x005e1e22);
    /* 005e1e22: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e28: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e2b: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e31: jmp 0x5e1e44 */ goto L_005e1e44;
L_005e1e44:; BB(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1e22); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1e22); r_esp += 4; return;
}

void f_005e1e33(void)
{
    FN_ENTER(0x005e1e33);
    /* 005e1e33: mov eax, dword ptr [edi + 0x190] */ r_eax = R32((u32)(r_edi+0x190u));
    /* 005e1e39: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e3e: mov dword ptr [edi + 0x190], eax */ W32((u32)(r_edi+0x190u), r_eax);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1e33); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1e33); r_esp += 4; return;
}

void f_005e1e44(void)
{
    FN_ENTER(0x005e1e44);
    /* 005e1e44: cmp esi, 0x27 */ {  u32 a = r_esi; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e47: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e49:; BB(0x005e1e49);
    /* 005e1e49: cmp esi, 0x33 */ {  u32 a = r_esi; u32 b = 0x33u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e4c: jl 0x5e1e53 */ if ((fS!=fO)) goto L_005e1e53;
L_005e1e4e:; BB(0x005e1e4e);
    /* 005e1e4e: cmp esi, 0x39 */ {  u32 a = r_esi; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e51: jle 0x5e1e60 */ if ((fZ||fS!=fO)) goto L_005e1e60;
L_005e1e53:; BB(0x005e1e53);
    /* 005e1e53: cmp esi, 0x53 */ {  u32 a = r_esi; u32 b = 0x53u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e56: jl 0x5e1e7a */ if ((fS!=fO)) goto L_005e1e7a;
L_005e1e58:; BB(0x005e1e58);
    /* 005e1e58: cmp esi, 0x82 */ {  u32 a = r_esi; u32 b = 0x82u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e1e5e: jg 0x5e1e7a */ if ((!fZ&&fS==fO)) goto L_005e1e7a;
L_005e1e60:; BB(0x005e1e60);
    /* 005e1e60: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005e1e62: mov ecx, edi */ r_ecx = r_edi;
    /* 005e1e64: call 0x5d240c */ r_esp -= 4; W32(r_esp, 0x5e1e69u); f_005d240c();
    /* 005e1e69: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e6f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1e72: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1e78: jmp 0x5e1e7f */ goto L_005e1e7f;
L_005e1e7a:; BB(0x005e1e7a);
    /* 005e1e7a: cmp esi, 0x52 */ {  u32 a = r_esi; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e7d: je 0x5e1e60 */ if (fZ) goto L_005e1e60;
L_005e1e7f:; BB(0x005e1e7f);
    /* 005e1e7f: mov eax, dword ptr [edi + 0x1b0] */ r_eax = R32((u32)(r_edi+0x1b0u));
    /* 005e1e85: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
    /* 005e1e89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1e8b: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e8d:; BB(0x005e1e8d);
    /* 005e1e8d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1e90: je 0x5e1ebd */ if (fZ) goto L_005e1ebd;
L_005e1e92:; BB(0x005e1e92);
    /* 005e1e92: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1e95: jne 0x5e1ea9 */ if (!fZ) goto L_005e1ea9;
L_005e1e97:; BB(0x005e1e97);
    /* 005e1e97: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1e9d: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1ea0: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
    /* 005e1ea6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ea8: ret  */ FN_RET(0x005e1e44); r_esp += 4; return;
L_005e1ea9:; BB(0x005e1ea9);
    /* 005e1ea9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e1eac: jne 0x5e1ebd */ if (!fZ) goto L_005e1ebd;
L_005e1eae:; BB(0x005e1eae);
    /* 005e1eae: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1eb4: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e1eb7: mov dword ptr [edi + 0x1f0], eax */ W32((u32)(r_edi+0x1f0u), r_eax);
L_005e1ebd:; BB(0x005e1ebd);
    /* 005e1ebd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e1ebe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1ebf: ret  */ FN_RET(0x005e1e44); r_esp += 4; return;
}

void f_005e1ec0(void) /* sub_5E1EC0 */
{
    FN_ENTER(0x005e1ec0);
    /* 005e1ec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e1ec1: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e1ec4: mov edi, ecx */ r_edi = r_ecx;
    /* 005e1ec6: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e1ecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1ece: je 0x5e20bb */ if (fZ) goto L_005e20bb;
L_005e1ed4:; BB(0x005e1ed4);
    /* 005e1ed4: mov eax, dword ptr [edi + 0xdc] */ r_eax = R32((u32)(r_edi+0xdcu));
    /* 005e1eda: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e1edc: jne 0x5e1f2b */ if (!fZ) goto L_005e1f2b;
L_005e1ede:; BB(0x005e1ede);
    /* 005e1ede: push dword ptr [edi + 0x1b4] */ { u32 v = R32((u32)(r_edi+0x1b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1ee4: movzx eax, word ptr [edi + 0xe4] */ r_eax = (u32)R16((u32)(r_edi+0xe4u));
    /* 005e1eeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1eec: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e1ef2: call 0x5d1110 */ r_esp -= 4; W32(r_esp, 0x5e1ef7u); f_005d1110();
    /* 005e1ef7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e1efa: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005e1efd: call 0x5e4aac */ r_esp -= 4; W32(r_esp, 0x5e1f02u); f_005e4aac();
    /* 005e1f02: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005e1f09: movzx edx, byte ptr [edi + 0xf4] */ r_edx = (u32)R8((u32)(r_edi+0xf4u));
    /* 005e1f10: mov byte ptr [esp], al */ W8((u32)(r_esp), (u8)r_eax);
    /* 005e1f13: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005e1f19: mov byte ptr [esp + 1], dl */ W8((u32)(r_esp+0x1u), (u8)r_edx);
    /* 005e1f1d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005e1f21: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e1f24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1f25: call 0x5e520c */ r_esp -= 4; W32(r_esp, 0x5e1f2au); f_005e520c();
    /* 005e1f2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005e1f2b:; BB(0x005e1f2b);
    /* 005e1f2b: mov eax, dword ptr [edi + 0x1f0] */ r_eax = R32((u32)(r_edi+0x1f0u));
    /* 005e1f31: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005e1f33: je 0x5e20bb */ if (fZ) goto L_005e20bb;
L_005e1f39:; BB(0x005e1f39);
    /* 005e1f39: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005e1f40: cmp eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1f43: je 0x5e2077 */ if (fZ) goto L_005e2077;
L_005e1f49:; BB(0x005e1f49);
    /* 005e1f49: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1f4c: jne 0x5e1fdf */ if (!fZ) goto L_005e1fdf;
L_005e1f52:; BB(0x005e1f52);
    /* 005e1f52: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e1f58: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005e1f5f: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005e1f63: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 005e1f67: fmul dword ptr [0x92d444] */ ST(0) = ST(0) * R_F32((u32)(0x92d444u));
    /* 005e1f6d: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005e1f71: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005e1f76: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1f7b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e1f7f: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005e1f83: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e1f87: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005e1f8b: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 005e1f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1f91: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5e1f96u); f_007773d4();
    /* 005e1f96: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e1f9c: movsx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2beu));
    /* 005e1fa3: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005e1fa7: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 005e1fab: fmul dword ptr [0x92d444] */ ST(0) = ST(0) * R_F32((u32)(0x92d444u));
    /* 005e1fb1: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005e1fb5: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005e1fba: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e1fbf: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e1fc3: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005e1fc7: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e1fcb: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005e1fcf: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 005e1fd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e1fd5: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5e1fdau); f_00777368();
    /* 005e1fda: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e1fdd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e1fde: ret  */ FN_RET(0x005e1ec0); r_esp += 4; return;
L_005e1fdf:; BB(0x005e1fdf);
    /* 005e1fdf: cmp eax, 0x88 */ {  u32 a = r_eax; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e1fe4: jne 0x5e20bb */ if (!fZ) goto L_005e20bb;
L_005e1fea:; BB(0x005e1fea);
    /* 005e1fea: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e1ff0: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005e1ff7: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005e1ffb: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 005e1fff: fmul dword ptr [0x92d448] */ ST(0) = ST(0) * R_F32((u32)(0x92d448u));
    /* 005e2005: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005e2009: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005e200e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2013: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e2017: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005e201b: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e201f: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005e2023: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 005e2028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e2029: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5e202eu); f_007773d4();
    /* 005e202e: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e2034: movsx edx, word ptr [ecx + 0x2be] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2beu));
    /* 005e203b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005e203f: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 005e2043: fmul dword ptr [0x92d448] */ ST(0) = ST(0) * R_F32((u32)(0x92d448u));
    /* 005e2049: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005e204d: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005e2052: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e2057: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e205b: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005e205f: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e2063: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005e2067: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 005e206c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e206d: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5e2072u); f_00777368();
    /* 005e2072: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e2075: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e2076: ret  */ FN_RET(0x005e1ec0); r_esp += 4; return;
L_005e2077:; BB(0x005e2077);
    /* 005e2077: mov ecx, dword ptr [edi + 0xf8] */ r_ecx = R32((u32)(r_edi+0xf8u));
    /* 005e207d: movsx edx, word ptr [ecx + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 005e2084: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005e2088: fild dword ptr [esp + 0x34] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x34u)));
    /* 005e208c: fmul dword ptr [0x92d444] */ ST(0) = ST(0) * R_F32((u32)(0x92d444u));
    /* 005e2092: fnstcw word ptr [esp + 0x1c] */ W16((u32)(r_esp+0x1cu), fcw);
    /* 005e2096: movzx eax, word ptr [esp + 0x1c] */ r_eax = (u32)R16((u32)(r_esp+0x1cu));
    /* 005e209b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005e20a0: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005e20a4: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 005e20a8: fistp dword ptr [esp + 0x2c] */ W32((u32)(r_esp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005e20ac: fldcw word ptr [esp + 0x1c] */ fcw = R16((u32)(r_esp+0x1cu));
    /* 005e20b0: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 005e20b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e20b6: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5e20bbu); f_007773d4();
L_005e20bb:; BB(0x005e20bb);
    /* 005e20bb: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e20be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e20bf: ret  */ FN_RET(0x005e1ec0); r_esp += 4; return;
}

