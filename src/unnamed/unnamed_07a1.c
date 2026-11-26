#include "protos.h"

void f_007a1084(void) /* sub_7A1084 */
{
    FN_ENTER(0x007a1084);
    /* 007a1084: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1085: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a1087: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a1089: call 0x7a10a8 */ r_esp -= 4; W32(r_esp, 0x7a108eu); f_007a10a8();
    /* 007a108e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a1092: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a1094: jne 0x7a109a */ if (!fZ) goto L_007a109a;
L_007a1096:; BB(0x007a1096);
    /* 007a1096: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1097: ret 4 */ FN_RET(0x007a1084); r_esp += 8; return;
L_007a109a:; BB(0x007a109a);
    /* 007a109a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a109b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a10a0u); f_005c2f74();
    /* 007a10a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a10a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a10a2: ret 4 */ FN_RET(0x007a1084); r_esp += 8; return;
}

void f_007a10a8(void) /* sub_7A10A8 */
{
    FN_ENTER(0x007a10a8);
    /* 007a10a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a10a9: mov ebp, esp */ r_ebp = r_esp;
    /* 007a10ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a10ad: push 0x8f5856 */ { u32 v = 0x8f5856u; r_esp -= 4; W32(r_esp, v); }
    /* 007a10b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a10b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a10b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a10c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a10c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a10c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a10c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a10cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a10cf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a10d2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a10d9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a10dc: mov dword ptr [ecx], 0xb45f64 */ W32((u32)(r_ecx), 0xb45f64u);
    /* 007a10e2: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a10e5: call 0x69862c */ r_esp -= 4; W32(r_esp, 0x7a10eau); f_0069862c();
    /* 007a10ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a10ec: jne 0x7a10f3 */ if (!fZ) goto L_007a10f3;
L_007a10ee:; BB(0x007a10ee);
    /* 007a10ee: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a10f1: jmp 0x7a110d */ goto L_007a110d;
L_007a10f3:; BB(0x007a10f3);
    /* 007a10f3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a10f6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 007a10f9: mov eax, dword ptr [eax + 0x45c] */ r_eax = R32((u32)(r_eax+0x45cu));
    /* 007a10ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1101: je 0x7a110d */ if (fZ) goto L_007a110d;
L_007a1103:; BB(0x007a1103);
    /* 007a1103: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a1106: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
L_007a110d:; BB(0x007a110d);
    /* 007a110d: mov dword ptr [edx], 0xb45f20 */ W32((u32)(r_edx), 0xb45f20u);
    /* 007a1113: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007a1116: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a111d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a1120: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a1125u); f_008171e8();
    /* 007a1125: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a1128: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a112f: mov esp, ebp */ r_esp = r_ebp;
    /* 007a1131: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1132: ret  */ FN_RET(0x007a10a8); r_esp += 4; return;
}

void f_007a1134(void) /* sub_7A1134 */
{
    FN_ENTER(0x007a1134);
    /* 007a1134: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1135: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a1137: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a1139: call 0x7a1158 */ r_esp -= 4; W32(r_esp, 0x7a113eu); f_007a1158();
    /* 007a113e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a1142: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a1144: jne 0x7a114a */ if (!fZ) goto L_007a114a;
L_007a1146:; BB(0x007a1146);
    /* 007a1146: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1147: ret 4 */ FN_RET(0x007a1134); r_esp += 8; return;
L_007a114a:; BB(0x007a114a);
    /* 007a114a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a114b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a1150u); f_005c2f74();
    /* 007a1150: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a1151: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1152: ret 4 */ FN_RET(0x007a1134); r_esp += 8; return;
}

void f_007a1158(void) /* sub_7A1158 */
{
    FN_ENTER(0x007a1158);
    /* 007a1158: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a1159: mov ebp, esp */ r_ebp = r_esp;
    /* 007a115b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a115d: push 0x8f587e */ { u32 v = 0x8f587eu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1162: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a1168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1169: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a1170: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a1173: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a1176: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a1179: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a117c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a117f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a1182: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a1189: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a118c: mov dword ptr [ecx], 0xb45f74 */ W32((u32)(r_ecx), 0xb45f74u);
    /* 007a1192: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a1195: call 0x69862c */ r_esp -= 4; W32(r_esp, 0x7a119au); f_0069862c();
    /* 007a119a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a119c: jne 0x7a11a3 */ if (!fZ) goto L_007a11a3;
L_007a119e:; BB(0x007a119e);
    /* 007a119e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a11a1: jmp 0x7a11bd */ goto L_007a11bd;
L_007a11a3:; BB(0x007a11a3);
    /* 007a11a3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a11a6: mov eax, dword ptr [edx + 0x20] */ r_eax = R32((u32)(r_edx+0x20u));
    /* 007a11a9: mov eax, dword ptr [eax + 0x45c] */ r_eax = R32((u32)(r_eax+0x45cu));
    /* 007a11af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a11b1: je 0x7a11bd */ if (fZ) goto L_007a11bd;
L_007a11b3:; BB(0x007a11b3);
    /* 007a11b3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a11b6: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
L_007a11bd:; BB(0x007a11bd);
    /* 007a11bd: mov dword ptr [edx], 0xb45f20 */ W32((u32)(r_edx), 0xb45f20u);
    /* 007a11c3: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 007a11c6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a11cd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a11d0: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a11d5u); f_008171e8();
    /* 007a11d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a11d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a11df: mov esp, ebp */ r_esp = r_ebp;
    /* 007a11e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a11e2: ret  */ FN_RET(0x007a1158); r_esp += 4; return;
}

void f_007a11e4(void) /* sub_7A11E4 */
{
    FN_ENTER(0x007a11e4);
    /* 007a11e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a11e5: mov ebp, esp */ r_ebp = r_esp;
    /* 007a11e7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a11e9: push 0x8f5898 */ { u32 v = 0x8f5898u; r_esp -= 4; W32(r_esp, v); }
    /* 007a11ee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a11f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a11f5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a11fc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a11ff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a1202: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007a1205: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007a1208: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007a120b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007a120e: mov dword ptr [ecx], 0xb45f20 */ W32((u32)(r_ecx), 0xb45f20u);
    /* 007a1214: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007a1217: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a121e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a1223u); f_008171e8();
    /* 007a1223: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007a1226: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a1228: jne 0x7a123a */ if (!fZ) goto L_007a123a;
L_007a122a:; BB(0x007a122a);
    /* 007a122a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a122d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a1234: mov esp, ebp */ r_esp = r_ebp;
    /* 007a1236: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1237: ret 4 */ FN_RET(0x007a11e4); r_esp += 8; return;
L_007a123a:; BB(0x007a123a);
    /* 007a123a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a123d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a123e: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a1243u); f_005c2f74();
    /* 007a1243: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a1244: jmp 0x7a122a */ goto L_007a122a;
}

void f_007a1248(void) /* sub_7A1248 */
{
    FN_ENTER(0x007a1248);
    /* 007a1248: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1249: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a124b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a124d: call 0x7a126c */ r_esp -= 4; W32(r_esp, 0x7a1252u); f_007a126c();
    /* 007a1252: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a1256: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a1258: jne 0x7a125e */ if (!fZ) goto L_007a125e;
L_007a125a:; BB(0x007a125a);
    /* 007a125a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a125b: ret 4 */ FN_RET(0x007a1248); r_esp += 8; return;
L_007a125e:; BB(0x007a125e);
    /* 007a125e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a125f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a1264u); f_005c2f74();
    /* 007a1264: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a1265: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1266: ret 4 */ FN_RET(0x007a1248); r_esp += 8; return;
}

void f_007a126c(void) /* sub_7A126C */
{
    FN_ENTER(0x007a126c);
    /* 007a126c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a126d: mov ebp, esp */ r_ebp = r_esp;
    /* 007a126f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1271: push 0x8f58b4 */ { u32 v = 0x8f58b4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1276: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a127c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a127d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a1284: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a1287: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a128a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a128d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a1290: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a1293: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a1296: mov dword ptr [ecx], 0xb45f30 */ W32((u32)(r_ecx), 0xb45f30u);
    /* 007a129c: mov dword ptr [ecx + 0x4c], 0xb3a270 */ W32((u32)(r_ecx+0x4cu), 0xb3a270u);
    /* 007a12a3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a12aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a12ad: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a12b2u); f_008171e8();
    /* 007a12b2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a12b5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a12bc: mov esp, ebp */ r_esp = r_ebp;
    /* 007a12be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a12bf: ret  */ FN_RET(0x007a126c); r_esp += 4; return;
}

void f_007a12c0(void) /* sub_7A12C0 */
{
    FN_ENTER(0x007a12c0);
    /* 007a12c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a12c4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a12c6: mov dword ptr [ecx], 0xb45f40 */ W32((u32)(r_ecx), 0xb45f40u);
    /* 007a12cc: jne 0x7a12d1 */ if (!fZ) goto L_007a12d1;
L_007a12ce:; BB(0x007a12ce);
    /* 007a12ce: ret 4 */ FN_RET(0x007a12c0); r_esp += 8; return;
L_007a12d1:; BB(0x007a12d1);
    /* 007a12d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007a12d2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7a12d7u); f_00857e98();
    /* 007a12d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a12d8: ret 4 */ FN_RET(0x007a12c0); r_esp += 8; return;
}

void f_007a12dc(void) /* sub_7A12DC */
{
    FN_ENTER(0x007a12dc);
    /* 007a12dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a12dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a12df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a12e1: call 0x7a1300 */ r_esp -= 4; W32(r_esp, 0x7a12e6u); f_007a1300();
    /* 007a12e6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a12ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a12ec: jne 0x7a12f2 */ if (!fZ) goto L_007a12f2;
L_007a12ee:; BB(0x007a12ee);
    /* 007a12ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a12ef: ret 4 */ FN_RET(0x007a12dc); r_esp += 8; return;
L_007a12f2:; BB(0x007a12f2);
    /* 007a12f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a12f3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a12f8u); f_005c2f74();
    /* 007a12f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a12f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a12fa: ret 4 */ FN_RET(0x007a12dc); r_esp += 8; return;
}

void f_007a1300(void) /* sub_7A1300 */
{
    FN_ENTER(0x007a1300);
    /* 007a1300: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a1301: mov ebp, esp */ r_ebp = r_esp;
    /* 007a1303: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1305: push 0x8f5964 */ { u32 v = 0x8f5964u; r_esp -= 4; W32(r_esp, v); }
    /* 007a130a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a1310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1311: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a1318: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a131b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a131e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a1321: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a1324: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a1327: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a132a: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 007a1331: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a1334: mov dword ptr [edx], 0xb45f44 */ W32((u32)(r_edx), 0xb45f44u);
    /* 007a133a: lea eax, [edx + 0x64] */ r_eax = (u32)(r_edx+0x64u);
    /* 007a133d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 007a133f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1341: je 0x7a134f */ if (fZ) goto L_007a134f;
L_007a1343:; BB(0x007a1343);
    /* 007a1343: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1345: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a1347: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7a1349u); call_ind(t); }
    /* 007a1349: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a134c: lea eax, [edx + 0x64] */ r_eax = (u32)(r_edx+0x64u);
L_007a134f:; BB(0x007a134f);
    /* 007a134f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 007a1352: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1354: je 0x7a1362 */ if (fZ) goto L_007a1362;
L_007a1356:; BB(0x007a1356);
    /* 007a1356: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1358: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a135a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7a135cu); call_ind(t); }
    /* 007a135c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a135f: lea eax, [edx + 0x64] */ r_eax = (u32)(r_edx+0x64u);
L_007a1362:; BB(0x007a1362);
    /* 007a1362: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 007a1365: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1367: je 0x7a1372 */ if (fZ) goto L_007a1372;
L_007a1369:; BB(0x007a1369);
    /* 007a1369: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a136b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007a136d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x7a136fu); call_ind(t); }
    /* 007a136f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_007a1372:; BB(0x007a1372);
    /* 007a1372: mov dword ptr [edx + 0x10b0], 0xb45f40 */ W32((u32)(r_edx+0x10b0u), 0xb45f40u);
    /* 007a137c: mov dword ptr [ebp - 4], 7 */ W32((u32)(r_ebp+0xfffffffcu), 0x7u);
    /* 007a1383: push 0x7a14ec */ { u32 v = 0x7a14ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1388: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a138b: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a1390: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1392: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1398: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7a139du); f_008586d6();
    /* 007a139d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a13a0: mov dword ptr [eax + 0x70], 0xb3a270 */ W32((u32)(r_eax+0x70u), 0xb3a270u);
    /* 007a13a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a13ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a13b1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a13b6u); f_008171e8();
    /* 007a13b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a13b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a13c0: mov esp, ebp */ r_esp = r_ebp;
    /* 007a13c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a13c3: ret  */ FN_RET(0x007a1300); r_esp += 4; return;
}

void f_007a13c4(void) /* sub_7A13C4 */
{
    FN_ENTER(0x007a13c4);
    /* 007a13c4: mov dword ptr [ecx], 0xb45f40 */ W32((u32)(r_ecx), 0xb45f40u);
    /* 007a13ca: ret  */ FN_RET(0x007a13c4); r_esp += 4; return;
}

void f_007a13cc(void) /* sub_7A13CC */
{
    FN_ENTER(0x007a13cc);
    /* 007a13cc: mov dword ptr [ecx + 4], 0 */ W32((u32)(r_ecx+0x4u), 0x0u);
    /* 007a13d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a13d5: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 007a13da: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 007a13dd: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 007a13e1: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007a13e4: mov eax, ecx */ r_eax = r_ecx;
    /* 007a13e6: ret  */ FN_RET(0x007a13cc); r_esp += 4; return;
}

void f_007a13e8(void) /* sub_7A13E8 */
{
    FN_ENTER(0x007a13e8);
    /* 007a13e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a13e9: mov ebp, esp */ r_ebp = r_esp;
    /* 007a13eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a13ed: push 0x8f5972 */ { u32 v = 0x8f5972u; r_esp -= 4; W32(r_esp, v); }
    /* 007a13f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a13f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a13f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a1400: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a1403: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a1406: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007a1409: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007a140c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007a140f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a1411: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007a1414: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 007a1416: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 007a1419: mov word ptr [ecx + 2], ax */ W16((u32)(r_ecx+0x2u), (u16)r_eax);
    /* 007a141d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a1424: mov eax, ecx */ r_eax = r_ecx;
    /* 007a1426: lea ebx, [eax + 0x44] */ r_ebx = (u32)(r_eax+0x44u);
    /* 007a1429: mov esi, 0xb */ r_esi = 0xbu;
    /* 007a142e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007a1430:; BB(0x007a1430);
    /* 007a1430: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007a1435: mov word ptr [ebx], ax */ W16((u32)(r_ebx), (u16)r_eax);
    /* 007a1438: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a143a: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 007a143e: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 007a1441: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a1444: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 007a1447: jne 0x7a1430 */ if (!fZ) goto L_007a1430;
L_007a1449:; BB(0x007a1449);
    /* 007a1449: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a144e: push 0x7a13cc */ { u32 v = 0x7a13ccu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1453: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a1456: mov dword ptr [eax + 0x40], 0 */ W32((u32)(r_eax+0x40u), 0x0u);
    /* 007a145d: lea edx, [eax + 0xa0] */ r_edx = (u32)(r_eax+0xa0u);
    /* 007a1463: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1465: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1468: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x7a146du); f_00858736();
    /* 007a146d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a1470: mov dword ptr [ecx + 0x9c], 0 */ W32((u32)(r_ecx+0x9cu), 0x0u);
    /* 007a147a: call 0x7a149c */ r_esp -= 4; W32(r_esp, 0x7a147fu); f_007a149c();
    /* 007a147f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007a1482: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a1485: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a1488: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a148b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a148e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a1495: mov esp, ebp */ r_esp = r_ebp;
    /* 007a1497: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1498: ret  */ FN_RET(0x007a13e8); r_esp += 4; return;
}

void f_007a149c(void) /* sub_7A149C */
{
    FN_ENTER(0x007a149c);
    /* 007a149c: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007a14a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a14a5: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 007a14ac: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 007a14af: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 007a14b2: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 007a14b5: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 007a14bc: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 007a14bf: mov dword ptr [ecx + 0x9c], eax */ W32((u32)(r_ecx+0x9cu), r_eax);
    /* 007a14c5: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 007a14cc: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
    /* 007a14d3: mov dword ptr [ecx + 0x30], 0 */ W32((u32)(r_ecx+0x30u), 0x0u);
    /* 007a14da: mov dword ptr [ecx + 0x3c], 0 */ W32((u32)(r_ecx+0x3cu), 0x0u);
    /* 007a14e1: mov dword ptr [ecx + 0x18], 0 */ W32((u32)(r_ecx+0x18u), 0x0u);
    /* 007a14e8: ret  */ FN_RET(0x007a149c); r_esp += 4; return;
}

void f_007a14ec(void) /* sub_7A14EC */
{
    FN_ENTER(0x007a14ec);
    /* 007a14ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a14ed: mov ebp, esp */ r_ebp = r_esp;
    /* 007a14ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a14f1: push 0x8f599a */ { u32 v = 0x8f599au; r_esp -= 4; W32(r_esp, v); }
    /* 007a14f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a14fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a14fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a1504: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a1507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a150a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a150d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a1510: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a1513: add ecx, 0x9c */ {  u32 a = r_ecx; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a1519: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a151c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a1523: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1528: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a152b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a152e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1530: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1533: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7a1538u); f_008586d6();
    /* 007a1538: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a153b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a1542: mov esp, ebp */ r_esp = r_ebp;
    /* 007a1544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1545: ret  */ FN_RET(0x007a14ec); r_esp += 4; return;
}

void f_007a1548(void) /* sub_7A1548 */
{
    FN_ENTER(0x007a1548);
    /* 007a1548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1549: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a154a: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 007a154e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a154f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7a1554u); f_0068d5a8();
    /* 007a1554: mov ebx, eax */ r_ebx = r_eax;
    /* 007a1556: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a1559: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a155b: je 0x7a1723 */ if (fZ) goto L_007a1723;
L_007a1561:; BB(0x007a1561);
    /* 007a1561: mov ecx, dword ptr [ebx + 0x45c] */ r_ecx = R32((u32)(r_ebx+0x45cu));
    /* 007a1567: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a1569: je 0x7a1723 */ if (fZ) goto L_007a1723;
L_007a156f:; BB(0x007a156f);
    /* 007a156f: mov edx, dword ptr [ecx + 0x1088] */ r_edx = R32((u32)(r_ecx+0x1088u));
    /* 007a1575: mov dword ptr [ecx + 0x10a0], 0 */ W32((u32)(r_ecx+0x10a0u), 0x0u);
    /* 007a157f: mov dword ptr [ecx + 0x1090], edx */ W32((u32)(r_ecx+0x1090u), r_edx);
    /* 007a1585: mov edx, dword ptr [ecx + 0x108c] */ r_edx = R32((u32)(r_ecx+0x108cu));
    /* 007a158b: mov dword ptr [ecx + 0x10a8], 0 */ W32((u32)(r_ecx+0x10a8u), 0x0u);
    /* 007a1595: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 007a159a: mov word ptr [ecx + 0x10a4], ax */ W16((u32)(r_ecx+0x10a4u), (u16)r_eax);
    /* 007a15a1: mov dword ptr [ecx + 0x10ac], 0x491c4000 */ W32((u32)(r_ecx+0x10acu), 0x491c4000u);
    /* 007a15ab: mov word ptr [ecx + 0x10a6], ax */ W16((u32)(r_ecx+0x10a6u), (u16)r_eax);
    /* 007a15b2: mov dword ptr [ecx + 0x1094], edx */ W32((u32)(r_ecx+0x1094u), r_edx);
    /* 007a15b8: movzx edx, word ptr [ecx + 0x86] */ r_edx = (u32)R16((u32)(r_ecx+0x86u));
    /* 007a15bf: mov word ptr [ecx + 0x108c], ax */ W16((u32)(r_ecx+0x108cu), (u16)r_eax);
    /* 007a15c6: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a15cc: mov word ptr [ecx + 0x86], dx */ W16((u32)(r_ecx+0x86u), (u16)r_edx);
    /* 007a15d3: movzx edx, word ptr [ecx + 0x1aa] */ r_edx = (u32)R16((u32)(r_ecx+0x1aau));
    /* 007a15da: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a15e0: mov word ptr [ecx + 0x1aa], dx */ W16((u32)(r_ecx+0x1aau), (u16)r_edx);
    /* 007a15e7: movzx edx, word ptr [ecx + 0x2ce] */ r_edx = (u32)R16((u32)(r_ecx+0x2ceu));
    /* 007a15ee: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a15f4: mov word ptr [ecx + 0x2ce], dx */ W16((u32)(r_ecx+0x2ceu), (u16)r_edx);
    /* 007a15fb: movzx edx, word ptr [ecx + 0x3f2] */ r_edx = (u32)R16((u32)(r_ecx+0x3f2u));
    /* 007a1602: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a1608: mov word ptr [ecx + 0x3f2], dx */ W16((u32)(r_ecx+0x3f2u), (u16)r_edx);
    /* 007a160f: movzx edx, word ptr [ecx + 0x516] */ r_edx = (u32)R16((u32)(r_ecx+0x516u));
    /* 007a1616: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a161c: mov word ptr [ecx + 0x516], dx */ W16((u32)(r_ecx+0x516u), (u16)r_edx);
    /* 007a1623: movzx edx, word ptr [ecx + 0x63a] */ r_edx = (u32)R16((u32)(r_ecx+0x63au));
    /* 007a162a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a1630: mov word ptr [ecx + 0x63a], dx */ W16((u32)(r_ecx+0x63au), (u16)r_edx);
    /* 007a1637: movzx edx, word ptr [ecx + 0x75e] */ r_edx = (u32)R16((u32)(r_ecx+0x75eu));
    /* 007a163e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a1644: mov word ptr [ecx + 0x75e], dx */ W16((u32)(r_ecx+0x75eu), (u16)r_edx);
    /* 007a164b: movzx edx, word ptr [ecx + 0x882] */ r_edx = (u32)R16((u32)(r_ecx+0x882u));
    /* 007a1652: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a1658: mov word ptr [ecx + 0x882], dx */ W16((u32)(r_ecx+0x882u), (u16)r_edx);
    /* 007a165f: movzx edx, word ptr [ecx + 0x9a6] */ r_edx = (u32)R16((u32)(r_ecx+0x9a6u));
    /* 007a1666: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a166c: mov word ptr [ecx + 0x9a6], dx */ W16((u32)(r_ecx+0x9a6u), (u16)r_edx);
    /* 007a1673: movzx edx, word ptr [ecx + 0xaca] */ r_edx = (u32)R16((u32)(r_ecx+0xacau));
    /* 007a167a: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a1680: mov word ptr [ecx + 0xaca], dx */ W16((u32)(r_ecx+0xacau), (u16)r_edx);
    /* 007a1687: movzx edx, word ptr [ecx + 0xbee] */ r_edx = (u32)R16((u32)(r_ecx+0xbeeu));
    /* 007a168e: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a1694: mov word ptr [ecx + 0xbee], dx */ W16((u32)(r_ecx+0xbeeu), (u16)r_edx);
    /* 007a169b: movzx edx, word ptr [ecx + 0xd12] */ r_edx = (u32)R16((u32)(r_ecx+0xd12u));
    /* 007a16a2: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a16a8: mov word ptr [ecx + 0xd12], dx */ W16((u32)(r_ecx+0xd12u), (u16)r_edx);
    /* 007a16af: movzx edx, word ptr [ecx + 0xe36] */ r_edx = (u32)R16((u32)(r_ecx+0xe36u));
    /* 007a16b6: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a16bc: mov word ptr [ecx + 0xe36], dx */ W16((u32)(r_ecx+0xe36u), (u16)r_edx);
    /* 007a16c3: movzx edx, word ptr [ecx + 0xf5a] */ r_edx = (u32)R16((u32)(r_ecx+0xf5au));
    /* 007a16ca: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a16d0: mov word ptr [ecx + 0xf5a], dx */ W16((u32)(r_ecx+0xf5au), (u16)r_edx);
    /* 007a16d7: call 0x7a1728 */ r_esp -= 4; W32(r_esp, 0x7a16dcu); f_007a1728();
    /* 007a16dc: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x7a16e1u); f_007a61a4();
    /* 007a16e1: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a16e4: je 0x7a16f3 */ if (fZ) goto L_007a16f3;
L_007a16e6:; BB(0x007a16e6);
    /* 007a16e6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a16e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a16e9: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x7a16eeu); f_006946a8();
    /* 007a16ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a16f1: jmp 0x7a1723 */ goto L_007a1723;
L_007a16f3:; BB(0x007a16f3);
    /* 007a16f3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007a16f6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007a16f8:; BB(0x007a16f8);
    /* 007a16f8: mov esi, dword ptr [ebx + 0xa94254] */ r_esi = R32((u32)(r_ebx+0xa94254u));
    /* 007a16fe: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a1701: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1703: je 0x7a171b */ if (fZ) goto L_007a171b;
L_007a1705:; BB(0x007a1705);
    /* 007a1705: mov ecx, esi */ r_ecx = r_esi;
    /* 007a1707: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x7a170cu); f_00689b44();
    /* 007a170c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a170e: jne 0x7a171b */ if (!fZ) goto L_007a171b;
L_007a1710:; BB(0x007a1710);
    /* 007a1710: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1712: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1713: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x7a1718u); f_006946a8();
    /* 007a1718: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007a171b:; BB(0x007a171b);
    /* 007a171b: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a171e: jl 0x7a16f8 */ if ((fS!=fO)) goto L_007a16f8;
L_007a1720:; BB(0x007a1720);
    /* 007a1720: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_007a1723:; BB(0x007a1723);
    /* 007a1723: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a1724: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1725: ret  */ FN_RET(0x007a1548); r_esp += 4; return;
}

void f_007a1728(void) /* sub_7A1728 */
{
    FN_ENTER(0x007a1728);
    /* 007a1728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1729: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a172a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a172b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a172c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a172f: mov esi, ecx */ r_esi = r_ecx;
    /* 007a1731: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 007a1734: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a1736: je 0x7a1740 */ if (fZ) goto L_007a1740;
L_007a1738:; BB(0x007a1738);
    /* 007a1738: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a173b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a173c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a173d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a173e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a173f: ret  */ FN_RET(0x007a1728); r_esp += 4; return;
L_007a1740:; BB(0x007a1740);
    /* 007a1740: mov eax, dword ptr [0xa48a9c] */ r_eax = R32((u32)(0xa48a9cu));
    /* 007a1745: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1747: je 0x7a1751 */ if (fZ) goto L_007a1751;
L_007a1749:; BB(0x007a1749);
    /* 007a1749: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a174c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a174d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a174e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a174f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1750: ret  */ FN_RET(0x007a1728); r_esp += 4; return;
L_007a1751:; BB(0x007a1751);
    /* 007a1751: movzx eax, word ptr [esi + 0x20] */ r_eax = (u32)R16((u32)(r_esi+0x20u));
    /* 007a1755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1756: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7a175bu); f_0068d5a8();
    /* 007a175b: mov edi, eax */ r_edi = r_eax;
    /* 007a175d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a1760: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1762: je 0x7a17b8 */ if (fZ) goto L_007a17b8;
L_007a1764:; BB(0x007a1764);
    /* 007a1764: mov ecx, edi */ r_ecx = r_edi;
    /* 007a1766: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x7a176bu); f_00689410();
    /* 007a176b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a176d: je 0x7a17c0 */ if (fZ) goto L_007a17c0;
L_007a176f:; BB(0x007a176f);
    /* 007a176f: movzx edx, word ptr [esi + 0x10b6] */ r_edx = (u32)R16((u32)(r_esi+0x10b6u));
    /* 007a1776: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a1779: jne 0x7a17c0 */ if (!fZ) goto L_007a17c0;
L_007a177b:; BB(0x007a177b);
    /* 007a177b: movzx ebp, byte ptr [esi + 0x10b4] */ r_ebp = (u32)R8((u32)(r_esi+0x10b4u));
    /* 007a1782: movzx ebx, byte ptr [esi + 0x10b5] */ r_ebx = (u32)R8((u32)(r_esi+0x10b5u));
    /* 007a1789: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x7a178eu); f_00807d60();
    /* 007a178e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1790: je 0x7a17a6 */ if (fZ) goto L_007a17a6;
L_007a1792:; BB(0x007a1792);
    /* 007a1792: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1793: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a1794: mov ecx, esi */ r_ecx = r_esi;
    /* 007a1796: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1798: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1799: call 0x7a19c0 */ r_esp -= 4; W32(r_esp, 0x7a179eu); f_007a19c0();
    /* 007a179e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a17a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a17a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a17a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a17a4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a17a5: ret  */ FN_RET(0x007a1728); r_esp += 4; return;
L_007a17a6:; BB(0x007a17a6);
    /* 007a17a6: call 0x688b34 */ r_esp -= 4; W32(r_esp, 0x7a17abu); f_00688b34();
    /* 007a17ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a17ad: je 0x7a17b8 */ if (fZ) goto L_007a17b8;
L_007a17af:; BB(0x007a17af);
    /* 007a17af: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a17b2: je 0x7a196c */ if (fZ) goto L_007a196c;
L_007a17b8:; BB(0x007a17b8);
    /* 007a17b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a17bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a17bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a17bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a17be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a17bf: ret  */ FN_RET(0x007a1728); r_esp += 4; return;
L_007a17c0:; BB(0x007a17c0);
    /* 007a17c0: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 007a17c3: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007a17c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a17c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a17ca: jle 0x7a189e */ if ((fZ||fS!=fO)) goto L_007a189e;
L_007a17d0:; BB(0x007a17d0);
    /* 007a17d0: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 007a17d4: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007a17d8: mov edi, edx */ r_edi = r_edx;
    /* 007a17da: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007a17dd: mov esi, eax */ r_esi = r_eax;
L_007a17df:; BB(0x007a17df);
    /* 007a17df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a17e0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a17e4: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x7a17e9u); f_0068aa04();
    /* 007a17e9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a17ea: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a17ee: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 007a17f1: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x7a17f6u); f_0068aa6c();
    /* 007a17f6: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 007a17f9: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a17fc: je 0x7a19a0 */ if (fZ) goto L_007a19a0;
L_007a1802:; BB(0x007a1802);
    /* 007a1802: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1805: je 0x7a1984 */ if (fZ) goto L_007a1984;
L_007a180b:; BB(0x007a180b);
    /* 007a180b: cmp ebp, 3 */ {  u32 a = r_ebp; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a180e: je 0x7a1862 */ if (fZ) goto L_007a1862;
L_007a1810:; BB(0x007a1810);
    /* 007a1810: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1813: jne 0x7a1851 */ if (!fZ) goto L_007a1851;
L_007a1815:; BB(0x007a1815);
    /* 007a1815: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1816: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a181a: call 0x68ce28 */ r_esp -= 4; W32(r_esp, 0x7a181fu); f_0068ce28();
    /* 007a181f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1821: je 0x7a1870 */ if (fZ) goto L_007a1870;
L_007a1823:; BB(0x007a1823);
    /* 007a1823: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x7a1828u); f_00807d60();
    /* 007a1828: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a182a: je 0x7a1870 */ if (fZ) goto L_007a1870;
L_007a182c:; BB(0x007a182c);
    /* 007a182c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a1830: mov ebp, dword ptr [ecx + 0x328] */ r_ebp = R32((u32)(r_ecx+0x328u));
    /* 007a1836: test ebp, 0x43001e */ {  u32 a = r_ebp; u32 b = 0x43001eu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a183c: je 0x7a1870 */ if (fZ) goto L_007a1870;
L_007a183e:; BB(0x007a183e);
    /* 007a183e: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1841: je 0x7a197a */ if (fZ) goto L_007a197a;
L_007a1847:; BB(0x007a1847);
    /* 007a1847: cmp ebx, 9 */ {  u32 a = r_ebx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a184a: jne 0x7a1870 */ if (!fZ) goto L_007a1870;
L_007a184c:; BB(0x007a184c);
    /* 007a184c: jmp 0x7a197a */ goto L_007a197a;
L_007a1851:; BB(0x007a1851);
    /* 007a1851: cmp ebp, 5 */ {  u32 a = r_ebp; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1854: jne 0x7a185e */ if (!fZ) goto L_007a185e;
L_007a1856:; BB(0x007a1856);
    /* 007a1856: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007a1859: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 007a185c: jmp 0x7a187b */ goto L_007a187b;
L_007a185e:; BB(0x007a185e);
    /* 007a185e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a1860: jmp 0x7a187b */ goto L_007a187b;
L_007a1862:; BB(0x007a1862);
    /* 007a1862: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1863: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a1867: call 0x69a088 */ r_esp -= 4; W32(r_esp, 0x7a186cu); f_0069a088();
    /* 007a186c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a186e: jne 0x7a1874 */ if (!fZ) goto L_007a1874;
L_007a1870:; BB(0x007a1870);
    /* 007a1870: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a1872: jmp 0x7a187b */ goto L_007a187b;
L_007a1874:; BB(0x007a1874);
    /* 007a1874: movsx ecx, byte ptr [ebx + 0x9ff674] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebx+0x9ff674u));
L_007a187b:; BB(0x007a187b);
    /* 007a187b: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 007a187e: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a1882: mov word ptr [esi + 2], di */ W16((u32)(r_esi+0x2u), (u16)r_edi);
    /* 007a1886: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a1889: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a188c: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a188e: jl 0x7a17df */ if ((fS!=fO)) goto L_007a17df;
L_007a1894:; BB(0x007a1894);
    /* 007a1894: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007a1898: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 007a189b: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
L_007a189e:; BB(0x007a189e);
    /* 007a189e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a18a0: je 0x7a1900 */ if (fZ) goto L_007a1900;
L_007a18a2:; BB(0x007a18a2);
    /* 007a18a2: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 007a18a5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a18a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a18aa: jle 0x7a1900 */ if ((fZ||fS!=fO)) goto L_007a1900;
L_007a18ac:; BB(0x007a18ac);
    /* 007a18ac: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 007a18b0: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
L_007a18b4:; BB(0x007a18b4);
    /* 007a18b4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007a18b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a18b8: jle 0x7a18f1 */ if ((fZ||fS!=fO)) goto L_007a18f1;
L_007a18ba:; BB(0x007a18ba);
    /* 007a18ba: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_007a18bd:; BB(0x007a18bd);
    /* 007a18bd: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 007a18c0: movsx esi, word ptr [eax + 4] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 007a18c4: lea ebp, [eax + 4] */ r_ebp = (u32)(r_eax+0x4u);
    /* 007a18c7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a18c9: jle 0x7a18e2 */ if ((fZ||fS!=fO)) goto L_007a18e2;
L_007a18cb:; BB(0x007a18cb);
    /* 007a18cb: movzx ebx, word ptr [eax + 2] */ r_ebx = (u32)R16((u32)(r_eax+0x2u));
    /* 007a18cf: mov word ptr [eax], si */ W16((u32)(r_eax), (u16)r_esi);
    /* 007a18d2: movzx esi, word ptr [ebp + 2] */ r_esi = (u32)R16((u32)(r_ebp+0x2u));
    /* 007a18d6: mov word ptr [eax + 2], si */ W16((u32)(r_eax+0x2u), (u16)r_esi);
    /* 007a18da: mov word ptr [ebp], cx */ W16((u32)(r_ebp), (u16)r_ecx);
    /* 007a18de: mov word ptr [ebp + 2], bx */ W16((u32)(r_ebp+0x2u), (u16)r_ebx);
L_007a18e2:; BB(0x007a18e2);
    /* 007a18e2: mov eax, ebp */ r_eax = r_ebp;
    /* 007a18e4: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a18e7: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a18e9: jl 0x7a18bd */ if ((fS!=fO)) goto L_007a18bd;
L_007a18eb:; BB(0x007a18eb);
    /* 007a18eb: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 007a18ee: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
L_007a18f1:; BB(0x007a18f1);
    /* 007a18f1: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a18f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a18f6: jg 0x7a18b4 */ if ((!fZ&&fS==fO)) goto L_007a18b4;
L_007a18f8:; BB(0x007a18f8);
    /* 007a18f8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a18fc: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
L_007a1900:; BB(0x007a1900);
    /* 007a1900: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007a1902: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007a1904: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a1906: jle 0x7a1964 */ if ((fZ||fS!=fO)) goto L_007a1964;
L_007a1908:; BB(0x007a1908);
    /* 007a1908: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 007a190c: mov edi, ecx */ r_edi = r_ecx;
    /* 007a190e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 007a1911: mov esi, eax */ r_esi = r_eax;
L_007a1913:; BB(0x007a1913);
    /* 007a1913: movsx edx, word ptr [esi] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 007a1916: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1918: je 0x7a195a */ if (fZ) goto L_007a195a;
L_007a191a:; BB(0x007a191a);
    /* 007a191a: movsx edx, word ptr [esi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 007a191e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a191f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a1923: call 0x68aa04 */ r_esp -= 4; W32(r_esp, 0x7a1928u); f_0068aa04();
    /* 007a1928: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007a192c: movsx edx, word ptr [esi + 2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x2u));
    /* 007a1930: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1931: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a1935: call 0x68aa6c */ r_esp -= 4; W32(r_esp, 0x7a193au); f_0068aa6c();
    /* 007a193a: mov ecx, eax */ r_ecx = r_eax;
    /* 007a193c: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007a1940: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007a1943: movsx edx, cx */ r_edx = (u32)(i32)(i16)(u16)r_ecx;
    /* 007a1946: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1948: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1949: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007a194d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a194e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 007a1952: call 0x7a19c0 */ r_esp -= 4; W32(r_esp, 0x7a1957u); f_007a19c0();
    /* 007a1957: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_007a195a:; BB(0x007a195a);
    /* 007a195a: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a195d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a1960: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a1962: jl 0x7a1913 */ if ((fS!=fO)) goto L_007a1913;
L_007a1964:; BB(0x007a1964);
    /* 007a1964: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1967: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1968: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1969: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a196a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a196b: ret  */ FN_RET(0x007a1728); r_esp += 4; return;
L_007a196c:; BB(0x007a196c);
    /* 007a196c: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a196f: jne 0x7a17b8 */ if (!fZ) goto L_007a17b8;
L_007a1975:; BB(0x007a1975);
    /* 007a1975: jmp 0x7a1792 */ goto L_007a1792;
L_007a197a:; BB(0x007a197a);
    /* 007a197a: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 007a197f: jmp 0x7a187b */ goto L_007a187b;
L_007a1984:; BB(0x007a1984);
    /* 007a1984: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1985: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a1989: call 0x6994d4 */ r_esp -= 4; W32(r_esp, 0x7a198eu); f_006994d4();
    /* 007a198e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1990: je 0x7a1870 */ if (fZ) goto L_007a1870;
L_007a1996:; BB(0x007a1996);
    /* 007a1996: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007a199b: jmp 0x7a187b */ goto L_007a187b;
L_007a19a0:; BB(0x007a19a0);
    /* 007a19a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a19a2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007a19a6: call 0x68ce28 */ r_esp -= 4; W32(r_esp, 0x7a19abu); f_0068ce28();
    /* 007a19ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a19ad: je 0x7a1870 */ if (fZ) goto L_007a1870;
L_007a19b3:; BB(0x007a19b3);
    /* 007a19b3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a19b8: jmp 0x7a187b */ goto L_007a187b;
}

void f_007a19c0(void) /* sub_7A19C0 */
{
    FN_ENTER(0x007a19c0);
    /* 007a19c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a19c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a19c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a19c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a19c4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a19c7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a19c9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a19cd: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007a19d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a19d3: je 0x7a1f26 */ if (fZ) goto L_007a1f26;
L_007a19d9:; BB(0x007a19d9);
    /* 007a19d9: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a19de: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 007a19e1: lea ebx, [edx + ebx*8] */ r_ebx = (u32)(r_edx+r_ebx*8);
    /* 007a19e4: movsx edx, word ptr [esp + 0x28] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 007a19e9: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 007a19ec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a19ee: lea ecx, [ebp + esi + 0x84] */ r_ecx = (u32)(r_ebp+r_esi+0x84u);
    /* 007a19f5: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007a19f9: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 007a19fc: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007a1a00: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007a1a03: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007a1a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1a07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1a08: call 0x7a21a4 */ r_esp -= 4; W32(r_esp, 0x7a1a0du); f_007a21a4();
    /* 007a1a0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1a0f: jne 0x7a1a21 */ if (!fZ) goto L_007a1a21;
L_007a1a11:; BB(0x007a1a11);
    /* 007a1a11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a1a13: mov dword ptr [ebp + ebx*4 + 0xc4], eax */ W32((u32)(r_ebp+r_ebx*4+0xc4u), r_eax);
    /* 007a1a1a: mov dword ptr [ebp + ebx*4 + 0x120], eax */ W32((u32)(r_ebp+r_ebx*4+0x120u), r_eax);
L_007a1a21:; BB(0x007a1a21);
    /* 007a1a21: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007a1a25: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 007a1a28: movsx esi, word ptr [esp + 0x28] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 007a1a2d: mov byte ptr [ebp + ebx*4 + 0x84], al */ W8((u32)(r_ebp+r_ebx*4+0x84u), (u8)r_eax);
    /* 007a1a34: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1a37: mov byte ptr [ebp + ebx*4 + 0x85], dl */ W8((u32)(r_ebp+r_ebx*4+0x85u), (u8)r_edx);
    /* 007a1a3e: je 0x7a20c6 */ if (fZ) goto L_007a20c6;
L_007a1a44:; BB(0x007a1a44);
    /* 007a1a44: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 007a1a49: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1a4c: je 0x7a1f30 */ if (fZ) goto L_007a1f30;
L_007a1a52:; BB(0x007a1a52);
    /* 007a1a52: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 007a1a57: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1a5a: je 0x7a1e49 */ if (fZ) goto L_007a1e49;
L_007a1a60:; BB(0x007a1a60);
    /* 007a1a60: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 007a1a65: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1a68: jne 0x7a1d25 */ if (!fZ) goto L_007a1d25;
L_007a1a6e:; BB(0x007a1a6e);
    /* 007a1a6e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1a72: movsx edx, word ptr [esp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1a77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1a78: lea ecx, [eax + 0x460] */ r_ecx = (u32)(r_eax+0x460u);
    /* 007a1a7e: call 0x6ad17c */ r_esp -= 4; W32(r_esp, 0x7a1a83u); f_006ad17c();
    /* 007a1a83: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a1a87: movzx esi, word ptr [edx + 0x1c] */ r_esi = (u32)R16((u32)(r_edx+0x1cu));
    /* 007a1a8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1a8c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007a1a8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1a90: movsx edi, word ptr [esp + 0x34] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x34u));
    /* 007a1a95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1a96: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x7a1a9bu); f_006ded14();
    /* 007a1a9b: mov esi, eax */ r_esi = r_eax;
    /* 007a1a9d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a1aa0: movzx edx, word ptr [ebp + ebx*4 + 0x86] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*4+0x86u));
    /* 007a1aa8: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a1aae: mov word ptr [ebp + ebx*4 + 0x86], dx */ W16((u32)(r_ebp+r_ebx*4+0x86u), (u16)r_edx);
    /* 007a1ab6: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 007a1ab9: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 007a1abc: mov dword ptr [ebp + ebx*4 + 0xc0], edi */ W32((u32)(r_ebp+r_ebx*4+0xc0u), r_edi);
    /* 007a1ac3: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 007a1ac6: fstp dword ptr [ebp + ebx*4 + 0xac] */ W_F32((u32)(r_ebp+r_ebx*4+0xacu), ST(0)); FPOP();
    /* 007a1acd: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 007a1ad0: mov dword ptr [ebp + ebx*4 + 0xb8], ecx */ W32((u32)(r_ebp+r_ebx*4+0xb8u), r_ecx);
    /* 007a1ad7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1adcu); f_0082ddd8();
    /* 007a1adc: fstp dword ptr [ebp + ebx*4 + 0xb0] */ W_F32((u32)(r_ebp+r_ebx*4+0xb0u), ST(0)); FPOP();
    /* 007a1ae3: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007a1ae6: mov dword ptr [ebp + ebx*4 + 0xbc], ecx */ W32((u32)(r_ebp+r_ebx*4+0xbcu), r_ecx);
    /* 007a1aed: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1af2u); f_0082ddd8();
    /* 007a1af2: movsx edx, word ptr [esp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1af7: fstp dword ptr [ebp + ebx*4 + 0xb4] */ W_F32((u32)(r_ebp+r_ebx*4+0xb4u), ST(0)); FPOP();
    /* 007a1afe: movsx eax, byte ptr [esi + 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x22u));
    /* 007a1b02: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a1b05: mov dword ptr [ebp + ebx*4 + 0x88], eax */ W32((u32)(r_ebp+r_ebx*4+0x88u), r_eax);
    /* 007a1b0c: ja 0x7a1f26 */ if ((!fC&&!fZ)) goto L_007a1f26;
L_007a1b12:; BB(0x007a1b12);
    /* 007a1b12: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1b17: mov edx, dword ptr [eax*4 + 0x97cf40] */ r_edx = R32((u32)(r_eax*4+0x97cf40u));
    /* 007a1b1e: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_007a1d25:; BB(0x007a1d25);
    /* 007a1d25: movsx eax, word ptr [esp + 0x28] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x28u));
    /* 007a1d2a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1d2d: jne 0x7a1f26 */ if (!fZ) goto L_007a1f26;
L_007a1d33:; BB(0x007a1d33);
    /* 007a1d33: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1d38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1d39: call 0x67e000 */ r_esp -= 4; W32(r_esp, 0x7a1d3eu); f_0067e000();
    /* 007a1d3e: mov esi, eax */ r_esi = r_eax;
    /* 007a1d40: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a1d43: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007a1d47: movzx edx, word ptr [ebp + ebx*4 + 0x86] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*4+0x86u));
    /* 007a1d4f: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a1d55: mov word ptr [ebp + ebx*4 + 0x86], dx */ W16((u32)(r_ebp+r_ebx*4+0x86u), (u16)r_edx);
    /* 007a1d5d: mov edx, dword ptr [edi + 0x8fc] */ r_edx = R32((u32)(r_edi+0x8fcu));
    /* 007a1d63: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1d65: jne 0x7a1d7f */ if (!fZ) goto L_007a1d7f;
L_007a1d67:; BB(0x007a1d67);
    /* 007a1d67: mov dword ptr [ebp + ebx*4 + 0x8c], 0x8000 */ W32((u32)(r_ebp+r_ebx*4+0x8cu), 0x8000u);
    /* 007a1d72: mov dword ptr [ebp + ebx*4 + 0x94], 0x20000000 */ W32((u32)(r_ebp+r_ebx*4+0x94u), 0x20000000u);
    /* 007a1d7d: jmp 0x7a1d95 */ goto L_007a1d95;
L_007a1d7f:; BB(0x007a1d7f);
    /* 007a1d7f: mov dword ptr [ebp + ebx*4 + 0x8c], 0xa000 */ W32((u32)(r_ebp+r_ebx*4+0x8cu), 0xa000u);
    /* 007a1d8a: mov dword ptr [ebp + ebx*4 + 0x94], 0x30000000 */ W32((u32)(r_ebp+r_ebx*4+0x94u), 0x30000000u);
L_007a1d95:; BB(0x007a1d95);
    /* 007a1d95: mov dword ptr [ebp + ebx*4 + 0x90], 0 */ W32((u32)(r_ebp+r_ebx*4+0x90u), 0x0u);
    /* 007a1da0: mov dword ptr [ebp + ebx*4 + 0x98], 0xd0040800 */ W32((u32)(r_ebp+r_ebx*4+0x98u), 0xd0040800u);
    /* 007a1dab: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 007a1dae: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 007a1db1: mov dword ptr [ebp + ebx*4 + 0xc0], edx */ W32((u32)(r_ebp+r_ebx*4+0xc0u), r_edx);
    /* 007a1db8: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 007a1dbb: fstp dword ptr [ebp + ebx*4 + 0xac] */ W_F32((u32)(r_ebp+r_ebx*4+0xacu), ST(0)); FPOP();
    /* 007a1dc2: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 007a1dc5: mov dword ptr [ebp + ebx*4 + 0xb8], ecx */ W32((u32)(r_ebp+r_ebx*4+0xb8u), r_ecx);
    /* 007a1dcc: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1dd1u); f_0082ddd8();
    /* 007a1dd1: fstp dword ptr [ebp + ebx*4 + 0xb0] */ W_F32((u32)(r_ebp+r_ebx*4+0xb0u), ST(0)); FPOP();
    /* 007a1dd8: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007a1ddb: mov dword ptr [ebp + ebx*4 + 0xbc], ecx */ W32((u32)(r_ebp+r_ebx*4+0xbcu), r_ecx);
    /* 007a1de2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1de7u); f_0082ddd8();
    /* 007a1de7: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1dec: fstp dword ptr [ebp + ebx*4 + 0xb4] */ W_F32((u32)(r_ebp+r_ebx*4+0xb4u), ST(0)); FPOP();
    /* 007a1df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a1df5: jl 0x7a1f26 */ if ((fS!=fO)) goto L_007a1f26;
L_007a1dfb:; BB(0x007a1dfb);
    /* 007a1dfb: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1e00: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a1e03: jg 0x7a1f26 */ if ((!fZ&&fS==fO)) goto L_007a1f26;
L_007a1e09:; BB(0x007a1e09);
    /* 007a1e09: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007a1e0d: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 007a1e13: mov dword ptr [ebp + ebx*4 + 0xa0], eax */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_eax);
    /* 007a1e1a: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 007a1e20: mov dword ptr [ebp + ebx*4 + 0xa4], edx */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_edx);
    /* 007a1e27: mov edi, dword ptr [esi + 0x308] */ r_edi = R32((u32)(r_esi+0x308u));
    /* 007a1e2d: mov dword ptr [ebp + ebx*4 + 0xa8], edi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edi);
    /* 007a1e34: mov dword ptr [ebp + ebx*4 + 0x88], 0xa */ W32((u32)(r_ebp+r_ebx*4+0x88u), 0xau);
    /* 007a1e3f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1e42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1e43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1e44: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1e45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1e46: ret 0x10 */ FN_RET(0x007a19c0); r_esp += 20; return;
L_007a1e49:; BB(0x007a1e49);
    /* 007a1e49: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1e4d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a1e4f: lea ecx, [eax + 0xdf8] */ r_ecx = (u32)(r_eax+0xdf8u);
    /* 007a1e55: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x7a1e5au); f_0069792c();
    /* 007a1e5a: movsx edx, word ptr [esp + 0x2c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1e5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1e60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1e61: call 0x5e4ba8 */ r_esp -= 4; W32(r_esp, 0x7a1e66u); f_005e4ba8();
    /* 007a1e66: mov esi, eax */ r_esi = r_eax;
    /* 007a1e68: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a1e6b: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 007a1e6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1e70: movzx edx, word ptr [ebp + ebx*4 + 0x86] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*4+0x86u));
    /* 007a1e78: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a1e7e: mov word ptr [ebp + ebx*4 + 0x86], dx */ W16((u32)(r_ebp+r_ebx*4+0x86u), (u16)r_edx);
    /* 007a1e86: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007a1e8a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a1e8c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1e8d: call 0x7a21d0 */ r_esp -= 4; W32(r_esp, 0x7a1e92u); f_007a21d0();
    /* 007a1e92: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1e96: mov dword ptr [ebp + ebx*4 + 0x90], 0 */ W32((u32)(r_ebp+r_ebx*4+0x90u), 0x0u);
    /* 007a1ea1: mov dword ptr [ebp + ebx*4 + 0x98], 0x40800 */ W32((u32)(r_ebp+r_ebx*4+0x98u), 0x40800u);
    /* 007a1eac: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007a1eb2: mov dword ptr [ebp + ebx*4 + 0xa0], edx */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_edx);
    /* 007a1eb9: mov edi, dword ptr [eax + 0x304] */ r_edi = R32((u32)(r_eax+0x304u));
    /* 007a1ebf: mov dword ptr [ebp + ebx*4 + 0xa4], edi */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_edi);
    /* 007a1ec6: mov edx, dword ptr [eax + 0x308] */ r_edx = R32((u32)(r_eax+0x308u));
    /* 007a1ecc: mov dword ptr [ebp + ebx*4 + 0xa8], edx */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edx);
    /* 007a1ed3: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 007a1ed6: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 007a1ed9: mov dword ptr [ebp + ebx*4 + 0xc0], edx */ W32((u32)(r_ebp+r_ebx*4+0xc0u), r_edx);
    /* 007a1ee0: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 007a1ee2: fstp dword ptr [ebp + ebx*4 + 0xac] */ W_F32((u32)(r_ebp+r_ebx*4+0xacu), ST(0)); FPOP();
    /* 007a1ee9: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 007a1eec: mov dword ptr [ebp + ebx*4 + 0xb8], ecx */ W32((u32)(r_ebp+r_ebx*4+0xb8u), r_ecx);
    /* 007a1ef3: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 007a1ef6: mov dword ptr [ebp + ebx*4 + 0xbc], edx */ W32((u32)(r_ebp+r_ebx*4+0xbcu), r_edx);
    /* 007a1efd: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1f02u); f_0082ddd8();
    /* 007a1f02: mov ecx, dword ptr [ebp + ebx*4 + 0xbc] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xbcu));
    /* 007a1f09: fstp dword ptr [ebp + ebx*4 + 0xb0] */ W_F32((u32)(r_ebp+r_ebx*4+0xb0u), ST(0)); FPOP();
    /* 007a1f10: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1f15u); f_0082ddd8();
    /* 007a1f15: fstp dword ptr [ebp + ebx*4 + 0xb4] */ W_F32((u32)(r_ebp+r_ebx*4+0xb4u), ST(0)); FPOP();
    /* 007a1f1c: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 007a1f1f: mov dword ptr [ebp + ebx*4 + 0x88], eax */ W32((u32)(r_ebp+r_ebx*4+0x88u), r_eax);
L_007a1f26:; BB(0x007a1f26);
    /* 007a1f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1f29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1f2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1f2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1f2d: ret 0x10 */ FN_RET(0x007a19c0); r_esp += 20; return;
L_007a1f30:; BB(0x007a1f30);
    /* 007a1f30: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a1f35: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1f38: jne 0x7a1ffb */ if (!fZ) goto L_007a1ffb;
L_007a1f3e:; BB(0x007a1f3e);
    /* 007a1f3e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1f42: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007a1f46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1f47: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1f49: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 007a1f4b: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x7a1f50u); f_006ded14();
    /* 007a1f50: mov esi, eax */ r_esi = r_eax;
    /* 007a1f52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a1f55: movzx edx, word ptr [ebp + ebx*4 + 0x86] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*4+0x86u));
    /* 007a1f5d: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a1f63: mov word ptr [ebp + ebx*4 + 0x86], dx */ W16((u32)(r_ebp+r_ebx*4+0x86u), (u16)r_edx);
    /* 007a1f6b: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 007a1f6e: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 007a1f71: mov dword ptr [ebp + ebx*4 + 0xc0], edi */ W32((u32)(r_ebp+r_ebx*4+0xc0u), r_edi);
    /* 007a1f78: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 007a1f7b: fstp dword ptr [ebp + ebx*4 + 0xac] */ W_F32((u32)(r_ebp+r_ebx*4+0xacu), ST(0)); FPOP();
    /* 007a1f82: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 007a1f85: mov dword ptr [ebp + ebx*4 + 0xb8], ecx */ W32((u32)(r_ebp+r_ebx*4+0xb8u), r_ecx);
    /* 007a1f8c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1f91u); f_0082ddd8();
    /* 007a1f91: fstp dword ptr [ebp + ebx*4 + 0xb0] */ W_F32((u32)(r_ebp+r_ebx*4+0xb0u), ST(0)); FPOP();
    /* 007a1f98: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007a1f9b: mov dword ptr [ebp + ebx*4 + 0xbc], ecx */ W32((u32)(r_ebp+r_ebx*4+0xbcu), r_ecx);
    /* 007a1fa2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1fa7u); f_0082ddd8();
    /* 007a1fa7: fstp dword ptr [ebp + ebx*4 + 0xb4] */ W_F32((u32)(r_ebp+r_ebx*4+0xb4u), ST(0)); FPOP();
    /* 007a1fae: movsx eax, byte ptr [esi + 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x22u));
    /* 007a1fb2: mov dword ptr [ebp + ebx*4 + 0x88], eax */ W32((u32)(r_ebp+r_ebx*4+0x88u), r_eax);
    /* 007a1fb9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a1fbb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1fbf: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007a1fc5: mov dword ptr [ebp + ebx*4 + 0xa0], edx */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_edx);
    /* 007a1fcc: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 007a1fd2: mov dword ptr [ebp + ebx*4 + 0xa4], esi */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_esi);
    /* 007a1fd9: mov edi, dword ptr [eax + 0x308] */ r_edi = R32((u32)(r_eax+0x308u));
    /* 007a1fdf: mov dword ptr [ebp + ebx*4 + 0xa8], edi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edi);
    /* 007a1fe6: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007a1fea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1feb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1fec: call 0x7a2234 */ r_esp -= 4; W32(r_esp, 0x7a1ff1u); f_007a2234();
    /* 007a1ff1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1ff4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1ff5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1ff6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1ff7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1ff8: ret 0x10 */ FN_RET(0x007a19c0); r_esp += 20; return;
L_007a1ffb:; BB(0x007a1ffb);
    /* 007a1ffb: movsx eax, word ptr [esp + 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x2cu));
    /* 007a2000: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a2003: jne 0x7a1f26 */ if (!fZ) goto L_007a1f26;
L_007a2009:; BB(0x007a2009);
    /* 007a2009: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a200d: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 007a2011: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a2012: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007a2014: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 007a2016: call 0x6ded14 */ r_esp -= 4; W32(r_esp, 0x7a201bu); f_006ded14();
    /* 007a201b: mov esi, eax */ r_esi = r_eax;
    /* 007a201d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a2020: movzx edx, word ptr [ebp + ebx*4 + 0x86] */ r_edx = (u32)R16((u32)(r_ebp+r_ebx*4+0x86u));
    /* 007a2028: and edx, 0xfffe */ {  u32 a = r_edx; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a202e: mov word ptr [ebp + ebx*4 + 0x86], dx */ W16((u32)(r_ebp+r_ebx*4+0x86u), (u16)r_edx);
    /* 007a2036: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 007a2039: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 007a203c: mov dword ptr [ebp + ebx*4 + 0xc0], edi */ W32((u32)(r_ebp+r_ebx*4+0xc0u), r_edi);
    /* 007a2043: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 007a2046: fstp dword ptr [ebp + ebx*4 + 0xac] */ W_F32((u32)(r_ebp+r_ebx*4+0xacu), ST(0)); FPOP();
    /* 007a204d: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 007a2050: mov dword ptr [ebp + ebx*4 + 0xb8], ecx */ W32((u32)(r_ebp+r_ebx*4+0xb8u), r_ecx);
    /* 007a2057: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a205cu); f_0082ddd8();
    /* 007a205c: fstp dword ptr [ebp + ebx*4 + 0xb0] */ W_F32((u32)(r_ebp+r_ebx*4+0xb0u), ST(0)); FPOP();
    /* 007a2063: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 007a2066: mov dword ptr [ebp + ebx*4 + 0xbc], ecx */ W32((u32)(r_ebp+r_ebx*4+0xbcu), r_ecx);
    /* 007a206d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2072u); f_0082ddd8();
    /* 007a2072: fstp dword ptr [ebp + ebx*4 + 0xb4] */ W_F32((u32)(r_ebp+r_ebx*4+0xb4u), ST(0)); FPOP();
    /* 007a2079: movsx eax, byte ptr [esi + 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x22u));
    /* 007a207d: mov dword ptr [ebp + ebx*4 + 0x88], eax */ W32((u32)(r_ebp+r_ebx*4+0x88u), r_eax);
    /* 007a2084: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a2086: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a208a: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 007a2090: mov dword ptr [ebp + ebx*4 + 0xa0], edx */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_edx);
    /* 007a2097: mov esi, dword ptr [eax + 0x304] */ r_esi = R32((u32)(r_eax+0x304u));
    /* 007a209d: mov dword ptr [ebp + ebx*4 + 0xa4], esi */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_esi);
    /* 007a20a4: mov edi, dword ptr [eax + 0x308] */ r_edi = R32((u32)(r_eax+0x308u));
    /* 007a20aa: mov dword ptr [ebp + ebx*4 + 0xa8], edi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edi);
    /* 007a20b1: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007a20b5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a20b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a20b7: call 0x7a2210 */ r_esp -= 4; W32(r_esp, 0x7a20bcu); f_007a2210();
    /* 007a20bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a20bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a20c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a20c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a20c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a20c3: ret 0x10 */ FN_RET(0x007a19c0); r_esp += 20; return;
L_007a20c6:; BB(0x007a20c6);
    /* 007a20c6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a20ca: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 007a20d1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a20d4: je 0x7a1f26 */ if (fZ) goto L_007a1f26;
L_007a20da:; BB(0x007a20da);
    /* 007a20da: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007a20de: movzx eax, word ptr [ebp + ebx*4 + 0x86] */ r_eax = (u32)R16((u32)(r_ebp+r_ebx*4+0x86u));
    /* 007a20e6: mov dword ptr [ebp + ebx*4 + 0x8c], 0x20000 */ W32((u32)(r_ebp+r_ebx*4+0x8cu), 0x20000u);
    /* 007a20f1: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a20f6: mov dword ptr [ebp + ebx*4 + 0x94], 0xc0000000 */ W32((u32)(r_ebp+r_ebx*4+0x94u), 0xc0000000u);
    /* 007a2101: mov word ptr [ebp + ebx*4 + 0x86], ax */ W16((u32)(r_ebp+r_ebx*4+0x86u), (u16)r_eax);
    /* 007a2109: mov dword ptr [ebp + ebx*4 + 0x98], 0x30040800 */ W32((u32)(r_ebp+r_ebx*4+0x98u), 0x30040800u);
    /* 007a2114: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 007a2119: mov dword ptr [ebp + ebx*4 + 0x88], 1 */ W32((u32)(r_ebp+r_ebx*4+0x88u), 0x1u);
    /* 007a2124: mov dword ptr [ebp + ebx*4 + 0x90], ecx */ W32((u32)(r_ebp+r_ebx*4+0x90u), r_ecx);
    /* 007a212b: mov edx, dword ptr [edi + 0x300] */ r_edx = R32((u32)(r_edi+0x300u));
    /* 007a2131: mov dword ptr [ebp + ebx*4 + 0xa0], edx */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_edx);
    /* 007a2138: mov esi, dword ptr [edi + 0x304] */ r_esi = R32((u32)(r_edi+0x304u));
    /* 007a213e: mov dword ptr [ebp + ebx*4 + 0xa4], esi */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_esi);
    /* 007a2145: mov eax, dword ptr [edi + 0x308] */ r_eax = R32((u32)(r_edi+0x308u));
    /* 007a214b: mov dword ptr [ebp + ebx*4 + 0xa8], eax */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_eax);
    /* 007a2152: mov dword ptr [ebp + ebx*4 + 0xc0], 0 */ W32((u32)(r_ebp+r_ebx*4+0xc0u), 0x0u);
    /* 007a215d: mov dword ptr [ebp + ebx*4 + 0xb8], ecx */ W32((u32)(r_ebp+r_ebx*4+0xb8u), r_ecx);
    /* 007a2164: mov dword ptr [ebp + ebx*4 + 0xac], 0x41700000 */ W32((u32)(r_ebp+r_ebx*4+0xacu), 0x41700000u);
    /* 007a216f: mov dword ptr [ebp + ebx*4 + 0xbc], ecx */ W32((u32)(r_ebp+r_ebx*4+0xbcu), r_ecx);
    /* 007a2176: mov ecx, 0x8000 */ r_ecx = 0x8000u;
    /* 007a217b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2180u); f_0082ddd8();
    /* 007a2180: mov ecx, dword ptr [ebp + ebx*4 + 0xbc] */ r_ecx = R32((u32)(r_ebp+r_ebx*4+0xbcu));
    /* 007a2187: fstp dword ptr [ebp + ebx*4 + 0xb0] */ W_F32((u32)(r_ebp+r_ebx*4+0xb0u), ST(0)); FPOP();
    /* 007a218e: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a2193u); f_0082ddd8();
    /* 007a2193: fstp dword ptr [ebp + ebx*4 + 0xb4] */ W_F32((u32)(r_ebp+r_ebx*4+0xb4u), ST(0)); FPOP();
    /* 007a219a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a219d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a219e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a219f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a21a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a21a1: ret 0x10 */ FN_RET(0x007a19c0); r_esp += 20; return;
}

void f_007a1b20(void)
{
    FN_ENTER(0x007a1b20);
    /* 007a1b20: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007a1b24: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 007a1b2a: mov dword ptr [ebp + ebx*4 + 0xa0], eax */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_eax);
    /* 007a1b31: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 007a1b37: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a1b39: mov dword ptr [ebp + ebx*4 + 0xa4], edx */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_edx);
    /* 007a1b40: mov esi, dword ptr [edi + 0x308] */ r_esi = R32((u32)(r_edi+0x308u));
    /* 007a1b46: mov dword ptr [ebp + ebx*4 + 0xa8], esi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_esi);
    /* 007a1b4d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007a1b51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1b52: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1b53: call 0x7a2210 */ r_esp -= 4; W32(r_esp, 0x7a1b58u); f_007a2210();
    /* 007a1b58: jmp 0x7a1f26 */ goto L_007a1f26;
L_007a1f26:; BB(0x007a1f26);
    /* 007a1f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1f29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1f2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1f2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1f2d: ret 0x10 */ FN_RET(0x007a1b20); r_esp += 20; return;
}

void f_007a1b5d(void)
{
    FN_ENTER(0x007a1b5d);
    /* 007a1b5d: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1b61: mov dword ptr [ebp + ebx*4 + 0x8c], 0x8000 */ W32((u32)(r_ebp+r_ebx*4+0x8cu), 0x8000u);
    /* 007a1b6c: mov dword ptr [ebp + ebx*4 + 0x90], 0 */ W32((u32)(r_ebp+r_ebx*4+0x90u), 0x0u);
    /* 007a1b77: mov dword ptr [ebp + ebx*4 + 0x94], 0x60000000 */ W32((u32)(r_ebp+r_ebx*4+0x94u), 0x60000000u);
    /* 007a1b82: mov dword ptr [ebp + ebx*4 + 0x98], 0x40800 */ W32((u32)(r_ebp+r_ebx*4+0x98u), 0x40800u);
    /* 007a1b8d: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 007a1b90: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x7a1b95u); f_0082dcbc();
    /* 007a1b95: fmul dword ptr [0x97d020] */ ST(0) = ST(0) * R_F32((u32)(0x97d020u));
    /* 007a1b9b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a1b9f: fadd dword ptr [edx + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x300u));
    /* 007a1ba5: mov eax, dword ptr [edx + 0x304] */ r_eax = R32((u32)(r_edx+0x304u));
    /* 007a1bab: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007a1bae: fstp dword ptr [0xaab4c0] */ W_F32((u32)(0xaab4c0u), ST(0)); FPOP();
    /* 007a1bb4: mov dword ptr [0xaab4c4], eax */ W32((u32)(0xaab4c4u), r_eax);
    /* 007a1bb9: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x7a1bbeu); f_0082ddd8();
    /* 007a1bbe: fmul dword ptr [0x97d020] */ ST(0) = ST(0) * R_F32((u32)(0x97d020u));
    /* 007a1bc4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1bc8: fadd dword ptr [eax + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x308u));
    /* 007a1bce: mov edx, dword ptr [0xaab4c0] */ r_edx = R32((u32)(0xaab4c0u));
    /* 007a1bd4: mov esi, dword ptr [0xaab4c4] */ r_esi = R32((u32)(0xaab4c4u));
    /* 007a1bda: fstp dword ptr [0xaab4c8] */ W_F32((u32)(0xaab4c8u), ST(0)); FPOP();
    /* 007a1be0: mov edi, dword ptr [0xaab4c8] */ r_edi = R32((u32)(0xaab4c8u));
    /* 007a1be6: mov dword ptr [ebp + ebx*4 + 0xa0], edx */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_edx);
    /* 007a1bed: mov dword ptr [ebp + ebx*4 + 0xa4], esi */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_esi);
    /* 007a1bf4: mov dword ptr [ebp + ebx*4 + 0xa8], edi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edi);
    /* 007a1bfb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1bfe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1bff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1c00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1c01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1c02: ret 0x10 */ FN_RET(0x007a1b5d); r_esp += 20; return;
}

void f_007a1c05(void)
{
    FN_ENTER(0x007a1c05);
    /* 007a1c05: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a1c09: mov edx, dword ptr [eax + 0x8fc] */ r_edx = R32((u32)(r_eax+0x8fcu));
    /* 007a1c0f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a1c11: je 0x7a1c2b */ if (fZ) goto L_007a1c2b;
L_007a1c13:; BB(0x007a1c13);
    /* 007a1c13: mov dword ptr [ebp + ebx*4 + 0x8c], 0xa000 */ W32((u32)(r_ebp+r_ebx*4+0x8cu), 0xa000u);
    /* 007a1c1e: mov dword ptr [ebp + ebx*4 + 0x94], 0x30000000 */ W32((u32)(r_ebp+r_ebx*4+0x94u), 0x30000000u);
    /* 007a1c29: jmp 0x7a1c41 */ goto L_007a1c41;
L_007a1c2b:; BB(0x007a1c2b);
    /* 007a1c2b: mov dword ptr [ebp + ebx*4 + 0x8c], 0x8000 */ W32((u32)(r_ebp+r_ebx*4+0x8cu), 0x8000u);
    /* 007a1c36: mov dword ptr [ebp + ebx*4 + 0x94], 0x20000000 */ W32((u32)(r_ebp+r_ebx*4+0x94u), 0x20000000u);
L_007a1c41:; BB(0x007a1c41);
    /* 007a1c41: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007a1c45: mov dword ptr [ebp + ebx*4 + 0x90], 0x30000 */ W32((u32)(r_ebp+r_ebx*4+0x90u), 0x30000u);
    /* 007a1c50: mov dword ptr [ebp + ebx*4 + 0x98], 0xc0040800 */ W32((u32)(r_ebp+r_ebx*4+0x98u), 0xc0040800u);
    /* 007a1c5b: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 007a1c61: mov dword ptr [ebp + ebx*4 + 0xa0], eax */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_eax);
    /* 007a1c68: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 007a1c6e: mov dword ptr [ebp + ebx*4 + 0xa4], edx */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_edx);
    /* 007a1c75: mov edi, dword ptr [esi + 0x308] */ r_edi = R32((u32)(r_esi+0x308u));
    /* 007a1c7b: mov dword ptr [ebp + ebx*4 + 0xa8], edi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edi);
    /* 007a1c82: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1c85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1c86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1c87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1c88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1c89: ret 0x10 */ FN_RET(0x007a1c05); r_esp += 20; return;
}

void f_007a1c8c(void)
{
    FN_ENTER(0x007a1c8c);
    /* 007a1c8c: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 007a1c90: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 007a1c96: mov dword ptr [ebp + ebx*4 + 0xa0], eax */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_eax);
    /* 007a1c9d: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 007a1ca3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a1ca5: mov dword ptr [ebp + ebx*4 + 0xa4], edx */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_edx);
    /* 007a1cac: mov esi, dword ptr [edi + 0x308] */ r_esi = R32((u32)(r_edi+0x308u));
    /* 007a1cb2: mov dword ptr [ebp + ebx*4 + 0xa8], esi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_esi);
    /* 007a1cb9: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 007a1cbd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1cbe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a1cbf: call 0x7a2234 */ r_esp -= 4; W32(r_esp, 0x7a1cc4u); f_007a2234();
    /* 007a1cc4: jmp 0x7a1f26 */ goto L_007a1f26;
L_007a1f26:; BB(0x007a1f26);
    /* 007a1f26: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1f29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1f2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1f2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1f2c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1f2d: ret 0x10 */ FN_RET(0x007a1c8c); r_esp += 20; return;
}

void f_007a1cc9(void)
{
    FN_ENTER(0x007a1cc9);
    /* 007a1cc9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a1ccd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a1cce: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007a1cd2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007a1cd4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a1cd5: call 0x7a21d0 */ r_esp -= 4; W32(r_esp, 0x7a1cdau); f_007a21d0();
    /* 007a1cda: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007a1cde: mov dword ptr [ebp + ebx*4 + 0x90], 0 */ W32((u32)(r_ebp+r_ebx*4+0x90u), 0x0u);
    /* 007a1ce9: mov dword ptr [ebp + ebx*4 + 0x98], 0x40800 */ W32((u32)(r_ebp+r_ebx*4+0x98u), 0x40800u);
    /* 007a1cf4: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 007a1cfa: mov dword ptr [ebp + ebx*4 + 0xa0], eax */ W32((u32)(r_ebp+r_ebx*4+0xa0u), r_eax);
    /* 007a1d01: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 007a1d07: mov dword ptr [ebp + ebx*4 + 0xa4], edx */ W32((u32)(r_ebp+r_ebx*4+0xa4u), r_edx);
    /* 007a1d0e: mov edi, dword ptr [esi + 0x308] */ r_edi = R32((u32)(r_esi+0x308u));
    /* 007a1d14: mov dword ptr [ebp + ebx*4 + 0xa8], edi */ W32((u32)(r_ebp+r_ebx*4+0xa8u), r_edi);
    /* 007a1d1b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a1d1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a1d1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a1d20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a1d21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a1d22: ret 0x10 */ FN_RET(0x007a1cc9); r_esp += 20; return;
}

