#include "protos.h"

void f_006b101c(void) /* sub_6B101C */
{
    FN_ENTER(0x006b101c);
    /* 006b101c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b1020: call dword ptr [eax*8 + 0x9ccc04] */ { u32 t = R32((u32)(r_eax*8+0x9ccc04u)); r_esp -= 4; W32(r_esp, 0x6b1027u); call_ind(t); }
    /* 006b1027: ret  */ FN_RET(0x006b101c); r_esp += 4; return;
}

void f_006b1028(void) /* sub_6B1028 */
{
    FN_ENTER(0x006b1028);
    /* 006b1028: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b102c: call dword ptr [eax*8 + 0x9ccc04] */ { u32 t = R32((u32)(r_eax*8+0x9ccc04u)); r_esp -= 4; W32(r_esp, 0x6b1033u); call_ind(t); }
    /* 006b1033: mov dword ptr [0xa954c8], 0 */ W32((u32)(0xa954c8u), 0x0u);
    /* 006b103d: ret  */ FN_RET(0x006b1028); r_esp += 4; return;
}

void f_006b1040(void) /* sub_6B1040 */
{
    FN_ENTER(0x006b1040);
    /* 006b1040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1041: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b1045: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b104c: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1051u); f_006b4948();
    /* 006b1051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1052: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b1054u); call_ind(t); }
    /* 006b1054: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1056: ret  */ FN_RET(0x006b1040); r_esp += 4; return;
}

void f_006b1058(void) /* sub_6B1058 */
{
    FN_ENTER(0x006b1058);
    /* 006b1058: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1059: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b105a: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b105e: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b1065: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b106au); f_006b4948();
    /* 006b106a: mov ebx, eax */ r_ebx = r_eax;
    /* 006b106c: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1071u); f_006b4948();
    /* 006b1071: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1072: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1073: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b1075u); call_ind(t); }
    /* 006b1075: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1078: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1079: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b107a: ret  */ FN_RET(0x006b1058); r_esp += 4; return;
}

void f_006b107c(void) /* sub_6B107C */
{
    FN_ENTER(0x006b107c);
    /* 006b107c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b107d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b107e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b1082: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b1089: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b108eu); f_006b4948();
    /* 006b108e: mov ebx, eax */ r_ebx = r_eax;
    /* 006b1090: call 0x6b10a0 */ r_esp -= 4; W32(r_esp, 0x6b1095u); f_006b10a0();
    /* 006b1095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1096: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1097: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b1099u); call_ind(t); }
    /* 006b1099: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b109c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b109d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b109e: ret  */ FN_RET(0x006b107c); r_esp += 4; return;
}

void f_006b10a0(void) /* sub_6B10A0 */
{
    FN_ENTER(0x006b10a0);
    /* 006b10a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b10a1: mov eax, dword ptr [0xa954a8] */ r_eax = R32((u32)(0xa954a8u));
    /* 006b10a6: add eax, dword ptr [0xa954a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa954a4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b10ac: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b10ae: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b10b1: mov edx, dword ptr [0xa954a4] */ r_edx = R32((u32)(0xa954a4u));
    /* 006b10b7: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b10ba: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b10bd: mov dword ptr [0xa954a4], edx */ W32((u32)(0xa954a4u), r_edx);
    /* 006b10c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b10c4: ret  */ FN_RET(0x006b10a0); r_esp += 4; return;
}

void f_006b10c8(void) /* sub_6B10C8 */
{
    FN_ENTER(0x006b10c8);
    /* 006b10c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b10c9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b10cd: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b10d4: call 0x6b10a0 */ r_esp -= 4; W32(r_esp, 0x6b10d9u); f_006b10a0();
    /* 006b10d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b10da: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b10dcu); call_ind(t); }
    /* 006b10dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b10dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b10de: ret  */ FN_RET(0x006b10c8); r_esp += 4; return;
}

void f_006b10e0(void) /* sub_6B10E0 */
{
    FN_ENTER(0x006b10e0);
    /* 006b10e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b10e1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b10e5: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b10ec: call 0x6b10f8 */ r_esp -= 4; W32(r_esp, 0x6b10f1u); f_006b10f8();
    /* 006b10f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b10f2: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b10f4u); call_ind(t); }
    /* 006b10f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b10f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b10f6: ret  */ FN_RET(0x006b10e0); r_esp += 4; return;
}

void f_006b10f8(void) /* sub_6B10F8 */
{
    FN_ENTER(0x006b10f8);
    /* 006b10f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b10f9: mov eax, dword ptr [0xa954a8] */ r_eax = R32((u32)(0xa954a8u));
    /* 006b10fe: add eax, dword ptr [0xa954a4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa954a4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b1104: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006b1107: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 006b110b: mov edx, dword ptr [0xa954a4] */ r_edx = R32((u32)(0xa954a4u));
    /* 006b1111: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b1115: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1118: mov dword ptr [0xa954a4], edx */ W32((u32)(0xa954a4u), r_edx);
    /* 006b111e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b111f: ret  */ FN_RET(0x006b10f8); r_esp += 4; return;
}

void f_006b1120(void) /* sub_6B1120 */
{
    FN_ENTER(0x006b1120);
    /* 006b1120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1121: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1122: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b1126: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b112d: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1132u); f_006b4948();
    /* 006b1132: mov ebx, eax */ r_ebx = r_eax;
    /* 006b1134: call 0x6b10f8 */ r_esp -= 4; W32(r_esp, 0x6b1139u); f_006b10f8();
    /* 006b1139: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b113a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b113b: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b113du); call_ind(t); }
    /* 006b113d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1140: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1141: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1142: ret  */ FN_RET(0x006b1120); r_esp += 4; return;
}

void f_006b1144(void) /* sub_6B1144 */
{
    FN_ENTER(0x006b1144);
    /* 006b1144: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1145: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1146: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1147: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b114b: mov esi, dword ptr [eax*8 + 0x9ccc04] */ r_esi = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b1152: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1157u); f_006b4948();
    /* 006b1157: mov ebp, eax */ r_ebp = r_eax;
    /* 006b1159: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b115eu); f_006b4948();
    /* 006b115e: mov ebx, eax */ r_ebx = r_eax;
    /* 006b1160: call 0x6b10f8 */ r_esp -= 4; W32(r_esp, 0x6b1165u); f_006b10f8();
    /* 006b1165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1166: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1167: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1168: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x6b116au); call_ind(t); }
    /* 006b116a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b116d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b116e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b116f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1170: ret  */ FN_RET(0x006b1144); r_esp += 4; return;
}

void f_006b1174(void) /* sub_6B1174 */
{
    FN_ENTER(0x006b1174);
    /* 006b1174: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1175: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1176: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1177: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b117b: mov esi, dword ptr [eax*8 + 0x9ccc04] */ r_esi = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b1182: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1187u); f_006b4948();
    /* 006b1187: mov ebp, eax */ r_ebp = r_eax;
    /* 006b1189: call 0x6b10a0 */ r_esp -= 4; W32(r_esp, 0x6b118eu); f_006b10a0();
    /* 006b118e: mov ebx, eax */ r_ebx = r_eax;
    /* 006b1190: call 0x6b10f8 */ r_esp -= 4; W32(r_esp, 0x6b1195u); f_006b10f8();
    /* 006b1195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1196: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1197: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1198: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x6b119au); call_ind(t); }
    /* 006b119a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b119d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b119e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b119f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b11a0: ret  */ FN_RET(0x006b1174); r_esp += 4; return;
}

void f_006b11a4(void) /* sub_6B11A4 */
{
    FN_ENTER(0x006b11a4);
    /* 006b11a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b11a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b11a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b11a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b11a8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b11ab: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 006b11af: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b11b6: call 0x6b10f8 */ r_esp -= 4; W32(r_esp, 0x6b11bbu); f_006b10f8();
    /* 006b11bb: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 006b11be: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b11c3u); f_006b4948();
    /* 006b11c3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b11c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006b11c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b11ca: jle 0x6b1256 */ if ((fZ||fS!=fO)) goto L_006b1256;
L_006b11d0:; BB(0x006b11d0);
    /* 006b11d0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b11d3: jl 0x6b1266 */ if ((fS!=fO)) goto L_006b1266;
L_006b11d9:; BB(0x006b11d9);
    /* 006b11d9: mov edi, dword ptr [0xa954a4] */ r_edi = R32((u32)(0xa954a4u));
    /* 006b11df: mov ecx, dword ptr [0xa954a8] */ r_ecx = R32((u32)(0xa954a8u));
    /* 006b11e5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006b11e9: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 006b11ed: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006b11f1: lea edx, [eax - 6] */ r_edx = (u32)(r_eax+0xfffffffau);
    /* 006b11f4: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
L_006b11f8:; BB(0x006b11f8);
    /* 006b11f8: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 006b11fc: movzx eax, byte ptr [ecx + edi] */ r_eax = (u32)R8((u32)(r_ecx+r_edi));
    /* 006b1200: mov byte ptr [esp + esi], al */ W8((u32)(r_esp+r_esi), (u8)r_eax);
    /* 006b1203: movzx edx, byte ptr [ecx + edi + 1] */ r_edx = (u32)R8((u32)(r_ecx+r_edi+0x1u));
    /* 006b1208: mov byte ptr [esp + esi + 1], dl */ W8((u32)(r_esp+r_esi+0x1u), (u8)r_edx);
    /* 006b120c: movzx ebx, byte ptr [ecx + edi + 2] */ r_ebx = (u32)R8((u32)(r_ecx+r_edi+0x2u));
    /* 006b1211: mov byte ptr [esp + esi + 2], bl */ W8((u32)(r_esp+r_esi+0x2u), (u8)r_ebx);
    /* 006b1215: movzx eax, byte ptr [ecx + edi + 3] */ r_eax = (u32)R8((u32)(r_ecx+r_edi+0x3u));
    /* 006b121a: mov byte ptr [esp + esi + 3], al */ W8((u32)(r_esp+r_esi+0x3u), (u8)r_eax);
    /* 006b121e: movzx eax, byte ptr [ecx + edi + 4] */ r_eax = (u32)R8((u32)(r_ecx+r_edi+0x4u));
    /* 006b1223: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b1226: mov byte ptr [esp + esi + 4], al */ W8((u32)(r_esp+r_esi+0x4u), (u8)r_eax);
    /* 006b122a: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b122d: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b122f: jle 0x6b11f8 */ if ((fZ||fS!=fO)) goto L_006b11f8;
L_006b1231:; BB(0x006b1231);
    /* 006b1231: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006b1235: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006b1239: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_006b123d:; BB(0x006b123d);
    /* 006b123d: mov edx, edi */ r_edx = r_edi;
    /* 006b123f: movzx edx, byte ptr [ecx + edx] */ r_edx = (u32)R8((u32)(r_ecx+r_edx));
    /* 006b1243: mov byte ptr [esp + esi], dl */ W8((u32)(r_esp+r_esi), (u8)r_edx);
    /* 006b1246: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b1249: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b124c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b124e: jl 0x6b123d */ if ((fS!=fO)) goto L_006b123d;
L_006b1250:; BB(0x006b1250);
    /* 006b1250: mov dword ptr [0xa954a4], edi */ W32((u32)(0xa954a4u), r_edi);
L_006b1256:; BB(0x006b1256);
    /* 006b1256: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b1259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b125a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b125b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b125c: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b125eu); call_ind(t); }
    /* 006b125e: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1261: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1262: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1263: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1264: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1265: ret  */ FN_RET(0x006b11a4); r_esp += 4; return;
L_006b1266:; BB(0x006b1266);
    /* 006b1266: mov edi, dword ptr [0xa954a4] */ r_edi = R32((u32)(0xa954a4u));
    /* 006b126c: mov ecx, dword ptr [0xa954a8] */ r_ecx = R32((u32)(0xa954a8u));
    /* 006b1272: jmp 0x6b123d */ goto L_006b123d;
}

void f_006b1274(void) /* sub_6B1274 */
{
    FN_ENTER(0x006b1274);
    /* 006b1274: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1275: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b1276: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b1279: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 006b127d: mov edi, dword ptr [eax*8 + 0x9ccc04] */ r_edi = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b1284: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1289u); f_006b4948();
    /* 006b1289: mov ebp, eax */ r_ebp = r_eax;
    /* 006b128b: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1290u); f_006b4948();
    /* 006b1290: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b1293: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b1295: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b1297: jle 0x6b12d3 */ if ((fZ||fS!=fO)) goto L_006b12d3;
L_006b1299:; BB(0x006b1299);
    /* 006b1299: mov edx, dword ptr [0xa954a4] */ r_edx = R32((u32)(0xa954a4u));
    /* 006b129f: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
L_006b12a3:; BB(0x006b12a3);
    /* 006b12a3: add edx, dword ptr [0xa954a8] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa954a8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b12a9: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 006b12ac: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 006b12b0: mov edx, dword ptr [0xa954a4] */ r_edx = R32((u32)(0xa954a4u));
    /* 006b12b6: movzx esi, word ptr [esp] */ r_esi = (u32)R16((u32)(r_esp));
    /* 006b12ba: mov word ptr [esp + ecx*2 + 4], si */ W16((u32)(r_esp+r_ecx*2+0x4u), (u16)r_esi);
    /* 006b12bf: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b12c2: mov dword ptr [0xa954a4], edx */ W32((u32)(0xa954a4u), r_edx);
    /* 006b12c8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b12cb: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b12cd: jl 0x6b12a3 */ if ((fS!=fO)) goto L_006b12a3;
L_006b12cf:; BB(0x006b12cf);
    /* 006b12cf: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_006b12d3:; BB(0x006b12d3);
    /* 006b12d3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b12d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b12d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b12d9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b12da: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x6b12dcu); call_ind(t); }
    /* 006b12dc: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b12df: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b12e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b12e1: ret  */ FN_RET(0x006b1274); r_esp += 4; return;
}

void f_006b12e4(void) /* sub_6B12E4 */
{
    FN_ENTER(0x006b12e4);
    /* 006b12e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b12e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b12e6: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006b12ea: mov eax, 0xa94b80 */ r_eax = 0xa94b80u;
    /* 006b12ef: mov esi, dword ptr [edx*8 + 0x9ccc04] */ r_esi = R32((u32)(r_edx*8+0x9ccc04u));
    /* 006b12f6: call 0x6b1308 */ r_esp -= 4; W32(r_esp, 0x6b12fbu); f_006b1308();
    /* 006b12fb: push 0xa94b80 */ { u32 v = 0xa94b80u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1300: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x6b1302u); call_ind(t); }
    /* 006b1302: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1305: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1306: ret  */ FN_RET(0x006b12e4); r_esp += 4; return;
}

void f_006b1308(void) /* sub_6B1308 */
{
    FN_ENTER(0x006b1308);
    /* 006b1308: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1309: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b130a: sub esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b1310: mov edi, eax */ r_edi = r_eax;
    /* 006b1312: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b1318: add edx, dword ptr [0xa954a4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa954a4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b131e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b131f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x6b1324u); f_00858009();
    /* 006b1324: mov ebp, eax */ r_ebp = r_eax;
    /* 006b1326: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b132c: add edx, dword ptr [0xa954a4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa954a4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b1332: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1333: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1334: call 0x6b96e4 */ r_esp -= 4; W32(r_esp, 0x6b1339u); f_006b96e4();
    /* 006b1339: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b133c: mov ecx, dword ptr [0xa9550c] */ r_ecx = R32((u32)(0xa9550cu));
    /* 006b1342: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
L_006b1345:; BB(0x006b1345);
    /* 006b1345: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1347: jne 0x6b1377 */ if (!fZ) goto L_006b1377;
L_006b1349:; BB(0x006b1349);
    /* 006b1349: mov edi, dword ptr [0xa95510] */ r_edi = R32((u32)(0xa95510u));
    /* 006b134f: lea edx, [edi + 2] */ r_edx = (u32)(r_edi+0x2u);
    /* 006b1352: mov dword ptr [0xa95510], edx */ W32((u32)(0xa95510u), r_edx);
    /* 006b1358: mov edx, dword ptr [0xa954a4] */ r_edx = R32((u32)(0xa954a4u));
    /* 006b135e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b1360: mov word ptr [edi], cx */ W16((u32)(r_edi), (u16)r_ecx);
    /* 006b1363: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006b1365: lea eax, [edx + ebp + 2] */ r_eax = (u32)(r_edx+r_ebp+0x2u);
    /* 006b1369: mov dword ptr [0xa954a4], eax */ W32((u32)(0xa954a4u), r_eax);
    /* 006b136e: add esp, 0xec */ {  u32 a = r_esp; u32 b = 0xecu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1374: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b1375: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1376: ret  */ FN_RET(0x006b1308); r_esp += 4; return;
L_006b1377:; BB(0x006b1377);
    /* 006b1377: mov edx, ecx */ r_edx = r_ecx;
    /* 006b1379: movzx edi, word ptr [edx] */ r_edi = (u32)R16((u32)(r_edx));
    /* 006b137c: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b137f: mov dword ptr [0xa9550c], ecx */ W32((u32)(0xa9550cu), r_ecx);
    /* 006b1385: cmp edi, 0x3c */ {  u32 a = r_edi; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1388: jne 0x6b14ac */ if (!fZ) goto L_006b14ac;
L_006b138e:; BB(0x006b138e);
    /* 006b138e: mov edx, 0x969680 */ r_edx = 0x969680u;
    /* 006b1393: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006b1395: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 006b1398: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b139c: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006b139f: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 006b13a3: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 006b13a7: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 006b13aa: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 006b13ae: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 006b13b1: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 006b13b5: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 006b13b8: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006b13bc: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 006b13bf: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006b13c3: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006b13c6: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 006b13ca: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006b13cd: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 006b13d1: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006b13d4: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 006b13d8: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 006b13db: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 006b13df: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 006b13e2: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 006b13e6: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006b13e9: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006b13ed: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006b13f0: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 006b13f4: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 006b13f7: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 006b13fb: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006b13fe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006b1402: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 006b1405: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 006b1409: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 006b140c: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 006b1410: mov ecx, dword ptr [edx + 0x48] */ r_ecx = R32((u32)(r_edx+0x48u));
    /* 006b1413: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 006b1417: mov ecx, dword ptr [edx + 0x4c] */ r_ecx = R32((u32)(r_edx+0x4cu));
    /* 006b141a: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 006b141e: mov ecx, dword ptr [edx + 0x50] */ r_ecx = R32((u32)(r_edx+0x50u));
    /* 006b1421: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 006b1425: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 006b1428: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 006b142c: mov ecx, dword ptr [edx + 0x58] */ r_ecx = R32((u32)(r_edx+0x58u));
    /* 006b142f: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 006b1433: mov ecx, dword ptr [edx + 0x5c] */ r_ecx = R32((u32)(r_edx+0x5cu));
    /* 006b1436: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 006b143a: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006b143d: mov edx, dword ptr [edx + 0x64] */ r_edx = R32((u32)(r_edx+0x64u));
    /* 006b1440: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 006b1444: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 006b1448: mov ecx, dword ptr [0xa9550c] */ r_ecx = R32((u32)(0xa9550cu));
    /* 006b144e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b1450: jmp 0x6b145a */ goto L_006b145a;
L_006b1452:; BB(0x006b1452);
    /* 006b1452: mov word ptr [esp + edx*2 + 0x6c], di */ W16((u32)(r_esp+r_edx*2+0x6cu), (u16)r_edi);
    /* 006b1457: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006b145a:; BB(0x006b145a);
    /* 006b145a: cmp edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006b1460: jae 0x6b1542 */ if (!fC) goto L_006b1542;
L_006b1466:; BB(0x006b1466);
    /* 006b1466: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b1469: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b146b: je 0x6b1345 */ if (fZ) goto L_006b1345;
L_006b1471:; BB(0x006b1471);
    /* 006b1471: mov edi, ecx */ r_edi = r_ecx;
    /* 006b1473: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 006b1476: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b1479: mov dword ptr [0xa9550c], ecx */ W32((u32)(0xa9550cu), r_ecx);
    /* 006b147f: cmp edi, 0x3e */ {  u32 a = r_edi; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1482: jne 0x6b1452 */ if (!fZ) goto L_006b1452;
L_006b1484:; BB(0x006b1484);
    /* 006b1484: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 006b1488: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b148a: mov word ptr [esp + edx*2 + 0x6c], cx */ W16((u32)(r_esp+r_edx*2+0x6cu), (u16)r_ecx);
    /* 006b148f: call 0x6b154c */ r_esp -= 4; W32(r_esp, 0x6b1494u); f_006b154c();
    /* 006b1494: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1497: je 0x6b14cf */ if (fZ) goto L_006b14cf;
L_006b1499:; BB(0x006b1499);
    /* 006b1499: call 0x6b1648 */ r_esp -= 4; W32(r_esp, 0x6b149eu); f_006b1648();
    /* 006b149e: mov ecx, dword ptr [0xa9550c] */ r_ecx = R32((u32)(0xa9550cu));
    /* 006b14a4: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b14a7: jmp 0x6b1345 */ goto L_006b1345;
L_006b14ac:; BB(0x006b14ac);
    /* 006b14ac: cmp edi, 0x3e */ {  u32 a = r_edi; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b14af: je 0x6b14ca */ if (fZ) goto L_006b14ca;
L_006b14b1:; BB(0x006b14b1);
    /* 006b14b1: mov eax, dword ptr [0xa95510] */ r_eax = R32((u32)(0xa95510u));
    /* 006b14b6: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006b14b9: mov dword ptr [0xa95510], edx */ W32((u32)(0xa95510u), r_edx);
    /* 006b14bf: mov word ptr [eax], di */ W16((u32)(r_eax), (u16)r_edi);
    /* 006b14c2: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b14c5: jmp 0x6b1345 */ goto L_006b1345;
L_006b14ca:; BB(0x006b14ca);
    /* 006b14ca: jmp 0x6b14ca */ goto L_006b14ca;
L_006b14cf:; BB(0x006b14cf);
    /* 006b14cf: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 006b14d3: call 0x6b1580 */ r_esp -= 4; W32(r_esp, 0x6b14d8u); f_006b1580();
    /* 006b14d8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b14db: je 0x6b14f0 */ if (fZ) goto L_006b14f0;
L_006b14dd:; BB(0x006b14dd);
    /* 006b14dd: call 0x6b1610 */ r_esp -= 4; W32(r_esp, 0x6b14e2u); f_006b1610();
    /* 006b14e2: mov ecx, dword ptr [0xa9550c] */ r_ecx = R32((u32)(0xa9550cu));
    /* 006b14e8: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b14eb: jmp 0x6b1345 */ goto L_006b1345;
L_006b14f0:; BB(0x006b14f0);
    /* 006b14f0: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 006b14f4: call 0x6b15b4 */ r_esp -= 4; W32(r_esp, 0x6b14f9u); f_006b15b4();
    /* 006b14f9: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b14fc: je 0x6b1511 */ if (fZ) goto L_006b1511;
L_006b14fe:; BB(0x006b14fe);
    /* 006b14fe: call 0x6b15e4 */ r_esp -= 4; W32(r_esp, 0x6b1503u); f_006b15e4();
    /* 006b1503: mov ecx, dword ptr [0xa9550c] */ r_ecx = R32((u32)(0xa9550cu));
    /* 006b1509: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b150c: jmp 0x6b1345 */ goto L_006b1345;
L_006b1511:; BB(0x006b1511);
    /* 006b1511: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006b1513:; BB(0x006b1513);
    /* 006b1513: lea edx, [esp + 0x6c] */ r_edx = (u32)(r_esp+0x6cu);
    /* 006b1517: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1518: push dword ptr [esp + edi*8 + 8] */ { u32 v = R32((u32)(r_esp+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b151c: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6b1521u); f_00858c4d();
    /* 006b1521: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1526: jne 0x6b152c */ if (!fZ) goto L_006b152c;
L_006b1528:; BB(0x006b1528);
    /* 006b1528: call dword ptr [esp + edi*8 + 8] */ { u32 t = R32((u32)(r_esp+r_edi*8+0x8u)); r_esp -= 4; W32(r_esp, 0x6b152cu); call_ind(t); }
L_006b152c:; BB(0x006b152c);
    /* 006b152c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b152f: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006b1532: jb 0x6b1513 */ if (fC) goto L_006b1513;
L_006b1534:; BB(0x006b1534);
    /* 006b1534: mov ecx, dword ptr [0xa9550c] */ r_ecx = R32((u32)(0xa9550cu));
    /* 006b153a: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b153d: jmp 0x6b1345 */ goto L_006b1345;
L_006b1542:; BB(0x006b1542);
    /* 006b1542: movzx edi, word ptr [ecx] */ r_edi = (u32)R16((u32)(r_ecx));
    /* 006b1545: jmp 0x6b1345 */ goto L_006b1345;
}

void f_006b1540(void)
{
    FN_ENTER(0x006b1540);
}

void f_006b154c(void) /* sub_6B154C */
{
    FN_ENTER(0x006b154c);
    /* 006b154c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b154d: mov dword ptr [esp], 0xffffffff */ W32((u32)(r_esp), 0xffffffffu);
    /* 006b1554: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b1557: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1558: push 0x969a0c */ { u32 v = 0x969a0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b155d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b155e: call 0x858431 */ r_esp -= 4; W32(r_esp, 0x6b1563u); f_00858431();
    /* 006b1563: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1566: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b1569: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b156e: jge 0x6b1576 */ if ((fS==fO)) goto L_006b1576;
L_006b1570:; BB(0x006b1570);
    /* 006b1570: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1572: jl 0x6b1576 */ if ((fS!=fO)) goto L_006b1576;
L_006b1574:; BB(0x006b1574);
    /* 006b1574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1575: ret  */ FN_RET(0x006b154c); r_esp += 4; return;
L_006b1576:; BB(0x006b1576);
    /* 006b1576: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006b157b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b157c: ret  */ FN_RET(0x006b154c); r_esp += 4; return;
}

void f_006b1580(void) /* sub_6B1580 */
{
    FN_ENTER(0x006b1580);
    /* 006b1580: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1581: mov dword ptr [esp], 0xffffffff */ W32((u32)(r_esp), 0xffffffffu);
    /* 006b1588: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b158b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b158c: push 0x969a14 */ { u32 v = 0x969a14u; r_esp -= 4; W32(r_esp, v); }
    /* 006b1591: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1592: call 0x858431 */ r_esp -= 4; W32(r_esp, 0x6b1597u); f_00858431();
    /* 006b1597: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b159a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b159d: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b15a2: jge 0x6b15aa */ if ((fS==fO)) goto L_006b15aa;
L_006b15a4:; BB(0x006b15a4);
    /* 006b15a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b15a6: jl 0x6b15aa */ if ((fS!=fO)) goto L_006b15aa;
L_006b15a8:; BB(0x006b15a8);
    /* 006b15a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b15a9: ret  */ FN_RET(0x006b1580); r_esp += 4; return;
L_006b15aa:; BB(0x006b15aa);
    /* 006b15aa: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006b15af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b15b0: ret  */ FN_RET(0x006b1580); r_esp += 4; return;
}

void f_006b15b4(void) /* sub_6B15B4 */
{
    FN_ENTER(0x006b15b4);
    /* 006b15b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b15b5: mov dword ptr [esp], 0xffffffff */ W32((u32)(r_esp), 0xffffffffu);
    /* 006b15bc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b15bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b15c0: push 0x969a1c */ { u32 v = 0x969a1cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b15c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b15c6: call 0x858431 */ r_esp -= 4; W32(r_esp, 0x6b15cbu); f_00858431();
    /* 006b15cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b15ce: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 006b15d1: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b15d4: jg 0x6b15dc */ if ((!fZ&&fS==fO)) goto L_006b15dc;
L_006b15d6:; BB(0x006b15d6);
    /* 006b15d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b15d8: jl 0x6b15dc */ if ((fS!=fO)) goto L_006b15dc;
L_006b15da:; BB(0x006b15da);
    /* 006b15da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b15db: ret  */ FN_RET(0x006b15b4); r_esp += 4; return;
L_006b15dc:; BB(0x006b15dc);
    /* 006b15dc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006b15e1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b15e2: ret  */ FN_RET(0x006b15b4); r_esp += 4; return;
}

void f_006b15e4(void) /* sub_6B15E4 */
{
    FN_ENTER(0x006b15e4);
    /* 006b15e4: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b15ea: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b15ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b15ef: push 0x969a30 */ { u32 v = 0x969a30u; r_esp -= 4; W32(r_esp, v); }
    /* 006b15f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b15f5: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6b15fau); f_00857e29();
    /* 006b15fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b15fd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b1601: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b1606u); f_006b94cc();
    /* 006b1606: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b160c: ret  */ FN_RET(0x006b15e4); r_esp += 4; return;
}

void f_006b1610(void) /* sub_6B1610 */
{
    FN_ENTER(0x006b1610);
    /* 006b1610: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b1616: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b161c: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 006b161f: fstp qword ptr [esp + 8] */ W_F64((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b1623: mov dword ptr [esp + 4], 0x969a04 */ W32((u32)(r_esp+0x4u), 0x969a04u);
    /* 006b162b: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 006b162f: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006b1632: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6b1637u); f_00857e29();
    /* 006b1637: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006b163b: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b1640u); f_006b94cc();
    /* 006b1640: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1646: ret  */ FN_RET(0x006b1610); r_esp += 4; return;
}

void f_006b1648(void) /* sub_6B1648 */
{
    FN_ENTER(0x006b1648);
    /* 006b1648: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b164e: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1654: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006b1658: push dword ptr [edx + eax*4] */ { u32 v = R32((u32)(r_edx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 006b165b: push 0x9699fc */ { u32 v = 0x9699fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006b1660: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1661: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6b1666u); f_00857e29();
    /* 006b1666: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1669: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006b166d: call 0x6b94cc */ r_esp -= 4; W32(r_esp, 0x6b1672u); f_006b94cc();
    /* 006b1672: add esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1678: ret  */ FN_RET(0x006b1648); r_esp += 4; return;
}

void f_006b167c(void) /* sub_6B167C */
{
    FN_ENTER(0x006b167c);
    /* 006b167c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b167d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b167e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b1682: mov ebp, dword ptr [eax*8 + 0x9ccc04] */ r_ebp = R32((u32)(r_eax*8+0x9ccc04u));
    /* 006b1689: call 0x6b10f8 */ r_esp -= 4; W32(r_esp, 0x6b168eu); f_006b10f8();
    /* 006b168e: mov ebx, eax */ r_ebx = r_eax;
    /* 006b1690: call 0x6b4948 */ r_esp -= 4; W32(r_esp, 0x6b1695u); f_006b4948();
    /* 006b1695: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1696: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1697: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x6b1699u); call_ind(t); }
    /* 006b1699: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b169c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b169d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b169e: ret  */ FN_RET(0x006b167c); r_esp += 4; return;
}

void f_006b16a0(void) /* sub_6B16A0 */
{
    FN_ENTER(0x006b16a0);
    /* 006b16a0: mov eax, dword ptr [0xa954b8] */ r_eax = R32((u32)(0xa954b8u));
    /* 006b16a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b16a7: jle 0x6b16b4 */ if ((fZ||fS!=fO)) goto L_006b16b4;
L_006b16a9:; BB(0x006b16a9);
    /* 006b16a9: call 0x6b16c0 */ r_esp -= 4; W32(r_esp, 0x6b16aeu); f_006b16c0();
    /* 006b16ae: mov dword ptr [0xa954a4], eax */ W32((u32)(0xa954a4u), r_eax);
    /* 006b16b3: ret  */ FN_RET(0x006b16a0); r_esp += 4; return;
L_006b16b4:; BB(0x006b16b4);
    /* 006b16b4: mov dword ptr [0xa954a0], 2 */ W32((u32)(0xa954a0u), 0x2u);
    /* 006b16be: ret  */ FN_RET(0x006b16a0); r_esp += 4; return;
}

void f_006b16c0(void) /* sub_6B16C0 */
{
    FN_ENTER(0x006b16c0);
    /* 006b16c0: mov eax, dword ptr [0xa954b8] */ r_eax = R32((u32)(0xa954b8u));
    /* 006b16c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b16c7: jle 0x6b16da */ if ((fZ||fS!=fO)) goto L_006b16da;
L_006b16c9:; BB(0x006b16c9);
    /* 006b16c9: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 006b16cc: mov eax, dword ptr [eax*4 + 0xa9537c] */ r_eax = R32((u32)(r_eax*4+0xa9537cu));
    /* 006b16d3: mov dword ptr [0xa954b8], edx */ W32((u32)(0xa954b8u), r_edx);
    /* 006b16d9: ret  */ FN_RET(0x006b16c0); r_esp += 4; return;
L_006b16da:; BB(0x006b16da);
    /* 006b16da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b16dc: ret  */ FN_RET(0x006b16c0); r_esp += 4; return;
}

void f_006b16e0(void) /* sub_6B16E0 */
{
    FN_ENTER(0x006b16e0);
    /* 006b16e0: mov dword ptr [0xa954a0], 1 */ W32((u32)(0xa954a0u), 0x1u);
    /* 006b16ea: ret  */ FN_RET(0x006b16e0); r_esp += 4; return;
}

void f_006b16ec(void) /* sub_6B16EC */
{
    FN_ENTER(0x006b16ec);
    /* 006b16ec: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b16f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b16f2: call 0x6bc76c */ r_esp -= 4; W32(r_esp, 0x6b16f7u); f_006bc76c();
    /* 006b16f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b16f8: ret  */ FN_RET(0x006b16ec); r_esp += 4; return;
}

void f_006b16fc(void)
{
    FN_ENTER(0x006b16fc);
    /* 006b16fc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b1701: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1702: call 0x6bc86c */ r_esp -= 4; W32(r_esp, 0x6b1707u); f_006bc86c();
    /* 006b1707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1708: ret  */ FN_RET(0x006b16fc); r_esp += 4; return;
}

void f_006b170c(void) /* sub_6B170C */
{
    FN_ENTER(0x006b170c);
    /* 006b170c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1711: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1716: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b171b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b171e: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b1721: ret  */ FN_RET(0x006b170c); r_esp += 4; return;
}

void f_006b1724(void) /* sub_6B1724 */
{
    FN_ENTER(0x006b1724);
    /* 006b1724: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1729: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b172d: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1733: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b1736: ret  */ FN_RET(0x006b1724); r_esp += 4; return;
}

void f_006b1738(void) /* sub_6B1738 */
{
    FN_ENTER(0x006b1738);
    /* 006b1738: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b173d: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1742: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1748: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b174b: ret  */ FN_RET(0x006b1738); r_esp += 4; return;
}

void f_006b174c(void) /* sub_6B174C */
{
    FN_ENTER(0x006b174c);
    /* 006b174c: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1751: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006b1756: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b175c: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b175f: ret  */ FN_RET(0x006b174c); r_esp += 4; return;
}

void f_006b1760(void) /* sub_6B1760 */
{
    FN_ENTER(0x006b1760);
    /* 006b1760: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1765: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b176a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b176f: lea ecx, [ecx + ecx] */ r_ecx = (u32)(r_ecx+r_ecx);
    /* 006b1772: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b1774: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1776: mov dword ptr [eax + edx*4], ecx */ W32((u32)(r_eax+r_edx*4), r_ecx);
    /* 006b1779: ret  */ FN_RET(0x006b1760); r_esp += 4; return;
}

void f_006b177c(void) /* sub_6B177C */
{
    FN_ENTER(0x006b177c);
    /* 006b177c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1781: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 006b1786: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006b1789: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b178b: add ecx, dword ptr [0xa954ac] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa954acu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b1791: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1797: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 006b179a: ret  */ FN_RET(0x006b177c); r_esp += 4; return;
}

void f_006b179c(void) /* sub_6B179C */
{
    FN_ENTER(0x006b179c);
    /* 006b179c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b17a1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b17a6: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b17ad: ret  */ FN_RET(0x006b179c); r_esp += 4; return;
}

void f_006b17b0(void) /* sub_6B17B0 */
{
    FN_ENTER(0x006b17b0);
    /* 006b17b0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b17b5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b17ba: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b17c1: ret  */ FN_RET(0x006b17b0); r_esp += 4; return;
}

void f_006b17c4(void) /* sub_6B17C4 */
{
    FN_ENTER(0x006b17c4);
    /* 006b17c4: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b17c9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b17cf: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b17d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b17d4: jne 0x6b17de */ if (!fZ) goto L_006b17de;
L_006b17d6:; BB(0x006b17d6);
    /* 006b17d6: mov dword ptr [edx + ecx*4], 1 */ W32((u32)(r_edx+r_ecx*4), 0x1u);
    /* 006b17dd: ret  */ FN_RET(0x006b17c4); r_esp += 4; return;
L_006b17de:; BB(0x006b17de);
    /* 006b17de: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
    /* 006b17e5: ret  */ FN_RET(0x006b17c4); r_esp += 4; return;
}

void f_006b17c6(void)
{
    FN_ENTER(0x006b17c6);
    /* 006b17c6: dec esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b17c7: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006b17c9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b17cf: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b17d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b17d4: jne 0x6b17de */ if (!fZ) goto L_006b17de;
L_006b17d6:; BB(0x006b17d6);
    /* 006b17d6: mov dword ptr [edx + ecx*4], 1 */ W32((u32)(r_edx+r_ecx*4), 0x1u);
    /* 006b17dd: ret  */ FN_RET(0x006b17c6); r_esp += 4; return;
L_006b17de:; BB(0x006b17de);
    /* 006b17de: mov dword ptr [edx + ecx*4], 0 */ W32((u32)(r_edx+r_ecx*4), 0x0u);
    /* 006b17e5: ret  */ FN_RET(0x006b17c6); r_esp += 4; return;
}

void f_006b17e8(void) /* sub_6B17E8 */
{
    FN_ENTER(0x006b17e8);
    /* 006b17e8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b17ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b17ee: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6b17f3u); f_006bb100();
    /* 006b17f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b17f4: ret  */ FN_RET(0x006b17e8); r_esp += 4; return;
}

void f_006b17f8(void) /* sub_6B17F8 */
{
    FN_ENTER(0x006b17f8);
    /* 006b17f8: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b17fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b17fe: call 0x6bb1a8 */ r_esp -= 4; W32(r_esp, 0x6b1803u); f_006bb1a8();
    /* 006b1803: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1804: ret  */ FN_RET(0x006b17f8); r_esp += 4; return;
}

void f_006b1808(void) /* sub_6B1808 */
{
    FN_ENTER(0x006b1808);
    /* 006b1808: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1809: movzx esi, word ptr [esp + 8] */ r_esi = (u32)R16((u32)(r_esp+0x8u));
    /* 006b180e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b180f: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6b1814u); f_006bb254();
    /* 006b1814: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1815: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1817: je 0x6b1822 */ if (fZ) goto L_006b1822;
L_006b1819:; BB(0x006b1819);
    /* 006b1819: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b181a: call 0x6bb1a8 */ r_esp -= 4; W32(r_esp, 0x6b181fu); f_006bb1a8();
    /* 006b181f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1820: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1821: ret  */ FN_RET(0x006b1808); r_esp += 4; return;
L_006b1822:; BB(0x006b1822);
    /* 006b1822: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1823: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6b1828u); f_006bb100();
    /* 006b1828: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1829: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b182a: ret  */ FN_RET(0x006b1808); r_esp += 4; return;
}

void f_006b182c(void) /* sub_6B182C */
{
    FN_ENTER(0x006b182c);
    /* 006b182c: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b1831: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1836: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b183c: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 006b183f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1841: je 0x6b184b */ if (fZ) goto L_006b184b;
L_006b1843:; BB(0x006b1843);
    /* 006b1843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b1844: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6b1849u); f_006bb100();
    /* 006b1849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b184a: ret  */ FN_RET(0x006b182c); r_esp += 4; return;
L_006b184b:; BB(0x006b184b);
    /* 006b184b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b184c: call 0x6bb1a8 */ r_esp -= 4; W32(r_esp, 0x6b1851u); f_006bb1a8();
    /* 006b1851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1852: ret  */ FN_RET(0x006b182c); r_esp += 4; return;
}

void f_006b1854(void) /* sub_6B1854 */
{
    FN_ENTER(0x006b1854);
    /* 006b1854: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b1859: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b185a: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6b185fu); f_006bb254();
    /* 006b185f: mov edx, eax */ r_edx = r_eax;
    /* 006b1861: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b1864: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1869: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b186b: je 0x6b187a */ if (fZ) goto L_006b187a;
L_006b186d:; BB(0x006b186d);
    /* 006b186d: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1872: mov dword ptr [eax + edx*4], 1 */ W32((u32)(r_eax+r_edx*4), 0x1u);
    /* 006b1879: ret  */ FN_RET(0x006b1854); r_esp += 4; return;
L_006b187a:; BB(0x006b187a);
    /* 006b187a: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b187f: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 006b1886: ret  */ FN_RET(0x006b1854); r_esp += 4; return;
}

void f_006b1888(void) /* sub_6B1888 */
{
    FN_ENTER(0x006b1888);
    /* 006b1888: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b188d: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1892: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1897: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b189a: add dword ptr [eax + edx*4], ecx */ { u32 ad = (u32)(r_eax+r_edx*4);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b189d: ret  */ FN_RET(0x006b1888); r_esp += 4; return;
}

void f_006b18a0(void) /* sub_6B18A0 */
{
    FN_ENTER(0x006b18a0);
    /* 006b18a0: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b18a5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b18a9: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b18af: add dword ptr [edx + ecx*4], eax */ { u32 ad = (u32)(r_edx+r_ecx*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b18b2: ret  */ FN_RET(0x006b18a0); r_esp += 4; return;
}

void f_006b18b4(void) /* sub_6B18B4 */
{
    FN_ENTER(0x006b18b4);
    /* 006b18b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b18b5: movzx edi, byte ptr [esp + 8] */ r_edi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b18ba: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b18c0: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006b18c5: mov edx, dword ptr [ecx + edi*4] */ r_edx = R32((u32)(r_ecx+r_edi*4));
    /* 006b18c8: sub edx, dword ptr [ecx + eax*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+r_eax*4)); u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b18cb: mov dword ptr [ecx + edi*4], edx */ W32((u32)(r_ecx+r_edi*4), r_edx);
    /* 006b18ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b18cf: ret  */ FN_RET(0x006b18b4); r_esp += 4; return;
}

void f_006b18d0(void) /* sub_6B18D0 */
{
    FN_ENTER(0x006b18d0);
    /* 006b18d0: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b18d5: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b18db: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b18de: sub eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b18e2: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b18e5: ret  */ FN_RET(0x006b18d0); r_esp += 4; return;
}

void f_006b18e8(void) /* sub_6B18E8 */
{
    FN_ENTER(0x006b18e8);
    /* 006b18e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b18e9: movzx edi, byte ptr [esp + 8] */ r_edi = (u32)R8((u32)(r_esp+0x8u));
    /* 006b18ee: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b18f4: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006b18f9: mov edx, dword ptr [ecx + edi*4] */ r_edx = R32((u32)(r_ecx+r_edi*4));
    /* 006b18fc: imul edx, dword ptr [ecx + eax*4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ecx+r_eax*4)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006b1900: mov dword ptr [ecx + edi*4], edx */ W32((u32)(r_ecx+r_edi*4), r_edx);
    /* 006b1903: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1904: ret  */ FN_RET(0x006b18e8); r_esp += 4; return;
}

void f_006b1908(void) /* sub_6B1908 */
{
    FN_ENTER(0x006b1908);
    /* 006b1908: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b190d: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1913: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b1916: imul eax, dword ptr [esp + 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esp+0x8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006b191b: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b191e: ret  */ FN_RET(0x006b1908); r_esp += 4; return;
}

void f_006b1920(void) /* sub_6B1920 */
{
    FN_ENTER(0x006b1920);
    /* 006b1920: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1921: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1922: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b1927: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 006b192c: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b1932: mov edi, dword ptr [ecx + eax*4] */ r_edi = R32((u32)(r_ecx+r_eax*4));
    /* 006b1935: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 006b1938: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006b1939: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x006b1939, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006b1939, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006b193b: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 006b193e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b193f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1940: ret  */ FN_RET(0x006b1920); r_esp += 4; return;
}

void f_006b1944(void) /* sub_6B1944 */
{
    FN_ENTER(0x006b1944);
    /* 006b1944: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1946: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b194b: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b1951: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006b1955: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 006b1958: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006b1959: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x006b1959, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006b1959, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006b195b: mov dword ptr [ecx + esi*4], eax */ W32((u32)(r_ecx+r_esi*4), r_eax);
    /* 006b195e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b195f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1960: ret  */ FN_RET(0x006b1944); r_esp += 4; return;
}

void f_006b1964(void) /* sub_6B1964 */
{
    FN_ENTER(0x006b1964);
    /* 006b1964: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1969: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b196e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1973: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1976: and dword ptr [eax + edx*4], ecx */ { u32 ad = (u32)(r_eax+r_edx*4);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1979: ret  */ FN_RET(0x006b1964); r_esp += 4; return;
}

void f_006b197c(void) /* sub_6B197C */
{
    FN_ENTER(0x006b197c);
    /* 006b197c: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1981: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b1985: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b198b: and dword ptr [edx + ecx*4], eax */ { u32 ad = (u32)(r_edx+r_ecx*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b198e: ret  */ FN_RET(0x006b197c); r_esp += 4; return;
}

void f_006b1990(void) /* sub_6B1990 */
{
    FN_ENTER(0x006b1990);
    /* 006b1990: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1995: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b199a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b199f: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b19a2: or dword ptr [eax + edx*4], ecx */ { u32 ad = (u32)(r_eax+r_edx*4);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b19a5: ret  */ FN_RET(0x006b1990); r_esp += 4; return;
}

void f_006b19a8(void) /* sub_6B19A8 */
{
    FN_ENTER(0x006b19a8);
    /* 006b19a8: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b19ad: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b19b1: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b19b7: or dword ptr [edx + ecx*4], eax */ { u32 ad = (u32)(r_edx+r_ecx*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b19ba: ret  */ FN_RET(0x006b19a8); r_esp += 4; return;
}

void f_006b19bc(void) /* sub_6B19BC */
{
    FN_ENTER(0x006b19bc);
    /* 006b19bc: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b19c1: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b19c6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b19cb: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b19ce: xor dword ptr [eax + edx*4], ecx */ { u32 ad = (u32)(r_eax+r_edx*4);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b19d1: ret  */ FN_RET(0x006b19bc); r_esp += 4; return;
}

void f_006b19d4(void) /* sub_6B19D4 */
{
    FN_ENTER(0x006b19d4);
    /* 006b19d4: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b19d9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b19dd: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b19e3: xor dword ptr [edx + ecx*4], eax */ { u32 ad = (u32)(r_edx+r_ecx*4);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b19e6: ret  */ FN_RET(0x006b19d4); r_esp += 4; return;
}

void f_006b19e8(void) /* sub_6B19E8 */
{
    FN_ENTER(0x006b19e8);
    /* 006b19e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b19e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b19ea: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b19ef: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 006b19f4: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b19fa: mov edi, dword ptr [ecx + eax*4] */ r_edi = R32((u32)(r_ecx+r_eax*4));
    /* 006b19fd: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 006b1a00: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 006b1a01: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x006b1a01, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x006b1a01, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006b1a03: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 006b1a06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1a07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1a08: ret  */ FN_RET(0x006b19e8); r_esp += 4; return;
}

void f_006b1a0c(void) /* sub_6B1A0C */
{
    FN_ENTER(0x006b1a0c);
    /* 006b1a0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a0e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a10: movzx esi, byte ptr [esp + 0xc] */ r_esi = (u32)R8((u32)(r_esp+0xcu));
    /* 006b1a15: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b1a1b: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 006b1a1f: mov eax, dword ptr [ecx + esi*4] */ r_eax = R32((u32)(r_ecx+r_esi*4));
    /* 006b1a22: div edi */ { u32 d = r_edi; if (!d) UNSUP(0x006b1a22, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x006b1a22, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 006b1a24: mov dword ptr [ecx + esi*4], edx */ W32((u32)(r_ecx+r_esi*4), r_edx);
    /* 006b1a27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1a28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1a29: ret  */ FN_RET(0x006b1a0c); r_esp += 4; return;
}

void f_006b1a2c(void) /* sub_6B1A2C */
{
    FN_ENTER(0x006b1a2c);
    /* 006b1a2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1a2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b1a30: movzx ebx, byte ptr [esp + 0x10] */ r_ebx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b1a35: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006b1a39: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a3b: jle 0x6b1aa6 */ if ((fZ||fS!=fO)) goto L_006b1aa6;
L_006b1a3d:; BB(0x006b1a3d);
    /* 006b1a3d: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b1a40: jl 0x6b1abf */ if ((fS!=fO)) goto L_006b1abf;
L_006b1a46:; BB(0x006b1a46);
    /* 006b1a46: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
L_006b1a4b:; BB(0x006b1a4b);
    /* 006b1a4b: lea esi, [ecx + 1] */ r_esi = (u32)(r_ecx+0x1u);
    /* 006b1a4e: movzx ecx, byte ptr [ecx] */ r_ecx = (u32)R8((u32)(r_ecx));
    /* 006b1a51: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1a54: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a56: je 0x6b1abc */ if (fZ) goto L_006b1abc;
L_006b1a58:; BB(0x006b1a58);
    /* 006b1a58: movzx ecx, byte ptr [esi] */ r_ecx = (u32)R8((u32)(r_esi));
    /* 006b1a5b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1a5e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a60: je 0x6b1abc */ if (fZ) goto L_006b1abc;
L_006b1a62:; BB(0x006b1a62);
    /* 006b1a62: movzx ecx, byte ptr [esi + 1] */ r_ecx = (u32)R8((u32)(r_esi+0x1u));
    /* 006b1a66: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1a69: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a6b: je 0x6b1abc */ if (fZ) goto L_006b1abc;
L_006b1a6d:; BB(0x006b1a6d);
    /* 006b1a6d: movzx ecx, byte ptr [esi + 2] */ r_ecx = (u32)R8((u32)(r_esi+0x2u));
    /* 006b1a71: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1a74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a76: je 0x6b1abc */ if (fZ) goto L_006b1abc;
L_006b1a78:; BB(0x006b1a78);
    /* 006b1a78: lea ecx, [esi + 4] */ r_ecx = (u32)(r_esi+0x4u);
    /* 006b1a7b: movzx esi, byte ptr [esi + 3] */ r_esi = (u32)R8((u32)(r_esi+0x3u));
    /* 006b1a7f: mov esi, dword ptr [eax + esi*4] */ r_esi = R32((u32)(r_eax+r_esi*4));
    /* 006b1a82: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a84: je 0x6b1abc */ if (fZ) goto L_006b1abc;
L_006b1a86:; BB(0x006b1a86);
    /* 006b1a86: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b1a89: lea esi, [ebx - 6] */ r_esi = (u32)(r_ebx+0xfffffffau);
    /* 006b1a8c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b1a8e: jle 0x6b1a4b */ if ((fZ||fS!=fO)) goto L_006b1a4b;
L_006b1a90:; BB(0x006b1a90);
    /* 006b1a90: mov esi, ecx */ r_esi = r_ecx;
    /* 006b1a92: movzx esi, byte ptr [esi] */ r_esi = (u32)R8((u32)(r_esi));
    /* 006b1a95: mov esi, dword ptr [eax + esi*4] */ r_esi = R32((u32)(r_eax+r_esi*4));
    /* 006b1a98: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b1a9b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1a9d: je 0x6b1abc */ if (fZ) goto L_006b1abc;
L_006b1a9f:; BB(0x006b1a9f);
    /* 006b1a9f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b1aa2: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1aa4: jl 0x6b1a90 */ if ((fS!=fO)) goto L_006b1a90;
L_006b1aa6:; BB(0x006b1aa6);
    /* 006b1aa6: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1aab: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1ab0: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1ab3: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
    /* 006b1ab9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1aba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1abb: ret  */ FN_RET(0x006b1a2c); r_esp += 4; return;
L_006b1abc:; BB(0x006b1abc);
    /* 006b1abc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1abd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1abe: ret  */ FN_RET(0x006b1a2c); r_esp += 4; return;
L_006b1abf:; BB(0x006b1abf);
    /* 006b1abf: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1ac4: jmp 0x6b1a90 */ goto L_006b1a90;
}

void f_006b1ac8(void) /* sub_6B1AC8 */
{
    FN_ENTER(0x006b1ac8);
    /* 006b1ac8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ac9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1aca: mov eax, 1 */ r_eax = 0x1u;
    /* 006b1acf: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b1ad4: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006b1ad8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1ada: jle 0x6b1b0c */ if ((fZ||fS!=fO)) goto L_006b1b0c;
L_006b1adc:; BB(0x006b1adc);
    /* 006b1adc: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b1ae2: mov esi, edx */ r_esi = r_edx;
L_006b1ae4:; BB(0x006b1ae4);
    /* 006b1ae4: movzx edx, byte ptr [ebx] */ r_edx = (u32)R8((u32)(r_ebx));
    /* 006b1ae7: mov edx, dword ptr [ecx + edx*4] */ r_edx = R32((u32)(r_ecx+r_edx*4));
    /* 006b1aea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b1aec: mov edx, 0 */ r_edx = 0x0u;
    /* 006b1af1: sete dl */ r_edx = (r_edx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006b1af4: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b1af7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b1afa: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006b1afc: mov edx, esi */ r_edx = r_esi;
    /* 006b1afe: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006b1b04: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b1b06: jg 0x6b1ae4 */ if ((!fZ&&fS==fO)) goto L_006b1ae4;
L_006b1b08:; BB(0x006b1b08);
    /* 006b1b08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1b0a: je 0x6b1b1f */ if (fZ) goto L_006b1b1f;
L_006b1b0c:; BB(0x006b1b0c);
    /* 006b1b0c: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1b11: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1b16: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1b19: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1b1f:; BB(0x006b1b1f);
    /* 006b1b1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1b20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1b21: ret  */ FN_RET(0x006b1ac8); r_esp += 4; return;
}

void f_006b1b24(void) /* sub_6B1B24 */
{
    FN_ENTER(0x006b1b24);
    /* 006b1b24: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1b29: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1b2e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1b33: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1b36: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1b39: jne 0x6b1b4e */ if (!fZ) goto L_006b1b4e;
L_006b1b3b:; BB(0x006b1b3b);
    /* 006b1b3b: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1b40: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1b45: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1b48: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1b4e:; BB(0x006b1b4e);
    /* 006b1b4e: ret  */ FN_RET(0x006b1b24); r_esp += 4; return;
}

void f_006b1b50(void) /* sub_6B1B50 */
{
    FN_ENTER(0x006b1b50);
    /* 006b1b50: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1b55: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1b5a: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1b5d: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1b61: jne 0x6b1b76 */ if (!fZ) goto L_006b1b76;
L_006b1b63:; BB(0x006b1b63);
    /* 006b1b63: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1b68: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1b6d: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1b70: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1b76:; BB(0x006b1b76);
    /* 006b1b76: ret  */ FN_RET(0x006b1b50); r_esp += 4; return;
}

void f_006b1b78(void) /* sub_6B1B78 */
{
    FN_ENTER(0x006b1b78);
    /* 006b1b78: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1b7d: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1b82: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1b87: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1b8a: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1b8d: je 0x6b1ba2 */ if (fZ) goto L_006b1ba2;
L_006b1b8f:; BB(0x006b1b8f);
    /* 006b1b8f: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1b94: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1b99: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1b9c: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1ba2:; BB(0x006b1ba2);
    /* 006b1ba2: ret  */ FN_RET(0x006b1b78); r_esp += 4; return;
}

void f_006b1ba4(void) /* sub_6B1BA4 */
{
    FN_ENTER(0x006b1ba4);
    /* 006b1ba4: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1ba9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1bae: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1bb1: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1bb5: je 0x6b1bca */ if (fZ) goto L_006b1bca;
L_006b1bb7:; BB(0x006b1bb7);
    /* 006b1bb7: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1bbc: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1bc1: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1bc4: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1bca:; BB(0x006b1bca);
    /* 006b1bca: ret  */ FN_RET(0x006b1ba4); r_esp += 4; return;
}

void f_006b1bcc(void) /* sub_6B1BCC */
{
    FN_ENTER(0x006b1bcc);
    /* 006b1bcc: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1bd1: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1bd6: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1bdb: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1bde: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1be1: jbe 0x6b1bf6 */ if ((fC||fZ)) goto L_006b1bf6;
L_006b1be3:; BB(0x006b1be3);
    /* 006b1be3: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1be8: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1bed: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1bf0: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1bf6:; BB(0x006b1bf6);
    /* 006b1bf6: ret  */ FN_RET(0x006b1bcc); r_esp += 4; return;
}

void f_006b1bf8(void) /* sub_6B1BF8 */
{
    FN_ENTER(0x006b1bf8);
    /* 006b1bf8: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1bfd: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1c02: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1c05: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1c09: jbe 0x6b1c1e */ if ((fC||fZ)) goto L_006b1c1e;
L_006b1c0b:; BB(0x006b1c0b);
    /* 006b1c0b: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1c10: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1c15: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1c18: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1c1e:; BB(0x006b1c1e);
    /* 006b1c1e: ret  */ FN_RET(0x006b1bf8); r_esp += 4; return;
}

void f_006b1c20(void) /* sub_6B1C20 */
{
    FN_ENTER(0x006b1c20);
    /* 006b1c20: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1c25: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1c2a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1c2f: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1c32: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1c35: jle 0x6b1c4a */ if ((fZ||fS!=fO)) goto L_006b1c4a;
L_006b1c37:; BB(0x006b1c37);
    /* 006b1c37: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1c3c: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1c41: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1c44: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1c4a:; BB(0x006b1c4a);
    /* 006b1c4a: ret  */ FN_RET(0x006b1c20); r_esp += 4; return;
}

void f_006b1c4c(void) /* sub_6B1C4C */
{
    FN_ENTER(0x006b1c4c);
    /* 006b1c4c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1c51: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1c56: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1c59: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1c5d: jle 0x6b1c72 */ if ((fZ||fS!=fO)) goto L_006b1c72;
L_006b1c5f:; BB(0x006b1c5f);
    /* 006b1c5f: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1c64: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1c69: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1c6c: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1c72:; BB(0x006b1c72);
    /* 006b1c72: ret  */ FN_RET(0x006b1c4c); r_esp += 4; return;
}

void f_006b1c74(void) /* sub_6B1C74 */
{
    FN_ENTER(0x006b1c74);
    /* 006b1c74: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1c79: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1c7e: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1c83: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1c86: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1c89: jae 0x6b1c9e */ if (!fC) goto L_006b1c9e;
L_006b1c8b:; BB(0x006b1c8b);
    /* 006b1c8b: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1c90: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1c95: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1c98: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1c9e:; BB(0x006b1c9e);
    /* 006b1c9e: ret  */ FN_RET(0x006b1c74); r_esp += 4; return;
}

void f_006b1ca0(void) /* sub_6B1CA0 */
{
    FN_ENTER(0x006b1ca0);
    /* 006b1ca0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1ca5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1caa: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1cad: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1cb1: jae 0x6b1cc6 */ if (!fC) goto L_006b1cc6;
L_006b1cb3:; BB(0x006b1cb3);
    /* 006b1cb3: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1cb8: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1cbd: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1cc0: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1cc6:; BB(0x006b1cc6);
    /* 006b1cc6: ret  */ FN_RET(0x006b1ca0); r_esp += 4; return;
}

void f_006b1cc8(void) /* sub_6B1CC8 */
{
    FN_ENTER(0x006b1cc8);
    /* 006b1cc8: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1ccd: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1cd2: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1cd7: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1cda: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1cdd: jge 0x6b1cf2 */ if ((fS==fO)) goto L_006b1cf2;
L_006b1cdf:; BB(0x006b1cdf);
    /* 006b1cdf: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1ce4: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1ce9: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1cec: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1cf2:; BB(0x006b1cf2);
    /* 006b1cf2: ret  */ FN_RET(0x006b1cc8); r_esp += 4; return;
}

void f_006b1cf4(void) /* sub_6B1CF4 */
{
    FN_ENTER(0x006b1cf4);
    /* 006b1cf4: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1cf9: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1cfe: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1d01: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1d05: jge 0x6b1d1a */ if ((fS==fO)) goto L_006b1d1a;
L_006b1d07:; BB(0x006b1d07);
    /* 006b1d07: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1d0c: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1d11: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1d14: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1d1a:; BB(0x006b1d1a);
    /* 006b1d1a: ret  */ FN_RET(0x006b1cf4); r_esp += 4; return;
}

void f_006b1d1c(void) /* sub_6B1D1C */
{
    FN_ENTER(0x006b1d1c);
    /* 006b1d1c: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1d21: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1d26: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1d2b: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1d2e: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1d31: jb 0x6b1d46 */ if (fC) goto L_006b1d46;
L_006b1d33:; BB(0x006b1d33);
    /* 006b1d33: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1d38: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1d3d: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1d40: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1d46:; BB(0x006b1d46);
    /* 006b1d46: ret  */ FN_RET(0x006b1d1c); r_esp += 4; return;
}

void f_006b1d48(void) /* sub_6B1D48 */
{
    FN_ENTER(0x006b1d48);
    /* 006b1d48: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1d4d: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1d52: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1d55: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1d59: jb 0x6b1d6e */ if (fC) goto L_006b1d6e;
L_006b1d5b:; BB(0x006b1d5b);
    /* 006b1d5b: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1d60: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1d65: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1d68: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1d6e:; BB(0x006b1d6e);
    /* 006b1d6e: ret  */ FN_RET(0x006b1d48); r_esp += 4; return;
}

void f_006b1d70(void) /* sub_6B1D70 */
{
    FN_ENTER(0x006b1d70);
    /* 006b1d70: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1d75: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1d7a: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1d7f: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1d82: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1d85: jl 0x6b1d9a */ if ((fS!=fO)) goto L_006b1d9a;
L_006b1d87:; BB(0x006b1d87);
    /* 006b1d87: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1d8c: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1d91: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1d94: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1d9a:; BB(0x006b1d9a);
    /* 006b1d9a: ret  */ FN_RET(0x006b1d70); r_esp += 4; return;
}

void f_006b1d9c(void) /* sub_6B1D9C */
{
    FN_ENTER(0x006b1d9c);
    /* 006b1d9c: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1da1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1da6: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1da9: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1dad: jl 0x6b1dc2 */ if ((fS!=fO)) goto L_006b1dc2;
L_006b1daf:; BB(0x006b1daf);
    /* 006b1daf: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1db4: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1db9: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1dbc: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1dc2:; BB(0x006b1dc2);
    /* 006b1dc2: ret  */ FN_RET(0x006b1d9c); r_esp += 4; return;
}

void f_006b1dc4(void) /* sub_6B1DC4 */
{
    FN_ENTER(0x006b1dc4);
    /* 006b1dc4: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1dc9: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1dce: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1dd3: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1dd6: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1dd9: ja 0x6b1dee */ if ((!fC&&!fZ)) goto L_006b1dee;
L_006b1ddb:; BB(0x006b1ddb);
    /* 006b1ddb: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1de0: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1de5: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1de8: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1dee:; BB(0x006b1dee);
    /* 006b1dee: ret  */ FN_RET(0x006b1dc4); r_esp += 4; return;
}

void f_006b1df0(void) /* sub_6B1DF0 */
{
    FN_ENTER(0x006b1df0);
    /* 006b1df0: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1df5: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1dfa: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1dfd: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1e01: ja 0x6b1e16 */ if ((!fC&&!fZ)) goto L_006b1e16;
L_006b1e03:; BB(0x006b1e03);
    /* 006b1e03: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1e08: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1e0d: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1e10: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1e16:; BB(0x006b1e16);
    /* 006b1e16: ret  */ FN_RET(0x006b1df0); r_esp += 4; return;
}

void f_006b1e18(void) /* sub_6B1E18 */
{
    FN_ENTER(0x006b1e18);
    /* 006b1e18: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1e1d: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1e22: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1e27: mov ecx, dword ptr [eax + ecx*4] */ r_ecx = R32((u32)(r_eax+r_ecx*4));
    /* 006b1e2a: cmp ecx, dword ptr [eax + edx*4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+r_edx*4)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1e2d: jg 0x6b1e42 */ if ((!fZ&&fS==fO)) goto L_006b1e42;
L_006b1e2f:; BB(0x006b1e2f);
    /* 006b1e2f: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1e34: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1e39: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1e3c: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1e42:; BB(0x006b1e42);
    /* 006b1e42: ret  */ FN_RET(0x006b1e18); r_esp += 4; return;
}

void f_006b1e44(void) /* sub_6B1E44 */
{
    FN_ENTER(0x006b1e44);
    /* 006b1e44: movzx edx, byte ptr [esp + 4] */ r_edx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1e49: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1e4e: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1e51: cmp ecx, dword ptr [esp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1e55: jg 0x6b1e6a */ if ((!fZ&&fS==fO)) goto L_006b1e6a;
L_006b1e57:; BB(0x006b1e57);
    /* 006b1e57: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1e5c: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 006b1e61: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1e64: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b1e6a:; BB(0x006b1e6a);
    /* 006b1e6a: ret  */ FN_RET(0x006b1e44); r_esp += 4; return;
}

void f_006b1e6c(void) /* sub_6B1E6C */
{
    FN_ENTER(0x006b1e6c);
    /* 006b1e6c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1e6d: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1e72: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006b1e77: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1e7d: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b1e80: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1e82: jge 0x6b1e95 */ if ((fS==fO)) goto L_006b1e95;
L_006b1e84:; BB(0x006b1e84);
    /* 006b1e84: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1e86: jl 0x6b1e95 */ if ((fS!=fO)) goto L_006b1e95;
L_006b1e88:; BB(0x006b1e88);
    /* 006b1e88: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006b1e8c: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 006b1e90: call 0x6b1e9d */ r_esp -= 4; W32(r_esp, 0x6b1e95u); f_006b1e9d();
L_006b1e95:; BB(0x006b1e95);
    /* 006b1e95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1e96: ret  */ FN_RET(0x006b1e6c); r_esp += 4; return;
}

void f_006b1e98(void) /* sub_6B1E98 */
{
    FN_ENTER(0x006b1e98);
    /* 006b1e98: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b1e9d: mov edx, dword ptr [0xa954ac] */ r_edx = R32((u32)(0xa954acu));
    /* 006b1ea3: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006b1ea6: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b1ea9: mov dword ptr [0xa954a4], eax */ W32((u32)(0xa954a4u), r_eax);
    /* 006b1eae: ret  */ FN_RET(0x006b1e98); r_esp += 4; return;
}

void f_006b1e9d(void) /* sub_6B1E9D */
{
    FN_ENTER(0x006b1e9d);
    /* 006b1e9d: mov edx, dword ptr [0xa954ac] */ r_edx = R32((u32)(0xa954acu));
    /* 006b1ea3: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006b1ea6: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b1ea9: mov dword ptr [0xa954a4], eax */ W32((u32)(0xa954a4u), r_eax);
    /* 006b1eae: ret  */ FN_RET(0x006b1e9d); r_esp += 4; return;
}

void f_006b1eb0(void) /* sub_6B1EB0 */
{
    FN_ENTER(0x006b1eb0);
    /* 006b1eb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1eb1: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1eb6: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006b1ebb: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1ec1: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 006b1ec4: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1ec6: jge 0x6b1ed9 */ if ((fS==fO)) goto L_006b1ed9;
L_006b1ec8:; BB(0x006b1ec8);
    /* 006b1ec8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1eca: jl 0x6b1ed9 */ if ((fS!=fO)) goto L_006b1ed9;
L_006b1ecc:; BB(0x006b1ecc);
    /* 006b1ecc: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 006b1ed0: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 006b1ed4: call 0x6b1ee1 */ r_esp -= 4; W32(r_esp, 0x6b1ed9u); f_006b1ee1();
L_006b1ed9:; BB(0x006b1ed9);
    /* 006b1ed9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1eda: ret  */ FN_RET(0x006b1eb0); r_esp += 4; return;
}

void f_006b1edc(void) /* sub_6B1EDC */
{
    FN_ENTER(0x006b1edc);
    /* 006b1edc: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006b1ee1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ee2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ee3: mov edi, eax */ r_edi = r_eax;
    /* 006b1ee5: mov eax, dword ptr [0xa954a4] */ r_eax = R32((u32)(0xa954a4u));
    /* 006b1eea: call 0x6b1f04 */ r_esp -= 4; W32(r_esp, 0x6b1eefu); f_006b1f04();
    /* 006b1eef: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1ef4: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 006b1ef7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1efa: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
    /* 006b1f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1f01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1f02: ret  */ FN_RET(0x006b1edc); r_esp += 4; return;
}

void f_006b1ee1(void) /* sub_6B1EE1 */
{
    FN_ENTER(0x006b1ee1);
    /* 006b1ee1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ee2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1ee3: mov edi, eax */ r_edi = r_eax;
    /* 006b1ee5: mov eax, dword ptr [0xa954a4] */ r_eax = R32((u32)(0xa954a4u));
    /* 006b1eea: call 0x6b1f04 */ r_esp -= 4; W32(r_esp, 0x6b1eefu); f_006b1f04();
    /* 006b1eef: mov eax, dword ptr [0xa954ac] */ r_eax = R32((u32)(0xa954acu));
    /* 006b1ef4: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 006b1ef7: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006b1efa: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
    /* 006b1f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1f01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1f02: ret  */ FN_RET(0x006b1ee1); r_esp += 4; return;
}

void f_006b1f04(void) /* sub_6B1F04 */
{
    FN_ENTER(0x006b1f04);
    /* 006b1f04: mov ecx, dword ptr [0xa954b8] */ r_ecx = R32((u32)(0xa954b8u));
    /* 006b1f0a: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 006b1f0d: mov dword ptr [0xa954b8], edx */ W32((u32)(0xa954b8u), r_edx);
    /* 006b1f13: mov dword ptr [ecx*4 + 0xa95380], eax */ W32((u32)(r_ecx*4+0xa95380u), r_eax);
    /* 006b1f1a: ret  */ FN_RET(0x006b1f04); r_esp += 4; return;
}

void f_006b1f1c(void) /* sub_6B1F1C */
{
    FN_ENTER(0x006b1f1c);
    /* 006b1f1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1f1d: movzx ecx, byte ptr [esp + 8] */ r_ecx = (u32)R8((u32)(r_esp+0x8u));
    /* 006b1f22: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1f28: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b1f2b: call 0x6b1f04 */ r_esp -= 4; W32(r_esp, 0x6b1f30u); f_006b1f04();
    /* 006b1f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1f31: ret  */ FN_RET(0x006b1f1c); r_esp += 4; return;
}

void f_006b1f34(void) /* sub_6B1F34 */
{
    FN_ENTER(0x006b1f34);
    /* 006b1f34: call 0x6b16c0 */ r_esp -= 4; W32(r_esp, 0x6b1f39u); f_006b16c0();
    /* 006b1f39: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b1f3f: movzx ecx, byte ptr [esp + 4] */ r_ecx = (u32)R8((u32)(r_esp+0x4u));
    /* 006b1f44: mov dword ptr [edx + ecx*4], eax */ W32((u32)(r_edx+r_ecx*4), r_eax);
    /* 006b1f47: ret  */ FN_RET(0x006b1f34); r_esp += 4; return;
}

void f_006b1f48(void) /* sub_6B1F48 */
{
    FN_ENTER(0x006b1f48);
    /* 006b1f48: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1f49: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1f4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b1f4b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b1f4c: movzx ebx, byte ptr [esp + 0x14] */ r_ebx = (u32)R8((u32)(r_esp+0x14u));
    /* 006b1f51: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006b1f55: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b1f57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b1f59: jle 0x6b1ff7 */ if ((fZ||fS!=fO)) goto L_006b1ff7;
L_006b1f5f:; BB(0x006b1f5f);
    /* 006b1f5f: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b1f62: jl 0x6b1ffc */ if ((fS!=fO)) goto L_006b1ffc;
L_006b1f68:; BB(0x006b1f68);
    /* 006b1f68: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b1f6d: mov edi, dword ptr [0xa954b8] */ r_edi = R32((u32)(0xa954b8u));
    /* 006b1f73: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 006b1f76: lea esi, [ecx - 5] */ r_esi = (u32)(r_ecx+0xfffffffbu);
L_006b1f79:; BB(0x006b1f79);
    /* 006b1f79: movzx ebp, bl */ r_ebp = (u32)(u8)r_ebx;
    /* 006b1f7c: mov ebp, dword ptr [eax + ebp*4] */ r_ebp = R32((u32)(r_eax+r_ebp*4));
    /* 006b1f7f: mov dword ptr [edi*4 + 0xa95380], ebp */ W32((u32)(r_edi*4+0xa95380u), r_ebp);
    /* 006b1f86: lea ebp, [ebx + 1] */ r_ebp = (u32)(r_ebx+0x1u);
    /* 006b1f89: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b1f8f: mov ebp, dword ptr [eax + ebp*4] */ r_ebp = R32((u32)(r_eax+r_ebp*4));
    /* 006b1f92: mov dword ptr [edi*4 + 0xa95384], ebp */ W32((u32)(r_edi*4+0xa95384u), r_ebp);
    /* 006b1f99: lea ebp, [ebx + 2] */ r_ebp = (u32)(r_ebx+0x2u);
    /* 006b1f9c: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b1fa2: mov ebp, dword ptr [eax + ebp*4] */ r_ebp = R32((u32)(r_eax+r_ebp*4));
    /* 006b1fa5: mov dword ptr [edi*4 + 0xa95388], ebp */ W32((u32)(r_edi*4+0xa95388u), r_ebp);
    /* 006b1fac: lea ebp, [ebx + 3] */ r_ebp = (u32)(r_ebx+0x3u);
    /* 006b1faf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b1fb5: mov ebp, dword ptr [eax + ebp*4] */ r_ebp = R32((u32)(r_eax+r_ebp*4));
    /* 006b1fb8: mov dword ptr [edi*4 + 0xa9538c], ebp */ W32((u32)(r_edi*4+0xa9538cu), r_ebp);
    /* 006b1fbf: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b1fc2: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b1fc5: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b1fc8: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b1fca: jle 0x6b1f79 */ if ((fZ||fS!=fO)) goto L_006b1f79;
L_006b1fcc:; BB(0x006b1fcc);
    /* 006b1fcc: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006b1fcf:; BB(0x006b1fcf);
    /* 006b1fcf: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006b1fd2:; BB(0x006b1fd2);
    /* 006b1fd2: movzx ebp, bl */ r_ebp = (u32)(u8)r_ebx;
    /* 006b1fd5: mov esi, dword ptr [eax + ebp*4] */ r_esi = R32((u32)(r_eax+r_ebp*4));
    /* 006b1fd8: mov ebp, edi */ r_ebp = r_edi;
    /* 006b1fda: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b1fdd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b1fe0: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b1fe3: mov dword ptr [ebp*4 + 0xa95380], esi */ W32((u32)(r_ebp*4+0xa95380u), r_esi);
    /* 006b1fea: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b1fec: jl 0x6b1fd2 */ if ((fS!=fO)) goto L_006b1fd2;
L_006b1fee:; BB(0x006b1fee);
    /* 006b1fee: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 006b1ff1: mov dword ptr [0xa954b8], edi */ W32((u32)(0xa954b8u), r_edi);
L_006b1ff7:; BB(0x006b1ff7);
    /* 006b1ff7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b1ff8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b1ff9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b1ffa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b1ffb: ret  */ FN_RET(0x006b1f48); r_esp += 4; return;
L_006b1ffc:; BB(0x006b1ffc);
    /* 006b1ffc: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b2001: mov edi, dword ptr [0xa954b8] */ r_edi = R32((u32)(0xa954b8u));
    /* 006b2007: jmp 0x6b1fcf */ goto L_006b1fcf;
}

