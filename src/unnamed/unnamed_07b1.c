#include "protos.h"

void f_007b1134(void) /* sub_7B1134 */
{
    FN_ENTER(0x007b1134);
    /* 007b1134: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1135: mov edi, ecx */ r_edi = r_ecx;
    /* 007b1137: mov ecx, edi */ r_ecx = r_edi;
    /* 007b1139: call 0x7b1220 */ r_esp -= 4; W32(r_esp, 0x7b113eu); f_007b1220();
    /* 007b113e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b1140: jne 0x7b1199 */ if (!fZ) goto L_007b1199;
L_007b1142:; BB(0x007b1142);
    /* 007b1142: mov edx, dword ptr [edi + 0x80] */ r_edx = R32((u32)(r_edi+0x80u));
    /* 007b1148: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b114b: je 0x7b1195 */ if (fZ) goto L_007b1195;
L_007b114d:; BB(0x007b114d);
    /* 007b114d: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 007b1150: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b1153: je 0x7b1195 */ if (fZ) goto L_007b1195;
L_007b1155:; BB(0x007b1155);
    /* 007b1155: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1158: mov dword ptr [edi + 0x7c], 0 */ W32((u32)(r_edi+0x7cu), 0x0u);
    /* 007b115f: and edx, 0xffffefcf */ {  u32 a = r_edx; u32 b = 0xffffefcfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b1165: mov dword ptr [edi + 0x80], edx */ W32((u32)(r_edi+0x80u), r_edx);
    /* 007b116b: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b1171: mov edx, dword ptr [ecx + 0x300] */ r_edx = R32((u32)(r_ecx+0x300u));
    /* 007b1177: mov dword ptr [edi + 0xdc], edx */ W32((u32)(r_edi+0xdcu), r_edx);
    /* 007b117d: mov eax, dword ptr [ecx + 0x304] */ r_eax = R32((u32)(r_ecx+0x304u));
    /* 007b1183: mov dword ptr [edi + 0xe0], eax */ W32((u32)(r_edi+0xe0u), r_eax);
    /* 007b1189: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 007b118f: mov dword ptr [edi + 0xe4], eax */ W32((u32)(r_edi+0xe4u), r_eax);
L_007b1195:; BB(0x007b1195);
    /* 007b1195: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b1197: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b1198: ret  */ FN_RET(0x007b1134); r_esp += 4; return;
L_007b1199:; BB(0x007b1199);
    /* 007b1199: mov ecx, edi */ r_ecx = r_edi;
    /* 007b119b: call 0x7b1298 */ r_esp -= 4; W32(r_esp, 0x7b11a0u); f_007b1298();
    /* 007b11a0: mov ecx, edi */ r_ecx = r_edi;
    /* 007b11a2: call 0x7b267c */ r_esp -= 4; W32(r_esp, 0x7b11a7u); f_007b267c();
    /* 007b11a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b11a9: je 0x7b11f4 */ if (fZ) goto L_007b11f4;
L_007b11ab:; BB(0x007b11ab);
    /* 007b11ab: mov eax, dword ptr [edi + 0xd0] */ r_eax = R32((u32)(r_edi+0xd0u));
    /* 007b11b1: mov edx, dword ptr [edi + 0xd4] */ r_edx = R32((u32)(r_edi+0xd4u));
    /* 007b11b7: mov dword ptr [edi + 0xac], eax */ W32((u32)(r_edi+0xacu), r_eax);
    /* 007b11bd: mov eax, dword ptr [edi + 0xd8] */ r_eax = R32((u32)(r_edi+0xd8u));
    /* 007b11c3: mov dword ptr [edi + 0xb0], edx */ W32((u32)(r_edi+0xb0u), r_edx);
    /* 007b11c9: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 007b11cf: mov eax, dword ptr [edi + 0x7c] */ r_eax = R32((u32)(r_edi+0x7cu));
    /* 007b11d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007b11d5: je 0x7b1218 */ if (fZ) goto L_007b1218;
L_007b11d7:; BB(0x007b11d7);
    /* 007b11d7: mov eax, dword ptr [edi + 0x80] */ r_eax = R32((u32)(r_edi+0x80u));
    /* 007b11dd: mov dword ptr [edi + 0x7c], 1 */ W32((u32)(r_edi+0x7cu), 0x1u);
    /* 007b11e4: and eax, 0xffffefef */ {  u32 a = r_eax; u32 b = 0xffffefefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b11e9: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b11ec: mov dword ptr [edi + 0x80], eax */ W32((u32)(r_edi+0x80u), r_eax);
    /* 007b11f2: jmp 0x7b1218 */ goto L_007b1218;
L_007b11f4:; BB(0x007b11f4);
    /* 007b11f4: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b11f7: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b11fd: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 007b1200: mov dword ptr [edi + 0xac], edx */ W32((u32)(r_edi+0xacu), r_edx);
    /* 007b1206: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 007b1209: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 007b120f: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 007b1212: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
L_007b1218:; BB(0x007b1218);
    /* 007b1218: mov eax, 1 */ r_eax = 0x1u;
    /* 007b121d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b121e: ret  */ FN_RET(0x007b1134); r_esp += 4; return;
}

void f_007b1220(void) /* sub_7B1220 */
{
    FN_ENTER(0x007b1220);
    /* 007b1220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b1221: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1222: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007b1224: mov eax, dword ptr [ebp + 0x80] */ r_eax = R32((u32)(r_ebp+0x80u));
    /* 007b122a: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b122c: jne 0x7b1279 */ if (!fZ) goto L_007b1279;
L_007b122e:; BB(0x007b122e);
    /* 007b122e: fld dword ptr [0x97dd90] */ FPUSH(R_F32((u32)(0x97dd90u)));
    /* 007b1234: fadd dword ptr [ebp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x40u));
    /* 007b1237: fld dword ptr [0x97dd8c] */ FPUSH(R_F32((u32)(0x97dd8cu)));
    /* 007b123d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007b123f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1241: mov edx, dword ptr [ebp + 0x78] */ r_edx = R32((u32)(r_ebp+0x78u));
    /* 007b1244: lea ecx, [ebp + 0xdc] */ r_ecx = (u32)(r_ebp+0xdcu);
    /* 007b124a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b124b: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b1251: ja 0x7b1255 */ if ((!fC&&!fZ)) goto L_007b1255;
L_007b1253:; BB(0x007b1253);
    /* 007b1253: fst st(1) */ ST(1) = ST(0);
L_007b1255:; BB(0x007b1255);
    /* 007b1255: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b1257: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b125a: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b125d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b125e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b125f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x7b1264u); f_007a9180();
    /* 007b1264: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 007b1267: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b126a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 007b126c: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007b126e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1270: fstp dword ptr [ebp + 0x88] */ W_F32((u32)(r_ebp+0x88u), ST(0)); FPOP();
    /* 007b1276: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1277: ja 0x7b1281 */ if ((!fC&&!fZ)) goto L_007b1281;
L_007b1279:; BB(0x007b1279);
    /* 007b1279: mov eax, 1 */ r_eax = 0x1u;
    /* 007b127e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b127f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1280: ret  */ FN_RET(0x007b1220); r_esp += 4; return;
L_007b1281:; BB(0x007b1281);
    /* 007b1281: mov edx, dword ptr [ebp + 0x80] */ r_edx = R32((u32)(r_ebp+0x80u));
    /* 007b1287: and edx, 0xfffffeff */ {  u32 a = r_edx; u32 b = 0xfffffeffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b128d: mov dword ptr [ebp + 0x80], edx */ W32((u32)(r_ebp+0x80u), r_edx);
    /* 007b1293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b1295: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007b1296: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1297: ret  */ FN_RET(0x007b1220); r_esp += 4; return;
}

void f_007b1298(void) /* sub_7B1298 */
{
    FN_ENTER(0x007b1298);
    /* 007b1298: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1299: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b129a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007b129b: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b12a1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007b12a3: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007b12a7: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 007b12aa: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b12b0: fld dword ptr [ebx + 0xdc] */ FPUSH(R_F32((u32)(r_ebx+0xdcu)));
    /* 007b12b6: fsub dword ptr [edx + 0x300] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x300u));
    /* 007b12bc: fld dword ptr [ebx + 0xe0] */ FPUSH(R_F32((u32)(r_ebx+0xe0u)));
    /* 007b12c2: fsub dword ptr [edx + 0x304] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x304u));
    /* 007b12c8: fld dword ptr [ebx + 0xe4] */ FPUSH(R_F32((u32)(r_ebx+0xe4u)));
    /* 007b12ce: fsub dword ptr [edx + 0x308] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x308u));
    /* 007b12d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b12d6: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007b12da: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 007b12de: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 007b12e2: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b12e7u); f_0083173c();
    /* 007b12e7: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b12eb: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b12ef: fcomp dword ptr [0x97dd88] */ fx_compare(ST(0), R_F32((u32)(0x97dd88u))); FPOP();
    /* 007b12f5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b12f7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b12f8: je 0x7b1305 */ if (fZ) goto L_007b1305;
L_007b12fa:; BB(0x007b12fa);
    /* 007b12fa: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 007b12fe: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1303u); f_0082df08();
    /* 007b1303: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1305:; BB(0x007b1305);
    /* 007b1305: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1309: fmul dword ptr [0x97dd84] */ ST(0) = ST(0) * R_F32((u32)(0x97dd84u));
    /* 007b130f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b1313: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b1315: mov ebp, dword ptr [ebx + 0x78] */ r_ebp = R32((u32)(r_ebx+0x78u));
    /* 007b1318: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 007b131c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007b131e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1320: fmul dword ptr [esp + 0x14] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x14u));
    /* 007b1324: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 007b1328: mov edi, dword ptr [ebp + 0x94] */ r_edi = R32((u32)(r_ebp+0x94u));
    /* 007b132e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1330: fadd dword ptr [edi + 0x300] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x300u));
    /* 007b1336: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1338: fadd dword ptr [edi + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x304u));
    /* 007b133e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1340: fadd dword ptr [edi + 0x308] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x308u));
    /* 007b1346: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1348: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b134b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007b134f: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b1353: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b1357: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1358: lea ebp, [ebx + 0xdc] */ r_ebp = (u32)(r_ebx+0xdcu);
    /* 007b135e: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b1364: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b1365: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b1366: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b1368: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1369: call 0x7b18e0 */ r_esp -= 4; W32(r_esp, 0x7b136eu); f_007b18e0();
    /* 007b136e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b1370: je 0x7b176b */ if (fZ) goto L_007b176b;
L_007b1376:; BB(0x007b1376);
    /* 007b1376: mov edx, dword ptr [ebx + 0x78] */ r_edx = R32((u32)(r_ebx+0x78u));
    /* 007b1379: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b137f: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 007b1387: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007b138c: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 007b1394: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 007b1398: lea edx, [esp + 0x48] */ r_edx = (u32)(r_esp+0x48u);
    /* 007b139c: mov dword ptr [esp + 0x5c], 0 */ W32((u32)(r_esp+0x5cu), 0x0u);
    /* 007b13a4: lea edi, [esp + 0x54] */ r_edi = (u32)(r_esp+0x54u);
    /* 007b13a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b13a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b13aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b13ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b13ad: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 007b13b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b13b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b13b3: call 0x7b23a4 */ r_esp -= 4; W32(r_esp, 0x7b13b8u); f_007b23a4();
    /* 007b13b8: mov edi, eax */ r_edi = r_eax;
    /* 007b13ba: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 007b13c0: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b13c3: jne 0x7b14b9 */ if (!fZ) goto L_007b14b9;
L_007b13c9:; BB(0x007b13c9);
    /* 007b13c9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b13cb: je 0x7b13f5 */ if (fZ) goto L_007b13f5;
L_007b13cd:; BB(0x007b13cd);
    /* 007b13cd: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 007b13d1: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 007b13d5: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 007b13d9: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 007b13dd: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 007b13e3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 007b13e7: mov dword ptr [ebx + 0xa4], ebp */ W32((u32)(r_ebx+0xa4u), r_ebp);
    /* 007b13ed: mov dword ptr [ebx + 0xa8], edx */ W32((u32)(r_ebx+0xa8u), r_edx);
    /* 007b13f3: jmp 0x7b1461 */ goto L_007b1461;
L_007b13f5:; BB(0x007b13f5);
    /* 007b13f5: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 007b13f9: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 007b13ff: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007b1403: mov dword ptr [ebx + 0xa8], edx */ W32((u32)(r_ebx+0xa8u), r_edx);
    /* 007b1409: mov edx, dword ptr [ebx + 0xe0] */ r_edx = R32((u32)(r_ebx+0xe0u));
    /* 007b140f: mov dword ptr [ebx + 0xa4], edx */ W32((u32)(r_ebx+0xa4u), r_edx);
    /* 007b1415: lea edx, [esp + 0x60] */ r_edx = (u32)(r_esp+0x60u);
    /* 007b1419: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b141a: lea eax, [ebx + 0xa0] */ r_eax = (u32)(r_ebx+0xa0u);
    /* 007b1420: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b1422: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1423: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b1424: call 0x7b25c0 */ r_esp -= 4; W32(r_esp, 0x7b1429u); f_007b25c0();
    /* 007b1429: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b142b: je 0x7b1455 */ if (fZ) goto L_007b1455;
L_007b142d:; BB(0x007b142d);
    /* 007b142d: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 007b1431: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007b1435: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 007b1439: fld dword ptr [esp + 0x68] */ FPUSH(R_F32((u32)(r_esp+0x68u)));
    /* 007b143d: mov dword ptr [ebx + 0xa0], edx */ W32((u32)(r_ebx+0xa0u), r_edx);
    /* 007b1443: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 007b1447: mov dword ptr [ebx + 0xa4], ebp */ W32((u32)(r_ebx+0xa4u), r_ebp);
    /* 007b144d: mov dword ptr [ebx + 0xa8], edx */ W32((u32)(r_ebx+0xa8u), r_edx);
    /* 007b1453: jmp 0x7b1461 */ goto L_007b1461;
L_007b1455:; BB(0x007b1455);
    /* 007b1455: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 007b145b: fld dword ptr [ebx + 0xa8] */ FPUSH(R_F32((u32)(r_ebx+0xa8u)));
L_007b1461:; BB(0x007b1461);
    /* 007b1461: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1463: fsubr dword ptr [ebx + 0xdc] */ ST(0) = R_F32((u32)(r_ebx+0xdcu)) - ST(0);
    /* 007b1469: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b146b: fsubr dword ptr [ebx + 0xe4] */ ST(0) = R_F32((u32)(r_ebx+0xe4u)) - ST(0);
    /* 007b1471: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1473: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
    /* 007b1479: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 007b147f: mov dword ptr [ebx + 0x98], 0 */ W32((u32)(r_ebx+0x98u), 0x0u);
    /* 007b1489: lea ebp, [ebx + 0x94] */ r_ebp = (u32)(r_ebx+0x94u);
    /* 007b148f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b1491: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1496u); f_0083173c();
    /* 007b1496: fcomp dword ptr [0x97dd88] */ fx_compare(ST(0), R_F32((u32)(0x97dd88u))); FPOP();
    /* 007b149c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b149e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b149f: je 0x7b14aa */ if (fZ) goto L_007b14aa;
L_007b14a1:; BB(0x007b14a1);
    /* 007b14a1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007b14a3: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b14a8u); f_0082df08();
    /* 007b14a8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b14aa:; BB(0x007b14aa);
    /* 007b14aa: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 007b14b0: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b14b3: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
L_007b14b9:; BB(0x007b14b9);
    /* 007b14b9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b14bb: je 0x7b157f */ if (fZ) goto L_007b157f;
L_007b14c1:; BB(0x007b14c1);
    /* 007b14c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b14c3: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
    /* 007b14ca: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b14cd: jne 0x7b14f7 */ if (!fZ) goto L_007b14f7;
L_007b14cf:; BB(0x007b14cf);
    /* 007b14cf: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b14d3: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b14d7: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 007b14db: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 007b14e1: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 007b14e7: mov dword ptr [ebx + 0xd8], ebp */ W32((u32)(r_ebx+0xd8u), r_ebp);
    /* 007b14ed: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b14f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b14f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b14f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b14f6: ret  */ FN_RET(0x007b1298); r_esp += 4; return;
L_007b14f7:; BB(0x007b14f7);
    /* 007b14f7: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 007b14fa: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1500: fld dword ptr [ebx + 0xd0] */ FPUSH(R_F32((u32)(r_ebx+0xd0u)));
    /* 007b1506: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 007b1509: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 007b150f: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 007b1512: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1514: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 007b151b: fstp dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0)); FPOP();
    /* 007b1522: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 007b152d: lea ecx, [esp + 0x90] */ r_ecx = (u32)(r_esp+0x90u);
    /* 007b1534: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1539u); f_0083173c();
    /* 007b1539: fcomp dword ptr [0x97dd74] */ fx_compare(ST(0), R_F32((u32)(0x97dd74u))); FPOP();
    /* 007b153f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1541: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1542: ja 0x7b1761 */ if ((!fC&&!fZ)) goto L_007b1761;
L_007b1548:; BB(0x007b1548);
    /* 007b1548: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007b154c: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 007b1550: mov ebp, dword ptr [esp + 0x5c] */ r_ebp = R32((u32)(r_esp+0x5cu));
    /* 007b1554: mov edi, dword ptr [ebx + 0x80] */ r_edi = R32((u32)(r_ebx+0x80u));
    /* 007b155a: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 007b1560: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 007b1566: mov dword ptr [ebx + 0xd8], ebp */ W32((u32)(r_ebx+0xd8u), r_ebp);
    /* 007b156c: and edi, 0xfffffffd */ {  u32 a = r_edi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007b156f: mov dword ptr [ebx + 0x80], edi */ W32((u32)(r_ebx+0x80u), r_edi);
    /* 007b1575: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b157b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b157c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b157d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b157e: ret  */ FN_RET(0x007b1298); r_esp += 4; return;
L_007b157f:; BB(0x007b157f);
    /* 007b157f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b1582: je 0x7b168a */ if (fZ) goto L_007b168a;
L_007b1588:; BB(0x007b1588);
    /* 007b1588: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 007b158b: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1591: fld dword ptr [ebx + 0xd0] */ FPUSH(R_F32((u32)(r_ebx+0xd0u)));
    /* 007b1597: fsub dword ptr [edx + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x38u));
    /* 007b159a: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 007b15a0: fsub dword ptr [edx + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x40u));
    /* 007b15a3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b15a5: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 007b15a9: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 007b15b0: mov dword ptr [esp + 0x7c], 0 */ W32((u32)(r_esp+0x7cu), 0x0u);
    /* 007b15b8: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 007b15bc: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b15c1u); f_0083173c();
    /* 007b15c1: fcomp dword ptr [0x97dd78] */ fx_compare(ST(0), R_F32((u32)(0x97dd78u))); FPOP();
    /* 007b15c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b15c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b15ca: jbe 0x7b15d8 */ if ((fC||fZ)) goto L_007b15d8;
L_007b15cc:; BB(0x007b15cc);
    /* 007b15cc: movsx edx, word ptr [ebx + 0x90] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x90u));
    /* 007b15d3: jmp 0x7b1658 */ goto L_007b1658;
L_007b15d8:; BB(0x007b15d8);
    /* 007b15d8: lea ebp, [esp + 0x48] */ r_ebp = (u32)(r_esp+0x48u);
    /* 007b15dc: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 007b15e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b15e4: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 007b15e7: mov edi, dword ptr [eax + 0x94] */ r_edi = R32((u32)(r_eax+0x94u));
    /* 007b15ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b15ee: add edi, 0x300 */ {  u32 a = r_edi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b15f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b15f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b15f7: call 0x7b25c0 */ r_esp -= 4; W32(r_esp, 0x7b15fcu); f_007b25c0();
    /* 007b15fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b15fe: je 0x7b1629 */ if (fZ) goto L_007b1629;
L_007b1600:; BB(0x007b1600);
    /* 007b1600: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 007b1607: mov edx, dword ptr [esp + 0x88] */ r_edx = R32((u32)(r_esp+0x88u));
    /* 007b160e: mov ebp, dword ptr [esp + 0x8c] */ r_ebp = R32((u32)(r_esp+0x8cu));
    /* 007b1615: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 007b161b: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 007b1621: mov dword ptr [ebx + 0xd8], ebp */ W32((u32)(r_ebx+0xd8u), r_ebp);
    /* 007b1627: jmp 0x7b1647 */ goto L_007b1647;
L_007b1629:; BB(0x007b1629);
    /* 007b1629: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b162d: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b1631: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 007b1635: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 007b163b: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 007b1641: mov dword ptr [ebx + 0xd8], ebp */ W32((u32)(r_ebx+0xd8u), r_ebp);
L_007b1647:; BB(0x007b1647);
    /* 007b1647: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b164d: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b1650: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 007b1656: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007b1658:; BB(0x007b1658);
    /* 007b1658: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b165b: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 007b165e: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b1661: jge 0x7b1674 */ if ((fS==fO)) goto L_007b1674;
L_007b1663:; BB(0x007b1663);
    /* 007b1663: mov word ptr [ebx + 0x90], dx */ W16((u32)(r_ebx+0x90u), (u16)r_edx);
    /* 007b166a: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b1670: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b1671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1672: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b1673: ret  */ FN_RET(0x007b1298); r_esp += 4; return;
L_007b1674:; BB(0x007b1674);
    /* 007b1674: mov eax, 0x64 */ r_eax = 0x64u;
    /* 007b1679: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
    /* 007b1680: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b1686: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b1687: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1688: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b1689: ret  */ FN_RET(0x007b1298); r_esp += 4; return;
L_007b168a:; BB(0x007b168a);
    /* 007b168a: mov edx, dword ptr [ebx + 0x78] */ r_edx = R32((u32)(r_ebx+0x78u));
    /* 007b168d: fld dword ptr [ebx + 0xd0] */ FPUSH(R_F32((u32)(r_ebx+0xd0u)));
    /* 007b1693: fld dword ptr [ebx + 0xd8] */ FPUSH(R_F32((u32)(r_ebx+0xd8u)));
    /* 007b1699: mov edi, dword ptr [ebx + 0xa0] */ r_edi = R32((u32)(r_ebx+0xa0u));
    /* 007b169f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b16a1: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
    /* 007b16a8: mov ebp, dword ptr [edx + 0x94] */ r_ebp = R32((u32)(r_edx+0x94u));
    /* 007b16ae: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b16b0: fsub dword ptr [ebp + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x38u));
    /* 007b16b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b16b5: fsub dword ptr [ebp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x40u));
    /* 007b16b8: mov eax, dword ptr [ebx + 0xa4] */ r_eax = R32((u32)(r_ebx+0xa4u));
    /* 007b16be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b16c0: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007b16c4: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007b16c8: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 007b16d0: mov dword ptr [ebx + 0xd0], edi */ W32((u32)(r_ebx+0xd0u), r_edi);
    /* 007b16d6: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 007b16dc: lea ecx, [esp + 0x6c] */ r_ecx = (u32)(r_esp+0x6cu);
    /* 007b16e0: mov eax, dword ptr [ebx + 0xa8] */ r_eax = R32((u32)(r_ebx+0xa8u));
    /* 007b16e6: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 007b16ec: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b16f1u); f_0083173c();
    /* 007b16f1: fcomp dword ptr [0x97dd80] */ fx_compare(ST(0), R_F32((u32)(0x97dd80u))); FPOP();
    /* 007b16f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b16f9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b16fa: jae 0x7b1761 */ if (!fC) goto L_007b1761;
L_007b16fc:; BB(0x007b16fc);
    /* 007b16fc: fld dword ptr [0x97dd7c] */ FPUSH(R_F32((u32)(0x97dd7cu)));
    /* 007b1702: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 007b1708: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b170a: fadd dword ptr [ebx + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa0u));
    /* 007b1710: fld dword ptr [ebx + 0x98] */ FPUSH(R_F32((u32)(r_ebx+0x98u)));
    /* 007b1716: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 007b171c: mov edx, dword ptr [ebx + 0x80] */ r_edx = R32((u32)(r_ebx+0x80u));
    /* 007b1722: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1724: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 007b1726: fadd dword ptr [ebx + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa4u));
    /* 007b172c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b172e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b1730: fadd dword ptr [ebx + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa8u));
    /* 007b1736: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1738: fstp dword ptr [ebx + 0xd0] */ W_F32((u32)(r_ebx+0xd0u), ST(0)); FPOP();
    /* 007b173e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1740: fstp dword ptr [ebx + 0xd4] */ W_F32((u32)(r_ebx+0xd4u), ST(0)); FPOP();
    /* 007b1746: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 007b174c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007b174e: mov word ptr [ebx + 0x90], ax */ W16((u32)(r_ebx+0x90u), (u16)r_eax);
    /* 007b1755: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007b1758: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007b175b: mov dword ptr [ebx + 0x80], edx */ W32((u32)(r_ebx+0x80u), r_edx);
L_007b1761:; BB(0x007b1761);
    /* 007b1761: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b1767: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b1768: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1769: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b176a: ret  */ FN_RET(0x007b1298); r_esp += 4; return;
L_007b176b:; BB(0x007b176b);
    /* 007b176b: mov edx, dword ptr [ebx + 0x78] */ r_edx = R32((u32)(r_ebx+0x78u));
    /* 007b176e: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 007b1774: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007b1776: je 0x7b17ea */ if (fZ) goto L_007b17ea;
L_007b1778:; BB(0x007b1778);
    /* 007b1778: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 007b177c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b177d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b177f: call 0x7b1ad0 */ r_esp -= 4; W32(r_esp, 0x7b1784u); f_007b1ad0();
    /* 007b1784: movsx eax, byte ptr [ebx + 0x8c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8cu));
    /* 007b178b: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b178e: jge 0x7b17b3 */ if ((fS==fO)) goto L_007b17b3;
L_007b1790:; BB(0x007b1790);
    /* 007b1790: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b1794: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 007b1798: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 007b179c: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 007b17a2: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 007b17a8: mov dword ptr [ebx + 0xd8], ebp */ W32((u32)(r_ebx+0xd8u), r_ebp);
    /* 007b17ae: jmp 0x7b18bd */ goto L_007b18bd;
L_007b17b3:; BB(0x007b17b3);
    /* 007b17b3: movsx eax, byte ptr [ebx + 0x8d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8du));
    /* 007b17ba: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b17bd: jle 0x7b17c6 */ if ((fZ||fS!=fO)) goto L_007b17c6;
L_007b17bf:; BB(0x007b17bf);
    /* 007b17bf: mov byte ptr [ebx + 0x8c], 0 */ W8((u32)(r_ebx+0x8cu), 0x0u);
L_007b17c6:; BB(0x007b17c6);
    /* 007b17c6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b17c9: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b17cd: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b17d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b17d3: fstp dword ptr [ebx + 0xd0] */ W_F32((u32)(r_ebx+0xd0u), ST(0)); FPOP();
    /* 007b17d9: fstp dword ptr [ebx + 0xd4] */ W_F32((u32)(r_ebx+0xd4u), ST(0)); FPOP();
    /* 007b17df: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 007b17e5: jmp 0x7b18bd */ goto L_007b18bd;
L_007b17ea:; BB(0x007b17ea);
    /* 007b17ea: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b17ef: je 0x7b1815 */ if (fZ) goto L_007b1815;
L_007b17f1:; BB(0x007b17f1);
    /* 007b17f1: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b17f4: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b17f8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b17fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b17fe: fstp dword ptr [ebx + 0xd0] */ W_F32((u32)(r_ebx+0xd0u), ST(0)); FPOP();
    /* 007b1804: fstp dword ptr [ebx + 0xd4] */ W_F32((u32)(r_ebx+0xd4u), ST(0)); FPOP();
    /* 007b180a: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
    /* 007b1810: jmp 0x7b18bd */ goto L_007b18bd;
L_007b1815:; BB(0x007b1815);
    /* 007b1815: movsx eax, byte ptr [ebx + 0x8c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8cu));
    /* 007b181c: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b181f: jl 0x7b188b */ if ((fS!=fO)) goto L_007b188b;
L_007b1821:; BB(0x007b1821);
    /* 007b1821: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b1824: jge 0x7b188b */ if ((fS==fO)) goto L_007b188b;
L_007b1826:; BB(0x007b1826);
    /* 007b1826: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 007b182a: mov edi, dword ptr [edx + 0x94] */ r_edi = R32((u32)(r_edx+0x94u));
    /* 007b1830: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 007b1833: fsub dword ptr [edx + 0x9c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x9cu));
    /* 007b1839: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 007b183c: fsub dword ptr [edx + 0xa0] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xa0u));
    /* 007b1842: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 007b1845: fsub dword ptr [edx + 0xa4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0xa4u));
    /* 007b184b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b184d: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 007b1851: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007b1855: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 007b1859: lea edx, [esp + 0x3c] */ r_edx = (u32)(r_esp+0x3cu);
    /* 007b185d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b185e: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007b1861: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007b1863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1864: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b1865: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1866: call 0x7b193c */ r_esp -= 4; W32(r_esp, 0x7b186bu); f_007b193c();
    /* 007b186b: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 007b186f: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 007b1873: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
    /* 007b1877: mov dword ptr [ebx + 0xd0], eax */ W32((u32)(r_ebx+0xd0u), r_eax);
    /* 007b187d: mov dword ptr [ebx + 0xd4], edx */ W32((u32)(r_ebx+0xd4u), r_edx);
    /* 007b1883: mov dword ptr [ebx + 0xd8], ebp */ W32((u32)(r_ebx+0xd8u), r_ebp);
    /* 007b1889: jmp 0x7b18bd */ goto L_007b18bd;
L_007b188b:; BB(0x007b188b);
    /* 007b188b: movsx eax, byte ptr [ebx + 0x8d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x8du));
    /* 007b1892: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b1895: jle 0x7b189e */ if ((fZ||fS!=fO)) goto L_007b189e;
L_007b1897:; BB(0x007b1897);
    /* 007b1897: mov byte ptr [ebx + 0x8c], 0 */ W8((u32)(r_ebx+0x8cu), 0x0u);
L_007b189e:; BB(0x007b189e);
    /* 007b189e: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b18a1: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b18a5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b18a9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b18ab: fstp dword ptr [ebx + 0xd0] */ W_F32((u32)(r_ebx+0xd0u), ST(0)); FPOP();
    /* 007b18b1: fstp dword ptr [ebx + 0xd4] */ W_F32((u32)(r_ebx+0xd4u), ST(0)); FPOP();
    /* 007b18b7: fstp dword ptr [ebx + 0xd8] */ W_F32((u32)(r_ebx+0xd8u), ST(0)); FPOP();
L_007b18bd:; BB(0x007b18bd);
    /* 007b18bd: mov eax, dword ptr [ebx + 0x80] */ r_eax = R32((u32)(r_ebx+0x80u));
    /* 007b18c3: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007b18c6: mov dword ptr [ebx + 0x80], eax */ W32((u32)(r_ebx+0x80u), r_eax);
    /* 007b18cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007b18ce: mov word ptr [ebx + 0x90], dx */ W16((u32)(r_ebx+0x90u), (u16)r_edx);
    /* 007b18d5: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b18db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007b18dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b18dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b18de: ret  */ FN_RET(0x007b1298); r_esp += 4; return;
}

void f_007b18e0(void) /* sub_7B18E0 */
{
    FN_ENTER(0x007b18e0);
    /* 007b18e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b18e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b18e2: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 007b18e6: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 007b18ea: push 0x2100 */ { u32 v = 0x2100u; r_esp -= 4; W32(r_esp, v); }
    /* 007b18ef: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b18f3: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007b18f7: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x7b18fcu); f_0077fffc();
    /* 007b18fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007b18ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b1901: je 0x7b1935 */ if (fZ) goto L_007b1935;
L_007b1903:; BB(0x007b1903);
    /* 007b1903: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b1906: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 007b1908: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 007b190b: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 007b190e: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 007b1911: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 007b1914: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 007b1917: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007b191a: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 007b191d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 007b191f: mov ebp, dword ptr [edx + 0x10] */ r_ebp = R32((u32)(r_edx+0x10u));
    /* 007b1922: mov dword ptr [esi + 4], ebp */ W32((u32)(r_esi+0x4u), r_ebp);
    /* 007b1925: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 007b1928: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 007b192b: mov eax, 1 */ r_eax = 0x1u;
    /* 007b1930: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1931: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b1932: ret 0x10 */ FN_RET(0x007b18e0); r_esp += 20; return;
L_007b1935:; BB(0x007b1935);
    /* 007b1935: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007b1937: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1938: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b1939: ret 0x10 */ FN_RET(0x007b18e0); r_esp += 20; return;
}

void f_007b193c(void) /* sub_7B193C */
{
    FN_ENTER(0x007b193c);
    /* 007b193c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b193d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b193e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007b193f: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b1942: mov esi, ecx */ r_esi = r_ecx;
    /* 007b1944: mov ebp, dword ptr [esp + 0x40] */ r_ebp = R32((u32)(r_esp+0x40u));
    /* 007b1948: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 007b194c: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007b194e: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 007b1952: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007b195a: fchs  */ ST(0) = -ST(0);
    /* 007b195c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b195f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b1962: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007b1965: fchs  */ ST(0) = -ST(0);
    /* 007b1967: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b196b: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1970u); f_0083173c();
    /* 007b1970: fcomp dword ptr [0x97dd70] */ fx_compare(ST(0), R_F32((u32)(0x97dd70u))); FPOP();
    /* 007b1976: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1978: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1979: je 0x7b1985 */ if (fZ) goto L_007b1985;
L_007b197b:; BB(0x007b197b);
    /* 007b197b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007b197e: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1983u); f_0082df08();
    /* 007b1983: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1985:; BB(0x007b1985);
    /* 007b1985: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b198a: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b198fu); f_0082d990();
    /* 007b198f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b1991: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 007b1996: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b199bu); f_0082d8bc();
    /* 007b199b: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 007b199f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b19a0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007b19a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b19a6: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x7b19abu); f_00830aa0();
    /* 007b19ab: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007b19b0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x7b19b5u); f_0082eb80();
    /* 007b19b5: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b19ba: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b19bfu); f_0082d990();
    /* 007b19bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b19c1: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 007b19c6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b19cbu); f_0082d8bc();
    /* 007b19cb: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 007b19cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b19d0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007b19d4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b19d6: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x7b19dbu); f_00830aa0();
    /* 007b19db: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007b19e0: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x7b19e5u); f_0082eb80();
    /* 007b19e5: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 007b19e9: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007b19ed: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 007b19ef: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 007b19f2: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007b19f6: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 007b19fe: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 007b1a01: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 007b1a04: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007b1a08: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1a0du); f_0083173c();
    /* 007b1a0d: fcomp dword ptr [0x97dd70] */ fx_compare(ST(0), R_F32((u32)(0x97dd70u))); FPOP();
    /* 007b1a13: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1a15: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1a16: je 0x7b1a23 */ if (fZ) goto L_007b1a23;
L_007b1a18:; BB(0x007b1a18);
    /* 007b1a18: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007b1a1c: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1a21u); f_0082df08();
    /* 007b1a21: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1a23:; BB(0x007b1a23);
    /* 007b1a23: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 007b1a27: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007b1a2b: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7b1a30u); f_0082f9e0();
    /* 007b1a30: fcomp dword ptr [0x97dd70] */ fx_compare(ST(0), R_F32((u32)(0x97dd70u))); FPOP();
    /* 007b1a36: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1a38: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1a39: jbe 0x7b1a58 */ if ((fC||fZ)) goto L_007b1a58;
L_007b1a3b:; BB(0x007b1a3b);
    /* 007b1a3b: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007b1a3f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 007b1a43: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007b1a47: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b1a4a: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007b1a4e: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007b1a52: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007b1a56: jmp 0x7b1a73 */ goto L_007b1a73;
L_007b1a58:; BB(0x007b1a58);
    /* 007b1a58: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b1a5c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007b1a60: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 007b1a64: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007b1a67: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007b1a6b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007b1a6f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_007b1a73:; BB(0x007b1a73);
    /* 007b1a73: fld dword ptr [0x97dd6c] */ FPUSH(R_F32((u32)(0x97dd6cu)));
    /* 007b1a79: movsx eax, byte ptr [esi + 0x8c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x8cu));
    /* 007b1a80: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b1a83: jl 0x7b1aa9 */ if ((fS!=fO)) goto L_007b1aa9;
L_007b1a85:; BB(0x007b1a85);
    /* 007b1a85: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007b1a87: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1a89: fsubr dword ptr [ebp] */ ST(0) = R_F32((u32)(r_ebp)) - ST(0);
    /* 007b1a8c: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 007b1a8e: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 007b1a91: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 007b1a94: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1a98: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b1a9a: fsubr dword ptr [ebp + 8] */ ST(0) = R_F32((u32)(r_ebp+0x8u)) - ST(0);
    /* 007b1a9d: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 007b1aa0: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b1aa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1aa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b1aa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b1aa6: ret 0x10 */ FN_RET(0x007b193c); r_esp += 20; return;
L_007b1aa9:; BB(0x007b1aa9);
    /* 007b1aa9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007b1aab: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1aad: fadd dword ptr [ebp] */ ST(0) = ST(0) + R_F32((u32)(r_ebp));
    /* 007b1ab0: fstp dword ptr [edi] */ W_F32((u32)(r_edi), ST(0)); FPOP();
    /* 007b1ab2: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 007b1ab5: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 007b1ab8: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1abc: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b1abe: fadd dword ptr [ebp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x8u));
    /* 007b1ac1: fstp dword ptr [edi + 8] */ W_F32((u32)(r_edi+0x8u), ST(0)); FPOP();
    /* 007b1ac4: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b1ac7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007b1ac8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b1ac9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b1aca: ret 0x10 */ FN_RET(0x007b193c); r_esp += 20; return;
}

void f_007b1ad0(void) /* sub_7B1AD0 */
{
    FN_ENTER(0x007b1ad0);
    /* 007b1ad0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1ad1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1ad2: sub esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007b1ad8: mov edi, ecx */ r_edi = r_ecx;
    /* 007b1ada: mov esi, dword ptr [esp + 0xc8] */ r_esi = R32((u32)(r_esp+0xc8u));
    /* 007b1ae1: mov edx, dword ptr [edi + 0x78] */ r_edx = R32((u32)(r_edi+0x78u));
    /* 007b1ae4: fld dword ptr [edx + 0xe4] */ FPUSH(R_F32((u32)(r_edx+0xe4u)));
    /* 007b1aea: fld dword ptr [edx + 0xe8] */ FPUSH(R_F32((u32)(r_edx+0xe8u)));
    /* 007b1af0: mov ecx, dword ptr [edx + 0xec] */ r_ecx = R32((u32)(r_edx+0xecu));
    /* 007b1af6: fld dword ptr [edx + 0xf4] */ FPUSH(R_F32((u32)(r_edx+0xf4u)));
    /* 007b1afc: fld dword ptr [edx + 0xf8] */ FPUSH(R_F32((u32)(r_edx+0xf8u)));
    /* 007b1b02: fld dword ptr [edx + 0xfc] */ FPUSH(R_F32((u32)(r_edx+0xfcu)));
    /* 007b1b08: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007b1b0a: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007b1b0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1b10: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007b1b14: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007b1b17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1b19: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007b1b1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b1b1f: je 0x7b1e5b */ if (fZ) goto L_007b1e5b;
L_007b1b25:; BB(0x007b1b25);
    /* 007b1b25: fcom dword ptr [0x97dd68] */ fx_compare(ST(0), R_F32((u32)(0x97dd68u))); 
    /* 007b1b2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1b2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1b2e: ja 0x7b1b39 */ if ((!fC&&!fZ)) goto L_007b1b39;
L_007b1b30:; BB(0x007b1b30);
    /* 007b1b30: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b1b33: je 0x7b2099 */ if (fZ) goto L_007b2099;
L_007b1b39:; BB(0x007b1b39);
    /* 007b1b39: fmul dword ptr [0x97dcb4] */ ST(0) = ST(0) * R_F32((u32)(0x97dcb4u));
    /* 007b1b3f: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b1b43: fmul dword ptr [0x97dcb8] */ ST(0) = ST(0) * R_F32((u32)(0x97dcb8u));
    /* 007b1b49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1b4b: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007b1b4f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007b1b53: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 007b1b5b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 007b1b60: mov dword ptr [esp + 0x30], 0 */ W32((u32)(r_esp+0x30u), 0x0u);
    /* 007b1b68: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 007b1b70: mov dword ptr [esp + 0x38], 0 */ W32((u32)(r_esp+0x38u), 0x0u);
    /* 007b1b78: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x7b1b7du); f_0082d990();
    /* 007b1b7d: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1b80: mov edx, dword ptr [eax + 0x104] */ r_edx = R32((u32)(r_eax+0x104u));
    /* 007b1b86: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b1b8c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b1b8e: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x7b1b93u); f_0082d8bc();
    /* 007b1b93: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 007b1b97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1b98: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 007b1b9c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b1b9e: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x7b1ba3u); f_00830aa0();
    /* 007b1ba3: lea eax, [esp + 0x34] */ r_eax = (u32)(r_esp+0x34u);
    /* 007b1ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1ba8: lea edx, [esp + 0x38] */ r_edx = (u32)(r_esp+0x38u);
    /* 007b1bac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007b1bae: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x7b1bb3u); f_00830aa0();
    /* 007b1bb3: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007b1bb8: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x7b1bbdu); f_0082eb80();
    /* 007b1bbd: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007b1bc1: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1bc5: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1bc9: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007b1bcb: mov eax, dword ptr [edi + 0x74] */ r_eax = R32((u32)(r_edi+0x74u));
    /* 007b1bce: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1bd4: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007b1bd8: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b1bdb: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b1bdf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b1be1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007b1be5: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b1be8: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b1bec: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007b1bee: fsubr st(6), st(0) */ ST(6) = ST(0) - ST(6);
    /* 007b1bf0: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 007b1bf4: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 007b1bf6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007b1bfa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1bfc: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 007b1bfe: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007b1c02: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007b1c04: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 007b1c06: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 007b1c0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1c0c: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007b1c10: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1c12: fsubr st(2), st(0) */ ST(2) = ST(0) - ST(2);
    /* 007b1c14: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1c16: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 007b1c1a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1c1c: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 007b1c1e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007b1c22: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007b1c24: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007b1c28: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b1c2c: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 007b1c2e: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007b1c32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1c34: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007b1c38: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b1c3b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007b1c3d: fsubr st(6), st(0) */ ST(6) = ST(0) - ST(6);
    /* 007b1c3f: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 007b1c41: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 007b1c45: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 007b1c47: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007b1c49: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 007b1c4d: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b1c51: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1c53: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 007b1c55: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007b1c57: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 007b1c5b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1c5d: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007b1c5f: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 007b1c63: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 007b1c65: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 007b1c68: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1c6a: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 007b1c6e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b1c70: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007b1c72: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 007b1c75: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1c77: fstp dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0)); FPOP();
    /* 007b1c7b: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007b1c7d: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 007b1c80: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1c82: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 007b1c86: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 007b1c88: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 007b1c8c: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 007b1c90: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1c95u); f_0083173c();
    /* 007b1c95: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1c9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1c9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1c9e: je 0x7b1cab */ if (fZ) goto L_007b1cab;
L_007b1ca0:; BB(0x007b1ca0);
    /* 007b1ca0: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 007b1ca4: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1ca9u); f_0082df08();
    /* 007b1ca9: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1cab:; BB(0x007b1cab);
    /* 007b1cab: lea edx, [esp + 0x7c] */ r_edx = (u32)(r_esp+0x7cu);
    /* 007b1caf: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1cb2: mov ecx, dword ptr [eax + 0x94] */ r_ecx = R32((u32)(r_eax+0x94u));
    /* 007b1cb8: lea eax, [esp + 0x80] */ r_eax = (u32)(r_esp+0x80u);
    /* 007b1cbf: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007b1cc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cc5: lea eax, [esp + 0x70] */ r_eax = (u32)(r_esp+0x70u);
    /* 007b1cc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cca: lea eax, [esp + 0x68] */ r_eax = (u32)(r_esp+0x68u);
    /* 007b1cce: mov ecx, edi */ r_ecx = r_edi;
    /* 007b1cd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cd1: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 007b1cd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cd6: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 007b1cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1cdb: call 0x7b20ac */ r_esp -= 4; W32(r_esp, 0x7b1ce0u); f_007b20ac();
    /* 007b1ce0: mov eax, dword ptr [esp + 0x80] */ r_eax = R32((u32)(r_esp+0x80u));
    /* 007b1ce7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 007b1ceb: mov eax, dword ptr [esp + 0x84] */ r_eax = R32((u32)(r_esp+0x84u));
    /* 007b1cf2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007b1cf6: mov eax, dword ptr [esp + 0x88] */ r_eax = R32((u32)(r_esp+0x88u));
    /* 007b1cfd: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 007b1d01: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 007b1d05: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 007b1d09: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7b1d0eu); f_0082f9e0();
    /* 007b1d0e: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1d14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1d16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1d17: jae 0x7b1d33 */ if (!fC) goto L_007b1d33;
L_007b1d19:; BB(0x007b1d19);
    /* 007b1d19: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 007b1d1d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007b1d21: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1d23: fchs  */ ST(0) = -ST(0);
    /* 007b1d25: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 007b1d29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1d2b: fchs  */ ST(0) = -ST(0);
    /* 007b1d2d: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 007b1d31: jmp 0x7b1d37 */ goto L_007b1d37;
L_007b1d33:; BB(0x007b1d33);
    /* 007b1d33: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
L_007b1d37:; BB(0x007b1d37);
    /* 007b1d37: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 007b1d3b: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1d3e: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1d44: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007b1d46: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1d48: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 007b1d4b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1d4d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 007b1d50: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1d52: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 007b1d54: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1d57: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b1d5d: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 007b1d61: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b1d63: fadd dword ptr [eax + 0x304] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x304u));
    /* 007b1d69: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 007b1d6c: mov ecx, edi */ r_ecx = r_edi;
    /* 007b1d6e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007b1d72: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b1d74: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1d77: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b1d7d: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 007b1d80: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007b1d83: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1d86: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1d8c: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007b1d92: lea eax, [esp + 0x8c] */ r_eax = (u32)(r_esp+0x8cu);
    /* 007b1d99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007b1d9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007b1d9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007b1d9c: call 0x7b25c0 */ r_esp -= 4; W32(r_esp, 0x7b1da1u); f_007b25c0();
    /* 007b1da1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007b1da3: je 0x7b1dc2 */ if (fZ) goto L_007b1dc2;
L_007b1da5:; BB(0x007b1da5);
    /* 007b1da5: mov eax, dword ptr [esp + 0x8c] */ r_eax = R32((u32)(r_esp+0x8cu));
    /* 007b1dac: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 007b1dae: mov edx, dword ptr [esp + 0x90] */ r_edx = R32((u32)(r_esp+0x90u));
    /* 007b1db5: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 007b1db8: mov eax, dword ptr [esp + 0x94] */ r_eax = R32((u32)(r_esp+0x94u));
    /* 007b1dbf: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
L_007b1dc2:; BB(0x007b1dc2);
    /* 007b1dc2: movsx eax, byte ptr [edi + 0x8c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x8cu));
    /* 007b1dc9: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b1dcc: jle 0x7b2089 */ if ((fZ||fS!=fO)) goto L_007b2089;
L_007b1dd2:; BB(0x007b1dd2);
    /* 007b1dd2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 007b1dd6: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 007b1dde: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007b1de2: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 007b1de6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 007b1dea: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 007b1dee: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 007b1df2: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7b1df7u); f_0082f9e0();
    /* 007b1df7: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1dfd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1dff: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1e00: jae 0x7b1e18 */ if (!fC) goto L_007b1e18;
L_007b1e02:; BB(0x007b1e02);
    /* 007b1e02: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 007b1e06: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 007b1e0a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1e0c: fchs  */ ST(0) = -ST(0);
    /* 007b1e0e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1e10: fchs  */ ST(0) = -ST(0);
    /* 007b1e12: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 007b1e16: jmp 0x7b1e1c */ goto L_007b1e1c;
L_007b1e18:; BB(0x007b1e18);
    /* 007b1e18: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
L_007b1e1c:; BB(0x007b1e1c);
    /* 007b1e1c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b1e1f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007b1e21: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1e24: mov edx, dword ptr [eax + 0x94] */ r_edx = R32((u32)(r_eax+0x94u));
    /* 007b1e2a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1e2c: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 007b1e2f: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 007b1e31: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 007b1e34: mov eax, dword ptr [eax + 0x94] */ r_eax = R32((u32)(r_eax+0x94u));
    /* 007b1e3a: mov eax, dword ptr [eax + 0x304] */ r_eax = R32((u32)(r_eax+0x304u));
    /* 007b1e40: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007b1e43: fmul dword ptr [esp + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x18u));
    /* 007b1e47: mov ecx, dword ptr [edi + 0x78] */ r_ecx = R32((u32)(r_edi+0x78u));
    /* 007b1e4a: mov edi, dword ptr [ecx + 0x94] */ r_edi = R32((u32)(r_ecx+0x94u));
    /* 007b1e50: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 007b1e53: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007b1e56: jmp 0x7b2089 */ goto L_007b2089;
L_007b1e5b:; BB(0x007b1e5b);
    /* 007b1e5b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b1e5d: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b1e61: fadd dword ptr [0x97dd60] */ ST(0) = ST(0) + R_F32((u32)(0x97dd60u));
    /* 007b1e67: mov eax, dword ptr [edx + 0x94] */ r_eax = R32((u32)(r_edx+0x94u));
    /* 007b1e6d: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 007b1e70: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 007b1e74: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 007b1e77: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 007b1e7b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1e7d: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 007b1e81: fst dword ptr [esp + 0x98] */ W_F32((u32)(r_esp+0x98u), ST(0));
    /* 007b1e88: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1e8a: fst dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0));
    /* 007b1e91: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 007b1e98: mov dword ptr [esp + 0x9c], 0 */ W32((u32)(r_esp+0x9cu), 0x0u);
    /* 007b1ea3: mov dword ptr [esp + 0xa8], 0 */ W32((u32)(r_esp+0xa8u), 0x0u);
    /* 007b1eae: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 007b1eb5: fchs  */ ST(0) = -ST(0);
    /* 007b1eb7: fstp dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0)); FPOP();
    /* 007b1ebe: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1ec3u); f_0083173c();
    /* 007b1ec3: fld dword ptr [0x97dd64] */ FPUSH(R_F32((u32)(0x97dd64u)));
    /* 007b1ec9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1ecb: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 007b1ecd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1ecf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1ed0: je 0x7b1ee8 */ if (fZ) goto L_007b1ee8;
L_007b1ed2:; BB(0x007b1ed2);
    /* 007b1ed2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b1ed4: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 007b1edb: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1ee0u); f_0082df08();
    /* 007b1ee0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007b1ee2: fld dword ptr [0x97dd64] */ FPUSH(R_F32((u32)(0x97dd64u)));
L_007b1ee8:; BB(0x007b1ee8);
    /* 007b1ee8: fld dword ptr [edi + 0xdc] */ FPUSH(R_F32((u32)(r_edi+0xdcu)));
    /* 007b1eee: fsub dword ptr [esp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x8u));
    /* 007b1ef2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1ef4: fstp dword ptr [esp + 0xb4] */ W_F32((u32)(r_esp+0xb4u), ST(0)); FPOP();
    /* 007b1efb: fld dword ptr [edi + 0xe4] */ FPUSH(R_F32((u32)(r_edi+0xe4u)));
    /* 007b1f01: fsub dword ptr [esp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x4u));
    /* 007b1f05: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1f07: fstp dword ptr [esp + 0xb0] */ W_F32((u32)(r_esp+0xb0u), ST(0)); FPOP();
    /* 007b1f0e: fstp dword ptr [esp + 0xb8] */ W_F32((u32)(r_esp+0xb8u), ST(0)); FPOP();
    /* 007b1f15: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 007b1f1c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1f21u); f_0083173c();
    /* 007b1f21: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1f27: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1f29: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1f2a: je 0x7b1f3a */ if (fZ) goto L_007b1f3a;
L_007b1f2c:; BB(0x007b1f2c);
    /* 007b1f2c: lea ecx, [esp + 0xb0] */ r_ecx = (u32)(r_esp+0xb0u);
    /* 007b1f33: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1f38u); f_0082df08();
    /* 007b1f38: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1f3a:; BB(0x007b1f3a);
    /* 007b1f3a: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 007b1f41: lea edx, [esp + 0xb0] */ r_edx = (u32)(r_esp+0xb0u);
    /* 007b1f48: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x7b1f4du); f_0082f9e0();
    /* 007b1f4d: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1f53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1f55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1f56: jae 0x7b1f7a */ if (!fC) goto L_007b1f7a;
L_007b1f58:; BB(0x007b1f58);
    /* 007b1f58: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 007b1f5f: fld dword ptr [esp + 0xac] */ FPUSH(R_F32((u32)(r_esp+0xacu)));
    /* 007b1f66: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b1f68: fchs  */ ST(0) = -ST(0);
    /* 007b1f6a: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 007b1f71: fchs  */ ST(0) = -ST(0);
    /* 007b1f73: fstp dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0)); FPOP();
L_007b1f7a:; BB(0x007b1f7a);
    /* 007b1f7a: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 007b1f81: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1f86u); f_0083173c();
    /* 007b1f86: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1f8c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1f8e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1f8f: je 0x7b1f9f */ if (fZ) goto L_007b1f9f;
L_007b1f91:; BB(0x007b1f91);
    /* 007b1f91: lea ecx, [esp + 0x98] */ r_ecx = (u32)(r_esp+0x98u);
    /* 007b1f98: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b1f9du); f_0082df08();
    /* 007b1f9d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b1f9f:; BB(0x007b1f9f);
    /* 007b1f9f: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 007b1fa6: fadd dword ptr [esp + 0x98] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x98u));
    /* 007b1fad: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 007b1fb4: fadd dword ptr [esp + 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x9cu));
    /* 007b1fbb: fld dword ptr [esp + 0xac] */ FPUSH(R_F32((u32)(r_esp+0xacu)));
    /* 007b1fc2: fadd dword ptr [esp + 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xa0u));
    /* 007b1fc9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b1fcb: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 007b1fd2: fstp dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0)); FPOP();
    /* 007b1fd9: fstp dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0)); FPOP();
    /* 007b1fe0: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 007b1fe7: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x7b1fecu); f_0083173c();
    /* 007b1fec: fcomp dword ptr [0x97dd64] */ fx_compare(ST(0), R_F32((u32)(0x97dd64u))); FPOP();
    /* 007b1ff2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b1ff4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b1ff5: je 0x7b2005 */ if (fZ) goto L_007b2005;
L_007b1ff7:; BB(0x007b1ff7);
    /* 007b1ff7: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 007b1ffe: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x7b2003u); f_0082df08();
    /* 007b2003: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007b2005:; BB(0x007b2005);
    /* 007b2005: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 007b200c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b2010: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007b2012: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2014: fadd dword ptr [esp + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x8u));
    /* 007b2018: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 007b201a: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 007b2021: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007b2023: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 007b2026: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 007b2029: fld dword ptr [esp + 0xac] */ FPUSH(R_F32((u32)(r_esp+0xacu)));
    /* 007b2030: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b2032: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 007b2036: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007b2039: movsx eax, byte ptr [edi + 0x8c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x8cu));
    /* 007b2040: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007b2043: jle 0x7b2089 */ if ((fZ||fS!=fO)) goto L_007b2089;
L_007b2045:; BB(0x007b2045);
    /* 007b2045: fld dword ptr [esp + 0xa4] */ FPUSH(R_F32((u32)(r_esp+0xa4u)));
    /* 007b204c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 007b2050: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 007b2054: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 007b2057: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007b2059: fchs  */ ST(0) = -ST(0);
    /* 007b205b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007b205d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b205f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 007b2063: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007b2065: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 007b2067: fld dword ptr [esp + 0xa8] */ FPUSH(R_F32((u32)(r_esp+0xa8u)));
    /* 007b206e: fchs  */ ST(0) = -ST(0);
    /* 007b2070: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007b2072: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 007b2074: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007b2076: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 007b2079: fld dword ptr [esp + 0xac] */ FPUSH(R_F32((u32)(r_esp+0xacu)));
    /* 007b2080: fchs  */ ST(0) = -ST(0);
    /* 007b2082: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007b2084: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007b2086: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
L_007b2089:; BB(0x007b2089);
    /* 007b2089: mov eax, 1 */ r_eax = 0x1u;
    /* 007b208e: add esp, 0xbc */ {  u32 a = r_esp; u32 b = 0xbcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007b2094: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007b2095: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007b2096: ret 4 */ FN_RET(0x007b1ad0); r_esp += 8; return;
L_007b2099:; BB(0x007b2099);
    /* 007b2099: fcom dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); 
    /* 007b209d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007b209f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007b20a0: je 0x7b1e5b */ if (fZ) goto L_007b1e5b;
L_007b20a6:; BB(0x007b20a6);
    /* 007b20a6: jmp 0x7b1b39 */ goto L_007b1b39;
}

