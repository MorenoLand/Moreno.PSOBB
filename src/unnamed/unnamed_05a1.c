#include "protos.h"

void f_005a1054(void) /* sub_5A1054 */
{
    FN_ENTER(0x005a1054);
    /* 005a1054: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1055: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1058: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a105a: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005a105e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1061: je 0x5a10aa */ if (fZ) goto L_005a10aa;
L_005a1063:; BB(0x005a1063);
    /* 005a1063: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1066: je 0x5a1087 */ if (fZ) goto L_005a1087;
L_005a1068:; BB(0x005a1068);
    /* 005a1068: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a106a: je 0x5a10a3 */ if (fZ) goto L_005a10a3;
L_005a106c:; BB(0x005a106c);
    /* 005a106c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a106f: jne 0x5a10a3 */ if (!fZ) goto L_005a10a3;
L_005a1071:; BB(0x005a1071);
    /* 005a1071: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005a1077: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a107a: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005a1080: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1083: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1084: ret 4 */ FN_RET(0x005a1054); r_esp += 8; return;
L_005a1087:; BB(0x005a1087);
    /* 005a1087: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 005a108d: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 005a1093: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5a1096u); call_ind(t); }
    /* 005a1096: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1098: je 0x5a10a3 */ if (fZ) goto L_005a10a3;
L_005a109a:; BB(0x005a109a);
    /* 005a109a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a109c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a109e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a10a3u); f_0051f62c();
L_005a10a3:; BB(0x005a10a3);
    /* 005a10a3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a10a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a10a7: ret 4 */ FN_RET(0x005a1054); r_esp += 8; return;
L_005a10aa:; BB(0x005a10aa);
    /* 005a10aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a10ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a10ad: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a10b4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a10b6: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a10bbu); f_0051f664();
    /* 005a10bb: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a10be: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a10c0: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5a10c6u); call_ind(t); }
    /* 005a10c6: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005a10cc: or eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a10cf: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005a10d5: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 005a10db: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5a10e0u); f_00576c48();
    /* 005a10e0: fld dword ptr [0x929c80] */ FPUSH(R_F32((u32)(0x929c80u)));
    /* 005a10e6: fadd dword ptr [ebp + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x3d8u));
    /* 005a10ec: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 005a10ef: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 005a10f2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a10f6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a10f9: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a10fd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a1100: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1101: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x5a1106u); f_005789e4();
    /* 005a1106: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1107: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a110a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a110b: ret 4 */ FN_RET(0x005a1054); r_esp += 8; return;
}

void f_005a1110(void) /* sub_5A1110 */
{
    FN_ENTER(0x005a1110);
    /* 005a1110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1111: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1112: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a1114: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a1118: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a111b: je 0x5a125e */ if (fZ) goto L_005a125e;
L_005a1121:; BB(0x005a1121);
    /* 005a1121: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1124: je 0x5a11c6 */ if (fZ) goto L_005a11c6;
L_005a112a:; BB(0x005a112a);
    /* 005a112a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a112c: jne 0x5a1220 */ if (!fZ) goto L_005a1220;
L_005a1132:; BB(0x005a1132);
    /* 005a1132: add dword ptr [ebp + 0x42c], 1 */ { u32 ad = (u32)(r_ebp+0x42cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005a1139: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a113b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a1140u); f_007aa094();
    /* 005a1140: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1145: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1147: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a114cu); f_00520ea0();
    /* 005a114c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a114e: je 0x5a11b6 */ if (fZ) goto L_005a11b6;
L_005a1150:; BB(0x005a1150);
    /* 005a1150: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1152: call 0x5213d8 */ r_esp -= 4; W32(r_esp, 0x5a1157u); f_005213d8();
    /* 005a1157: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1159: call 0x521410 */ r_esp -= 4; W32(r_esp, 0x5a115eu); f_00521410();
    /* 005a115e: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005a1161: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5a1166u); f_0082dcbc();
    /* 005a1166: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005a1169: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 005a116c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a1171u); f_0082ddd8();
    /* 005a1171: fld dword ptr [ebp + 0x3a8] */ FPUSH(R_F32((u32)(r_ebp+0x3a8u)));
    /* 005a1177: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 005a117a: fld dword ptr [ebp + 0x3b0] */ FPUSH(R_F32((u32)(r_ebp+0x3b0u)));
    /* 005a1180: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005a1182: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005a1184: fstp dword ptr [ebp + 0x43c] */ W_F32((u32)(r_ebp+0x43cu), ST(0)); FPOP();
    /* 005a118a: mov ecx, 0x1000 */ r_ecx = 0x1000u;
    /* 005a118f: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5a1194u); f_0082ddd8();
    /* 005a1194: fcomp dword ptr [ebp + 0x43c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x43cu))); FPOP();
    /* 005a119a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a119c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a119d: jbe 0x5a11b6 */ if ((fC||fZ)) goto L_005a11b6;
L_005a119f:; BB(0x005a119f);
    /* 005a119f: push 0x500 */ { u32 v = 0x500u; r_esp -= 4; W32(r_esp, v); }
    /* 005a11a4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a11a6: call 0x5214cc */ r_esp -= 4; W32(r_esp, 0x5a11abu); f_005214cc();
    /* 005a11ab: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a11ae: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a11b0: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a11b6u); call_ind(t); }
L_005a11b6:; BB(0x005a11b6);
    /* 005a11b6: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a11b9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a11bb: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x5a11c1u); call_ind(t); }
    /* 005a11c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a11c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a11c3: ret 4 */ FN_RET(0x005a1110); r_esp += 8; return;
L_005a11c6:; BB(0x005a11c6);
    /* 005a11c6: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a11cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a11cd: call 0x520ea0 */ r_esp -= 4; W32(r_esp, 0x5a11d2u); f_00520ea0();
    /* 005a11d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a11d4: je 0x5a120a */ if (fZ) goto L_005a120a;
L_005a11d6:; BB(0x005a11d6);
    /* 005a11d6: fld dword ptr [ebp + 0x3b4] */ FPUSH(R_F32((u32)(r_ebp+0x3b4u)));
    /* 005a11dc: fcomp dword ptr [0x929c74] */ fx_compare(ST(0), R_F32((u32)(0x929c74u))); FPOP();
    /* 005a11e2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a11e4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a11e5: jbe 0x5a11fc */ if ((fC||fZ)) goto L_005a11fc;
L_005a11e7:; BB(0x005a11e7);
    /* 005a11e7: mov eax, dword ptr [ebp + 0x430] */ r_eax = R32((u32)(r_ebp+0x430u));
    /* 005a11ed: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a11f0: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005a11f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a11f8: jg 0x5a1220 */ if ((!fZ&&fS==fO)) goto L_005a1220;
L_005a11fa:; BB(0x005a11fa);
    /* 005a11fa: jmp 0x5a1225 */ goto L_005a1225;
L_005a11fc:; BB(0x005a11fc);
    /* 005a11fc: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a11fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1200: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1205u); f_0051f62c();
    /* 005a1205: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1206: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1207: ret 4 */ FN_RET(0x005a1110); r_esp += 8; return;
L_005a120a:; BB(0x005a120a);
    /* 005a120a: mov eax, dword ptr [ebp + 0x42c] */ r_eax = R32((u32)(r_ebp+0x42cu));
    /* 005a1210: cmp eax, 0xe10 */ {  u32 a = r_eax; u32 b = 0xe10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a1215: jl 0x5a1220 */ if ((fS!=fO)) goto L_005a1220;
L_005a1217:; BB(0x005a1217);
    /* 005a1217: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1219: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a121b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1220u); f_0051f62c();
L_005a1220:; BB(0x005a1220);
    /* 005a1220: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1222: ret 4 */ FN_RET(0x005a1110); r_esp += 8; return;
L_005a1225:; BB(0x005a1225);
    /* 005a1225: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a1228: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a122a: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x5a1230u); call_ind(t); }
    /* 005a1230: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1232: je 0x5a1220 */ if (fZ) goto L_005a1220;
L_005a1234:; BB(0x005a1234);
    /* 005a1234: mov dword ptr [ebp + 0x430], 0x3c */ W32((u32)(r_ebp+0x430u), 0x3cu);
    /* 005a123e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1240: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a1245u); f_007751b0();
    /* 005a1245: fcomp dword ptr [0x929c70] */ fx_compare(ST(0), R_F32((u32)(0x929c70u))); FPOP();
    /* 005a124b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a124d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a124e: ja 0x5a1220 */ if ((!fC&&!fZ)) goto L_005a1220;
L_005a1250:; BB(0x005a1250);
    /* 005a1250: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1252: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1254: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1259u); f_0051f62c();
    /* 005a1259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a125a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a125b: ret 4 */ FN_RET(0x005a1110); r_esp += 8; return;
L_005a125e:; BB(0x005a125e);
    /* 005a125e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1260: mov eax, 9 */ r_eax = 0x9u;
    /* 005a1265: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 005a126c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a126e: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a1273u); f_0051f664();
    /* 005a1273: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a1276: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1278: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x5a127eu); call_ind(t); }
    /* 005a127e: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005a1284: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 005a128e: and eax, 0xfffffff8 */ {  u32 a = r_eax; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a1291: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 005a1297: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1299: mov dword ptr [ebp + 0x42c], edx */ W32((u32)(r_ebp+0x42cu), r_edx);
    /* 005a129f: mov dword ptr [ebp + 0x430], edx */ W32((u32)(r_ebp+0x430u), r_edx);
    /* 005a12a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a12a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a12a7: ret 4 */ FN_RET(0x005a1110); r_esp += 8; return;
}

void f_005a12ac(void) /* sub_5A12AC */
{
    FN_ENTER(0x005a12ac);
    /* 005a12ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a12ad: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a12b0: mov esi, ecx */ r_esi = r_ecx;
    /* 005a12b2: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005a12b6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12b9: je 0x5a134a */ if (fZ) goto L_005a134a;
L_005a12bf:; BB(0x005a12bf);
    /* 005a12bf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12c2: je 0x5a130c */ if (fZ) goto L_005a130c;
L_005a12c4:; BB(0x005a12c4);
    /* 005a12c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12c6: jne 0x5a12f1 */ if (!fZ) goto L_005a12f1;
L_005a12c8:; BB(0x005a12c8);
    /* 005a12c8: fld dword ptr [esi + 0x410] */ FPUSH(R_F32((u32)(r_esi+0x410u)));
    /* 005a12ce: fcomp dword ptr [0x929c6c] */ fx_compare(ST(0), R_F32((u32)(0x929c6cu))); FPOP();
    /* 005a12d4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a12d6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a12d7: jb 0x5a12e0 */ if (fC) goto L_005a12e0;
L_005a12d9:; BB(0x005a12d9);
    /* 005a12d9: mov ecx, esi */ r_ecx = r_esi;
    /* 005a12db: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a12e0u); f_007aa094();
L_005a12e0:; BB(0x005a12e0);
    /* 005a12e0: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a12e2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a12e4: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a12eau); call_ind(t); }
    /* 005a12ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a12ed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a12ee: ret 4 */ FN_RET(0x005a12ac); r_esp += 8; return;
L_005a12f1:; BB(0x005a12f1);
    /* 005a12f1: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a12f4: jne 0x5a1333 */ if (!fZ) goto L_005a1333;
L_005a12f6:; BB(0x005a12f6);
    /* 005a12f6: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005a12fc: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a12ff: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 005a1305: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1308: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1309: ret 4 */ FN_RET(0x005a12ac); r_esp += 8; return;
L_005a130c:; BB(0x005a130c);
    /* 005a130c: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 005a1312: lea ecx, [esi + 0x40c] */ r_ecx = (u32)(r_esi+0x40cu);
    /* 005a1318: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5a131bu); call_ind(t); }
    /* 005a131b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a131d: je 0x5a1333 */ if (fZ) goto L_005a1333;
L_005a131f:; BB(0x005a131f);
    /* 005a131f: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005a1325: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1328: je 0x5a133a */ if (fZ) goto L_005a133a;
L_005a132a:; BB(0x005a132a);
    /* 005a132a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a132c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a132e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1333u); f_0051f62c();
L_005a1333:; BB(0x005a1333);
    /* 005a1333: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1336: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1337: ret 4 */ FN_RET(0x005a12ac); r_esp += 8; return;
L_005a133a:; BB(0x005a133a);
    /* 005a133a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a133c: mov ecx, esi */ r_ecx = r_esi;
    /* 005a133e: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1343u); f_0051f62c();
    /* 005a1343: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1346: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1347: ret 4 */ FN_RET(0x005a12ac); r_esp += 8; return;
L_005a134a:; BB(0x005a134a);
    /* 005a134a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a134c: mov eax, 2 */ r_eax = 0x2u;
    /* 005a1351: mov word ptr [esi + 0xb8], ax */ W16((u32)(r_esi+0xb8u), (u16)r_eax);
    /* 005a1358: mov ecx, esi */ r_ecx = r_esi;
    /* 005a135a: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a135fu); f_0051f664();
    /* 005a135f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005a1361: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1363: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5a1369u); call_ind(t); }
    /* 005a1369: mov eax, dword ptr [esi + 0x3d4] */ r_eax = R32((u32)(r_esi+0x3d4u));
    /* 005a136f: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a1372: or eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a1375: mov dword ptr [esi + 0x3d4], eax */ W32((u32)(r_esi+0x3d4u), r_eax);
    /* 005a137b: lea ecx, [esi + 0x40c] */ r_ecx = (u32)(r_esi+0x40cu);
    /* 005a1381: call 0x576c48 */ r_esp -= 4; W32(r_esp, 0x5a1386u); f_00576c48();
    /* 005a1386: fld dword ptr [0x929c68] */ FPUSH(R_F32((u32)(0x929c68u)));
    /* 005a138c: fadd dword ptr [esi + 0x3d8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x3d8u));
    /* 005a1392: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 005a1395: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005a1398: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005a139c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005a139f: mov eax, dword ptr [esi + 0x3c8] */ r_eax = R32((u32)(r_esi+0x3c8u));
    /* 005a13a5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005a13a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a13ab: jne 0x5a13be */ if (!fZ) goto L_005a13be;
L_005a13ad:; BB(0x005a13ad);
    /* 005a13ad: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a13b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a13b1: call 0x5789e4 */ r_esp -= 4; W32(r_esp, 0x5a13b6u); f_005789e4();
    /* 005a13b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a13b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a13ba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a13bb: ret 4 */ FN_RET(0x005a12ac); r_esp += 8; return;
L_005a13be:; BB(0x005a13be);
    /* 005a13be: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005a13c0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a13c2: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a13c5: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 005a13c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a13c8: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x5a13cdu); f_0050a984();
    /* 005a13cd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a13d0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a13d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a13d4: ret 4 */ FN_RET(0x005a12ac); r_esp += 8; return;
}

void f_005a13d8(void) /* sub_5A13D8 */
{
    FN_ENTER(0x005a13d8);
    /* 005a13d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a13d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a13da: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a13dc: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005a13e0: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a13e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a13e9: je 0x5a1422 */ if (fZ) goto L_005a1422;
L_005a13eb:; BB(0x005a13eb);
    /* 005a13eb: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005a13f2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a13f5: je 0x5a1417 */ if (fZ) goto L_005a1417;
L_005a13f7:; BB(0x005a13f7);
    /* 005a13f7: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005a13fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a13fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a13fe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1400: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1404: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1408: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a140c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a140d: call 0x773afc */ r_esp -= 4; W32(r_esp, 0x5a1412u); f_00773afc();
    /* 005a1412: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1414: ret 0x18 */ FN_RET(0x005a13d8); r_esp += 28; return;
L_005a1417:; BB(0x005a1417);
    /* 005a1417: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1419: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a141b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1420u); f_0051f62c();
    /* 005a1420: jmp 0x5a13f7 */ goto L_005a13f7;
L_005a1422:; BB(0x005a1422);
    /* 005a1422: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 005a1426: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a142b: jge 0x5a13eb */ if ((fS==fO)) goto L_005a13eb;
L_005a142d:; BB(0x005a142d);
    /* 005a142d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a142f: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a1434u); f_007751b0();
    /* 005a1434: fcomp dword ptr [ebp + 0x3e8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3e8u))); FPOP();
    /* 005a143a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a143c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a143d: ja 0x5a13eb */ if ((!fC&&!fZ)) goto L_005a13eb;
L_005a143f:; BB(0x005a143f);
    /* 005a143f: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1441: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1443: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1448u); f_0051f62c();
    /* 005a1448: jmp 0x5a13f7 */ goto L_005a13f7;
}

void f_005a144c(void) /* sub_5A144C */
{
    FN_ENTER(0x005a144c);
    /* 005a144c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a144d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a144f: mov eax, dword ptr [ebp + 0x3f4] */ r_eax = R32((u32)(r_ebp+0x3f4u));
    /* 005a1455: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1458: mov dword ptr [ebp + 0x3f4], eax */ W32((u32)(r_ebp+0x3f4u), r_eax);
    /* 005a145e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1461: jge 0x5a1475 */ if ((fS==fO)) goto L_005a1475;
L_005a1463:; BB(0x005a1463);
    /* 005a1463: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1465: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a146au); f_007751b0();
    /* 005a146a: fcomp dword ptr [0x929c64] */ fx_compare(ST(0), R_F32((u32)(0x929c64u))); FPOP();
    /* 005a1470: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a1472: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a1473: jae 0x5a1480 */ if (!fC) goto L_005a1480;
L_005a1475:; BB(0x005a1475);
    /* 005a1475: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1477: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1479: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a147eu); f_0051f62c();
    /* 005a147e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a147f: ret  */ FN_RET(0x005a144c); r_esp += 4; return;
L_005a1480:; BB(0x005a1480);
    /* 005a1480: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1482: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1484: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1489u); f_0051f62c();
    /* 005a1489: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a148a: ret  */ FN_RET(0x005a144c); r_esp += 4; return;
}

void f_005a148c(void) /* sub_5A148C */
{
    FN_ENTER(0x005a148c);
    /* 005a148c: call 0x5a1494 */ r_esp -= 4; W32(r_esp, 0x5a1491u); f_005a1494();
    /* 005a1491: ret  */ FN_RET(0x005a148c); r_esp += 4; return;
}

void f_005a1494(void) /* sub_5A1494 */
{
    FN_ENTER(0x005a1494);
    /* 005a1494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1495: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a1497: mov eax, dword ptr [ebp + 0x3d4] */ r_eax = R32((u32)(r_ebp+0x3d4u));
    /* 005a149d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005a149f: jne 0x5a14b8 */ if (!fZ) goto L_005a14b8;
L_005a14a1:; BB(0x005a14a1);
    /* 005a14a1: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 005a14a8: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a14ab: je 0x5a14ca */ if (fZ) goto L_005a14ca;
L_005a14ad:; BB(0x005a14ad);
    /* 005a14ad: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005a14af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a14b1: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a14b6u); f_0051f62c();
    /* 005a14b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a14b7: ret  */ FN_RET(0x005a1494); r_esp += 4; return;
L_005a14b8:; BB(0x005a14b8);
    /* 005a14b8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a14ba: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x5a14bfu); f_0051f81c();
    /* 005a14bf: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 005a14c5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a14c8: je 0x5a14cc */ if (fZ) goto L_005a14cc;
L_005a14ca:; BB(0x005a14ca);
    /* 005a14ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a14cb: ret  */ FN_RET(0x005a1494); r_esp += 4; return;
L_005a14cc:; BB(0x005a14cc);
    /* 005a14cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a14ce: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x5a14d3u); f_007751b0();
    /* 005a14d3: fcomp dword ptr [ebp + 0x3e8] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x3e8u))); FPOP();
    /* 005a14d9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a14db: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a14dc: ja 0x5a14ca */ if ((!fC&&!fZ)) goto L_005a14ca;
L_005a14de:; BB(0x005a14de);
    /* 005a14de: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005a14e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a14e2: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a14e7u); f_0051f62c();
    /* 005a14e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a14e8: ret  */ FN_RET(0x005a1494); r_esp += 4; return;
}

void f_005a14ed(void)
{
    FN_ENTER(0x005a14ed);
    /* 005a14ed: add eax, 0xa7471c */ {  u32 a = r_eax; u32 b = 0xa7471cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a14f2: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a14f4: cmp byte ptr [edi], 0xc7 */ {  u32 a = R8((u32)(r_edi)); u32 b = 0xc7u; u32 r = (a - b) & 0xffu;   }
    /* 005a14f7: add eax, 0xa74720 */ {  u32 a = r_eax; u32 b = 0xa74720u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a14fc: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a14fe: add byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a1501: add eax, 0xa74724 */ {  u32 a = r_eax; u32 b = 0xa74724u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1506: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005a1508: sar byte ptr [edi], 0xc7 */ { u32 ad = (u32)(r_edi); u32 c = (7u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (u32)((i8)a >> (c > 7 ? 7 : c)) & 0xffu; W8(ad, r);  } }
    /* 005a150b: add eax, 0xa74728 */ {  u32 a = r_eax; u32 b = 0xa74728u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1510: add byte ptr [eax + 0x1c], al */ { u32 ad = (u32)(r_eax+0x1cu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 005a1513: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005a1514: mov dword ptr [0xa74718], 0x414db6dc */ W32((u32)(0xa74718u), 0x414db6dcu);
    /* 005a151e: mov dword ptr [0xa74714], 0x41340000 */ W32((u32)(0xa74714u), 0x41340000u);
    /* 005a1528: mov dword ptr [0x9c010c], 0 */ W32((u32)(0x9c010cu), 0x0u);
    /* 005a1532: mov dword ptr [0x9c0130], 0x41000000 */ W32((u32)(0x9c0130u), 0x41000000u);
    /* 005a153c: mov dword ptr [0x9bffd8], 0x3f4ccccd */ W32((u32)(0x9bffd8u), 0x3f4ccccdu);
    /* 005a1546: mov dword ptr [0x9c0008], 0x3f333333 */ W32((u32)(0x9c0008u), 0x3f333333u);
    /* 005a1550: mov dword ptr [0x9c0018], 0x3f800000 */ W32((u32)(0x9c0018u), 0x3f800000u);
    /* 005a155a: ret  */ FN_RET(0x005a14ed); r_esp += 4; return;
}

void f_005a155c(void)
{
    FN_ENTER(0x005a155c);
    /* 005a155c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a155d: mov ebp, esp */ r_ebp = r_esp;
    /* 005a155f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1561: push 0x8d87da */ { u32 v = 0x8d87dau; r_esp -= 4; W32(r_esp, v); }
    /* 005a1566: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a156c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a156d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a1574: sub esp, 0x6c */ {  u32 a = r_esp; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1577: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a157a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005a157d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005a1580: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005a1583: mov dword ptr [0xa7472c], 0 */ W32((u32)(0xa7472cu), 0x0u);
    /* 005a158d: mov dword ptr [0xa74730], 0 */ W32((u32)(0xa74730u), 0x0u);
    /* 005a1597: mov dword ptr [0xa74734], 0 */ W32((u32)(0xa74734u), 0x0u);
    /* 005a15a1: call 0x482a20 */ r_esp -= 4; W32(r_esp, 0x5a15a6u); f_00482a20();
    /* 005a15a6: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 005a15a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a15ab: jne 0x5a15bf */ if (!fZ) goto L_005a15bf;
L_005a15ad:; BB(0x005a15ad);
    /* 005a15ad: push 0x9c00f0 */ { u32 v = 0x9c00f0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a15b2: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x5a15b7u); f_0051f6b0();
    /* 005a15b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a15b8: mov dword ptr [0xa74740], eax */ W32((u32)(0xa74740u), r_eax);
    /* 005a15bd: jmp 0x5a15cf */ goto L_005a15cf;
L_005a15bf:; BB(0x005a15bf);
    /* 005a15bf: push 0x9c00a8 */ { u32 v = 0x9c00a8u; r_esp -= 4; W32(r_esp, v); }
    /* 005a15c4: call 0x51f6b0 */ r_esp -= 4; W32(r_esp, 0x5a15c9u); f_0051f6b0();
    /* 005a15c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a15ca: mov dword ptr [0xa74740], eax */ W32((u32)(0xa74740u), r_eax);
L_005a15cf:; BB(0x005a15cf);
    /* 005a15cf: mov ebx, dword ptr [eax + 0x42c] */ r_ebx = R32((u32)(r_eax+0x42cu));
    /* 005a15d5: mov ebx, dword ptr [ebx + 0xc] */ r_ebx = R32((u32)(r_ebx+0xcu));
    /* 005a15d8: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005a15db: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005a15de: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005a15e1: mov dword ptr [0xa7473c], eax */ W32((u32)(0xa7473cu), r_eax);
    /* 005a15e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a15e8: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005a15eb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a15ed: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a15ee: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a15f3u); f_008581c5();
    /* 005a15f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a15f4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a15f7: mov dword ptr [0xa74738], eax */ W32((u32)(0xa74738u), r_eax);
    /* 005a15fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a15fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005a1600: jle 0x5a16e7 */ if ((fZ||fS!=fO)) goto L_005a16e7;
L_005a1606:; BB(0x005a1606);
    /* 005a1606: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1609: jl 0x5a16af */ if ((fS!=fO)) goto L_005a16af;
L_005a160f:; BB(0x005a160f);
    /* 005a160f: lea esi, [edx - 5] */ r_esi = (u32)(r_edx+0xfffffffbu);
    /* 005a1612: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a1615: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 005a1618: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a161a: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 005a161d: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005a161f: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 005a1621: mov edi, dword ptr [edx + esi] */ r_edi = R32((u32)(r_edx+r_esi));
    /* 005a1624: mov dword ptr [edx + eax], edi */ W32((u32)(r_edx+r_eax), r_edi);
    /* 005a1627: mov edi, dword ptr [edx + esi + 4] */ r_edi = R32((u32)(r_edx+r_esi+0x4u));
    /* 005a162b: mov dword ptr [edx + eax + 4], edi */ W32((u32)(r_edx+r_eax+0x4u), r_edi);
    /* 005a162f: mov esi, dword ptr [edx + esi + 8] */ r_esi = R32((u32)(r_edx+r_esi+0x8u));
    /* 005a1633: mov dword ptr [edx + eax + 8], esi */ W32((u32)(r_edx+r_eax+0x8u), r_esi);
    /* 005a1637: mov esi, dword ptr [0xa74738] */ r_esi = R32((u32)(0xa74738u));
    /* 005a163d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a163f: mov edi, dword ptr [edx + eax + 0xc] */ r_edi = R32((u32)(r_edx+r_eax+0xcu));
    /* 005a1643: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a1646: mov dword ptr [edx + esi + 0xc], edi */ W32((u32)(r_edx+r_esi+0xcu), r_edi);
    /* 005a164a: mov edi, dword ptr [edx + eax + 0x10] */ r_edi = R32((u32)(r_edx+r_eax+0x10u));
    /* 005a164e: mov dword ptr [edx + esi + 0x10], edi */ W32((u32)(r_edx+r_esi+0x10u), r_edi);
    /* 005a1652: mov eax, dword ptr [edx + eax + 0x14] */ r_eax = R32((u32)(r_edx+r_eax+0x14u));
    /* 005a1656: mov dword ptr [edx + esi + 0x14], eax */ W32((u32)(r_edx+r_esi+0x14u), r_eax);
    /* 005a165a: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a165f: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 005a1661: mov esi, dword ptr [edx + edi + 0x18] */ r_esi = R32((u32)(r_edx+r_edi+0x18u));
    /* 005a1665: mov dword ptr [edx + eax + 0x18], esi */ W32((u32)(r_edx+r_eax+0x18u), r_esi);
    /* 005a1669: mov esi, dword ptr [edx + edi + 0x1c] */ r_esi = R32((u32)(r_edx+r_edi+0x1cu));
    /* 005a166d: mov dword ptr [edx + eax + 0x1c], esi */ W32((u32)(r_edx+r_eax+0x1cu), r_esi);
    /* 005a1671: mov esi, dword ptr [edx + edi + 0x20] */ r_esi = R32((u32)(r_edx+r_edi+0x20u));
    /* 005a1675: mov dword ptr [edx + eax + 0x20], esi */ W32((u32)(r_edx+r_eax+0x20u), r_esi);
    /* 005a1679: mov esi, dword ptr [0xa74738] */ r_esi = R32((u32)(0xa74738u));
    /* 005a167f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a1681: mov edi, dword ptr [edx + eax + 0x24] */ r_edi = R32((u32)(r_edx+r_eax+0x24u));
    /* 005a1685: mov dword ptr [edx + esi + 0x24], edi */ W32((u32)(r_edx+r_esi+0x24u), r_edi);
    /* 005a1689: mov edi, dword ptr [edx + eax + 0x28] */ r_edi = R32((u32)(r_edx+r_eax+0x28u));
    /* 005a168d: mov dword ptr [edx + esi + 0x28], edi */ W32((u32)(r_edx+r_esi+0x28u), r_edi);
    /* 005a1691: mov eax, dword ptr [edx + eax + 0x2c] */ r_eax = R32((u32)(r_edx+r_eax+0x2cu));
    /* 005a1695: mov dword ptr [edx + esi + 0x2c], eax */ W32((u32)(r_edx+r_esi+0x2cu), r_eax);
    /* 005a1699: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a169c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a169e: jg 0x5a16aa */ if ((!fZ&&fS==fO)) goto L_005a16aa;
L_005a16a0:; BB(0x005a16a0);
    /* 005a16a0: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a16a5: jmp 0x5a1615 */ f_005a1615(); return;
L_005a16aa:; BB(0x005a16aa);
    /* 005a16aa: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
L_005a16af:; BB(0x005a16af);
    /* 005a16af: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a16b1: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 005a16b4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a16b6: lea esi, [edi + edi] */ r_esi = (u32)(r_edi+r_edi);
    /* 005a16b9: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a16bb: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 005a16be: mov dword ptr [esi + eax], edi */ W32((u32)(r_esi+r_eax), r_edi);
    /* 005a16c1: mov edi, dword ptr [esi + edx + 4] */ r_edi = R32((u32)(r_esi+r_edx+0x4u));
    /* 005a16c5: mov dword ptr [esi + eax + 4], edi */ W32((u32)(r_esi+r_eax+0x4u), r_edi);
    /* 005a16c9: mov edx, dword ptr [esi + edx + 8] */ r_edx = R32((u32)(r_esi+r_edx+0x8u));
    /* 005a16cd: mov dword ptr [esi + eax + 8], edx */ W32((u32)(r_esi+r_eax+0x8u), r_edx);
    /* 005a16d1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005a16d4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005a16d7: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a16d9: jge 0x5a16e2 */ if ((fS==fO)) goto L_005a16e2;
L_005a16db:; BB(0x005a16db);
    /* 005a16db: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
    /* 005a16e0: jmp 0x5a16af */ goto L_005a16af;
L_005a16e2:; BB(0x005a16e2);
    /* 005a16e2: mov eax, dword ptr [0xa74738] */ r_eax = R32((u32)(0xa74738u));
L_005a16e7:; BB(0x005a16e7);
    /* 005a16e7: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 005a16ea: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 005a16ed: mov ebx, dword ptr [eax + 0x44] */ r_ebx = R32((u32)(r_eax+0x44u));
    /* 005a16f0: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 005a16f3: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 005a16f6: mov dword ptr [eax + 0x20], ebx */ W32((u32)(r_eax+0x20u), r_ebx);
    /* 005a16f9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a16fb:; BB(0x005a16fb);
    /* 005a16fb: push dword ptr [ebx*4 + 0x929c18] */ { u32 v = R32((u32)(r_ebx*4+0x929c18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1702: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x5a1707u); f_0077a684();
    /* 005a1707: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1708: mov dword ptr [ebx*4 + 0xa7475c], eax */ W32((u32)(r_ebx*4+0xa7475cu), r_eax);
    /* 005a170f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a1712: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1715: jl 0x5a16fb */ if ((fS!=fO)) goto L_005a16fb;
L_005a1717:; BB(0x005a1717);
    /* 005a1717: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a1719:; BB(0x005a1719);
    /* 005a1719: push dword ptr [ebx*4 + 0x929c10] */ { u32 v = R32((u32)(r_ebx*4+0x929c10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1720: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x5a1725u); f_0077a698();
    /* 005a1725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1726: mov dword ptr [ebx*4 + 0xa74754], eax */ W32((u32)(r_ebx*4+0xa74754u), r_eax);
    /* 005a172d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a1730: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1733: jl 0x5a1719 */ if ((fS!=fO)) goto L_005a1719;
L_005a1735:; BB(0x005a1735);
    /* 005a1735: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a1737:; BB(0x005a1737);
    /* 005a1737: push dword ptr [ebx*4 + 0x929c08] */ { u32 v = R32((u32)(r_ebx*4+0x929c08u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a173e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x5a1743u); f_0077a6b4();
    /* 005a1743: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1744: mov dword ptr [ebx*4 + 0xa7474c], eax */ W32((u32)(r_ebx*4+0xa7474cu), r_eax);
    /* 005a174b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a174e: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a1751: jl 0x5a1737 */ if ((fS!=fO)) goto L_005a1737;
L_005a1753:; BB(0x005a1753);
    /* 005a1753: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005a1755:; BB(0x005a1755);
    /* 005a1755: push dword ptr [ebx*4 + 0x929c00] */ { u32 v = R32((u32)(r_ebx*4+0x929c00u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a175c: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x5a1761u); f_0077a6cc();
    /* 005a1761: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1762: mov dword ptr [ebx*4 + 0xa74744], eax */ W32((u32)(r_ebx*4+0xa74744u), r_eax);
    /* 005a1769: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005a176c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005a176f: jl 0x5a1755 */ if ((fS!=fO)) goto L_005a1755;
L_005a1771:; BB(0x005a1771);
    /* 005a1771: mov edx, dword ptr [0xa74744] */ r_edx = R32((u32)(0xa74744u));
    /* 005a1777: fld dword ptr [0x929c34] */ FPUSH(R_F32((u32)(0x929c34u)));
    /* 005a177d: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 005a1783: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1785: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 005a1788: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a178a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a178c: mov ebx, dword ptr [ecx + 0x42c] */ r_ebx = R32((u32)(r_ecx+0x42cu));
    /* 005a1792: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a1793: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a1795: jae 0x5a1799 */ if (!fC) goto L_005a1799;
L_005a1797:; BB(0x005a1797);
    /* 005a1797: fst st(1) */ ST(1) = ST(0);
L_005a1799:; BB(0x005a1799);
    /* 005a1799: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a179b: fstp dword ptr [0x9c0018] */ W_F32((u32)(0x9c0018u), ST(0)); FPOP();
    /* 005a17a1: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 005a17a4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005a17a6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a17a8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a17a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005a17ab: jae 0x5a17af */ if (!fC) goto L_005a17af;
L_005a17ad:; BB(0x005a17ad);
    /* 005a17ad: fst st(1) */ ST(1) = ST(0);
L_005a17af:; BB(0x005a17af);
    /* 005a17af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005a17b1: fstp dword ptr [0x9bffe8] */ W_F32((u32)(0x9bffe8u), ST(0)); FPOP();
    /* 005a17b7: mov dword ptr [0xa74788], 0 */ W32((u32)(0xa74788u), 0x0u);
    /* 005a17c1: mov dword ptr [0xa7477c], 0 */ W32((u32)(0xa7477cu), 0x0u);
    /* 005a17cb: mov dword ptr [0xa74780], 0 */ W32((u32)(0xa74780u), 0x0u);
    /* 005a17d5: mov dword ptr [0xa74784], 0 */ W32((u32)(0xa74784u), 0x0u);
    /* 005a17df: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005a17e2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a17e3: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5a17e8u); f_0078e934();
    /* 005a17e8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a17eb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a17ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a17f0: je 0x5a1a92 */ if (fZ) goto L_005a1a92;
L_005a17f6:; BB(0x005a17f6);
    /* 005a17f6: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a17f9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a17fc: mov dword ptr [0xa74770], eax */ W32((u32)(0xa74770u), r_eax);
L_005a1801:; BB(0x005a1801);
    /* 005a1801: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1803: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1804: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5a1809u); f_0078e934();
    /* 005a1809: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a180c: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a180f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1811: je 0x5a1a83 */ if (fZ) goto L_005a1a83;
L_005a1817:; BB(0x005a1817);
    /* 005a1817: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a181a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a181d: mov dword ptr [0xa74774], eax */ W32((u32)(0xa74774u), r_eax);
L_005a1822:; BB(0x005a1822);
    /* 005a1822: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1825: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x5a182au); f_0078e934();
    /* 005a182a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a182d: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a1830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1832: je 0x5a1a74 */ if (fZ) goto L_005a1a74;
L_005a1838:; BB(0x005a1838);
    /* 005a1838: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 005a183b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a183e: mov dword ptr [0xa74778], eax */ W32((u32)(0xa74778u), r_eax);
L_005a1843:; BB(0x005a1843);
    /* 005a1843: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a1848: mov ecx, dword ptr [0x9bfff4] */ r_ecx = R32((u32)(0x9bfff4u));
    /* 005a184e: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a1854: mov ebx, dword ptr [edx + ecx*8 + 4] */ r_ebx = R32((u32)(r_edx+r_ecx*8+0x4u));
    /* 005a1858: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a185b: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 005a1862: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1864: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a1869u); f_008581c5();
    /* 005a1869: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a186c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a186f: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 005a1872: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1874: je 0x5a1a6a */ if (fZ) goto L_005a1a6a;
L_005a187a:; BB(0x005a187a);
    /* 005a187a: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 005a1881: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005a1888: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a188d: mov esi, ebx */ r_esi = r_ebx;
    /* 005a188f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1892: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005a1898: mov ebx, dword ptr [edx + 8] */ r_ebx = R32((u32)(r_edx+0x8u));
    /* 005a189b: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 005a189e: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a18a1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005a18a4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 005a18a8: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005a18ab: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 005a18ae: fild dword ptr [ebp - 0x30] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd0u)));
    /* 005a18b1: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005a18b4: fadd dword ptr [edi*4 + 0x929bb8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x929bb8u));
    /* 005a18bb: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a18bf: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x5a18c4u); f_00511bb4();
    /* 005a18c4: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_005a18cb:; BB(0x005a18cb);
    /* 005a18cb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a18ce: mov dword ptr [0xa7476c], eax */ W32((u32)(0xa7476cu), r_eax);
    /* 005a18d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a18da: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 005a18e0: mov esi, dword ptr [0x9c0004] */ r_esi = R32((u32)(0x9c0004u));
    /* 005a18e6: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 005a18ec: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005a18ef: mov ebx, dword ptr [ecx + 0x430] */ r_ebx = R32((u32)(r_ecx+0x430u));
    /* 005a18f5: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 005a18f8: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 005a18ff: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 005a1906: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1908: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 005a190f: mov dword ptr [ebp - 0x64], 0xc1200000 */ W32((u32)(r_ebp+0xffffff9cu), 0xc1200000u);
    /* 005a1916: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 005a191d: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 005a1924: mov edi, dword ptr [ebx + esi*8 + 4] */ r_edi = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 005a1928: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005a192f: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 005a1932: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5a1937u); f_008581c5();
    /* 005a1937: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a193a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a193d: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 005a1940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1942: je 0x5a1a60 */ if (fZ) goto L_005a1a60;
L_005a1948:; BB(0x005a1948);
    /* 005a1948: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 005a194f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a1956: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1958: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005a195a: push 0x3f333333 */ { u32 v = 0x3f333333u; r_esp -= 4; W32(r_esp, v); }
    /* 005a195f: push 0x41d00000 */ { u32 v = 0x41d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1964: push 0x41800000 */ { u32 v = 0x41800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1969: call 0x5795a0 */ r_esp -= 4; W32(r_esp, 0x5a196eu); f_005795a0();
    /* 005a196e: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_005a1975:; BB(0x005a1975);
    /* 005a1975: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1978: mov dword ptr [0xa74768], eax */ W32((u32)(0xa74768u), r_eax);
    /* 005a197d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a1984: mov ebx, edi */ r_ebx = r_edi;
    /* 005a1986: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005a1989: mov ecx, dword ptr [0xa74768] */ r_ecx = R32((u32)(0xa74768u));
    /* 005a198f: lea edx, [ebp - 0x70] */ r_edx = (u32)(r_ebp+0xffffff90u);
    /* 005a1992: lea eax, [ebp - 0x64] */ r_eax = (u32)(r_ebp+0xffffff9cu);
    /* 005a1995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1996: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1997: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1999: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a199a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a199b: call 0x579be8 */ r_esp -= 4; W32(r_esp, 0x5a19a0u); f_00579be8();
    /* 005a19a0: mov eax, dword ptr [0x929bac] */ r_eax = R32((u32)(0x929bacu));
    /* 005a19a5: movzx edx, word ptr [0x929bb0] */ r_edx = (u32)R16((u32)(0x929bb0u));
    /* 005a19ac: movzx ecx, word ptr [0x929bb2] */ r_ecx = (u32)R16((u32)(0x929bb2u));
    /* 005a19b3: movzx ebx, word ptr [0x929bb4] */ r_ebx = (u32)R16((u32)(0x929bb4u));
    /* 005a19ba: mov esi, dword ptr [0x929b9c] */ r_esi = R32((u32)(0x929b9cu));
    /* 005a19c0: movzx edi, word ptr [0x929ba0] */ r_edi = (u32)R16((u32)(0x929ba0u));
    /* 005a19c7: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 005a19ca: movzx eax, word ptr [0x929ba2] */ r_eax = (u32)R16((u32)(0x929ba2u));
    /* 005a19d1: mov word ptr [ebp - 0x48], dx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_edx);
    /* 005a19d5: mov word ptr [ebp - 0x46], cx */ W16((u32)(r_ebp+0xffffffbau), (u16)r_ecx);
    /* 005a19d9: mov ecx, dword ptr [0xa74740] */ r_ecx = R32((u32)(0xa74740u));
    /* 005a19df: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 005a19e5: mov word ptr [ebp - 0x44], bx */ W16((u32)(r_ebp+0xffffffbcu), (u16)r_ebx);
    /* 005a19e9: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 005a19ec: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 005a19ef: mov word ptr [ebp - 0x38], di */ W16((u32)(r_ebp+0xffffffc8u), (u16)r_edi);
    /* 005a19f3: mov word ptr [ebp - 0x36], ax */ W16((u32)(r_ebp+0xffffffcau), (u16)r_eax);
    /* 005a19f7: movzx eax, word ptr [0x929ba4] */ r_eax = (u32)R16((u32)(0x929ba4u));
    /* 005a19fe: mov word ptr [ebp - 0x34], ax */ W16((u32)(r_ebp+0xffffffccu), (u16)r_eax);
    /* 005a1a02: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 005a1a05: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 005a1a0b: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005a1a0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a11: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a16: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a19: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a1c: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a1e: call 0x60895c */ r_esp -= 4; W32(r_esp, 0x5a1a23u); f_0060895c();
    /* 005a1a23: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a1a28: lea edx, [ebp - 0x40] */ r_edx = (u32)(r_ebp+0xffffffc0u);
    /* 005a1a2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a2c: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 005a1a32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a34: push 0x41000000 */ { u32 v = 0x41000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a39: push dword ptr [ecx + 0xc] */ { u32 v = R32((u32)(r_ecx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a3c: push dword ptr [ecx + 8] */ { u32 v = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1a3f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 005a1a41: call 0x60895c */ r_esp -= 4; W32(r_esp, 0x5a1a46u); f_0060895c();
    /* 005a1a46: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1a49: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005a1a4c: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005a1a4f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1a52: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1a55: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a1a5c: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1a5e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1a5f: ret  */ FN_RET(0x005a155c); r_esp += 4; return;
L_005a1a60:; BB(0x005a1a60);
    /* 005a1a60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1a62: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a1a65: jmp 0x5a1975 */ goto L_005a1975;
L_005a1a6a:; BB(0x005a1a6a);
    /* 005a1a6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1a6c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005a1a6f: jmp 0x5a18cb */ goto L_005a18cb;
L_005a1a74:; BB(0x005a1a74);
    /* 005a1a74: mov dword ptr [0xa74778], 0 */ W32((u32)(0xa74778u), 0x0u);
    /* 005a1a7e: jmp 0x5a1843 */ goto L_005a1843;
L_005a1a83:; BB(0x005a1a83);
    /* 005a1a83: mov dword ptr [0xa74774], 0 */ W32((u32)(0xa74774u), 0x0u);
    /* 005a1a8d: jmp 0x5a1822 */ goto L_005a1822;
L_005a1a92:; BB(0x005a1a92);
    /* 005a1a92: mov dword ptr [0xa74770], 0 */ W32((u32)(0xa74770u), 0x0u);
    /* 005a1a9c: jmp 0x5a1801 */ goto L_005a1801;
}

void f_005a1aa4(void) /* sub_5A1AA4 */
{
    FN_ENTER(0x005a1aa4);
    /* 005a1aa4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1aa5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1aa6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a1aa8: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005a1aac: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1aaf: je 0x5a1b29 */ if (fZ) goto L_005a1b29;
L_005a1ab1:; BB(0x005a1ab1);
    /* 005a1ab1: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1ab4: je 0x5a1ad0 */ if (fZ) goto L_005a1ad0;
L_005a1ab6:; BB(0x005a1ab6);
    /* 005a1ab6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1ab8: jne 0x5a1aef */ if (!fZ) goto L_005a1aef;
L_005a1aba:; BB(0x005a1aba);
    /* 005a1aba: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005a1ac0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1ac3: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 005a1ac9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a1acc: jne 0x5a1aef */ if (!fZ) goto L_005a1aef;
L_005a1ace:; BB(0x005a1ace);
    /* 005a1ace: jmp 0x5a1af4 */ goto L_005a1af4;
L_005a1ad0:; BB(0x005a1ad0);
    /* 005a1ad0: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 005a1ad6: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a1ad9: jle 0x5a1aef */ if ((fZ||fS!=fO)) goto L_005a1aef;
L_005a1adb:; BB(0x005a1adb);
    /* 005a1adb: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 005a1ae1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1ae4: je 0x5a1b1b */ if (fZ) goto L_005a1b1b;
L_005a1ae6:; BB(0x005a1ae6);
    /* 005a1ae6: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1ae8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1aea: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1aefu); f_0051f62c();
L_005a1aef:; BB(0x005a1aef);
    /* 005a1aef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1af0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1af1: ret 4 */ FN_RET(0x005a1aa4); r_esp += 8; return;
L_005a1af4:; BB(0x005a1af4);
    /* 005a1af4: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 005a1af7: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 005a1af9: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 005a1aff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1b01: call dword ptr [edx + 0x1a0] */ { u32 t = R32((u32)(r_edx+0x1a0u)); r_esp -= 4; W32(r_esp, 0x5a1b07u); call_ind(t); }
    /* 005a1b07: fld dword ptr [ebx + 0x3d8] */ FPUSH(R_F32((u32)(r_ebx+0x3d8u)));
    /* 005a1b0d: fsub dword ptr [ebx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0x3cu));
    /* 005a1b10: fstp dword ptr [ebx + 0x3dc] */ W_F32((u32)(r_ebx+0x3dcu), ST(0)); FPOP();
    /* 005a1b16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1b17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1b18: ret 4 */ FN_RET(0x005a1aa4); r_esp += 8; return;
L_005a1b1b:; BB(0x005a1b1b);
    /* 005a1b1b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1b1f: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x5a1b24u); f_0051f62c();
    /* 005a1b24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1b25: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1b26: ret 4 */ FN_RET(0x005a1aa4); r_esp += 8; return;
L_005a1b29:; BB(0x005a1b29);
    /* 005a1b29: mov eax, dword ptr [ebx + 0x3cc] */ r_eax = R32((u32)(r_ebx+0x3ccu));
    /* 005a1b2f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1b32: je 0x5a1bcc */ if (fZ) goto L_005a1bcc;
L_005a1b38:; BB(0x005a1b38);
    /* 005a1b38: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1b3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1b3c: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005a1b43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1b45: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a1b4au); f_0051f664();
L_005a1b4a:; BB(0x005a1b4a);
    /* 005a1b4a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005a1b4c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1b4e: call dword ptr [eax + 0x184] */ { u32 t = R32((u32)(r_eax+0x184u)); r_esp -= 4; W32(r_esp, 0x5a1b54u); call_ind(t); }
    /* 005a1b54: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005a1b5a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a1b5d: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a1b60: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 005a1b66: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x5a1b6bu); f_00520e6c();
    /* 005a1b6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1b6d: je 0x5a1b80 */ if (fZ) goto L_005a1b80;
L_005a1b6f:; BB(0x005a1b6f);
    /* 005a1b6f: mov eax, dword ptr [ebx + 0x3d4] */ r_eax = R32((u32)(r_ebx+0x3d4u));
    /* 005a1b75: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005a1b7a: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
L_005a1b80:; BB(0x005a1b80);
    /* 005a1b80: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 005a1b83: mov esi, dword ptr [ebx + 0x54] */ r_esi = R32((u32)(r_ebx+0x54u));
    /* 005a1b86: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 005a1b89: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1b8b: mov dword ptr [ebx + 0x42c], ecx */ W32((u32)(r_ebx+0x42cu), r_ecx);
    /* 005a1b91: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 005a1b94: mov dword ptr [ebx + 0x3c], esi */ W32((u32)(r_ebx+0x3cu), r_esi);
    /* 005a1b97: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 005a1b9a: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 005a1b9d: mov dword ptr [ebx + 0x48], esi */ W32((u32)(r_ebx+0x48u), r_esi);
    /* 005a1ba0: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 005a1ba3: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 005a1ba9: mov dword ptr [ebx + 0x304], esi */ W32((u32)(r_ebx+0x304u), r_esi);
    /* 005a1baf: mov dword ptr [ebx + 0x308], edx */ W32((u32)(r_ebx+0x308u), r_edx);
    /* 005a1bb5: mov dword ptr [ebx + 0x3d8], esi */ W32((u32)(r_ebx+0x3d8u), r_esi);
    /* 005a1bbb: mov dword ptr [ebx + 0x3f0], ecx */ W32((u32)(r_ebx+0x3f0u), r_ecx);
    /* 005a1bc1: mov dword ptr [ebx + 0x3f4], ecx */ W32((u32)(r_ebx+0x3f4u), r_ecx);
    /* 005a1bc7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1bc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1bc9: ret 4 */ FN_RET(0x005a1aa4); r_esp += 8; return;
L_005a1bcc:; BB(0x005a1bcc);
    /* 005a1bcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1bce: mov eax, 2 */ r_eax = 0x2u;
    /* 005a1bd3: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 005a1bda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1bdc: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x5a1be1u); f_0051f664();
    /* 005a1be1: jmp 0x5a1b4a */ goto L_005a1b4a;
}

void f_005a1be8(void) /* sub_5A1BE8 */
{
    FN_ENTER(0x005a1be8);
    /* 005a1be8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1be9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a1beb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1bed: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x5a1bf2u); f_00521840();
    /* 005a1bf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1bf4: call 0x59e844 */ r_esp -= 4; W32(r_esp, 0x5a1bf9u); f_0059e844();
    /* 005a1bf9: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a1bfe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c00: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 005a1c06: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 005a1c09: mov dword ptr [ebp + 0x34], eax */ W32((u32)(r_ebp+0x34u), r_eax);
    /* 005a1c0c: push 0x9c0124 */ { u32 v = 0x9c0124u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1c13: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x5a1c18u); f_0051ff3c();
    /* 005a1c18: mov eax, dword ptr [0xa74740] */ r_eax = R32((u32)(0xa74740u));
    /* 005a1c1d: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 005a1c27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1c29: mov dword ptr [ebp + 0xd8], 0x9bffa0 */ W32((u32)(r_ebp+0xd8u), 0x9bffa0u);
    /* 005a1c33: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 005a1c39: movsx eax, word ptr [ebp + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb8u));
    /* 005a1c40: mov dword ptr [ebp + 0xdc], edx */ W32((u32)(r_ebp+0xdcu), r_edx);
    /* 005a1c46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c47: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x5a1c4cu); f_007aa4c8();
    /* 005a1c4c: mov eax, dword ptr [ebp + 0x3d0] */ r_eax = R32((u32)(r_ebp+0x3d0u));
    /* 005a1c52: push dword ptr [eax*4 + 0xa7474c] */ { u32 v = R32((u32)(r_eax*4+0xa7474cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1c59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1c5b: push dword ptr [eax*4 + 0xa74754] */ { u32 v = R32((u32)(r_eax*4+0xa74754u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1c62: push dword ptr [eax*4 + 0xa7475c] */ { u32 v = R32((u32)(r_eax*4+0xa7475cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1c69: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x5a1c6eu); f_00520c70();
    /* 005a1c6e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1c70: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x5a1c75u); f_00520370();
    /* 005a1c75: mov dword ptr [ebp + 0x358], 0x9c0108 */ W32((u32)(r_ebp+0x358u), 0x9c0108u);
    /* 005a1c7f: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c81: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1c83: mov dword ptr [ebp + 0x384], 0x41200000 */ W32((u32)(r_ebp+0x384u), 0x41200000u);
    /* 005a1c8d: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x5a1c92u); f_00521820();
    /* 005a1c92: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1c94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1c96: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x5a1c9bu); f_005217fc();
    /* 005a1c9b: mov eax, dword ptr [ebp + 0x3c] */ r_eax = R32((u32)(r_ebp+0x3cu));
    /* 005a1c9e: mov dword ptr [ebp + 0x3dc], 0 */ W32((u32)(r_ebp+0x3dcu), 0x0u);
    /* 005a1ca8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a1caa: mov dword ptr [ebp + 0x3d4], edx */ W32((u32)(r_ebp+0x3d4u), r_edx);
    /* 005a1cb0: mov dword ptr [ebp + 0x3d8], eax */ W32((u32)(r_ebp+0x3d8u), r_eax);
    /* 005a1cb6: movzx eax, word ptr [ebp + 0x2d0] */ r_eax = (u32)R16((u32)(r_ebp+0x2d0u));
    /* 005a1cbd: mov dword ptr [ebp + 0x3f0], edx */ W32((u32)(r_ebp+0x3f0u), r_edx);
    /* 005a1cc3: mov dword ptr [ebp + 0x3f4], edx */ W32((u32)(r_ebp+0x3f4u), r_edx);
    /* 005a1cc9: mov word ptr [ebp + 0x3fc], ax */ W16((u32)(r_ebp+0x3fcu), (u16)r_eax);
    /* 005a1cd0: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 005a1cd6: lea ecx, [ebp + 0x40c] */ r_ecx = (u32)(r_ebp+0x40cu);
    /* 005a1cdc: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x5a1cdfu); call_ind(t); }
    /* 005a1cdf: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 005a1ce5: mov dword ptr [ebp + 0x438], 0 */ W32((u32)(r_ebp+0x438u), 0x0u);
    /* 005a1cef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1cf1: mov dword ptr [ebp + 0x42c], eax */ W32((u32)(r_ebp+0x42cu), r_eax);
    /* 005a1cf7: mov dword ptr [ebp + 0x43c], 0 */ W32((u32)(r_ebp+0x43cu), 0x0u);
    /* 005a1d01: mov dword ptr [ebp + 0x430], eax */ W32((u32)(r_ebp+0x430u), r_eax);
    /* 005a1d07: mov dword ptr [ebp + 0x434], eax */ W32((u32)(r_ebp+0x434u), r_eax);
    /* 005a1d0d: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 005a1d13: mov dword ptr [ebp + 0x440], 0 */ W32((u32)(r_ebp+0x440u), 0x0u);
    /* 005a1d1d: mov dword ptr [ebp + 0x450], eax */ W32((u32)(r_ebp+0x450u), r_eax);
    /* 005a1d23: mov dword ptr [ebp + 0x428], eax */ W32((u32)(r_ebp+0x428u), r_eax);
    /* 005a1d29: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1d2c: mov dword ptr [ebp + 0x444], 0 */ W32((u32)(r_ebp+0x444u), 0x0u);
    /* 005a1d36: mov dword ptr [ebp + 0x448], 0 */ W32((u32)(r_ebp+0x448u), 0x0u);
    /* 005a1d40: je 0x5a1d52 */ if (fZ) goto L_005a1d52;
L_005a1d42:; BB(0x005a1d42);
    /* 005a1d42: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1d4b: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x5a1d50u); f_007b52ec();
    /* 005a1d50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1d51: ret  */ FN_RET(0x005a1be8); r_esp += 4; return;
L_005a1d52:; BB(0x005a1d52);
    /* 005a1d52: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d59: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1d5b: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x5a1d60u); f_007b52c4();
    /* 005a1d60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1d61: ret  */ FN_RET(0x005a1be8); r_esp += 4; return;
}

void f_005a1d64(void) /* sub_5A1D64 */
{
    FN_ENTER(0x005a1d64);
    /* 005a1d64: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d65: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005a1d67: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005a1d69: call 0x5a1d88 */ r_esp -= 4; W32(r_esp, 0x5a1d6eu); f_005a1d88();
    /* 005a1d6e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005a1d72: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1d74: jne 0x5a1d7a */ if (!fZ) goto L_005a1d7a;
L_005a1d76:; BB(0x005a1d76);
    /* 005a1d76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1d77: ret 4 */ FN_RET(0x005a1d64); r_esp += 8; return;
L_005a1d7a:; BB(0x005a1d7a);
    /* 005a1d7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d7b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5a1d80u); f_005c2f74();
    /* 005a1d80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1d81: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005a1d82: ret 4 */ FN_RET(0x005a1d64); r_esp += 8; return;
}

void f_005a1d88(void) /* sub_5A1D88 */
{
    FN_ENTER(0x005a1d88);
    /* 005a1d88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d89: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1d8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d8d: push 0x8d8822 */ { u32 v = 0x8d8822u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a1d98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1d99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a1da0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1da3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a1da6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005a1da9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005a1dac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005a1daf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005a1db2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005a1db9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1dbc: mov edx, dword ptr [ecx + 0x3a4] */ r_edx = R32((u32)(r_ecx+0x3a4u));
    /* 005a1dc2: mov dword ptr [ecx], 0xb0a420 */ W32((u32)(r_ecx), 0xb0a420u);
    /* 005a1dc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1dca: je 0x5a1de6 */ if (fZ) goto L_005a1de6;
L_005a1dcc:; BB(0x005a1dcc);
    /* 005a1dcc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1dcf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005a1dd3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a1dd8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005a1ddc: mov dword ptr [ecx + 0x3a4], 0 */ W32((u32)(r_ecx+0x3a4u), 0x0u);
L_005a1de6:; BB(0x005a1de6);
    /* 005a1de6: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x5a1debu); f_007b9c8c();
    /* 005a1deb: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 005a1df2: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1df7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1dfa: add eax, 0x3a8 */ {  u32 a = r_eax; u32 b = 0x3a8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005a1dff: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e01: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e04: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x5a1e09u); f_008586d6();
    /* 005a1e09: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a1e10: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005a1e13: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x5a1e18u); f_0078638c();
    /* 005a1e18: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1e1b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a1e22: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1e24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1e25: ret  */ FN_RET(0x005a1d88); r_esp += 4; return;
}

void f_005a1e28(void) /* sub_5A1E28 */
{
    FN_ENTER(0x005a1e28);
    /* 005a1e28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e29: mov ebp, esp */ r_ebp = r_esp;
    /* 005a1e2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e2d: push 0x8d883c */ { u32 v = 0x8d883cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005a1e38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005a1e40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1e43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005a1e46: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005a1e49: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005a1e4c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005a1e4f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005a1e52: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005a1e55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005a1e5c: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x5a1e61u); f_007ba1f0();
    /* 005a1e61: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005a1e64: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005a1e66: jne 0x5a1e78 */ if (!fZ) goto L_005a1e78;
L_005a1e68:; BB(0x005a1e68);
    /* 005a1e68: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005a1e6b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005a1e72: mov esp, ebp */ r_esp = r_ebp;
    /* 005a1e74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a1e75: ret 4 */ FN_RET(0x005a1e28); r_esp += 8; return;
L_005a1e78:; BB(0x005a1e78);
    /* 005a1e78: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005a1e7b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e7c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5a1e81u); f_005c2f74();
    /* 005a1e81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005a1e82: jmp 0x5a1e68 */ goto L_005a1e68;
}

void f_005a1e84(void) /* sub_5A1E84 */
{
    FN_ENTER(0x005a1e84);
    /* 005a1e84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1e85: mov esi, ecx */ r_esi = r_ecx;
    /* 005a1e87: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x5a1e8cu); f_004f7c84();
    /* 005a1e8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005a1e8f: je 0x5a1f8a */ if (fZ) goto L_005a1f8a;
L_005a1e95:; BB(0x005a1e95);
    /* 005a1e95: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 005a1e9c: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005a1e9f: ja 0x5a1f02 */ if ((!fC&&!fZ)) goto L_005a1f02;
L_005a1ea1:; BB(0x005a1ea1);
    /* 005a1ea1: mov eax, dword ptr [eax*4 + 0x929e70] */ r_eax = R32((u32)(r_eax*4+0x929e70u));
    /* 005a1ea8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005a1f8a:; BB(0x005a1f8a);
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1e84); r_esp += 4; return;
}

void f_005a1eaa(void)
{
    FN_ENTER(0x005a1eaa);
    /* 005a1eaa: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1eac: call 0x5a1f8c */ r_esp -= 4; W32(r_esp, 0x5a1eb1u); f_005a1f8c();
    /* 005a1eb1: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1eaa); r_esp += 4; return;
}

void f_005a1eb3(void)
{
    FN_ENTER(0x005a1eb3);
    /* 005a1eb3: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1eb5: call 0x5a211c */ r_esp -= 4; W32(r_esp, 0x5a1ebau); f_005a211c();
    /* 005a1eba: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1eb3); r_esp += 4; return;
}

void f_005a1ebc(void)
{
    FN_ENTER(0x005a1ebc);
    /* 005a1ebc: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1ebe: call 0x51383c */ r_esp -= 4; W32(r_esp, 0x5a1ec3u); f_0051383c();
    /* 005a1ec3: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ebc); r_esp += 4; return;
}

void f_005a1ec5(void)
{
    FN_ENTER(0x005a1ec5);
    /* 005a1ec5: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1ec7: call 0x5a21cc */ r_esp -= 4; W32(r_esp, 0x5a1eccu); f_005a21cc();
    /* 005a1ecc: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ec5); r_esp += 4; return;
}

void f_005a1ece(void)
{
    FN_ENTER(0x005a1ece);
    /* 005a1ece: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1ed0: call 0x5a2588 */ r_esp -= 4; W32(r_esp, 0x5a1ed5u); f_005a2588();
    /* 005a1ed5: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ece); r_esp += 4; return;
}

void f_005a1ed7(void)
{
    FN_ENTER(0x005a1ed7);
    /* 005a1ed7: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1ed9: call 0x5a2a38 */ r_esp -= 4; W32(r_esp, 0x5a1edeu); f_005a2a38();
    /* 005a1ede: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ed7); r_esp += 4; return;
}

void f_005a1ee0(void)
{
    FN_ENTER(0x005a1ee0);
    /* 005a1ee0: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1ee2: call 0x5a30c4 */ r_esp -= 4; W32(r_esp, 0x5a1ee7u); f_005a30c4();
    /* 005a1ee7: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ee0); r_esp += 4; return;
}

void f_005a1ee9(void)
{
    FN_ENTER(0x005a1ee9);
    /* 005a1ee9: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1eeb: call 0x5a32b8 */ r_esp -= 4; W32(r_esp, 0x5a1ef0u); f_005a32b8();
    /* 005a1ef0: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ee9); r_esp += 4; return;
}

void f_005a1ef2(void)
{
    FN_ENTER(0x005a1ef2);
    /* 005a1ef2: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1ef4: call 0x5a3654 */ r_esp -= 4; W32(r_esp, 0x5a1ef9u); f_005a3654();
    /* 005a1ef9: jmp 0x5a1f02 */ goto L_005a1f02;
L_005a1f02:; BB(0x005a1f02);
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1ef2); r_esp += 4; return;
}

void f_005a1efb(void)
{
    FN_ENTER(0x005a1efb);
    /* 005a1efb: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1efd: call 0x515098 */ r_esp -= 4; W32(r_esp, 0x5a1f02u); f_00515098();
    /* 005a1f02: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f04: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x5a1f09u); f_0078730c();
    /* 005a1f09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f0c: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 005a1f12: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 005a1f18: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005a1f1b: mov eax, dword ptr [esi + 0x308] */ r_eax = R32((u32)(r_esi+0x308u));
    /* 005a1f21: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 005a1f24: mov dword ptr [esi + 0x7c], eax */ W32((u32)(r_esi+0x7cu), r_eax);
    /* 005a1f27: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x5a1f2cu); f_006946a8();
    /* 005a1f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f2f: mov ecx, esi */ r_ecx = r_esi;
    /* 005a1f31: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x5a1f36u); f_00770738();
    /* 005a1f36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f38: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f3a:; BB(0x005a1f3a);
    /* 005a1f3a: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 005a1f3d: test eax, 0x2000800 */ {  u32 a = r_eax; u32 b = 0x2000800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1f42: je 0x5a1f63 */ if (fZ) goto L_005a1f63;
L_005a1f44:; BB(0x005a1f44);
    /* 005a1f44: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 005a1f47: mov dword ptr [esi + 0x38c], 0xffffffff */ W32((u32)(r_esi+0x38cu), 0xffffffffu);
    /* 005a1f51: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005a1f53: mov word ptr [esi + 0x344], ax */ W16((u32)(r_esi+0x344u), (u16)r_eax);
    /* 005a1f5a: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005a1f60: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
L_005a1f63:; BB(0x005a1f63);
    /* 005a1f63: fld dword ptr [0x92a08c] */ FPUSH(R_F32((u32)(0x92a08cu)));
    /* 005a1f69: fadd dword ptr [esi + 0x2b8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x2b8u));
    /* 005a1f6f: fstp dword ptr [esi + 0x2b8] */ W_F32((u32)(r_esi+0x2b8u), ST(0)); FPOP();
    /* 005a1f75: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005a1f78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f7c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f82: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x5a1f87u); f_00805608();
    /* 005a1f87: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a1f8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005a1f8b: ret  */ FN_RET(0x005a1efb); r_esp += 4; return;
}

void f_005a1f8c(void) /* sub_5A1F8C */
{
    FN_ENTER(0x005a1f8c);
    /* 005a1f8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f8d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005a1f90: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005a1f92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1f94: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x5a1f99u); f_007aa094();
    /* 005a1f99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1f9b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1f9d: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a1fa2u); f_007aaa30();
    /* 005a1fa2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1fa4: je 0x5a1fcc */ if (fZ) goto L_005a1fcc;
L_005a1fa6:; BB(0x005a1fa6);
    /* 005a1fa6: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a1fabu); f_00807ac0();
    /* 005a1fab: push dword ptr [eax*4 + 0x9c02b4] */ { u32 v = R32((u32)(r_eax*4+0x9c02b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005a1fb2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1fb4: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a1fb9u); f_007879b8();
    /* 005a1fb9: mov ecx, eax */ r_ecx = r_eax;
    /* 005a1fbb: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 005a1fbe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a1fc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fc1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fc3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fc4: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a1fc9u); f_00814298();
    /* 005a1fc9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a1fcc:; BB(0x005a1fcc);
    /* 005a1fcc: push 0x41d80000 */ { u32 v = 0x41d80000u; r_esp -= 4; W32(r_esp, v); }
    /* 005a1fd1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a1fd3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x5a1fd8u); f_007aaa30();
    /* 005a1fd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a1fda: je 0x5a208c */ if (fZ) goto L_005a208c;
L_005a1fe0:; BB(0x005a1fe0);
    /* 005a1fe0: mov eax, dword ptr [ebp + 0x2b4] */ r_eax = R32((u32)(r_ebp+0x2b4u));
    /* 005a1fe6: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 005a1fe9: fmul dword ptr [0x92a07c] */ ST(0) = ST(0) * R_F32((u32)(0x92a07cu));
    /* 005a1fef: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005a1ff3: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005a1ffa: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 005a2002: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005a2007: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5a200cu); f_0082d990();
    /* 005a200c: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 005a200f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2011: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5a2016u); f_0082d8bc();
    /* 005a2016: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a2019: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a201a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 005a201e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005a2020: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5a2025u); f_0082eab8();
    /* 005a2025: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5a202au); f_0082da80();
    /* 005a202a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005a202d: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 005a2030: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5a2035u); f_0082ebac();
    /* 005a2035: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x5a203au); f_00807ac0();
    /* 005a203a: push dword ptr [eax*4 + 0x9c02fc] */ { u32 v = R32((u32)(r_eax*4+0x9c02fcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005a2041: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a2043: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x5a2048u); f_007879b8();
    /* 005a2048: mov ecx, eax */ r_ecx = r_eax;
    /* 005a204a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005a204d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005a204f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2050: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2052: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005a2053: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5a2058u); f_00814298();
    /* 005a2058: push 0xfffffd00 */ { u32 v = 0xfffffd00u; r_esp -= 4; W32(r_esp, v); }
    /* 005a205d: call 0x814680 */ r_esp -= 4; W32(r_esp, 0x5a2062u); f_00814680();
    /* 005a2062: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 005a2066: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a206b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a206c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5a2071u); f_0050b510();
    /* 005a2071: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 005a2075: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2077: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2078: call 0x578388 */ r_esp -= 4; W32(r_esp, 0x5a207du); f_00578388();
    /* 005a207d: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 005a2081: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 005a2083: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005a2084: call 0x5787a4 */ r_esp -= 4; W32(r_esp, 0x5a2089u); f_005787a4();
    /* 005a2089: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005a208c:; BB(0x005a208c);
    /* 005a208c: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 005a2092: fmul dword ptr [0x92a078] */ ST(0) = ST(0) * R_F32((u32)(0x92a078u));
    /* 005a2098: fmul dword ptr [0x92a07c] */ ST(0) = ST(0) * R_F32((u32)(0x92a07cu));
    /* 005a209e: fcomp dword ptr [ebp + 0xc0] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xc0u))); FPOP();
    /* 005a20a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a20a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a20a7: ja 0x5a20c0 */ if ((!fC&&!fZ)) goto L_005a20c0;
L_005a20a9:; BB(0x005a20a9);
    /* 005a20a9: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 005a20ac: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005a20b1: jne 0x5a20ea */ if (!fZ) goto L_005a20ea;
L_005a20b3:; BB(0x005a20b3);
    /* 005a20b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a20b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005a20b7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a20b9: call 0x772b44 */ r_esp -= 4; W32(r_esp, 0x5a20beu); f_00772b44();
    /* 005a20be: jmp 0x5a20ea */ goto L_005a20ea;
L_005a20c0:; BB(0x005a20c0);
    /* 005a20c0: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005a20c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005a20c5: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x5a20c8u); call_ind(t); }
    /* 005a20c8: fld dword ptr [0x92a07c] */ FPUSH(R_F32((u32)(0x92a07cu)));
    /* 005a20ce: fld dword ptr [ebp + 0x30c] */ FPUSH(R_F32((u32)(r_ebp+0x30cu)));
    /* 005a20d4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005a20d6: fld dword ptr [ebp + 0x314] */ FPUSH(R_F32((u32)(r_ebp+0x314u)));
    /* 005a20dc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 005a20de: fstp dword ptr [ebp + 0x30c] */ W_F32((u32)(r_ebp+0x30cu), ST(0)); FPOP();
    /* 005a20e4: fstp dword ptr [ebp + 0x314] */ W_F32((u32)(r_ebp+0x314u), ST(0)); FPOP();
L_005a20ea:; BB(0x005a20ea);
    /* 005a20ea: fld dword ptr [ebp + 0x394] */ FPUSH(R_F32((u32)(r_ebp+0x394u)));
    /* 005a20f0: fsub dword ptr [0x92a074] */ ST(0) = ST(0) - R_F32((u32)(0x92a074u));
    /* 005a20f6: fcom dword ptr [0x92a070] */ fx_compare(ST(0), R_F32((u32)(0x92a070u))); 
    /* 005a20fc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005a20fe: fstp dword ptr [ebp + 0x394] */ W_F32((u32)(r_ebp+0x394u), ST(0)); FPOP();
    /* 005a2104: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005a2105: jae 0x5a2114 */ if (!fC) goto L_005a2114;
L_005a2107:; BB(0x005a2107);
    /* 005a2107: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005a210b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005a2110: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_005a2114:; BB(0x005a2114);
    /* 005a2114: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005a2117: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005a2118: ret  */ FN_RET(0x005a1f8c); r_esp += 4; return;
}

