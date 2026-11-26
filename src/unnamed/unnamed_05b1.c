#include "protos.h"

void f_005b104c(void) /* sub_5B104C */
{
    FN_ENTER(0x005b104c);
    /* 005b104c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b104d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b104e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b1050: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 005b1057: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b105a: je 0x5b10ef */ if (fZ) goto L_005b10ef;
L_005b1060:; BB(0x005b1060);
    /* 005b1060: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1065: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1067: call 0x5b07d8 */ r_esp -= 4; W32(r_esp, 0x5b106cu); f_005b07d8();
    /* 005b106c: fld dword ptr [ebp + 0x418] */ FPUSH(R_F32((u32)(r_ebp+0x418u)));
    /* 005b1072: fcom dword ptr [0x92aa24] */ fx_compare(ST(0), R_F32((u32)(0x92aa24u))); 
    /* 005b1078: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b107a: mov edx, dword ptr [ebp + 0x418] */ r_edx = R32((u32)(r_ebp+0x418u));
    /* 005b1080: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b1081: je 0x5b10e2 */ if (fZ) goto L_005b10e2;
L_005b1083:; BB(0x005b1083);
    /* 005b1083: fld dword ptr [0x92aaec] */ FPUSH(R_F32((u32)(0x92aaecu)));
    /* 005b1089: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b108b: fstp dword ptr [ebp + 0xc8] */ W_F32((u32)(r_ebp+0xc8u), ST(0)); FPOP();
    /* 005b1091: mov eax, 1 */ r_eax = 0x1u;
    /* 005b1096: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
L_005b109d:; BB(0x005b109d);
    /* 005b109d: mov eax, dword ptr [ebp + 0x398] */ r_eax = R32((u32)(r_ebp+0x398u));
    /* 005b10a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b10a5: je 0x5b10d1 */ if (fZ) goto L_005b10d1;
L_005b10a7:; BB(0x005b10a7);
    /* 005b10a7: mov ecx, dword ptr [eax + 0x304] */ r_ecx = R32((u32)(r_eax+0x304u));
    /* 005b10ad: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005b10b0: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 005b10b6: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005b10bc: mov dword ptr [ebp + 0x2a4], edx */ W32((u32)(r_ebp+0x2a4u), r_edx);
    /* 005b10c2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 005b10c5: mov dword ptr [ebp + 0x2a8], ecx */ W32((u32)(r_ebp+0x2a8u), r_ecx);
    /* 005b10cb: mov dword ptr [ebp + 0x2ac], eax */ W32((u32)(r_ebp+0x2acu), r_eax);
L_005b10d1:; BB(0x005b10d1);
    /* 005b10d1: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b10d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b10d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b10d8: call 0x77a0d0 */ r_esp -= 4; W32(r_esp, 0x5b10ddu); f_0077a0d0();
    /* 005b10dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b10de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b10df: ret 4 */ FN_RET(0x005b104c); r_esp += 8; return;
L_005b10e2:; BB(0x005b10e2);
    /* 005b10e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b10e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b10e6: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b10ed: jmp 0x5b109d */ goto L_005b109d;
L_005b10ef:; BB(0x005b10ef);
    /* 005b10ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b10f1: call 0x5afee4 */ r_esp -= 4; W32(r_esp, 0x5b10f6u); f_005afee4();
    /* 005b10f6: jmp 0x5b1060 */ goto L_005b1060;
}

void f_005b10fc(void) /* sub_5B10FC */
{
    FN_ENTER(0x005b10fc);
    /* 005b10fc: mov eax, dword ptr [ecx + 0x480] */ r_eax = R32((u32)(r_ecx+0x480u));
    /* 005b1102: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1104: je 0x5b1110 */ if (fZ) goto L_005b1110;
L_005b1106:; BB(0x005b1106);
    /* 005b1106: mov dword ptr [ecx + 0x480], 1 */ W32((u32)(r_ecx+0x480u), 0x1u);
L_005b1110:; BB(0x005b1110);
    /* 005b1110: ret  */ FN_RET(0x005b10fc); r_esp += 4; return;
}

void f_005b1114(void) /* sub_5B1114 */
{
    FN_ENTER(0x005b1114);
    /* 005b1114: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1115: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005b1117: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b111b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b111e: je 0x5b119c */ if (fZ) goto L_005b119c;
L_005b1120:; BB(0x005b1120);
    /* 005b1120: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1123: je 0x5b1184 */ if (fZ) goto L_005b1184;
L_005b1125:; BB(0x005b1125);
    /* 005b1125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1127: jne 0x5b1198 */ if (!fZ) goto L_005b1198;
L_005b1129:; BB(0x005b1129);
    /* 005b1129: add dword ptr [ebx + 0x430], 1 */ { u32 ad = (u32)(r_ebx+0x430u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b1130: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1132: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b1137u); f_007aa094();
    /* 005b1137: push 0x40e00000 */ { u32 v = 0x40e00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b113c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b113e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b1143u); f_007aaa30();
    /* 005b1143: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1145: call 0x52126c */ r_esp -= 4; W32(r_esp, 0x5b114au); f_0052126c();
    /* 005b114a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b114c: je 0x5b1165 */ if (fZ) goto L_005b1165;
L_005b114e:; BB(0x005b114e);
    /* 005b114e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1150: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5b1155u); f_005213d8();
    /* 005b1155: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1157: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5b115cu); f_00521410();
    /* 005b115c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b115e: call 0x5ae68c */ r_esp -= 4; W32(r_esp, 0x5b1163u); f_005ae68c();
    /* 005b1163: jmp 0x5b116c */ goto L_005b116c;
L_005b1165:; BB(0x005b1165);
    /* 005b1165: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1167: call 0x5ae66c */ r_esp -= 4; W32(r_esp, 0x5b116cu); f_005ae66c();
L_005b116c:; BB(0x005b116c);
    /* 005b116c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b116e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1170: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5b1176u); call_ind(t); }
    /* 005b1176: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b1178: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b117a: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5b1180u); call_ind(t); }
    /* 005b1180: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1181: ret 4 */ FN_RET(0x005b1114); r_esp += 8; return;
L_005b1184:; BB(0x005b1184);
    /* 005b1184: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 005b118a: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b118d: jle 0x5b1198 */ if ((fZ||fS!=fO)) goto L_005b1198;
L_005b118f:; BB(0x005b118f);
    /* 005b118f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1191: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1193: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b1198u); f_0051f62c();
L_005b1198:; BB(0x005b1198);
    /* 005b1198: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1199: ret 4 */ FN_RET(0x005b1114); r_esp += 8; return;
L_005b119c:; BB(0x005b119c);
    /* 005b119c: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b119e: mov eax, 5 */ r_eax = 0x5u;
    /* 005b11a3: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005b11aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b11ac: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b11b1u); f_0051f664();
    /* 005b11b1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b11b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b11b5: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5b11bbu); call_ind(t); }
    /* 005b11bb: mov dword ptr [ebx + 0x430], 0 */ W32((u32)(r_ebx+0x430u), 0x0u);
    /* 005b11c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b11c6: ret 4 */ FN_RET(0x005b1114); r_esp += 8; return;
}

void f_005b11cc(void) /* sub_5B11CC */
{
    FN_ENTER(0x005b11cc);
    /* 005b11cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b11cd: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b11d0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b11d2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b11d6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b11d9: je 0x5b122e */ if (fZ) goto L_005b122e;
L_005b11db:; BB(0x005b11db);
    /* 005b11db: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b11de: je 0x5b1216 */ if (fZ) goto L_005b1216;
L_005b11e0:; BB(0x005b11e0);
    /* 005b11e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b11e2: jne 0x5b1227 */ if (!fZ) goto L_005b1227;
L_005b11e4:; BB(0x005b11e4);
    /* 005b11e4: add dword ptr [ebp + 0x430], -1 */ { u32 ad = (u32)(r_ebp+0x430u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005b11eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b11ed: call 0x5ae66c */ r_esp -= 4; W32(r_esp, 0x5b11f2u); f_005ae66c();
    /* 005b11f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b11f4: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b11f9u); f_007aa094();
    /* 005b11f9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b11fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b11fe: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5b1204u); call_ind(t); }
    /* 005b1204: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1207: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1209: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5b120fu); call_ind(t); }
    /* 005b120f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1212: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1213: ret 4 */ FN_RET(0x005b11cc); r_esp += 8; return;
L_005b1216:; BB(0x005b1216);
    /* 005b1216: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005b121c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005b121e: jg 0x5b1227 */ if ((!fZ&&fS==fO)) goto L_005b1227;
L_005b1220:; BB(0x005b1220);
    /* 005b1220: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1222: call 0x5b128c */ r_esp -= 4; W32(r_esp, 0x5b1227u); f_005b128c();
L_005b1227:; BB(0x005b1227);
    /* 005b1227: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b122a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b122b: ret 4 */ FN_RET(0x005b11cc); r_esp += 8; return;
L_005b122e:; BB(0x005b122e);
    /* 005b122e: mov eax, 4 */ r_eax = 0x4u;
    /* 005b1233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1234: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b123b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b123d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b1242u); f_0051f664();
    /* 005b1242: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1245: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1247: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5b124du); call_ind(t); }
    /* 005b124d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b124f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b1254u); f_007751b0();
    /* 005b1254: fld dword ptr [0x92aa1c] */ FPUSH(R_F32((u32)(0x92aa1cu)));
    /* 005b125a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b125c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005b125f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005b1263: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b1268: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b126c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b1270: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b1274: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005b1277: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b127b: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b127e: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005b1284: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1288: ret 4 */ FN_RET(0x005b11cc); r_esp += 8; return;
}

void f_005b121d(void)
{
    FN_ENTER(0x005b121d);
    /* 005b121d: sar byte ptr [edi + 7], 0x8b */ { u32 ad = (u32)(r_edi+0x7u); u32 c = (11u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 005b1221: int 0xe8 */ UNSUP(0x005b1221, "int 0xe8");
    /* 005b1223: add byte ptr gs:[eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b1226: add byte ptr [ebx - 0x3da2e73c], al */ { u32 ad = (u32)(r_ebx+0xc25d18c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005b122c: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005b122e: mov eax, 4 */ r_eax = 0x4u;
    /* 005b1233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1234: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005b123b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b123d: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b1242u); f_0051f664();
    /* 005b1242: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1245: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1247: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5b124du); call_ind(t); }
    /* 005b124d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b124f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5b1254u); f_007751b0();
    /* 005b1254: fld dword ptr [0x92aa1c] */ FPUSH(R_F32((u32)(0x92aa1cu)));
    /* 005b125a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b125c: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005b125f: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005b1263: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b1268: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b126c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005b1270: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b1274: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005b1277: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005b127b: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b127e: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005b1284: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1287: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1288: ret 4 */ FN_RET(0x005b121d); r_esp += 8; return;
}

void f_005b128c(void) /* sub_5B128C */
{
    FN_ENTER(0x005b128c);
    /* 005b128c: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 005b1292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1294: je 0x5b129e */ if (fZ) goto L_005b129e;
L_005b1296:; BB(0x005b1296);
    /* 005b1296: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1298: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b129du); f_0051f62c();
    /* 005b129d: ret  */ FN_RET(0x005b128c); r_esp += 4; return;
L_005b129e:; BB(0x005b129e);
    /* 005b129e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005b12a0: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b12a5u); f_0051f62c();
    /* 005b12a5: ret  */ FN_RET(0x005b128c); r_esp += 4; return;
}

void f_005b12a8(void) /* sub_5B12A8 */
{
    FN_ENTER(0x005b12a8);
    /* 005b12a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b12a9: mov edi, ecx */ r_edi = r_ecx;
    /* 005b12ab: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b12af: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b12b2: je 0x5b134b */ if (fZ) goto L_005b134b;
L_005b12b8:; BB(0x005b12b8);
    /* 005b12b8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b12bb: je 0x5b12ff */ if (fZ) goto L_005b12ff;
L_005b12bd:; BB(0x005b12bd);
    /* 005b12bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b12bf: jne 0x5b12e7 */ if (!fZ) goto L_005b12e7;
L_005b12c1:; BB(0x005b12c1);
    /* 005b12c1: mov ecx, edi */ r_ecx = r_edi;
    /* 005b12c3: call 0x5ae66c */ r_esp -= 4; W32(r_esp, 0x5b12c8u); f_005ae66c();
    /* 005b12c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b12ca: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b12cfu); f_007aa094();
    /* 005b12cf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b12d1: mov ecx, edi */ r_ecx = r_edi;
    /* 005b12d3: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5b12d9u); call_ind(t); }
    /* 005b12d9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b12db: mov ecx, edi */ r_ecx = r_edi;
    /* 005b12dd: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5b12e3u); call_ind(t); }
    /* 005b12e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b12e4: ret 4 */ FN_RET(0x005b12a8); r_esp += 8; return;
L_005b12e7:; BB(0x005b12e7);
    /* 005b12e7: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b12ea: jne 0x5b1347 */ if (!fZ) goto L_005b1347;
L_005b12ec:; BB(0x005b12ec);
    /* 005b12ec: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005b12f2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b12f5: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 005b12fb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b12fc: ret 4 */ FN_RET(0x005b12a8); r_esp += 8; return;
L_005b12ff:; BB(0x005b12ff);
    /* 005b12ff: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005b1305: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b1307: jne 0x5b133e */ if (!fZ) goto L_005b133e;
L_005b1309:; BB(0x005b1309);
    /* 005b1309: mov eax, dword ptr [edi + 0x398] */ r_eax = R32((u32)(r_edi+0x398u));
    /* 005b130f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1311: je 0x5b1347 */ if (fZ) goto L_005b1347;
L_005b1313:; BB(0x005b1313);
    /* 005b1313: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1315: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5b131au); f_005213d8();
    /* 005b131a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b131c: call 0x5b128c */ r_esp -= 4; W32(r_esp, 0x5b1321u); f_005b128c();
    /* 005b1321: movzx eax, word ptr [edi + 0x3f4] */ r_eax = (u32)R16((u32)(r_edi+0x3f4u));
    /* 005b1328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1329: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b132eu); f_007b4d18();
    /* 005b132e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b132f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1331: je 0x5b1347 */ if (fZ) goto L_005b1347;
L_005b1333:; BB(0x005b1333);
    /* 005b1333: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1335: call 0x5b1390 */ r_esp -= 4; W32(r_esp, 0x5b133au); f_005b1390();
    /* 005b133a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b133b: ret 4 */ FN_RET(0x005b12a8); r_esp += 8; return;
L_005b133e:; BB(0x005b133e);
    /* 005b133e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1340: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1342: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b1347u); f_0051f62c();
L_005b1347:; BB(0x005b1347);
    /* 005b1347: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1348: ret 4 */ FN_RET(0x005b12a8); r_esp += 8; return;
L_005b134b:; BB(0x005b134b);
    /* 005b134b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b134d: mov eax, 4 */ r_eax = 0x4u;
    /* 005b1352: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b1359: mov ecx, edi */ r_ecx = r_edi;
    /* 005b135b: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b1360u); f_0051f664();
    /* 005b1360: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1362: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1364: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5b136au); call_ind(t); }
    /* 005b136a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b136c: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5b1371u); f_00520f68();
    /* 005b1371: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005b1377: mov dword ptr [edi + 0x3f8], 0 */ W32((u32)(r_edi+0x3f8u), 0x0u);
    /* 005b1381: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1384: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 005b138a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b138b: ret 4 */ FN_RET(0x005b12a8); r_esp += 8; return;
}

void f_005b1390(void) /* sub_5B1390 */
{
    FN_ENTER(0x005b1390);
    /* 005b1390: mov eax, dword ptr [ecx + 0x41c] */ r_eax = R32((u32)(r_ecx+0x41cu));
    /* 005b1396: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1399: mov dword ptr [ecx + 0x41c], eax */ W32((u32)(r_ecx+0x41cu), r_eax);
    /* 005b139f: ret  */ FN_RET(0x005b1390); r_esp += 4; return;
}

void f_005b13a0(void) /* sub_5B13A0 */
{
    FN_ENTER(0x005b13a0);
    /* 005b13a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b13a1: mov edi, ecx */ r_edi = r_ecx;
    /* 005b13a3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005b13a7: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b13aa: je 0x5b155f */ if (fZ) goto L_005b155f;
L_005b13b0:; BB(0x005b13b0);
    /* 005b13b0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b13b3: je 0x5b1530 */ if (fZ) goto L_005b1530;
L_005b13b9:; BB(0x005b13b9);
    /* 005b13b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b13bb: jne 0x5b151d */ if (!fZ) goto L_005b151d;
L_005b13c1:; BB(0x005b13c1);
    /* 005b13c1: mov ecx, edi */ r_ecx = r_edi;
    /* 005b13c3: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5b13c8u); f_007aa094();
    /* 005b13c8: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005b13ce: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b13d0: jne 0x5b1505 */ if (!fZ) goto L_005b1505;
L_005b13d6:; BB(0x005b13d6);
    /* 005b13d6: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b13db: mov ecx, edi */ r_ecx = r_edi;
    /* 005b13dd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b13e2u); f_007aaa30();
    /* 005b13e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b13e4: jne 0x5b13f6 */ if (!fZ) goto L_005b13f6;
L_005b13e6:; BB(0x005b13e6);
    /* 005b13e6: push 0x41f00000 */ { u32 v = 0x41f00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b13eb: mov ecx, edi */ r_ecx = r_edi;
    /* 005b13ed: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b13f2u); f_007aaa30();
    /* 005b13f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b13f4: je 0x5b1407 */ if (fZ) goto L_005b1407;
L_005b13f6:; BB(0x005b13f6);
    /* 005b13f6: push 0xf3 */ { u32 v = 0xf3u; r_esp -= 4; W32(r_esp, v); }
    /* 005b13fb: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b13fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b13ff: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b1404u); f_0050b510();
    /* 005b1404: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b1407:; BB(0x005b1407);
    /* 005b1407: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b140c: mov ecx, edi */ r_ecx = r_edi;
    /* 005b140e: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b1413u); f_007aaa30();
    /* 005b1413: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1415: je 0x5b143d */ if (fZ) goto L_005b143d;
L_005b1417:; BB(0x005b1417);
    /* 005b1417: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b141cu); f_00807ac0();
    /* 005b141c: push dword ptr [eax*4 + 0x9c13f0] */ { u32 v = R32((u32)(r_eax*4+0x9c13f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1423: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1425: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5b142au); f_007879b8();
    /* 005b142a: mov ecx, eax */ r_ecx = r_eax;
    /* 005b142c: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b142f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b1431: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1432: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1434: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1435: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b143au); f_00814298();
    /* 005b143a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b143d:; BB(0x005b143d);
    /* 005b143d: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1442: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1444: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5b1449u); f_007aaa30();
    /* 005b1449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b144b: je 0x5b147d */ if (fZ) goto L_005b147d;
L_005b144d:; BB(0x005b144d);
    /* 005b144d: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5b1452u); f_00807ac0();
    /* 005b1452: push dword ptr [eax*4 + 0x9c14ec] */ { u32 v = R32((u32)(r_eax*4+0x9c14ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1459: mov ecx, edi */ r_ecx = r_edi;
    /* 005b145b: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5b1460u); f_007879b8();
    /* 005b1460: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1462: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 005b1465: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005b1467: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1468: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1469: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b146a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b146b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5b1470u); f_00814298();
    /* 005b1470: push 0xfffffb00 */ { u32 v = 0xfffffb00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1475: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5b147au); f_00814680();
    /* 005b147a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b147d:; BB(0x005b147d);
    /* 005b147d: fld dword ptr [0xa74920] */ FPUSH(R_F32((u32)(0xa74920u)));
    /* 005b1483: fld dword ptr [0xa74920] */ FPUSH(R_F32((u32)(0xa74920u)));
    /* 005b1489: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b148b: fdivr dword ptr [0x92aa04] */ ST(0) = R_F32((u32)(0x92aa04u)) / ST(0);
    /* 005b1491: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 005b1497: fcom dword ptr [0x92a9f4] */ fx_compare(ST(0), R_F32((u32)(0x92a9f4u))); 
    /* 005b149d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b149f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b14a0: ja 0x5b14c1 */ if ((!fC&&!fZ)) goto L_005b14c1;
L_005b14a2:; BB(0x005b14a2);
    /* 005b14a2: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 005b14a4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005b14a6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005b14a8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b14aa: fadd dword ptr [0x92a9f0] */ ST(0) = ST(0) + R_F32((u32)(0x92a9f0u));
    /* 005b14b0: fadd dword ptr [edi + 0x44c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x44cu));
    /* 005b14b6: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 005b14b9: fstp dword ptr [edi + 0x420] */ W_F32((u32)(r_edi+0x420u), ST(0)); FPOP();
    /* 005b14bf: jmp 0x5b14d9 */ goto L_005b14d9;
L_005b14c1:; BB(0x005b14c1);
    /* 005b14c1: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 005b14c3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b14c5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b14c7: fld dword ptr [edi + 0x448] */ FPUSH(R_F32((u32)(r_edi+0x448u)));
    /* 005b14cd: fmul dword ptr [0x92aa00] */ ST(0) = ST(0) * R_F32((u32)(0x92aa00u));
    /* 005b14d3: fstp dword ptr [edi + 0x448] */ W_F32((u32)(r_edi+0x448u), ST(0)); FPOP();
L_005b14d9:; BB(0x005b14d9);
    /* 005b14d9: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005b14dc: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b14e1u); f_0082dcbc();
    /* 005b14e1: fld dword ptr [edi + 0x448] */ FPUSH(R_F32((u32)(r_edi+0x448u)));
    /* 005b14e7: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b14e9: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 005b14ec: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005b14ef: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 005b14f2: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b14f7u); f_0082ddd8();
    /* 005b14f7: fld dword ptr [edi + 0x448] */ FPUSH(R_F32((u32)(r_edi+0x448u)));
    /* 005b14fd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b14ff: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 005b1502: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
L_005b1505:; BB(0x005b1505);
    /* 005b1505: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1507: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1509: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5b150fu); call_ind(t); }
    /* 005b150f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1511: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1513: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x5b1519u); call_ind(t); }
    /* 005b1519: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b151a: ret 4 */ FN_RET(0x005b13a0); r_esp += 8; return;
L_005b151d:; BB(0x005b151d);
    /* 005b151d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b1520: jne 0x5b155b */ if (!fZ) goto L_005b155b;
L_005b1522:; BB(0x005b1522);
    /* 005b1522: mov dword ptr [edi + 0x420], 0 */ W32((u32)(r_edi+0x420u), 0x0u);
    /* 005b152c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b152d: ret 4 */ FN_RET(0x005b13a0); r_esp += 8; return;
L_005b1530:; BB(0x005b1530);
    /* 005b1530: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 005b1536: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1538: je 0x5b155b */ if (fZ) goto L_005b155b;
L_005b153a:; BB(0x005b153a);
    /* 005b153a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b153c: call 0x5afbf0 */ r_esp -= 4; W32(r_esp, 0x5b1541u); f_005afbf0();
    /* 005b1541: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1543: je 0x5b1552 */ if (fZ) goto L_005b1552;
L_005b1545:; BB(0x005b1545);
    /* 005b1545: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1547: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1549: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b154eu); f_0051f62c();
    /* 005b154e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b154f: ret 4 */ FN_RET(0x005b13a0); r_esp += 8; return;
L_005b1552:; BB(0x005b1552);
    /* 005b1552: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1554: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1556: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b155bu); f_0051f62c();
L_005b155b:; BB(0x005b155b);
    /* 005b155b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b155c: ret 4 */ FN_RET(0x005b13a0); r_esp += 8; return;
L_005b155f:; BB(0x005b155f);
    /* 005b155f: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1561: mov eax, 0x11 */ r_eax = 0x11u;
    /* 005b1566: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 005b156d: mov ecx, edi */ r_ecx = r_edi;
    /* 005b156f: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5b1574u); f_0051f664();
    /* 005b1574: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1576: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1578: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5b157eu); call_ind(t); }
    /* 005b157e: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005b1584: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005b1587: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b158a: mov dword ptr [edi + 0x41c], eax */ W32((u32)(r_edi+0x41cu), r_eax);
    /* 005b1590: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1592: call 0x520f68 */ r_esp -= 4; W32(r_esp, 0x5b1597u); f_00520f68();
    /* 005b1597: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 005b159a: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 005b159d: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005b15a0: mov dword ptr [edi + 0x458], eax */ W32((u32)(r_edi+0x458u), r_eax);
    /* 005b15a6: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 005b15a9: mov dword ptr [edi + 0x45c], edx */ W32((u32)(r_edi+0x45cu), r_edx);
    /* 005b15af: mov dword ptr [edi + 0x3f8], 0 */ W32((u32)(r_edi+0x3f8u), 0x0u);
    /* 005b15b9: mov dword ptr [edi + 0x460], eax */ W32((u32)(r_edi+0x460u), r_eax);
    /* 005b15bf: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5b15c4u); f_0082dcbc();
    /* 005b15c4: fld dword ptr [0x92a9fc] */ FPUSH(R_F32((u32)(0x92a9fcu)));
    /* 005b15ca: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b15cc: fadd dword ptr [edi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x38u));
    /* 005b15cf: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 005b15d2: fstp dword ptr [edi + 0x38] */ W_F32((u32)(r_edi+0x38u), ST(0)); FPOP();
    /* 005b15d5: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5b15dau); f_0082ddd8();
    /* 005b15da: fld dword ptr [0x92a9fc] */ FPUSH(R_F32((u32)(0x92a9fcu)));
    /* 005b15e0: mov eax, dword ptr [edi + 0x3c] */ r_eax = R32((u32)(r_edi+0x3cu));
    /* 005b15e3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005b15e5: fadd dword ptr [edi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x40u));
    /* 005b15e8: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 005b15eb: mov dword ptr [edi + 0x448], 0x40555555 */ W32((u32)(r_edi+0x448u), 0x40555555u);
    /* 005b15f5: mov dword ptr [edi + 0x44c], eax */ W32((u32)(r_edi+0x44cu), r_eax);
    /* 005b15fb: mov dword ptr [edi + 0x420], 0 */ W32((u32)(r_edi+0x420u), 0x0u);
    /* 005b1605: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1606: ret 4 */ FN_RET(0x005b13a0); r_esp += 8; return;
}

void f_005b160c(void) /* sub_5B160C */
{
    FN_ENTER(0x005b160c);
    /* 005b160c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b160d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b160f: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b1614u); f_004f7c84();
    /* 005b1614: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1616: je 0x5b1625 */ if (fZ) goto L_005b1625;
L_005b1618:; BB(0x005b1618);
    /* 005b1618: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b161b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b161d: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x5b1623u); call_ind(t); }
    /* 005b1623: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1624: ret  */ FN_RET(0x005b160c); r_esp += 4; return;
L_005b1625:; BB(0x005b1625);
    /* 005b1625: movzx eax, word ptr [ebp + 0x3f4] */ r_eax = (u32)R16((u32)(r_ebp+0x3f4u));
    /* 005b162c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b162d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b1632u); f_007b4d18();
    /* 005b1632: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b1633: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1635: je 0x5b163e */ if (fZ) goto L_005b163e;
L_005b1637:; BB(0x005b1637);
    /* 005b1637: mov ecx, eax */ r_ecx = r_eax;
    /* 005b1639: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5b163eu); f_008173b4();
L_005b163e:; BB(0x005b163e);
    /* 005b163e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1641: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1643: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x5b1649u); call_ind(t); }
    /* 005b1649: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b164c: je 0x5b165b */ if (fZ) goto L_005b165b;
L_005b164e:; BB(0x005b164e);
    /* 005b164e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1651: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1653: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x5b1659u); call_ind(t); }
    /* 005b1659: jmp 0x5b1678 */ goto L_005b1678;
L_005b165b:; BB(0x005b165b);
    /* 005b165b: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005b1662: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1664: je 0x5b166d */ if (fZ) goto L_005b166d;
L_005b1666:; BB(0x005b1666);
    /* 005b1666: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1669: je 0x5b1688 */ if (fZ) goto L_005b1688;
L_005b166b:; BB(0x005b166b);
    /* 005b166b: jmp 0x5b1678 */ goto L_005b1678;
L_005b166d:; BB(0x005b166d);
    /* 005b166d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1670: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1672: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x5b1678u); call_ind(t); }
L_005b1678:; BB(0x005b1678);
    /* 005b1678: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b167a: call 0x5aed28 */ r_esp -= 4; W32(r_esp, 0x5b167fu); f_005aed28();
    /* 005b167f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1681: call 0x5b16b0 */ r_esp -= 4; W32(r_esp, 0x5b1686u); f_005b16b0();
    /* 005b1686: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1687: ret  */ FN_RET(0x005b160c); r_esp += 4; return;
L_005b1688:; BB(0x005b1688);
    /* 005b1688: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b168a: mov eax, dword ptr [ebp + 0x50] */ r_eax = R32((u32)(r_ebp+0x50u));
    /* 005b168d: mov edx, dword ptr [ebp + 0x54] */ r_edx = R32((u32)(r_ebp+0x54u));
    /* 005b1690: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 005b1693: mov eax, dword ptr [ebp + 0x58] */ r_eax = R32((u32)(r_ebp+0x58u));
    /* 005b1696: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 005b1699: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 005b169c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b169e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b16a3u); f_0051f62c();
    /* 005b16a3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b16a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b16a8: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x5b16aeu); call_ind(t); }
    /* 005b16ae: jmp 0x5b1678 */ goto L_005b1678;
}

void f_005b16b0(void) /* sub_5B16B0 */
{
    FN_ENTER(0x005b16b0);
    /* 005b16b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b16b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b16b2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b16b4: mov eax, dword ptr [ebp + 0x480] */ r_eax = R32((u32)(r_ebp+0x480u));
    /* 005b16ba: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b16bd: jne 0x5b16dc */ if (!fZ) goto L_005b16dc;
L_005b16bf:; BB(0x005b16bf);
    /* 005b16bf: lea ebx, [ebp + 0x484] */ r_ebx = (u32)(r_ebp+0x484u);
    /* 005b16c5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b16c7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b16c9: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5b16ccu); call_ind(t); }
    /* 005b16cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b16ce: je 0x5b1704 */ if (fZ) goto L_005b1704;
L_005b16d0:; BB(0x005b16d0);
    /* 005b16d0: mov dword ptr [ebp + 0x480], 0 */ W32((u32)(r_ebp+0x480u), 0x0u);
    /* 005b16da: jmp 0x5b1704 */ goto L_005b1704;
L_005b16dc:; BB(0x005b16dc);
    /* 005b16dc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b16df: jne 0x5b16fe */ if (!fZ) goto L_005b16fe;
L_005b16e1:; BB(0x005b16e1);
    /* 005b16e1: lea ebx, [ebp + 0x484] */ r_ebx = (u32)(r_ebp+0x484u);
    /* 005b16e7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b16e9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b16eb: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5b16eeu); call_ind(t); }
    /* 005b16ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b16f0: je 0x5b1704 */ if (fZ) goto L_005b1704;
L_005b16f2:; BB(0x005b16f2);
    /* 005b16f2: mov dword ptr [ebp + 0x480], 3 */ W32((u32)(r_ebp+0x480u), 0x3u);
    /* 005b16fc: jmp 0x5b1704 */ goto L_005b1704;
L_005b16fe:; BB(0x005b16fe);
    /* 005b16fe: lea ebx, [ebp + 0x484] */ r_ebx = (u32)(r_ebp+0x484u);
L_005b1704:; BB(0x005b1704);
    /* 005b1704: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005b1706: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005b1708: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5b170bu); call_ind(t); }
    /* 005b170b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b170d: je 0x5b1721 */ if (fZ) goto L_005b1721;
L_005b170f:; BB(0x005b170f);
    /* 005b170f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1711: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x5b1716u); f_006401f0();
    /* 005b1716: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1719: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b171b: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x5b1721u); call_ind(t); }
L_005b1721:; BB(0x005b1721);
    /* 005b1721: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1722: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1723: ret  */ FN_RET(0x005b16b0); r_esp += 4; return;
}

void f_005b1724(void) /* sub_5B1724 */
{
    FN_ENTER(0x005b1724);
    /* 005b1724: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1725: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1726: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1727: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1728: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b172b: mov edi, ecx */ r_edi = r_ecx;
    /* 005b172d: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5b1732u); f_004f7c84();
    /* 005b1732: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1734: je 0x5b1748 */ if (fZ) goto L_005b1748;
L_005b1736:; BB(0x005b1736);
    /* 005b1736: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1738: mov ecx, edi */ r_ecx = r_edi;
    /* 005b173a: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5b1740u); call_ind(t); }
    /* 005b1740: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1743: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1745: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1746: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1747: ret  */ FN_RET(0x005b1724); r_esp += 4; return;
L_005b1748:; BB(0x005b1748);
    /* 005b1748: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 005b174e: lea esi, [edi + 0x484] */ r_esi = (u32)(r_edi+0x484u);
    /* 005b1754: mov ecx, esi */ r_ecx = r_esi;
    /* 005b1756: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5b1759u); call_ind(t); }
    /* 005b1759: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b175b: je 0x5b1761 */ if (fZ) goto L_005b1761;
L_005b175d:; BB(0x005b175d);
    /* 005b175d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005b175f: jmp 0x5b1766 */ goto L_005b1766;
L_005b1761:; BB(0x005b1761);
    /* 005b1761: mov ebp, 1 */ r_ebp = 0x1u;
L_005b1766:; BB(0x005b1766);
    /* 005b1766: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1768: je 0x5b1779 */ if (fZ) goto L_005b1779;
L_005b176a:; BB(0x005b176a);
    /* 005b176a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b176b: call 0x506798 */ r_esp -= 4; W32(r_esp, 0x5b1770u); f_00506798();
    /* 005b1770: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b1771: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1773: jne 0x5b19f8 */ if (!fZ) goto L_005b19f8;
L_005b1779:; BB(0x005b1779);
    /* 005b1779: mov eax, dword ptr [edi + 0x41c] */ r_eax = R32((u32)(r_edi+0x41cu));
    /* 005b177f: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b1781: jne 0x5b19f8 */ if (!fZ) goto L_005b19f8;
L_005b1787:; BB(0x005b1787);
    /* 005b1787: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b178e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1791: je 0x5b19f8 */ if (fZ) goto L_005b19f8;
L_005b1797:; BB(0x005b1797);
    /* 005b1797: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x5b179cu); f_00694cc8();
    /* 005b179c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b179e: je 0x5b17c3 */ if (fZ) goto L_005b17c3;
L_005b17a0:; BB(0x005b17a0);
    /* 005b17a0: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b17a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005b17a7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b17a9: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b17af: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b17b5: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x5b17b8u); call_ind(t); }
    /* 005b17b8: mov ebx, eax */ r_ebx = r_eax;
    /* 005b17ba: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b17bc: jne 0x5b17e1 */ if (!fZ) goto L_005b17e1;
L_005b17be:; BB(0x005b17be);
    /* 005b17be: jmp 0x5b19f3 */ goto L_005b19f3;
L_005b17c3:; BB(0x005b17c3);
    /* 005b17c3: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b17c8: mov ecx, edi */ r_ecx = r_edi;
    /* 005b17ca: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b17cc: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b17d1: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5b17d4u); call_ind(t); }
    /* 005b17d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b17d6: je 0x5b19f3 */ if (fZ) goto L_005b19f3;
L_005b17dc:; BB(0x005b17dc);
    /* 005b17dc: mov ebx, 1 */ r_ebx = 0x1u;
L_005b17e1:; BB(0x005b17e1);
    /* 005b17e1: movsx edx, word ptr [edi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 005b17e8: cmp edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b17eb: je 0x5b188b */ if (fZ) goto L_005b188b;
L_005b17f1:; BB(0x005b17f1);
    /* 005b17f1: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005b17f5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b17f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b17fa: lea ecx, [edi + 0x250] */ r_ecx = (u32)(r_edi+0x250u);
    /* 005b1800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1801: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1802: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x5b1807u); f_007a8d98();
    /* 005b1807: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b180a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b180fu); f_0082d7b0();
    /* 005b180f: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 005b1812: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 005b1815: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5b181au); f_0082d838();
    /* 005b181a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b181c: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1821: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1823: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1825: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b182au); f_00830b74();
    /* 005b182a: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005b182e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1830: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5b1835u); f_00830c04();
    /* 005b1835: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005b1839: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b183b: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5b1840u); f_0082e9e4();
    /* 005b1840: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005b1843: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1845: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b184au); f_0082d8bc();
    /* 005b184a: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b184f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1851: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1853: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1855: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b185au); f_00830b74();
    /* 005b185a: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b185f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1864: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005b1869: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b186b: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5b1870u); f_0082fa0c();
    /* 005b1870: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1872: mov edx, 0xffffc000 */ r_edx = 0xffffc000u;
    /* 005b1877: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5b187cu); f_0082e9e4();
    /* 005b187c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b187e: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x5b1883u); f_0052d46c();
    /* 005b1883: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b1884: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b1889u); f_0082da80();
    /* 005b1889: jmp 0x5b1891 */ goto L_005b1891;
L_005b188b:; BB(0x005b188b);
    /* 005b188b: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005b188e: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_005b1891:; BB(0x005b1891);
    /* 005b1891: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1893: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x5b1898u); f_00520608();
    /* 005b1898: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005b189e: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 005b18a4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b18a6: jne 0x5b1a19 */ if (!fZ) goto L_005b1a19;
L_005b18ac:; BB(0x005b18ac);
    /* 005b18ac: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005b18af: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5b18b4u); f_00829cc8();
    /* 005b18b4: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b18b9u); f_0082d7b0();
    /* 005b18b9: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 005b18bc: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5b18c1u); f_0082d838();
    /* 005b18c1: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 005b18c4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b18c6: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b18cbu); f_0082d8bc();
    /* 005b18cb: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b18d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b18d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b18d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b18d6: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b18dbu); f_00830b74();
    /* 005b18db: mov edx, dword ptr [edi + 0x41c] */ r_edx = R32((u32)(r_edi+0x41cu));
    /* 005b18e1: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b18e4: je 0x5b18f7 */ if (fZ) goto L_005b18f7;
L_005b18e6:; BB(0x005b18e6);
    /* 005b18e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b18e8: push dword ptr [edi + 0x420] */ { u32 v = R32((u32)(r_edi+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b18ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b18f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b18f2: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b18f7u); f_00830b74();
L_005b18f7:; BB(0x005b18f7);
    /* 005b18f7: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 005b18fd: mov dword ptr [0xa74974], 0 */ W32((u32)(0xa74974u), 0x0u);
    /* 005b1907: mov edx, eax */ r_edx = r_eax;
    /* 005b1909: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b190c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b190e: mov edx, dword ptr [edi + 0x4a0] */ r_edx = R32((u32)(r_edi+0x4a0u));
    /* 005b1914: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005b1916: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005b1918: add edx, 0x222 */ {  u32 a = r_edx; u32 b = 0x222u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005b191e: mov dword ptr [edi + 0x4a0], edx */ W32((u32)(r_edi+0x4a0u), r_edx);
    /* 005b1924: mov dword ptr [0xa74970], eax */ W32((u32)(0xa74970u), r_eax);
    /* 005b1929: mov dword ptr [0xa74960], edx */ W32((u32)(0xa74960u), r_edx);
    /* 005b192f: mov ecx, 0x5ae634 */ r_ecx = 0x5ae634u;
    /* 005b1934: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5b1939u); f_0082fac4();
    /* 005b1939: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x5b193eu); f_00520d08();
    /* 005b193e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1940: jne 0x5b194d */ if (!fZ) goto L_005b194d;
L_005b1942:; BB(0x005b1942);
    /* 005b1942: mov edx, dword ptr [edi + 0x484] */ r_edx = R32((u32)(r_edi+0x484u));
    /* 005b1948: mov ecx, esi */ r_ecx = r_esi;
    /* 005b194a: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x5b194du); call_ind(t); }
L_005b194d:; BB(0x005b194d);
    /* 005b194d: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5b1952u); f_00578b38();
    /* 005b1952: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x5b1957u); f_00482a10();
    /* 005b1957: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1959: jne 0x5b19b7 */ if (!fZ) goto L_005b19b7;
L_005b195b:; BB(0x005b195b);
    /* 005b195b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b195d: je 0x5b19b7 */ if (fZ) goto L_005b19b7;
L_005b195f:; BB(0x005b195f);
    /* 005b195f: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 005b1965: mov dword ptr [esp + 0x10], 0xbf666666 */ W32((u32)(r_esp+0x10u), 0xbf666666u);
    /* 005b196d: or edx, 0x820 */ {  u32 a = r_edx; u32 b = 0x820u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005b1973: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005b197b: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 005b1981: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005b1985: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005b198d: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005b1995: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1996: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x5b199bu); f_0082d710();
    /* 005b199b: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19a0: push 0xff00 */ { u32 v = 0xff00u; r_esp -= 4; W32(r_esp, v); }
    /* 005b19a5: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x5b19aau); f_0082d6fc();
    /* 005b19aa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b19ad: mov ecx, 0x2500 */ r_ecx = 0x2500u;
    /* 005b19b2: call 0x82e1c4 */ r_esp -= 4; W32(r_esp, 0x5b19b7u); f_0082e1c4();
L_005b19b7:; BB(0x005b19b7);
    /* 005b19b7: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b19ba: je 0x5b1a10 */ if (fZ) goto L_005b1a10;
L_005b19bc:; BB(0x005b19bc);
    /* 005b19bc: mov ecx, edi */ r_ecx = r_edi;
    /* 005b19be: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x5b19c3u); f_007aa7b8();
L_005b19c3:; BB(0x005b19c3);
    /* 005b19c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b19c5: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5b19cau); f_0082fac4();
    /* 005b19ca: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b19cc: jne 0x5b19d9 */ if (!fZ) goto L_005b19d9;
L_005b19ce:; BB(0x005b19ce);
    /* 005b19ce: mov eax, dword ptr [edi + 0x484] */ r_eax = R32((u32)(r_edi+0x484u));
    /* 005b19d4: mov ecx, esi */ r_ecx = r_esi;
    /* 005b19d6: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x5b19d9u); call_ind(t); }
L_005b19d9:; BB(0x005b19d9);
    /* 005b19d9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b19deu); f_0082da80();
    /* 005b19de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b19e0: jne 0x5b1a00 */ if (!fZ) goto L_005b1a00;
L_005b19e2:; BB(0x005b19e2);
    /* 005b19e2: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005b19e7: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005b19ec: mov ecx, edi */ r_ecx = r_edi;
    /* 005b19ee: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x5b19f3u); f_00520610();
L_005b19f3:; BB(0x005b19f3);
    /* 005b19f3: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5b19f8u); f_0082dab0();
L_005b19f8:; BB(0x005b19f8);
    /* 005b19f8: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b19fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b19fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b19fd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b19fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b19ff: ret  */ FN_RET(0x005b1724); r_esp += 4; return;
L_005b1a00:; BB(0x005b1a00);
    /* 005b1a00: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x5b1a05u); f_00482a10();
    /* 005b1a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1a07: je 0x5b19e2 */ if (fZ) goto L_005b19e2;
L_005b1a09:; BB(0x005b1a09);
    /* 005b1a09: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x5b1a0eu); f_005022a0();
    /* 005b1a0e: jmp 0x5b19e2 */ goto L_005b19e2;
L_005b1a10:; BB(0x005b1a10);
    /* 005b1a10: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1a12: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x5b1a17u); f_007aa668();
    /* 005b1a17: jmp 0x5b19c3 */ goto L_005b19c3;
L_005b1a19:; BB(0x005b1a19);
    /* 005b1a19: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x5b1a1eu); f_00482a10();
    /* 005b1a1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1a20: je 0x5b18ac */ if (fZ) goto L_005b18ac;
L_005b1a26:; BB(0x005b1a26);
    /* 005b1a26: mov edx, 1 */ r_edx = 0x1u;
    /* 005b1a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a2d: call 0x50212c */ r_esp -= 4; W32(r_esp, 0x5b1a32u); f_0050212c();
    /* 005b1a32: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1a35: jmp 0x5b18ac */ goto L_005b18ac;
}

void f_005b1a3c(void) /* sub_5B1A3C */
{
    FN_ENTER(0x005b1a3c);
    /* 005b1a3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a3d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a3e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b1a40: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1a42: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x5b1a47u); f_0051f814();
    /* 005b1a47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005b1a49: je 0x5b1a7b */ if (fZ) goto L_005b1a7b;
L_005b1a4b:; BB(0x005b1a4b);
    /* 005b1a4b: mov esi, dword ptr [ebp + 0x3ec] */ r_esi = R32((u32)(r_ebp+0x3ecu));
    /* 005b1a51: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1a53: call 0x5aec2c */ r_esp -= 4; W32(r_esp, 0x5b1a58u); f_005aec2c();
    /* 005b1a58: cmp esi, dword ptr [ebp + 0x3ec] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x3ecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1a5e: je 0x5b1a74 */ if (fZ) goto L_005b1a74;
L_005b1a60:; BB(0x005b1a60);
    /* 005b1a60: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1a62: je 0x5b1a6d */ if (fZ) goto L_005b1a6d;
L_005b1a64:; BB(0x005b1a64);
    /* 005b1a64: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1a66: call 0x5ae620 */ r_esp -= 4; W32(r_esp, 0x5b1a6bu); f_005ae620();
    /* 005b1a6b: jmp 0x5b1a74 */ goto L_005b1a74;
L_005b1a6d:; BB(0x005b1a6d);
    /* 005b1a6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1a6f: call 0x5aed14 */ r_esp -= 4; W32(r_esp, 0x5b1a74u); f_005aed14();
L_005b1a74:; BB(0x005b1a74);
    /* 005b1a74: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1a76: call 0x5aed28 */ r_esp -= 4; W32(r_esp, 0x5b1a7bu); f_005aed28();
L_005b1a7b:; BB(0x005b1a7b);
    /* 005b1a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1a7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1a7d: ret  */ FN_RET(0x005b1a3c); r_esp += 4; return;
}

void f_005b1a80(void) /* sub_5B1A80 */
{
    FN_ENTER(0x005b1a80);
    /* 005b1a80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a83: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1a86: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b1a88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1a8a: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x5b1a8fu); f_0051f814();
    /* 005b1a8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1a91: je 0x5b1adb */ if (fZ) goto L_005b1adb;
L_005b1a93:; BB(0x005b1a93);
    /* 005b1a93: push dword ptr [ebp + 0x3f0] */ { u32 v = R32((u32)(r_ebp+0x3f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1a99: push 0x92ac18 */ { u32 v = 0x92ac18u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1a9e: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1aa3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b1aa8u); f_0061cdb0();
    /* 005b1aa8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1aab: mov eax, dword ptr [ebp + 0x3ec] */ r_eax = R32((u32)(r_ebp+0x3ecu));
    /* 005b1ab1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1ab3: je 0x5b1ac9 */ if (fZ) goto L_005b1ac9;
L_005b1ab5:; BB(0x005b1ab5);
    /* 005b1ab5: push 0x9215a0 */ { u32 v = 0x9215a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1aba: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 005b1abf: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b1ac4u); f_0061cdb0();
    /* 005b1ac4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1ac7: jmp 0x5b1adb */ goto L_005b1adb;
L_005b1ac9:; BB(0x005b1ac9);
    /* 005b1ac9: push 0x9215ac */ { u32 v = 0x9215acu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ace: push 0x13001d */ { u32 v = 0x13001du; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ad3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b1ad8u); f_0061cdb0();
    /* 005b1ad8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005b1adb:; BB(0x005b1adb);
    /* 005b1adb: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ae0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1ae2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1ae5: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1aea: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x5b1aedu); call_ind(t); }
    /* 005b1aed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1aef: je 0x5b1c0b */ if (fZ) goto L_005b1c0b;
L_005b1af5:; BB(0x005b1af5);
    /* 005b1af5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b1af7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1af8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1af9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1afb: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x5b1b00u); f_00520cf8();
    /* 005b1b00: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 005b1b03: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5b1b08u); f_00829cc8();
    /* 005b1b08: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5b1b0du); f_0082d7b0();
    /* 005b1b0d: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 005b1b10: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5b1b15u); f_0082d838();
    /* 005b1b15: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005b1b18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1b1a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5b1b1fu); f_0082d8bc();
    /* 005b1b1f: fld dword ptr [ebp + 0x368] */ FPUSH(R_F32((u32)(r_ebp+0x368u)));
    /* 005b1b25: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 005b1b29: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 005b1b2e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b1b33: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005b1b37: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005b1b3b: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 005b1b3f: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005b1b43: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005b1b47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005b1b49: jl 0x5b1b57 */ if ((fS!=fO)) goto L_005b1b57;
L_005b1b4b:; BB(0x005b1b4b);
    /* 005b1b4b: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b1b4e: jl 0x5b1b59 */ if ((fS!=fO)) goto L_005b1b59;
L_005b1b50:; BB(0x005b1b50);
    /* 005b1b50: mov eax, 0x13 */ r_eax = 0x13u;
    /* 005b1b55: jmp 0x5b1b59 */ goto L_005b1b59;
L_005b1b57:; BB(0x005b1b57);
    /* 005b1b57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b1b59:; BB(0x005b1b59);
    /* 005b1b59: mov edx, dword ptr [ebp + 0xd8] */ r_edx = R32((u32)(r_ebp+0xd8u));
    /* 005b1b5f: mov esi, dword ptr [ebp + 0xdc] */ r_esi = R32((u32)(r_ebp+0xdcu));
    /* 005b1b65: fld dword ptr [ebp + 0x36c] */ FPUSH(R_F32((u32)(r_ebp+0x36cu)));
    /* 005b1b6b: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 005b1b6f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b1b71: mov edi, dword ptr [edx + eax*8 + 4] */ r_edi = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 005b1b75: fcomp dword ptr [0x92a9c4] */ fx_compare(ST(0), R_F32((u32)(0x92a9c4u))); FPOP();
    /* 005b1b7b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b1b7d: mov esi, dword ptr [esi + edi*8 + 4] */ r_esi = R32((u32)(r_esi+r_edi*8+0x4u));
    /* 005b1b81: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005b1b83: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1b85: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b1b86: jae 0x5b1b94 */ if (!fC) goto L_005b1b94;
L_005b1b88:; BB(0x005b1b88);
    /* 005b1b88: fld dword ptr [0x92a9c4] */ FPUSH(R_F32((u32)(0x92a9c4u)));
    /* 005b1b8e: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 005b1b92: jmp 0x5b1bcd */ goto L_005b1bcd;
L_005b1b94:; BB(0x005b1b94);
    /* 005b1b94: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005b1b98: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 005b1b9b: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 005b1b9e: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005b1ba2: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 005b1ba6: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 005b1ba9: fadd dword ptr [eax*4 + 0x92a8f8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x92a8f8u));
    /* 005b1bb0: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005b1bb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005b1bb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005b1bb5: jae 0x5b1bcd */ if (!fC) goto L_005b1bcd;
L_005b1bb7:; BB(0x005b1bb7);
    /* 005b1bb7: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 005b1bbb: fild dword ptr [esp + 0x30] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x30u)));
    /* 005b1bbf: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b1bc2: fadd dword ptr [edx*4 + 0x92a8f8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x92a8f8u));
    /* 005b1bc9: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
L_005b1bcd:; BB(0x005b1bcd);
    /* 005b1bcd: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bd3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1bd4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1bd6: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5b1bdbu); f_00830b74();
    /* 005b1bdb: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x5b1be0u); f_00578b38();
    /* 005b1be0: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5b1be5u); f_0082fa9c();
    /* 005b1be5: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 005b1be9: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 005b1bec: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005b1bf0: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b1bf3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005b1bf7: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5b1bfcu); f_0083046c();
    /* 005b1bfc: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5b1c01u); f_0082faac();
    /* 005b1c01: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5b1c06u); f_0082dab0();
    /* 005b1c06: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5b1c0bu); f_0082da80();
L_005b1c0b:; BB(0x005b1c0b);
    /* 005b1c0b: mov esi, dword ptr [0xa74978] */ r_esi = R32((u32)(0xa74978u));
    /* 005b1c11: mov edi, dword ptr [ebp + 0x3f0] */ r_edi = R32((u32)(r_ebp+0x3f0u));
    /* 005b1c17: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1c19: je 0x5b1c39 */ if (fZ) goto L_005b1c39;
L_005b1c1b:; BB(0x005b1c1b);
    /* 005b1c1b: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005b1c1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c20: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5b1c25u); f_007b4d18();
    /* 005b1c25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005b1c26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1c28: je 0x5b1c32 */ if (fZ) goto L_005b1c32;
L_005b1c2a:; BB(0x005b1c2a);
    /* 005b1c2a: cmp edi, dword ptr [eax + 0x3f0] */ {  u32 a = r_edi; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1c30: je 0x5b1c3b */ if (fZ) goto L_005b1c3b;
L_005b1c32:; BB(0x005b1c32);
    /* 005b1c32: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 005b1c35: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1c37: jne 0x5b1c1b */ if (!fZ) goto L_005b1c1b;
L_005b1c39:; BB(0x005b1c39);
    /* 005b1c39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005b1c3b:; BB(0x005b1c3b);
    /* 005b1c3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1c3d: je 0x5b1c65 */ if (fZ) goto L_005b1c65;
L_005b1c3f:; BB(0x005b1c3f);
    /* 005b1c3f: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c44: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c49: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b1c4f: add eax, 0x300 */ {  u32 a = r_eax; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005b1c54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c55: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1c56: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b1c5bu); f_0061cdb0();
    /* 005b1c5b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1c5e: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1c61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1c62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1c63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1c64: ret  */ FN_RET(0x005b1a80); r_esp += 4; return;
L_005b1c65:; BB(0x005b1c65);
    /* 005b1c65: fld dword ptr [0x92a9bc] */ FPUSH(R_F32((u32)(0x92a9bcu)));
    /* 005b1c6b: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005b1c6f: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 005b1c75: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 005b1c7b: mov esi, dword ptr [ebp + 0x308] */ r_esi = R32((u32)(r_ebp+0x308u));
    /* 005b1c81: add ebp, 0x300 */ {  u32 a = r_ebp; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005b1c87: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005b1c8b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005b1c8f: fadd dword ptr [esp + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x10u));
    /* 005b1c93: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 005b1c97: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 005b1c9b: push 0xff6060ff */ { u32 v = 0xff6060ffu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ca0: push 0xffc0c0c0 */ { u32 v = 0xffc0c0c0u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ca5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ca6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ca7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x5b1cacu); f_0061cdb0();
    /* 005b1cac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1caf: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1cb2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1cb3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1cb4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1cb5: ret  */ FN_RET(0x005b1a80); r_esp += 4; return;
}

void f_005b1cb8(void) /* sub_5B1CB8 */
{
    FN_ENTER(0x005b1cb8);
    /* 005b1cb8: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005b1cbf: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b1cc2: je 0x5b1ccb */ if (fZ) goto L_005b1ccb;
L_005b1cc4:; BB(0x005b1cc4);
    /* 005b1cc4: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cc6: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b1ccbu); f_0051f62c();
L_005b1ccb:; BB(0x005b1ccb);
    /* 005b1ccb: ret  */ FN_RET(0x005b1cb8); r_esp += 4; return;
}

void f_005b1ccc(void) /* sub_5B1CCC */
{
    FN_ENTER(0x005b1ccc);
    /* 005b1ccc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 005b1cd3: cmp eax, 0x12 */ {  u32 a = r_eax; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005b1cd6: je 0x5b1cdf */ if (fZ) goto L_005b1cdf;
L_005b1cd8:; BB(0x005b1cd8);
    /* 005b1cd8: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1cda: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5b1cdfu); f_0051f62c();
L_005b1cdf:; BB(0x005b1cdf);
    /* 005b1cdf: ret  */ FN_RET(0x005b1ccc); r_esp += 4; return;
}

void f_005b1ce0(void) /* sub_5B1CE0 */
{
    FN_ENTER(0x005b1ce0);
    /* 005b1ce0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ce1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1ce2: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1ce5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b1ce7: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005b1ceb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1ced: je 0x5b1d88 */ if (fZ) goto L_005b1d88;
L_005b1cf3:; BB(0x005b1cf3);
    /* 005b1cf3: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 005b1cf8: movzx edx, byte ptr [eax + 0x92abc0] */ r_edx = (u32)R8((u32)(r_eax+0x92abc0u));
    /* 005b1cff: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b1d02: je 0x5b1d92 */ if (fZ) goto L_005b1d92;
L_005b1d08:; BB(0x005b1d08);
    /* 005b1d08: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b1d0b: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005b1d0e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b1d11: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 005b1d14: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005b1d17: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b1d1b: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005b1d1e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b1d22: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b1d27u); f_0082f9c4();
    /* 005b1d27: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b1d2a: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b1d2e: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b1d30: fmul qword ptr [0x92a8f0] */ ST(0) = ST(0) * R_F64((u32)(0x92a8f0u));
    /* 005b1d36: fdiv qword ptr [0x92a8e8] */ ST(0) = ST(0) / R_F64((u32)(0x92a8e8u));
    /* 005b1d3c: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005b1d40: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005b1d45: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b1d4a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b1d4e: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005b1d52: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005b1d56: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005b1d5a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b1d5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d5f: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1d62: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b1d67u); f_007a9018();
    /* 005b1d67: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1d6a: mov ecx, dword ptr [ebp + 0x3d0] */ r_ecx = R32((u32)(r_ebp+0x3d0u));
    /* 005b1d70: mov edx, ecx */ r_edx = r_ecx;
    /* 005b1d72: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b1d75: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1d77: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1d79: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b1d7b: jge 0x5b1d92 */ if ((fS==fO)) goto L_005b1d92;
L_005b1d7d:; BB(0x005b1d7d);
    /* 005b1d7d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005b1d80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1d82: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x5b1d88u); call_ind(t); }
L_005b1d88:; BB(0x005b1d88);
    /* 005b1d88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b1d8a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1d8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1d8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1d8f: ret 0xc */ FN_RET(0x005b1ce0); r_esp += 16; return;
L_005b1d92:; BB(0x005b1d92);
    /* 005b1d92: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1d96: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005b1d98: push dword ptr [esp + 0x38] */ { u32 v = R32((u32)(r_esp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1d9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1d9d: call 0x7775ec */ r_esp -= 4; W32(r_esp, 0x5b1da2u); f_007775ec();
    /* 005b1da2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1da5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1da6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1da7: ret 0xc */ FN_RET(0x005b1ce0); r_esp += 16; return;
}

void f_005b1dac(void) /* sub_5B1DAC */
{
    FN_ENTER(0x005b1dac);
    /* 005b1dac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1dad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1dae: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1db1: mov edi, ecx */ r_edi = r_ecx;
    /* 005b1db3: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005b1db7: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005b1dbb: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1dbe: je 0x5b1e6e */ if (fZ) goto L_005b1e6e;
L_005b1dc4:; BB(0x005b1dc4);
    /* 005b1dc4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1dc6: je 0x5b1e60 */ if (fZ) goto L_005b1e60;
L_005b1dcc:; BB(0x005b1dcc);
    /* 005b1dcc: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 005b1dd1: movzx edx, byte ptr [eax + 0x92abc0] */ r_edx = (u32)R8((u32)(r_eax+0x92abc0u));
    /* 005b1dd8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b1ddb: je 0x5b1e6e */ if (fZ) goto L_005b1e6e;
L_005b1de1:; BB(0x005b1de1);
    /* 005b1de1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b1de4: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 005b1de7: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b1dea: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 005b1ded: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005b1df0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b1df4: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005b1df7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b1dfb: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b1e00u); f_0082f9c4();
    /* 005b1e00: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b1e03: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b1e07: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b1e09: fmul qword ptr [0x92a8e0] */ ST(0) = ST(0) * R_F64((u32)(0x92a8e0u));
    /* 005b1e0f: fdiv qword ptr [0x92a8d8] */ ST(0) = ST(0) / R_F64((u32)(0x92a8d8u));
    /* 005b1e15: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005b1e19: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005b1e1e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b1e23: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b1e27: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005b1e2b: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005b1e2f: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005b1e33: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b1e37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e38: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1e3b: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b1e40u); f_007a9018();
    /* 005b1e40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1e43: mov ecx, dword ptr [edi + 0x3d0] */ r_ecx = R32((u32)(r_edi+0x3d0u));
    /* 005b1e49: mov edx, ecx */ r_edx = r_ecx;
    /* 005b1e4b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b1e4e: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1e50: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1e52: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b1e54: jge 0x5b1e6e */ if ((fS==fO)) goto L_005b1e6e;
L_005b1e56:; BB(0x005b1e56);
    /* 005b1e56: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1e58: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1e5a: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x5b1e60u); call_ind(t); }
L_005b1e60:; BB(0x005b1e60);
    /* 005b1e60: fld dword ptr [0x92a9b8] */ FPUSH(R_F32((u32)(0x92a9b8u)));
    /* 005b1e66: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1e69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1e6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1e6b: ret 0x18 */ FN_RET(0x005b1dac); r_esp += 28; return;
L_005b1e6e:; BB(0x005b1e6e);
    /* 005b1e6e: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1e72: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1e74: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1e78: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1e7c: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1e80: push dword ptr [esp + 0x44] */ { u32 v = R32((u32)(r_esp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1e84: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e85: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x5b1e8au); f_00773afc();
    /* 005b1e8a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1e8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005b1e8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1e8f: ret 0x18 */ FN_RET(0x005b1dac); r_esp += 28; return;
}

void f_005b1e94(void) /* sub_5B1E94 */
{
    FN_ENTER(0x005b1e94);
    /* 005b1e94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e95: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1e96: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1e99: mov edi, ecx */ r_edi = r_ecx;
    /* 005b1e9b: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 005b1e9f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1ea1: je 0x5b1f3b */ if (fZ) goto L_005b1f3b;
L_005b1ea7:; BB(0x005b1ea7);
    /* 005b1ea7: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 005b1eac: movzx edx, byte ptr [eax + 0x92abc0] */ r_edx = (u32)R8((u32)(r_eax+0x92abc0u));
    /* 005b1eb3: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005b1eb6: je 0x5b1f52 */ if (fZ) goto L_005b1f52;
L_005b1ebc:; BB(0x005b1ebc);
    /* 005b1ebc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b1ebf: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005b1ec2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b1ec5: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 005b1ec8: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 005b1ecb: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005b1ecf: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 005b1ed2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b1ed6: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b1edbu); f_0082f9c4();
    /* 005b1edb: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 005b1ede: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005b1ee2: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 005b1ee4: fmul qword ptr [0x92a8d0] */ ST(0) = ST(0) * R_F64((u32)(0x92a8d0u));
    /* 005b1eea: fdiv qword ptr [0x92a8c8] */ ST(0) = ST(0) / R_F64((u32)(0x92a8c8u));
    /* 005b1ef0: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 005b1ef4: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005b1ef9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005b1efe: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005b1f02: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 005b1f06: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 005b1f0a: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 005b1f0e: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005b1f12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f13: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1f16: call 0x7a9018 */ r_esp -= 4; W32(r_esp, 0x5b1f1bu); f_007a9018();
    /* 005b1f1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005b1f1e: mov ecx, dword ptr [edi + 0x3d0] */ r_ecx = R32((u32)(r_edi+0x3d0u));
    /* 005b1f24: mov edx, ecx */ r_edx = r_ecx;
    /* 005b1f26: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 005b1f29: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005b1f2b: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005b1f2d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005b1f2f: jge 0x5b1f52 */ if ((fS==fO)) goto L_005b1f52;
L_005b1f31:; BB(0x005b1f31);
    /* 005b1f31: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005b1f33: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1f35: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x5b1f3bu); call_ind(t); }
L_005b1f3b:; BB(0x005b1f3b);
    /* 005b1f3b: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005b1f3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f40: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f41: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1f43: call 0x5b1f70 */ r_esp -= 4; W32(r_esp, 0x5b1f48u); f_005b1f70();
    /* 005b1f48: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005b1f4a: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1f4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1f4e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1f4f: ret 0x10 */ FN_RET(0x005b1e94); r_esp += 20; return;
L_005b1f52:; BB(0x005b1f52);
    /* 005b1f52: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1f56: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 005b1f5a: mov ecx, edi */ r_ecx = r_edi;
    /* 005b1f5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f5d: push dword ptr [esp + 0x3c] */ { u32 v = R32((u32)(r_esp+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005b1f61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f62: call 0x7730ec */ r_esp -= 4; W32(r_esp, 0x5b1f67u); f_007730ec();
    /* 005b1f67: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1f6a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005b1f6b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005b1f6c: ret 0x10 */ FN_RET(0x005b1e94); r_esp += 20; return;
}

void f_005b1f70(void) /* sub_5B1F70 */
{
    FN_ENTER(0x005b1f70);
    /* 005b1f70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f71: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005b1f74: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005b1f76: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 005b1f7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1f7c: je 0x5b1fb5 */ if (fZ) goto L_005b1fb5;
L_005b1f7e:; BB(0x005b1f7e);
    /* 005b1f7e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005b1f80: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b1f83: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 005b1f86: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b1f8a: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 005b1f8d: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
L_005b1f91:; BB(0x005b1f91);
    /* 005b1f91: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005b1f94: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1f9a: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b1f9fu); f_0050b510();
    /* 005b1f9f: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 005b1fa3: push 0x1f7 */ { u32 v = 0x1f7u; r_esp -= 4; W32(r_esp, v); }
    /* 005b1fa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005b1fa9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5b1faeu); f_0050b510();
    /* 005b1fae: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005b1fb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005b1fb2: ret 8 */ FN_RET(0x005b1f70); r_esp += 12; return;
L_005b1fb5:; BB(0x005b1fb5);
    /* 005b1fb5: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 005b1fbb: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 005b1fc1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005b1fc4: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 005b1fca: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005b1fce: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005b1fd2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b1fd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005b1fd8: je 0x5b2004 */ if (fZ) goto L_005b2004;
L_005b1fda:; BB(0x005b1fda);
    /* 005b1fda: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b1fde: mov edx, dword ptr [eax + 0x300] */ r_edx = R32((u32)(r_eax+0x300u));
    /* 005b1fe4: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b1fe8: mov eax, dword ptr [eax + 0x304] */ r_eax = R32((u32)(r_eax+0x304u));
    /* 005b1fee: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005b1ff2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005b1ff6: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 005b1ffa: mov eax, dword ptr [eax + 0x308] */ r_eax = R32((u32)(r_eax+0x308u));
    /* 005b2000: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
L_005b2004:; BB(0x005b2004);
    /* 005b2004: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005b2008: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005b200b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x5b2010u); f_0082f9c4();
    /* 005b2010: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005b2014: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x5b2019u); f_0082df08();
    /* 005b2019: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005b201b: fld dword ptr [0x92a9b4] */ FPUSH(R_F32((u32)(0x92a9b4u)));
    /* 005b2021: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005b2025: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 005b2029: mov eax, dword ptr [ebp + 0xa4] */ r_eax = R32((u32)(r_ebp+0xa4u));
    /* 005b202f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005b2031: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 005b2034: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 005b2036: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005b2038: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005b203c: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005b2040: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 005b2048: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005b204b: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005b204f: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5b2054u); f_0082ebac();
    /* 005b2054: jmp 0x5b1f91 */ goto L_005b1f91;
}

