#include "protos.h"

void f_006c4090(void) /* sub_6C4090 */
{
    FN_ENTER(0x006c4090);
    /* 006c4090: call 0x6c40d4 */ r_esp -= 4; W32(r_esp, 0x6c4095u); f_006c40d4();
    /* 006c4095: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4097: je 0x6c40a6 */ if (fZ) goto L_006c40a6;
L_006c4099:; BB(0x006c4099);
    /* 006c4099: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c40a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c40a5: ret  */ FN_RET(0x006c4090); r_esp += 4; return;
L_006c40a6:; BB(0x006c40a6);
    /* 006c40a6: mov dword ptr [0xa95da8], 1 */ W32((u32)(0xa95da8u), 0x1u);
L_006c40b0:; BB(0x006c40b0);
    /* 006c40b0: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c40b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c40b7: je 0x6c40c5 */ if (fZ) goto L_006c40c5;
L_006c40b9:; BB(0x006c40b9);
    /* 006c40b9: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x6c40beu); f_006c38bc();
    /* 006c40be: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c40c3u); f_0080030c();
    /* 006c40c3: jmp 0x6c40b0 */ goto L_006c40b0;
L_006c40c5:; BB(0x006c40c5);
    /* 006c40c5: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c40cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c40d1: ret  */ FN_RET(0x006c4090); r_esp += 4; return;
}

void f_006c40d4(void) /* sub_6C40D4 */
{
    FN_ENTER(0x006c40d4);
    /* 006c40d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c40d5: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 006c40da: mov dword ptr [0xa95dac], 0 */ W32((u32)(0xa95dacu), 0x0u);
    /* 006c40e4: mov edx, 0xffff0000 */ r_edx = 0xffff0000u;
    /* 006c40e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c40eb: je 0x6c412b */ if (fZ) goto L_006c412b;
L_006c40ed:; BB(0x006c40ed);
    /* 006c40ed: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c40f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c40f4: jne 0x6c412b */ if (!fZ) goto L_006c412b;
L_006c40f6:; BB(0x006c40f6);
    /* 006c40f6: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c40fbu); f_00415cec();
    /* 006c40fb: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c40fe: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c4103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4104: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c4109u); f_006dc358();
    /* 006c4109: mov edx, eax */ r_edx = r_eax;
    /* 006c410b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c410e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4110: jne 0x6c412b */ if (!fZ) goto L_006c412b;
L_006c4112:; BB(0x006c4112);
    /* 006c4112: push 0x9ceb64 */ { u32 v = 0x9ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4117: push dword ptr [0xa95dd8] */ { u32 v = R32((u32)(0xa95dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c411d: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c4122u); f_0082c198();
    /* 006c4122: mov edx, eax */ r_edx = r_eax;
    /* 006c4124: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4127: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4129: je 0x6c412f */ if (fZ) goto L_006c412f;
L_006c412b:; BB(0x006c412b);
    /* 006c412b: mov eax, edx */ r_eax = r_edx;
    /* 006c412d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c412e: ret  */ FN_RET(0x006c40d4); r_esp += 4; return;
L_006c412f:; BB(0x006c412f);
    /* 006c412f: mov eax, dword ptr [0xa95dd8] */ r_eax = R32((u32)(0xa95dd8u));
    /* 006c4134: call 0x6c4150 */ r_esp -= 4; W32(r_esp, 0x6c4139u); f_006c4150();
    /* 006c4139: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c413b: jne 0x6c4147 */ if (!fZ) goto L_006c4147;
L_006c413d:; BB(0x006c413d);
    /* 006c413d: mov dword ptr [0xa95de0], 0xd */ W32((u32)(0xa95de0u), 0xdu);
L_006c4147:; BB(0x006c4147);
    /* 006c4147: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4148: ret  */ FN_RET(0x006c40d4); r_esp += 4; return;
}

void f_006c4150(void) /* sub_6C4150 */
{
    FN_ENTER(0x006c4150);
    /* 006c4150: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c4155: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006c415a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c415c: jl 0x6c41b2 */ if ((fS!=fO)) goto L_006c41b2;
L_006c415e:; BB(0x006c415e);
    /* 006c415e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c4161: jg 0x6c41b2 */ if ((!fZ&&fS==fO)) goto L_006c41b2;
L_006c4163:; BB(0x006c4163);
    /* 006c4163: push 0x9ceb64 */ { u32 v = 0x9ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4168: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4169: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c416eu); f_0082c198();
    /* 006c416e: mov edx, eax */ r_edx = r_eax;
    /* 006c4170: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4173: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4175: jne 0x6c41b2 */ if (!fZ) goto L_006c41b2;
L_006c4177:; BB(0x006c4177);
    /* 006c4177: mov eax, dword ptr [0xa95dd0] */ r_eax = R32((u32)(0xa95dd0u));
    /* 006c417c: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c4186: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c4189: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c418a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c418c: push dword ptr [0xa95e28] */ { u32 v = R32((u32)(0xa95e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c4192: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c4197u); f_0086b688();
    /* 006c4197: push dword ptr [0xa95e28] */ { u32 v = R32((u32)(0xa95e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c419d: push 0x9ceb64 */ { u32 v = 0x9ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006c41a2: push dword ptr [0xa95dd8] */ { u32 v = R32((u32)(0xa95dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c41a8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c41adu); f_006dc358();
    /* 006c41ad: mov edx, eax */ r_edx = r_eax;
    /* 006c41af: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c41b2:; BB(0x006c41b2);
    /* 006c41b2: mov eax, edx */ r_eax = r_edx;
    /* 006c41b4: ret  */ FN_RET(0x006c4150); r_esp += 4; return;
}

void f_006c41b8(void) /* sub_6C41B8 */
{
    FN_ENTER(0x006c41b8);
    /* 006c41b8: call 0x6c3cf8 */ r_esp -= 4; W32(r_esp, 0x6c41bdu); f_006c3cf8();
    /* 006c41bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c41bf: je 0x6c41ce */ if (fZ) goto L_006c41ce;
L_006c41c1:; BB(0x006c41c1);
    /* 006c41c1: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c41cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c41cd: ret  */ FN_RET(0x006c41b8); r_esp += 4; return;
L_006c41ce:; BB(0x006c41ce);
    /* 006c41ce: mov dword ptr [0xa95da8], 1 */ W32((u32)(0xa95da8u), 0x1u);
L_006c41d8:; BB(0x006c41d8);
    /* 006c41d8: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c41dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c41df: je 0x6c41ed */ if (fZ) goto L_006c41ed;
L_006c41e1:; BB(0x006c41e1);
    /* 006c41e1: call 0x6c38bc */ r_esp -= 4; W32(r_esp, 0x6c41e6u); f_006c38bc();
    /* 006c41e6: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c41ebu); f_0080030c();
    /* 006c41eb: jmp 0x6c41d8 */ goto L_006c41d8;
L_006c41ed:; BB(0x006c41ed);
    /* 006c41ed: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c41f2: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c41f8: mov dword ptr [0xa95da8], 0 */ W32((u32)(0xa95da8u), 0x0u);
    /* 006c4202: mov dword ptr [0xa95dc4], edx */ W32((u32)(0xa95dc4u), r_edx);
    /* 006c4208: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c420d: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c4213: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c4219: mov dword ptr [0xa95dc0], edx */ W32((u32)(0xa95dc0u), r_edx);
    /* 006c421f: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x6c4224u); f_0086b324();
    /* 006c4224: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4227: call 0x6c1bdc */ r_esp -= 4; W32(r_esp, 0x6c422cu); f_006c1bdc();
    /* 006c422c: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c422f: je 0x6c4235 */ if (fZ) goto L_006c4235;
L_006c4231:; BB(0x006c4231);
    /* 006c4231: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4233: jmp 0x6c423a */ goto L_006c423a;
L_006c4235:; BB(0x006c4235);
    /* 006c4235: mov eax, 1 */ r_eax = 0x1u;
L_006c423a:; BB(0x006c423a);
    /* 006c423a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c423c: mov eax, 0 */ r_eax = 0x0u;
    /* 006c4241: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006c4244: ret  */ FN_RET(0x006c41b8); r_esp += 4; return;
}

void f_006c4248(void) /* sub_6C4248 */
{
    FN_ENTER(0x006c4248);
    /* 006c4248: mov ecx, dword ptr [0xa95dfc] */ r_ecx = R32((u32)(0xa95dfcu));
    /* 006c424e: mov dword ptr [0xa95e20], 0 */ W32((u32)(0xa95e20u), 0x0u);
    /* 006c4258: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c425d: mov dword ptr [0xa95e00], eax */ W32((u32)(0xa95e00u), r_eax);
    /* 006c4262: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4264: mov dword ptr [0xa95e10], eax */ W32((u32)(0xa95e10u), r_eax);
    /* 006c4269: mov dword ptr [0xa95e04], eax */ W32((u32)(0xa95e04u), r_eax);
    /* 006c426e: mov dword ptr [0xa95e14], eax */ W32((u32)(0xa95e14u), r_eax);
    /* 006c4273: mov dword ptr [0xa95e08], eax */ W32((u32)(0xa95e08u), r_eax);
    /* 006c4278: mov dword ptr [0xa95e18], eax */ W32((u32)(0xa95e18u), r_eax);
    /* 006c427d: mov dword ptr [0xa95e0c], eax */ W32((u32)(0xa95e0cu), r_eax);
    /* 006c4282: mov dword ptr [0xa95e1c], eax */ W32((u32)(0xa95e1cu), r_eax);
    /* 006c4287: je 0x6c4292 */ if (fZ) goto L_006c4292;
L_006c4289:; BB(0x006c4289);
    /* 006c4289: je 0x6c4292 */ if (fZ) goto L_006c4292;
L_006c428b:; BB(0x006c428b);
    /* 006c428b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c428d: call 0x6c16a4 */ r_esp -= 4; W32(r_esp, 0x6c4292u); f_006c16a4();
L_006c4292:; BB(0x006c4292);
    /* 006c4292: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c4297: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4299: je 0x6c42a2 */ if (fZ) goto L_006c42a2;
L_006c429b:; BB(0x006c429b);
    /* 006c429b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c429c: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c42a1u); f_00857e98();
    /* 006c42a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c42a2:; BB(0x006c42a2);
    /* 006c42a2: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 006c42a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c42a9: je 0x6c42b2 */ if (fZ) goto L_006c42b2;
L_006c42ab:; BB(0x006c42ab);
    /* 006c42ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c42ac: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c42b1u); f_00857e98();
    /* 006c42b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c42b2:; BB(0x006c42b2);
    /* 006c42b2: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c42b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c42ba: je 0x6c42c5 */ if (fZ) goto L_006c42c5;
L_006c42bc:; BB(0x006c42bc);
    /* 006c42bc: je 0x6c42c5 */ if (fZ) goto L_006c42c5;
L_006c42be:; BB(0x006c42be);
    /* 006c42be: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c42c0: call 0x6c1780 */ r_esp -= 4; W32(r_esp, 0x6c42c5u); f_006c1780();
L_006c42c5:; BB(0x006c42c5);
    /* 006c42c5: call 0x6c42d8 */ r_esp -= 4; W32(r_esp, 0x6c42cau); f_006c42d8();
    /* 006c42ca: call 0x6c42fc */ r_esp -= 4; W32(r_esp, 0x6c42cfu); f_006c42fc();
    /* 006c42cf: call 0x6c4320 */ r_esp -= 4; W32(r_esp, 0x6c42d4u); f_006c4320();
    /* 006c42d4: ret  */ FN_RET(0x006c4248); r_esp += 4; return;
}

void f_006c42d8(void) /* sub_6C42D8 */
{
    FN_ENTER(0x006c42d8);
    /* 006c42d8: mov eax, dword ptr [0xa95e2c] */ r_eax = R32((u32)(0xa95e2cu));
    /* 006c42dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c42df: je 0x6c42f8 */ if (fZ) goto L_006c42f8;
L_006c42e1:; BB(0x006c42e1);
    /* 006c42e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c42e2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c42e7u); f_0082e960();
    /* 006c42e7: mov dword ptr [0xa95e2c], 0 */ W32((u32)(0xa95e2cu), 0x0u);
    /* 006c42f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006c42f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c42f7: ret  */ FN_RET(0x006c42d8); r_esp += 4; return;
L_006c42f8:; BB(0x006c42f8);
    /* 006c42f8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c42fa: ret  */ FN_RET(0x006c42d8); r_esp += 4; return;
}

void f_006c42fc(void) /* sub_6C42FC */
{
    FN_ENTER(0x006c42fc);
    /* 006c42fc: mov eax, dword ptr [0xa95e28] */ r_eax = R32((u32)(0xa95e28u));
    /* 006c4301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4303: je 0x6c431c */ if (fZ) goto L_006c431c;
L_006c4305:; BB(0x006c4305);
    /* 006c4305: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4306: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c430bu); f_0082e960();
    /* 006c430b: mov dword ptr [0xa95e28], 0 */ W32((u32)(0xa95e28u), 0x0u);
    /* 006c4315: mov eax, 1 */ r_eax = 0x1u;
    /* 006c431a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c431b: ret  */ FN_RET(0x006c42fc); r_esp += 4; return;
L_006c431c:; BB(0x006c431c);
    /* 006c431c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c431e: ret  */ FN_RET(0x006c42fc); r_esp += 4; return;
}

void f_006c4320(void) /* sub_6C4320 */
{
    FN_ENTER(0x006c4320);
    /* 006c4320: mov eax, dword ptr [0xa95e24] */ r_eax = R32((u32)(0xa95e24u));
    /* 006c4325: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4327: je 0x6c4340 */ if (fZ) goto L_006c4340;
L_006c4329:; BB(0x006c4329);
    /* 006c4329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c432a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c432fu); f_0082e960();
    /* 006c432f: mov dword ptr [0xa95e24], 0 */ W32((u32)(0xa95e24u), 0x0u);
    /* 006c4339: mov eax, 1 */ r_eax = 0x1u;
    /* 006c433e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c433f: ret  */ FN_RET(0x006c4320); r_esp += 4; return;
L_006c4340:; BB(0x006c4340);
    /* 006c4340: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4342: ret  */ FN_RET(0x006c4320); r_esp += 4; return;
}

void f_006c4344(void) /* sub_6C4344 */
{
    FN_ENTER(0x006c4344);
    /* 006c4344: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c4349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c434b: je 0x6c4355 */ if (fZ) goto L_006c4355;
L_006c434d:; BB(0x006c434d);
    /* 006c434d: movzx eax, word ptr [eax + 0x27c0] */ r_eax = (u32)R16((u32)(r_eax+0x27c0u));
    /* 006c4354: ret  */ FN_RET(0x006c4344); r_esp += 4; return;
L_006c4355:; BB(0x006c4355);
    /* 006c4355: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4357: ret  */ FN_RET(0x006c4344); r_esp += 4; return;
}

void f_006c4358(void) /* sub_6C4358 */
{
    FN_ENTER(0x006c4358);
    /* 006c4358: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c435d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c435f: je 0x6c4369 */ if (fZ) goto L_006c4369;
L_006c4361:; BB(0x006c4361);
    /* 006c4361: movzx eax, word ptr [eax + 0x27c2] */ r_eax = (u32)R16((u32)(r_eax+0x27c2u));
    /* 006c4368: ret  */ FN_RET(0x006c4358); r_esp += 4; return;
L_006c4369:; BB(0x006c4369);
    /* 006c4369: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c436b: ret  */ FN_RET(0x006c4358); r_esp += 4; return;
}

void f_006c436c(void) /* sub_6C436C */
{
    FN_ENTER(0x006c436c);
    /* 006c436c: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c4371: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4373: je 0x6c437d */ if (fZ) goto L_006c437d;
L_006c4375:; BB(0x006c4375);
    /* 006c4375: movzx eax, word ptr [eax + 0x27c4] */ r_eax = (u32)R16((u32)(r_eax+0x27c4u));
    /* 006c437c: ret  */ FN_RET(0x006c436c); r_esp += 4; return;
L_006c437d:; BB(0x006c437d);
    /* 006c437d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c437f: ret  */ FN_RET(0x006c436c); r_esp += 4; return;
}

void f_006c4380(void) /* sub_6C4380 */
{
    FN_ENTER(0x006c4380);
    /* 006c4380: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c4385: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4387: je 0x6c4391 */ if (fZ) goto L_006c4391;
L_006c4389:; BB(0x006c4389);
    /* 006c4389: movzx eax, word ptr [eax + 0x27c6] */ r_eax = (u32)R16((u32)(r_eax+0x27c6u));
    /* 006c4390: ret  */ FN_RET(0x006c4380); r_esp += 4; return;
L_006c4391:; BB(0x006c4391);
    /* 006c4391: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4393: ret  */ FN_RET(0x006c4380); r_esp += 4; return;
}

void f_006c4394(void) /* sub_6C4394 */
{
    FN_ENTER(0x006c4394);
    /* 006c4394: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c4399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c439b: je 0x6c43a5 */ if (fZ) goto L_006c43a5;
L_006c439d:; BB(0x006c439d);
    /* 006c439d: movzx eax, word ptr [eax + 0x27c8] */ r_eax = (u32)R16((u32)(r_eax+0x27c8u));
    /* 006c43a4: ret  */ FN_RET(0x006c4394); r_esp += 4; return;
L_006c43a5:; BB(0x006c43a5);
    /* 006c43a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43a7: ret  */ FN_RET(0x006c4394); r_esp += 4; return;
}

void f_006c43a8(void) /* sub_6C43A8 */
{
    FN_ENTER(0x006c43a8);
    /* 006c43a8: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c43ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43af: je 0x6c43b9 */ if (fZ) goto L_006c43b9;
L_006c43b1:; BB(0x006c43b1);
    /* 006c43b1: movzx eax, word ptr [eax + 0x29ac] */ r_eax = (u32)R16((u32)(r_eax+0x29acu));
    /* 006c43b8: ret  */ FN_RET(0x006c43a8); r_esp += 4; return;
L_006c43b9:; BB(0x006c43b9);
    /* 006c43b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43bb: ret  */ FN_RET(0x006c43a8); r_esp += 4; return;
}

void f_006c43bc(void) /* sub_6C43BC */
{
    FN_ENTER(0x006c43bc);
    /* 006c43bc: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c43c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43c3: je 0x6c43cd */ if (fZ) goto L_006c43cd;
L_006c43c5:; BB(0x006c43c5);
    /* 006c43c5: movzx eax, word ptr [eax + 0x29ae] */ r_eax = (u32)R16((u32)(r_eax+0x29aeu));
    /* 006c43cc: ret  */ FN_RET(0x006c43bc); r_esp += 4; return;
L_006c43cd:; BB(0x006c43cd);
    /* 006c43cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43cf: ret  */ FN_RET(0x006c43bc); r_esp += 4; return;
}

void f_006c43d0(void) /* sub_6C43D0 */
{
    FN_ENTER(0x006c43d0);
    /* 006c43d0: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c43d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43d7: je 0x6c43e1 */ if (fZ) goto L_006c43e1;
L_006c43d9:; BB(0x006c43d9);
    /* 006c43d9: movzx eax, word ptr [eax + 0x29b0] */ r_eax = (u32)R16((u32)(r_eax+0x29b0u));
    /* 006c43e0: ret  */ FN_RET(0x006c43d0); r_esp += 4; return;
L_006c43e1:; BB(0x006c43e1);
    /* 006c43e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43e3: ret  */ FN_RET(0x006c43d0); r_esp += 4; return;
}

void f_006c43e4(void) /* sub_6C43E4 */
{
    FN_ENTER(0x006c43e4);
    /* 006c43e4: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c43e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43eb: je 0x6c43f5 */ if (fZ) goto L_006c43f5;
L_006c43ed:; BB(0x006c43ed);
    /* 006c43ed: movzx eax, word ptr [eax + 0x29b2] */ r_eax = (u32)R16((u32)(r_eax+0x29b2u));
    /* 006c43f4: ret  */ FN_RET(0x006c43e4); r_esp += 4; return;
L_006c43f5:; BB(0x006c43f5);
    /* 006c43f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c43f7: ret  */ FN_RET(0x006c43e4); r_esp += 4; return;
}

void f_006c43f8(void) /* sub_6C43F8 */
{
    FN_ENTER(0x006c43f8);
    /* 006c43f8: mov ecx, dword ptr [0xa95dfc] */ r_ecx = R32((u32)(0xa95dfcu));
    /* 006c43fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4400: je 0x6c4411 */ if (fZ) goto L_006c4411;
L_006c4402:; BB(0x006c4402);
    /* 006c4402: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c4406: call 0x6c4414 */ r_esp -= 4; W32(r_esp, 0x6c440bu); f_006c4414();
    /* 006c440b: mov eax, 1 */ r_eax = 0x1u;
    /* 006c4410: ret  */ FN_RET(0x006c43f8); r_esp += 4; return;
L_006c4411:; BB(0x006c4411);
    /* 006c4411: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4413: ret  */ FN_RET(0x006c43f8); r_esp += 4; return;
}

void f_006c4414(void) /* sub_6C4414 */
{
    FN_ENTER(0x006c4414);
    /* 006c4414: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c4415: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c4416: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c4417: mov edi, ecx */ r_edi = r_ecx;
    /* 006c4419: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006c441d: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 006c4420: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c4423: jge 0x6c4478 */ if ((fS==fO)) goto L_006c4478;
L_006c4425:; BB(0x006c4425);
    /* 006c4425: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4427: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4429: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 006c442c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c442e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c4430: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 006c4432: lea edx, [edi + ebx] */ r_edx = (u32)(r_edi+r_ebx);
    /* 006c4435: mov byte ptr [edx + 5], 0xff */ W8((u32)(r_edx+0x5u), 0xffu);
    /* 006c4439: lea ecx, [edi + ebx + 0xc] */ r_ecx = (u32)(r_edi+r_ebx+0xcu);
    /* 006c443d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c443f: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 006c4442: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c4445: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c444au); f_005d6a3c();
    /* 006c444a: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006c444c: lea eax, [edi + ebx + 0xc] */ r_eax = (u32)(r_edi+r_ebx+0xcu);
    /* 006c4450: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 006c4453: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006c4455: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006c4458: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 006c445b: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006c445e: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 006c4461: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006c4464: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006c4467: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 006c446a: add byte ptr [edi], 1 */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006c446d: mov eax, 1 */ r_eax = 0x1u;
    /* 006c4472: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c4473: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c4474: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c4475: ret 4 */ FN_RET(0x006c4414); r_esp += 8; return;
L_006c4478:; BB(0x006c4478);
    /* 006c4478: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c447a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c447b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c447c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c447d: ret 4 */ FN_RET(0x006c4414); r_esp += 8; return;
}

void f_006c4480(void) /* sub_6C4480 */
{
    FN_ENTER(0x006c4480);
    /* 006c4480: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c4483: mov eax, dword ptr [0x96b7e8] */ r_eax = R32((u32)(0x96b7e8u));
    /* 006c4488: mov edx, dword ptr [0x96b7ec] */ r_edx = R32((u32)(0x96b7ecu));
    /* 006c448e: mov ecx, dword ptr [0x96b7f0] */ r_ecx = R32((u32)(0x96b7f0u));
    /* 006c4494: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006c4497: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006c449b: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 006c449f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c44a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c44a3: call 0x7083fc */ r_esp -= 4; W32(r_esp, 0x6c44a8u); f_007083fc();
    /* 006c44a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c44ab: ret  */ FN_RET(0x006c4480); r_esp += 4; return;
}

void f_006c44ac(void) /* sub_6C44AC */
{
    FN_ENTER(0x006c44ac);
    /* 006c44ac: mov eax, 0x9ceac8 */ r_eax = 0x9ceac8u;
    /* 006c44b1: ret  */ FN_RET(0x006c44ac); r_esp += 4; return;
}

void f_006c44b4(void) /* sub_6C44B4 */
{
    FN_ENTER(0x006c44b4);
    /* 006c44b4: mov eax, 0x9ceb64 */ r_eax = 0x9ceb64u;
    /* 006c44b9: ret  */ FN_RET(0x006c44b4); r_esp += 4; return;
}

void f_006c44bc(void) /* sub_6C44BC */
{
    FN_ENTER(0x006c44bc);
    /* 006c44bc: mov eax, 0x9ceb0c */ r_eax = 0x9ceb0cu;
    /* 006c44c1: ret  */ FN_RET(0x006c44bc); r_esp += 4; return;
}

void f_006c44c4(void) /* sub_6C44C4 */
{
    FN_ENTER(0x006c44c4);
    /* 006c44c4: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c44c9: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6c44ceu); f_0083ace8();
    /* 006c44ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c44cf: ret  */ FN_RET(0x006c44c4); r_esp += 4; return;
}

void f_006c44d0(void) /* sub_6C44D0 */
{
    FN_ENTER(0x006c44d0);
    /* 006c44d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c44d1: imul eax, dword ptr [esp + 8], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(r_esp+0x8u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c44d9: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c44df: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 006c44e2: mov ecx, dword ptr [ecx + 0x4e4] */ r_ecx = R32((u32)(r_ecx+0x4e4u));
    /* 006c44e8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c44ea: je 0x6c4526 */ if (fZ) goto L_006c4526;
L_006c44ec:; BB(0x006c44ec);
    /* 006c44ec: mov dword ptr [0xa95e3c], 0 */ W32((u32)(0xa95e3cu), 0x0u);
    /* 006c44f6: lea edi, [edx + eax + 4] */ r_edi = (u32)(r_edx+r_eax+0x4u);
    /* 006c44fa: mov edx, dword ptr [eax + edx + 0x368] */ r_edx = R32((u32)(r_eax+r_edx+0x368u));
    /* 006c4501: lea ecx, [edi + 0x370] */ r_ecx = (u32)(r_edi+0x370u);
    /* 006c4507: mov dword ptr [0xa95e30], ecx */ W32((u32)(0xa95e30u), r_ecx);
    /* 006c450d: mov dword ptr [0xa95e38], edx */ W32((u32)(0xa95e38u), r_edx);
    /* 006c4513: add edi, 0x3c0 */ {  u32 a = r_edi; u32 b = 0x3c0u; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c4519: mov eax, 0xa95e30 */ r_eax = 0xa95e30u;
    /* 006c451e: mov dword ptr [0xa95e34], edi */ W32((u32)(0xa95e34u), r_edi);
    /* 006c4524: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c4525: ret  */ FN_RET(0x006c44d0); r_esp += 4; return;
L_006c4526:; BB(0x006c4526);
    /* 006c4526: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c4528: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c4529: ret  */ FN_RET(0x006c44d0); r_esp += 4; return;
}

void f_006c452c(void) /* sub_6C452C */
{
    FN_ENTER(0x006c452c);
    /* 006c452c: mov dword ptr [0xa95d9c], 0x3f800000 */ W32((u32)(0xa95d9cu), 0x3f800000u);
    /* 006c4536: mov dword ptr [0xa95da0], 0x41000000 */ W32((u32)(0xa95da0u), 0x41000000u);
    /* 006c4540: mov dword ptr [0xa95da4], 0x3fc00000 */ W32((u32)(0xa95da4u), 0x3fc00000u);
    /* 006c454a: ret  */ FN_RET(0x006c452c); r_esp += 4; return;
}

void f_006c454c(void) /* sub_6C454C */
{
    FN_ENTER(0x006c454c);
    /* 006c454c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c454d: mov ebp, esp */ r_ebp = r_esp;
    /* 006c454f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4551: push 0x8ec77e */ { u32 v = 0x8ec77eu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4556: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c455c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c455d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c4564: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c4567: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c456a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c456d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c4570: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c4573: lea eax, [ecx + 0x3e0] */ r_eax = (u32)(r_ecx+0x3e0u);
    /* 006c4579: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c457e: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4583: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c4586: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 006c4589: add ecx, 0x3e4 */ {  u32 a = r_ecx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c458f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006c4592: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4594: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4596: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c4597: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c459cu); f_00858736();
    /* 006c459c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c45a3: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45a8: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45ad: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c45b0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c45b2: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c45b5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c45b8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c45bdu); f_00858736();
    /* 006c45bd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 006c45c0: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c45c6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006c45cd: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45d2: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45d7: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 006c45da: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c45dc: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c45df: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c45e2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006c45e5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c45e8: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c45edu); f_00858736();
    /* 006c45ed: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c45f4: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45f9: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c45fe: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c4601: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4603: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4606: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4609: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c460eu); f_00858736();
    /* 006c460e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c4611: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c4617: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006c461e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c4620:; BB(0x006c4620);
    /* 006c4620: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c4623: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c4626: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c4628: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c462b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c462d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c462f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c4631: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c4636: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c463a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c463c: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c4640: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c4644: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c4648: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c464c: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c4651u); f_005d6a3c();
    /* 006c4651: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c4654: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c4657: jl 0x6c4620 */ if ((fS!=fO)) goto L_006c4620;
L_006c4659:; BB(0x006c4659);
    /* 006c4659: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c465c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c465f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c4662: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c4665: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c4668: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c466f: mov esp, ebp */ r_esp = r_ebp;
    /* 006c4671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c4672: ret  */ FN_RET(0x006c454c); r_esp += 4; return;
}

void f_006c4674(void) /* sub_6C4674 */
{
    FN_ENTER(0x006c4674);
    /* 006c4674: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c4675: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c4676: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c4677: mov eax, ecx */ r_eax = r_ecx;
    /* 006c4679: lea ecx, [eax + 0x224] */ r_ecx = (u32)(r_eax+0x224u);
    /* 006c467f: mov edx, 0xc8 */ r_edx = 0xc8u;
    /* 006c4684: mov ebp, eax */ r_ebp = r_eax;
    /* 006c4686: mov esi, edx */ r_esi = r_edx;
    /* 006c4688: mov edi, ecx */ r_edi = r_ecx;
L_006c468a:; BB(0x006c468a);
    /* 006c468a: mov ecx, edi */ r_ecx = r_edi;
    /* 006c468c: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c4691u); f_006c8960();
    /* 006c4691: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c4694: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c4697: jne 0x6c468a */ if (!fZ) goto L_006c468a;
L_006c4699:; BB(0x006c4699);
    /* 006c4699: mov eax, ebp */ r_eax = r_ebp;
    /* 006c469b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c469c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c469d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c469e: ret  */ FN_RET(0x006c4674); r_esp += 4; return;
}

void f_006c46a0(void) /* sub_6C46A0 */
{
    FN_ENTER(0x006c46a0);
    /* 006c46a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c46a1: mov ebp, esp */ r_ebp = r_esp;
    /* 006c46a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c46a5: push 0x8ed4e2 */ { u32 v = 0x8ed4e2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c46aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c46b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c46b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c46b8: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c46be: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c46c1: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c46c4: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c46c7: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c46ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c46cc: mov ecx, 0xa95e00 */ r_ecx = 0xa95e00u;
    /* 006c46d1: mov dword ptr [0xa95e48], eax */ W32((u32)(0xa95e48u), r_eax);
    /* 006c46d6: mov dword ptr [0xa95da8], eax */ W32((u32)(0xa95da8u), r_eax);
    /* 006c46db: call 0x6c7a38 */ r_esp -= 4; W32(r_esp, 0x6c46e0u); f_006c7a38();
    /* 006c46e0: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c46e5: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6c46eau); f_0083ace8();
    /* 006c46ea: lea eax, [ebp - 0x1b8] */ r_eax = (u32)(r_ebp+0xfffffe48u);
    /* 006c46f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c46f1: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c46f6: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6c46fbu); f_0083ad44();
    /* 006c46fb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c46fe: mov esi, dword ptr [ebp - 0x1b8] */ r_esi = R32((u32)(r_ebp+0xfffffe48u));
    /* 006c4704: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 006c4709: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 006c470b: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006c470e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006c4711: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c4713: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006c4715: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c4717: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c4719: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c471b: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c471d: lea ebx, [esi - 1] */ r_ebx = (u32)(r_esi+0xffffffffu);
    /* 006c4720: cmp ebx, 0x16 */ {  u32 a = r_ebx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006c4723: ja 0x6c706a */ if ((!fC&&!fZ)) goto L_006c706a;
L_006c4729:; BB(0x006c4729);
    /* 006c4729: mov eax, dword ptr [esi*4 + 0x96b7fc] */ r_eax = R32((u32)(r_esi*4+0x96b7fcu));
    /* 006c4730: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c706a:; BB(0x006c706a);
    /* 006c706a: mov dword ptr [ebp - 0x1b4], 0 */ W32((u32)(r_ebp+0xfffffe4cu), 0x0u);
    /* 006c7074: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7079: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c707eu); f_008581c5();
    /* 006c707e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c707f: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c7085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7087: je 0x6c76db */ if (fZ) goto L_006c76db;
L_006c708d:; BB(0x006c708d);
    /* 006c708d: mov dword ptr [ebp - 0x1b4], 1 */ W32((u32)(r_ebp+0xfffffe4cu), 0x1u);
    /* 006c7097: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006c709e: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c70a3: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c70a8: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c70ae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c70b0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c70b3: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c70b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c70b9: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c70beu); f_00858736();
    /* 006c70be: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c70c4: mov dword ptr [ebp - 0x1b4], 0 */ W32((u32)(r_ebp+0xfffffe4cu), 0x0u);
L_006c70ce:; BB(0x006c70ce);
    /* 006c70ce: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c70d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c70da: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
    /* 006c70e4: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c70e9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c70eeu); f_008581c5();
    /* 006c70ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c70ef: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c70f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c70f7: je 0x6c76d4 */ if (fZ) goto L_006c76d4;
L_006c70fd:; BB(0x006c70fd);
    /* 006c70fd: mov dword ptr [ebp - 0x1ac], 1 */ W32((u32)(r_ebp+0xfffffe54u), 0x1u);
    /* 006c7107: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006c710e: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7113: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7118: mov edx, dword ptr [ebp - 0x1a8] */ r_edx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c711e: mov dword ptr [ebp - 0x214], edx */ W32((u32)(r_ebp+0xfffffdecu), r_edx);
    /* 006c7124: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c7126: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7128: lea eax, [edx + 0x3e0] */ r_eax = (u32)(r_edx+0x3e0u);
    /* 006c712e: mov dword ptr [ebp - 0x20c], eax */ W32((u32)(r_ebp+0xfffffdf4u), r_eax);
    /* 006c7134: add edx, 0x3e4 */ {  u32 a = r_edx; u32 b = 0x3e4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c713a: mov dword ptr [ebp - 0x204], eax */ W32((u32)(r_ebp+0xfffffdfcu), r_eax);
    /* 006c7140: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c7141: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c7146u); f_00858736();
    /* 006c7146: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006c714d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7152: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7157: mov eax, dword ptr [ebp - 0x204] */ r_eax = R32((u32)(r_ebp+0xfffffdfcu));
    /* 006c715d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c715f: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c7162: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c7165: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c716au); f_00858736();
    /* 006c716a: mov eax, dword ptr [ebp - 0x204] */ r_eax = R32((u32)(r_ebp+0xfffffdfcu));
    /* 006c7170: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c7176: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006c717d: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7182: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7187: mov edx, dword ptr [ebp - 0x20c] */ r_edx = R32((u32)(r_ebp+0xfffffdf4u));
    /* 006c718d: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c718f: lea eax, [edx + 0x74] */ r_eax = (u32)(r_edx+0x74u);
    /* 006c7192: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c7195: mov dword ptr [ebp - 0x1fc], eax */ W32((u32)(r_ebp+0xfffffe04u), r_eax);
    /* 006c719b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c719d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c719e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c71a3u); f_00858736();
    /* 006c71a3: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006c71aa: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c71af: push 0x4da288 */ { u32 v = 0x4da288u; r_esp -= 4; W32(r_esp, v); }
    /* 006c71b4: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 006c71ba: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006c71bc: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c71bf: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c71c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c71c2: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c71c7u); f_00858736();
    /* 006c71c7: mov eax, dword ptr [ebp - 0x1fc] */ r_eax = R32((u32)(r_ebp+0xfffffe04u));
    /* 006c71cd: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c71d3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 006c71da: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006c71dc:; BB(0x006c71dc);
    /* 006c71dc: mov edi, dword ptr [ebp - 0x214] */ r_edi = R32((u32)(r_ebp+0xfffffdecu));
    /* 006c71e2: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 006c71e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c71e7: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 006c71ea: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c71ec: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c71ee: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 006c71f0: mov byte ptr [esi + edi + 5], 0xff */ W8((u32)(r_esi+r_edi+0x5u), 0xffu);
    /* 006c71f5: lea ecx, [edi + esi + 0xc] */ r_ecx = (u32)(r_edi+r_esi+0xcu);
    /* 006c71f9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c71fb: mov byte ptr [esi + edi + 4], al */ W8((u32)(r_esi+r_edi+0x4u), (u8)r_eax);
    /* 006c71ff: mov dword ptr [esi + edi + 8], eax */ W32((u32)(r_esi+r_edi+0x8u), r_eax);
    /* 006c7203: mov byte ptr [esi + edi + 7], al */ W8((u32)(r_esi+r_edi+0x7u), (u8)r_eax);
    /* 006c7207: mov byte ptr [esi + edi + 6], al */ W8((u32)(r_esi+r_edi+0x6u), (u8)r_eax);
    /* 006c720b: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6c7210u); f_005d6a3c();
    /* 006c7210: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7213: cmp ebx, 0x1e */ {  u32 a = r_ebx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c7216: jl 0x6c71dc */ if ((fS!=fO)) goto L_006c71dc;
L_006c7218:; BB(0x006c7218);
    /* 006c7218: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c721e: mov dword ptr [ebp - 0x1ac], 0 */ W32((u32)(r_ebp+0xfffffe54u), 0x0u);
L_006c7228:; BB(0x006c7228);
    /* 006c7228: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c722d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7234: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
    /* 006c723e: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7243: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c7248u); f_008581c5();
    /* 006c7248: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c7249: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c724f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c7251: je 0x6c733d */ if (fZ) goto L_006c733d;
L_006c7257:; BB(0x006c7257);
    /* 006c7257: mov dword ptr [ebp - 0x1a4], 1 */ W32((u32)(r_ebp+0xfffffe5cu), 0x1u);
    /* 006c7261: mov dword ptr [ebp - 4], 6 */ W32((u32)(r_ebp+0xfffffffcu), 0x6u);
    /* 006c7268: mov ebx, dword ptr [ebp - 0x1a0] */ r_ebx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c726e: add ebx, 0x224 */ {  u32 a = r_ebx; u32 b = 0x224u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7274: mov esi, 0xc8 */ r_esi = 0xc8u;
L_006c7279:; BB(0x006c7279);
    /* 006c7279: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c727b: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6c7280u); f_006c8960();
    /* 006c7280: add ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006c7283: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 006c7286: jne 0x6c7279 */ if (!fZ) goto L_006c7279;
L_006c7288:; BB(0x006c7288);
    /* 006c7288: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c728e: mov dword ptr [ebp - 0x1a4], 0 */ W32((u32)(r_ebp+0xfffffe5cu), 0x0u);
L_006c7298:; BB(0x006c7298);
    /* 006c7298: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c729d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c72a4: mov dword ptr [ebp - 0x19c], 0 */ W32((u32)(r_ebp+0xfffffe64u), 0x0u);
    /* 006c72ae: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c72b3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c72b8u); f_008581c5();
    /* 006c72b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c72b9: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c72bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c72c1: je 0x6c7339 */ if (fZ) goto L_006c7339;
L_006c72c3:; BB(0x006c72c3);
    /* 006c72c3: mov dword ptr [ebp - 0x19c], 1 */ W32((u32)(r_ebp+0xfffffe64u), 0x1u);
    /* 006c72cd: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c72d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c72d5: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c72db: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c72e1: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c72e7: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c72ed: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c72f3: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c72f9: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c72ff: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c7305: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c730c: mov dword ptr [ebp - 0x19c], eax */ W32((u32)(r_ebp+0xfffffe64u), r_eax);
    /* 006c7312: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c7318:; BB(0x006c7318);
    /* 006c7318: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c731d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c7324: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c7329: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c732eu); f_008581c5();
    /* 006c732e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c732f: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c7334: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c7339:; BB(0x006c7339);
    /* 006c7339: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c733b: jmp 0x6c7318 */ goto L_006c7318;
L_006c733d:; BB(0x006c733d);
    /* 006c733d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c733f: jmp 0x6c7298 */ goto L_006c7298;
L_006c76d4:; BB(0x006c76d4);
    /* 006c76d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76d6: jmp 0x6c7228 */ goto L_006c7228;
L_006c76db:; BB(0x006c76db);
    /* 006c76db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c76dd: jmp 0x6c70ce */ goto L_006c70ce;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c46a0); r_esp += 4; return;
}

void f_006c4732(void)
{
    FN_ENTER(0x006c4732);
    /* 006c4732: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4737: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c473cu); f_008581c5();
    /* 006c473c: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006c4743: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c4748: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c474d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4752u); f_008581c5();
    /* 006c4752: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4755: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c475b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c475d: je 0x6c7359 */ if (fZ) goto L_006c7359;
L_006c4763:; BB(0x006c4763);
    /* 006c4763: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006c476a: mov dword ptr [ebp - 4], 0x68 */ W32((u32)(r_ebp+0xfffffffcu), 0x68u);
    /* 006c4771: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4777: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c477cu); f_006c4674();
    /* 006c477c: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4782: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006c4789:; BB(0x006c4789);
    /* 006c4789: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c478e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4795: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006c479c: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c47a1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c47a6u); f_008581c5();
    /* 006c47a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c47a7: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c47ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c47af: je 0x6c7352 */ if (fZ) goto L_006c7352;
L_006c47b5:; BB(0x006c47b5);
    /* 006c47b5: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006c47bc: mov dword ptr [ebp - 4], 0x69 */ W32((u32)(r_ebp+0xfffffffcu), 0x69u);
    /* 006c47c3: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c47c9: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c47ceu); f_006c454c();
    /* 006c47ce: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c47d4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006c47db:; BB(0x006c47db);
    /* 006c47db: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c47e0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c47e7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c47ee: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c47f3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c47f8u); f_008581c5();
    /* 006c47f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c47f9: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c47ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4801: je 0x6c734b */ if (fZ) goto L_006c734b;
L_006c4807:; BB(0x006c4807);
    /* 006c4807: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006c480e: mov dword ptr [ebp - 4], 0x6a */ W32((u32)(r_ebp+0xfffffffcu), 0x6au);
    /* 006c4815: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c481a: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c481f: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4825: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4827: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c482a: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c482f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4830: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c4835u); f_00858736();
    /* 006c4835: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c483b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006c4842:; BB(0x006c4842);
    /* 006c4842: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c4847: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c484e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006c4855: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c485a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c485fu); f_008581c5();
    /* 006c485f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4860: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c4866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4868: je 0x6c7344 */ if (fZ) goto L_006c7344;
L_006c486e:; BB(0x006c486e);
    /* 006c486e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006c4875: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c487b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c487d: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c4883: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c4889: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c488f: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c4895: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c489b: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c48a1: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c48a7: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c48ad: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c48b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c48b7: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c48bd:; BB(0x006c48bd);
    /* 006c48bd: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c48c2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c48c9: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7344:; BB(0x006c7344);
    /* 006c7344: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7346: jmp 0x6c48bd */ goto L_006c48bd;
L_006c734b:; BB(0x006c734b);
    /* 006c734b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c734d: jmp 0x6c4842 */ goto L_006c4842;
L_006c7352:; BB(0x006c7352);
    /* 006c7352: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7354: jmp 0x6c47db */ goto L_006c47db;
L_006c7359:; BB(0x006c7359);
    /* 006c7359: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c735b: jmp 0x6c4789 */ goto L_006c4789;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c4732); r_esp += 4; return;
}

void f_006c48ce(void)
{
    FN_ENTER(0x006c48ce);
    /* 006c48ce: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c48d3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c48d8u); f_008581c5();
    /* 006c48d8: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 006c48df: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c48e4: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c48e9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c48eeu); f_008581c5();
    /* 006c48ee: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c48f1: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c48f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c48f9: je 0x6c7375 */ if (fZ) goto L_006c7375;
L_006c48ff:; BB(0x006c48ff);
    /* 006c48ff: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 006c4906: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c490c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c490e: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c4914: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c491a: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c4920: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c4926: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c492c: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c4932: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c4938: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c493e: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c4945: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 006c4948: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c494e:; BB(0x006c494e);
    /* 006c494e: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c4953: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c495a: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 006c4961: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4966: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c496bu); f_008581c5();
    /* 006c496b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c496c: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c4972: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4974: je 0x6c736e */ if (fZ) goto L_006c736e;
L_006c497a:; BB(0x006c497a);
    /* 006c497a: mov dword ptr [ebp - 0x40], 1 */ W32((u32)(r_ebp+0xffffffc0u), 0x1u);
    /* 006c4981: mov dword ptr [ebp - 4], 0x65 */ W32((u32)(r_ebp+0xfffffffcu), 0x65u);
    /* 006c4988: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c498d: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4992: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4998: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c499a: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c499d: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c49a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c49a3: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c49a8u); f_00858736();
    /* 006c49a8: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c49ae: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
L_006c49b5:; BB(0x006c49b5);
    /* 006c49b5: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c49ba: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c49c1: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006c49c8: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c49cd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c49d2u); f_008581c5();
    /* 006c49d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c49d3: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c49d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c49db: je 0x6c7367 */ if (fZ) goto L_006c7367;
L_006c49e1:; BB(0x006c49e1);
    /* 006c49e1: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006c49e8: mov dword ptr [ebp - 4], 0x66 */ W32((u32)(r_ebp+0xfffffffcu), 0x66u);
    /* 006c49ef: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c49f5: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c49fau); f_006c454c();
    /* 006c49fa: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4a00: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006c4a07:; BB(0x006c4a07);
    /* 006c4a07: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c4a0c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4a13: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 006c4a1a: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4a1f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4a24u); f_008581c5();
    /* 006c4a24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4a25: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c4a2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4a2d: je 0x6c7360 */ if (fZ) goto L_006c7360;
L_006c4a33:; BB(0x006c4a33);
    /* 006c4a33: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 006c4a3a: mov dword ptr [ebp - 4], 0x67 */ W32((u32)(r_ebp+0xfffffffcu), 0x67u);
    /* 006c4a41: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4a47: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c4a4cu); f_006c4674();
    /* 006c4a4c: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4a52: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_006c4a59:; BB(0x006c4a59);
    /* 006c4a59: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c4a5e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4a65: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7360:; BB(0x006c7360);
    /* 006c7360: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7362: jmp 0x6c4a59 */ goto L_006c4a59;
L_006c7367:; BB(0x006c7367);
    /* 006c7367: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7369: jmp 0x6c4a07 */ goto L_006c4a07;
L_006c736e:; BB(0x006c736e);
    /* 006c736e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7370: jmp 0x6c49b5 */ goto L_006c49b5;
L_006c7375:; BB(0x006c7375);
    /* 006c7375: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7377: jmp 0x6c494e */ goto L_006c494e;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c48ce); r_esp += 4; return;
}

void f_006c4a6a(void)
{
    FN_ENTER(0x006c4a6a);
    /* 006c4a6a: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4a6f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4a74u); f_008581c5();
    /* 006c4a74: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
    /* 006c4a7b: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c4a80: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4a85: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4a8au); f_008581c5();
    /* 006c4a8a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4a8d: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c4a93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4a95: je 0x6c7391 */ if (fZ) goto L_006c7391;
L_006c4a9b:; BB(0x006c4a9b);
    /* 006c4a9b: mov dword ptr [ebp - 0x54], 1 */ W32((u32)(r_ebp+0xffffffacu), 0x1u);
    /* 006c4aa2: mov dword ptr [ebp - 4], 0x60 */ W32((u32)(r_ebp+0xfffffffcu), 0x60u);
    /* 006c4aa9: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4aae: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4ab3: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4ab9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4abb: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4abe: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4ac3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4ac4: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c4ac9u); f_00858736();
    /* 006c4ac9: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4acf: mov dword ptr [ebp - 0x54], 0 */ W32((u32)(r_ebp+0xffffffacu), 0x0u);
L_006c4ad6:; BB(0x006c4ad6);
    /* 006c4ad6: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c4adb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4ae2: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 006c4ae9: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4aee: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4af3u); f_008581c5();
    /* 006c4af3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4af4: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c4afa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4afc: je 0x6c738a */ if (fZ) goto L_006c738a;
L_006c4b02:; BB(0x006c4b02);
    /* 006c4b02: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 006c4b09: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c4b0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4b11: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c4b17: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c4b1d: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c4b23: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c4b29: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c4b2f: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c4b35: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c4b3b: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c4b41: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c4b48: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 006c4b4b: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c4b51:; BB(0x006c4b51);
    /* 006c4b51: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c4b56: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4b5d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006c4b64: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4b69: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4b6eu); f_008581c5();
    /* 006c4b6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4b6f: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c4b75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4b77: je 0x6c7383 */ if (fZ) goto L_006c7383;
L_006c4b7d:; BB(0x006c4b7d);
    /* 006c4b7d: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006c4b84: mov dword ptr [ebp - 4], 0x62 */ W32((u32)(r_ebp+0xfffffffcu), 0x62u);
    /* 006c4b8b: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4b91: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c4b96u); f_006c454c();
    /* 006c4b96: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4b9c: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_006c4ba3:; BB(0x006c4ba3);
    /* 006c4ba3: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c4ba8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4baf: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 006c4bb6: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4bbb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4bc0u); f_008581c5();
    /* 006c4bc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4bc1: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c4bc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4bc9: je 0x6c737c */ if (fZ) goto L_006c737c;
L_006c4bcf:; BB(0x006c4bcf);
    /* 006c4bcf: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
    /* 006c4bd6: mov dword ptr [ebp - 4], 0x63 */ W32((u32)(r_ebp+0xfffffffcu), 0x63u);
    /* 006c4bdd: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4be3: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c4be8u); f_006c4674();
    /* 006c4be8: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4bee: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
L_006c4bf5:; BB(0x006c4bf5);
    /* 006c4bf5: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c4bfa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4c01: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c737c:; BB(0x006c737c);
    /* 006c737c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c737e: jmp 0x6c4bf5 */ goto L_006c4bf5;
L_006c7383:; BB(0x006c7383);
    /* 006c7383: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7385: jmp 0x6c4ba3 */ goto L_006c4ba3;
L_006c738a:; BB(0x006c738a);
    /* 006c738a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c738c: jmp 0x6c4b51 */ goto L_006c4b51;
L_006c7391:; BB(0x006c7391);
    /* 006c7391: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c7393: jmp 0x6c4ad6 */ goto L_006c4ad6;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c4a6a); r_esp += 4; return;
}

void f_006c4c06(void)
{
    FN_ENTER(0x006c4c06);
    /* 006c4c06: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4c0b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4c10u); f_008581c5();
    /* 006c4c10: mov dword ptr [ebp - 0x64], 0 */ W32((u32)(r_ebp+0xffffff9cu), 0x0u);
    /* 006c4c17: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c4c1c: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4c21: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4c26u); f_008581c5();
    /* 006c4c26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4c29: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c4c2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4c31: je 0x6c73ad */ if (fZ) goto L_006c73ad;
L_006c4c37:; BB(0x006c4c37);
    /* 006c4c37: mov dword ptr [ebp - 0x64], 1 */ W32((u32)(r_ebp+0xffffff9cu), 0x1u);
    /* 006c4c3e: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c4c44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4c46: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c4c4c: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c4c52: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c4c58: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c4c5e: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c4c64: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c4c6a: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c4c70: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c4c76: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c4c7d: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 006c4c80: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c4c86:; BB(0x006c4c86);
    /* 006c4c86: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c4c8b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4c92: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 006c4c99: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4c9e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4ca3u); f_008581c5();
    /* 006c4ca3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4ca4: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c4caa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4cac: je 0x6c73a6 */ if (fZ) goto L_006c73a6;
L_006c4cb2:; BB(0x006c4cb2);
    /* 006c4cb2: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 006c4cb9: mov dword ptr [ebp - 4], 0x5d */ W32((u32)(r_ebp+0xfffffffcu), 0x5du);
    /* 006c4cc0: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4cc5: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4cca: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4cd0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4cd2: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4cd5: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4cdb: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c4ce0u); f_00858736();
    /* 006c4ce0: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4ce6: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_006c4ced:; BB(0x006c4ced);
    /* 006c4ced: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c4cf2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4cf9: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006c4d00: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4d05: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4d0au); f_008581c5();
    /* 006c4d0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4d0b: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c4d11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4d13: je 0x6c739f */ if (fZ) goto L_006c739f;
L_006c4d19:; BB(0x006c4d19);
    /* 006c4d19: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 006c4d20: mov dword ptr [ebp - 4], 0x5e */ W32((u32)(r_ebp+0xfffffffcu), 0x5eu);
    /* 006c4d27: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4d2d: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c4d32u); f_006c454c();
    /* 006c4d32: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4d38: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
L_006c4d3f:; BB(0x006c4d3f);
    /* 006c4d3f: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c4d44: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4d4b: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 006c4d52: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4d57: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4d5cu); f_008581c5();
    /* 006c4d5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4d5d: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c4d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4d65: je 0x6c7398 */ if (fZ) goto L_006c7398;
L_006c4d6b:; BB(0x006c4d6b);
    /* 006c4d6b: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 006c4d72: mov dword ptr [ebp - 4], 0x5f */ W32((u32)(r_ebp+0xfffffffcu), 0x5fu);
    /* 006c4d79: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4d7f: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c4d84u); f_006c4674();
    /* 006c4d84: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4d8a: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_006c4d91:; BB(0x006c4d91);
    /* 006c4d91: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c4d96: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4d9d: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c7398:; BB(0x006c7398);
    /* 006c7398: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c739a: jmp 0x6c4d91 */ goto L_006c4d91;
L_006c739f:; BB(0x006c739f);
    /* 006c739f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73a1: jmp 0x6c4d3f */ goto L_006c4d3f;
L_006c73a6:; BB(0x006c73a6);
    /* 006c73a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73a8: jmp 0x6c4ced */ goto L_006c4ced;
L_006c73ad:; BB(0x006c73ad);
    /* 006c73ad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73af: jmp 0x6c4c86 */ goto L_006c4c86;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c4c06); r_esp += 4; return;
}

void f_006c4da2(void)
{
    FN_ENTER(0x006c4da2);
    /* 006c4da2: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4da7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4dacu); f_008581c5();
    /* 006c4dac: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 006c4db3: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c4db8: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4dbd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4dc2u); f_008581c5();
    /* 006c4dc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4dc5: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c4dcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4dcd: je 0x6c73c9 */ if (fZ) goto L_006c73c9;
L_006c4dd3:; BB(0x006c4dd3);
    /* 006c4dd3: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 006c4dda: mov dword ptr [ebp - 4], 0x58 */ W32((u32)(r_ebp+0xfffffffcu), 0x58u);
    /* 006c4de1: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4de6: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4deb: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4df1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4df3: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4df6: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4dfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4dfc: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c4e01u); f_00858736();
    /* 006c4e01: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4e07: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_006c4e0e:; BB(0x006c4e0e);
    /* 006c4e0e: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c4e13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4e1a: mov dword ptr [ebp - 0x70], 0 */ W32((u32)(r_ebp+0xffffff90u), 0x0u);
    /* 006c4e21: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4e26: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4e2bu); f_008581c5();
    /* 006c4e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4e2c: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c4e32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4e34: je 0x6c73c2 */ if (fZ) goto L_006c73c2;
L_006c4e3a:; BB(0x006c4e3a);
    /* 006c4e3a: mov dword ptr [ebp - 0x70], 1 */ W32((u32)(r_ebp+0xffffff90u), 0x1u);
    /* 006c4e41: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c4e47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4e49: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c4e4f: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c4e55: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c4e5b: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c4e61: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c4e67: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c4e6d: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c4e73: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c4e79: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c4e80: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 006c4e83: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c4e89:; BB(0x006c4e89);
    /* 006c4e89: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c4e8e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4e95: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
    /* 006c4e9c: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c4ea1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4ea6u); f_008581c5();
    /* 006c4ea6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4ea7: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c4ead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4eaf: je 0x6c73bb */ if (fZ) goto L_006c73bb;
L_006c4eb5:; BB(0x006c4eb5);
    /* 006c4eb5: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 006c4ebc: mov dword ptr [ebp - 4], 0x5a */ W32((u32)(r_ebp+0xfffffffcu), 0x5au);
    /* 006c4ec3: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4ec9: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c4eceu); f_006c454c();
    /* 006c4ece: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c4ed4: mov dword ptr [ebp - 0x6c], 0 */ W32((u32)(r_ebp+0xffffff94u), 0x0u);
L_006c4edb:; BB(0x006c4edb);
    /* 006c4edb: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c4ee0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4ee7: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
    /* 006c4eee: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4ef3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4ef8u); f_008581c5();
    /* 006c4ef8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4ef9: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c4eff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4f01: je 0x6c73b4 */ if (fZ) goto L_006c73b4;
L_006c4f07:; BB(0x006c4f07);
    /* 006c4f07: mov dword ptr [ebp - 0x68], 1 */ W32((u32)(r_ebp+0xffffff98u), 0x1u);
    /* 006c4f0e: mov dword ptr [ebp - 4], 0x5b */ W32((u32)(r_ebp+0xfffffffcu), 0x5bu);
    /* 006c4f15: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4f1b: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c4f20u); f_006c4674();
    /* 006c4f20: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c4f26: mov dword ptr [ebp - 0x68], 0 */ W32((u32)(r_ebp+0xffffff98u), 0x0u);
L_006c4f2d:; BB(0x006c4f2d);
    /* 006c4f2d: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c4f32: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4f39: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c73b4:; BB(0x006c73b4);
    /* 006c73b4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73b6: jmp 0x6c4f2d */ goto L_006c4f2d;
L_006c73bb:; BB(0x006c73bb);
    /* 006c73bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73bd: jmp 0x6c4edb */ goto L_006c4edb;
L_006c73c2:; BB(0x006c73c2);
    /* 006c73c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73c4: jmp 0x6c4e89 */ goto L_006c4e89;
L_006c73c9:; BB(0x006c73c9);
    /* 006c73c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73cb: jmp 0x6c4e0e */ goto L_006c4e0e;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c4da2); r_esp += 4; return;
}

void f_006c4f3e(void)
{
    FN_ENTER(0x006c4f3e);
    /* 006c4f3e: push 0xd590 */ { u32 v = 0xd590u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f43: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4f48u); f_008581c5();
    /* 006c4f48: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 006c4f52: mov dword ptr [0xa95df4], eax */ W32((u32)(0xa95df4u), r_eax);
    /* 006c4f57: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f5c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4f61u); f_008581c5();
    /* 006c4f61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c4f64: mov dword ptr [ebp - 0x1b0], eax */ W32((u32)(r_ebp+0xfffffe50u), r_eax);
    /* 006c4f6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4f6c: je 0x6c73e5 */ if (fZ) goto L_006c73e5;
L_006c4f72:; BB(0x006c4f72);
    /* 006c4f72: mov dword ptr [ebp - 0x84], 1 */ W32((u32)(r_ebp+0xffffff7cu), 0x1u);
    /* 006c4f7c: mov dword ptr [ebp - 4], 0x54 */ W32((u32)(r_ebp+0xfffffffcu), 0x54u);
    /* 006c4f83: push 0x6c1940 */ { u32 v = 0x6c1940u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f88: push 0x6c17f0 */ { u32 v = 0x6c17f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f8d: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4f93: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f95: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c4f98: push 0x2ea4 */ { u32 v = 0x2ea4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c4f9e: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6c4fa3u); f_00858736();
    /* 006c4fa3: mov eax, dword ptr [ebp - 0x1b0] */ r_eax = R32((u32)(r_ebp+0xfffffe50u));
    /* 006c4fa9: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
L_006c4fb3:; BB(0x006c4fb3);
    /* 006c4fb3: mov dword ptr [0xa95e44], eax */ W32((u32)(0xa95e44u), r_eax);
    /* 006c4fb8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c4fbf: mov dword ptr [ebp - 0x80], 0 */ W32((u32)(r_ebp+0xffffff80u), 0x0u);
    /* 006c4fc6: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c4fcb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c4fd0u); f_008581c5();
    /* 006c4fd0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c4fd1: mov dword ptr [ebp - 0x198], eax */ W32((u32)(r_ebp+0xfffffe68u), r_eax);
    /* 006c4fd7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c4fd9: je 0x6c73de */ if (fZ) goto L_006c73de;
L_006c4fdf:; BB(0x006c4fdf);
    /* 006c4fdf: mov dword ptr [ebp - 0x80], 1 */ W32((u32)(r_ebp+0xffffff80u), 0x1u);
    /* 006c4fe6: mov esi, dword ptr [ebp - 0x198] */ r_esi = R32((u32)(r_ebp+0xfffffe68u));
    /* 006c4fec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c4fee: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c4ff4: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c4ffa: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c5000: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c5006: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c500c: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c5012: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c5018: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c501e: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c5025: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 006c5028: mov eax, dword ptr [ebp - 0x198] */ r_eax = R32((u32)(r_ebp+0xfffffe68u));
L_006c502e:; BB(0x006c502e);
    /* 006c502e: mov dword ptr [0xa95df0], eax */ W32((u32)(0xa95df0u), r_eax);
    /* 006c5033: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c503a: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 006c5041: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c5046: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c504bu); f_008581c5();
    /* 006c504b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c504c: mov dword ptr [ebp - 0x1a8], eax */ W32((u32)(r_ebp+0xfffffe58u), r_eax);
    /* 006c5052: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c5054: je 0x6c73d7 */ if (fZ) goto L_006c73d7;
L_006c505a:; BB(0x006c505a);
    /* 006c505a: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 006c5061: mov dword ptr [ebp - 4], 0x56 */ W32((u32)(r_ebp+0xfffffffcu), 0x56u);
    /* 006c5068: mov ecx, dword ptr [ebp - 0x1a8] */ r_ecx = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c506e: call 0x6c454c */ r_esp -= 4; W32(r_esp, 0x6c5073u); f_006c454c();
    /* 006c5073: mov eax, dword ptr [ebp - 0x1a8] */ r_eax = R32((u32)(r_ebp+0xfffffe58u));
    /* 006c5079: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_006c5080:; BB(0x006c5080);
    /* 006c5080: mov dword ptr [0xa95dfc], eax */ W32((u32)(0xa95dfcu), r_eax);
    /* 006c5085: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c508c: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
    /* 006c5093: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c5098: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c509du); f_008581c5();
    /* 006c509d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c509e: mov dword ptr [ebp - 0x1a0], eax */ W32((u32)(r_ebp+0xfffffe60u), r_eax);
    /* 006c50a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c50a6: je 0x6c73d0 */ if (fZ) goto L_006c73d0;
L_006c50ac:; BB(0x006c50ac);
    /* 006c50ac: mov dword ptr [ebp - 0x78], 1 */ W32((u32)(r_ebp+0xffffff88u), 0x1u);
    /* 006c50b3: mov dword ptr [ebp - 4], 0x57 */ W32((u32)(r_ebp+0xfffffffcu), 0x57u);
    /* 006c50ba: mov ecx, dword ptr [ebp - 0x1a0] */ r_ecx = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c50c0: call 0x6c4674 */ r_esp -= 4; W32(r_esp, 0x6c50c5u); f_006c4674();
    /* 006c50c5: mov eax, dword ptr [ebp - 0x1a0] */ r_eax = R32((u32)(r_ebp+0xfffffe60u));
    /* 006c50cb: mov dword ptr [ebp - 0x78], 0 */ W32((u32)(r_ebp+0xffffff88u), 0x0u);
L_006c50d2:; BB(0x006c50d2);
    /* 006c50d2: mov dword ptr [0xa95df8], eax */ W32((u32)(0xa95df8u), r_eax);
    /* 006c50d7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c50de: jmp 0x6c6b1e */ goto L_006c6b1e;
L_006c6b1e:; BB(0x006c6b1e);
    /* 006c6b1e: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b25: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b2b: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b30u); f_0086b688();
    /* 006c6b30: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b35: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b37: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b3d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b42u); f_0086b688();
    /* 006c6b42: push 0xbaa4 */ { u32 v = 0xbaa4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b47: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b49: push dword ptr [0xa95e44] */ { u32 v = R32((u32)(0xa95e44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b4f: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x6c6b54u); f_0086b5cc();
    /* 006c6b54: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b59: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c6b5b: push dword ptr [0xa95df0] */ { u32 v = R32((u32)(0xa95df0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c6b61: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c6b66u); f_0086b688();
    /* 006c6b66: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c6b69: call 0x6c78a0 */ r_esp -= 4; W32(r_esp, 0x6c6b6eu); f_006c78a0();
    /* 006c6b6e: mov dword ptr [0xa95dd4], 5 */ W32((u32)(0xa95dd4u), 0x5u);
    /* 006c6b78: mov dword ptr [0xa95dd0], 6 */ W32((u32)(0xa95dd0u), 0x6u);
    /* 006c6b82: mov dword ptr [0xa95dc8], 3 */ W32((u32)(0xa95dc8u), 0x3u);
    /* 006c6b8c: call 0x6c79c0 */ r_esp -= 4; W32(r_esp, 0x6c6b91u); f_006c79c0();
    /* 006c6b91: call 0x6c7988 */ r_esp -= 4; W32(r_esp, 0x6c6b96u); f_006c7988();
    /* 006c6b96: call 0x6c7950 */ r_esp -= 4; W32(r_esp, 0x6c6b9bu); f_006c7950();
    /* 006c6b9b: mov dword ptr [0xa95de0], 0 */ W32((u32)(0xa95de0u), 0x0u);
    /* 006c6ba5: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6baau); f_00415cec();
    /* 006c6baa: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bad: mov dword ptr [0xa95ddc], eax */ W32((u32)(0xa95ddcu), r_eax);
    /* 006c6bb2: call 0x415cec */ r_esp -= 4; W32(r_esp, 0x6c6bb7u); f_00415cec();
    /* 006c6bb7: mov edx, dword ptr [0xa95df0] */ r_edx = R32((u32)(0xa95df0u));
    /* 006c6bbd: mov ecx, dword ptr [edx + 0x110] */ r_ecx = R32((u32)(r_edx+0x110u));
    /* 006c6bc3: mov dword ptr [0xa95dc4], ecx */ W32((u32)(0xa95dc4u), r_ecx);
    /* 006c6bc9: mov dword ptr [0xa95dc0], ecx */ W32((u32)(0xa95dc0u), r_ecx);
    /* 006c6bcf: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006c6bd2: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c6bd7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c6bd9:; BB(0x006c6bd9);
    /* 006c6bd9: mov byte ptr [ebp + eax - 0x24], 0 */ W8((u32)(r_ebp+r_eax+0xffffffdcu), 0x0u);
    /* 006c6bde: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c6be1: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006c6be4: jl 0x6c6bd9 */ if ((fS!=fO)) goto L_006c6bd9;
L_006c6be6:; BB(0x006c6be6);
    /* 006c6be6: jmp 0x6c76e2 */ goto L_006c76e2;
L_006c73d0:; BB(0x006c73d0);
    /* 006c73d0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73d2: jmp 0x6c50d2 */ goto L_006c50d2;
L_006c73d7:; BB(0x006c73d7);
    /* 006c73d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73d9: jmp 0x6c5080 */ goto L_006c5080;
L_006c73de:; BB(0x006c73de);
    /* 006c73de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73e0: jmp 0x6c502e */ goto L_006c502e;
L_006c73e5:; BB(0x006c73e5);
    /* 006c73e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c73e7: jmp 0x6c4fb3 */ goto L_006c4fb3;
L_006c76e2:; BB(0x006c76e2);
    /* 006c76e2: movsx eax, byte ptr [ebp - 0x22] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdeu));
    /* 006c76e6: movsx esi, byte ptr [ebp - 0x21] */ r_esi = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffdfu));
    /* 006c76ea: movzx edi, byte ptr [ebp - 0x24] */ r_edi = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 006c76ee: movsx edx, byte ptr [ebp - 0x23] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffddu));
    /* 006c76f2: movsx ebx, byte ptr [ebp - 0x20] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe0u));
    /* 006c76f6: mov dword ptr [0xa95db0], 1 */ W32((u32)(0xa95db0u), 0x1u);
    /* 006c7700: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 006c7703: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006c7706: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7708: movsx edx, byte ptr [ebp - 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffe1u));
    /* 006c770c: mov ecx, eax */ r_ecx = r_eax;
    /* 006c770e: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 006c7711: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7713: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 006c7715: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c7718: mov dword ptr [0xa95db8], edi */ W32((u32)(0xa95db8u), r_edi);
    /* 006c771e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c7721: shl esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 006c7724: or eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7726: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c7729: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c772c: or eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c772e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006c7731: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c7733: mov dword ptr [0xa95dbc], eax */ W32((u32)(0xa95dbcu), r_eax);
    /* 006c7738: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c773a: mov dword ptr [0xa95db4], eax */ W32((u32)(0xa95db4u), r_eax);
    /* 006c773f: mov dword ptr [0xa95dac], eax */ W32((u32)(0xa95dacu), r_eax);
    /* 006c7744: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c7747: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c774e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c7750: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c7751: ret  */ FN_RET(0x006c4f3e); r_esp += 4; return;
}

