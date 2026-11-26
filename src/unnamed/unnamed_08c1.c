#include "protos.h"

void f_008c1040(void) /* sub_8C1040 */
{
    FN_ENTER(0x008c1040);
    /* 008c1040: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1041: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008c1045: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 008c104d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c104e: push 0xa37c64 */ { u32 v = 0xa37c64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1053: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1058u); f_008c94e0();
    /* 008c1058: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c105b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c105c: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1061: call dword ptr [0x8f8024] */ { u32 t = R32((u32)(0x8f8024u)); r_esp -= 4; W32(r_esp, 0x8c1067u); call_ind(t); }
    /* 008c1067: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1069: jne 0x8c110a */ if (!fZ) goto L_008c110a;
L_008c106f:; BB(0x008c106f);
    /* 008c106f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1070: push 0xa37c58 */ { u32 v = 0xa37c58u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1075: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c107au); f_008c94e0();
    /* 008c107a: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008c107e: mov esi, dword ptr [0x8f8020] */ r_esi = R32((u32)(0x8f8020u));
    /* 008c1084: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1087: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1088: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1089: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c108bu); call_ind(t); }
    /* 008c108b: push 0xa37c4c */ { u32 v = 0xa37c4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1090: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1095u); f_008c94e0();
    /* 008c1095: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008c1099: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c109c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c109d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c109e: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c10a0u); call_ind(t); }
    /* 008c10a0: push 0xa37c40 */ { u32 v = 0xa37c40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c10a5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c10aau); f_008c94e0();
    /* 008c10aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c10ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c10ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c10b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c10b3: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c10b5u); call_ind(t); }
    /* 008c10b5: push 0xa37c34 */ { u32 v = 0xa37c34u; r_esp -= 4; W32(r_esp, v); }
    /* 008c10ba: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c10bfu); f_008c94e0();
    /* 008c10bf: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008c10c3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c10c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c10c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c10c8: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c10cau); call_ind(t); }
    /* 008c10ca: push 0xa37c28 */ { u32 v = 0xa37c28u; r_esp -= 4; W32(r_esp, v); }
    /* 008c10cf: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c10d4u); f_008c94e0();
    /* 008c10d4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008c10d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c10db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c10dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c10dd: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c10dfu); call_ind(t); }
    /* 008c10df: push 0xa37c18 */ { u32 v = 0xa37c18u; r_esp -= 4; W32(r_esp, v); }
    /* 008c10e4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c10e9u); f_008c94e0();
    /* 008c10e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c10ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c10ed: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008c10f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c10f2: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c10f4u); call_ind(t); }
    /* 008c10f4: push 0xa37c08 */ { u32 v = 0xa37c08u; r_esp -= 4; W32(r_esp, v); }
    /* 008c10f9: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c10feu); f_008c94e0();
    /* 008c10fe: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 008c1102: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1106: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1107: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1109u); call_ind(t); }
    /* 008c1109: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008c110a:; BB(0x008c110a);
    /* 008c110a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008c110e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c110f: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c1115u); call_ind(t); }
    /* 008c1115: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008c1116: ret  */ FN_RET(0x008c1040); r_esp += 4; return;
}

void f_008c1120(void) /* sub_8C1120 */
{
    FN_ENTER(0x008c1120);
    /* 008c1120: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c1123: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1124: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c1125: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1126: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 008c112a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c112b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c112d: mov esi, 4 */ r_esi = 0x4u;
    /* 008c1132: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1133: mov ebp, ecx */ r_ebp = r_ecx;
    /* 008c1135: push 0xa37c64 */ { u32 v = 0xa37c64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c113a: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 008c113e: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 008c1142: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 008c1146: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 008c114a: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 008c114e: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 008c1152: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008c1156: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c115bu); f_008c94e0();
    /* 008c115b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c115e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c115f: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1164: call dword ptr [0x8f8024] */ { u32 t = R32((u32)(0x8f8024u)); r_esp -= 4; W32(r_esp, 0x8c116au); call_ind(t); }
    /* 008c116a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c116c: jne 0x8c123c */ if (!fZ) goto L_008c123c;
L_008c1172:; BB(0x008c1172);
    /* 008c1172: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c1176: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 008c117a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c117b: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008c117f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1180: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1181: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1182: push 0xa37d14 */ { u32 v = 0xa37d14u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1187: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 008c118b: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 008c118f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1194u); f_008c94e0();
    /* 008c1194: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008c1198: mov edi, dword ptr [0x8f8008] */ r_edi = R32((u32)(0x8f8008u));
    /* 008c119e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c11a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c11a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11a3: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c11a5u); call_ind(t); }
    /* 008c11a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c11a7: jne 0x8c123c */ if (!fZ) goto L_008c123c;
L_008c11ad:; BB(0x008c11ad);
    /* 008c11ad: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 008c11b1: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 008c11b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11b6: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 008c11ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c11bb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11bd: push 0xa37d08 */ { u32 v = 0xa37d08u; r_esp -= 4; W32(r_esp, v); }
    /* 008c11c2: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 008c11c6: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 008c11ca: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c11cfu); f_008c94e0();
    /* 008c11cf: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008c11d3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c11d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c11d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11d8: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c11dau); call_ind(t); }
    /* 008c11da: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c11dc: jne 0x8c123c */ if (!fZ) goto L_008c123c;
L_008c11de:; BB(0x008c11de);
    /* 008c11de: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 008c11e2: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 008c11e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c11e7: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 008c11eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c11ee: push 0xa37cfc */ { u32 v = 0xa37cfcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c11f3: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 008c11f7: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 008c11fb: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1200u); f_008c94e0();
    /* 008c1200: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1204: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 008c1208: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1209: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c120bu); call_ind(t); }
    /* 008c120b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c120d: jne 0x8c123c */ if (!fZ) goto L_008c123c;
L_008c120f:; BB(0x008c120f);
    /* 008c120f: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c1213: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 008c1217: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1218: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 008c121c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c121d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c121e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c121f: push 0xa37cf0 */ { u32 v = 0xa37cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1224: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 008c1228: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 008c122c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1231u); f_008c94e0();
    /* 008c1231: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008c1235: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1239: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c123a: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c123cu); call_ind(t); }
L_008c123c:; BB(0x008c123c);
    /* 008c123c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008c1240: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1241: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c1247u); call_ind(t); }
    /* 008c1247: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c124b: lea esi, [ebp + 0x24] */ r_esi = (u32)(r_ebp+0x24u);
    /* 008c124e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c124f: push 0xa37cdc */ { u32 v = 0xa37cdcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1254: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1259u); f_008c94e0();
    /* 008c1259: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c125c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c125d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c125e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1263u); f_008c3720();
    /* 008c1263: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008c1267: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c126a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c126b: push 0xa37cc8 */ { u32 v = 0xa37cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1270: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1275u); f_008c94e0();
    /* 008c1275: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c127a: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c127fu); f_008c3720();
    /* 008c127f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 008c1283: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1286: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1287: push 0xa37cb4 */ { u32 v = 0xa37cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c128c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1291u); f_008c94e0();
    /* 008c1291: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1294: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1295: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1296: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c129bu); f_008c3720();
    /* 008c129b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 008c129f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c12a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c12a3: push 0xa37ca0 */ { u32 v = 0xa37ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c12a8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c12adu); f_008c94e0();
    /* 008c12ad: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c12b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c12b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c12b2: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c12b7u); f_008c3720();
    /* 008c12b7: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 008c12bb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c12be: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c12bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c12c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c12c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c12c2: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c12c5: ret  */ FN_RET(0x008c1120); r_esp += 4; return;
}

void f_008c12d0(void) /* sub_8C12D0 */
{
    FN_ENTER(0x008c12d0);
    /* 008c12d0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c12d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c12d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c12d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c12d6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008c12d8: mov edi, ecx */ r_edi = r_ecx;
    /* 008c12da: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 008c12de: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c12e4u); call_ind(t); }
    /* 008c12e4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008c12e8: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 008c12ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c12ed: push 0xa37c64 */ { u32 v = 0xa37c64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c12f2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c12f7u); f_008c94e0();
    /* 008c12f7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c12fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c12fb: push 0x80000001 */ { u32 v = 0x80000001u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1300: call dword ptr [0x8f8024] */ { u32 t = R32((u32)(0x8f8024u)); r_esp -= 4; W32(r_esp, 0x8c1306u); call_ind(t); }
    /* 008c1306: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1308: jne 0x8c1421 */ if (!fZ) goto L_008c1421;
L_008c130e:; BB(0x008c130e);
    /* 008c130e: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 008c1312: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1314: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1315: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1317: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1318: push 0xa37d14 */ { u32 v = 0xa37d14u; r_esp -= 4; W32(r_esp, v); }
    /* 008c131d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1322u); f_008c94e0();
    /* 008c1322: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 008c1326: mov esi, dword ptr [0x8f8010] */ r_esi = R32((u32)(0x8f8010u));
    /* 008c132c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c132f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1330: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1331: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1333u); call_ind(t); }
    /* 008c1333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1335: jne 0x8c1421 */ if (!fZ) goto L_008c1421;
L_008c133b:; BB(0x008c133b);
    /* 008c133b: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 008c133f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1342: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1344: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1345: push 0xa37d40 */ { u32 v = 0xa37d40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c134a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c134fu); f_008c94e0();
    /* 008c134f: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008c1353: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1356: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1357: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1358: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c135au); call_ind(t); }
    /* 008c135a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c135c: jne 0x8c1421 */ if (!fZ) goto L_008c1421;
L_008c1362:; BB(0x008c1362);
    /* 008c1362: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 008c1366: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1368: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1369: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c136b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c136c: push 0xa37d34 */ { u32 v = 0xa37d34u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1371: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1376u); f_008c94e0();
    /* 008c1376: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1379: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c137a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008c137e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c137f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1381u); call_ind(t); }
    /* 008c1381: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1383: jne 0x8c1421 */ if (!fZ) goto L_008c1421;
L_008c1389:; BB(0x008c1389);
    /* 008c1389: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 008c138d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c138f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1390: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1392: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1393: push 0xa37c34 */ { u32 v = 0xa37c34u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1398: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c139du); f_008c94e0();
    /* 008c139d: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 008c13a1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c13a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c13a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c13a6: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c13a8u); call_ind(t); }
    /* 008c13a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c13aa: jne 0x8c1421 */ if (!fZ) goto L_008c1421;
L_008c13ac:; BB(0x008c13ac);
    /* 008c13ac: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008c13b0: lea esi, [edi + 0x24] */ r_esi = (u32)(r_edi+0x24u);
    /* 008c13b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c13b4: push 0xa37cdc */ { u32 v = 0xa37cdcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c13b9: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c13beu); f_008c94e0();
    /* 008c13be: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c13c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c13c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c13c3: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c13c8u); f_008c3720();
    /* 008c13c8: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008c13cc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c13cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c13d0: push 0xa37cc8 */ { u32 v = 0xa37cc8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c13d5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c13dau); f_008c94e0();
    /* 008c13da: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c13dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c13de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c13df: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c13e4u); f_008c3720();
    /* 008c13e4: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 008c13e8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c13eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c13ec: push 0xa37cb4 */ { u32 v = 0xa37cb4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c13f1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c13f6u); f_008c94e0();
    /* 008c13f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c13f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c13fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c13fb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1400u); f_008c3720();
    /* 008c1400: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008c1404: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1408: push 0xa37d20 */ { u32 v = 0xa37d20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c140d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1412u); f_008c94e0();
    /* 008c1412: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1416: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1417: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c141cu); f_008c3720();
    /* 008c141c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c141f: mov bl, 1 */ r_ebx = (r_ebx & 0xffffff00u) | ((0x1u) & 0xffu);
L_008c1421:; BB(0x008c1421);
    /* 008c1421: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008c1425: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1426: call dword ptr [0x8f8000] */ { u32 t = R32((u32)(0x8f8000u)); r_esp -= 4; W32(r_esp, 0x8c142cu); call_ind(t); }
    /* 008c142c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c142d: mov al, bl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ebx) & 0xffu);
    /* 008c142f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c1430: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c1431: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c1434: ret 0xc */ FN_RET(0x008c12d0); r_esp += 16; return;
}

void f_008c1440(void) /* sub_8C1440 */
{
    FN_ENTER(0x008c1440);
    /* 008c1440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008c1441: mov ebp, esp */ r_ebp = r_esp;
    /* 008c1443: mov eax, 0x1f40 */ r_eax = 0x1f40u;
    /* 008c1448: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8c144du); f_00858020();
    /* 008c144d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c144e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008c1450: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1451: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1452: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008c1455: jmp 0x8c145b */ goto L_008c145b;
L_008c145b:; BB(0x008c145b);
    /* 008c145b: cmp byte ptr [ebx], 0 */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008c145e: jne 0x8c358b */ if (!fZ) goto L_008c358b;
L_008c1464:; BB(0x008c1464);
    /* 008c1464: call 0x8c3950 */ r_esp -= 4; W32(r_esp, 0x8c1469u); f_008c3950();
    /* 008c1469: mov byte ptr [ebx + 0x2b7d], al */ W8((u32)(r_ebx+0x2b7du), (u8)r_eax);
    /* 008c146f: call dword ptr [0x8f82cc] */ { u32 t = R32((u32)(0x8f82ccu)); r_esp -= 4; W32(r_esp, 0x8c1475u); call_ind(t); }
    /* 008c1475: mov dword ptr [ebx + 0x2b10], eax */ W32((u32)(r_ebx+0x2b10u), r_eax);
    /* 008c147b: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x8c1481u); call_ind(t); }
    /* 008c1481: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c1484: mov dword ptr [0xaea6d8], eax */ W32((u32)(0xaea6d8u), r_eax);
    /* 008c1489: lea eax, [ebx + 0x2b14] */ r_eax = (u32)(r_ebx+0x2b14u);
    /* 008c148f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1491: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1492: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1493: call 0x8cb2cb */ r_esp -= 4; W32(r_esp, 0x8c1498u); f_008cb2cb();
    /* 008c1498: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c149b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008c149d: mov byte ptr [ebx + 0x2b33], 0 */ W8((u32)(r_ebx+0x2b33u), 0x0u);
    /* 008c14a4: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c14a9: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c14ae: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c14b3u); f_008c39d0();
    /* 008c14b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c14b5: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c14ba: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c14bfu); f_008cb285();
    /* 008c14bf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c14c2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c14c5: jne 0x8c150b */ if (!fZ) goto L_008c150b;
L_008c14c7:; BB(0x008c14c7);
    /* 008c14c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c14c9: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c14ce: call dword ptr [0x8f8220] */ { u32 t = R32((u32)(0x8f8220u)); r_esp -= 4; W32(r_esp, 0x8c14d4u); call_ind(t); }
    /* 008c14d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c14d6: jne 0x8c150b */ if (!fZ) goto L_008c150b;
L_008c14d8:; BB(0x008c14d8);
    /* 008c14d8: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c14de: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c14e0u); call_ind(t); }
    /* 008c14e0: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c14e2u); call_ind(t); }
    /* 008c14e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c14e3: push 0xa384fc */ { u32 v = 0xa384fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c14e8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c14edu); f_008c94e0();
    /* 008c14ed: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c14f0: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c14f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c14f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c14f5: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c14fau); f_008c3720();
    /* 008c14fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c14fd: mov eax, 0x6f */ r_eax = 0x6fu;
    /* 008c1502: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c1503: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c1504: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c1505: mov esp, ebp */ r_esp = r_ebp;
    /* 008c1507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c1508: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c150b:; BB(0x008c150b);
    /* 008c150b: mov esi, dword ptr [0x8f8160] */ r_esi = R32((u32)(0x8f8160u));
    /* 008c1511: push 0xa384f8 */ { u32 v = 0xa384f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1516: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c151b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c151du); call_ind(t); }
    /* 008c151d: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c151f: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1524: call 0x8c6e90 */ r_esp -= 4; W32(r_esp, 0x8c1529u); f_008c6e90();
    /* 008c1529: push 0xa384e8 */ { u32 v = 0xa384e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c152e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1533u); f_008c94e0();
    /* 008c1533: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1536: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1537: push 0xaea3ac */ { u32 v = 0xaea3acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c153c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c153eu); call_ind(t); }
    /* 008c153e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008c1540: call 0x8c0fb0 */ r_esp -= 4; W32(r_esp, 0x8c1545u); f_008c0fb0();
    /* 008c1545: mov al, 0x8d */ r_eax = (r_eax & 0xffffff00u) | ((0x8du) & 0xffu);
    /* 008c1547: mov dl, 0x73 */ r_edx = (r_edx & 0xffffff00u) | ((0x73u) & 0xffu);
    /* 008c1549: mov byte ptr [ebp - 0x59], al */ W8((u32)(r_ebp+0xffffffa7u), (u8)r_eax);
    /* 008c154c: mov byte ptr [ebp - 0x55], al */ W8((u32)(r_ebp+0xffffffabu), (u8)r_eax);
    /* 008c154f: mov cl, 0xf4 */ r_ecx = (r_ecx & 0xffffff00u) | ((0xf4u) & 0xffu);
    /* 008c1551: mov al, 0xa8 */ r_eax = (r_eax & 0xffffff00u) | ((0xa8u) & 0xffu);
    /* 008c1553: add ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008c1556: mov byte ptr [ebp - 0x80], 6 */ W8((u32)(r_ebp+0xffffff80u), 0x6u);
    /* 008c155a: mov byte ptr [ebp - 0x7f], 2 */ W8((u32)(r_ebp+0xffffff81u), 0x2u);
    /* 008c155e: mov byte ptr [ebp - 0x7e], 0 */ W8((u32)(r_ebp+0xffffff82u), 0x0u);
    /* 008c1562: mov byte ptr [ebp - 0x7d], 0 */ W8((u32)(r_ebp+0xffffff83u), 0x0u);
    /* 008c1566: mov byte ptr [ebp - 0x7c], 0 */ W8((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 008c156a: mov byte ptr [ebp - 0x7b], 0xa4 */ W8((u32)(r_ebp+0xffffff85u), 0xa4u);
    /* 008c156e: mov byte ptr [ebp - 0x7a], 0 */ W8((u32)(r_ebp+0xffffff86u), 0x0u);
    /* 008c1572: mov byte ptr [ebp - 0x79], 0 */ W8((u32)(r_ebp+0xffffff87u), 0x0u);
    /* 008c1576: mov byte ptr [ebp - 0x78], 0x52 */ W8((u32)(r_ebp+0xffffff88u), 0x52u);
    /* 008c157a: mov byte ptr [ebp - 0x77], 0x53 */ W8((u32)(r_ebp+0xffffff89u), 0x53u);
    /* 008c157e: mov byte ptr [ebp - 0x76], 0x41 */ W8((u32)(r_ebp+0xffffff8au), 0x41u);
    /* 008c1582: mov byte ptr [ebp - 0x75], 0x31 */ W8((u32)(r_ebp+0xffffff8bu), 0x31u);
    /* 008c1586: mov byte ptr [ebp - 0x74], 0 */ W8((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 008c158a: mov byte ptr [ebp - 0x73], 2 */ W8((u32)(r_ebp+0xffffff8du), 0x2u);
    /* 008c158e: mov byte ptr [ebp - 0x72], 0 */ W8((u32)(r_ebp+0xffffff8eu), 0x0u);
    /* 008c1592: mov byte ptr [ebp - 0x71], 0 */ W8((u32)(r_ebp+0xffffff8fu), 0x0u);
    /* 008c1596: mov byte ptr [ebp - 0x70], 1 */ W8((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 008c159a: mov byte ptr [ebp - 0x6f], 0 */ W8((u32)(r_ebp+0xffffff91u), 0x0u);
    /* 008c159e: mov byte ptr [ebp - 0x6e], 1 */ W8((u32)(r_ebp+0xffffff92u), 0x1u);
    /* 008c15a2: mov byte ptr [ebp - 0x6d], 0 */ W8((u32)(r_ebp+0xffffff93u), 0x0u);
    /* 008c15a6: mov byte ptr [ebp - 0x6c], 0x91 */ W8((u32)(r_ebp+0xffffff94u), 0x91u);
    /* 008c15aa: mov byte ptr [ebp - 0x6b], 0xc8 */ W8((u32)(r_ebp+0xffffff95u), 0xc8u);
    /* 008c15ae: mov byte ptr [ebp - 0x6a], 0xb0 */ W8((u32)(r_ebp+0xffffff96u), 0xb0u);
    /* 008c15b2: mov byte ptr [ebp - 0x69], 0x9a */ W8((u32)(r_ebp+0xffffff97u), 0x9au);
    /* 008c15b6: mov byte ptr [ebp - 0x68], 0x2c */ W8((u32)(r_ebp+0xffffff98u), 0x2cu);
    /* 008c15ba: mov byte ptr [ebp - 0x67], 0x39 */ W8((u32)(r_ebp+0xffffff99u), 0x39u);
    /* 008c15be: mov byte ptr [ebp - 0x66], 0xd2 */ W8((u32)(r_ebp+0xffffff9au), 0xd2u);
    /* 008c15c2: mov byte ptr [ebp - 0x65], dl */ W8((u32)(r_ebp+0xffffff9bu), (u8)r_edx);
    /* 008c15c5: mov byte ptr [ebp - 0x64], 0x5e */ W8((u32)(r_ebp+0xffffff9cu), 0x5eu);
    /* 008c15c9: mov byte ptr [ebp - 0x63], 0x8f */ W8((u32)(r_ebp+0xffffff9du), 0x8fu);
    /* 008c15cd: mov byte ptr [ebp - 0x62], 0x6f */ W8((u32)(r_ebp+0xffffff9eu), 0x6fu);
    /* 008c15d1: mov byte ptr [ebp - 0x61], 0x15 */ W8((u32)(r_ebp+0xffffff9fu), 0x15u);
    /* 008c15d5: mov byte ptr [ebp - 0x60], 0x2a */ W8((u32)(r_ebp+0xffffffa0u), 0x2au);
    /* 008c15d9: mov byte ptr [ebp - 0x5f], 0xe7 */ W8((u32)(r_ebp+0xffffffa1u), 0xe7u);
    /* 008c15dd: mov byte ptr [ebp - 0x5e], 0x4f */ W8((u32)(r_ebp+0xffffffa2u), 0x4fu);
    /* 008c15e1: mov byte ptr [ebp - 0x5d], 0xbd */ W8((u32)(r_ebp+0xffffffa3u), 0xbdu);
    /* 008c15e5: mov byte ptr [ebp - 0x5c], 0x66 */ W8((u32)(r_ebp+0xffffffa4u), 0x66u);
    /* 008c15e9: mov byte ptr [ebp - 0x5b], 0xff */ W8((u32)(r_ebp+0xffffffa5u), 0xffu);
    /* 008c15ed: mov byte ptr [ebp - 0x5a], 0x4e */ W8((u32)(r_ebp+0xffffffa6u), 0x4eu);
    /* 008c15f1: mov byte ptr [ebp - 0x58], 0x8c */ W8((u32)(r_ebp+0xffffffa8u), 0x8cu);
    /* 008c15f5: mov byte ptr [ebp - 0x57], 0xb3 */ W8((u32)(r_ebp+0xffffffa9u), 0xb3u);
    /* 008c15f9: mov byte ptr [ebp - 0x56], 0xc0 */ W8((u32)(r_ebp+0xffffffaau), 0xc0u);
    /* 008c15fd: mov byte ptr [ebp - 0x54], 0x98 */ W8((u32)(r_ebp+0xffffffacu), 0x98u);
    /* 008c1601: mov byte ptr [ebp - 0x53], cl */ W8((u32)(r_ebp+0xffffffadu), (u8)r_ecx);
    /* 008c1604: mov byte ptr [ebp - 0x52], 0xb2 */ W8((u32)(r_ebp+0xffffffaeu), 0xb2u);
    /* 008c1608: mov byte ptr [ebp - 0x51], 0xdc */ W8((u32)(r_ebp+0xffffffafu), 0xdcu);
    /* 008c160c: mov byte ptr [ebp - 0x50], 0x81 */ W8((u32)(r_ebp+0xffffffb0u), 0x81u);
    /* 008c1610: mov byte ptr [ebp - 0x4f], 0x43 */ W8((u32)(r_ebp+0xffffffb1u), 0x43u);
    /* 008c1614: mov byte ptr [ebp - 0x4e], 0x51 */ W8((u32)(r_ebp+0xffffffb2u), 0x51u);
    /* 008c1618: mov byte ptr [ebp - 0x4d], 0xbc */ W8((u32)(r_ebp+0xffffffb3u), 0xbcu);
    /* 008c161c: mov byte ptr [ebp - 0x4c], 0xf3 */ W8((u32)(r_ebp+0xffffffb4u), 0xf3u);
    /* 008c1620: mov byte ptr [ebp - 0x4b], 0xd6 */ W8((u32)(r_ebp+0xffffffb5u), 0xd6u);
    /* 008c1624: mov byte ptr [ebp - 0x4a], 0x74 */ W8((u32)(r_ebp+0xffffffb6u), 0x74u);
    /* 008c1628: mov byte ptr [ebp - 0x49], 0x50 */ W8((u32)(r_ebp+0xffffffb7u), 0x50u);
    /* 008c162c: mov byte ptr [ebp - 0x48], 0x7f */ W8((u32)(r_ebp+0xffffffb8u), 0x7fu);
    /* 008c1630: mov byte ptr [ebp - 0x47], 0x39 */ W8((u32)(r_ebp+0xffffffb9u), 0x39u);
    /* 008c1634: mov byte ptr [ebp - 0x46], 0x87 */ W8((u32)(r_ebp+0xffffffbau), 0x87u);
    /* 008c1638: mov byte ptr [ebp - 0x45], al */ W8((u32)(r_ebp+0xffffffbbu), (u8)r_eax);
    /* 008c163b: mov byte ptr [ebp - 0x44], 0x1b */ W8((u32)(r_ebp+0xffffffbcu), 0x1bu);
    /* 008c163f: mov byte ptr [ebp - 0x3e], al */ W8((u32)(r_ebp+0xffffffc2u), (u8)r_eax);
    /* 008c1642: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008c1644: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1647: mov byte ptr [ebp - 0x43], 0x5c */ W8((u32)(r_ebp+0xffffffbdu), 0x5cu);
    /* 008c164b: mov byte ptr [ebp - 0x42], 6 */ W8((u32)(r_ebp+0xffffffbeu), 0x6u);
    /* 008c164f: mov byte ptr [ebp - 0x41], 0x36 */ W8((u32)(r_ebp+0xffffffbfu), 0x36u);
    /* 008c1653: mov byte ptr [ebp - 0x40], 0x47 */ W8((u32)(r_ebp+0xffffffc0u), 0x47u);
    /* 008c1657: mov byte ptr [ebp - 0x3f], 8 */ W8((u32)(r_ebp+0xffffffc1u), 0x8u);
    /* 008c165b: mov byte ptr [ebp - 0x3d], 0xd8 */ W8((u32)(r_ebp+0xffffffc3u), 0xd8u);
    /* 008c165f: mov byte ptr [ebp - 0x3c], 0x63 */ W8((u32)(r_ebp+0xffffffc4u), 0x63u);
    /* 008c1663: mov byte ptr [ebp - 0x3b], 0xad */ W8((u32)(r_ebp+0xffffffc5u), 0xadu);
    /* 008c1667: mov byte ptr [ebp - 0x3a], 0xfd */ W8((u32)(r_ebp+0xffffffc6u), 0xfdu);
    /* 008c166b: mov byte ptr [ebp - 0x39], 0x6d */ W8((u32)(r_ebp+0xffffffc7u), 0x6du);
    /* 008c166f: mov byte ptr [ebp - 0x38], 0xb5 */ W8((u32)(r_ebp+0xffffffc8u), 0xb5u);
    /* 008c1673: mov byte ptr [ebp - 0x37], 0xa4 */ W8((u32)(r_ebp+0xffffffc9u), 0xa4u);
    /* 008c1677: mov byte ptr [ebp - 0x36], 0x94 */ W8((u32)(r_ebp+0xffffffcau), 0x94u);
    /* 008c167b: mov byte ptr [ebp - 0x35], 0xf0 */ W8((u32)(r_ebp+0xffffffcbu), 0xf0u);
    /* 008c167f: mov byte ptr [ebp - 0x34], 0xe0 */ W8((u32)(r_ebp+0xffffffccu), 0xe0u);
    /* 008c1683: mov byte ptr [ebp - 0x33], 0xdf */ W8((u32)(r_ebp+0xffffffcdu), 0xdfu);
    /* 008c1687: mov byte ptr [ebp - 0x32], 0xea */ W8((u32)(r_ebp+0xffffffceu), 0xeau);
    /* 008c168b: mov byte ptr [ebp - 0x31], 0xc5 */ W8((u32)(r_ebp+0xffffffcfu), 0xc5u);
    /* 008c168f: mov byte ptr [ebp - 0x30], cl */ W8((u32)(r_ebp+0xffffffd0u), (u8)r_ecx);
    /* 008c1692: mov byte ptr [ebp - 0x2f], dl */ W8((u32)(r_ebp+0xffffffd1u), (u8)r_edx);
    /* 008c1695: mov byte ptr [ebp - 0x2e], 0xdc */ W8((u32)(r_ebp+0xffffffd2u), 0xdcu);
    /* 008c1699: mov byte ptr [ebp - 0x2d], 0xd2 */ W8((u32)(r_ebp+0xffffffd3u), 0xd2u);
    /* 008c169d: jne 0x8c1c9a */ if (!fZ) goto L_008c1c9a;
L_008c16a3:; BB(0x008c16a3);
    /* 008c16a3: mov edi, 0xaea3ac */ r_edi = 0xaea3acu;
    /* 008c16a8: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c16ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c16ad: mov dword ptr [ebx + 0x1438], 0 */ W32((u32)(r_ebx+0x1438u), 0x0u);
    /* 008c16b7: mov dword ptr [ebx + 0x143c], 0x3e8 */ W32((u32)(r_ebx+0x143cu), 0x3e8u);
    /* 008c16c1: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c16c3: not ecx */ r_ecx = ~r_ecx;
    /* 008c16c5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c16c6: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008c16c9: jbe 0x8c1700 */ if ((fC||fZ)) goto L_008c1700;
L_008c16cb:; BB(0x008c16cb);
    /* 008c16cb: cmp byte ptr [0xaea3ad], 0x3a */ {  u32 a = R8((u32)(0xaea3adu)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008c16d2: je 0x8c1700 */ if (fZ) goto L_008c1700;
L_008c16d4:; BB(0x008c16d4);
    /* 008c16d4: lea edx, [ebp - 0x740] */ r_edx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c16da: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c16df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c16e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c16e2: call dword ptr [0x8f81ec] */ { u32 t = R32((u32)(0x8f81ecu)); r_esp -= 4; W32(r_esp, 0x8c16e8u); call_ind(t); }
    /* 008c16e8: lea eax, [ebp - 0x740] */ r_eax = (u32)(r_ebp+0xfffff8c0u);
    /* 008c16ee: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c16f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c16f1: call 0x8612da */ r_esp -= 4; W32(r_esp, 0x8c16f6u); f_008612da();
    /* 008c16f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c16f9: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 008c16fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c16fe: jne 0x8c1706 */ if (!fZ) goto L_008c1706;
L_008c1700:; BB(0x008c1700);
    /* 008c1700: lea edx, [ebp - 0x740] */ r_edx = (u32)(r_ebp+0xfffff8c0u);
L_008c1706:; BB(0x008c1706);
    /* 008c1706: mov edi, 0xaea3ac */ r_edi = 0xaea3acu;
    /* 008c170b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c170e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1710: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1712: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1714: not ecx */ r_ecx = ~r_ecx;
    /* 008c1716: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1718: mov eax, ecx */ r_eax = r_ecx;
    /* 008c171a: mov esi, edi */ r_esi = r_edi;
    /* 008c171c: mov edi, edx */ r_edi = r_edx;
    /* 008c171e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1721: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1723: mov ecx, eax */ r_ecx = r_eax;
    /* 008c1725: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1728: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c172a: lea ecx, [ebp - 0x740] */ r_ecx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c1730: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1731: call 0x8612da */ r_esp -= 4; W32(r_esp, 0x8c1736u); f_008612da();
    /* 008c1736: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 008c1739: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 008c173e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c1740: lea edi, [ebp - 0x537] */ r_edi = (u32)(r_ebp+0xfffffac9u);
    /* 008c1746: mov byte ptr [ebp - 0x538], 0 */ W8((u32)(r_ebp+0xfffffac8u), 0x0u);
    /* 008c174d: mov byte ptr [ebp - 0x434], 0 */ W8((u32)(r_ebp+0xfffffbccu), 0x0u);
    /* 008c1754: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1756: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008c1758: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c1759: mov ecx, 0x40 */ r_ecx = 0x40u;
    /* 008c175e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c1760: lea edi, [ebp - 0x433] */ r_edi = (u32)(r_ebp+0xfffffbcdu);
    /* 008c1766: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1769: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c176b: stosw word ptr es:[edi], ax */ W16(r_edi, (u16)r_eax); r_edi += rt_df ? -2 : 2;
    /* 008c176d: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 008c176e: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 008c1774: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 008c177a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c177c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c177d: mov dword ptr [ebp - 0x94], 0xc */ W32((u32)(r_ebp+0xffffff6cu), 0xcu);
    /* 008c1787: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 008c178d: mov dword ptr [ebp - 0x8c], 0 */ W32((u32)(r_ebp+0xffffff74u), 0x0u);
    /* 008c1797: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008c1799: call dword ptr [0x8f801c] */ { u32 t = R32((u32)(0x8f801cu)); r_esp -= 4; W32(r_esp, 0x8c179fu); call_ind(t); }
    /* 008c179f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c17a1: je 0x8c17be */ if (fZ) goto L_008c17be;
L_008c17a3:; BB(0x008c17a3);
    /* 008c17a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c17a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c17a5: lea ecx, [ebp - 0xb8] */ r_ecx = (u32)(r_ebp+0xffffff48u);
    /* 008c17ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c17ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c17ae: call dword ptr [0x8f8018] */ { u32 t = R32((u32)(0x8f8018u)); r_esp -= 4; W32(r_esp, 0x8c17b4u); call_ind(t); }
    /* 008c17b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c17b6: je 0x8c17be */ if (fZ) goto L_008c17be;
L_008c17b8:; BB(0x008c17b8);
    /* 008c17b8: lea esi, [ebp - 0x94] */ r_esi = (u32)(r_ebp+0xffffff6cu);
L_008c17be:; BB(0x008c17be);
    /* 008c17be: push 0xa37bf8 */ { u32 v = 0xa37bf8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c17c3: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c17c8u); f_008c94e0();
    /* 008c17c8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c17cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c17cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c17ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c17cf: call dword ptr [0x8f8178] */ { u32 t = R32((u32)(0x8f8178u)); r_esp -= 4; W32(r_esp, 0x8c17d5u); call_ind(t); }
    /* 008c17d5: mov esi, eax */ r_esi = r_eax;
    /* 008c17d7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c17d9: jne 0x8c17e3 */ if (!fZ) goto L_008c17e3;
L_008c17db:; BB(0x008c17db);
    /* 008c17db: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c17e1u); call_ind(t); }
    /* 008c17e1: jmp 0x8c1804 */ goto L_008c1804;
L_008c17e3:; BB(0x008c17e3);
    /* 008c17e3: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c17e9u); call_ind(t); }
    /* 008c17e9: cmp eax, 0xb7 */ {  u32 a = r_eax; u32 b = 0xb7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c17ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c17ef: jne 0x8c17fe */ if (!fZ) goto L_008c17fe;
L_008c17f1:; BB(0x008c17f1);
    /* 008c17f1: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c17f7u); call_ind(t); }
    /* 008c17f7: mov esi, 1 */ r_esi = 0x1u;
    /* 008c17fc: jmp 0x8c1806 */ goto L_008c1806;
L_008c17fe:; BB(0x008c17fe);
    /* 008c17fe: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c1804u); call_ind(t); }
L_008c1804:; BB(0x008c1804);
    /* 008c1804: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008c1806:; BB(0x008c1806);
    /* 008c1806: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
L_008c1809:; BB(0x008c1809);
    /* 008c1809: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c180c: jne 0x8c182b */ if (!fZ) goto L_008c182b;
L_008c180e:; BB(0x008c180e);
    /* 008c180e: lea edx, [ebp - 0x740] */ r_edx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c1814: lea eax, [ebp - 0x538] */ r_eax = (u32)(r_ebp+0xfffffac8u);
    /* 008c181a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c181b: push 0xa384e0 */ { u32 v = 0xa384e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1820: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1821: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c1826u); f_00858bf5();
    /* 008c1826: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1829: jmp 0x8c1847 */ goto L_008c1847;
L_008c182b:; BB(0x008c182b);
    /* 008c182b: lea ecx, [ebp - 0x740] */ r_ecx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c1831: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1832: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1833: lea edx, [ebp - 0x538] */ r_edx = (u32)(r_ebp+0xfffffac8u);
    /* 008c1839: push 0xa384d4 */ { u32 v = 0xa384d4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c183e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c183f: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c1844u); f_00858bf5();
    /* 008c1844: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c1847:; BB(0x008c1847);
    /* 008c1847: lea eax, [ebp - 0x538] */ r_eax = (u32)(r_ebp+0xfffffac8u);
    /* 008c184d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c184f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1850: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c1855u); f_008cb285();
    /* 008c1855: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1858: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c185b: jne 0x8c1862 */ if (!fZ) goto L_008c1862;
L_008c185d:; BB(0x008c185d);
    /* 008c185d: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1860: jge 0x8c1879 */ if ((fS==fO)) goto L_008c1879;
L_008c1862:; BB(0x008c1862);
    /* 008c1862: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1864: jne 0x8c1873 */ if (!fZ) goto L_008c1873;
L_008c1866:; BB(0x008c1866);
    /* 008c1866: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 008c186c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c186d: call dword ptr [0x8f81fc] */ { u32 t = R32((u32)(0x8f81fcu)); r_esp -= 4; W32(r_esp, 0x8c1873u); call_ind(t); }
L_008c1873:; BB(0x008c1873);
    /* 008c1873: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c1874: cmp edi, 0x63 */ {  u32 a = r_edi; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1877: jle 0x8c1809 */ if ((fZ||fS!=fO)) goto L_008c1809;
L_008c1879:; BB(0x008c1879);
    /* 008c1879: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c187c: jle 0x8c1926 */ if ((fZ||fS!=fO)) goto L_008c1926;
L_008c1882:; BB(0x008c1882);
    /* 008c1882: lea esi, [edi - 1] */ r_esi = (u32)(r_edi+0xffffffffu);
L_008c1885:; BB(0x008c1885);
    /* 008c1885: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1888: jne 0x8c18a7 */ if (!fZ) goto L_008c18a7;
L_008c188a:; BB(0x008c188a);
    /* 008c188a: lea edx, [ebp - 0x740] */ r_edx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c1890: lea eax, [ebp - 0x538] */ r_eax = (u32)(r_ebp+0xfffffac8u);
    /* 008c1896: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1897: push 0xa384e0 */ { u32 v = 0xa384e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c189c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c189d: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c18a2u); f_00858bf5();
    /* 008c18a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c18a5: jmp 0x8c18c3 */ goto L_008c18c3;
L_008c18a7:; BB(0x008c18a7);
    /* 008c18a7: lea ecx, [ebp - 0x740] */ r_ecx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c18ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c18ae: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c18af: lea edx, [ebp - 0x538] */ r_edx = (u32)(r_ebp+0xfffffac8u);
    /* 008c18b5: push 0xa384d4 */ { u32 v = 0xa384d4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c18ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c18bb: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c18c0u); f_00858bf5();
    /* 008c18c0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c18c3:; BB(0x008c18c3);
    /* 008c18c3: lea eax, [ebp - 0x740] */ r_eax = (u32)(r_ebp+0xfffff8c0u);
    /* 008c18c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c18ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c18cb: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 008c18d1: push 0xa384d4 */ { u32 v = 0xa384d4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c18d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c18d7: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c18dcu); f_00858bf5();
    /* 008c18dc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c18df: lea edx, [ebp - 0x434] */ r_edx = (u32)(r_ebp+0xfffffbccu);
    /* 008c18e5: lea eax, [ebp - 0x538] */ r_eax = (u32)(r_ebp+0xfffffac8u);
    /* 008c18eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c18ed: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c18ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c18ef: call dword ptr [0x8f8164] */ { u32 t = R32((u32)(0x8f8164u)); r_esp -= 4; W32(r_esp, 0x8c18f5u); call_ind(t); }
    /* 008c18f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c18f7: jne 0x8c191b */ if (!fZ) goto L_008c191b;
L_008c18f9:; BB(0x008c18f9);
    /* 008c18f9: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 008c18ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1900: lea edx, [ebp - 0x538] */ r_edx = (u32)(r_ebp+0xfffffac8u);
    /* 008c1906: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1907: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1908: call dword ptr [0x8f8168] */ { u32 t = R32((u32)(0x8f8168u)); r_esp -= 4; W32(r_esp, 0x8c190eu); call_ind(t); }
    /* 008c190e: lea eax, [ebp - 0x538] */ r_eax = (u32)(r_ebp+0xfffffac8u);
    /* 008c1914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1915: call dword ptr [0x8f81fc] */ { u32 t = R32((u32)(0x8f81fcu)); r_esp -= 4; W32(r_esp, 0x8c191bu); call_ind(t); }
L_008c191b:; BB(0x008c191b);
    /* 008c191b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c191c: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008c191d: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1920: jg 0x8c1885 */ if ((!fZ&&fS==fO)) goto L_008c1885;
L_008c1926:; BB(0x008c1926);
    /* 008c1926: lea ecx, [ebp - 0x740] */ r_ecx = (u32)(r_ebp+0xfffff8c0u);
    /* 008c192c: lea edx, [ebp - 0x538] */ r_edx = (u32)(r_ebp+0xfffffac8u);
    /* 008c1932: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1933: push 0xa384e0 */ { u32 v = 0xa384e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1938: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1939: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c193eu); f_00858bf5();
    /* 008c193e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1941: mov esi, dword ptr [0x8f8144] */ r_esi = R32((u32)(0x8f8144u));
    /* 008c1947: lea eax, [ebp - 0x538] */ r_eax = (u32)(r_ebp+0xfffffac8u);
    /* 008c194d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c194f: push 0x80000080 */ { u32 v = 0x80000080u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1954: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1956: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1958: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008c195a: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c195f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1960: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1962u); call_ind(t); }
    /* 008c1962: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1965: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 008c1967: jne 0x8c1986 */ if (!fZ) goto L_008c1986;
L_008c1969:; BB(0x008c1969);
    /* 008c1969: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c196b: push 0x80000080 */ { u32 v = 0x80000080u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1970: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1972: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1974: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1976: lea ecx, [ebp - 0x538] */ r_ecx = (u32)(r_ebp+0xfffffac8u);
    /* 008c197c: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1981: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1982: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1984u); call_ind(t); }
    /* 008c1984: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
L_008c1986:; BB(0x008c1986);
    /* 008c1986: cmp dword ptr [ebx], -1 */ {  u32 a = R32((u32)(r_ebx)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1989: je 0x8c1c9a */ if (fZ) goto L_008c1c9a;
L_008c198f:; BB(0x008c198f);
    /* 008c198f: lea esi, [ebx + 0x101c] */ r_esi = (u32)(r_ebx+0x101cu);
    /* 008c1995: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1996: call dword ptr [0x8f8188] */ { u32 t = R32((u32)(0x8f8188u)); r_esp -= 4; W32(r_esp, 0x8c199cu); call_ind(t); }
    /* 008c199c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c199e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c19a0: mov dx, word ptr [ebx + 0x102a] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x102au))) & 0xffffu);
    /* 008c19a7: mov ax, word ptr [ebx + 0x1028] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebx+0x1028u))) & 0xffffu);
    /* 008c19ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c19af: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c19b1: mov cx, word ptr [ebx + 0x1026] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebx+0x1026u))) & 0xffffu);
    /* 008c19b8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c19ba: mov dx, word ptr [ebx + 0x1024] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x1024u))) & 0xffffu);
    /* 008c19c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c19c2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c19c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c19c5: mov ax, word ptr [ebx + 0x1022] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebx+0x1022u))) & 0xffffu);
    /* 008c19cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c19cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c19cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c19d1: mov cx, word ptr [ebx + 0x101e] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebx+0x101eu))) & 0xffffu);
    /* 008c19d8: mov dx, word ptr [esi] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008c19db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c19dc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c19dd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c19de: push 0xa38484 */ { u32 v = 0xa38484u; r_esp -= 4; W32(r_esp, v); }
    /* 008c19e3: lea edi, [ebx + 0x1c] */ r_edi = (u32)(r_ebx+0x1cu);
    /* 008c19e6: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c19ebu); f_008c9470();
    /* 008c19eb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c19ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c19ef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c19f0: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x8c19f5u); f_00858bf5();
    /* 008c19f5: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c19f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c19fa: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c19fd: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c19ff: mov eax, dword ptr [ebx + 0x143c] */ r_eax = R32((u32)(r_ebx+0x143cu));
    /* 008c1a05: not ecx */ r_ecx = ~r_ecx;
    /* 008c1a07: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1a08: cmp eax, 0x3e7 */ {  u32 a = r_eax; u32 b = 0x3e7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1a0d: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 008c1a10: jne 0x8c1a19 */ if (!fZ) goto L_008c1a19;
L_008c1a12:; BB(0x008c1a12);
    /* 008c1a12: mov dword ptr [ebp - 0xc], 0 */ W32((u32)(r_ebp+0xfffffff4u), 0x0u);
L_008c1a19:; BB(0x008c1a19);
    /* 008c1a19: mov eax, dword ptr [ebx + 0x1438] */ r_eax = R32((u32)(r_ebx+0x1438u));
    /* 008c1a1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1a21: je 0x8c1a60 */ if (fZ) goto L_008c1a60;
L_008c1a23:; BB(0x008c1a23);
    /* 008c1a23: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c1a26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c1a28: jle 0x8c1c80 */ if ((fZ||fS!=fO)) goto L_008c1c80;
L_008c1a2e:; BB(0x008c1a2e);
    /* 008c1a2e: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c1a31: mov edi, 0xffffffe4 */ r_edi = 0xffffffe4u;
    /* 008c1a36: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 008c1a39: sub edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1a3b: mov ecx, 2 */ r_ecx = 0x2u;
L_008c1a40:; BB(0x008c1a40);
    /* 008c1a40: mov edx, dword ptr [ebx + 0x1438] */ r_edx = R32((u32)(r_ebx+0x1438u));
    /* 008c1a46: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c1a48: mov dword ptr [ebx + 0x1438], edx */ W32((u32)(r_ebx+0x1438u), r_edx);
    /* 008c1a4e: add dl, 0x43 */ {  u32 a = (u8)r_edx; u32 b = 0x43u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c1a51: xor byte ptr [eax], dl */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 008c1a53: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1a54: lea edx, [edi + eax] */ r_edx = (u32)(r_edi+r_eax);
    /* 008c1a57: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1a59: jl 0x8c1a40 */ if ((fS!=fO)) goto L_008c1a40;
L_008c1a5b:; BB(0x008c1a5b);
    /* 008c1a5b: jmp 0x8c1c80 */ goto L_008c1c80;
L_008c1a60:; BB(0x008c1a60);
    /* 008c1a60: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c1a62: mov di, word ptr [ebx + 0x102a] */ r_edi = (r_edi & 0xffff0000u) | ((R16((u32)(r_ebx+0x102au))) & 0xffffu);
    /* 008c1a69: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8c1a6fu); call_ind(t); }
    /* 008c1a6f: mov dx, word ptr [ebx + 0x1028] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x1028u))) & 0xffffu);
    /* 008c1a76: mov cx, word ptr [ebx + 0x1026] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebx+0x1026u))) & 0xffffu);
    /* 008c1a7d: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1a7f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1a81: mov dx, word ptr [ebx + 0x1022] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x1022u))) & 0xffffu);
    /* 008c1a88: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1a8a: mov ax, word ptr [esi] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi))) & 0xffffu);
    /* 008c1a8d: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008c1a90: mov dx, word ptr [ebx + 0x101e] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x101eu))) & 0xffffu);
    /* 008c1a97: mov esi, 0xa */ r_esi = 0xau;
    /* 008c1a9c: imul eax, edx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008c1a9f: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008c1aa2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1aa3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c1aa5: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008c1aa8: and ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1aae: or ecx, 0xfc000000 */ {  u32 a = r_ecx; u32 b = 0xfc000000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1ab4: mov eax, ecx */ r_eax = r_ecx;
    /* 008c1ab6: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x008c1ab6, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008c1ab6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008c1ab8: xor edx, 0x55 */ {  u32 a = r_edx; u32 b = 0x55u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c1abb: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008c1abe: or edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 008c1ac0: mov dword ptr [ebx + 0x102c], edx */ W32((u32)(r_ebx+0x102cu), r_edx);
    /* 008c1ac6: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8c1accu); call_ind(t); }
    /* 008c1acc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1acd: call 0x858798 */ r_esp -= 4; W32(r_esp, 0x8c1ad2u); f_00858798();
    /* 008c1ad2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1ad5: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008c1ad7:; BB(0x008c1ad7);
    /* 008c1ad7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x8c1adcu); f_008587a5();
    /* 008c1adc: and eax, 0x800000ff */ {  u32 a = r_eax; u32 b = 0x800000ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008c1ae1: jns 0x8c1aea */ if (!fS) goto L_008c1aea;
L_008c1ae3:; BB(0x008c1ae3);
    /* 008c1ae3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008c1ae4: or eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008c1ae9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008c1aea:; BB(0x008c1aea);
    /* 008c1aea: mov byte ptr [ebp + esi - 0x98], al */ W8((u32)(r_ebp+r_esi+0xffffff68u), (u8)r_eax);
    /* 008c1af1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c1af2: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1af5: jl 0x8c1ad7 */ if ((fS!=fO)) goto L_008c1ad7;
L_008c1af7:; BB(0x008c1af7);
    /* 008c1af7: lea ecx, [ebp - 0x98] */ r_ecx = (u32)(r_ebp+0xffffff68u);
    /* 008c1afd: lea eax, [ebx + 0x1030] */ r_eax = (u32)(r_ebx+0x1030u);
    /* 008c1b03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b04: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b07: call 0x8c8d30 */ r_esp -= 4; W32(r_esp, 0x8c1b0cu); f_008c8d30();
    /* 008c1b0c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1b0f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c1b11: lea edx, [ebp - 8] */ r_edx = (u32)(r_ebp+0xfffffff8u);
    /* 008c1b14: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008c1b17: push 0xf0000000 */ { u32 v = 0xf0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b1e: push 0xa38458 */ { u32 v = 0xa38458u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b25: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 008c1b28: call dword ptr [0x8f803c] */ { u32 t = R32((u32)(0x8f803cu)); r_esp -= 4; W32(r_esp, 0x8c1b2eu); call_ind(t); }
    /* 008c1b2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1b30: je 0x8c1c68 */ if (fZ) goto L_008c1c68;
L_008c1b36:; BB(0x008c1b36);
    /* 008c1b36: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c1b39: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 008c1b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b3d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b3e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b3f: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 008c1b42: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b44: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b46: call dword ptr [0x8f8034] */ { u32 t = R32((u32)(0x8f8034u)); r_esp -= 4; W32(r_esp, 0x8c1b4cu); call_ind(t); }
    /* 008c1b4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1b4e: je 0x8c1c5d */ if (fZ) goto L_008c1c5d;
L_008c1b54:; BB(0x008c1b54);
    /* 008c1b54: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c1b57: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 008c1b5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b5e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b61: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b62: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008c1b65: call dword ptr [0x8f8030] */ { u32 t = R32((u32)(0x8f8030u)); r_esp -= 4; W32(r_esp, 0x8c1b6bu); call_ind(t); }
    /* 008c1b6b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 008c1b6e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1b70: je 0x8c1c05 */ if (fZ) goto L_008c1c05;
L_008c1b76:; BB(0x008c1b76);
    /* 008c1b76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b77: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8c1b7cu); f_008581c5();
    /* 008c1b7c: mov edi, eax */ r_edi = r_eax;
    /* 008c1b7e: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 008c1b84: mov edx, edi */ r_edx = r_edi;
    /* 008c1b86: mov dword ptr [ebp - 0x14], 0x10 */ W32((u32)(r_ebp+0xffffffecu), 0x10u);
    /* 008c1b8d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1b90: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008c1b92: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 008c1b98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1b99: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 008c1b9c: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 008c1ba2: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008c1ba5: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 008c1bab: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 008c1bae: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008c1bb0: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 008c1bb3: xor al, 0x23 */ {  u32 a = (u8)r_eax; u32 b = 0x23u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c1bb5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bb6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bb7: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 008c1bb9: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c1bbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bc0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bc3: call dword ptr [0x8f8030] */ { u32 t = R32((u32)(0x8f8030u)); r_esp -= 4; W32(r_esp, 0x8c1bc9u); call_ind(t); }
    /* 008c1bc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1bcb: je 0x8c1bfa */ if (fZ) goto L_008c1bfa;
L_008c1bcd:; BB(0x008c1bcd);
    /* 008c1bcd: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008c1bcf: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 008c1bd2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bd4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bd5: lea edx, [ebp - 0x18] */ r_edx = (u32)(r_ebp+0xffffffe8u);
    /* 008c1bd8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bdc: mov dword ptr [ebp - 0x18], 0xccfc00 */ W32((u32)(r_ebp+0xffffffe8u), 0xccfc00u);
    /* 008c1be3: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c1be9u); call_ind(t); }
    /* 008c1be9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008c1beb: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 008c1bee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bf1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bf2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bf3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bf4: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c1bfau); call_ind(t); }
L_008c1bfa:; BB(0x008c1bfa);
    /* 008c1bfa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1bfb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8c1c00u); f_00857e98();
    /* 008c1c00: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1c03: jmp 0x8c1c51 */ goto L_008c1c51;
L_008c1c05:; BB(0x008c1c05);
    /* 008c1c05: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008c1c07: mov esi, dword ptr [0x8f81c0] */ r_esi = R32((u32)(0x8f81c0u));
    /* 008c1c0d: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 008c1c10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c12: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 008c1c15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c19: mov dword ptr [ebp - 0x18], 0xccfd00 */ W32((u32)(r_ebp+0xffffffe8u), 0xccfd00u);
    /* 008c1c20: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1c22u); call_ind(t); }
    /* 008c1c22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c1c24:; BB(0x008c1c24);
    /* 008c1c24: mov cl, byte ptr [ebp + eax - 0x98] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffff68u))) & 0xffu);
    /* 008c1c2b: mov dl, byte ptr [ebp + eax - 0x6b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffff95u))) & 0xffu);
    /* 008c1c2f: xor cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c1c31: mov byte ptr [ebp + eax - 0xb4], cl */ W8((u32)(r_ebp+r_eax+0xffffff4cu), (u8)r_ecx);
    /* 008c1c38: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1c39: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1c3c: jl 0x8c1c24 */ if ((fS!=fO)) goto L_008c1c24;
L_008c1c3e:; BB(0x008c1c3e);
    /* 008c1c3e: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008c1c40: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 008c1c43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c45: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 008c1c4b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c4f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1c51u); call_ind(t); }
L_008c1c51:; BB(0x008c1c51);
    /* 008c1c51: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c1c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c55: call dword ptr [0x8f802c] */ { u32 t = R32((u32)(0x8f802cu)); r_esp -= 4; W32(r_esp, 0x8c1c5bu); call_ind(t); }
    /* 008c1c5b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008c1c5d:; BB(0x008c1c5d);
    /* 008c1c5d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c1c60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c62: call dword ptr [0x8f8028] */ { u32 t = R32((u32)(0x8f8028u)); r_esp -= 4; W32(r_esp, 0x8c1c68u); call_ind(t); }
L_008c1c68:; BB(0x008c1c68);
    /* 008c1c68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c1c6b: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 008c1c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c70: lea eax, [ebx + 0x1030] */ r_eax = (u32)(r_ebx+0x1030u);
    /* 008c1c76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c78: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c1c7du); f_008c8e20();
    /* 008c1c7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c1c80:; BB(0x008c1c80);
    /* 008c1c80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c1c83: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008c1c85: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 008c1c8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c8f: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 008c1c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c94: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c1c9au); call_ind(t); }
L_008c1c9a:; BB(0x008c1c9a);
    /* 008c1c9a: push 0xa3843c */ { u32 v = 0xa3843cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c9f: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ca1: push 0xa3840c */ { u32 v = 0xa3840cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ca6: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c1cabu); f_008c9470();
    /* 008c1cab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1caf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cb0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1cb5u); f_008c3720();
    /* 008c1cb5: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1cb8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c1cbb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1cbe: mov eax, dword ptr [esi + 0x2b10] */ r_eax = R32((u32)(r_esi+0x2b10u));
    /* 008c1cc4: push 0x8c0bb0 */ { u32 v = 0x8c0bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ccb: push 0xa383cc */ { u32 v = 0xa383ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cd0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1cd5u); f_008c94e0();
    /* 008c1cd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cda: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1cdfu); f_008c3720();
    /* 008c1cdf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1ce2: call 0x8c5000 */ r_esp -= 4; W32(r_esp, 0x8c1ce7u); f_008c5000();
    /* 008c1ce7: call 0x8c50e0 */ r_esp -= 4; W32(r_esp, 0x8c1cecu); f_008c50e0();
    /* 008c1cec: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1cee: call 0x8c1040 */ r_esp -= 4; W32(r_esp, 0x8c1cf3u); f_008c1040();
    /* 008c1cf3: push 0xa383c4 */ { u32 v = 0xa383c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cf8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1cfdu); f_008c94e0();
    /* 008c1cfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d02: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1d07u); f_008c3720();
    /* 008c1d07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1d0a: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d10: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d16: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1d18: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c1d1du); f_008c39d0();
    /* 008c1d1d: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c1d22: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d27: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d2d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d2f: not ecx */ r_ecx = ~r_ecx;
    /* 008c1d31: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d33: push 0xa383b8 */ { u32 v = 0xa383b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d38: mov esi, edi */ r_esi = r_edi;
    /* 008c1d3a: mov edi, edx */ r_edi = r_edx;
    /* 008c1d3c: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1d3e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d41: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d43: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d45: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d46: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1d49: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1d4b: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1d50: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d53: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d59: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1d5b: lea edi, [eax + 0x2b14] */ r_edi = (u32)(r_eax+0x2b14u);
    /* 008c1d61: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d66: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d68: not ecx */ r_ecx = ~r_ecx;
    /* 008c1d6a: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d6c: mov esi, edi */ r_esi = r_edi;
    /* 008c1d6e: mov edi, edx */ r_edi = r_edx;
    /* 008c1d70: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1d72: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d75: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d77: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d79: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d7a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1d7d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1d7f: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d81: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d84: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1d86: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1d8bu); f_008c94e0();
    /* 008c1d8b: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d91: mov edi, eax */ r_edi = r_eax;
    /* 008c1d93: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d98: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d9a: not ecx */ r_ecx = ~r_ecx;
    /* 008c1d9c: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d9f: mov esi, edi */ r_esi = r_edi;
    /* 008c1da1: mov edi, edx */ r_edi = r_edx;
    /* 008c1da3: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1da5: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1da8: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1daa: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1dac: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1dad: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1db0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1db2: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1db4: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1dba: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1dbe: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1dc0: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c1dc5u); f_008cb285();
    /* 008c1dc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1dc8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1dcb: jne 0x8c1e83 */ if (!fZ) goto L_008c1e83;
L_008c1dd1:; BB(0x008c1dd1);
    /* 008c1dd1: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1dd7: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ddd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1de0: call 0x8c3a20 */ r_esp -= 4; W32(r_esp, 0x8c1de5u); f_008c3a20();
    /* 008c1de5: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c1dea: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1ded: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1def: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1df5: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1df7: not ecx */ r_ecx = ~r_ecx;
    /* 008c1df9: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1dfb: push 0xa383b8 */ { u32 v = 0xa383b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1e00: mov esi, edi */ r_esi = r_edi;
    /* 008c1e02: mov edi, edx */ r_edi = r_edx;
    /* 008c1e04: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1e06: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e09: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e0b: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e0d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e0e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1e11: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1e13: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1e18: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e1b: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1e21: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1e23: lea edi, [eax + 0x2b14] */ r_edi = (u32)(r_eax+0x2b14u);
    /* 008c1e29: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e2e: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e30: not ecx */ r_ecx = ~r_ecx;
    /* 008c1e32: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e34: mov esi, edi */ r_esi = r_edi;
    /* 008c1e36: mov edi, edx */ r_edi = r_edx;
    /* 008c1e38: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1e3a: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e3d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e3f: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e41: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e42: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1e45: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1e47: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e49: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e4c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1e4e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1e53u); f_008c94e0();
    /* 008c1e53: mov edi, eax */ r_edi = r_eax;
    /* 008c1e55: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c1e5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c1e5d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e5f: not ecx */ r_ecx = ~r_ecx;
    /* 008c1e61: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e63: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1e69: mov esi, edi */ r_esi = r_edi;
    /* 008c1e6b: mov edi, edx */ r_edi = r_edx;
    /* 008c1e6d: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1e6f: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e72: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e74: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e76: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e77: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1e7a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1e7c: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e7e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e81: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_008c1e83:; BB(0x008c1e83);
    /* 008c1e83: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1e86: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1e8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1e8f: lea esi, [edi + 0x2ac8] */ r_esi = (u32)(r_edi+0x2ac8u);
    /* 008c1e95: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1e97: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c1e9cu); f_008c7a90();
    /* 008c1e9c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c1e9e: je 0x8c1fc8 */ if (fZ) goto L_008c1fc8;
L_008c1ea4:; BB(0x008c1ea4);
    /* 008c1ea4: mov ecx, dword ptr [0xa37b24] */ r_ecx = R32((u32)(0xa37b24u));
    /* 008c1eaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1eab: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1eb0u); f_008c94e0();
    /* 008c1eb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1eb3: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1eb6: lea edx, [ebp - 0x1f40] */ r_edx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1ebc: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ebf: push 0x7ff */ { u32 v = 0x7ffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ec4: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1eca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ecc: call 0x8c7f60 */ r_esp -= 4; W32(r_esp, 0x8c1ed1u); f_008c7f60();
    /* 008c1ed1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c1ed3: je 0x8c1fc8 */ if (fZ) goto L_008c1fc8;
L_008c1ed9:; BB(0x008c1ed9);
    /* 008c1ed9: push 0xa383ac */ { u32 v = 0xa383acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ede: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c1ee3u); f_008c9470();
    /* 008c1ee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1ee6: lea ecx, [ebp - 0x1f40] */ r_ecx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1eec: lea edx, [ebp - 0xc4] */ r_edx = (u32)(r_ebp+0xffffff3cu);
    /* 008c1ef2: mov esi, eax */ r_esi = r_eax;
    /* 008c1ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ef5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ef7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ef8: push 0xa383a0 */ { u32 v = 0xa383a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1efd: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c1f02u); f_008c9470();
    /* 008c1f02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f06: push 0xa38390 */ { u32 v = 0xa38390u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f0b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f10u); f_008c94e0();
    /* 008c1f10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f15: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c1f1au); f_008c9730();
    /* 008c1f1a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f1d: lea eax, [ebp - 0x1f40] */ r_eax = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f26: push 0xa38380 */ { u32 v = 0xa38380u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f2b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f30u); f_008c94e0();
    /* 008c1f30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f35: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1f3au); f_008c96c0();
    /* 008c1f3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f3d: lea ecx, [ebp - 0x1f40] */ r_ecx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1f43: mov dword ptr [0xaea91c], eax */ W32((u32)(0xaea91cu), r_eax);
    /* 008c1f48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f4b: push 0xa38370 */ { u32 v = 0xa38370u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f50: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f55u); f_008c94e0();
    /* 008c1f55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f5a: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1f5fu); f_008c96c0();
    /* 008c1f5f: mov dword ptr [0xaeaa24], eax */ W32((u32)(0xaeaa24u), r_eax);
    /* 008c1f64: lea eax, [edi + 0x2b14] */ r_eax = (u32)(r_edi+0x2b14u);
    /* 008c1f6a: lea edx, [ebp - 0xc4] */ r_edx = (u32)(r_ebp+0xffffff3cu);
    /* 008c1f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f72: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x8c1f77u); f_0086118f();
    /* 008c1f77: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1f7c: jne 0x8c1fc8 */ if (!fZ) goto L_008c1fc8;
L_008c1f7e:; BB(0x008c1f7e);
    /* 008c1f7e: lea eax, [ebp - 0x1f40] */ r_eax = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f87: push 0xa38364 */ { u32 v = 0xa38364u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f91u); f_008c94e0();
    /* 008c1f91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f96: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1f9bu); f_008c96c0();
    /* 008c1f9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f9e: lea ecx, [ebp - 0x1f40] */ r_ecx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1fa4: mov dword ptr [0xaea6d0], eax */ W32((u32)(0xaea6d0u), r_eax);
    /* 008c1fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1faa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fac: push 0xa38354 */ { u32 v = 0xa38354u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fb1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1fb6u); f_008c94e0();
    /* 008c1fb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fbb: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1fc0u); f_008c96c0();
    /* 008c1fc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1fc3: mov dword ptr [0xaea6e4], eax */ W32((u32)(0xaea6e4u), r_eax);
L_008c1fc8:; BB(0x008c1fc8);
    /* 008c1fc8: mov al, byte ptr [edi + 0x2b90] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+0x2b90u))) & 0xffu);
    /* 008c1fce: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c1fd0: je 0x8c1fdc */ if (fZ) goto L_008c1fdc;
L_008c1fd2:; BB(0x008c1fd2);
    /* 008c1fd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fd4: call 0x8c6c50 */ r_esp -= 4; W32(r_esp, 0x8c1fd9u); f_008c6c50();
    /* 008c1fd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c1fdc:; BB(0x008c1fdc);
    /* 008c1fdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fde: push 0x251c */ { u32 v = 0x251cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fe3: mov ecx, edi */ r_ecx = r_edi;
    /* 008c1fe5: call 0x8c4200 */ r_esp -= 4; W32(r_esp, 0x8c1feau); f_008c4200();
    /* 008c1fea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1fec: jne 0x8c20ef */ if (!fZ) goto L_008c20ef;
L_008c1ff2:; BB(0x008c1ff2);
    /* 008c1ff2: push 0xa38338 */ { u32 v = 0xa38338u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ff7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1ffcu); f_008c94e0();
    /* 008c1ffc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2000: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2001: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2006u); f_008c3720();
    /* 008c2006: push 0xa38324 */ { u32 v = 0xa38324u; r_esp -= 4; W32(r_esp, v); }
    /* 008c200b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2010u); f_008c94e0();
    /* 008c2010: mov edi, dword ptr [0x8f8318] */ r_edi = R32((u32)(0x8f8318u));
    /* 008c2016: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c201a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c201c: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2021: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2023u); call_ind(t); }
    /* 008c2023: mov esi, eax */ r_esi = r_eax;
    /* 008c2025: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2027: jne 0x8c20e5 */ if (!fZ) goto L_008c20e5;
L_008c202d:; BB(0x008c202d);
    /* 008c202d: push 0xa38318 */ { u32 v = 0xa38318u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2032: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2037u); f_008c94e0();
    /* 008c2037: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c203a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c203b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c203c: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2041: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2043u); call_ind(t); }
    /* 008c2043: mov esi, eax */ r_esi = r_eax;
    /* 008c2045: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2047: jne 0x8c20e5 */ if (!fZ) goto L_008c20e5;
L_008c204d:; BB(0x008c204d);
    /* 008c204d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008c2050:; BB(0x008c2050);
    /* 008c2050: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2052: jne 0x8c20e5 */ if (!fZ) goto L_008c20e5;
L_008c2058:; BB(0x008c2058);
    /* 008c2058: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c205a: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x8c2060u); call_ind(t); }
    /* 008c2060: push 0xa38324 */ { u32 v = 0xa38324u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2065: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c206au); f_008c94e0();
    /* 008c206a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c206d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c206e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c206f: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2074: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2076u); call_ind(t); }
    /* 008c2076: mov esi, eax */ r_esi = r_eax;
    /* 008c2078: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c207a: jne 0x8c2094 */ if (!fZ) goto L_008c2094;
L_008c207c:; BB(0x008c207c);
    /* 008c207c: push 0xa38318 */ { u32 v = 0xa38318u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2081: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2086u); f_008c94e0();
    /* 008c2086: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c208a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c208b: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2090: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2092u); call_ind(t); }
    /* 008c2092: mov esi, eax */ r_esi = r_eax;
L_008c2094:; BB(0x008c2094);
    /* 008c2094: push 0xa38304 */ { u32 v = 0xa38304u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2099: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c209eu); f_008c94e0();
    /* 008c209e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c20a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c20a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20a4: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20a9: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c20abu); call_ind(t); }
    /* 008c20ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20ad: jne 0x8c20ca */ if (!fZ) goto L_008c20ca;
L_008c20af:; BB(0x008c20af);
    /* 008c20af: push 0xa382f8 */ { u32 v = 0xa382f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20b4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c20b9u); f_008c94e0();
    /* 008c20b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c20bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c20bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20bf: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20c4: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c20c6u); call_ind(t); }
    /* 008c20c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20c8: je 0x8c20e1 */ if (fZ) goto L_008c20e1;
L_008c20ca:; BB(0x008c20ca);
    /* 008c20ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c20cb: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c20d1u); call_ind(t); }
    /* 008c20d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c20d4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c20d5: cmp eax, 0x5f */ {  u32 a = r_eax; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c20d8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008c20db: jl 0x8c2050 */ if ((fS!=fO)) goto L_008c2050;
L_008c20e1:; BB(0x008c20e1);
    /* 008c20e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20e3: je 0x8c20ec */ if (fZ) goto L_008c20ec;
L_008c20e5:; BB(0x008c20e5);
    /* 008c20e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c20e6: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c20ecu); call_ind(t); }
L_008c20ec:; BB(0x008c20ec);
    /* 008c20ec: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
L_008c20ef:; BB(0x008c20ef);
    /* 008c20ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20f1: mov ecx, edi */ r_ecx = r_edi;
    /* 008c20f3: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c20f8u); f_008c4320();
    /* 008c20f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20fa: jne 0x8c2198 */ if (!fZ) goto L_008c2198;
L_008c2100:; BB(0x008c2100);
    /* 008c2100: mov esi, dword ptr [0xaea6fc] */ r_esi = R32((u32)(0xaea6fcu));
    /* 008c2106: push 0xa382e4 */ { u32 v = 0xa382e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c210b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c210c: mov dword ptr [0xaea6fc], esi */ W32((u32)(0xaea6fcu), r_esi);
    /* 008c2112: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2117u); f_008c94e0();
    /* 008c2117: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c211a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c211b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c211d: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2122: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c2128u); call_ind(t); }
    /* 008c2128: mov esi, eax */ r_esi = r_eax;
    /* 008c212a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c212c: jne 0x8c2159 */ if (!fZ) goto L_008c2159;
L_008c212e:; BB(0x008c212e);
    /* 008c212e: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2133: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x8c2139u); call_ind(t); }
    /* 008c2139: push 0xa382e4 */ { u32 v = 0xa382e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c213e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2143u); f_008c94e0();
    /* 008c2143: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2147: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2148: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c214d: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c2153u); call_ind(t); }
    /* 008c2153: mov esi, eax */ r_esi = r_eax;
    /* 008c2155: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2157: je 0x8c2198 */ if (fZ) goto L_008c2198;
L_008c2159:; BB(0x008c2159);
    /* 008c2159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c215b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c215c: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c2162u); call_ind(t); }
    /* 008c2162: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2167: je 0x8c2191 */ if (fZ) goto L_008c2191;
L_008c2169:; BB(0x008c2169);
    /* 008c2169: push 0x251c */ { u32 v = 0x251cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c216e: mov ecx, edi */ r_ecx = r_edi;
    /* 008c2170: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c2175u); f_008c4320();
    /* 008c2175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2177: jne 0x8c2187 */ if (!fZ) goto L_008c2187;
L_008c2179:; BB(0x008c2179);
    /* 008c2179: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c217a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c217b: mov eax, 0x6e */ r_eax = 0x6eu;
    /* 008c2180: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2181: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2184: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2187:; BB(0x008c2187);
    /* 008c2187: mov dword ptr [0xaea6fc], 0 */ W32((u32)(0xaea6fcu), 0x0u);
L_008c2191:; BB(0x008c2191);
    /* 008c2191: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2192: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c2198u); call_ind(t); }
L_008c2198:; BB(0x008c2198);
    /* 008c2198: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8c219eu); call_ind(t); }
    /* 008c219e: and eax, 0xfff00000 */ {  u32 a = r_eax; u32 b = 0xfff00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c21a3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008c21a6: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c21ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c21ad: jne 0x8c21c4 */ if (!fZ) goto L_008c21c4;
L_008c21af:; BB(0x008c21af);
    /* 008c21af: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c21b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c21b6: jne 0x8c21c4 */ if (!fZ) goto L_008c21c4;
L_008c21b8:; BB(0x008c21b8);
    /* 008c21b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c21bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c21bc: call 0x8c7270 */ r_esp -= 4; W32(r_esp, 0x8c21c1u); f_008c7270();
    /* 008c21c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c21c4:; BB(0x008c21c4);
    /* 008c21c4: mov esi, dword ptr [0x8f8124] */ r_esi = R32((u32)(0x8f8124u));
    /* 008c21ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c21cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c21ce: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 008c21d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c21d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c21d7: mov dword ptr [ebp - 0xa4], 0xc */ W32((u32)(r_ebp+0xffffff5cu), 0xcu);
    /* 008c21e1: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 008c21eb: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 008c21f5: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c21f7u); call_ind(t); }
    /* 008c21f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c21f9: mov dword ptr [edi + 0x2b8c], eax */ W32((u32)(r_edi+0x2b8cu), r_eax);
    /* 008c21ff: jne 0x8c2213 */ if (!fZ) goto L_008c2213;
L_008c2201:; BB(0x008c2201);
    /* 008c2201: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c2207: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2209u); call_ind(t); }
    /* 008c2209: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c220bu); call_ind(t); }
    /* 008c220b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c220c: push 0xa382c0 */ { u32 v = 0xa382c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2211: jmp 0x8c2264 */ goto L_008c2264;
L_008c2213:; BB(0x008c2213);
    /* 008c2213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2215: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2217: lea ecx, [ebp - 0xa4] */ r_ecx = (u32)(r_ebp+0xffffff5cu);
    /* 008c221d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c221f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2220: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2222u); call_ind(t); }
    /* 008c2222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2224: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008c2227: jne 0x8c223b */ if (!fZ) goto L_008c223b;
L_008c2229:; BB(0x008c2229);
    /* 008c2229: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c222f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2231u); call_ind(t); }
    /* 008c2231: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2233u); call_ind(t); }
    /* 008c2233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2234: push 0xa3829c */ { u32 v = 0xa3829cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2239: jmp 0x8c2264 */ goto L_008c2264;
L_008c223b:; BB(0x008c223b);
    /* 008c223b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c223d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c223f: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 008c2245: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2248: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c224au); call_ind(t); }
    /* 008c224a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c224c: mov dword ptr [edi + 0x2b88], eax */ W32((u32)(r_edi+0x2b88u), r_eax);
    /* 008c2252: jne 0x8c2284 */ if (!fZ) goto L_008c2284;
L_008c2254:; BB(0x008c2254);
    /* 008c2254: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c225a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c225cu); call_ind(t); }
    /* 008c225c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c225eu); call_ind(t); }
    /* 008c225e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c225f: push 0xa38278 */ { u32 v = 0xa38278u; r_esp -= 4; W32(r_esp, v); }
L_008c2264:; BB(0x008c2264);
    /* 008c2264: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2269u); f_008c94e0();
    /* 008c2269: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c226c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c226d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c226e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2273u); f_008c3720();
    /* 008c2273: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2276: mov eax, 0xab */ r_eax = 0xabu;
    /* 008c227b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c227c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c227d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c227e: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2280: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2281: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2284:; BB(0x008c2284);
    /* 008c2284: push 0xa38270 */ { u32 v = 0xa38270u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2289: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c228eu); f_008c94e0();
    /* 008c228e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2292: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2293: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2298u); f_008c3720();
    /* 008c2298: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c229b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c229e: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c22a4: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c22a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c22aa: call 0x8c3a20 */ r_esp -= 4; W32(r_esp, 0x8c22afu); f_008c3a20();
    /* 008c22af: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c22b4: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c22b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c22b9: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c22bf: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c22c1: not ecx */ r_ecx = ~r_ecx;
    /* 008c22c3: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c22c5: push 0xa3825c */ { u32 v = 0xa3825cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c22ca: mov esi, edi */ r_esi = r_edi;
    /* 008c22cc: mov edi, edx */ r_edi = r_edx;
    /* 008c22ce: mov edx, ecx */ r_edx = r_ecx;
    /* 008c22d0: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c22d3: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c22d5: mov ecx, edx */ r_ecx = r_edx;
    /* 008c22d7: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c22d8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c22db: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c22dd: mov ecx, edx */ r_ecx = r_edx;
    /* 008c22df: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c22e2: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c22e4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c22e9u); f_008c94e0();
    /* 008c22e9: mov edi, eax */ r_edi = r_eax;
    /* 008c22eb: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c22ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c22f0: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c22f6: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c22f8: not ecx */ r_ecx = ~r_ecx;
    /* 008c22fa: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c22fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c22fd: mov esi, edi */ r_esi = r_edi;
    /* 008c22ff: mov edi, edx */ r_edi = r_edx;
    /* 008c2301: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2303: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2306: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2308: mov ecx, edx */ r_ecx = r_edx;
    /* 008c230a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c230b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c230e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2310: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2312: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2318: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c231b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c231c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c231e: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c2323u); f_008cb285();
    /* 008c2323: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2326: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2329: jne 0x8c2357 */ if (!fZ) goto L_008c2357;
L_008c232b:; BB(0x008c232b);
    /* 008c232b: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2332: push 0xa38248 */ { u32 v = 0xa38248u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2337: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c233cu); f_008c94e0();
    /* 008c233c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c233f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2340: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2341: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2346u); f_008c3720();
    /* 008c2346: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2349: mov eax, 0x99 */ r_eax = 0x99u;
    /* 008c234e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c234f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2350: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2351: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2354: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2357:; BB(0x008c2357);
    /* 008c2357: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c235d: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2363: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2365: call 0x85a1d0 */ r_esp -= 4; W32(r_esp, 0x8c236au); f_0085a1d0();
    /* 008c236a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c236d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c236f: je 0x8c238f */ if (fZ) goto L_008c238f;
L_008c2371:; BB(0x008c2371);
    /* 008c2371: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2378: push 0xa38230 */ { u32 v = 0xa38230u; r_esp -= 4; W32(r_esp, v); }
    /* 008c237d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2382u); f_008c94e0();
    /* 008c2382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2386: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2387: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c238cu); f_008c3720();
    /* 008c238c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c238f:; BB(0x008c238f);
    /* 008c238f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2392: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2398: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c239a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c239b: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c23a1: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 008c23a5: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c23aau); f_008c7a90();
    /* 008c23aa: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c23ac: jne 0x8c255a */ if (!fZ) goto L_008c255a;
L_008c23b2:; BB(0x008c23b2);
    /* 008c23b2: mov byte ptr [ebp + 0xb], al */ W8((u32)(r_ebp+0xbu), (u8)r_eax);
    /* 008c23b5: mov eax, dword ptr [esi + 0x2b0c] */ r_eax = R32((u32)(r_esi+0x2b0cu));
    /* 008c23bb: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c23be: jne 0x8c23d1 */ if (!fZ) goto L_008c23d1;
L_008c23c0:; BB(0x008c23c0);
    /* 008c23c0: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c23c6u); call_ind(t); }
    /* 008c23c6: cmp eax, 0x80090006 */ {  u32 a = r_eax; u32 b = 0x80090006u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c23cb: jne 0x8c23d1 */ if (!fZ) goto L_008c23d1;
L_008c23cd:; BB(0x008c23cd);
    /* 008c23cd: mov byte ptr [ebp + 0xb], 1 */ W8((u32)(r_ebp+0xbu), 0x1u);
L_008c23d1:; BB(0x008c23d1);
    /* 008c23d1: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c23d7u); call_ind(t); }
    /* 008c23d7: mov edi, dword ptr [esi + 0x2b0c] */ r_edi = R32((u32)(r_esi+0x2b0cu));
    /* 008c23dd: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c23e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c23e4: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c23eau); call_ind(t); }
    /* 008c23ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c23eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c23ec: push 0xa38214 */ { u32 v = 0xa38214u; r_esp -= 4; W32(r_esp, v); }
    /* 008c23f1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c23f6u); f_008c94e0();
    /* 008c23f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c23f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c23fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c23fb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2400u); f_008c3720();
    /* 008c2400: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2403: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c240b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2410: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2414: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2416: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c241b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c241c: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c2422u); call_ind(t); }
    /* 008c2422: mov edi, eax */ r_edi = r_eax;
    /* 008c2424: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2427: jne 0x8c2450 */ if (!fZ) goto L_008c2450;
L_008c2429:; BB(0x008c2429);
    /* 008c2429: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c242f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2430: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c2436u); call_ind(t); }
    /* 008c2436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2437: push 0xa381fc */ { u32 v = 0xa381fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c243c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2441u); f_008c94e0();
    /* 008c2441: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2445: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2446: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c244bu); f_008c3720();
    /* 008c244b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c244e: jmp 0x8c24bd */ goto L_008c24bd;
L_008c2450:; BB(0x008c2450);
    /* 008c2450: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2452: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2453: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x8c2459u); call_ind(t); }
    /* 008c2459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c245a: push 0xa381ec */ { u32 v = 0xa381ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c245f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2464u); f_008c94e0();
    /* 008c2464: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2469: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c246eu); f_008c3720();
    /* 008c246e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2471: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2473: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2475: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2477: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2478: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x8c247eu); call_ind(t); }
    /* 008c247e: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 008c2484: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2487: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 008c248a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c248c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c248d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c248e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 008c2495: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c249bu); call_ind(t); }
    /* 008c249b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c249e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c249f: push 0xa381dc */ { u32 v = 0xa381dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c24a4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c24a9u); f_008c94e0();
    /* 008c24a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c24ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c24ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c24ae: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c24b3u); f_008c3720();
    /* 008c24b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c24b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c24b7: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c24bdu); call_ind(t); }
L_008c24bd:; BB(0x008c24bd);
    /* 008c24bd: mov al, byte ptr [ebp + 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
    /* 008c24c0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c24c2: je 0x8c2535 */ if (fZ) goto L_008c2535;
L_008c24c4:; BB(0x008c24c4);
    /* 008c24c4: mov al, byte ptr [esi + 0x2b7d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2b7du))) & 0xffu);
    /* 008c24ca: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c24cc: jne 0x8c2505 */ if (!fZ) goto L_008c2505;
L_008c24ce:; BB(0x008c24ce);
    /* 008c24ce: call 0x8c5fd0 */ r_esp -= 4; W32(r_esp, 0x8c24d3u); f_008c5fd0();
    /* 008c24d3: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c24d5: je 0x8c2505 */ if (fZ) goto L_008c2505;
L_008c24d7:; BB(0x008c24d7);
    /* 008c24d7: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c24dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c24df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c24e0: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c24e6: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c24ebu); f_008c7a90();
    /* 008c24eb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c24ed: jne 0x8c2517 */ if (!fZ) goto L_008c2517;
L_008c24ef:; BB(0x008c24ef);
    /* 008c24ef: cmp dword ptr [esi + 0x2b0c], 8 */ {  u32 a = R32((u32)(r_esi+0x2b0cu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c24f6: jne 0x8c2513 */ if (!fZ) goto L_008c2513;
L_008c24f8:; BB(0x008c24f8);
    /* 008c24f8: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c24feu); call_ind(t); }
    /* 008c24fe: cmp eax, 0x80090006 */ {  u32 a = r_eax; u32 b = 0x80090006u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c2503: jne 0x8c2513 */ if (!fZ) goto L_008c2513;
L_008c2505:; BB(0x008c2505);
    /* 008c2505: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2506: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2507: mov eax, 0x9b */ r_eax = 0x9bu;
    /* 008c250c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c250d: mov esp, ebp */ r_esp = r_ebp;
    /* 008c250f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2510: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2513:; BB(0x008c2513);
    /* 008c2513: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_008c2517:; BB(0x008c2517);
    /* 008c2517: push 0xa381c4 */ { u32 v = 0xa381c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c251c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2521u); f_008c94e0();
    /* 008c2521: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2525: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2526: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c252bu); f_008c3720();
    /* 008c252b: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 008c252e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2531: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c2533: je 0x8c255a */ if (fZ) goto L_008c255a;
L_008c2535:; BB(0x008c2535);
    /* 008c2535: push 0xa381a0 */ { u32 v = 0xa381a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c253a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c253fu); f_008c94e0();
    /* 008c253f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2543: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2544: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2549u); f_008c3720();
    /* 008c2549: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c254c: mov eax, 0x7c */ r_eax = 0x7cu;
    /* 008c2551: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2552: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2553: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2554: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2557: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c255a:; BB(0x008c255a);
    /* 008c255a: push 0xa38198 */ { u32 v = 0xa38198u; r_esp -= 4; W32(r_esp, v); }
    /* 008c255f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2564u); f_008c94e0();
    /* 008c2564: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2569: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c256eu); f_008c3720();
    /* 008c256e: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008c2573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2575: lea edi, [ebp - 0x128] */ r_edi = (u32)(r_ebp+0xfffffed8u);
    /* 008c257b: mov edx, dword ptr [0xa37b28] */ r_edx = R32((u32)(0xa37b28u));
    /* 008c2581: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2583: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2585: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c258a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008c258d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2590: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008c2593: mov dword ptr [ebp - 0x128], 0x44 */ W32((u32)(r_ebp+0xfffffed8u), 0x44u);
    /* 008c259d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008c25a0: push 0xaea708 */ { u32 v = 0xaea708u; r_esp -= 4; W32(r_esp, v); }
    /* 008c25a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008c25a8: mov ecx, dword ptr [esi + 0x2b10] */ r_ecx = R32((u32)(r_esi+0x2b10u));
    /* 008c25ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25af: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 008c25b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25b3: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c25b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c25bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25bf: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c25c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25c7: push 0xa38178 */ { u32 v = 0xa38178u; r_esp -= 4; W32(r_esp, v); }
    /* 008c25cc: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c25d1u); f_008c94e0();
    /* 008c25d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c25d4: lea edx, [ebp - 0x638] */ r_edx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c25da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25dc: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c25e2u); call_ind(t); }
    /* 008c25e2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c25e5: lea eax, [ebp - 0x638] */ r_eax = (u32)(r_ebp+0xfffff9c8u);
    /* 008c25eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25ec: push 0xa3816c */ { u32 v = 0xa3816cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c25f1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c25f6u); f_008c94e0();
    /* 008c25f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c25f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25fb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2600u); f_008c3720();
    /* 008c2600: lea ecx, [ebp - 0x638] */ r_ecx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2606: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2607: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c260cu); f_008c93d0();
    /* 008c260c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c260f: lea edi, [ebp - 0x638] */ r_edi = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2615: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2618: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c261a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c261d: lea edx, [ebp - 0x1740] */ r_edx = (u32)(r_ebp+0xffffe8c0u);
    /* 008c2623: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2625: not ecx */ r_ecx = ~r_ecx;
    /* 008c2627: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2628: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008c262b: mov edi, ecx */ r_edi = r_ecx;
    /* 008c262d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c262e: push 0xa38160 */ { u32 v = 0xa38160u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2633: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2638u); f_008c94e0();
    /* 008c2638: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c263b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c263c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c263d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2642u); f_008c3720();
    /* 008c2642: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 008c2645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c264a: jle 0x8c267a */ if ((fZ||fS!=fO)) goto L_008c267a;
L_008c264c:; BB(0x008c264c);
    /* 008c264c: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c264f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008c2652:; BB(0x008c2652);
    /* 008c2652: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c2655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2657: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008c2659: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c265a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c265b: push 0xa38158 */ { u32 v = 0xa38158u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2660: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2661: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008c2664: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c266au); call_ind(t); }
    /* 008c266a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c266c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c266f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2672: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008c2673: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008c2676: jne 0x8c2652 */ if (!fZ) goto L_008c2652;
L_008c2678:; BB(0x008c2678);
    /* 008c2678: jmp 0x8c267d */ goto L_008c267d;
L_008c267a:; BB(0x008c267a);
    /* 008c267a: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
L_008c267d:; BB(0x008c267d);
    /* 008c267d: lea eax, [ebp - 0x1740] */ r_eax = (u32)(r_ebp+0xffffe8c0u);
    /* 008c2683: mov byte ptr [edi], 0 */ W8((u32)(r_edi), 0x0u);
    /* 008c2686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2687: push 0xa3814c */ { u32 v = 0xa3814cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c268c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2691u); f_008c94e0();
    /* 008c2691: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2695: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2696: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c269bu); f_008c3720();
    /* 008c269b: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c26a0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c26a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c26a5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c26a7: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008c26aa: jne 0x8c27cd */ if (!fZ) goto L_008c27cd;
L_008c26b0:; BB(0x008c26b0);
    /* 008c26b0: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 008c26b3: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 008c26b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c26c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26c1: lea eax, [ebp - 0x1740] */ r_eax = (u32)(r_ebp+0xffffe8c0u);
    /* 008c26c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26c8: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c26ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c26cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26d0: call dword ptr [0x8f8310] */ { u32 t = R32((u32)(0x8f8310u)); r_esp -= 4; W32(r_esp, 0x8c26d6u); call_ind(t); }
    /* 008c26d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c26d8: je 0x8c26f8 */ if (fZ) goto L_008c26f8;
L_008c26da:; BB(0x008c26da);
    /* 008c26da: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c26e0: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c26e2u); call_ind(t); }
    /* 008c26e2: lea edx, [ebp - 0x638] */ r_edx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c26e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26e9: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c26ebu); call_ind(t); }
    /* 008c26eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c26ec: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c26f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c26f3: jmp 0x8c3172 */ goto L_008c3172;
L_008c26f8:; BB(0x008c26f8);
    /* 008c26f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c26fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26fc: push 0xa38140 */ { u32 v = 0xa38140u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2701: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2706u); f_008c94e0();
    /* 008c2706: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c270a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c270b: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2710u); f_008c3720();
    /* 008c2710: mov edx, dword ptr [esi + 0x2b8c] */ r_edx = R32((u32)(r_esi+0x2b8cu));
    /* 008c2716: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c2719: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c271c: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008c2722: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008c2725: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 008c272b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c272d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c272e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c272f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2731: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 008c2737: call dword ptr [0x8f82e8] */ { u32 t = R32((u32)(0x8f82e8u)); r_esp -= 4; W32(r_esp, 0x8c273du); call_ind(t); }
    /* 008c273d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c273f: je 0x8c27aa */ if (fZ) goto L_008c27aa;
L_008c2741:; BB(0x008c2741);
    /* 008c2741: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c2744: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008c2747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2749: call dword ptr [0x8f830c] */ { u32 t = R32((u32)(0x8f830cu)); r_esp -= 4; W32(r_esp, 0x8c274fu); call_ind(t); }
    /* 008c274f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2751: jne 0x8c2771 */ if (!fZ) goto L_008c2771;
L_008c2753:; BB(0x008c2753);
    /* 008c2753: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c2759u); call_ind(t); }
    /* 008c2759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c275a: push 0xa3811c */ { u32 v = 0xa3811cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c275f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2764u); f_008c94e0();
    /* 008c2764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2769: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c276eu); f_008c3720();
    /* 008c276e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c2771:; BB(0x008c2771);
    /* 008c2771: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c2774: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2775: push 0xa380f8 */ { u32 v = 0xa380f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c277a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c277fu); f_008c94e0();
    /* 008c277f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2783: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2784: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2789u); f_008c3720();
    /* 008c2789: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c278c: mov esi, dword ptr [0x8f8140] */ r_esi = R32((u32)(0x8f8140u));
    /* 008c2792: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2796: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2798u); call_ind(t); }
    /* 008c2798: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008c279b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c279c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c279eu); call_ind(t); }
    /* 008c279e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008c27a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c27a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c27a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c27a4: mov esp, ebp */ r_esp = r_ebp;
    /* 008c27a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c27a7: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c27aa:; BB(0x008c27aa);
    /* 008c27aa: push 0xa380f0 */ { u32 v = 0xa380f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c27af: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c27b4u); f_008c94e0();
    /* 008c27b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c27b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c27b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27b9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c27beu); f_008c3720();
    /* 008c27be: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 008c27c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27c2: call 0x8c5a20 */ r_esp -= 4; W32(r_esp, 0x8c27c7u); f_008c5a20();
    /* 008c27c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c27ca: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008c27cd:; BB(0x008c27cd);
    /* 008c27cd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c27d0: mov esi, dword ptr [0x8f8140] */ r_esi = R32((u32)(0x8f8140u));
    /* 008c27d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27d7: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c27d9u); call_ind(t); }
    /* 008c27d9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008c27dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c27dd: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c27dfu); call_ind(t); }
    /* 008c27df: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c27e5: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c27ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c27ee: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c27f3u); f_008c39d0();
    /* 008c27f3: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c27f8: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c27fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c27fd: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c2803: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2805: not ecx */ r_ecx = ~r_ecx;
    /* 008c2807: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2809: push 0xa383b8 */ { u32 v = 0xa383b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c280e: mov esi, edi */ r_esi = r_edi;
    /* 008c2810: mov edi, edx */ r_edi = r_edx;
    /* 008c2812: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2814: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2817: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2819: mov ecx, edx */ r_ecx = r_edx;
    /* 008c281b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c281c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c281f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2821: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2823: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2826: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2829: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c282f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2831: lea edi, [eax + 0x2b14] */ r_edi = (u32)(r_eax+0x2b14u);
    /* 008c2837: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c283a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c283c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c283e: not ecx */ r_ecx = ~r_ecx;
    /* 008c2840: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2842: mov esi, edi */ r_esi = r_edi;
    /* 008c2844: mov edi, edx */ r_edi = r_edx;
    /* 008c2846: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2848: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c284b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c284d: mov ecx, edx */ r_ecx = r_edx;
    /* 008c284f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2850: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2853: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2855: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2857: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c285a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c285c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2861u); f_008c94e0();
    /* 008c2861: mov edi, eax */ r_edi = r_eax;
    /* 008c2863: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2866: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2868: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c286b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c286d: not ecx */ r_ecx = ~r_ecx;
    /* 008c286f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2871: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c2877: mov esi, edi */ r_esi = r_edi;
    /* 008c2879: mov edi, edx */ r_edi = r_edx;
    /* 008c287b: mov edx, ecx */ r_edx = r_ecx;
    /* 008c287d: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2880: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2882: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2884: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2885: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2888: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c288a: mov ecx, edx */ r_ecx = r_edx;
    /* 008c288c: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c2892: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2897: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2899: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c289c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c289d: add ecx, 0x2ac8 */ {  u32 a = r_ecx; u32 b = 0x2ac8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c28a3: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c28a8u); f_008c7a90();
    /* 008c28a8: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c28aa: jne 0x8c28e6 */ if (!fZ) goto L_008c28e6;
L_008c28ac:; BB(0x008c28ac);
    /* 008c28ac: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c28b2: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c28b4u); call_ind(t); }
    /* 008c28b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c28b7: mov esi, dword ptr [edx + 0x2b0c] */ r_esi = R32((u32)(r_edx+0x2b0cu));
    /* 008c28bd: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c28bfu); call_ind(t); }
    /* 008c28bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c28c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c28c1: push 0xa380d8 */ { u32 v = 0xa380d8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c28c6: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c28cbu); f_008c94e0();
    /* 008c28cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c28ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c28cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c28d0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c28d5u); f_008c3720();
    /* 008c28d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c28d8: mov eax, 0x78 */ r_eax = 0x78u;
    /* 008c28dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c28de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c28df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c28e0: mov esp, ebp */ r_esp = r_ebp;
    /* 008c28e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c28e3: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c28e6:; BB(0x008c28e6);
    /* 008c28e6: mov eax, dword ptr [0xa37b24] */ r_eax = R32((u32)(0xa37b24u));
    /* 008c28eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c28ec: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c28f1u); f_008c94e0();
    /* 008c28f1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c28f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c28f7: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c28fa: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2901: push 0x7ff */ { u32 v = 0x7ffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2906: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c290c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c290d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c290e: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c2914: call 0x8c7f60 */ r_esp -= 4; W32(r_esp, 0x8c2919u); f_008c7f60();
    /* 008c2919: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c291b: jne 0x8c2954 */ if (!fZ) goto L_008c2954;
L_008c291d:; BB(0x008c291d);
    /* 008c291d: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c2923: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2925u); call_ind(t); }
    /* 008c2925: mov esi, dword ptr [esi + 0x2b0c] */ r_esi = R32((u32)(r_esi+0x2b0cu));
    /* 008c292b: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c292du); call_ind(t); }
    /* 008c292d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c292e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c292f: push 0xa380b8 */ { u32 v = 0xa380b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2934: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2939u); f_008c94e0();
    /* 008c2939: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c293c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c293d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c293e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2943u); f_008c3720();
    /* 008c2943: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2946: mov eax, 0x82 */ r_eax = 0x82u;
    /* 008c294b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c294c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c294d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c294e: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2951: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2954:; BB(0x008c2954);
    /* 008c2954: push 0xa383ac */ { u32 v = 0xa383acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2959: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c295eu); f_008c9470();
    /* 008c295e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2961: mov edi, eax */ r_edi = r_eax;
    /* 008c2963: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2969: lea ecx, [ebp - 0xe4] */ r_ecx = (u32)(r_ebp+0xffffff1cu);
    /* 008c296f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2970: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2972: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2973: push 0xa383a0 */ { u32 v = 0xa383a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2978: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c297du); f_008c9470();
    /* 008c297d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2981: push 0xa38390 */ { u32 v = 0xa38390u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2986: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c298bu); f_008c94e0();
    /* 008c298b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c298e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c298f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2990: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c2995u); f_008c9730();
    /* 008c2995: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c299b: lea edx, [ebp - 0xe4] */ r_edx = (u32)(r_ebp+0xffffff1cu);
    /* 008c29a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c29a3: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x8c29a8u); f_0086118f();
    /* 008c29a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c29ad: je 0x8c29d4 */ if (fZ) goto L_008c29d4;
L_008c29af:; BB(0x008c29af);
    /* 008c29af: push 0xa380a0 */ { u32 v = 0xa380a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c29b4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c29b9u); f_008c94e0();
    /* 008c29b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c29be: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c29c3u); f_008c3720();
    /* 008c29c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c29c6: mov eax, 0x8e */ r_eax = 0x8eu;
    /* 008c29cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c29cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c29cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c29ce: mov esp, ebp */ r_esp = r_ebp;
    /* 008c29d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c29d1: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c29d4:; BB(0x008c29d4);
    /* 008c29d4: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c29da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c29dd: push 0xa38364 */ { u32 v = 0xa38364u; r_esp -= 4; W32(r_esp, v); }
    /* 008c29e2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c29e7u); f_008c94e0();
    /* 008c29e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c29ec: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c29f1u); f_008c96c0();
    /* 008c29f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29f4: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c29fa: mov dword ptr [0xaea6d0], eax */ W32((u32)(0xaea6d0u), r_eax);
    /* 008c29ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a00: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a05: push 0xa38090 */ { u32 v = 0xa38090u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a0a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a0fu); f_008c94e0();
    /* 008c2a0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a13: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a14: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a19u); f_008c96c0();
    /* 008c2a19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a1c: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a22: mov dword ptr [0xaea6dc], eax */ W32((u32)(0xaea6dcu), r_eax);
    /* 008c2a27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a2a: push 0xa38080 */ { u32 v = 0xa38080u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a2f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a34u); f_008c94e0();
    /* 008c2a34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a39: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a3eu); f_008c96c0();
    /* 008c2a3e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a41: mov dword ptr [0xaea6e0], eax */ W32((u32)(0xaea6e0u), r_eax);
    /* 008c2a46: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a4f: push 0xa38070 */ { u32 v = 0xa38070u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a54: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a59u); f_008c94e0();
    /* 008c2a59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a5e: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a63u); f_008c96c0();
    /* 008c2a63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a66: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a6f: push 0xa38064 */ { u32 v = 0xa38064u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a74: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a79u); f_008c94e0();
    /* 008c2a79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a7e: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a83u); f_008c96c0();
    /* 008c2a83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a86: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a8c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c2a8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a92: push 0xa38354 */ { u32 v = 0xa38354u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a97: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a9cu); f_008c94e0();
    /* 008c2a9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2aa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2aa1: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2aa6u); f_008c96c0();
    /* 008c2aa6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2aa9: mov dword ptr [0xaea6e4], eax */ W32((u32)(0xaea6e4u), r_eax);
    /* 008c2aae: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ab7: push 0xa38054 */ { u32 v = 0xa38054u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2abc: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2ac1u); f_008c94e0();
    /* 008c2ac1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ac5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ac6: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2acbu); f_008c96c0();
    /* 008c2acb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ace: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2ad4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008c2ad7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ada: push 0xa38040 */ { u32 v = 0xa38040u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2adf: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2ae4u); f_008c94e0();
    /* 008c2ae4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ae8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ae9: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2aeeu); f_008c96c0();
    /* 008c2aee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2af1: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2af7: mov dword ptr [0xaea6e8], eax */ W32((u32)(0xaea6e8u), r_eax);
    /* 008c2afc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2afd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2aff: push 0xa3802c */ { u32 v = 0xa3802cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b04: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b09u); f_008c94e0();
    /* 008c2b09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b0e: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2b13u); f_008c96c0();
    /* 008c2b13: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2b16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b19: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c2b1b: not al */ r_eax = (r_eax & 0xffffff00u) | ((~(u8)r_eax) & 0xffu);
    /* 008c2b1d: and al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c2b1f: mov byte ptr [esi + 0x22], al */ W8((u32)(r_esi+0x22u), (u8)r_eax);
    /* 008c2b22: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b29: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b2e: push 0xa38014 */ { u32 v = 0xa38014u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b33: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b38u); f_008c94e0();
    /* 008c2b38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b3d: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2b42u); f_008c96c0();
    /* 008c2b42: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b45: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2b4b: mov dword ptr [esi + 0x2b80], eax */ W32((u32)(r_esi+0x2b80u), r_eax);
    /* 008c2b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b54: push 0xa38000 */ { u32 v = 0xa38000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b59: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b5eu); f_008c94e0();
    /* 008c2b5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b63: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2b68u); f_008c96c0();
    /* 008c2b68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b6b: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2b71: mov dword ptr [esi + 0x2b84], eax */ W32((u32)(r_esi+0x2b84u), r_eax);
    /* 008c2b77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b78: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b7d: push 0xaea818 */ { u32 v = 0xaea818u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b82: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b87: push 0xa37ff0 */ { u32 v = 0xa37ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b91u); f_008c94e0();
    /* 008c2b91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b96: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c2b9bu); f_008c9730();
    /* 008c2b9b: mov ecx, 0x200 */ r_ecx = 0x200u;
    /* 008c2ba0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2ba2: lea edi, [ebp - 0xf40] */ r_edi = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2ba8: push 0xa37fe8 */ { u32 v = 0xa37fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bad: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2baf: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2bb4u); f_008c94e0();
    /* 008c2bb4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bb9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2bbeu); f_008c3720();
    /* 008c2bbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2bc1: mov ecx, esi */ r_ecx = r_esi;
    /* 008c2bc3: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bc8: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bcd: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c2bd2u); f_008c39d0();
    /* 008c2bd2: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c2bd7: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2bda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2bdc: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2bde: not ecx */ r_ecx = ~r_ecx;
    /* 008c2be0: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2be2: mov esi, edi */ r_esi = r_edi;
    /* 008c2be4: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2be6: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2beb: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2bee: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2bf0: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2bf1: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2bf3: push 0xa37fd8 */ { u32 v = 0xa37fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bf8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2bfb: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2bfd: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2bff: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c02: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2c04: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2c09u); f_008c94e0();
    /* 008c2c09: mov edi, eax */ r_edi = r_eax;
    /* 008c2c0b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2c10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2c13: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2c15: not ecx */ r_ecx = ~r_ecx;
    /* 008c2c17: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2c19: mov esi, edi */ r_esi = r_edi;
    /* 008c2c1b: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2c1d: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2c22: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2c25: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2c27: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2c29: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2c2a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2c2d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2c2f: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c2c34: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2c36: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2c3b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2c3d: je 0x8c2cd0 */ if (fZ) goto L_008c2cd0;
L_008c2c43:; BB(0x008c2c43);
    /* 008c2c43: mov eax, dword ptr [0x8f812c] */ r_eax = R32((u32)(0x8f812cu));
    /* 008c2c48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c4a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c4c: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008c2c4f: mov dl, byte ptr [eax + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008c2c52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c55: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008c2c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c5c: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008c2c5f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c61: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c2c63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c65: push 0xa37fb4 */ { u32 v = 0xa37fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c6a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2c6fu); f_008c94e0();
    /* 008c2c6f: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c2c75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2c78: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c7d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2c82u); f_008c3720();
    /* 008c2c82: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c2c87: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2c8c: je 0x8c2cd0 */ if (fZ) goto L_008c2cd0;
L_008c2c8e:; BB(0x008c2c8e);
    /* 008c2c8e: mov eax, dword ptr [0x8f81f0] */ r_eax = R32((u32)(0x8f81f0u));
    /* 008c2c93: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c97: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008c2c9a: mov dl, byte ptr [eax + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008c2c9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2ca0: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008c2ca3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ca4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ca5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2ca7: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008c2caa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2cac: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c2cae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2caf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cb0: push 0xa37f90 */ { u32 v = 0xa37f90u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cb5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2cbau); f_008c94e0();
    /* 008c2cba: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c2cc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2cc3: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c2cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cc8: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2ccdu); f_008c3720();
    /* 008c2ccd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c2cd0:; BB(0x008c2cd0);
    /* 008c2cd0: push 0xa37f88 */ { u32 v = 0xa37f88u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cd5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2cdau); f_008c94e0();
    /* 008c2cda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2cdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cdf: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2ce4u); f_008c3720();
    /* 008c2ce4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ce6: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ceb: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c2cf0u); f_008cb285();
    /* 008c2cf0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2cf3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2cf6: jne 0x8c2dac */ if (!fZ) goto L_008c2dac;
L_008c2cfc:; BB(0x008c2cfc);
    /* 008c2cfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2cff: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d04: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d09: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c2d0eu); f_008c39d0();
    /* 008c2d0e: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c2d13: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d18: push 0xa37f78 */ { u32 v = 0xa37f78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d1d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d1f: not ecx */ r_ecx = ~r_ecx;
    /* 008c2d21: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d23: mov esi, edi */ r_esi = r_edi;
    /* 008c2d25: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2d27: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2d2c: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d2f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d31: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d33: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d34: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2d37: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2d39: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d3b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d3e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2d40: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2d45u); f_008c94e0();
    /* 008c2d45: mov edi, eax */ r_edi = r_eax;
    /* 008c2d47: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d4c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d4e: not ecx */ r_ecx = ~r_ecx;
    /* 008c2d50: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d53: mov esi, edi */ r_esi = r_edi;
    /* 008c2d55: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2d57: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2d5c: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d5f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d61: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d63: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d64: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2d67: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2d69: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d6b: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d70: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d73: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2d75: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c2d7au); f_008cb285();
    /* 008c2d7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2d7d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2d80: jne 0x8c2dac */ if (!fZ) goto L_008c2dac;
L_008c2d82:; BB(0x008c2d82);
    /* 008c2d82: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d87: push 0xa37f5c */ { u32 v = 0xa37f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2d91u); f_008c94e0();
    /* 008c2d91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d96: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2d9bu); f_008c3720();
    /* 008c2d9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2d9e: mov eax, 0x9a */ r_eax = 0x9au;
    /* 008c2da3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2da4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2da5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2da6: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2da8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2da9: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2dac:; BB(0x008c2dac);
    /* 008c2dac: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2daf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2db1: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2db6: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c2dbc: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c2dc1u); f_008c7a90();
    /* 008c2dc1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c2dc3: jne 0x8c2e01 */ if (!fZ) goto L_008c2e01;
L_008c2dc5:; BB(0x008c2dc5);
    /* 008c2dc5: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c2dcb: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2dcdu); call_ind(t); }
    /* 008c2dcd: mov esi, dword ptr [esi + 0x2b0c] */ r_esi = R32((u32)(r_esi+0x2b0cu));
    /* 008c2dd3: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2dd8: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2ddau); call_ind(t); }
    /* 008c2dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ddb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ddc: push 0xa38214 */ { u32 v = 0xa38214u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2de1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2de6u); f_008c94e0();
    /* 008c2de6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2dea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2deb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2df0u); f_008c3720();
    /* 008c2df0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2df3: mov eax, 0x7a */ r_eax = 0x7au;
    /* 008c2df8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2df9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2dfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2dfb: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2dfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2dfe: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2e01:; BB(0x008c2e01);
    /* 008c2e01: push 0xa37f54 */ { u32 v = 0xa37f54u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e06: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2e0bu); f_008c94e0();
    /* 008c2e0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e10: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2e15u); f_008c3720();
    /* 008c2e15: lea edi, [esi + 0x1468] */ r_edi = (u32)(r_esi+0x1468u);
    /* 008c2e1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e1e: mov ecx, edi */ r_ecx = r_edi;
    /* 008c2e20: call 0x8c8660 */ r_esp -= 4; W32(r_esp, 0x8c2e25u); f_008c8660();
    /* 008c2e25: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c2e27: jne 0x8c2e4e */ if (!fZ) goto L_008c2e4e;
L_008c2e29:; BB(0x008c2e29);
    /* 008c2e29: push 0xa37f40 */ { u32 v = 0xa37f40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e2e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2e33u); f_008c94e0();
    /* 008c2e33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e38: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2e3du); f_008c3720();
    /* 008c2e3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2e40: mov eax, 0xa0 */ r_eax = 0xa0u;
    /* 008c2e45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2e46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2e47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2e48: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2e4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2e4b: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2e4e:; BB(0x008c2e4e);
    /* 008c2e4e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008c2e50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e53: call dword ptr [0x8f8308] */ { u32 t = R32((u32)(0x8f8308u)); r_esp -= 4; W32(r_esp, 0x8c2e59u); call_ind(t); }
    /* 008c2e59: push 0xa37f38 */ { u32 v = 0xa37f38u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e5e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2e63u); f_008c94e0();
    /* 008c2e63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e68: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2e6du); f_008c3720();
    /* 008c2e6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e70: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8c2e76u); call_ind(t); }
    /* 008c2e76: mov ecx, dword ptr [0xa37b28] */ r_ecx = R32((u32)(0xa37b28u));
    /* 008c2e7c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c2e7f: mov edi, eax */ r_edi = r_eax;
    /* 008c2e81: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c2e87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e88: mov ecx, dword ptr [esi + 0x2b88] */ r_ecx = R32((u32)(r_esi+0x2b88u));
    /* 008c2e8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e90: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c2e96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e98: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c2e9e: and edi, 0xfff00000 */ {  u32 a = r_edi; u32 b = 0xfff00000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c2ea4: call 0x8c82b0 */ r_esp -= 4; W32(r_esp, 0x8c2ea9u); f_008c82b0();
    /* 008c2ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2eaa: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c2eb0: call 0x8c82a0 */ r_esp -= 4; W32(r_esp, 0x8c2eb5u); f_008c82a0();
    /* 008c2eb5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2eb8: mov dl, byte ptr [esi + 0x2b7d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0x2b7du))) & 0xffu);
    /* 008c2ebe: mov eax, dword ptr [esi + 0x2b10] */ r_eax = R32((u32)(r_esi+0x2b10u));
    /* 008c2ec4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ec6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ec7: push 0xa37f10 */ { u32 v = 0xa37f10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ecc: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2ed1u); f_008c94e0();
    /* 008c2ed1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ed4: lea ecx, [ebp - 0x638] */ r_ecx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2edb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2edc: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c2ee2u); call_ind(t); }
    /* 008c2ee2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2ee4: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008c2ee9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2eeb: lea edi, [ebp - 0x128] */ r_edi = (u32)(r_ebp+0xfffffed8u);
    /* 008c2ef1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008c2ef4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ef7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2ef9: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c2eff: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 008c2f02: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008c2f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f06: mov dword ptr [ebp - 0x128], 0x44 */ W32((u32)(r_ebp+0xfffffed8u), 0x44u);
    /* 008c2f10: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008c2f13: call dword ptr [0x8f8304] */ { u32 t = R32((u32)(0x8f8304u)); r_esp -= 4; W32(r_esp, 0x8c2f19u); call_ind(t); }
    /* 008c2f19: lea ecx, [ebp - 0x638] */ r_ecx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2f1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f20: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c2f25u); f_008c93d0();
    /* 008c2f25: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c2f28: lea edi, [ebp - 0x638] */ r_edi = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2f2e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2f31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2f33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2f36: lea edx, [ebp - 0x1740] */ r_edx = (u32)(r_ebp+0xffffe8c0u);
    /* 008c2f3c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2f3e: not ecx */ r_ecx = ~r_ecx;
    /* 008c2f40: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2f41: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008c2f44: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 008c2f47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c2f49: jle 0x8c2f78 */ if ((fZ||fS!=fO)) goto L_008c2f78;
L_008c2f4b:; BB(0x008c2f4b);
    /* 008c2f4b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008c2f4e: mov edi, edx */ r_edi = r_edx;
L_008c2f50:; BB(0x008c2f50);
    /* 008c2f50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c2f53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2f55: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008c2f57: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f59: push 0xa38158 */ { u32 v = 0xa38158u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f5f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008c2f62: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c2f68u); call_ind(t); }
    /* 008c2f68: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c2f6a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c2f6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2f70: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008c2f71: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008c2f74: jne 0x8c2f50 */ if (!fZ) goto L_008c2f50;
L_008c2f76:; BB(0x008c2f76);
    /* 008c2f76: jmp 0x8c2f7b */ goto L_008c2f7b;
L_008c2f78:; BB(0x008c2f78);
    /* 008c2f78: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
L_008c2f7b:; BB(0x008c2f7b);
    /* 008c2f7b: push 0xa37f08 */ { u32 v = 0xa37f08u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f80: mov byte ptr [edi], 0 */ W8((u32)(r_edi), 0x0u);
    /* 008c2f83: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2f88u); f_008c94e0();
    /* 008c2f88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f8d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2f92u); f_008c3720();
    /* 008c2f92: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c2f97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2f9c: je 0x8c30b7 */ if (fZ) goto L_008c30b7;
L_008c2fa2:; BB(0x008c2fa2);
    /* 008c2fa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fa4: mov ecx, esi */ r_ecx = r_esi;
    /* 008c2fa6: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c2fabu); f_008c4320();
    /* 008c2fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2fad: jne 0x8c300f */ if (!fZ) goto L_008c300f;
L_008c2faf:; BB(0x008c2faf);
    /* 008c2faf: push 0xa382e4 */ { u32 v = 0xa382e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fb4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2fb9u); f_008c94e0();
    /* 008c2fb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fbf: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fc4: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c2fcau); call_ind(t); }
    /* 008c2fca: mov edi, eax */ r_edi = r_eax;
    /* 008c2fcc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2fce: je 0x8c300f */ if (fZ) goto L_008c300f;
L_008c2fd0:; BB(0x008c2fd0);
    /* 008c2fd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fd3: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c2fd9u); call_ind(t); }
    /* 008c2fd9: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2fde: je 0x8c3008 */ if (fZ) goto L_008c3008;
L_008c2fe0:; BB(0x008c2fe0);
    /* 008c2fe0: push 0x251c */ { u32 v = 0x251cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fe5: mov ecx, esi */ r_ecx = r_esi;
    /* 008c2fe7: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c2fecu); f_008c4320();
    /* 008c2fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2fee: jne 0x8c2ffe */ if (!fZ) goto L_008c2ffe;
L_008c2ff0:; BB(0x008c2ff0);
    /* 008c2ff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2ff1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2ff2: mov eax, 0x6e */ r_eax = 0x6eu;
    /* 008c2ff7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2ff8: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2ffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2ffb: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c2ffe:; BB(0x008c2ffe);
    /* 008c2ffe: mov dword ptr [0xaea6fc], 0 */ W32((u32)(0xaea6fcu), 0x0u);
L_008c3008:; BB(0x008c3008);
    /* 008c3008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3009: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c300fu); call_ind(t); }
L_008c300f:; BB(0x008c300f);
    /* 008c300f: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c3014: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3016: je 0x8c30b7 */ if (fZ) goto L_008c30b7;
L_008c301c:; BB(0x008c301c);
    /* 008c301c: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c3022: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3025: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3027: lea esi, [ebp - 0x428] */ r_esi = (u32)(r_ebp+0xfffffbd8u);
    /* 008c302d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c302f: not ecx */ r_ecx = ~r_ecx;
    /* 008c3031: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3032: mov eax, 0x7eb */ r_eax = 0x7ebu;
    /* 008c3037: mov edx, ecx */ r_edx = r_ecx;
    /* 008c3039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c303c: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 008c3042: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c3048: mov ecx, dword ptr [ecx + 0x2b10] */ r_ecx = R32((u32)(r_ecx+0x2b10u));
    /* 008c304e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3050: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 008c3056: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3059: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c305c: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008c305f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3061: not ecx */ r_ecx = ~r_ecx;
    /* 008c3063: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3065: mov dword ptr [ebp - 0x434], edx */ W32((u32)(r_ebp+0xfffffbccu), r_edx);
    /* 008c306b: mov eax, ecx */ r_eax = r_ecx;
    /* 008c306d: mov esi, edi */ r_esi = r_edi;
    /* 008c306f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008c3072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3073: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3076: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3078: mov ecx, eax */ r_ecx = r_eax;
    /* 008c307a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c307d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c307f: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
L_008c3085:; BB(0x008c3085);
    /* 008c3085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3086: call 0x8c6d30 */ r_esp -= 4; W32(r_esp, 0x8c308bu); f_008c6d30();
    /* 008c308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c308e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3090: jne 0x8c31b4 */ if (!fZ) goto L_008c31b4;
L_008c3096:; BB(0x008c3096);
    /* 008c3096: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c309c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c309eu); call_ind(t); }
    /* 008c309e: lea edx, [ebp - 0x638] */ r_edx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c30a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c30a5: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c30aa: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c30acu); call_ind(t); }
    /* 008c30ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c30ad: push 0xa37ee4 */ { u32 v = 0xa37ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c30b2: jmp 0x8c3177 */ goto L_008c3177;
L_008c30b7:; BB(0x008c30b7);
    /* 008c30b7: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c30bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c30be: je 0x8c312e */ if (fZ) goto L_008c312e;
L_008c30c0:; BB(0x008c30c0);
    /* 008c30c0: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c30c6: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c30c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c30cb: lea esi, [ebp - 0x428] */ r_esi = (u32)(r_ebp+0xfffffbd8u);
    /* 008c30d1: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c30d3: not ecx */ r_ecx = ~r_ecx;
    /* 008c30d5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c30d6: mov eax, 0x7eb */ r_eax = 0x7ebu;
    /* 008c30db: mov edx, ecx */ r_edx = r_ecx;
    /* 008c30dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c30e0: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 008c30e6: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c30ec: mov ecx, dword ptr [ecx + 0x2b10] */ r_ecx = R32((u32)(r_ecx+0x2b10u));
    /* 008c30f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c30f4: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 008c30fa: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c30fd: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3100: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008c3103: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3105: not ecx */ r_ecx = ~r_ecx;
    /* 008c3107: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3109: mov dword ptr [ebp - 0x434], edx */ W32((u32)(r_ebp+0xfffffbccu), r_edx);
    /* 008c310f: mov eax, ecx */ r_eax = r_ecx;
    /* 008c3111: mov esi, edi */ r_esi = r_edi;
    /* 008c3113: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008c3116: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3117: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c311a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c311c: mov ecx, eax */ r_ecx = r_eax;
    /* 008c311e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3121: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3123: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 008c3129: jmp 0x8c3085 */ goto L_008c3085;
L_008c312e:; BB(0x008c312e);
    /* 008c312e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 008c3131: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 008c3137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3138: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3139: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c313b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c313d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c313f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3141: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3143: lea edx, [ebp - 0x1740] */ r_edx = (u32)(r_ebp+0xffffe8c0u);
    /* 008c3149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c314b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c314c: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3151: call dword ptr [0x8f8310] */ { u32 t = R32((u32)(0x8f8310u)); r_esp -= 4; W32(r_esp, 0x8c3157u); call_ind(t); }
    /* 008c3157: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3159: jne 0x8c3197 */ if (!fZ) goto L_008c3197;
L_008c315b:; BB(0x008c315b);
    /* 008c315b: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c3161: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c3163u); call_ind(t); }
    /* 008c3163: lea eax, [ebp - 0x638] */ r_eax = (u32)(r_ebp+0xfffff9c8u);
    /* 008c3169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c316a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c316cu); call_ind(t); }
    /* 008c316c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c316d: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
L_008c3172:; BB(0x008c3172);
    /* 008c3172: push 0xa37ebc */ { u32 v = 0xa37ebcu; r_esp -= 4; W32(r_esp, v); }
L_008c3177:; BB(0x008c3177);
    /* 008c3177: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c317cu); f_008c94e0();
    /* 008c317c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c317f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3180: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3181: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3186u); f_008c3720();
    /* 008c3186: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3189: mov eax, 0xaa */ r_eax = 0xaau;
    /* 008c318e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c318f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3190: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3191: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3194: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c3197:; BB(0x008c3197);
    /* 008c3197: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c319a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c319b: push 0xa37eb0 */ { u32 v = 0xa37eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c31a0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c31a5u); f_008c94e0();
    /* 008c31a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c31a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c31a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c31aa: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c31afu); f_008c3720();
    /* 008c31af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c31b2: jmp 0x8c31b7 */ goto L_008c31b7;
L_008c31b4:; BB(0x008c31b4);
    /* 008c31b4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
L_008c31b7:; BB(0x008c31b7);
    /* 008c31b7: mov eax, dword ptr [0xaea6e0] */ r_eax = R32((u32)(0xaea6e0u));
    /* 008c31bc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c31be: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31c0: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31c5: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31c7:; BB(0x008c31c7);
    /* 008c31c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c31ca: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31cc: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31d1: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31d3:; BB(0x008c31d3);
    /* 008c31d3: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c31d8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31da: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31df: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31e1:; BB(0x008c31e1);
    /* 008c31e1: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c31e6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31e8: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31ed: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31ef:; BB(0x008c31ef);
    /* 008c31ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c31f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c31f3: push 0xa37e9c */ { u32 v = 0xa37e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c31f8: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c31fd: call 0x8c5810 */ r_esp -= 4; W32(r_esp, 0x8c3202u); f_008c5810();
    /* 008c3202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3205: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c320a: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
L_008c320f:; BB(0x008c320f);
    /* 008c320f: push 0xa37e94 */ { u32 v = 0xa37e94u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3214: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3219u); f_008c94e0();
    /* 008c3219: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c321c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c321d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c321e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3223u); f_008c3720();
    /* 008c3223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3226: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c322c: call 0x8c87b0 */ r_esp -= 4; W32(r_esp, 0x8c3231u); f_008c87b0();
    /* 008c3231: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3233: jne 0x8c3265 */ if (!fZ) goto L_008c3265;
L_008c3235:; BB(0x008c3235);
    /* 008c3235: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c323b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c323du); call_ind(t); }
    /* 008c323d: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c323fu); call_ind(t); }
    /* 008c323f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3240: push 0xa37e80 */ { u32 v = 0xa37e80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3245: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c324au); f_008c94e0();
    /* 008c324a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c324d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c324e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c324f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3254u); f_008c3720();
    /* 008c3254: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3257: mov eax, 0xa0 */ r_eax = 0xa0u;
    /* 008c325c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c325d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c325e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c325f: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3262: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c3265:; BB(0x008c3265);
    /* 008c3265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3266: push 0xa37e50 */ { u32 v = 0xa37e50u; r_esp -= 4; W32(r_esp, v); }
    /* 008c326b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3270u); f_008c94e0();
    /* 008c3270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3274: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3275: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c327au); f_008c3720();
    /* 008c327a: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c327f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3282: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3284: jne 0x8c331e */ if (!fZ) goto L_008c331e;
L_008c328a:; BB(0x008c328a);
    /* 008c328a: cmp dword ptr [0xaea700], edi */ {  u32 a = R32((u32)(0xaea700u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3290: jne 0x8c331e */ if (!fZ) goto L_008c331e;
L_008c3296:; BB(0x008c3296);
    /* 008c3296: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008c3299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c329a: call dword ptr [0x8f8300] */ { u32 t = R32((u32)(0x8f8300u)); r_esp -= 4; W32(r_esp, 0x8c32a0u); call_ind(t); }
    /* 008c32a0: mov ecx, dword ptr [esi + 0x2b88] */ r_ecx = R32((u32)(r_esi+0x2b88u));
    /* 008c32a6: mov eax, dword ptr [0xaea6dc] */ r_eax = R32((u32)(0xaea6dcu));
    /* 008c32ab: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c32ae: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 008c32b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c32b5: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008c32bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c32bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c32bd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c32bf: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 008c32c5: call dword ptr [0x8f82e8] */ { u32 t = R32((u32)(0x8f82e8u)); r_esp -= 4; W32(r_esp, 0x8c32cbu); call_ind(t); }
    /* 008c32cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c32cd: je 0x8c3377 */ if (fZ) goto L_008c3377;
L_008c32d3:; BB(0x008c32d3);
    /* 008c32d3: push 0xa37e3c */ { u32 v = 0xa37e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c32d8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c32ddu); f_008c94e0();
    /* 008c32dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c32e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c32e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c32e2: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c32e7: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c32edu); call_ind(t); }
    /* 008c32ed: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c32ef: je 0x8c3335 */ if (fZ) goto L_008c3335;
L_008c32f1:; BB(0x008c32f1);
    /* 008c32f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c32f2: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c32f8u); call_ind(t); }
    /* 008c32f8: mov edx, dword ptr [0xaea6dc] */ r_edx = R32((u32)(0xaea6dcu));
    /* 008c32fe: mov eax, dword ptr [esi + 0x2b88] */ r_eax = R32((u32)(r_esi+0x2b88u));
    /* 008c3304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3306: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c330cu); call_ind(t); }
    /* 008c330c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c330e: je 0x8c3377 */ if (fZ) goto L_008c3377;
L_008c3310:; BB(0x008c3310);
    /* 008c3310: mov ecx, dword ptr [0xaea6dc] */ r_ecx = R32((u32)(0xaea6dcu));
    /* 008c3316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3317: push 0xa37e20 */ { u32 v = 0xa37e20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c331c: jmp 0x8c3341 */ goto L_008c3341;
L_008c331e:; BB(0x008c331e);
    /* 008c331e: mov eax, dword ptr [0xaea6dc] */ r_eax = R32((u32)(0xaea6dcu));
    /* 008c3323: mov ecx, dword ptr [esi + 0x2b88] */ r_ecx = R32((u32)(r_esi+0x2b88u));
    /* 008c3329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c332a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c332b: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c3331u); call_ind(t); }
    /* 008c3331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3333: je 0x8c3377 */ if (fZ) goto L_008c3377;
L_008c3335:; BB(0x008c3335);
    /* 008c3335: mov edx, dword ptr [0xaea6dc] */ r_edx = R32((u32)(0xaea6dcu));
    /* 008c333b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c333c: push 0xa37e08 */ { u32 v = 0xa37e08u; r_esp -= 4; W32(r_esp, v); }
L_008c3341:; BB(0x008c3341);
    /* 008c3341: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3346u); f_008c94e0();
    /* 008c3346: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c334a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c334b: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3350u); f_008c3720();
    /* 008c3350: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3353: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3355: push 0x40000c28 */ { u32 v = 0x40000c28u; r_esp -= 4; W32(r_esp, v); }
    /* 008c335a: push 0x1cbd0900 */ { u32 v = 0x1cbd0900u; r_esp -= 4; W32(r_esp, v); }
    /* 008c335f: push 0x2ee6 */ { u32 v = 0x2ee6u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3364: call 0x8c12d0 */ r_esp -= 4; W32(r_esp, 0x8c3369u); f_008c12d0();
    /* 008c3369: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c336a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c336b: mov eax, 0x72 */ r_eax = 0x72u;
    /* 008c3370: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3371: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3373: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3374: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c3377:; BB(0x008c3377);
    /* 008c3377: push 0xa37df8 */ { u32 v = 0xa37df8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c337c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3381u); f_008c94e0();
    /* 008c3381: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3385: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3386: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c338bu); f_008c3720();
    /* 008c338b: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c3391: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3396: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c339cu); call_ind(t); }
    /* 008c339c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c339e: je 0x8c33c5 */ if (fZ) goto L_008c33c5;
L_008c33a0:; BB(0x008c33a0);
    /* 008c33a0: push 0xa37de0 */ { u32 v = 0xa37de0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c33a5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c33aau); f_008c94e0();
    /* 008c33aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c33ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c33af: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c33b4u); f_008c3720();
    /* 008c33b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c33b7: mov eax, 0x72 */ r_eax = 0x72u;
    /* 008c33bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c33bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c33be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c33bf: mov esp, ebp */ r_esp = r_ebp;
    /* 008c33c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c33c2: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c33c5:; BB(0x008c33c5);
    /* 008c33c5: push 0xa37e3c */ { u32 v = 0xa37e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c33ca: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c33cfu); f_008c94e0();
    /* 008c33cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c33d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c33d4: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c33d9: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c33dfu); call_ind(t); }
    /* 008c33df: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c33e1: je 0x8c3403 */ if (fZ) goto L_008c3403;
L_008c33e3:; BB(0x008c33e3);
    /* 008c33e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33e4: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c33eau); call_ind(t); }
    /* 008c33ea: push 0xa37dd4 */ { u32 v = 0xa37dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c33ef: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c33f4u); f_008c94e0();
    /* 008c33f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c33f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c33f9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c33feu); f_008c3720();
    /* 008c33fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3401: jmp 0x8c3415 */ goto L_008c3415;
L_008c3403:; BB(0x008c3403);
    /* 008c3403: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c3406: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c3409: mov dword ptr [0xaea80c], ecx */ W32((u32)(0xaea80cu), r_ecx);
    /* 008c340f: mov dword ptr [0xaea810], edx */ W32((u32)(0xaea810u), r_edx);
L_008c3415:; BB(0x008c3415);
    /* 008c3415: push 0xa37dcc */ { u32 v = 0xa37dccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c341a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c341fu); f_008c94e0();
    /* 008c341f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3423: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3424: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3429u); f_008c3720();
    /* 008c3429: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c342e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3431: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3433: je 0x8c3458 */ if (fZ) goto L_008c3458;
L_008c3435:; BB(0x008c3435);
    /* 008c3435: push 0xa37dc0 */ { u32 v = 0xa37dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c343a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c343fu); f_008c94e0();
    /* 008c343f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3443: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3444: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3449u); f_008c3720();
    /* 008c3449: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c344c: mov dword ptr [0xaea80c], edi */ W32((u32)(0xaea80cu), r_edi);
    /* 008c3452: mov dword ptr [0xaea810], edi */ W32((u32)(0xaea810u), r_edi);
L_008c3458:; BB(0x008c3458);
    /* 008c3458: cmp dword ptr [0xaea6f8], edi */ {  u32 a = R32((u32)(0xaea6f8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c345e: jne 0x8c346e */ if (!fZ) goto L_008c346e;
L_008c3460:; BB(0x008c3460);
    /* 008c3460: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3462: mov eax, 0x7a */ r_eax = 0x7au;
    /* 008c3467: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3468: mov esp, ebp */ r_esp = r_ebp;
    /* 008c346a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c346b: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c346e:; BB(0x008c346e);
    /* 008c346e: call 0x8c6cc0 */ r_esp -= 4; W32(r_esp, 0x8c3473u); f_008c6cc0();
    /* 008c3473: call 0x8c52e0 */ r_esp -= 4; W32(r_esp, 0x8c3478u); f_008c52e0();
    /* 008c3478: mov edi, eax */ r_edi = r_eax;
    /* 008c347a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c347c: jne 0x8c3491 */ if (!fZ) goto L_008c3491;
L_008c347e:; BB(0x008c347e);
    /* 008c347e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3480: lea eax, [esi + 0x1468] */ r_eax = (u32)(r_esi+0x1468u);
    /* 008c3486: push 0x62d */ { u32 v = 0x62du; r_esp -= 4; W32(r_esp, v); }
    /* 008c348b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c348c: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c3491u); f_008c4490();
L_008c3491:; BB(0x008c3491);
    /* 008c3491: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3492: push 0xa37da8 */ { u32 v = 0xa37da8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3497: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c349cu); f_008c94e0();
    /* 008c349c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c349f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c34a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c34a1: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c34a6u); f_008c3720();
    /* 008c34a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c34a9: call 0x8c5620 */ r_esp -= 4; W32(r_esp, 0x8c34aeu); f_008c5620();
    /* 008c34ae: mov edi, eax */ r_edi = r_eax;
    /* 008c34b0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c34b2: jne 0x8c34cb */ if (!fZ) goto L_008c34cb;
L_008c34b4:; BB(0x008c34b4);
    /* 008c34b4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008c34b6: push 0x630 */ { u32 v = 0x630u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34bb: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34c0: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c34c6: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c34cbu); f_008c8550();
L_008c34cb:; BB(0x008c34cb);
    /* 008c34cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c34cc: push 0xa37d90 */ { u32 v = 0xa37d90u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34d1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c34d6u); f_008c94e0();
    /* 008c34d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c34d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c34da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c34db: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c34e0u); f_008c3720();
    /* 008c34e0: mov al, byte ptr [esi + 0x22] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x22u))) & 0xffu);
    /* 008c34e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c34e6: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c34e8: je 0x8c351a */ if (fZ) goto L_008c351a;
L_008c34ea:; BB(0x008c34ea);
    /* 008c34ea: mov ecx, esi */ r_ecx = r_esi;
    /* 008c34ec: call 0x8c3c90 */ r_esp -= 4; W32(r_esp, 0x8c34f1u); f_008c3c90();
    /* 008c34f1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c34f3: jne 0x8c351a */ if (!fZ) goto L_008c351a;
L_008c34f5:; BB(0x008c34f5);
    /* 008c34f5: push 0xa37d74 */ { u32 v = 0xa37d74u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34fa: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c34ffu); f_008c94e0();
    /* 008c34ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3503: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3504: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3509u); f_008c3720();
    /* 008c3509: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c350c: mov eax, 0xdc */ r_eax = 0xdcu;
    /* 008c3511: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3512: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3513: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3514: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3516: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3517: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
L_008c351a:; BB(0x008c351a);
    /* 008c351a: push 0xa37d6c */ { u32 v = 0xa37d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c351f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3524u); f_008c94e0();
    /* 008c3524: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3529: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c352eu); f_008c3720();
    /* 008c352e: mov eax, dword ptr [esi + 0x2b10] */ r_eax = R32((u32)(r_esi+0x2b10u));
    /* 008c3534: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3537: lea edi, [esi + 0x1468] */ r_edi = (u32)(r_esi+0x1468u);
    /* 008c353d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c353e: push 0x611 */ { u32 v = 0x611u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3543: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3548: mov ecx, edi */ r_ecx = r_edi;
    /* 008c354a: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c354fu); f_008c8550();
    /* 008c354f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c3552: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3553: push 0x617 */ { u32 v = 0x617u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3558: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c355d: mov ecx, edi */ r_ecx = r_edi;
    /* 008c355f: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c3564u); f_008c8550();
    /* 008c3564: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3566: call 0x8c4e60 */ r_esp -= 4; W32(r_esp, 0x8c356bu); f_008c4e60();
    /* 008c356b: push 0xa37d4c */ { u32 v = 0xa37d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3570: mov byte ptr [esi + 0x2ba4], al */ W8((u32)(r_esi+0x2ba4u), (u8)r_eax);
    /* 008c3576: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c357bu); f_008c94e0();
    /* 008c357b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c357e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c357f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3580: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3585u); f_008c3720();
    /* 008c3585: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3588: mov byte ptr [esi], 1 */ W8((u32)(r_esi), 0x1u);
L_008c358b:; BB(0x008c358b);
    /* 008c358b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c358c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c358d: mov eax, 0x755 */ r_eax = 0x755u;
    /* 008c3592: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3593: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3596: ret 4 */ FN_RET(0x008c1440); r_esp += 8; return;
}

void f_008c1c02(void)
{
    FN_ENTER(0x008c1c02);
    /* 008c1c02: add al, 0xeb */ {  u32 a = (u8)r_eax; u32 b = 0xebu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c1c04: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008c1c05: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 008c1c07: mov esi, dword ptr [0x8f81c0] */ r_esi = R32((u32)(0x8f81c0u));
    /* 008c1c0d: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 008c1c10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c12: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 008c1c15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c19: mov dword ptr [ebp - 0x18], 0xccfd00 */ W32((u32)(r_ebp+0xffffffe8u), 0xccfd00u);
    /* 008c1c20: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1c22u); call_ind(t); }
    /* 008c1c22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008c1c24:; BB(0x008c1c24);
    /* 008c1c24: mov cl, byte ptr [ebp + eax - 0x98] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffff68u))) & 0xffu);
    /* 008c1c2b: mov dl, byte ptr [ebp + eax - 0x6b] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xffffff95u))) & 0xffu);
    /* 008c1c2f: xor cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c1c31: mov byte ptr [ebp + eax - 0xb4], cl */ W8((u32)(r_ebp+r_eax+0xffffff4cu), (u8)r_ecx);
    /* 008c1c38: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1c39: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c1c3c: jl 0x8c1c24 */ if ((fS!=fO)) goto L_008c1c24;
L_008c1c3e:; BB(0x008c1c3e);
    /* 008c1c3e: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008c1c40: lea edx, [ebp - 0x14] */ r_edx = (u32)(r_ebp+0xffffffecu);
    /* 008c1c43: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c45: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 008c1c4b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c4e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c4f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c1c51u); call_ind(t); }
    /* 008c1c51: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c1c54: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c55: call dword ptr [0x8f802c] */ { u32 t = R32((u32)(0x8f802cu)); r_esp -= 4; W32(r_esp, 0x8c1c5bu); call_ind(t); }
    /* 008c1c5b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c1c5d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c1c60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c62: call dword ptr [0x8f8028] */ { u32 t = R32((u32)(0x8f8028u)); r_esp -= 4; W32(r_esp, 0x8c1c68u); call_ind(t); }
    /* 008c1c68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c1c6b: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 008c1c6e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c70: lea eax, [ebx + 0x1030] */ r_eax = (u32)(r_ebx+0x1030u);
    /* 008c1c76: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c78: call 0x8c8e20 */ r_esp -= 4; W32(r_esp, 0x8c1c7du); f_008c8e20();
    /* 008c1c7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1c80: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c1c83: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008c1c85: lea edx, [ebp - 0x84] */ r_edx = (u32)(r_ebp+0xffffff7cu);
    /* 008c1c8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c8f: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 008c1c92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c93: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c94: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8c1c9au); call_ind(t); }
    /* 008c1c9a: push 0xa3843c */ { u32 v = 0xa3843cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1c9f: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ca1: push 0xa3840c */ { u32 v = 0xa3840cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ca6: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c1cabu); f_008c9470();
    /* 008c1cab: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1cae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1caf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cb0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1cb5u); f_008c3720();
    /* 008c1cb5: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1cb8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c1cbb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1cbe: mov eax, dword ptr [esi + 0x2b10] */ r_eax = R32((u32)(r_esi+0x2b10u));
    /* 008c1cc4: push 0x8c0bb0 */ { u32 v = 0x8c0bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cc9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ccb: push 0xa383cc */ { u32 v = 0xa383ccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cd0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1cd5u); f_008c94e0();
    /* 008c1cd5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cda: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1cdfu); f_008c3720();
    /* 008c1cdf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1ce2: call 0x8c5000 */ r_esp -= 4; W32(r_esp, 0x8c1ce7u); f_008c5000();
    /* 008c1ce7: call 0x8c50e0 */ r_esp -= 4; W32(r_esp, 0x8c1cecu); f_008c50e0();
    /* 008c1cec: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1cee: call 0x8c1040 */ r_esp -= 4; W32(r_esp, 0x8c1cf3u); f_008c1040();
    /* 008c1cf3: push 0xa383c4 */ { u32 v = 0xa383c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1cf8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1cfdu); f_008c94e0();
    /* 008c1cfd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1d00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d02: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c1d07u); f_008c3720();
    /* 008c1d07: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1d0a: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d10: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d15: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d16: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1d18: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c1d1du); f_008c39d0();
    /* 008c1d1d: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c1d22: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d25: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d27: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d2d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d2f: not ecx */ r_ecx = ~r_ecx;
    /* 008c1d31: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d33: push 0xa383b8 */ { u32 v = 0xa383b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d38: mov esi, edi */ r_esi = r_edi;
    /* 008c1d3a: mov edi, edx */ r_edi = r_edx;
    /* 008c1d3c: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1d3e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d41: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d43: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d45: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d46: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1d49: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1d4b: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d4d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1d50: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d53: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d59: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1d5b: lea edi, [eax + 0x2b14] */ r_edi = (u32)(r_eax+0x2b14u);
    /* 008c1d61: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d66: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d68: not ecx */ r_ecx = ~r_ecx;
    /* 008c1d6a: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d6c: mov esi, edi */ r_esi = r_edi;
    /* 008c1d6e: mov edi, edx */ r_edi = r_edx;
    /* 008c1d70: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1d72: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d75: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d77: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d79: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d7a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1d7d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1d7f: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1d81: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d84: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1d86: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1d8bu); f_008c94e0();
    /* 008c1d8b: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1d91: mov edi, eax */ r_edi = r_eax;
    /* 008c1d93: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1d96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1d98: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1d9a: not ecx */ r_ecx = ~r_ecx;
    /* 008c1d9c: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1d9f: mov esi, edi */ r_esi = r_edi;
    /* 008c1da1: mov edi, edx */ r_edi = r_edx;
    /* 008c1da3: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1da5: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1da8: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1daa: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1dac: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1dad: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1db0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1db2: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1db4: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1dba: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1dbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1dbe: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1dc0: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c1dc5u); f_008cb285();
    /* 008c1dc5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1dc8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1dcb: jne 0x8c1e83 */ if (!fZ) goto L_008c1e83;
L_008c1dd1:; BB(0x008c1dd1);
    /* 008c1dd1: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1dd7: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ddc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ddd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1de0: call 0x8c3a20 */ r_esp -= 4; W32(r_esp, 0x8c1de5u); f_008c3a20();
    /* 008c1de5: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c1dea: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1ded: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1def: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1df5: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1df7: not ecx */ r_ecx = ~r_ecx;
    /* 008c1df9: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1dfb: push 0xa383b8 */ { u32 v = 0xa383b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1e00: mov esi, edi */ r_esi = r_edi;
    /* 008c1e02: mov edi, edx */ r_edi = r_edx;
    /* 008c1e04: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1e06: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e09: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e0b: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e0d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e0e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1e11: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1e13: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e15: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1e18: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e1b: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1e21: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1e23: lea edi, [eax + 0x2b14] */ r_edi = (u32)(r_eax+0x2b14u);
    /* 008c1e29: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e2e: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e30: not ecx */ r_ecx = ~r_ecx;
    /* 008c1e32: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e34: mov esi, edi */ r_esi = r_edi;
    /* 008c1e36: mov edi, edx */ r_edi = r_edx;
    /* 008c1e38: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1e3a: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e3d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e3f: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e41: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e42: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1e45: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1e47: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e49: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e4c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c1e4e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1e53u); f_008c94e0();
    /* 008c1e53: mov edi, eax */ r_edi = r_eax;
    /* 008c1e55: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c1e5a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c1e5d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e5f: not ecx */ r_ecx = ~r_ecx;
    /* 008c1e61: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e63: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1e69: mov esi, edi */ r_esi = r_edi;
    /* 008c1e6b: mov edi, edx */ r_edi = r_edx;
    /* 008c1e6d: mov edx, ecx */ r_edx = r_ecx;
    /* 008c1e6f: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c1e72: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c1e74: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e76: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c1e77: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c1e7a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c1e7c: mov ecx, edx */ r_ecx = r_edx;
    /* 008c1e7e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c1e81: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_008c1e83:; BB(0x008c1e83);
    /* 008c1e83: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c1e86: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1e8c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1e8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1e8f: lea esi, [edi + 0x2ac8] */ r_esi = (u32)(r_edi+0x2ac8u);
    /* 008c1e95: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1e97: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c1e9cu); f_008c7a90();
    /* 008c1e9c: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c1e9e: je 0x8c1fc8 */ if (fZ) goto L_008c1fc8;
L_008c1ea4:; BB(0x008c1ea4);
    /* 008c1ea4: mov ecx, dword ptr [0xa37b24] */ r_ecx = R32((u32)(0xa37b24u));
    /* 008c1eaa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1eab: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1eb0u); f_008c94e0();
    /* 008c1eb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1eb3: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c1eb6: lea edx, [ebp - 0x1f40] */ r_edx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1ebc: mov ecx, esi */ r_ecx = r_esi;
    /* 008c1ebe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ebf: push 0x7ff */ { u32 v = 0x7ffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ec4: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c1eca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ecb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ecc: call 0x8c7f60 */ r_esp -= 4; W32(r_esp, 0x8c1ed1u); f_008c7f60();
    /* 008c1ed1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c1ed3: je 0x8c1fc8 */ if (fZ) goto L_008c1fc8;
L_008c1ed9:; BB(0x008c1ed9);
    /* 008c1ed9: push 0xa383ac */ { u32 v = 0xa383acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ede: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c1ee3u); f_008c9470();
    /* 008c1ee3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1ee6: lea ecx, [ebp - 0x1f40] */ r_ecx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1eec: lea edx, [ebp - 0xc4] */ r_edx = (u32)(r_ebp+0xffffff3cu);
    /* 008c1ef2: mov esi, eax */ r_esi = r_eax;
    /* 008c1ef4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ef5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ef7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ef8: push 0xa383a0 */ { u32 v = 0xa383a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1efd: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c1f02u); f_008c9470();
    /* 008c1f02: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f06: push 0xa38390 */ { u32 v = 0xa38390u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f0b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f10u); f_008c94e0();
    /* 008c1f10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f15: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c1f1au); f_008c9730();
    /* 008c1f1a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f1d: lea eax, [ebp - 0x1f40] */ r_eax = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f24: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f26: push 0xa38380 */ { u32 v = 0xa38380u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f2b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f30u); f_008c94e0();
    /* 008c1f30: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f35: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1f3au); f_008c96c0();
    /* 008c1f3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f3d: lea ecx, [ebp - 0x1f40] */ r_ecx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1f43: mov dword ptr [0xaea91c], eax */ W32((u32)(0xaea91cu), r_eax);
    /* 008c1f48: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f49: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f4b: push 0xa38370 */ { u32 v = 0xa38370u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f50: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f55u); f_008c94e0();
    /* 008c1f55: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f5a: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1f5fu); f_008c96c0();
    /* 008c1f5f: mov dword ptr [0xaeaa24], eax */ W32((u32)(0xaeaa24u), r_eax);
    /* 008c1f64: lea eax, [edi + 0x2b14] */ r_eax = (u32)(r_edi+0x2b14u);
    /* 008c1f6a: lea edx, [ebp - 0xc4] */ r_edx = (u32)(r_ebp+0xffffff3cu);
    /* 008c1f70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f72: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x8c1f77u); f_0086118f();
    /* 008c1f77: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1f7c: jne 0x8c1fc8 */ if (!fZ) goto L_008c1fc8;
L_008c1f7e:; BB(0x008c1f7e);
    /* 008c1f7e: lea eax, [ebp - 0x1f40] */ r_eax = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1f84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f87: push 0xa38364 */ { u32 v = 0xa38364u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1f91u); f_008c94e0();
    /* 008c1f91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1f96: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1f9bu); f_008c96c0();
    /* 008c1f9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1f9e: lea ecx, [ebp - 0x1f40] */ r_ecx = (u32)(r_ebp+0xffffe0c0u);
    /* 008c1fa4: mov dword ptr [0xaea6d0], eax */ W32((u32)(0xaea6d0u), r_eax);
    /* 008c1fa9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c1faa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fac: push 0xa38354 */ { u32 v = 0xa38354u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fb1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1fb6u); f_008c94e0();
    /* 008c1fb6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1fb9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fbb: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c1fc0u); f_008c96c0();
    /* 008c1fc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1fc3: mov dword ptr [0xaea6e4], eax */ W32((u32)(0xaea6e4u), r_eax);
L_008c1fc8:; BB(0x008c1fc8);
    /* 008c1fc8: mov al, byte ptr [edi + 0x2b90] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+0x2b90u))) & 0xffu);
    /* 008c1fce: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c1fd0: je 0x8c1fdc */ if (fZ) goto L_008c1fdc;
L_008c1fd2:; BB(0x008c1fd2);
    /* 008c1fd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fd4: call 0x8c6c50 */ r_esp -= 4; W32(r_esp, 0x8c1fd9u); f_008c6c50();
    /* 008c1fd9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c1fdc:; BB(0x008c1fdc);
    /* 008c1fdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fde: push 0x251c */ { u32 v = 0x251cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c1fe3: mov ecx, edi */ r_ecx = r_edi;
    /* 008c1fe5: call 0x8c4200 */ r_esp -= 4; W32(r_esp, 0x8c1feau); f_008c4200();
    /* 008c1fea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c1fec: jne 0x8c20ef */ if (!fZ) goto L_008c20ef;
L_008c1ff2:; BB(0x008c1ff2);
    /* 008c1ff2: push 0xa38338 */ { u32 v = 0xa38338u; r_esp -= 4; W32(r_esp, v); }
    /* 008c1ff7: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c1ffcu); f_008c94e0();
    /* 008c1ffc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c1fff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2000: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2001: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2006u); f_008c3720();
    /* 008c2006: push 0xa38324 */ { u32 v = 0xa38324u; r_esp -= 4; W32(r_esp, v); }
    /* 008c200b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2010u); f_008c94e0();
    /* 008c2010: mov edi, dword ptr [0x8f8318] */ r_edi = R32((u32)(0x8f8318u));
    /* 008c2016: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c201a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c201c: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2021: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2023u); call_ind(t); }
    /* 008c2023: mov esi, eax */ r_esi = r_eax;
    /* 008c2025: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2027: jne 0x8c20e5 */ if (!fZ) goto L_008c20e5;
L_008c202d:; BB(0x008c202d);
    /* 008c202d: push 0xa38318 */ { u32 v = 0xa38318u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2032: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2037u); f_008c94e0();
    /* 008c2037: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c203a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c203b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c203c: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2041: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2043u); call_ind(t); }
    /* 008c2043: mov esi, eax */ r_esi = r_eax;
    /* 008c2045: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2047: jne 0x8c20e5 */ if (!fZ) goto L_008c20e5;
L_008c204d:; BB(0x008c204d);
    /* 008c204d: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008c2050:; BB(0x008c2050);
    /* 008c2050: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2052: jne 0x8c20e5 */ if (!fZ) goto L_008c20e5;
L_008c2058:; BB(0x008c2058);
    /* 008c2058: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 008c205a: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x8c2060u); call_ind(t); }
    /* 008c2060: push 0xa38324 */ { u32 v = 0xa38324u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2065: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c206au); f_008c94e0();
    /* 008c206a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c206d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c206e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c206f: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2074: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2076u); call_ind(t); }
    /* 008c2076: mov esi, eax */ r_esi = r_eax;
    /* 008c2078: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c207a: jne 0x8c2094 */ if (!fZ) goto L_008c2094;
L_008c207c:; BB(0x008c207c);
    /* 008c207c: push 0xa38318 */ { u32 v = 0xa38318u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2081: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2086u); f_008c94e0();
    /* 008c2086: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2089: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c208a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c208b: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2090: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2092u); call_ind(t); }
    /* 008c2092: mov esi, eax */ r_esi = r_eax;
L_008c2094:; BB(0x008c2094);
    /* 008c2094: push 0xa38304 */ { u32 v = 0xa38304u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2099: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c209eu); f_008c94e0();
    /* 008c209e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c20a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c20a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20a4: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20a9: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c20abu); call_ind(t); }
    /* 008c20ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20ad: jne 0x8c20ca */ if (!fZ) goto L_008c20ca;
L_008c20af:; BB(0x008c20af);
    /* 008c20af: push 0xa382f8 */ { u32 v = 0xa382f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20b4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c20b9u); f_008c94e0();
    /* 008c20b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c20bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c20bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20bf: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20c4: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c20c6u); call_ind(t); }
    /* 008c20c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20c8: je 0x8c20e1 */ if (fZ) goto L_008c20e1;
L_008c20ca:; BB(0x008c20ca);
    /* 008c20ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c20cb: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c20d1u); call_ind(t); }
    /* 008c20d1: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c20d4: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c20d5: cmp eax, 0x5f */ {  u32 a = r_eax; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008c20d8: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008c20db: jl 0x8c2050 */ if ((fS!=fO)) goto L_008c2050;
L_008c20e1:; BB(0x008c20e1);
    /* 008c20e1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20e3: je 0x8c20ec */ if (fZ) goto L_008c20ec;
L_008c20e5:; BB(0x008c20e5);
    /* 008c20e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c20e6: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c20ecu); call_ind(t); }
L_008c20ec:; BB(0x008c20ec);
    /* 008c20ec: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
L_008c20ef:; BB(0x008c20ef);
    /* 008c20ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c20f1: mov ecx, edi */ r_ecx = r_edi;
    /* 008c20f3: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c20f8u); f_008c4320();
    /* 008c20f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c20fa: jne 0x8c2198 */ if (!fZ) goto L_008c2198;
L_008c2100:; BB(0x008c2100);
    /* 008c2100: mov esi, dword ptr [0xaea6fc] */ r_esi = R32((u32)(0xaea6fcu));
    /* 008c2106: push 0xa382e4 */ { u32 v = 0xa382e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c210b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008c210c: mov dword ptr [0xaea6fc], esi */ W32((u32)(0xaea6fcu), r_esi);
    /* 008c2112: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2117u); f_008c94e0();
    /* 008c2117: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c211a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c211b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c211d: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2122: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c2128u); call_ind(t); }
    /* 008c2128: mov esi, eax */ r_esi = r_eax;
    /* 008c212a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c212c: jne 0x8c2159 */ if (!fZ) goto L_008c2159;
L_008c212e:; BB(0x008c212e);
    /* 008c212e: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2133: call dword ptr [0x8f8174] */ { u32 t = R32((u32)(0x8f8174u)); r_esp -= 4; W32(r_esp, 0x8c2139u); call_ind(t); }
    /* 008c2139: push 0xa382e4 */ { u32 v = 0xa382e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c213e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2143u); f_008c94e0();
    /* 008c2143: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2146: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2147: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2148: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c214d: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c2153u); call_ind(t); }
    /* 008c2153: mov esi, eax */ r_esi = r_eax;
    /* 008c2155: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2157: je 0x8c2198 */ if (fZ) goto L_008c2198;
L_008c2159:; BB(0x008c2159);
    /* 008c2159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c215b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c215c: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c2162u); call_ind(t); }
    /* 008c2162: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2167: je 0x8c2191 */ if (fZ) goto L_008c2191;
L_008c2169:; BB(0x008c2169);
    /* 008c2169: push 0x251c */ { u32 v = 0x251cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c216e: mov ecx, edi */ r_ecx = r_edi;
    /* 008c2170: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c2175u); f_008c4320();
    /* 008c2175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2177: jne 0x8c2187 */ if (!fZ) goto L_008c2187;
L_008c2179:; BB(0x008c2179);
    /* 008c2179: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c217a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c217b: mov eax, 0x6e */ r_eax = 0x6eu;
    /* 008c2180: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2181: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2183: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2184: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2187:; BB(0x008c2187);
    /* 008c2187: mov dword ptr [0xaea6fc], 0 */ W32((u32)(0xaea6fcu), 0x0u);
L_008c2191:; BB(0x008c2191);
    /* 008c2191: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2192: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c2198u); call_ind(t); }
L_008c2198:; BB(0x008c2198);
    /* 008c2198: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8c219eu); call_ind(t); }
    /* 008c219e: and eax, 0xfff00000 */ {  u32 a = r_eax; u32 b = 0xfff00000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c21a3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008c21a6: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c21ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c21ad: jne 0x8c21c4 */ if (!fZ) goto L_008c21c4;
L_008c21af:; BB(0x008c21af);
    /* 008c21af: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c21b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c21b6: jne 0x8c21c4 */ if (!fZ) goto L_008c21c4;
L_008c21b8:; BB(0x008c21b8);
    /* 008c21b8: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c21bb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c21bc: call 0x8c7270 */ r_esp -= 4; W32(r_esp, 0x8c21c1u); f_008c7270();
    /* 008c21c1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c21c4:; BB(0x008c21c4);
    /* 008c21c4: mov esi, dword ptr [0x8f8124] */ r_esi = R32((u32)(0x8f8124u));
    /* 008c21ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c21cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c21ce: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 008c21d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c21d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c21d7: mov dword ptr [ebp - 0xa4], 0xc */ W32((u32)(r_ebp+0xffffff5cu), 0xcu);
    /* 008c21e1: mov dword ptr [ebp - 0xa0], 0 */ W32((u32)(r_ebp+0xffffff60u), 0x0u);
    /* 008c21eb: mov dword ptr [ebp - 0x9c], 1 */ W32((u32)(r_ebp+0xffffff64u), 0x1u);
    /* 008c21f5: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c21f7u); call_ind(t); }
    /* 008c21f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c21f9: mov dword ptr [edi + 0x2b8c], eax */ W32((u32)(r_edi+0x2b8cu), r_eax);
    /* 008c21ff: jne 0x8c2213 */ if (!fZ) goto L_008c2213;
L_008c2201:; BB(0x008c2201);
    /* 008c2201: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c2207: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2209u); call_ind(t); }
    /* 008c2209: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c220bu); call_ind(t); }
    /* 008c220b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c220c: push 0xa382c0 */ { u32 v = 0xa382c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2211: jmp 0x8c2264 */ goto L_008c2264;
L_008c2213:; BB(0x008c2213);
    /* 008c2213: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2215: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2217: lea ecx, [ebp - 0xa4] */ r_ecx = (u32)(r_ebp+0xffffff5cu);
    /* 008c221d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c221f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2220: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2222u); call_ind(t); }
    /* 008c2222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2224: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 008c2227: jne 0x8c223b */ if (!fZ) goto L_008c223b;
L_008c2229:; BB(0x008c2229);
    /* 008c2229: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c222f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2231u); call_ind(t); }
    /* 008c2231: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2233u); call_ind(t); }
    /* 008c2233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2234: push 0xa3829c */ { u32 v = 0xa3829cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2239: jmp 0x8c2264 */ goto L_008c2264;
L_008c223b:; BB(0x008c223b);
    /* 008c223b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c223d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c223f: lea edx, [ebp - 0xa4] */ r_edx = (u32)(r_ebp+0xffffff5cu);
    /* 008c2245: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2247: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2248: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c224au); call_ind(t); }
    /* 008c224a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c224c: mov dword ptr [edi + 0x2b88], eax */ W32((u32)(r_edi+0x2b88u), r_eax);
    /* 008c2252: jne 0x8c2284 */ if (!fZ) goto L_008c2284;
L_008c2254:; BB(0x008c2254);
    /* 008c2254: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c225a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c225cu); call_ind(t); }
    /* 008c225c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c225eu); call_ind(t); }
    /* 008c225e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c225f: push 0xa38278 */ { u32 v = 0xa38278u; r_esp -= 4; W32(r_esp, v); }
L_008c2264:; BB(0x008c2264);
    /* 008c2264: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2269u); f_008c94e0();
    /* 008c2269: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c226c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c226d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c226e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2273u); f_008c3720();
    /* 008c2273: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2276: mov eax, 0xab */ r_eax = 0xabu;
    /* 008c227b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c227c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c227d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c227e: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2280: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2281: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2284:; BB(0x008c2284);
    /* 008c2284: push 0xa38270 */ { u32 v = 0xa38270u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2289: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c228eu); f_008c94e0();
    /* 008c228e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2291: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2292: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2293: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2298u); f_008c3720();
    /* 008c2298: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c229b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c229e: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c22a4: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c22a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c22aa: call 0x8c3a20 */ r_esp -= 4; W32(r_esp, 0x8c22afu); f_008c3a20();
    /* 008c22af: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c22b4: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c22b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c22b9: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c22bf: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c22c1: not ecx */ r_ecx = ~r_ecx;
    /* 008c22c3: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c22c5: push 0xa3825c */ { u32 v = 0xa3825cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c22ca: mov esi, edi */ r_esi = r_edi;
    /* 008c22cc: mov edi, edx */ r_edi = r_edx;
    /* 008c22ce: mov edx, ecx */ r_edx = r_ecx;
    /* 008c22d0: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c22d3: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c22d5: mov ecx, edx */ r_ecx = r_edx;
    /* 008c22d7: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c22d8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c22db: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c22dd: mov ecx, edx */ r_ecx = r_edx;
    /* 008c22df: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c22e2: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c22e4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c22e9u); f_008c94e0();
    /* 008c22e9: mov edi, eax */ r_edi = r_eax;
    /* 008c22eb: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c22ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c22f0: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c22f6: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c22f8: not ecx */ r_ecx = ~r_ecx;
    /* 008c22fa: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c22fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c22fd: mov esi, edi */ r_esi = r_edi;
    /* 008c22ff: mov edi, edx */ r_edi = r_edx;
    /* 008c2301: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2303: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2306: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2308: mov ecx, edx */ r_ecx = r_edx;
    /* 008c230a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c230b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c230e: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2310: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2312: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2318: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c231b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c231c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c231e: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c2323u); f_008cb285();
    /* 008c2323: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2326: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2329: jne 0x8c2357 */ if (!fZ) goto L_008c2357;
L_008c232b:; BB(0x008c232b);
    /* 008c232b: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2331: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2332: push 0xa38248 */ { u32 v = 0xa38248u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2337: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c233cu); f_008c94e0();
    /* 008c233c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c233f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2340: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2341: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2346u); f_008c3720();
    /* 008c2346: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2349: mov eax, 0x99 */ r_eax = 0x99u;
    /* 008c234e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c234f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2350: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2351: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2353: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2354: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2357:; BB(0x008c2357);
    /* 008c2357: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c235d: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2363: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2364: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2365: call 0x85a1d0 */ r_esp -= 4; W32(r_esp, 0x8c236au); f_0085a1d0();
    /* 008c236a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c236d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c236f: je 0x8c238f */ if (fZ) goto L_008c238f;
L_008c2371:; BB(0x008c2371);
    /* 008c2371: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2377: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2378: push 0xa38230 */ { u32 v = 0xa38230u; r_esp -= 4; W32(r_esp, v); }
    /* 008c237d: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2382u); f_008c94e0();
    /* 008c2382: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2386: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2387: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c238cu); f_008c3720();
    /* 008c238c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c238f:; BB(0x008c238f);
    /* 008c238f: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2392: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2398: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c239a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c239b: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c23a1: mov byte ptr [ebp - 0xd], 0 */ W8((u32)(r_ebp+0xfffffff3u), 0x0u);
    /* 008c23a5: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c23aau); f_008c7a90();
    /* 008c23aa: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c23ac: jne 0x8c255a */ if (!fZ) goto L_008c255a;
L_008c23b2:; BB(0x008c23b2);
    /* 008c23b2: mov byte ptr [ebp + 0xb], al */ W8((u32)(r_ebp+0xbu), (u8)r_eax);
    /* 008c23b5: mov eax, dword ptr [esi + 0x2b0c] */ r_eax = R32((u32)(r_esi+0x2b0cu));
    /* 008c23bb: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c23be: jne 0x8c23d1 */ if (!fZ) goto L_008c23d1;
L_008c23c0:; BB(0x008c23c0);
    /* 008c23c0: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c23c6u); call_ind(t); }
    /* 008c23c6: cmp eax, 0x80090006 */ {  u32 a = r_eax; u32 b = 0x80090006u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c23cb: jne 0x8c23d1 */ if (!fZ) goto L_008c23d1;
L_008c23cd:; BB(0x008c23cd);
    /* 008c23cd: mov byte ptr [ebp + 0xb], 1 */ W8((u32)(r_ebp+0xbu), 0x1u);
L_008c23d1:; BB(0x008c23d1);
    /* 008c23d1: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c23d7u); call_ind(t); }
    /* 008c23d7: mov edi, dword ptr [esi + 0x2b0c] */ r_edi = R32((u32)(r_esi+0x2b0cu));
    /* 008c23dd: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c23e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c23e4: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c23eau); call_ind(t); }
    /* 008c23ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c23eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c23ec: push 0xa38214 */ { u32 v = 0xa38214u; r_esp -= 4; W32(r_esp, v); }
    /* 008c23f1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c23f6u); f_008c94e0();
    /* 008c23f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c23f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c23fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c23fb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2400u); f_008c3720();
    /* 008c2400: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2403: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c2409: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c240b: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2410: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2412: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2414: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2416: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c241b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c241c: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x8c2422u); call_ind(t); }
    /* 008c2422: mov edi, eax */ r_edi = r_eax;
    /* 008c2424: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2427: jne 0x8c2450 */ if (!fZ) goto L_008c2450;
L_008c2429:; BB(0x008c2429);
    /* 008c2429: lea edx, [ebp - 0x330] */ r_edx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c242f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2430: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c2436u); call_ind(t); }
    /* 008c2436: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2437: push 0xa381fc */ { u32 v = 0xa381fcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c243c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2441u); f_008c94e0();
    /* 008c2441: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2445: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2446: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c244bu); f_008c3720();
    /* 008c244b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c244e: jmp 0x8c24bd */ goto L_008c24bd;
L_008c2450:; BB(0x008c2450);
    /* 008c2450: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2452: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2453: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x8c2459u); call_ind(t); }
    /* 008c2459: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c245a: push 0xa381ec */ { u32 v = 0xa381ecu; r_esp -= 4; W32(r_esp, v); }
    /* 008c245f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2464u); f_008c94e0();
    /* 008c2464: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2467: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2468: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2469: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c246eu); f_008c3720();
    /* 008c246e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2471: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2473: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2475: push -4 */ { u32 v = 0xfffffffcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2477: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2478: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x8c247eu); call_ind(t); }
    /* 008c247e: lea eax, [ebp - 0x84] */ r_eax = (u32)(r_ebp+0xffffff7cu);
    /* 008c2484: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2486: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2487: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 008c248a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c248c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c248d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c248e: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 008c2495: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x8c249bu); call_ind(t); }
    /* 008c249b: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c249e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c249f: push 0xa381dc */ { u32 v = 0xa381dcu; r_esp -= 4; W32(r_esp, v); }
    /* 008c24a4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c24a9u); f_008c94e0();
    /* 008c24a9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c24ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c24ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c24ae: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c24b3u); f_008c3720();
    /* 008c24b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c24b6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c24b7: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c24bdu); call_ind(t); }
L_008c24bd:; BB(0x008c24bd);
    /* 008c24bd: mov al, byte ptr [ebp + 0xb] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xbu))) & 0xffu);
    /* 008c24c0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c24c2: je 0x8c2535 */ if (fZ) goto L_008c2535;
L_008c24c4:; BB(0x008c24c4);
    /* 008c24c4: mov al, byte ptr [esi + 0x2b7d] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2b7du))) & 0xffu);
    /* 008c24ca: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c24cc: jne 0x8c2505 */ if (!fZ) goto L_008c2505;
L_008c24ce:; BB(0x008c24ce);
    /* 008c24ce: call 0x8c5fd0 */ r_esp -= 4; W32(r_esp, 0x8c24d3u); f_008c5fd0();
    /* 008c24d3: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c24d5: je 0x8c2505 */ if (fZ) goto L_008c2505;
L_008c24d7:; BB(0x008c24d7);
    /* 008c24d7: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c24dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c24df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c24e0: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c24e6: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c24ebu); f_008c7a90();
    /* 008c24eb: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c24ed: jne 0x8c2517 */ if (!fZ) goto L_008c2517;
L_008c24ef:; BB(0x008c24ef);
    /* 008c24ef: cmp dword ptr [esi + 0x2b0c], 8 */ {  u32 a = R32((u32)(r_esi+0x2b0cu)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c24f6: jne 0x8c2513 */ if (!fZ) goto L_008c2513;
L_008c24f8:; BB(0x008c24f8);
    /* 008c24f8: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c24feu); call_ind(t); }
    /* 008c24fe: cmp eax, 0x80090006 */ {  u32 a = r_eax; u32 b = 0x80090006u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c2503: jne 0x8c2513 */ if (!fZ) goto L_008c2513;
L_008c2505:; BB(0x008c2505);
    /* 008c2505: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2506: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2507: mov eax, 0x9b */ r_eax = 0x9bu;
    /* 008c250c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c250d: mov esp, ebp */ r_esp = r_ebp;
    /* 008c250f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2510: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2513:; BB(0x008c2513);
    /* 008c2513: mov byte ptr [ebp - 0xd], 1 */ W8((u32)(r_ebp+0xfffffff3u), 0x1u);
L_008c2517:; BB(0x008c2517);
    /* 008c2517: push 0xa381c4 */ { u32 v = 0xa381c4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c251c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2521u); f_008c94e0();
    /* 008c2521: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2524: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2525: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2526: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c252bu); f_008c3720();
    /* 008c252b: mov al, byte ptr [ebp - 0xd] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xfffffff3u))) & 0xffu);
    /* 008c252e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2531: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c2533: je 0x8c255a */ if (fZ) goto L_008c255a;
L_008c2535:; BB(0x008c2535);
    /* 008c2535: push 0xa381a0 */ { u32 v = 0xa381a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c253a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c253fu); f_008c94e0();
    /* 008c253f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2542: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2543: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2544: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2549u); f_008c3720();
    /* 008c2549: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c254c: mov eax, 0x7c */ r_eax = 0x7cu;
    /* 008c2551: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2552: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2553: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2554: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2557: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c255a:; BB(0x008c255a);
    /* 008c255a: push 0xa38198 */ { u32 v = 0xa38198u; r_esp -= 4; W32(r_esp, v); }
    /* 008c255f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2564u); f_008c94e0();
    /* 008c2564: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2568: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2569: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c256eu); f_008c3720();
    /* 008c256e: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008c2573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2575: lea edi, [ebp - 0x128] */ r_edi = (u32)(r_ebp+0xfffffed8u);
    /* 008c257b: mov edx, dword ptr [0xa37b28] */ r_edx = R32((u32)(0xa37b28u));
    /* 008c2581: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2583: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2585: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c258a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 008c258d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2590: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008c2593: mov dword ptr [ebp - 0x128], 0x44 */ W32((u32)(r_ebp+0xfffffed8u), 0x44u);
    /* 008c259d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008c25a0: push 0xaea708 */ { u32 v = 0xaea708u; r_esp -= 4; W32(r_esp, v); }
    /* 008c25a5: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 008c25a8: mov ecx, dword ptr [esi + 0x2b10] */ r_ecx = R32((u32)(r_esi+0x2b10u));
    /* 008c25ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25af: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 008c25b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25b3: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c25b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25ba: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c25bd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25bf: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c25c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25c7: push 0xa38178 */ { u32 v = 0xa38178u; r_esp -= 4; W32(r_esp, v); }
    /* 008c25cc: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c25d1u); f_008c94e0();
    /* 008c25d1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c25d4: lea edx, [ebp - 0x638] */ r_edx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c25da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25dc: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c25e2u); call_ind(t); }
    /* 008c25e2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c25e5: lea eax, [ebp - 0x638] */ r_eax = (u32)(r_ebp+0xfffff9c8u);
    /* 008c25eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25ec: push 0xa3816c */ { u32 v = 0xa3816cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c25f1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c25f6u); f_008c94e0();
    /* 008c25f6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c25f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c25fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c25fb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2600u); f_008c3720();
    /* 008c2600: lea ecx, [ebp - 0x638] */ r_ecx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2606: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2607: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c260cu); f_008c93d0();
    /* 008c260c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c260f: lea edi, [ebp - 0x638] */ r_edi = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2615: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2618: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c261a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c261d: lea edx, [ebp - 0x1740] */ r_edx = (u32)(r_ebp+0xffffe8c0u);
    /* 008c2623: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2625: not ecx */ r_ecx = ~r_ecx;
    /* 008c2627: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2628: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008c262b: mov edi, ecx */ r_edi = r_ecx;
    /* 008c262d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c262e: push 0xa38160 */ { u32 v = 0xa38160u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2633: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2638u); f_008c94e0();
    /* 008c2638: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c263b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c263c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c263d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2642u); f_008c3720();
    /* 008c2642: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 008c2645: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2648: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c264a: jle 0x8c267a */ if ((fZ||fS!=fO)) goto L_008c267a;
L_008c264c:; BB(0x008c264c);
    /* 008c264c: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008c264f: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008c2652:; BB(0x008c2652);
    /* 008c2652: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c2655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2657: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008c2659: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c265a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c265b: push 0xa38158 */ { u32 v = 0xa38158u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2660: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2661: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008c2664: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c266au); call_ind(t); }
    /* 008c266a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c266c: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c266f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2672: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008c2673: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008c2676: jne 0x8c2652 */ if (!fZ) goto L_008c2652;
L_008c2678:; BB(0x008c2678);
    /* 008c2678: jmp 0x8c267d */ goto L_008c267d;
L_008c267a:; BB(0x008c267a);
    /* 008c267a: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
L_008c267d:; BB(0x008c267d);
    /* 008c267d: lea eax, [ebp - 0x1740] */ r_eax = (u32)(r_ebp+0xffffe8c0u);
    /* 008c2683: mov byte ptr [edi], 0 */ W8((u32)(r_edi), 0x0u);
    /* 008c2686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2687: push 0xa3814c */ { u32 v = 0xa3814cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c268c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2691u); f_008c94e0();
    /* 008c2691: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2695: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2696: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c269bu); f_008c3720();
    /* 008c269b: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c26a0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c26a2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c26a5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c26a7: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 008c26aa: jne 0x8c27cd */ if (!fZ) goto L_008c27cd;
L_008c26b0:; BB(0x008c26b0);
    /* 008c26b0: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 008c26b3: lea edx, [ebp - 0x128] */ r_edx = (u32)(r_ebp+0xfffffed8u);
    /* 008c26b9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26bd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c26c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26c1: lea eax, [ebp - 0x1740] */ r_eax = (u32)(r_ebp+0xffffe8c0u);
    /* 008c26c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c26c8: lea ecx, [ebp - 0x330] */ r_ecx = (u32)(r_ebp+0xfffffcd0u);
    /* 008c26ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c26cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26d0: call dword ptr [0x8f8310] */ { u32 t = R32((u32)(0x8f8310u)); r_esp -= 4; W32(r_esp, 0x8c26d6u); call_ind(t); }
    /* 008c26d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c26d8: je 0x8c26f8 */ if (fZ) goto L_008c26f8;
L_008c26da:; BB(0x008c26da);
    /* 008c26da: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c26e0: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c26e2u); call_ind(t); }
    /* 008c26e2: lea edx, [ebp - 0x638] */ r_edx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c26e8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26e9: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c26ebu); call_ind(t); }
    /* 008c26eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c26ec: lea eax, [ebp - 0x330] */ r_eax = (u32)(r_ebp+0xfffffcd0u);
    /* 008c26f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c26f3: jmp 0x8c3172 */ goto L_008c3172;
L_008c26f8:; BB(0x008c26f8);
    /* 008c26f8: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c26fb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c26fc: push 0xa38140 */ { u32 v = 0xa38140u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2701: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2706u); f_008c94e0();
    /* 008c2706: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2709: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c270a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c270b: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2710u); f_008c3720();
    /* 008c2710: mov edx, dword ptr [esi + 0x2b8c] */ r_edx = R32((u32)(r_esi+0x2b8cu));
    /* 008c2716: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c2719: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c271c: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008c2722: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008c2725: mov dword ptr [ebp - 0x88], edx */ W32((u32)(r_ebp+0xffffff78u), r_edx);
    /* 008c272b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c272d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c272e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c272f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2731: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 008c2737: call dword ptr [0x8f82e8] */ { u32 t = R32((u32)(0x8f82e8u)); r_esp -= 4; W32(r_esp, 0x8c273du); call_ind(t); }
    /* 008c273d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c273f: je 0x8c27aa */ if (fZ) goto L_008c27aa;
L_008c2741:; BB(0x008c2741);
    /* 008c2741: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c2744: lea edx, [ebp + 8] */ r_edx = (u32)(r_ebp+0x8u);
    /* 008c2747: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2748: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2749: call dword ptr [0x8f830c] */ { u32 t = R32((u32)(0x8f830cu)); r_esp -= 4; W32(r_esp, 0x8c274fu); call_ind(t); }
    /* 008c274f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2751: jne 0x8c2771 */ if (!fZ) goto L_008c2771;
L_008c2753:; BB(0x008c2753);
    /* 008c2753: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8c2759u); call_ind(t); }
    /* 008c2759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c275a: push 0xa3811c */ { u32 v = 0xa3811cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c275f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2764u); f_008c94e0();
    /* 008c2764: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2767: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2769: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c276eu); f_008c3720();
    /* 008c276e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c2771:; BB(0x008c2771);
    /* 008c2771: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c2774: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2775: push 0xa380f8 */ { u32 v = 0xa380f8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c277a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c277fu); f_008c94e0();
    /* 008c277f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2782: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2783: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2784: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2789u); f_008c3720();
    /* 008c2789: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c278c: mov esi, dword ptr [0x8f8140] */ r_esi = R32((u32)(0x8f8140u));
    /* 008c2792: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2796: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c2798u); call_ind(t); }
    /* 008c2798: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008c279b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c279c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c279eu); call_ind(t); }
    /* 008c279e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008c27a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c27a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c27a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c27a4: mov esp, ebp */ r_esp = r_ebp;
    /* 008c27a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c27a7: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c27aa:; BB(0x008c27aa);
    /* 008c27aa: push 0xa380f0 */ { u32 v = 0xa380f0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c27af: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c27b4u); f_008c94e0();
    /* 008c27b4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c27b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c27b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27b9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c27beu); f_008c3720();
    /* 008c27be: lea ecx, [ebp - 0x2c] */ r_ecx = (u32)(r_ebp+0xffffffd4u);
    /* 008c27c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27c2: call 0x8c5a20 */ r_esp -= 4; W32(r_esp, 0x8c27c7u); f_008c5a20();
    /* 008c27c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c27ca: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
L_008c27cd:; BB(0x008c27cd);
    /* 008c27cd: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c27d0: mov esi, dword ptr [0x8f8140] */ r_esi = R32((u32)(0x8f8140u));
    /* 008c27d6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27d7: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c27d9u); call_ind(t); }
    /* 008c27d9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008c27dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c27dd: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c27dfu); call_ind(t); }
    /* 008c27df: lea ecx, [ebp - 0x22c] */ r_ecx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c27e5: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c27ea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c27eb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c27ee: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c27f3u); f_008c39d0();
    /* 008c27f3: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c27f8: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c27fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c27fd: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c2803: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2805: not ecx */ r_ecx = ~r_ecx;
    /* 008c2807: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2809: push 0xa383b8 */ { u32 v = 0xa383b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c280e: mov esi, edi */ r_esi = r_edi;
    /* 008c2810: mov edi, edx */ r_edi = r_edx;
    /* 008c2812: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2814: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2817: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2819: mov ecx, edx */ r_ecx = r_edx;
    /* 008c281b: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c281c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c281f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2821: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2823: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2826: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2829: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c282f: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2831: lea edi, [eax + 0x2b14] */ r_edi = (u32)(r_eax+0x2b14u);
    /* 008c2837: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c283a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c283c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c283e: not ecx */ r_ecx = ~r_ecx;
    /* 008c2840: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2842: mov esi, edi */ r_esi = r_edi;
    /* 008c2844: mov edi, edx */ r_edi = r_edx;
    /* 008c2846: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2848: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c284b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c284d: mov ecx, edx */ r_ecx = r_edx;
    /* 008c284f: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2850: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2853: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2855: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2857: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c285a: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c285c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2861u); f_008c94e0();
    /* 008c2861: mov edi, eax */ r_edi = r_eax;
    /* 008c2863: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2866: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2868: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c286b: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c286d: not ecx */ r_ecx = ~r_ecx;
    /* 008c286f: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2871: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c2877: mov esi, edi */ r_esi = r_edi;
    /* 008c2879: mov edi, edx */ r_edi = r_edx;
    /* 008c287b: mov edx, ecx */ r_edx = r_ecx;
    /* 008c287d: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2880: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2882: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2884: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2885: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2888: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c288a: mov ecx, edx */ r_ecx = r_edx;
    /* 008c288c: lea eax, [ebp - 0x22c] */ r_eax = (u32)(r_ebp+0xfffffdd4u);
    /* 008c2892: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2895: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2897: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2899: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c289c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c289d: add ecx, 0x2ac8 */ {  u32 a = r_ecx; u32 b = 0x2ac8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c28a3: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c28a8u); f_008c7a90();
    /* 008c28a8: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c28aa: jne 0x8c28e6 */ if (!fZ) goto L_008c28e6;
L_008c28ac:; BB(0x008c28ac);
    /* 008c28ac: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c28b2: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c28b4u); call_ind(t); }
    /* 008c28b4: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c28b7: mov esi, dword ptr [edx + 0x2b0c] */ r_esi = R32((u32)(r_edx+0x2b0cu));
    /* 008c28bd: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c28bfu); call_ind(t); }
    /* 008c28bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c28c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c28c1: push 0xa380d8 */ { u32 v = 0xa380d8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c28c6: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c28cbu); f_008c94e0();
    /* 008c28cb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c28ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c28cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c28d0: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c28d5u); f_008c3720();
    /* 008c28d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c28d8: mov eax, 0x78 */ r_eax = 0x78u;
    /* 008c28dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c28de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c28df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c28e0: mov esp, ebp */ r_esp = r_ebp;
    /* 008c28e2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c28e3: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c28e6:; BB(0x008c28e6);
    /* 008c28e6: mov eax, dword ptr [0xa37b24] */ r_eax = R32((u32)(0xa37b24u));
    /* 008c28eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c28ec: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c28f1u); f_008c94e0();
    /* 008c28f1: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c28f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c28f7: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008c28fa: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2901: push 0x7ff */ { u32 v = 0x7ffu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2906: lea edx, [ebp - 0x22c] */ r_edx = (u32)(r_ebp+0xfffffdd4u);
    /* 008c290c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c290d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c290e: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c2914: call 0x8c7f60 */ r_esp -= 4; W32(r_esp, 0x8c2919u); f_008c7f60();
    /* 008c2919: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c291b: jne 0x8c2954 */ if (!fZ) goto L_008c2954;
L_008c291d:; BB(0x008c291d);
    /* 008c291d: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c2923: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2925u); call_ind(t); }
    /* 008c2925: mov esi, dword ptr [esi + 0x2b0c] */ r_esi = R32((u32)(r_esi+0x2b0cu));
    /* 008c292b: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c292du); call_ind(t); }
    /* 008c292d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c292e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c292f: push 0xa380b8 */ { u32 v = 0xa380b8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2934: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2939u); f_008c94e0();
    /* 008c2939: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c293c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c293d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c293e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2943u); f_008c3720();
    /* 008c2943: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2946: mov eax, 0x82 */ r_eax = 0x82u;
    /* 008c294b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c294c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c294d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c294e: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2950: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2951: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2954:; BB(0x008c2954);
    /* 008c2954: push 0xa383ac */ { u32 v = 0xa383acu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2959: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c295eu); f_008c9470();
    /* 008c295e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2961: mov edi, eax */ r_edi = r_eax;
    /* 008c2963: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2969: lea ecx, [ebp - 0xe4] */ r_ecx = (u32)(r_ebp+0xffffff1cu);
    /* 008c296f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2970: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2972: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2973: push 0xa383a0 */ { u32 v = 0xa383a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2978: call 0x8c9470 */ r_esp -= 4; W32(r_esp, 0x8c297du); f_008c9470();
    /* 008c297d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2981: push 0xa38390 */ { u32 v = 0xa38390u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2986: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c298bu); f_008c94e0();
    /* 008c298b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c298e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c298f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2990: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c2995u); f_008c9730();
    /* 008c2995: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c299b: lea edx, [ebp - 0xe4] */ r_edx = (u32)(r_ebp+0xffffff1cu);
    /* 008c29a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c29a3: call 0x86118f */ r_esp -= 4; W32(r_esp, 0x8c29a8u); f_0086118f();
    /* 008c29a8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c29ad: je 0x8c29d4 */ if (fZ) goto L_008c29d4;
L_008c29af:; BB(0x008c29af);
    /* 008c29af: push 0xa380a0 */ { u32 v = 0xa380a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c29b4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c29b9u); f_008c94e0();
    /* 008c29b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c29be: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c29c3u); f_008c3720();
    /* 008c29c3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c29c6: mov eax, 0x8e */ r_eax = 0x8eu;
    /* 008c29cb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c29cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c29cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c29ce: mov esp, ebp */ r_esp = r_ebp;
    /* 008c29d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c29d1: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c29d4:; BB(0x008c29d4);
    /* 008c29d4: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c29da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c29dd: push 0xa38364 */ { u32 v = 0xa38364u; r_esp -= 4; W32(r_esp, v); }
    /* 008c29e2: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c29e7u); f_008c94e0();
    /* 008c29e7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c29eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c29ec: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c29f1u); f_008c96c0();
    /* 008c29f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c29f4: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c29fa: mov dword ptr [0xaea6d0], eax */ W32((u32)(0xaea6d0u), r_eax);
    /* 008c29ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a00: push 0x186a0 */ { u32 v = 0x186a0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a05: push 0xa38090 */ { u32 v = 0xa38090u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a0a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a0fu); f_008c94e0();
    /* 008c2a0f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a13: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a14: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a19u); f_008c96c0();
    /* 008c2a19: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a1c: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a22: mov dword ptr [0xaea6dc], eax */ W32((u32)(0xaea6dcu), r_eax);
    /* 008c2a27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a2a: push 0xa38080 */ { u32 v = 0xa38080u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a2f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a34u); f_008c94e0();
    /* 008c2a34: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a39: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a3eu); f_008c96c0();
    /* 008c2a3e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a41: mov dword ptr [0xaea6e0], eax */ W32((u32)(0xaea6e0u), r_eax);
    /* 008c2a46: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a4f: push 0xa38070 */ { u32 v = 0xa38070u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a54: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a59u); f_008c94e0();
    /* 008c2a59: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a5d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a5e: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a63u); f_008c96c0();
    /* 008c2a63: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a66: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a6c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a6f: push 0xa38064 */ { u32 v = 0xa38064u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a74: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a79u); f_008c94e0();
    /* 008c2a79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a7e: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2a83u); f_008c96c0();
    /* 008c2a83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a86: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2a8c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c2a8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a90: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a92: push 0xa38354 */ { u32 v = 0xa38354u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2a97: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2a9cu); f_008c94e0();
    /* 008c2a9c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2a9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2aa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2aa1: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2aa6u); f_008c96c0();
    /* 008c2aa6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2aa9: mov dword ptr [0xaea6e4], eax */ W32((u32)(0xaea6e4u), r_eax);
    /* 008c2aae: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ab5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ab7: push 0xa38054 */ { u32 v = 0xa38054u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2abc: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2ac1u); f_008c94e0();
    /* 008c2ac1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ac4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ac5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ac6: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2acbu); f_008c96c0();
    /* 008c2acb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ace: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2ad4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008c2ad7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ad8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ada: push 0xa38040 */ { u32 v = 0xa38040u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2adf: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2ae4u); f_008c94e0();
    /* 008c2ae4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ae8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ae9: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2aeeu); f_008c96c0();
    /* 008c2aee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2af1: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2af7: mov dword ptr [0xaea6e8], eax */ W32((u32)(0xaea6e8u), r_eax);
    /* 008c2afc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2afd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2aff: push 0xa3802c */ { u32 v = 0xa3802cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b04: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b09u); f_008c94e0();
    /* 008c2b09: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b0e: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2b13u); f_008c96c0();
    /* 008c2b13: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2b16: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b19: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008c2b1b: not al */ r_eax = (r_eax & 0xffffff00u) | ((~(u8)r_eax) & 0xffu);
    /* 008c2b1d: and al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008c2b1f: mov byte ptr [esi + 0x22], al */ W8((u32)(r_esi+0x22u), (u8)r_eax);
    /* 008c2b22: lea eax, [ebp - 0xf40] */ r_eax = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2b28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b29: push 0x3e8 */ { u32 v = 0x3e8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b2e: push 0xa38014 */ { u32 v = 0xa38014u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b33: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b38u); f_008c94e0();
    /* 008c2b38: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b3d: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2b42u); f_008c96c0();
    /* 008c2b42: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b45: lea ecx, [ebp - 0xf40] */ r_ecx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2b4b: mov dword ptr [esi + 0x2b80], eax */ W32((u32)(r_esi+0x2b80u), r_eax);
    /* 008c2b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b52: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b54: push 0xa38000 */ { u32 v = 0xa38000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b59: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b5eu); f_008c94e0();
    /* 008c2b5e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b62: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b63: call 0x8c96c0 */ r_esp -= 4; W32(r_esp, 0x8c2b68u); f_008c96c0();
    /* 008c2b68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b6b: lea edx, [ebp - 0xf40] */ r_edx = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2b71: mov dword ptr [esi + 0x2b84], eax */ W32((u32)(r_esi+0x2b84u), r_eax);
    /* 008c2b77: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b78: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b7d: push 0xaea818 */ { u32 v = 0xaea818u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b82: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b87: push 0xa37ff0 */ { u32 v = 0xa37ff0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2b91u); f_008c94e0();
    /* 008c2b91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2b94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2b96: call 0x8c9730 */ r_esp -= 4; W32(r_esp, 0x8c2b9bu); f_008c9730();
    /* 008c2b9b: mov ecx, 0x200 */ r_ecx = 0x200u;
    /* 008c2ba0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2ba2: lea edi, [ebp - 0xf40] */ r_edi = (u32)(r_ebp+0xfffff0c0u);
    /* 008c2ba8: push 0xa37fe8 */ { u32 v = 0xa37fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bad: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2baf: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2bb4u); f_008c94e0();
    /* 008c2bb4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2bb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bb9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2bbeu); f_008c3720();
    /* 008c2bbe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2bc1: mov ecx, esi */ r_ecx = r_esi;
    /* 008c2bc3: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bc8: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bcd: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c2bd2u); f_008c39d0();
    /* 008c2bd2: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c2bd7: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2bda: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2bdc: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2bde: not ecx */ r_ecx = ~r_ecx;
    /* 008c2be0: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2be2: mov esi, edi */ r_esi = r_edi;
    /* 008c2be4: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2be6: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2beb: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2bee: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2bf0: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2bf1: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2bf3: push 0xa37fd8 */ { u32 v = 0xa37fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2bf8: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2bfb: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2bfd: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2bff: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c02: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2c04: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2c09u); f_008c94e0();
    /* 008c2c09: mov edi, eax */ r_edi = r_eax;
    /* 008c2c0b: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c0e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2c10: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2c13: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2c15: not ecx */ r_ecx = ~r_ecx;
    /* 008c2c17: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2c19: mov esi, edi */ r_esi = r_edi;
    /* 008c2c1b: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2c1d: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2c22: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2c25: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2c27: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2c29: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2c2a: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2c2d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2c2f: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c2c34: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2c36: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2c3b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2c3d: je 0x8c2cd0 */ if (fZ) goto L_008c2cd0;
L_008c2c43:; BB(0x008c2c43);
    /* 008c2c43: mov eax, dword ptr [0x8f812c] */ r_eax = R32((u32)(0x8f812cu));
    /* 008c2c48: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c4a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c4c: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008c2c4f: mov dl, byte ptr [eax + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008c2c52: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c53: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c55: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008c2c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c59: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c5c: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008c2c5f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c61: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c2c63: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c64: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c65: push 0xa37fb4 */ { u32 v = 0xa37fb4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c6a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2c6fu); f_008c94e0();
    /* 008c2c6f: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c2c75: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2c78: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c7c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c7d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2c82u); f_008c3720();
    /* 008c2c82: mov eax, dword ptr [0xaeaa28] */ r_eax = R32((u32)(0xaeaa28u));
    /* 008c2c87: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2c8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2c8c: je 0x8c2cd0 */ if (fZ) goto L_008c2cd0;
L_008c2c8e:; BB(0x008c2c8e);
    /* 008c2c8e: mov eax, dword ptr [0x8f81f0] */ r_eax = R32((u32)(0x8f81f0u));
    /* 008c2c93: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2c95: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2c97: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 008c2c9a: mov dl, byte ptr [eax + 3] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x3u))) & 0xffu);
    /* 008c2c9d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2c9e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2ca0: mov cl, byte ptr [eax + 2] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x2u))) & 0xffu);
    /* 008c2ca3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ca4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ca5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2ca7: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008c2caa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2cac: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008c2cae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2caf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cb0: push 0xa37f90 */ { u32 v = 0xa37f90u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cb5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2cbau); f_008c94e0();
    /* 008c2cba: mov edx, dword ptr [0xaeaa28] */ r_edx = R32((u32)(0xaeaa28u));
    /* 008c2cc0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2cc3: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008c2cc6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cc8: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2ccdu); f_008c3720();
    /* 008c2ccd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008c2cd0:; BB(0x008c2cd0);
    /* 008c2cd0: push 0xa37f88 */ { u32 v = 0xa37f88u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cd5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2cdau); f_008c94e0();
    /* 008c2cda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2cdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2cdf: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2ce4u); f_008c3720();
    /* 008c2ce4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ce6: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ceb: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c2cf0u); f_008cb285();
    /* 008c2cf0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2cf3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2cf6: jne 0x8c2dac */ if (!fZ) goto L_008c2dac;
L_008c2cfc:; BB(0x008c2cfc);
    /* 008c2cfc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2cff: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d04: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d09: call 0x8c39d0 */ r_esp -= 4; W32(r_esp, 0x8c2d0eu); f_008c39d0();
    /* 008c2d0e: mov edi, 0xa384f8 */ r_edi = 0xa384f8u;
    /* 008c2d13: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d18: push 0xa37f78 */ { u32 v = 0xa37f78u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d1d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d1f: not ecx */ r_ecx = ~r_ecx;
    /* 008c2d21: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d23: mov esi, edi */ r_esi = r_edi;
    /* 008c2d25: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2d27: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2d2c: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d2f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d31: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d33: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d34: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2d37: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2d39: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d3b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d3e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2d40: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2d45u); f_008c94e0();
    /* 008c2d45: mov edi, eax */ r_edi = r_eax;
    /* 008c2d47: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d4c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d4e: not ecx */ r_ecx = ~r_ecx;
    /* 008c2d50: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d53: mov esi, edi */ r_esi = r_edi;
    /* 008c2d55: mov edx, ecx */ r_edx = r_ecx;
    /* 008c2d57: mov edi, 0xaea5c0 */ r_edi = 0xaea5c0u;
    /* 008c2d5c: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2d5f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2d61: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d63: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c2d64: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c2d67: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2d69: mov ecx, edx */ r_ecx = r_edx;
    /* 008c2d6b: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d70: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2d73: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c2d75: call 0x8cb285 */ r_esp -= 4; W32(r_esp, 0x8c2d7au); f_008cb285();
    /* 008c2d7a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2d7d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2d80: jne 0x8c2dac */ if (!fZ) goto L_008c2dac;
L_008c2d82:; BB(0x008c2d82);
    /* 008c2d82: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d87: push 0xa37f5c */ { u32 v = 0xa37f5cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d8c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2d91u); f_008c94e0();
    /* 008c2d91: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2d96: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2d9bu); f_008c3720();
    /* 008c2d9b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2d9e: mov eax, 0x9a */ r_eax = 0x9au;
    /* 008c2da3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2da4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2da5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2da6: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2da8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2da9: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2dac:; BB(0x008c2dac);
    /* 008c2dac: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c2daf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2db1: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2db6: lea ecx, [esi + 0x2ac8] */ r_ecx = (u32)(r_esi+0x2ac8u);
    /* 008c2dbc: call 0x8c7a90 */ r_esp -= 4; W32(r_esp, 0x8c2dc1u); f_008c7a90();
    /* 008c2dc1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c2dc3: jne 0x8c2e01 */ if (!fZ) goto L_008c2e01;
L_008c2dc5:; BB(0x008c2dc5);
    /* 008c2dc5: mov edi, dword ptr [0x8f817c] */ r_edi = R32((u32)(0x8f817cu));
    /* 008c2dcb: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2dcdu); call_ind(t); }
    /* 008c2dcd: mov esi, dword ptr [esi + 0x2b0c] */ r_esi = R32((u32)(r_esi+0x2b0cu));
    /* 008c2dd3: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2dd8: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8c2ddau); call_ind(t); }
    /* 008c2dda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ddb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ddc: push 0xa38214 */ { u32 v = 0xa38214u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2de1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2de6u); f_008c94e0();
    /* 008c2de6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2de9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2dea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2deb: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2df0u); f_008c3720();
    /* 008c2df0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2df3: mov eax, 0x7a */ r_eax = 0x7au;
    /* 008c2df8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2df9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2dfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2dfb: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2dfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2dfe: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2e01:; BB(0x008c2e01);
    /* 008c2e01: push 0xa37f54 */ { u32 v = 0xa37f54u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e06: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2e0bu); f_008c94e0();
    /* 008c2e0b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e10: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2e15u); f_008c3720();
    /* 008c2e15: lea edi, [esi + 0x1468] */ r_edi = (u32)(r_esi+0x1468u);
    /* 008c2e1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e1e: mov ecx, edi */ r_ecx = r_edi;
    /* 008c2e20: call 0x8c8660 */ r_esp -= 4; W32(r_esp, 0x8c2e25u); f_008c8660();
    /* 008c2e25: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c2e27: jne 0x8c2e4e */ if (!fZ) goto L_008c2e4e;
L_008c2e29:; BB(0x008c2e29);
    /* 008c2e29: push 0xa37f40 */ { u32 v = 0xa37f40u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e2e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2e33u); f_008c94e0();
    /* 008c2e33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e38: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2e3du); f_008c3720();
    /* 008c2e3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2e40: mov eax, 0xa0 */ r_eax = 0xa0u;
    /* 008c2e45: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2e46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2e47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2e48: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2e4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2e4b: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2e4e:; BB(0x008c2e4e);
    /* 008c2e4e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008c2e50: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e53: call dword ptr [0x8f8308] */ { u32 t = R32((u32)(0x8f8308u)); r_esp -= 4; W32(r_esp, 0x8c2e59u); call_ind(t); }
    /* 008c2e59: push 0xa37f38 */ { u32 v = 0xa37f38u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e5e: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2e63u); f_008c94e0();
    /* 008c2e63: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e68: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2e6du); f_008c3720();
    /* 008c2e6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2e70: call dword ptr [0x8f8184] */ { u32 t = R32((u32)(0x8f8184u)); r_esp -= 4; W32(r_esp, 0x8c2e76u); call_ind(t); }
    /* 008c2e76: mov ecx, dword ptr [0xa37b28] */ r_ecx = R32((u32)(0xa37b28u));
    /* 008c2e7c: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008c2e7f: mov edi, eax */ r_edi = r_eax;
    /* 008c2e81: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c2e87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e88: mov ecx, dword ptr [esi + 0x2b88] */ r_ecx = R32((u32)(r_esi+0x2b88u));
    /* 008c2e8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e90: lea eax, [esi + 0x2b14] */ r_eax = (u32)(r_esi+0x2b14u);
    /* 008c2e96: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2e98: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c2e9e: and edi, 0xfff00000 */ {  u32 a = r_edi; u32 b = 0xfff00000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008c2ea4: call 0x8c82b0 */ r_esp -= 4; W32(r_esp, 0x8c2ea9u); f_008c82b0();
    /* 008c2ea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2eaa: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c2eb0: call 0x8c82a0 */ r_esp -= 4; W32(r_esp, 0x8c2eb5u); f_008c82a0();
    /* 008c2eb5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2eb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2eb8: mov dl, byte ptr [esi + 0x2b7d] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0x2b7du))) & 0xffu);
    /* 008c2ebe: mov eax, dword ptr [esi + 0x2b10] */ r_eax = R32((u32)(r_esi+0x2b10u));
    /* 008c2ec4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ec5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ec6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ec7: push 0xa37f10 */ { u32 v = 0xa37f10u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2ecc: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2ed1u); f_008c94e0();
    /* 008c2ed1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ed4: lea ecx, [ebp - 0x638] */ r_ecx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2eda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2edb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2edc: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c2ee2u); call_ind(t); }
    /* 008c2ee2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008c2ee4: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 008c2ee9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2eeb: lea edi, [ebp - 0x128] */ r_edi = (u32)(r_ebp+0xfffffed8u);
    /* 008c2ef1: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 008c2ef4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2ef7: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c2ef9: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c2eff: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 008c2f02: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 008c2f05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f06: mov dword ptr [ebp - 0x128], 0x44 */ W32((u32)(r_ebp+0xfffffed8u), 0x44u);
    /* 008c2f10: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 008c2f13: call dword ptr [0x8f8304] */ { u32 t = R32((u32)(0x8f8304u)); r_esp -= 4; W32(r_esp, 0x8c2f19u); call_ind(t); }
    /* 008c2f19: lea ecx, [ebp - 0x638] */ r_ecx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2f1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f20: call 0x8c93d0 */ r_esp -= 4; W32(r_esp, 0x8c2f25u); f_008c93d0();
    /* 008c2f25: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008c2f28: lea edi, [ebp - 0x638] */ r_edi = (u32)(r_ebp+0xfffff9c8u);
    /* 008c2f2e: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2f31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2f33: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c2f36: lea edx, [ebp - 0x1740] */ r_edx = (u32)(r_ebp+0xffffe8c0u);
    /* 008c2f3c: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c2f3e: not ecx */ r_ecx = ~r_ecx;
    /* 008c2f40: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2f41: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 008c2f44: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 008c2f47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008c2f49: jle 0x8c2f78 */ if ((fZ||fS!=fO)) goto L_008c2f78;
L_008c2f4b:; BB(0x008c2f4b);
    /* 008c2f4b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008c2f4e: mov edi, edx */ r_edi = r_edx;
L_008c2f50:; BB(0x008c2f50);
    /* 008c2f50: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008c2f53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c2f55: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008c2f57: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008c2f58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f59: push 0xa38158 */ { u32 v = 0xa38158u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f5e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f5f: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008c2f62: call dword ptr [0x8f834c] */ { u32 t = R32((u32)(0x8f834cu)); r_esp -= 4; W32(r_esp, 0x8c2f68u); call_ind(t); }
    /* 008c2f68: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008c2f6a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008c2f6d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2f70: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008c2f71: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008c2f74: jne 0x8c2f50 */ if (!fZ) goto L_008c2f50;
L_008c2f76:; BB(0x008c2f76);
    /* 008c2f76: jmp 0x8c2f7b */ goto L_008c2f7b;
L_008c2f78:; BB(0x008c2f78);
    /* 008c2f78: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
L_008c2f7b:; BB(0x008c2f7b);
    /* 008c2f7b: push 0xa37f08 */ { u32 v = 0xa37f08u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f80: mov byte ptr [edi], 0 */ W8((u32)(r_edi), 0x0u);
    /* 008c2f83: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2f88u); f_008c94e0();
    /* 008c2f88: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c2f8d: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c2f92u); f_008c3720();
    /* 008c2f92: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c2f97: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2f9c: je 0x8c30b7 */ if (fZ) goto L_008c30b7;
L_008c2fa2:; BB(0x008c2fa2);
    /* 008c2fa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fa4: mov ecx, esi */ r_ecx = r_esi;
    /* 008c2fa6: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c2fabu); f_008c4320();
    /* 008c2fab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2fad: jne 0x8c300f */ if (!fZ) goto L_008c300f;
L_008c2faf:; BB(0x008c2faf);
    /* 008c2faf: push 0xa382e4 */ { u32 v = 0xa382e4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fb4: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c2fb9u); f_008c94e0();
    /* 008c2fb9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c2fbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fbd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fbf: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fc4: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c2fcau); call_ind(t); }
    /* 008c2fca: mov edi, eax */ r_edi = r_eax;
    /* 008c2fcc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2fce: je 0x8c300f */ if (fZ) goto L_008c300f;
L_008c2fd0:; BB(0x008c2fd0);
    /* 008c2fd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fd3: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c2fd9u); call_ind(t); }
    /* 008c2fd9: cmp eax, 0x102 */ {  u32 a = r_eax; u32 b = 0x102u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c2fde: je 0x8c3008 */ if (fZ) goto L_008c3008;
L_008c2fe0:; BB(0x008c2fe0);
    /* 008c2fe0: push 0x251c */ { u32 v = 0x251cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c2fe5: mov ecx, esi */ r_ecx = r_esi;
    /* 008c2fe7: call 0x8c4320 */ r_esp -= 4; W32(r_esp, 0x8c2fecu); f_008c4320();
    /* 008c2fec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c2fee: jne 0x8c2ffe */ if (!fZ) goto L_008c2ffe;
L_008c2ff0:; BB(0x008c2ff0);
    /* 008c2ff0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c2ff1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c2ff2: mov eax, 0x6e */ r_eax = 0x6eu;
    /* 008c2ff7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c2ff8: mov esp, ebp */ r_esp = r_ebp;
    /* 008c2ffa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c2ffb: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c2ffe:; BB(0x008c2ffe);
    /* 008c2ffe: mov dword ptr [0xaea6fc], 0 */ W32((u32)(0xaea6fcu), 0x0u);
L_008c3008:; BB(0x008c3008);
    /* 008c3008: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3009: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c300fu); call_ind(t); }
L_008c300f:; BB(0x008c300f);
    /* 008c300f: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c3014: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3016: je 0x8c30b7 */ if (fZ) goto L_008c30b7;
L_008c301c:; BB(0x008c301c);
    /* 008c301c: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c3022: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3025: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c3027: lea esi, [ebp - 0x428] */ r_esi = (u32)(r_ebp+0xfffffbd8u);
    /* 008c302d: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c302f: not ecx */ r_ecx = ~r_ecx;
    /* 008c3031: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3032: mov eax, 0x7eb */ r_eax = 0x7ebu;
    /* 008c3037: mov edx, ecx */ r_edx = r_ecx;
    /* 008c3039: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c303c: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 008c3042: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c3048: mov ecx, dword ptr [ecx + 0x2b10] */ r_ecx = R32((u32)(r_ecx+0x2b10u));
    /* 008c304e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c3050: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 008c3056: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3059: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c305c: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008c305f: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3061: not ecx */ r_ecx = ~r_ecx;
    /* 008c3063: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3065: mov dword ptr [ebp - 0x434], edx */ W32((u32)(r_ebp+0xfffffbccu), r_edx);
    /* 008c306b: mov eax, ecx */ r_eax = r_ecx;
    /* 008c306d: mov esi, edi */ r_esi = r_edi;
    /* 008c306f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008c3072: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3073: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c3076: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c3078: mov ecx, eax */ r_ecx = r_eax;
    /* 008c307a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c307d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c307f: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
L_008c3085:; BB(0x008c3085);
    /* 008c3085: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3086: call 0x8c6d30 */ r_esp -= 4; W32(r_esp, 0x8c308bu); f_008c6d30();
    /* 008c308b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c308e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3090: jne 0x8c31b4 */ if (!fZ) goto L_008c31b4;
L_008c3096:; BB(0x008c3096);
    /* 008c3096: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c309c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c309eu); call_ind(t); }
    /* 008c309e: lea edx, [ebp - 0x638] */ r_edx = (u32)(r_ebp+0xfffff9c8u);
    /* 008c30a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c30a5: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c30aa: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c30acu); call_ind(t); }
    /* 008c30ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c30ad: push 0xa37ee4 */ { u32 v = 0xa37ee4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c30b2: jmp 0x8c3177 */ goto L_008c3177;
L_008c30b7:; BB(0x008c30b7);
    /* 008c30b7: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c30bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c30be: je 0x8c312e */ if (fZ) goto L_008c312e;
L_008c30c0:; BB(0x008c30c0);
    /* 008c30c0: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c30c6: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c30c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008c30cb: lea esi, [ebp - 0x428] */ r_esi = (u32)(r_ebp+0xfffffbd8u);
    /* 008c30d1: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c30d3: not ecx */ r_ecx = ~r_ecx;
    /* 008c30d5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008c30d6: mov eax, 0x7eb */ r_eax = 0x7ebu;
    /* 008c30db: mov edx, ecx */ r_edx = r_ecx;
    /* 008c30dd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008c30e0: mov dword ptr [ebp - 0x430], eax */ W32((u32)(r_ebp+0xfffffbd0u), r_eax);
    /* 008c30e6: lea edi, [ebp - 0x1740] */ r_edi = (u32)(r_ebp+0xffffe8c0u);
    /* 008c30ec: mov ecx, dword ptr [ecx + 0x2b10] */ r_ecx = R32((u32)(r_ecx+0x2b10u));
    /* 008c30f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008c30f4: mov dword ptr [ebp - 0x42c], ecx */ W32((u32)(r_ebp+0xfffffbd4u), r_ecx);
    /* 008c30fa: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008c30fd: add edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3100: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 008c3103: repne scasb al, byte ptr es:[edi] */ while (r_ecx) { { u32 a = r_eax & 0xffu; u32 b = R8(r_edi); u32 r = (a - b) & 0xffu; r_edi += rt_df ? -1 : 1; fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); } r_ecx--; if (fZ) break; }
    /* 008c3105: not ecx */ r_ecx = ~r_ecx;
    /* 008c3107: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008c3109: mov dword ptr [ebp - 0x434], edx */ W32((u32)(r_ebp+0xfffffbccu), r_edx);
    /* 008c310f: mov eax, ecx */ r_eax = r_ecx;
    /* 008c3111: mov esi, edi */ r_esi = r_edi;
    /* 008c3113: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008c3116: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3117: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008c311a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008c311c: mov ecx, eax */ r_ecx = r_eax;
    /* 008c311e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008c3121: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 008c3123: lea ecx, [ebp - 0x434] */ r_ecx = (u32)(r_ebp+0xfffffbccu);
    /* 008c3129: jmp 0x8c3085 */ goto L_008c3085;
L_008c312e:; BB(0x008c312e);
    /* 008c312e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 008c3131: lea ecx, [ebp - 0x128] */ r_ecx = (u32)(r_ebp+0xfffffed8u);
    /* 008c3137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3138: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3139: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c313b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c313d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c313f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3141: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3143: lea edx, [ebp - 0x1740] */ r_edx = (u32)(r_ebp+0xffffe8c0u);
    /* 008c3149: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c314b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c314c: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3151: call dword ptr [0x8f8310] */ { u32 t = R32((u32)(0x8f8310u)); r_esp -= 4; W32(r_esp, 0x8c3157u); call_ind(t); }
    /* 008c3157: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3159: jne 0x8c3197 */ if (!fZ) goto L_008c3197;
L_008c315b:; BB(0x008c315b);
    /* 008c315b: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c3161: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c3163u); call_ind(t); }
    /* 008c3163: lea eax, [ebp - 0x638] */ r_eax = (u32)(r_ebp+0xfffff9c8u);
    /* 008c3169: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c316a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c316cu); call_ind(t); }
    /* 008c316c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c316d: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
L_008c3172:; BB(0x008c3172);
    /* 008c3172: push 0xa37ebc */ { u32 v = 0xa37ebcu; r_esp -= 4; W32(r_esp, v); }
L_008c3177:; BB(0x008c3177);
    /* 008c3177: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c317cu); f_008c94e0();
    /* 008c317c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c317f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3180: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3181: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3186u); f_008c3720();
    /* 008c3186: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3189: mov eax, 0xaa */ r_eax = 0xaau;
    /* 008c318e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c318f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3190: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3191: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3193: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3194: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c3197:; BB(0x008c3197);
    /* 008c3197: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c319a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c319b: push 0xa37eb0 */ { u32 v = 0xa37eb0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c31a0: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c31a5u); f_008c94e0();
    /* 008c31a5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c31a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c31a9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c31aa: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c31afu); f_008c3720();
    /* 008c31af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c31b2: jmp 0x8c31b7 */ goto L_008c31b7;
L_008c31b4:; BB(0x008c31b4);
    /* 008c31b4: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
L_008c31b7:; BB(0x008c31b7);
    /* 008c31b7: mov eax, dword ptr [0xaea6e0] */ r_eax = R32((u32)(0xaea6e0u));
    /* 008c31bc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008c31be: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31c0: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31c5: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31c7:; BB(0x008c31c7);
    /* 008c31c7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008c31ca: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31cc: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31d1: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31d3:; BB(0x008c31d3);
    /* 008c31d3: mov eax, dword ptr [0xaea700] */ r_eax = R32((u32)(0xaea700u));
    /* 008c31d8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31da: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31df: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31e1:; BB(0x008c31e1);
    /* 008c31e1: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c31e6: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c31e8: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
    /* 008c31ed: jne 0x8c320f */ if (!fZ) goto L_008c320f;
L_008c31ef:; BB(0x008c31ef);
    /* 008c31ef: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c31f2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c31f3: push 0xa37e9c */ { u32 v = 0xa37e9cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c31f8: push 0xaea5c0 */ { u32 v = 0xaea5c0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c31fd: call 0x8c5810 */ r_esp -= 4; W32(r_esp, 0x8c3202u); f_008c5810();
    /* 008c3202: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3205: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008c320a: mov dword ptr [0xaea6f8], eax */ W32((u32)(0xaea6f8u), r_eax);
L_008c320f:; BB(0x008c320f);
    /* 008c320f: push 0xa37e94 */ { u32 v = 0xa37e94u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3214: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3219u); f_008c94e0();
    /* 008c3219: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c321c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c321d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c321e: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3223u); f_008c3720();
    /* 008c3223: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3226: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c322c: call 0x8c87b0 */ r_esp -= 4; W32(r_esp, 0x8c3231u); f_008c87b0();
    /* 008c3231: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3233: jne 0x8c3265 */ if (!fZ) goto L_008c3265;
L_008c3235:; BB(0x008c3235);
    /* 008c3235: mov esi, dword ptr [0x8f817c] */ r_esi = R32((u32)(0x8f817cu));
    /* 008c323b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c323du); call_ind(t); }
    /* 008c323d: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8c323fu); call_ind(t); }
    /* 008c323f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3240: push 0xa37e80 */ { u32 v = 0xa37e80u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3245: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c324au); f_008c94e0();
    /* 008c324a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c324d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c324e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c324f: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3254u); f_008c3720();
    /* 008c3254: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3257: mov eax, 0xa0 */ r_eax = 0xa0u;
    /* 008c325c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c325d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c325e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c325f: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3261: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3262: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c3265:; BB(0x008c3265);
    /* 008c3265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3266: push 0xa37e50 */ { u32 v = 0xa37e50u; r_esp -= 4; W32(r_esp, v); }
    /* 008c326b: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3270u); f_008c94e0();
    /* 008c3270: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3274: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3275: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c327au); f_008c3720();
    /* 008c327a: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c327f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3282: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3284: jne 0x8c331e */ if (!fZ) goto L_008c331e;
L_008c328a:; BB(0x008c328a);
    /* 008c328a: cmp dword ptr [0xaea700], edi */ {  u32 a = R32((u32)(0xaea700u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3290: jne 0x8c331e */ if (!fZ) goto L_008c331e;
L_008c3296:; BB(0x008c3296);
    /* 008c3296: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008c3299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c329a: call dword ptr [0x8f8300] */ { u32 t = R32((u32)(0x8f8300u)); r_esp -= 4; W32(r_esp, 0x8c32a0u); call_ind(t); }
    /* 008c32a0: mov ecx, dword ptr [esi + 0x2b88] */ r_ecx = R32((u32)(r_esi+0x2b88u));
    /* 008c32a6: mov eax, dword ptr [0xaea6dc] */ r_eax = R32((u32)(0xaea6dcu));
    /* 008c32ab: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c32ae: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 008c32b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c32b5: lea ecx, [ebp - 0x88] */ r_ecx = (u32)(r_ebp+0xffffff78u);
    /* 008c32bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c32bc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c32bd: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008c32bf: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 008c32c5: call dword ptr [0x8f82e8] */ { u32 t = R32((u32)(0x8f82e8u)); r_esp -= 4; W32(r_esp, 0x8c32cbu); call_ind(t); }
    /* 008c32cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c32cd: je 0x8c3377 */ if (fZ) goto L_008c3377;
L_008c32d3:; BB(0x008c32d3);
    /* 008c32d3: push 0xa37e3c */ { u32 v = 0xa37e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c32d8: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c32ddu); f_008c94e0();
    /* 008c32dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c32e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c32e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c32e2: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c32e7: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c32edu); call_ind(t); }
    /* 008c32ed: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c32ef: je 0x8c3335 */ if (fZ) goto L_008c3335;
L_008c32f1:; BB(0x008c32f1);
    /* 008c32f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c32f2: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c32f8u); call_ind(t); }
    /* 008c32f8: mov edx, dword ptr [0xaea6dc] */ r_edx = R32((u32)(0xaea6dcu));
    /* 008c32fe: mov eax, dword ptr [esi + 0x2b88] */ r_eax = R32((u32)(r_esi+0x2b88u));
    /* 008c3304: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3306: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c330cu); call_ind(t); }
    /* 008c330c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c330e: je 0x8c3377 */ if (fZ) goto L_008c3377;
L_008c3310:; BB(0x008c3310);
    /* 008c3310: mov ecx, dword ptr [0xaea6dc] */ r_ecx = R32((u32)(0xaea6dcu));
    /* 008c3316: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3317: push 0xa37e20 */ { u32 v = 0xa37e20u; r_esp -= 4; W32(r_esp, v); }
    /* 008c331c: jmp 0x8c3341 */ goto L_008c3341;
L_008c331e:; BB(0x008c331e);
    /* 008c331e: mov eax, dword ptr [0xaea6dc] */ r_eax = R32((u32)(0xaea6dcu));
    /* 008c3323: mov ecx, dword ptr [esi + 0x2b88] */ r_ecx = R32((u32)(r_esi+0x2b88u));
    /* 008c3329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c332a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c332b: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c3331u); call_ind(t); }
    /* 008c3331: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3333: je 0x8c3377 */ if (fZ) goto L_008c3377;
L_008c3335:; BB(0x008c3335);
    /* 008c3335: mov edx, dword ptr [0xaea6dc] */ r_edx = R32((u32)(0xaea6dcu));
    /* 008c333b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008c333c: push 0xa37e08 */ { u32 v = 0xa37e08u; r_esp -= 4; W32(r_esp, v); }
L_008c3341:; BB(0x008c3341);
    /* 008c3341: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3346u); f_008c94e0();
    /* 008c3346: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3349: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c334a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c334b: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3350u); f_008c3720();
    /* 008c3350: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3353: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3355: push 0x40000c28 */ { u32 v = 0x40000c28u; r_esp -= 4; W32(r_esp, v); }
    /* 008c335a: push 0x1cbd0900 */ { u32 v = 0x1cbd0900u; r_esp -= 4; W32(r_esp, v); }
    /* 008c335f: push 0x2ee6 */ { u32 v = 0x2ee6u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3364: call 0x8c12d0 */ r_esp -= 4; W32(r_esp, 0x8c3369u); f_008c12d0();
    /* 008c3369: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c336a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c336b: mov eax, 0x72 */ r_eax = 0x72u;
    /* 008c3370: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3371: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3373: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3374: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c3377:; BB(0x008c3377);
    /* 008c3377: push 0xa37df8 */ { u32 v = 0xa37df8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c337c: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3381u); f_008c94e0();
    /* 008c3381: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3385: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3386: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c338bu); f_008c3720();
    /* 008c338b: mov eax, dword ptr [esi + 0x2b8c] */ r_eax = R32((u32)(r_esi+0x2b8cu));
    /* 008c3391: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3396: call dword ptr [0x8f8128] */ { u32 t = R32((u32)(0x8f8128u)); r_esp -= 4; W32(r_esp, 0x8c339cu); call_ind(t); }
    /* 008c339c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c339e: je 0x8c33c5 */ if (fZ) goto L_008c33c5;
L_008c33a0:; BB(0x008c33a0);
    /* 008c33a0: push 0xa37de0 */ { u32 v = 0xa37de0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c33a5: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c33aau); f_008c94e0();
    /* 008c33aa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c33ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c33af: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c33b4u); f_008c3720();
    /* 008c33b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c33b7: mov eax, 0x72 */ r_eax = 0x72u;
    /* 008c33bc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c33bd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c33be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c33bf: mov esp, ebp */ r_esp = r_ebp;
    /* 008c33c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c33c2: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c33c5:; BB(0x008c33c5);
    /* 008c33c5: push 0xa37e3c */ { u32 v = 0xa37e3cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c33ca: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c33cfu); f_008c94e0();
    /* 008c33cf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c33d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33d3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c33d4: push 0x100000 */ { u32 v = 0x100000u; r_esp -= 4; W32(r_esp, v); }
    /* 008c33d9: call dword ptr [0x8f8314] */ { u32 t = R32((u32)(0x8f8314u)); r_esp -= 4; W32(r_esp, 0x8c33dfu); call_ind(t); }
    /* 008c33df: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c33e1: je 0x8c3403 */ if (fZ) goto L_008c3403;
L_008c33e3:; BB(0x008c33e3);
    /* 008c33e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33e4: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x8c33eau); call_ind(t); }
    /* 008c33ea: push 0xa37dd4 */ { u32 v = 0xa37dd4u; r_esp -= 4; W32(r_esp, v); }
    /* 008c33ef: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c33f4u); f_008c94e0();
    /* 008c33f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c33f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c33f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c33f9: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c33feu); f_008c3720();
    /* 008c33fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3401: jmp 0x8c3415 */ goto L_008c3415;
L_008c3403:; BB(0x008c3403);
    /* 008c3403: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008c3406: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008c3409: mov dword ptr [0xaea80c], ecx */ W32((u32)(0xaea80cu), r_ecx);
    /* 008c340f: mov dword ptr [0xaea810], edx */ W32((u32)(0xaea810u), r_edx);
L_008c3415:; BB(0x008c3415);
    /* 008c3415: push 0xa37dcc */ { u32 v = 0xa37dccu; r_esp -= 4; W32(r_esp, v); }
    /* 008c341a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c341fu); f_008c94e0();
    /* 008c341f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3423: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3424: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3429u); f_008c3720();
    /* 008c3429: mov eax, dword ptr [0xaea6fc] */ r_eax = R32((u32)(0xaea6fcu));
    /* 008c342e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3431: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c3433: je 0x8c3458 */ if (fZ) goto L_008c3458;
L_008c3435:; BB(0x008c3435);
    /* 008c3435: push 0xa37dc0 */ { u32 v = 0xa37dc0u; r_esp -= 4; W32(r_esp, v); }
    /* 008c343a: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c343fu); f_008c94e0();
    /* 008c343f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3442: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3443: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3444: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3449u); f_008c3720();
    /* 008c3449: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c344c: mov dword ptr [0xaea80c], edi */ W32((u32)(0xaea80cu), r_edi);
    /* 008c3452: mov dword ptr [0xaea810], edi */ W32((u32)(0xaea810u), r_edi);
L_008c3458:; BB(0x008c3458);
    /* 008c3458: cmp dword ptr [0xaea6f8], edi */ {  u32 a = R32((u32)(0xaea6f8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008c345e: jne 0x8c346e */ if (!fZ) goto L_008c346e;
L_008c3460:; BB(0x008c3460);
    /* 008c3460: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3461: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3462: mov eax, 0x7a */ r_eax = 0x7au;
    /* 008c3467: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3468: mov esp, ebp */ r_esp = r_ebp;
    /* 008c346a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c346b: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c346e:; BB(0x008c346e);
    /* 008c346e: call 0x8c6cc0 */ r_esp -= 4; W32(r_esp, 0x8c3473u); f_008c6cc0();
    /* 008c3473: call 0x8c52e0 */ r_esp -= 4; W32(r_esp, 0x8c3478u); f_008c52e0();
    /* 008c3478: mov edi, eax */ r_edi = r_eax;
    /* 008c347a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c347c: jne 0x8c3491 */ if (!fZ) goto L_008c3491;
L_008c347e:; BB(0x008c347e);
    /* 008c347e: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3480: lea eax, [esi + 0x1468] */ r_eax = (u32)(r_esi+0x1468u);
    /* 008c3486: push 0x62d */ { u32 v = 0x62du; r_esp -= 4; W32(r_esp, v); }
    /* 008c348b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c348c: call 0x8c4490 */ r_esp -= 4; W32(r_esp, 0x8c3491u); f_008c4490();
L_008c3491:; BB(0x008c3491);
    /* 008c3491: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c3492: push 0xa37da8 */ { u32 v = 0xa37da8u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3497: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c349cu); f_008c94e0();
    /* 008c349c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c349f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c34a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c34a1: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c34a6u); f_008c3720();
    /* 008c34a6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c34a9: call 0x8c5620 */ r_esp -= 4; W32(r_esp, 0x8c34aeu); f_008c5620();
    /* 008c34ae: mov edi, eax */ r_edi = r_eax;
    /* 008c34b0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008c34b2: jne 0x8c34cb */ if (!fZ) goto L_008c34cb;
L_008c34b4:; BB(0x008c34b4);
    /* 008c34b4: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008c34b6: push 0x630 */ { u32 v = 0x630u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34bb: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34c0: lea ecx, [esi + 0x1468] */ r_ecx = (u32)(r_esi+0x1468u);
    /* 008c34c6: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c34cbu); f_008c8550();
L_008c34cb:; BB(0x008c34cb);
    /* 008c34cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008c34cc: push 0xa37d90 */ { u32 v = 0xa37d90u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34d1: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c34d6u); f_008c94e0();
    /* 008c34d6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c34d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c34da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c34db: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c34e0u); f_008c3720();
    /* 008c34e0: mov al, byte ptr [esi + 0x22] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x22u))) & 0xffu);
    /* 008c34e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c34e6: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c34e8: je 0x8c351a */ if (fZ) goto L_008c351a;
L_008c34ea:; BB(0x008c34ea);
    /* 008c34ea: mov ecx, esi */ r_ecx = r_esi;
    /* 008c34ec: call 0x8c3c90 */ r_esp -= 4; W32(r_esp, 0x8c34f1u); f_008c3c90();
    /* 008c34f1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008c34f3: jne 0x8c351a */ if (!fZ) goto L_008c351a;
L_008c34f5:; BB(0x008c34f5);
    /* 008c34f5: push 0xa37d74 */ { u32 v = 0xa37d74u; r_esp -= 4; W32(r_esp, v); }
    /* 008c34fa: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c34ffu); f_008c94e0();
    /* 008c34ff: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3502: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3503: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3504: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3509u); f_008c3720();
    /* 008c3509: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c350c: mov eax, 0xdc */ r_eax = 0xdcu;
    /* 008c3511: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c3512: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c3513: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3514: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3516: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3517: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
L_008c351a:; BB(0x008c351a);
    /* 008c351a: push 0xa37d6c */ { u32 v = 0xa37d6cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c351f: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c3524u); f_008c94e0();
    /* 008c3524: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3527: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c3528: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3529: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c352eu); f_008c3720();
    /* 008c352e: mov eax, dword ptr [esi + 0x2b10] */ r_eax = R32((u32)(r_esi+0x2b10u));
    /* 008c3534: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c3537: lea edi, [esi + 0x1468] */ r_edi = (u32)(r_esi+0x1468u);
    /* 008c353d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c353e: push 0x611 */ { u32 v = 0x611u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3543: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3548: mov ecx, edi */ r_ecx = r_edi;
    /* 008c354a: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c354fu); f_008c8550();
    /* 008c354f: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008c3552: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3553: push 0x617 */ { u32 v = 0x617u; r_esp -= 4; W32(r_esp, v); }
    /* 008c3558: push 0x8b1 */ { u32 v = 0x8b1u; r_esp -= 4; W32(r_esp, v); }
    /* 008c355d: mov ecx, edi */ r_ecx = r_edi;
    /* 008c355f: call 0x8c8550 */ r_esp -= 4; W32(r_esp, 0x8c3564u); f_008c8550();
    /* 008c3564: mov ecx, esi */ r_ecx = r_esi;
    /* 008c3566: call 0x8c4e60 */ r_esp -= 4; W32(r_esp, 0x8c356bu); f_008c4e60();
    /* 008c356b: push 0xa37d4c */ { u32 v = 0xa37d4cu; r_esp -= 4; W32(r_esp, v); }
    /* 008c3570: mov byte ptr [esi + 0x2ba4], al */ W8((u32)(r_esi+0x2ba4u), (u8)r_eax);
    /* 008c3576: call 0x8c94e0 */ r_esp -= 4; W32(r_esp, 0x8c357bu); f_008c94e0();
    /* 008c357b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008c357e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008c357f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008c3580: call 0x8c3720 */ r_esp -= 4; W32(r_esp, 0x8c3585u); f_008c3720();
    /* 008c3585: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008c3588: mov byte ptr [esi], 1 */ W8((u32)(r_esi), 0x1u);
    /* 008c358b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008c358c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008c358d: mov eax, 0x755 */ r_eax = 0x755u;
    /* 008c3592: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008c3593: mov esp, ebp */ r_esp = r_ebp;
    /* 008c3595: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008c3596: ret 4 */ FN_RET(0x008c1c02); r_esp += 8; return;
}

