#include "protos.h"

void f_007c1100(void) /* sub_7C1100 */
{
    FN_ENTER(0x007c1100);
    /* 007c1100: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1101: mov edi, ecx */ r_edi = r_ecx;
    /* 007c1103: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c1107: mov ecx, edi */ r_ecx = r_edi;
    /* 007c1109: call 0x7c0c14 */ r_esp -= 4; W32(r_esp, 0x7c110eu); f_007c0c14();
    /* 007c110e: test dword ptr [edi + 0x48], eax */ {  u32 a = R32((u32)(r_edi+0x48u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1111: mov eax, 0 */ r_eax = 0x0u;
    /* 007c1116: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007c1119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c111a: ret 4 */ FN_RET(0x007c1100); r_esp += 8; return;
}

void f_007c1120(void) /* sub_7C1120 */
{
    FN_ENTER(0x007c1120);
    /* 007c1120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1121: mov edi, ecx */ r_edi = r_ecx;
    /* 007c1123: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c1127: mov ecx, edi */ r_ecx = r_edi;
    /* 007c1129: call 0x7c09a0 */ r_esp -= 4; W32(r_esp, 0x7c112eu); f_007c09a0();
    /* 007c112e: test dword ptr [edi + 0x48], eax */ {  u32 a = R32((u32)(r_edi+0x48u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1131: mov eax, 0 */ r_eax = 0x0u;
    /* 007c1136: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007c1139: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c113a: ret 4 */ FN_RET(0x007c1120); r_esp += 8; return;
}

void f_007c1140(void) /* sub_7C1140 */
{
    FN_ENTER(0x007c1140);
    /* 007c1140: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1141: mov edi, ecx */ r_edi = r_ecx;
    /* 007c1143: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c1147: mov ecx, edi */ r_ecx = r_edi;
    /* 007c1149: call 0x7c0e84 */ r_esp -= 4; W32(r_esp, 0x7c114eu); f_007c0e84();
    /* 007c114e: test dword ptr [edi + 0x48], eax */ {  u32 a = R32((u32)(r_edi+0x48u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1151: mov eax, 0 */ r_eax = 0x0u;
    /* 007c1156: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007c1159: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c115a: ret 4 */ FN_RET(0x007c1140); r_esp += 8; return;
}

void f_007c1160(void) /* sub_7C1160 */
{
    FN_ENTER(0x007c1160);
    /* 007c1160: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1161: mov edi, ecx */ r_edi = r_ecx;
    /* 007c1163: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c1167: mov ecx, edi */ r_ecx = r_edi;
    /* 007c1169: call 0x7c0c14 */ r_esp -= 4; W32(r_esp, 0x7c116eu); f_007c0c14();
    /* 007c116e: test dword ptr [edi + 0x4c], eax */ {  u32 a = R32((u32)(r_edi+0x4cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1171: mov eax, 0 */ r_eax = 0x0u;
    /* 007c1176: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007c1179: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c117a: ret 4 */ FN_RET(0x007c1160); r_esp += 8; return;
}

void f_007c1180(void) /* sub_7C1180 */
{
    FN_ENTER(0x007c1180);
    /* 007c1180: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1181: mov edi, ecx */ r_edi = r_ecx;
    /* 007c1183: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c1187: mov ecx, edi */ r_ecx = r_edi;
    /* 007c1189: call 0x7c0c14 */ r_esp -= 4; W32(r_esp, 0x7c118eu); f_007c0c14();
    /* 007c118e: test dword ptr [edi + 4], eax */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1191: mov eax, 0 */ r_eax = 0x0u;
    /* 007c1196: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007c1199: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c119a: ret 4 */ FN_RET(0x007c1180); r_esp += 8; return;
}

void f_007c11a0(void) /* sub_7C11A0 */
{
    FN_ENTER(0x007c11a0);
    /* 007c11a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c11a1: mov edi, ecx */ r_edi = r_ecx;
    /* 007c11a3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c11a7: mov ecx, edi */ r_ecx = r_edi;
    /* 007c11a9: call 0x7c0c14 */ r_esp -= 4; W32(r_esp, 0x7c11aeu); f_007c0c14();
    /* 007c11ae: test dword ptr [edi + 0xc], eax */ {  u32 a = R32((u32)(r_edi+0xcu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c11b1: mov eax, 0 */ r_eax = 0x0u;
    /* 007c11b6: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 007c11b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c11ba: ret 4 */ FN_RET(0x007c11a0); r_esp += 8; return;
}

void f_007c11c0(void) /* sub_7C11C0 */
{
    FN_ENTER(0x007c11c0);
    /* 007c11c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c11c2: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 007c11c4: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 007c11c7: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 007c11ca: mov eax, ecx */ r_eax = r_ecx;
    /* 007c11cc: ret  */ FN_RET(0x007c11c0); r_esp += 4; return;
}

void f_007c11d0(void) /* sub_7C11D0 */
{
    FN_ENTER(0x007c11d0);
    /* 007c11d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c11d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c11d2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007c11d4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007c11d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c11d9: je 0x7c128d */ if (fZ) goto L_007c128d;
L_007c11df:; BB(0x007c11df);
    /* 007c11df: mov esi, dword ptr [ebp + 4] */ r_esi = R32((u32)(r_ebp+0x4u));
    /* 007c11e2: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 007c11e5: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 007c11e8: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007c11eb: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 007c11ed: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 007c11f0: cmp edx, 0x5000 */ {  u32 a = r_edx; u32 b = 0x5000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c11f6: jle 0x7c1225 */ if ((fZ||fS!=fO)) goto L_007c1225;
L_007c11f8:; BB(0x007c11f8);
    /* 007c11f8: cmp edx, 0xb000 */ {  u32 a = r_edx; u32 b = 0xb000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007c11fe: jge 0x7c1225 */ if ((fS==fO)) goto L_007c1225;
L_007c1200:; BB(0x007c1200);
    /* 007c1200: fld dword ptr [eax + 0x24] */ FPUSH(R_F32((u32)(r_eax+0x24u)));
    /* 007c1203: fcomp dword ptr [0x97e614] */ fx_compare(ST(0), R_F32((u32)(0x97e614u))); FPOP();
    /* 007c1209: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007c120b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007c120c: jbe 0x7c1225 */ if ((fC||fZ)) goto L_007c1225;
L_007c120e:; BB(0x007c120e);
    /* 007c120e: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 007c1213: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007c1216: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c1218: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c121b: jge 0x7c1225 */ if ((fS==fO)) goto L_007c1225;
L_007c121d:; BB(0x007c121d);
    /* 007c121d: mov eax, 1 */ r_eax = 0x1u;
    /* 007c1222: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c1223: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c1224: ret  */ FN_RET(0x007c11d0); r_esp += 4; return;
L_007c1225:; BB(0x007c1225);
    /* 007c1225: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7c122au); f_00791b48();
    /* 007c122a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c122c: je 0x7c128d */ if (fZ) goto L_007c128d;
L_007c122e:; BB(0x007c122e);
    /* 007c122e: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7c1233u); f_00791b48();
    /* 007c1233: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1235: mov ecx, eax */ r_ecx = r_eax;
    /* 007c1237: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x7c123cu); f_0078fd68();
    /* 007c123c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c123e: jne 0x7c1276 */ if (!fZ) goto L_007c1276;
L_007c1240:; BB(0x007c1240);
    /* 007c1240: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7c1245u); f_00791b48();
    /* 007c1245: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1247: mov ecx, eax */ r_ecx = r_eax;
    /* 007c1249: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x7c124eu); f_0078fd68();
    /* 007c124e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1250: jne 0x7c1276 */ if (!fZ) goto L_007c1276;
L_007c1252:; BB(0x007c1252);
    /* 007c1252: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7c1257u); f_00791b48();
    /* 007c1257: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1259: mov ecx, eax */ r_ecx = r_eax;
    /* 007c125b: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x7c1260u); f_0078fd68();
    /* 007c1260: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1262: jne 0x7c1276 */ if (!fZ) goto L_007c1276;
L_007c1264:; BB(0x007c1264);
    /* 007c1264: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7c1269u); f_00791b48();
    /* 007c1269: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007c126b: mov ecx, eax */ r_ecx = r_eax;
    /* 007c126d: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x7c1272u); f_0078fd68();
    /* 007c1272: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1274: je 0x7c128d */ if (fZ) goto L_007c128d;
L_007c1276:; BB(0x007c1276);
    /* 007c1276: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 007c127b: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007c127e: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 007c1280: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c1283: jge 0x7c128d */ if ((fS==fO)) goto L_007c128d;
L_007c1285:; BB(0x007c1285);
    /* 007c1285: mov eax, 1 */ r_eax = 0x1u;
    /* 007c128a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c128b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c128c: ret  */ FN_RET(0x007c11d0); r_esp += 4; return;
L_007c128d:; BB(0x007c128d);
    /* 007c128d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c128f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c1290: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c1291: ret  */ FN_RET(0x007c11d0); r_esp += 4; return;
}

void f_007c1294(void) /* sub_7C1294 */
{
    FN_ENTER(0x007c1294);
    /* 007c1294: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 007c1299: mov edx, dword ptr [0xa0f668] */ r_edx = R32((u32)(0xa0f668u));
    /* 007c129f: mov ecx, dword ptr [0xa0f66c] */ r_ecx = R32((u32)(0xa0f66cu));
    /* 007c12a5: mov dword ptr [0xaae948], eax */ W32((u32)(0xaae948u), r_eax);
    /* 007c12aa: mov eax, dword ptr [0xa0f670] */ r_eax = R32((u32)(0xa0f670u));
    /* 007c12af: mov dword ptr [0xaae94c], edx */ W32((u32)(0xaae94cu), r_edx);
    /* 007c12b5: mov dword ptr [0xaae950], ecx */ W32((u32)(0xaae950u), r_ecx);
    /* 007c12bb: mov dword ptr [0xaae954], eax */ W32((u32)(0xaae954u), r_eax);
    /* 007c12c0: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 007c12c5: mov dword ptr [0xaae958], eax */ W32((u32)(0xaae958u), r_eax);
    /* 007c12ca: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 007c12cf: mov dword ptr [0xaae95c], eax */ W32((u32)(0xaae95cu), r_eax);
    /* 007c12d4: ret  */ FN_RET(0x007c1294); r_esp += 4; return;
}

void f_007c12d8(void) /* sub_7C12D8 */
{
    FN_ENTER(0x007c12d8);
    /* 007c12d8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c12dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c12de: je 0x7c12f4 */ if (fZ) goto L_007c12f4;
L_007c12e0:; BB(0x007c12e0);
    /* 007c12e0: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007c12e3: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 007c12e6: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007c12e8: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 007c12ee: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 007c12f1: ret 4 */ FN_RET(0x007c12d8); r_esp += 8; return;
L_007c12f4:; BB(0x007c12f4);
    /* 007c12f4: ret 4 */ FN_RET(0x007c12d8); r_esp += 8; return;
}

void f_007c12f8(void) /* sub_7C12F8 */
{
    FN_ENTER(0x007c12f8);
    /* 007c12f8: mov dword ptr [ecx + 4], 0xffffffff */ W32((u32)(r_ecx+0x4u), 0xffffffffu);
    /* 007c12ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1301: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007c1308: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 007c130a: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 007c130d: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 007c1310: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 007c1317: mov word ptr [ecx + 0x10], ax */ W16((u32)(r_ecx+0x10u), (u16)r_eax);
    /* 007c131b: mov word ptr [ecx + 0x12], ax */ W16((u32)(r_ecx+0x12u), (u16)r_eax);
    /* 007c131f: mov word ptr [ecx + 0x14], ax */ W16((u32)(r_ecx+0x14u), (u16)r_eax);
    /* 007c1323: mov word ptr [ecx + 0x16], ax */ W16((u32)(r_ecx+0x16u), (u16)r_eax);
    /* 007c1327: mov word ptr [ecx + 0x18], ax */ W16((u32)(r_ecx+0x18u), (u16)r_eax);
    /* 007c132b: mov word ptr [ecx + 0x1a], ax */ W16((u32)(r_ecx+0x1au), (u16)r_eax);
    /* 007c132f: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 007c1332: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 007c1335: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 007c1338: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 007c133b: mov word ptr [ecx + 0x2c], ax */ W16((u32)(r_ecx+0x2cu), (u16)r_eax);
    /* 007c133f: mov word ptr [ecx + 0x2e], ax */ W16((u32)(r_ecx+0x2eu), (u16)r_eax);
    /* 007c1343: mov word ptr [ecx + 0x30], ax */ W16((u32)(r_ecx+0x30u), (u16)r_eax);
    /* 007c1347: mov word ptr [ecx + 0x32], ax */ W16((u32)(r_ecx+0x32u), (u16)r_eax);
    /* 007c134b: mov word ptr [ecx + 0x34], ax */ W16((u32)(r_ecx+0x34u), (u16)r_eax);
    /* 007c134f: mov word ptr [ecx + 0x36], ax */ W16((u32)(r_ecx+0x36u), (u16)r_eax);
    /* 007c1353: mov word ptr [ecx + 0x38], ax */ W16((u32)(r_ecx+0x38u), (u16)r_eax);
    /* 007c1357: mov word ptr [ecx + 0x3a], ax */ W16((u32)(r_ecx+0x3au), (u16)r_eax);
    /* 007c135b: mov word ptr [ecx + 0x3c], ax */ W16((u32)(r_ecx+0x3cu), (u16)r_eax);
    /* 007c135f: mov word ptr [ecx + 0x3e], ax */ W16((u32)(r_ecx+0x3eu), (u16)r_eax);
    /* 007c1363: mov word ptr [ecx + 0x40], ax */ W16((u32)(r_ecx+0x40u), (u16)r_eax);
    /* 007c1367: mov word ptr [ecx + 0x42], ax */ W16((u32)(r_ecx+0x42u), (u16)r_eax);
    /* 007c136b: mov word ptr [ecx + 0x44], ax */ W16((u32)(r_ecx+0x44u), (u16)r_eax);
    /* 007c136f: mov word ptr [ecx + 0x46], ax */ W16((u32)(r_ecx+0x46u), (u16)r_eax);
    /* 007c1373: ret  */ FN_RET(0x007c12f8); r_esp += 4; return;
}

void f_007c1374(void) /* sub_7C1374 */
{
    FN_ENTER(0x007c1374);
    /* 007c1374: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1376: call 0x83a9e0 */ r_esp -= 4; W32(r_esp, 0x7c137bu); f_0083a9e0();
    /* 007c137b: mov dword ptr [0xaae720], eax */ W32((u32)(0xaae720u), r_eax);
    /* 007c1380: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1382: call 0x83a9e0 */ r_esp -= 4; W32(r_esp, 0x7c1387u); f_0083a9e0();
    /* 007c1387: mov dword ptr [0xaae724], eax */ W32((u32)(0xaae724u), r_eax);
    /* 007c138c: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 007c138e: call 0x83a9e0 */ r_esp -= 4; W32(r_esp, 0x7c1393u); f_0083a9e0();
    /* 007c1393: mov dword ptr [0xaae728], eax */ W32((u32)(0xaae728u), r_eax);
    /* 007c1398: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 007c139a: call 0x83a9e0 */ r_esp -= 4; W32(r_esp, 0x7c139fu); f_0083a9e0();
    /* 007c139f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c13a2: mov dword ptr [0xaae974], 2 */ W32((u32)(0xaae974u), 0x2u);
    /* 007c13ac: mov dword ptr [0xaae72c], eax */ W32((u32)(0xaae72cu), r_eax);
    /* 007c13b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c13b3: mov dword ptr [0xaae978], 3 */ W32((u32)(0xaae978u), 0x3u);
    /* 007c13bd: mov dword ptr [0xaae730], eax */ W32((u32)(0xaae730u), r_eax);
    /* 007c13c2: mov edx, 1 */ r_edx = 0x1u;
    /* 007c13c7: mov dword ptr [0xaae97c], 4 */ W32((u32)(0xaae97cu), 0x4u);
    /* 007c13d1: mov dword ptr [0xaae748], eax */ W32((u32)(0xaae748u), r_eax);
    /* 007c13d6: mov dword ptr [0xaae96c], eax */ W32((u32)(0xaae96cu), r_eax);
    /* 007c13db: mov dword ptr [0xaae74c], eax */ W32((u32)(0xaae74cu), r_eax);
    /* 007c13e0: mov dword ptr [0xaae970], edx */ W32((u32)(0xaae970u), r_edx);
    /* 007c13e6: mov dword ptr [0xaae750], eax */ W32((u32)(0xaae750u), r_eax);
    /* 007c13eb: mov dword ptr [0xaae754], eax */ W32((u32)(0xaae754u), r_eax);
    /* 007c13f0: mov dword ptr [0xaae758], eax */ W32((u32)(0xaae758u), r_eax);
    /* 007c13f5: mov byte ptr [0xaae960], al */ W8((u32)(0xaae960u), (u8)r_eax);
    /* 007c13fa: mov byte ptr [0xaae93c], al */ W8((u32)(0xaae93cu), (u8)r_eax);
    /* 007c13ff: mov byte ptr [0xaae944], al */ W8((u32)(0xaae944u), (u8)r_eax);
    /* 007c1404: mov byte ptr [0xaae940], al */ W8((u32)(0xaae940u), (u8)r_eax);
    /* 007c1409: mov byte ptr [0xaae941], al */ W8((u32)(0xaae941u), (u8)r_eax);
    /* 007c140e: mov byte ptr [0xaae942], al */ W8((u32)(0xaae942u), (u8)r_eax);
    /* 007c1413: mov byte ptr [0xaae943], al */ W8((u32)(0xaae943u), (u8)r_eax);
    /* 007c1418: mov dword ptr [0xa0f6f0], edx */ W32((u32)(0xa0f6f0u), r_edx);
    /* 007c141e: call 0x7089c4 */ r_esp -= 4; W32(r_esp, 0x7c1423u); f_007089c4();
    /* 007c1423: ret  */ FN_RET(0x007c1374); r_esp += 4; return;
}

void f_007c1424(void) /* sub_7C1424 */
{
    FN_ENTER(0x007c1424);
    /* 007c1424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c1426: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c1427: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c1428: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c142e: call 0x4829e0 */ r_esp -= 4; W32(r_esp, 0x7c1433u); f_004829e0();
    /* 007c1433: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 007c1436: call 0x4829e8 */ r_esp -= 4; W32(r_esp, 0x7c143bu); f_004829e8();
    /* 007c143b: movzx edi, ax */ r_edi = (u32)(u16)r_eax;
    /* 007c143e: call 0x4829f0 */ r_esp -= 4; W32(r_esp, 0x7c1443u); f_004829f0();
    /* 007c1443: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1445: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007c1447: mov edx, edi */ r_edx = r_edi;
    /* 007c1449: call 0x8448a0 */ r_esp -= 4; W32(r_esp, 0x7c144eu); f_008448a0();
    /* 007c144e: mov ebp, eax */ r_ebp = r_eax;
    /* 007c1450: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c1451: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x7c1456u); f_00859c55();
    /* 007c1456: mov esi, eax */ r_esi = r_eax;
    /* 007c1458: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c145b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c145c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c145d: mov ecx, esi */ r_ecx = r_esi;
    /* 007c145f: mov edx, ebx */ r_edx = r_ebx;
    /* 007c1461: call 0x8448b0 */ r_esp -= 4; W32(r_esp, 0x7c1466u); f_008448b0();
    /* 007c1466: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007c146a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c146b: call 0x85a698 */ r_esp -= 4; W32(r_esp, 0x7c1470u); f_0085a698();
    /* 007c1470: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 007c1477: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c1478: call 0x85a708 */ r_esp -= 4; W32(r_esp, 0x7c147du); f_0085a708();
    /* 007c147d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c1480: call 0x82d3b8 */ r_esp -= 4; W32(r_esp, 0x7c1485u); f_0082d3b8();
    /* 007c1485: mov ebx, eax */ r_ebx = r_eax;
    /* 007c1487: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007c148a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c148b: call 0x85a76f */ r_esp -= 4; W32(r_esp, 0x7c1490u); f_0085a76f();
    /* 007c1490: lea edi, [esp + 0x10c] */ r_edi = (u32)(r_esp+0x10cu);
    /* 007c1497: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c1498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1499: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c149a: push 0x97e640 */ { u32 v = 0x97e640u; r_esp -= 4; W32(r_esp, v); }
    /* 007c149f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007c14a0: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x7c14a5u); f_00858bf5();
    /* 007c14a5: lea edx, [esp + 0x120] */ r_edx = (u32)(r_esp+0x120u);
    /* 007c14ac: push 0x92b684 */ { u32 v = 0x92b684u; r_esp -= 4; W32(r_esp, v); }
    /* 007c14b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14b2: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x7c14b7u); f_0085957c();
    /* 007c14b7: mov ebx, eax */ r_ebx = r_eax;
    /* 007c14b9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c14bc: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c14be: je 0x7c14e2 */ if (fZ) goto L_007c14e2;
L_007c14c0:; BB(0x007c14c0);
    /* 007c14c0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007c14c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14c5: push 0x58f */ { u32 v = 0x58fu; r_esp -= 4; W32(r_esp, v); }
    /* 007c14ca: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7c14cfu); f_00814298();
    /* 007c14cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c14d1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007c14d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c14d4: call 0x859868 */ r_esp -= 4; W32(r_esp, 0x7c14d9u); f_00859868();
    /* 007c14d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14da: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x7c14dfu); f_00859710();
    /* 007c14df: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007c14e2:; BB(0x007c14e2);
    /* 007c14e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007c14e3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7c14e8u); f_00858882();
    /* 007c14e8: add esp, 0x20c */ {  u32 a = r_esp; u32 b = 0x20cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c14ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c14ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c14f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007c14f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007c14f2: ret  */ FN_RET(0x007c1424); r_esp += 4; return;
}

void f_007c14f4(void) /* sub_7C14F4 */
{
    FN_ENTER(0x007c14f4);
    /* 007c14f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c14f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007c14f7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007c14f9: call 0x7c1518 */ r_esp -= 4; W32(r_esp, 0x7c14feu); f_007c1518();
    /* 007c14fe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007c1502: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1504: jne 0x7c150a */ if (!fZ) goto L_007c150a;
L_007c1506:; BB(0x007c1506);
    /* 007c1506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c1507: ret 4 */ FN_RET(0x007c14f4); r_esp += 8; return;
L_007c150a:; BB(0x007c150a);
    /* 007c150a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c150b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7c1510u); f_005c2f74();
    /* 007c1510: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c1511: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c1512: ret 4 */ FN_RET(0x007c14f4); r_esp += 8; return;
}

void f_007c1518(void) /* sub_7C1518 */
{
    FN_ENTER(0x007c1518);
    /* 007c1518: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c1519: mov ebp, esp */ r_ebp = r_esp;
    /* 007c151b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c151d: push 0x8f67a0 */ { u32 v = 0x8f67a0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1522: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c1528: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1529: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c1530: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c1533: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c1536: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c1539: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c153c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c153f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007c1542: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c1545: mov dword ptr [ecx], 0xb46d58 */ W32((u32)(r_ecx), 0xb46d58u);
    /* 007c154b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c1552: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7c1557u); f_008171e8();
    /* 007c1557: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c155a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c1561: mov esp, ebp */ r_esp = r_ebp;
    /* 007c1563: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c1564: ret  */ FN_RET(0x007c1518); r_esp += 4; return;
}

void f_007c1568(void) /* sub_7C1568 */
{
    FN_ENTER(0x007c1568);
    /* 007c1568: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 007c156b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c156d: je 0x7c157e */ if (fZ) goto L_007c157e;
L_007c156f:; BB(0x007c156f);
    /* 007c156f: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 007c1572: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1574: je 0x7c157d */ if (fZ) goto L_007c157d;
L_007c1576:; BB(0x007c1576);
    /* 007c1576: mov byte ptr [0xaae988], 1 */ W8((u32)(0xaae988u), 0x1u);
L_007c157d:; BB(0x007c157d);
    /* 007c157d: ret  */ FN_RET(0x007c1568); r_esp += 4; return;
L_007c157e:; BB(0x007c157e);
    /* 007c157e: mov byte ptr [0xaae988], 1 */ W8((u32)(0xaae988u), 0x1u);
    /* 007c1585: ret  */ FN_RET(0x007c1568); r_esp += 4; return;
}

void f_007c1588(void) /* sub_7C1588 */
{
    FN_ENTER(0x007c1588);
    /* 007c1588: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7c158du); f_007becd4();
    /* 007c158d: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7c1592u); f_007bfba0();
    /* 007c1592: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007c1597: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7c159cu); f_0061cdb0();
    /* 007c159c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007c15a1: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7c15a6u); f_0081745c();
    /* 007c15a6: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007c15ab: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x7c15b0u); f_00817604();
    /* 007c15b0: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007c15b5: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7c15bau); f_00818f80();
    /* 007c15ba: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7c15bfu); f_005ba748();
    /* 007c15bf: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7c15c4u); f_00814168();
    /* 007c15c4: movsx eax, byte ptr [0xaae988] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaae988u));
    /* 007c15cb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c15ce: je 0x7c15f8 */ if (fZ) goto L_007c15f8;
L_007c15d0:; BB(0x007c15d0);
    /* 007c15d0: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7c15d5u); f_007bfedc();
    /* 007c15d5: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007c15d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c15da: je 0x7c15e1 */ if (fZ) goto L_007c15e1;
L_007c15dc:; BB(0x007c15dc);
    /* 007c15dc: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x7c15e1u); f_007a6174();
L_007c15e1:; BB(0x007c15e1);
    /* 007c15e1: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7c15e6u); f_006dc358();
    /* 007c15e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c15e8: je 0x7c15f2 */ if (fZ) goto L_007c15f2;
L_007c15ea:; BB(0x007c15ea);
    /* 007c15ea: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c15ec: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7c15f1u); f_007a60dc();
    /* 007c15f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007c15f2:; BB(0x007c15f2);
    /* 007c15f2: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7c15f7u); f_0080030c();
    /* 007c15f7: ret  */ FN_RET(0x007c1588); r_esp += 4; return;
L_007c15f8:; BB(0x007c15f8);
    /* 007c15f8: movsx eax, byte ptr [0xaae980] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaae980u));
    /* 007c15ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1601: jne 0x7c160d */ if (!fZ) goto L_007c160d;
L_007c1603:; BB(0x007c1603);
    /* 007c1603: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1605: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7c160au); f_007a60dc();
    /* 007c160a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c160b: jmp 0x7c15d0 */ goto L_007c15d0;
L_007c160d:; BB(0x007c160d);
    /* 007c160d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1610: jne 0x7c15d0 */ if (!fZ) goto L_007c15d0;
L_007c1612:; BB(0x007c1612);
    /* 007c1612: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1614: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7c1619u); f_007a60dc();
    /* 007c1619: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c161a: jmp 0x7c15d0 */ goto L_007c15d0;
}

void f_007c161c(void) /* sub_7C161C */
{
    FN_ENTER(0x007c161c);
    /* 007c161c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007c1621: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7c1626u); f_00818560();
    /* 007c1626: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7c162bu); f_0080030c();
    /* 007c162b: ret  */ FN_RET(0x007c161c); r_esp += 4; return;
}

void f_007c162c(void) /* sub_7C162C */
{
    FN_ENTER(0x007c162c);
    /* 007c162c: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 007c1631: mov byte ptr [0xaae980], al */ W8((u32)(0xaae980u), (u8)r_eax);
    /* 007c1636: ret  */ FN_RET(0x007c162c); r_esp += 4; return;
}

void f_007c1638(void) /* sub_7C1638 */
{
    FN_ENTER(0x007c1638);
    /* 007c1638: mov eax, dword ptr [0xaae984] */ r_eax = R32((u32)(0xaae984u));
    /* 007c163d: ret  */ FN_RET(0x007c1638); r_esp += 4; return;
}

void f_007c1640(void) /* sub_7C1640 */
{
    FN_ENTER(0x007c1640);
    /* 007c1640: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c1641: mov ebp, esp */ r_ebp = r_esp;
    /* 007c1643: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1645: push 0x8f67bc */ { u32 v = 0x8f67bcu; r_esp -= 4; W32(r_esp, v); }
    /* 007c164a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c1650: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1651: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c1658: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c165b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c165e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c1661: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c1664: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c1667: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007c166d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007c1670: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7c1675u); f_008193cc();
    /* 007c1675: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007c167c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c167f: mov dword ptr [eax], 0xb46d58 */ W32((u32)(r_eax), 0xb46d58u);
    /* 007c1685: call 0x7932e8 */ r_esp -= 4; W32(r_esp, 0x7c168au); f_007932e8();
    /* 007c168a: call 0x6fb8ec */ r_esp -= 4; W32(r_esp, 0x7c168fu); f_006fb8ec();
    /* 007c168f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1692: je 0x7c16f2 */ if (fZ) goto L_007c16f2;
L_007c1694:; BB(0x007c1694);
    /* 007c1694: movsx eax, byte ptr [0xaae980] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaae980u));
    /* 007c169b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c169d: jne 0x7c16be */ if (!fZ) goto L_007c16be;
L_007c169f:; BB(0x007c169f);
    /* 007c169f: push 0x399 */ { u32 v = 0x399u; r_esp -= 4; W32(r_esp, v); }
    /* 007c16a4: push 0x96ee34 */ { u32 v = 0x96ee34u; r_esp -= 4; W32(r_esp, v); }
    /* 007c16a9: push 0x96ee28 */ { u32 v = 0x96ee28u; r_esp -= 4; W32(r_esp, v); }
    /* 007c16ae: call 0x70f41c */ r_esp -= 4; W32(r_esp, 0x7c16b3u); f_0070f41c();
    /* 007c16b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c16b6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c16b9: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007c16bc: jmp 0x7c16e2 */ goto L_007c16e2;
L_007c16be:; BB(0x007c16be);
    /* 007c16be: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 007c16c3: push 0x48f */ { u32 v = 0x48fu; r_esp -= 4; W32(r_esp, v); }
    /* 007c16c8: push 0x979310 */ { u32 v = 0x979310u; r_esp -= 4; W32(r_esp, v); }
    /* 007c16cd: push dword ptr [eax*4 + 0xa0f740] */ { u32 v = R32((u32)(r_eax*4+0xa0f740u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c16d4: call 0x70f41c */ r_esp -= 4; W32(r_esp, 0x7c16d9u); f_0070f41c();
    /* 007c16d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007c16dc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c16df: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
L_007c16e2:; BB(0x007c16e2);
    /* 007c16e2: mov eax, edx */ r_eax = r_edx;
    /* 007c16e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c16e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c16ee: mov esp, ebp */ r_esp = r_ebp;
    /* 007c16f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c16f1: ret  */ FN_RET(0x007c1640); r_esp += 4; return;
L_007c16f2:; BB(0x007c16f2);
    /* 007c16f2: mov eax, dword ptr [0xa3b0a4] */ r_eax = R32((u32)(0xa3b0a4u));
    /* 007c16f7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c16fa: jne 0x7c1694 */ if (!fZ) goto L_007c1694;
L_007c16fc:; BB(0x007c16fc);
    /* 007c16fc: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c16ff: mov byte ptr [0xaae988], 1 */ W8((u32)(0xaae988u), 0x1u);
    /* 007c1706: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c1709: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c1710: mov esp, ebp */ r_esp = r_ebp;
    /* 007c1712: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c1713: ret  */ FN_RET(0x007c1640); r_esp += 4; return;
}

void f_007c1714(void) /* sub_7C1714 */
{
    FN_ENTER(0x007c1714);
    /* 007c1714: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c1715: mov ebp, esp */ r_ebp = r_esp;
    /* 007c1717: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1719: push 0x8f67e4 */ { u32 v = 0x8f67e4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c171e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c1724: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1725: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c172c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c172f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c1732: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c1735: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c1738: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c173b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c173d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c173e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c173f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1740: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x7c1745u); f_0082acd8();
    /* 007c1745: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007c1748: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7c174du); f_007bebe8();
    /* 007c174d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007c174f: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7c1754u); f_007a6198();
    /* 007c1754: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c1755: movsx eax, byte ptr [0xaae980] */ r_eax = (u32)(i32)(i8)R8((u32)(0xaae980u));
    /* 007c175c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c175e: je 0x7c1774 */ if (fZ) goto L_007c1774;
L_007c1760:; BB(0x007c1760);
    /* 007c1760: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1763: jne 0x7c1774 */ if (!fZ) goto L_007c1774;
L_007c1765:; BB(0x007c1765);
    /* 007c1765: call 0x7933bc */ r_esp -= 4; W32(r_esp, 0x7c176au); f_007933bc();
    /* 007c176a: call 0x6c78b8 */ r_esp -= 4; W32(r_esp, 0x7c176fu); f_006c78b8();
    /* 007c176f: call 0x793190 */ r_esp -= 4; W32(r_esp, 0x7c1774u); f_00793190();
L_007c1774:; BB(0x007c1774);
    /* 007c1774: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1776: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007c1778: mov byte ptr [0xaae988], al */ W8((u32)(0xaae988u), (u8)r_eax);
    /* 007c177d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007c1780: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7c1785u); f_005caba4();
    /* 007c1785: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c1786: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007c1789: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c178b: je 0x7c17aa */ if (fZ) goto L_007c17aa;
L_007c178d:; BB(0x007c178d);
    /* 007c178d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007c1794: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007c179b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c179e: call 0x7c1640 */ r_esp -= 4; W32(r_esp, 0x7c17a3u); f_007c1640();
    /* 007c17a3: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007c17aa:; BB(0x007c17aa);
    /* 007c17aa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c17b1: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7c17b6u); f_0080030c();
    /* 007c17b6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c17b9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c17c0: mov esp, ebp */ r_esp = r_ebp;
    /* 007c17c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c17c3: ret  */ FN_RET(0x007c1714); r_esp += 4; return;
}

void f_007c17c4(void) /* sub_7C17C4 */
{
    FN_ENTER(0x007c17c4);
    /* 007c17c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c17c5: mov ebp, esp */ r_ebp = r_esp;
    /* 007c17c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c17c9: push 0x8f6860 */ { u32 v = 0x8f6860u; r_esp -= 4; W32(r_esp, v); }
    /* 007c17ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c17d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c17d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c17dc: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c17df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c17e2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007c17e5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007c17e8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007c17eb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007c17ee: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 007c17f1: mov eax, ecx */ r_eax = r_ecx;
    /* 007c17f3: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007c17f6: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 007c17f9: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007c17fc: add eax, 0x3e0 */ {  u32 a = r_eax; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1801: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007c1804: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 007c1807: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c180a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007c180d: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007c1814: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1819: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007c181c: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c181f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1821: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1823: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1824: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c1829u); f_008586d6();
    /* 007c1829: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007c1830: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1835: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007c1838: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c183b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c183d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c183f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1840: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c1845u); f_008586d6();
    /* 007c1845: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 007c1848: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007c184b: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007c1852: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1857: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007c185a: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c185d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c185f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1861: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1862: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c1867u); f_008586d6();
    /* 007c1867: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c186e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1873: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007c1876: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1879: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c187b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c187d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c187e: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c1883u); f_008586d6();
    /* 007c1883: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007c1886: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1888: jne 0x7c189a */ if (!fZ) goto L_007c189a;
L_007c188a:; BB(0x007c188a);
    /* 007c188a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c188d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c1894: mov esp, ebp */ r_esp = r_ebp;
    /* 007c1896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c1897: ret 4 */ FN_RET(0x007c17c4); r_esp += 8; return;
L_007c189a:; BB(0x007c189a);
    /* 007c189a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007c189d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c189f: je 0x7c188a */ if (fZ) goto L_007c188a;
L_007c18a1:; BB(0x007c18a1);
    /* 007c18a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c18a2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x7c18a7u); f_00858882();
    /* 007c18a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c18a8: jmp 0x7c188a */ goto L_007c188a;
}

void f_007c18ac(void)
{
    FN_ENTER(0x007c18ac);
    /* 007c18ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c18ad: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007c18af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007c18b1: call 0x7c18d4 */ r_esp -= 4; W32(r_esp, 0x7c18b6u); f_007c18d4();
    /* 007c18b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007c18ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c18bc: jne 0x7c18c2 */ if (!fZ) goto L_007c18c2;
L_007c18be:; BB(0x007c18be);
    /* 007c18be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c18bf: ret 4 */ FN_RET(0x007c18ac); r_esp += 8; return;
L_007c18c2:; BB(0x007c18c2);
    /* 007c18c2: mov ecx, dword ptr [0xaab404] */ r_ecx = R32((u32)(0xaab404u));
    /* 007c18c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c18c9: call 0x7a8b04 */ r_esp -= 4; W32(r_esp, 0x7c18ceu); f_007a8b04();
    /* 007c18ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c18cf: ret 4 */ FN_RET(0x007c18ac); r_esp += 8; return;
}

void f_007c18d4(void) /* sub_7C18D4 */
{
    FN_ENTER(0x007c18d4);
    /* 007c18d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c18d5: mov ebp, esp */ r_ebp = r_esp;
    /* 007c18d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c18d9: push 0x8f68da */ { u32 v = 0x8f68dau; r_esp -= 4; W32(r_esp, v); }
    /* 007c18de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007c18e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c18e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007c18ec: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c18ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007c18f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007c18f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007c18f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007c18fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007c18fe: mov dword ptr [ecx], 0xb471a8 */ W32((u32)(r_ecx), 0xb471a8u);
    /* 007c1904: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c1907: add eax, 0x121d8 */ {  u32 a = r_eax; u32 b = 0x121d8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c190c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007c190f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 007c1912: add eax, 0x3e0 */ {  u32 a = r_eax; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1917: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 007c191a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 007c191d: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1920: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007c1923: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007c192a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c192f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007c1932: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1935: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1937: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1939: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c193a: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c193fu); f_008586d6();
    /* 007c193f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007c1946: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c194b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007c194e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1951: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1953: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1955: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1956: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c195bu); f_008586d6();
    /* 007c195b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 007c195e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007c1961: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007c1968: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c196d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007c1970: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c1973: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1975: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1978: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c197du); f_008586d6();
    /* 007c197d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007c1984: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1989: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007c198c: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007c198f: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1991: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1993: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007c1994: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x7c1999u); f_008586d6();
    /* 007c1999: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007c19a0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007c19a3: call 0x77f464 */ r_esp -= 4; W32(r_esp, 0x7c19a8u); f_0077f464();
    /* 007c19a8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007c19ab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007c19b2: mov esp, ebp */ r_esp = r_ebp;
    /* 007c19b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007c19b5: ret  */ FN_RET(0x007c18d4); r_esp += 4; return;
}

void f_007c19b8(void) /* sub_7C19B8 */
{
    FN_ENTER(0x007c19b8);
    /* 007c19b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007c19b9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7c19beu); f_006dc358();
    /* 007c19be: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c19c1: jne 0x7c19ca */ if (!fZ) goto L_007c19ca;
L_007c19c3:; BB(0x007c19c3);
    /* 007c19c3: mov ebx, 0x44 */ r_ebx = 0x44u;
    /* 007c19c8: jmp 0x7c19db */ goto L_007c19db;
L_007c19ca:; BB(0x007c19ca);
    /* 007c19ca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c19cd: jne 0x7c19d6 */ if (!fZ) goto L_007c19d6;
L_007c19cf:; BB(0x007c19cf);
    /* 007c19cf: mov ebx, 0x42 */ r_ebx = 0x42u;
    /* 007c19d4: jmp 0x7c19db */ goto L_007c19db;
L_007c19d6:; BB(0x007c19d6);
    /* 007c19d6: mov ebx, 0x41 */ r_ebx = 0x41u;
L_007c19db:; BB(0x007c19db);
    /* 007c19db: call 0x708514 */ r_esp -= 4; W32(r_esp, 0x7c19e0u); f_00708514();
    /* 007c19e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c19e2: je 0x7c19ed */ if (fZ) goto L_007c19ed;
L_007c19e4:; BB(0x007c19e4);
    /* 007c19e4: and ebx, 0xffffff0f */ {  u32 a = r_ebx; u32 b = 0xffffff0fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007c19ea: or ebx, 0x50 */ {  u32 a = r_ebx; u32 b = 0x50u; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_007c19ed:; BB(0x007c19ed);
    /* 007c19ed: mov eax, ebx */ r_eax = r_ebx;
    /* 007c19ef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007c19f0: ret  */ FN_RET(0x007c19b8); r_esp += 4; return;
}

void f_007c19f4(void)
{
    FN_ENTER(0x007c19f4);
    /* 007c19f4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007c19f8: movzx eax, byte ptr [edx + 3] */ r_eax = (u32)R8((u32)(r_edx+0x3u));
    /* 007c19fc: cmp eax, 0x21 */ {  u32 a = r_eax; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c19ff: jge 0x7c1a0f */ if ((fS==fO)) goto L_007c1a0f;
L_007c1a01:; BB(0x007c1a01);
    /* 007c1a01: mov eax, dword ptr [eax*8 + 0xa0f804] */ r_eax = R32((u32)(r_eax*8+0xa0f804u));
    /* 007c1a08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007c1a0a: je 0x7c1a0f */ if (fZ) goto L_007c1a0f;
L_007c1a0c:; BB(0x007c1a0c);
    /* 007c1a0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007c1a0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x7c1a0fu); call_ind(t); }
L_007c1a0f:; BB(0x007c1a0f);
    /* 007c1a0f: ret 4 */ FN_RET(0x007c19f4); r_esp += 8; return;
}

void f_007c1a14(void)
{
    FN_ENTER(0x007c1a14);
    /* 007c1a14: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c1a18: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007c1a1b: call 0x78bf4c */ r_esp -= 4; W32(r_esp, 0x7c1a20u); f_0078bf4c();
    /* 007c1a20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007c1a21: ret 4 */ FN_RET(0x007c1a14); r_esp += 8; return;
}

void f_007c1a24(void)
{
    FN_ENTER(0x007c1a24);
    /* 007c1a24: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007c1a28: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 007c1a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007c1a2d: jne 0x7c1a37 */ if (!fZ) goto L_007c1a37;
L_007c1a2f:; BB(0x007c1a2f);
    /* 007c1a2f: call 0x79e528 */ r_esp -= 4; W32(r_esp, 0x7c1a34u); f_0079e528();
    /* 007c1a34: ret 4 */ FN_RET(0x007c1a24); r_esp += 8; return;
L_007c1a37:; BB(0x007c1a37);
    /* 007c1a37: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c1a3a: jb 0x7c1a41 */ if (fC) goto L_007c1a41;
L_007c1a3c:; BB(0x007c1a3c);
    /* 007c1a3c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007c1a3f: jbe 0x7c1a44 */ if ((fC||fZ)) goto L_007c1a44;
L_007c1a41:; BB(0x007c1a41);
    /* 007c1a41: ret 4 */ FN_RET(0x007c1a24); r_esp += 8; return;
L_007c1a44:; BB(0x007c1a44);
    /* 007c1a44: call 0x7a0cd0 */ r_esp -= 4; W32(r_esp, 0x7c1a49u); f_007a0cd0();
    /* 007c1a49: ret 4 */ FN_RET(0x007c1a24); r_esp += 8; return;
}

void f_007c1a4c(void)
{
    FN_ENTER(0x007c1a4c);
    /* 007c1a4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007c1a4d: mov ebp, esp */ r_ebp = r_esp;
    /* 007c1a4f: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007c1a52: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 007c1a55: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 007c1a58: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 007c1a5b: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 007c1a5e: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007c1a5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1a61: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1a63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007c1a65: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007c1a67: call dword ptr [0x8f8348] */ { u32 t = R32((u32)(0x8f8348u)); r_esp -= 4; W32(r_esp, 0x7c1a6du); call_ind(t); }
    /* 007c1a6d: popal  */ { r_edi = R32(r_esp); r_esi = R32(r_esp + 4); r_ebp = R32(r_esp + 8); r_ebx = R32(r_esp + 16); r_edx = R32(r_esp + 20); r_ecx = R32(r_esp + 24); r_eax = R32(r_esp + 28); r_esp += 32; }
    /* 007c1a6e: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 007c1a6f: jmp 0x7c4c90 */ f_007c4c90(); return;
}

