#include "protos.h"

void f_0058c178(void) /* sub_58C178 */
{
    FN_ENTER(0x0058c178);
    /* 0058c178: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0058c17f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c182: je 0x58c190 */ if (fZ) goto L_0058c190;
L_0058c184:; BB(0x0058c184);
    /* 0058c184: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c187: je 0x58c190 */ if (fZ) goto L_0058c190;
L_0058c189:; BB(0x0058c189);
    /* 0058c189: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c18b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58c190u); f_0051f62c();
L_0058c190:; BB(0x0058c190);
    /* 0058c190: ret  */ FN_RET(0x0058c178); r_esp += 4; return;
}

void f_0058c180(void)
{
    FN_ENTER(0x0058c180);
    /* 0058c180: clc  */ fC = 0;
    /* 0058c181: pop es */ UNSUP(0x0058c181, "pop es");
    /* 0058c182: je 0x58c190 */ if (fZ) goto L_0058c190;
L_0058c184:; BB(0x0058c184);
    /* 0058c184: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c187: je 0x58c190 */ if (fZ) goto L_0058c190;
L_0058c189:; BB(0x0058c189);
    /* 0058c189: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c18b: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x58c190u); f_0051f62c();
L_0058c190:; BB(0x0058c190);
    /* 0058c190: ret  */ FN_RET(0x0058c180); r_esp += 4; return;
}

void f_0058c194(void) /* sub_58C194 */
{
    FN_ENTER(0x0058c194);
    /* 0058c194: mov edx, dword ptr [0xa743e4] */ r_edx = R32((u32)(0xa743e4u));
    /* 0058c19a: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 0058c19d: ret  */ FN_RET(0x0058c194); r_esp += 4; return;
}

void f_0058c1a0(void) /* sub_58C1A0 */
{
    FN_ENTER(0x0058c1a0);
    /* 0058c1a0: mov edx, dword ptr [0xa743e4] */ r_edx = R32((u32)(0xa743e4u));
    /* 0058c1a6: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 0058c1a9: ret  */ FN_RET(0x0058c1a0); r_esp += 4; return;
}

void f_0058c1ac(void) /* sub_58C1AC */
{
    FN_ENTER(0x0058c1ac);
    /* 0058c1ac: mov edx, dword ptr [0xa743e4] */ r_edx = R32((u32)(0xa743e4u));
    /* 0058c1b2: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 0058c1b5: ret  */ FN_RET(0x0058c1ac); r_esp += 4; return;
}

void f_0058c1b8(void) /* sub_58C1B8 */
{
    FN_ENTER(0x0058c1b8);
    /* 0058c1b8: mov edx, dword ptr [0xa743e4] */ r_edx = R32((u32)(0xa743e4u));
    /* 0058c1be: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0058c1c1: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0058c1c4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058c1c6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058c1c8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058c1ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058c1cc: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0058c1ce: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c1d0: mov eax, edx */ r_eax = r_edx;
    /* 0058c1d2: ret  */ FN_RET(0x0058c1b8); r_esp += 4; return;
}

void f_0058c1d4(void) /* sub_58C1D4 */
{
    FN_ENTER(0x0058c1d4);
    /* 0058c1d4: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0058c1db: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c1de: je 0x58c1e8 */ if (fZ) goto L_0058c1e8;
L_0058c1e0:; BB(0x0058c1e0);
    /* 0058c1e0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c1e3: je 0x58c1e8 */ if (fZ) goto L_0058c1e8;
L_0058c1e5:; BB(0x0058c1e5);
    /* 0058c1e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c1e7: ret  */ FN_RET(0x0058c1d4); r_esp += 4; return;
L_0058c1e8:; BB(0x0058c1e8);
    /* 0058c1e8: mov eax, 1 */ r_eax = 0x1u;
    /* 0058c1ed: ret  */ FN_RET(0x0058c1d4); r_esp += 4; return;
}

void f_0058c1f0(void) /* sub_58C1F0 */
{
    FN_ENTER(0x0058c1f0);
    /* 0058c1f0: movsx edx, word ptr [ecx + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0058c1f7: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0058c1fa: mov eax, 0 */ r_eax = 0x0u;
    /* 0058c1ff: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0058c202: ret  */ FN_RET(0x0058c1f0); r_esp += 4; return;
}

void f_0058c204(void) /* sub_58C204 */
{
    FN_ENTER(0x0058c204);
    /* 0058c204: mov eax, dword ptr [ecx + 0x47c] */ r_eax = R32((u32)(r_ecx+0x47cu));
    /* 0058c20a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c20c: je 0x58c216 */ if (fZ) goto L_0058c216;
L_0058c20e:; BB(0x0058c20e);
    /* 0058c20e: movzx eax, word ptr [ecx + 0x394] */ r_eax = (u32)R16((u32)(r_ecx+0x394u));
    /* 0058c215: ret  */ FN_RET(0x0058c204); r_esp += 4; return;
L_0058c216:; BB(0x0058c216);
    /* 0058c216: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0058c21b: ret  */ FN_RET(0x0058c204); r_esp += 4; return;
}

void f_0058c250(void) /* sub_58C250 */
{
    FN_ENTER(0x0058c250);
    /* 0058c250: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c251: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058c253: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c255: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x58c25au); f_00521840();
    /* 0058c25a: mov ecx, dword ptr [0xa743e0] */ r_ecx = R32((u32)(0xa743e0u));
    /* 0058c260: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c262: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0058c268: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0058c26b: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 0058c26e: push 0x9bf840 */ { u32 v = 0x9bf840u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c273: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0058c279: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 0058c27c: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 0058c27f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c281: call 0x51ff3c */ r_esp -= 4; W32(r_esp, 0x58c286u); f_0051ff3c();
    /* 0058c286: mov eax, dword ptr [0xa743e0] */ r_eax = R32((u32)(0xa743e0u));
    /* 0058c28b: mov dword ptr [ebx + 0xd8], 0x9bf7c0 */ W32((u32)(r_ebx+0xd8u), 0x9bf7c0u);
    /* 0058c295: mov edx, dword ptr [eax + 0x430] */ r_edx = R32((u32)(r_eax+0x430u));
    /* 0058c29b: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 0058c2a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058c2a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c2a4: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0058c2ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c2ad: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x58c2b2u); f_007aa4c8();
    /* 0058c2b2: push dword ptr [0xa743e8] */ { u32 v = R32((u32)(0xa743e8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c2b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c2ba: movzx eax, word ptr [ebx + 0xb8] */ r_eax = (u32)R16((u32)(r_ebx+0xb8u));
    /* 0058c2c1: push dword ptr [0xa743ec] */ { u32 v = R32((u32)(0xa743ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c2c7: push dword ptr [0xa743f0] */ { u32 v = R32((u32)(0xa743f0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c2cd: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 0058c2d4: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x58c2d9u); f_00520c70();
    /* 0058c2d9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c2db: call 0x520370 */ r_esp -= 4; W32(r_esp, 0x58c2e0u); f_00520370();
    /* 0058c2e0: mov dword ptr [ebx + 0x358], 0x9bf824 */ W32((u32)(r_ebx+0x358u), 0x9bf824u);
    /* 0058c2ea: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c2ec: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c2ee: call 0x520390 */ r_esp -= 4; W32(r_esp, 0x58c2f3u); f_00520390();
    /* 0058c2f3: mov dword ptr [ebx + 0x384], 0x40a00000 */ W32((u32)(r_ebx+0x384u), 0x40a00000u);
    /* 0058c2fd: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058c2ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c301: call 0x521820 */ r_esp -= 4; W32(r_esp, 0x58c306u); f_00521820();
    /* 0058c306: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0058c308: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c30a: call 0x5217fc */ r_esp -= 4; W32(r_esp, 0x58c30fu); f_005217fc();
    /* 0058c30f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c311: call 0x520bdc */ r_esp -= 4; W32(r_esp, 0x58c316u); f_00520bdc();
    /* 0058c316: mov eax, dword ptr [ebx + 0x30] */ r_eax = R32((u32)(r_ebx+0x30u));
    /* 0058c319: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058c31c: mov dword ptr [ebx + 0x44c], 2 */ W32((u32)(r_ebx+0x44cu), 0x2u);
    /* 0058c326: mov dword ptr [ebx + 0x450], edx */ W32((u32)(r_ebx+0x450u), r_edx);
    /* 0058c32c: mov dword ptr [ebx + 0x454], 0 */ W32((u32)(r_ebx+0x454u), 0x0u);
    /* 0058c336: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058c33b: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0058c33e: mov dword ptr [ebx + 0x458], 0 */ W32((u32)(r_ebx+0x458u), 0x0u);
    /* 0058c348: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c34a: mov dword ptr [ebx + 0x45c], 0 */ W32((u32)(r_ebx+0x45cu), 0x0u);
    /* 0058c354: mov dword ptr [ebx + 0x460], 0 */ W32((u32)(r_ebx+0x460u), 0x0u);
    /* 0058c35e: mov dword ptr [ebx + 0x464], 0 */ W32((u32)(r_ebx+0x464u), 0x0u);
    /* 0058c368: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x58c36du); f_00520bf4();
    /* 0058c36d: fld dword ptr [0x928914] */ FPUSH(R_F32((u32)(0x928914u)));
    /* 0058c373: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058c375: fadd dword ptr [0x928918] */ ST(0) = ST(0) + R_F32((u32)(0x928918u));
    /* 0058c37b: fstp dword ptr [ebx + 0x468] */ W_F32((u32)(r_ebx+0x468u), ST(0)); FPOP();
    /* 0058c381: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c383: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x58c388u); f_00520bf4();
    /* 0058c388: fld dword ptr [0x92890c] */ FPUSH(R_F32((u32)(0x92890cu)));
    /* 0058c38e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058c390: fadd dword ptr [0x928910] */ ST(0) = ST(0) + R_F32((u32)(0x928910u));
    /* 0058c396: fstp dword ptr [ebx + 0x46c] */ W_F32((u32)(r_ebx+0x46cu), ST(0)); FPOP();
    /* 0058c39c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c39e: call 0x520bf4 */ r_esp -= 4; W32(r_esp, 0x58c3a3u); f_00520bf4();
    /* 0058c3a3: fld dword ptr [0x928904] */ FPUSH(R_F32((u32)(0x928904u)));
    /* 0058c3a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058c3ab: fadd dword ptr [0x928908] */ ST(0) = ST(0) + R_F32((u32)(0x928908u));
    /* 0058c3b1: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0058c3b4: fstp dword ptr [ebx + 0x470] */ W_F32((u32)(r_ebx+0x470u), ST(0)); FPOP();
    /* 0058c3ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058c3bc: mov dword ptr [ebx + 0x47c], eax */ W32((u32)(r_ebx+0x47cu), r_eax);
    /* 0058c3c2: mov dword ptr [ebx + 0x480], eax */ W32((u32)(r_ebx+0x480u), r_eax);
    /* 0058c3c8: mov dword ptr [ebx + 0x484], eax */ W32((u32)(r_ebx+0x484u), r_eax);
    /* 0058c3ce: mov dword ptr [ebx + 0x420], eax */ W32((u32)(r_ebx+0x420u), r_eax);
    /* 0058c3d4: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0058c3d7: mov dword ptr [ebx + 0x424], edx */ W32((u32)(r_ebx+0x424u), r_edx);
    /* 0058c3dd: mov dword ptr [ebx + 0x428], eax */ W32((u32)(r_ebx+0x428u), r_eax);
    /* 0058c3e3: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0058c3e6: mov dword ptr [ebx + 0x42c], eax */ W32((u32)(r_ebx+0x42cu), r_eax);
    /* 0058c3ec: mov eax, dword ptr [ebx + 0x488] */ r_eax = R32((u32)(r_ebx+0x488u));
    /* 0058c3f2: lea ecx, [ebx + 0x488] */ r_ecx = (u32)(r_ebx+0x488u);
    /* 0058c3f8: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x58c3fbu); call_ind(t); }
    /* 0058c3fb: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0058c3fe: mov dword ptr [ebx + 0x3e8], 0 */ W32((u32)(r_ebx+0x3e8u), 0x0u);
    /* 0058c408: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058c40a: mov dword ptr [ebx + 0x474], eax */ W32((u32)(r_ebx+0x474u), r_eax);
    /* 0058c410: mov dword ptr [ebx + 0x3ec], 0 */ W32((u32)(r_ebx+0x3ecu), 0x0u);
    /* 0058c41a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c41c: mov dword ptr [ebx + 0x478], eax */ W32((u32)(r_ebx+0x478u), r_eax);
    /* 0058c422: mov dword ptr [ebx + 0x3f0], 0 */ W32((u32)(r_ebx+0x3f0u), 0x0u);
    /* 0058c42c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c42d: mov dword ptr [ebx + 0x414], edx */ W32((u32)(r_ebx+0x414u), r_edx);
    /* 0058c433: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0058c436: mov dword ptr [ebx + 0x3f4], 0 */ W32((u32)(r_ebx+0x3f4u), 0x0u);
    /* 0058c440: mov dword ptr [ebx + 0x418], edx */ W32((u32)(r_ebx+0x418u), r_edx);
    /* 0058c446: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0058c449: mov dword ptr [ebx + 0x3f8], 0 */ W32((u32)(r_ebx+0x3f8u), 0x0u);
    /* 0058c453: mov dword ptr [ebx + 0x41c], edx */ W32((u32)(r_ebx+0x41cu), r_edx);
    /* 0058c459: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0058c45b: mov dword ptr [ebx + 0x3c8], eax */ W32((u32)(r_ebx+0x3c8u), r_eax);
    /* 0058c461: mov dword ptr [ebx + 0x3fc], 0 */ W32((u32)(r_ebx+0x3fcu), 0x0u);
    /* 0058c46b: mov dword ptr [ebx + 0x3cc], eax */ W32((u32)(r_ebx+0x3ccu), r_eax);
    /* 0058c471: mov dword ptr [ebx + 0x3d0], eax */ W32((u32)(r_ebx+0x3d0u), r_eax);
    /* 0058c477: mov dword ptr [ebx + 0x3d4], eax */ W32((u32)(r_ebx+0x3d4u), r_eax);
    /* 0058c47d: mov dword ptr [ebx + 0x400], 0 */ W32((u32)(r_ebx+0x400u), 0x0u);
    /* 0058c487: mov dword ptr [ebx + 0x3d8], eax */ W32((u32)(r_ebx+0x3d8u), r_eax);
    /* 0058c48d: mov dword ptr [ebx + 0x3dc], eax */ W32((u32)(r_ebx+0x3dcu), r_eax);
    /* 0058c493: mov dword ptr [ebx + 0x3e0], eax */ W32((u32)(r_ebx+0x3e0u), r_eax);
    /* 0058c499: mov dword ptr [ebx + 0x404], 0 */ W32((u32)(r_ebx+0x404u), 0x0u);
    /* 0058c4a3: mov dword ptr [ebx + 0x3e4], eax */ W32((u32)(r_ebx+0x3e4u), r_eax);
    /* 0058c4a9: mov word ptr [ebx + 0x32e], ax */ W16((u32)(r_ebx+0x32eu), (u16)r_eax);
    /* 0058c4b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c4b2: mov dword ptr [ebx + 0x408], 0 */ W32((u32)(r_ebx+0x408u), 0x0u);
    /* 0058c4bc: mov dword ptr [ebx + 0x40c], 0 */ W32((u32)(r_ebx+0x40cu), 0x0u);
    /* 0058c4c6: mov dword ptr [ebx + 0x410], 0 */ W32((u32)(r_ebx+0x410u), 0x0u);
    /* 0058c4d0: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x58c4d6u); call_ind(t); }
    /* 0058c4d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058c4d7: ret  */ FN_RET(0x0058c250); r_esp += 4; return;
}

void f_0058c4d8(void) /* sub_58C4D8 */
{
    FN_ENTER(0x0058c4d8);
    /* 0058c4d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0058c4db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4dd: push 0x8d7fdc */ { u32 v = 0x8d7fdcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058c4e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c4e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058c4f0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058c4f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058c4f6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058c4f9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058c4fc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058c4ff: call 0x58943c */ r_esp -= 4; W32(r_esp, 0x58c504u); f_0058943c();
    /* 0058c504: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0058c50b: mov dword ptr [0xa743e0], eax */ W32((u32)(0xa743e0u), r_eax);
    /* 0058c510: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c512: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x58c517u); f_008581c5();
    /* 0058c517: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058c518: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0058c51b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c51d: je 0x58c615 */ if (fZ) goto L_0058c615;
L_0058c523:; BB(0x0058c523);
    /* 0058c523: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0058c52a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058c531: mov eax, dword ptr [0xa743e0] */ r_eax = R32((u32)(0xa743e0u));
    /* 0058c536: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058c539: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0058c53f: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c542: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x58c547u); f_00511b74();
    /* 0058c547: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0058c54a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_0058c551:; BB(0x0058c551);
    /* 0058c551: mov dword ptr [0xa743f4], eax */ W32((u32)(0xa743f4u), r_eax);
    /* 0058c556: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058c55d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c55f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058c561: mov dword ptr [0xa743fc], eax */ W32((u32)(0xa743fcu), r_eax);
    /* 0058c566: mov dword ptr [0xa743f8], eax */ W32((u32)(0xa743f8u), r_eax);
    /* 0058c56b: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x58c570u); f_0077a684();
    /* 0058c570: mov dword ptr [0xa743f0], eax */ W32((u32)(0xa743f0u), r_eax);
    /* 0058c575: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c577: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x58c57cu); f_0077a698();
    /* 0058c57c: mov dword ptr [0xa743ec], eax */ W32((u32)(0xa743ecu), r_eax);
    /* 0058c581: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c583: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x58c588u); f_0077a6b4();
    /* 0058c588: mov dword ptr [0xa743e8], eax */ W32((u32)(0xa743e8u), r_eax);
    /* 0058c58d: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c58f: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x58c594u); f_0077a6cc();
    /* 0058c594: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058c597: mov dword ptr [0xa743e4], eax */ W32((u32)(0xa743e4u), r_eax);
    /* 0058c59c: call 0x58cd88 */ r_esp -= 4; W32(r_esp, 0x58c5a1u); f_0058cd88();
    /* 0058c5a1: mov eax, dword ptr [0x9288c4] */ r_eax = R32((u32)(0x9288c4u));
    /* 0058c5a6: movzx edx, word ptr [0x9288c8] */ r_edx = (u32)R16((u32)(0x9288c8u));
    /* 0058c5ad: movzx ecx, word ptr [0x9288ca] */ r_ecx = (u32)R16((u32)(0x9288cau));
    /* 0058c5b4: movzx ebx, word ptr [0x9288cc] */ r_ebx = (u32)R16((u32)(0x9288ccu));
    /* 0058c5bb: mov edi, dword ptr [0xa743e0] */ r_edi = R32((u32)(0xa743e0u));
    /* 0058c5c1: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0058c5c7: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0058c5ca: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0058c5ce: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0058c5d4: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0058c5d8: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0058c5dc: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0058c5df: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0058c5e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5e3: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5e8: push dword ptr [0x9bf84c] */ { u32 v = R32((u32)(0x9bf84cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c5ee: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c5f1: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c5f4: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c5f6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x58c5fbu); f_00608470();
    /* 0058c5fb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058c5fe: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058c601: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058c604: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058c607: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058c60a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058c611: mov esp, ebp */ r_esp = r_ebp;
    /* 0058c613: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058c614: ret  */ FN_RET(0x0058c4d8); r_esp += 4; return;
L_0058c615:; BB(0x0058c615);
    /* 0058c615: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058c617: jmp 0x58c551 */ goto L_0058c551;
}

void f_0058c61c(void) /* sub_58C61C */
{
    FN_ENTER(0x0058c61c);
    /* 0058c61c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058c61d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0058c61f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058c622: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058c624: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x58c62au); call_ind(t); }
    /* 0058c62a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c62c: je 0x58c63f */ if (fZ) goto L_0058c63f;
L_0058c62e:; BB(0x0058c62e);
    /* 0058c62e: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058c634: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c637: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058c63d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058c63e: ret  */ FN_RET(0x0058c61c); r_esp += 4; return;
L_0058c63f:; BB(0x0058c63f);
    /* 0058c63f: mov eax, dword ptr [ebp + 0x44c] */ r_eax = R32((u32)(r_ebp+0x44cu));
    /* 0058c645: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c648: mov dword ptr [ebp + 0x44c], eax */ W32((u32)(r_ebp+0x44cu), r_eax);
    /* 0058c64e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058c64f: ret  */ FN_RET(0x0058c61c); r_esp += 4; return;
}

void f_0058c650(void) /* sub_58C650 */
{
    FN_ENTER(0x0058c650);
    /* 0058c650: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c651: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058c653: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058c655: call 0x58c674 */ r_esp -= 4; W32(r_esp, 0x58c65au); f_0058c674();
    /* 0058c65a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058c65e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c660: jne 0x58c666 */ if (!fZ) goto L_0058c666;
L_0058c662:; BB(0x0058c662);
    /* 0058c662: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058c663: ret 4 */ FN_RET(0x0058c650); r_esp += 8; return;
L_0058c666:; BB(0x0058c666);
    /* 0058c666: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c667: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x58c66cu); f_005c2f74();
    /* 0058c66c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058c66d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058c66e: ret 4 */ FN_RET(0x0058c650); r_esp += 8; return;
}

void f_0058c674(void) /* sub_58C674 */
{
    FN_ENTER(0x0058c674);
    /* 0058c674: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058c675: mov ebp, esp */ r_ebp = r_esp;
    /* 0058c677: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c679: push 0x8d7ff8 */ { u32 v = 0x8d7ff8u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c67e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058c684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c685: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058c68c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058c68f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058c692: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058c695: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058c698: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058c69b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058c69e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058c6a1: mov dword ptr [ecx], 0xb08340 */ W32((u32)(r_ecx), 0xb08340u);
    /* 0058c6a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058c6ae: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x58c6b3u); f_00770660();
    /* 0058c6b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058c6b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058c6bd: mov esp, ebp */ r_esp = r_ebp;
    /* 0058c6bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058c6c0: ret  */ FN_RET(0x0058c674); r_esp += 4; return;
}

void f_0058c6c4(void) /* sub_58C6C4 */
{
    FN_ENTER(0x0058c6c4);
    /* 0058c6c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0058c6c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6c9: push 0x8d8020 */ { u32 v = 0x8d8020u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058c6d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058c6dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058c6df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058c6e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058c6e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058c6e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058c6eb: push 0x36c */ { u32 v = 0x36cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c6f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0058c6f7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x58c6fcu); f_005caba4();
    /* 0058c6fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058c6fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0058c700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c702: je 0x58c73b */ if (fZ) goto L_0058c73b;
L_0058c704:; BB(0x0058c704);
    /* 0058c704: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0058c70b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058c712: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c715: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c718: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c71b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058c71e: call 0x58c740 */ r_esp -= 4; W32(r_esp, 0x58c723u); f_0058c740();
    /* 0058c723: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058c726: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0058c72d:; BB(0x0058c72d);
    /* 0058c72d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058c730: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058c737: mov esp, ebp */ r_esp = r_ebp;
    /* 0058c739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058c73a: ret  */ FN_RET(0x0058c6c4); r_esp += 4; return;
L_0058c73b:; BB(0x0058c73b);
    /* 0058c73b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c73d: jmp 0x58c72d */ goto L_0058c72d;
}

void f_0058c740(void) /* sub_58C740 */
{
    FN_ENTER(0x0058c740);
    /* 0058c740: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058c741: mov ebp, esp */ r_ebp = r_esp;
    /* 0058c743: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c745: push 0x8d803c */ { u32 v = 0x8d803cu; r_esp -= 4; W32(r_esp, v); }
    /* 0058c74a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058c750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c751: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058c758: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058c75b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058c75e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0058c761: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0058c764: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0058c767: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0058c76a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058c76d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0058c770: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0058c773: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0058c776: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0058c779: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x58c77eu); f_00770748();
    /* 0058c77e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0058c785: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c788: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058c78b: mov dword ptr [ebx], 0xb08340 */ W32((u32)(r_ebx), 0xb08340u);
    /* 0058c791: mov eax, dword ptr [0x9bf880] */ r_eax = R32((u32)(0x9bf880u));
    /* 0058c796: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0058c799: mov dword ptr [ebx + 0x33c], ecx */ W32((u32)(r_ebx+0x33cu), r_ecx);
    /* 0058c79f: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0058c7a3: mov word ptr [ebx + 0x340], dx */ W16((u32)(r_ebx+0x340u), (u16)r_edx);
    /* 0058c7aa: call 0x58c194 */ r_esp -= 4; W32(r_esp, 0x58c7afu); f_0058c194();
    /* 0058c7af: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c7b2: mov ecx, dword ptr [eax + 0x33c] */ r_ecx = R32((u32)(r_eax+0x33cu));
    /* 0058c7b8: fstp dword ptr [eax + 0x354] */ W_F32((u32)(r_eax+0x354u), ST(0)); FPOP();
    /* 0058c7be: call 0x58c1a0 */ r_esp -= 4; W32(r_esp, 0x58c7c3u); f_0058c1a0();
    /* 0058c7c3: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c7c6: mov ecx, dword ptr [eax + 0x33c] */ r_ecx = R32((u32)(r_eax+0x33cu));
    /* 0058c7cc: fstp dword ptr [eax + 0x358] */ W_F32((u32)(r_eax+0x358u), ST(0)); FPOP();
    /* 0058c7d2: call 0x58c1ac */ r_esp -= 4; W32(r_esp, 0x58c7d7u); f_0058c1ac();
    /* 0058c7d7: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c7da: mov ecx, dword ptr [eax + 0x33c] */ r_ecx = R32((u32)(r_eax+0x33cu));
    /* 0058c7e0: fstp dword ptr [eax + 0x35c] */ W_F32((u32)(r_eax+0x35cu), ST(0)); FPOP();
    /* 0058c7e6: call 0x58c1b8 */ r_esp -= 4; W32(r_esp, 0x58c7ebu); f_0058c1b8();
    /* 0058c7eb: mov edx, eax */ r_edx = r_eax;
    /* 0058c7ed: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c7f0: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0058c7f3: mov dword ptr [eax + 0x360], edx */ W32((u32)(r_eax+0x360u), r_edx);
    /* 0058c7f9: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0058c7fc: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 0058c7ff: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0058c802: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 0058c804: mov dword ptr [eax + 0x38], ebx */ W32((u32)(r_eax+0x38u), r_ebx);
    /* 0058c807: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0058c80a: mov dword ptr [eax + 0x3c], esi */ W32((u32)(r_eax+0x3cu), r_esi);
    /* 0058c80d: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0058c810: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 0058c813: mov ecx, edx */ r_ecx = r_edx;
    /* 0058c815: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x58c81au); f_0082dcbc();
    /* 0058c81a: fstp dword ptr [ebp - 0x1c] */ W_F32((u32)(r_ebp+0xffffffe4u), ST(0)); FPOP();
    /* 0058c81d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c820: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 0058c823: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x58c828u); f_0082ddd8();
    /* 0058c828: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0058c82b: fld dword ptr [ebp - 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe4u)));
    /* 0058c82e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0058c831: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0058c834: fld dword ptr [eax + 0x35c] */ FPUSH(R_F32((u32)(r_eax+0x35cu)));
    /* 0058c83a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058c83d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0058c83f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0058c841: fstp dword ptr [eax + 0x344] */ W_F32((u32)(r_eax+0x344u), ST(0)); FPOP();
    /* 0058c847: fstp dword ptr [eax + 0x34c] */ W_F32((u32)(r_eax+0x34cu), ST(0)); FPOP();
    /* 0058c84d: mov dword ptr [eax + 0x348], 0 */ W32((u32)(r_eax+0x348u), 0x0u);
    /* 0058c857: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058c859: mov dword ptr [eax + 0x368], edx */ W32((u32)(r_eax+0x368u), r_edx);
    /* 0058c85f: mov dword ptr [eax + 0x364], edx */ W32((u32)(r_eax+0x364u), r_edx);
    /* 0058c865: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058c868: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058c86f: mov esp, ebp */ r_esp = r_ebp;
    /* 0058c871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058c872: ret 0xc */ FN_RET(0x0058c740); r_esp += 16; return;
}

void f_0058c878(void) /* sub_58C878 */
{
    FN_ENTER(0x0058c878);
    /* 0058c878: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058c879: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058c87a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058c87b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058c87e: mov esi, ecx */ r_esi = r_ecx;
    /* 0058c880: mov ecx, dword ptr [esi + 0x33c] */ r_ecx = R32((u32)(r_esi+0x33cu));
    /* 0058c886: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c888: je 0x58cbd0 */ if (fZ) goto L_0058cbd0;
L_0058c88e:; BB(0x0058c88e);
    /* 0058c88e: mov eax, dword ptr [esi + 0x368] */ r_eax = R32((u32)(r_esi+0x368u));
    /* 0058c894: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0058c897: cmp eax, dword ptr [esi + 0x360] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x360u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c89d: mov dword ptr [esi + 0x368], eax */ W32((u32)(r_esi+0x368u), r_eax);
    /* 0058c8a3: jg 0x58c8b6 */ if ((!fZ&&fS==fO)) goto L_0058c8b6;
L_0058c8a5:; BB(0x0058c8a5);
    /* 0058c8a5: call 0x58c1d4 */ r_esp -= 4; W32(r_esp, 0x58c8aau); f_0058c1d4();
    /* 0058c8aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c8ac: jne 0x58c8b6 */ if (!fZ) goto L_0058c8b6;
L_0058c8ae:; BB(0x0058c8ae);
    /* 0058c8ae: mov eax, dword ptr [esi + 0x364] */ r_eax = R32((u32)(r_esi+0x364u));
    /* 0058c8b4: jmp 0x58c8c5 */ goto L_0058c8c5;
L_0058c8b6:; BB(0x0058c8b6);
    /* 0058c8b6: mov dword ptr [esi + 0x364], 3 */ W32((u32)(r_esi+0x364u), 0x3u);
    /* 0058c8c0: mov eax, 3 */ r_eax = 0x3u;
L_0058c8c5:; BB(0x0058c8c5);
    /* 0058c8c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0058c8c7: jl 0x58ca37 */ if ((fS!=fO)) goto L_0058ca37;
L_0058c8cd:; BB(0x0058c8cd);
    /* 0058c8cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058c8d0: jle 0x58c92b */ if ((fZ||fS!=fO)) goto L_0058c92b;
L_0058c8d2:; BB(0x0058c8d2);
    /* 0058c8d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c8d5: jne 0x58ca37 */ if (!fZ) goto L_0058ca37;
L_0058c8db:; BB(0x0058c8db);
    /* 0058c8db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c8dd: push 0x41c80000 */ { u32 v = 0x41c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058c8e2: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058c8e5: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0058c8e8: mov ebx, dword ptr [esi + 0x40] */ r_ebx = R32((u32)(r_esi+0x40u));
    /* 0058c8eb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0058c8ed: mov dword ptr [esi + 0x300], eax */ W32((u32)(r_esi+0x300u), r_eax);
    /* 0058c8f3: mov dword ptr [esi + 0x304], edx */ W32((u32)(r_esi+0x304u), r_edx);
    /* 0058c8f9: mov dword ptr [esi + 0x308], ebx */ W32((u32)(r_esi+0x308u), r_ebx);
    /* 0058c8ff: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c901: call 0x7714cc */ r_esp -= 4; W32(r_esp, 0x58c906u); f_007714cc();
    /* 0058c906: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 0058c909: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c90e: jne 0x58cb3e */ if (!fZ) goto L_0058cb3e;
L_0058c914:; BB(0x0058c914);
    /* 0058c914: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c916: je 0x58cb37 */ if (fZ) goto L_0058cb37;
L_0058c91c:; BB(0x0058c91c);
    /* 0058c91c: mov dword ptr [esi + 0x364], 3 */ W32((u32)(r_esi+0x364u), 0x3u);
    /* 0058c926: jmp 0x58cb37 */ goto L_0058cb37;
L_0058c92b:; BB(0x0058c92b);
    /* 0058c92b: fld dword ptr [0x928a5c] */ FPUSH(R_F32((u32)(0x928a5cu)));
    /* 0058c931: fld dword ptr [0x928a24] */ FPUSH(R_F32((u32)(0x928a24u)));
    /* 0058c937: fadd dword ptr [esi + 0x348] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x348u));
    /* 0058c93d: fld dword ptr [esi + 0x344] */ FPUSH(R_F32((u32)(r_esi+0x344u)));
    /* 0058c943: fld dword ptr [esi + 0x34c] */ FPUSH(R_F32((u32)(r_esi+0x34cu)));
    /* 0058c949: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058c94c: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 0058c94f: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 0058c952: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058c954: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0058c956: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0058c958: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058c95a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058c95c: fstp dword ptr [esi + 0x348] */ W_F32((u32)(r_esi+0x348u), ST(0)); FPOP();
    /* 0058c962: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0058c964: fstp dword ptr [esi + 0x344] */ W_F32((u32)(r_esi+0x344u), ST(0)); FPOP();
    /* 0058c96a: fstp dword ptr [esi + 0x34c] */ W_F32((u32)(r_esi+0x34cu), ST(0)); FPOP();
    /* 0058c970: lea edx, [esi + 0x344] */ r_edx = (u32)(r_esi+0x344u);
    /* 0058c976: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058c979: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0058c97d: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 0058c981: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0058c984: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x58c989u); f_0082ebac();
    /* 0058c989: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0058c98c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0058c990: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0058c994: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0058c998: mov ecx, esi */ r_ecx = r_esi;
    /* 0058c99a: lea edi, [esi + 0x250] */ r_edi = (u32)(r_esi+0x250u);
    /* 0058c9a0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0058c9a4: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0058c9a8: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0058c9ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058c9ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058c9ae: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x58c9b3u); f_007b4c58();
    /* 0058c9b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c9b5: je 0x58ca14 */ if (fZ) goto L_0058ca14;
L_0058c9b7:; BB(0x0058c9b7);
    /* 0058c9b7: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0058c9bb: fcom dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); 
    /* 0058c9bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058c9c1: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0058c9c5: mov dword ptr [esi + 0x350], edx */ W32((u32)(r_esi+0x350u), r_edx);
    /* 0058c9cb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058c9cc: jb 0x58cb8d */ if (fC) goto L_0058cb8d;
L_0058c9d2:; BB(0x0058c9d2);
    /* 0058c9d2: mov eax, dword ptr [esi + 0x364] */ r_eax = R32((u32)(r_esi+0x364u));
    /* 0058c9d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058c9da: jne 0x58ca01 */ if (!fZ) goto L_0058ca01;
L_0058c9dc:; BB(0x0058c9dc);
    /* 0058c9dc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0058c9df: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058c9e3: fld dword ptr [esi + 0x348] */ FPUSH(R_F32((u32)(r_esi+0x348u)));
    /* 0058c9e9: fmul dword ptr [0x928a20] */ ST(0) = ST(0) * R_F32((u32)(0x928a20u));
    /* 0058c9ef: fstp dword ptr [esi + 0x348] */ W_F32((u32)(r_esi+0x348u), ST(0)); FPOP();
    /* 0058c9f5: mov dword ptr [esi + 0x364], 1 */ W32((u32)(r_esi+0x364u), 0x1u);
    /* 0058c9ff: jmp 0x58ca29 */ goto L_0058ca29;
L_0058ca01:; BB(0x0058ca01);
    /* 0058ca01: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0058ca04: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058ca08: mov dword ptr [esi + 0x364], 2 */ W32((u32)(r_esi+0x364u), 0x2u);
    /* 0058ca12: jmp 0x58ca29 */ goto L_0058ca29;
L_0058ca14:; BB(0x0058ca14);
    /* 0058ca14: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0058ca17: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058ca1b: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058ca1f: mov dword ptr [esi + 0x364], 3 */ W32((u32)(r_esi+0x364u), 0x3u);
L_0058ca29:; BB(0x0058ca29);
    /* 0058ca29: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0058ca2c: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0058ca2f: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 0058ca32: jmp 0x58cb37 */ goto L_0058cb37;
L_0058ca37:; BB(0x0058ca37);
    /* 0058ca37: push 0x260 */ { u32 v = 0x260u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca3c: call 0x589c9c */ r_esp -= 4; W32(r_esp, 0x58ca41u); f_00589c9c();
    /* 0058ca41: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0058ca44: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058ca46: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca47: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca4a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58ca4fu); f_00814298();
    /* 0058ca4f: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca51: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca53: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca54: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x58ca59u); f_0050b7a4();
    /* 0058ca59: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca5b: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca5e: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x58ca63u); f_0050b7a4();
    /* 0058ca63: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058ca66: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 0058ca6b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0058ca6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0058ca6f: jle 0x58cb2a */ if ((fZ||fS!=fO)) goto L_0058cb2a;
L_0058ca75:; BB(0x0058ca75);
    /* 0058ca75: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
L_0058ca79:; BB(0x0058ca79);
    /* 0058ca79: mov ebp, dword ptr [ebx*4 + 0xaad720] */ r_ebp = R32((u32)(r_ebx*4+0xaad720u));
    /* 0058ca80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ca81: call 0x6ea71c */ r_esp -= 4; W32(r_esp, 0x58ca86u); f_006ea71c();
    /* 0058ca86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058ca87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ca89: je 0x58cb17 */ if (fZ) goto L_0058cb17;
L_0058ca8f:; BB(0x0058ca8f);
    /* 0058ca8f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ca91: je 0x58cb17 */ if (fZ) goto L_0058cb17;
L_0058ca97:; BB(0x0058ca97);
    /* 0058ca97: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0058ca9b: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058caa0: jge 0x58cb17 */ if ((fS==fO)) goto L_0058cb17;
L_0058caa2:; BB(0x0058caa2);
    /* 0058caa2: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058caa5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058caa7: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x58caadu); call_ind(t); }
    /* 0058caad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058caaf: jne 0x58cb17 */ if (!fZ) goto L_0058cb17;
L_0058cab1:; BB(0x0058cab1);
    /* 0058cab1: lea edx, [ebp + 0x300] */ r_edx = (u32)(r_ebp+0x300u);
    /* 0058cab7: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0058cabd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cabe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cabf: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58cac4u); f_007a9180();
    /* 0058cac4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cac7: fld dword ptr [esi + 0x354] */ FPUSH(R_F32((u32)(r_esi+0x354u)));
    /* 0058cacd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058cacf: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058cad1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058cad3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058cad4: jb 0x58cb17 */ if (fC) goto L_0058cb17;
L_0058cad6:; BB(0x0058cad6);
    /* 0058cad6: mov ecx, dword ptr [esi + 0x358] */ r_ecx = R32((u32)(r_esi+0x358u));
    /* 0058cadc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0058cadf: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0058cae3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0058cae5: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0058caea: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0058caee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058caef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058caf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058caf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0058caf2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058caf4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058caf6: push dword ptr [esi + 0x33c] */ { u32 v = R32((u32)(r_esi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0058cafc: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x58caffu); call_ind(t); }
    /* 0058caff: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0058cb02: mov eax, dword ptr [esi + 0x33c] */ r_eax = R32((u32)(r_esi+0x33cu));
    /* 0058cb08: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cb0b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058cb0f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058cb11: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058cb14: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x58cb17u); call_ind(t); }
L_0058cb17:; BB(0x0058cb17);
    /* 0058cb17: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0058cb1a: cmp ebx, dword ptr [0xaae16c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaae16cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0058cb20: jl 0x58ca79 */ if ((fS!=fO)) goto L_0058ca79;
L_0058cb26:; BB(0x0058cb26);
    /* 0058cb26: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
L_0058cb2a:; BB(0x0058cb2a);
    /* 0058cb2a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0058cb2e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058cb33: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_0058cb37:; BB(0x0058cb37);
    /* 0058cb37: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058cb3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cb3b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058cb3c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058cb3d: ret  */ FN_RET(0x0058c878); r_esp += 4; return;
L_0058cb3e:; BB(0x0058cb3e);
    /* 0058cb3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb3f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x58cb44u); f_0068d5a8();
    /* 0058cb44: mov ebx, eax */ r_ebx = r_eax;
    /* 0058cb46: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cb49: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cb4b: je 0x58c914 */ if (fZ) goto L_0058c914;
L_0058cb51:; BB(0x0058cb51);
    /* 0058cb51: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 0058cb57: lea edx, [ebx + 0x300] */ r_edx = (u32)(r_ebx+0x300u);
    /* 0058cb5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb5f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x58cb64u); f_007a9180();
    /* 0058cb64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cb67: fld dword ptr [0x928a1c] */ FPUSH(R_F32((u32)(0x928a1cu)));
    /* 0058cb6d: mov edx, dword ptr [ebx + 0xa4] */ r_edx = R32((u32)(r_ebx+0xa4u));
    /* 0058cb73: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0058cb76: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0058cb78: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0058cb7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058cb7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058cb7d: jb 0x58c914 */ if (fC) goto L_0058c914;
L_0058cb83:; BB(0x0058cb83);
    /* 0058cb83: mov edi, 1 */ r_edi = 0x1u;
    /* 0058cb88: jmp 0x58c914 */ goto L_0058c914;
L_0058cb8d:; BB(0x0058cb8d);
    /* 0058cb8d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058cb8f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058cb92: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb97: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb98: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0058cb9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cb9c: call 0x77fffc */ r_esp -= 4; W32(r_esp, 0x58cba1u); f_0077fffc();
    /* 0058cba1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cba4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cba6: je 0x58cbc0 */ if (fZ) goto L_0058cbc0;
L_0058cba8:; BB(0x0058cba8);
    /* 0058cba8: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0058cbab: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0058cbae: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0058cbb1: mov dword ptr [esi + 0x364], 3 */ W32((u32)(r_esi+0x364u), 0x3u);
    /* 0058cbbb: jmp 0x58ca29 */ goto L_0058ca29;
L_0058cbc0:; BB(0x0058cbc0);
    /* 0058cbc0: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0058cbc3: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0058cbc7: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0058cbcb: jmp 0x58ca29 */ goto L_0058ca29;
L_0058cbd0:; BB(0x0058cbd0);
    /* 0058cbd0: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0058cbd4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058cbd9: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0058cbdd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058cbe0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cbe1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058cbe2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058cbe3: ret  */ FN_RET(0x0058c878); r_esp += 4; return;
}

void f_0058cbe4(void) /* sub_58CBE4 */
{
    FN_ENTER(0x0058cbe4);
    /* 0058cbe4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0058cbe5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058cbe6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058cbe7: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058cbea: mov edi, ecx */ r_edi = r_ecx;
    /* 0058cbec: mov ecx, dword ptr [0xa74418] */ r_ecx = R32((u32)(0xa74418u));
    /* 0058cbf2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cbf4: je 0x58cd53 */ if (fZ) goto L_0058cd53;
L_0058cbfa:; BB(0x0058cbfa);
    /* 0058cbfa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cbfc: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x58cc01u); f_005b8610();
    /* 0058cc01: mov esi, eax */ r_esi = r_eax;
    /* 0058cc03: mov ecx, dword ptr [0xa74418] */ r_ecx = R32((u32)(0xa74418u));
    /* 0058cc09: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc0b: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x58cc10u); f_005b8624();
    /* 0058cc10: mov ebp, eax */ r_ebp = r_eax;
    /* 0058cc12: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58cc17u); f_0082d7b0();
    /* 0058cc17: fld dword ptr [0x928a34] */ FPUSH(R_F32((u32)(0x928a34u)));
    /* 0058cc1d: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0058cc20: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0058cc23: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cc26: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058cc2a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0058cc2d: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0058cc30: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0058cc34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cc36: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x58cc3bu); f_00830b74();
    /* 0058cc3b: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058cc3e: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058cc41: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0058cc44: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cc46: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x58cc4bu); f_0082df5c();
    /* 0058cc4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0058cc4d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x58cc52u); f_00829cc8();
    /* 0058cc52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc53: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x58cc58u); f_0082e1e8();
    /* 0058cc58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058cc59: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58cc5eu); f_0082da80();
    /* 0058cc5e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x58cc63u); f_0082d7b0();
    /* 0058cc63: fld dword ptr [0x928a30] */ FPUSH(R_F32((u32)(0x928a30u)));
    /* 0058cc69: fadd dword ptr [edi + 0x350] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x350u));
    /* 0058cc6f: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 0058cc72: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 0058cc75: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cc78: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0058cc7c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0058cc7f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cc81: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0058cc85: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x58cc8au); f_00830b74();
    /* 0058cc8a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0058cc8e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0058cc91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc92: lea ebp, [edi + 0x250] */ r_ebp = (u32)(r_edi+0x250u);
    /* 0058cc98: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058cc9a: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x58cc9fu); f_007a8d98();
    /* 0058cc9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cca2: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0058cca5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058cca7: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x58ccacu); f_00830c04();
    /* 0058ccac: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0058ccb0: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0058ccb6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ccb8: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x58ccbdu); f_0082e9e4();
    /* 0058ccbd: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0058ccc0: fsub dword ptr [edi + 0x350] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x350u));
    /* 0058ccc6: fcom dword ptr [0x928a2c] */ fx_compare(ST(0), R_F32((u32)(0x928a2cu))); 
    /* 0058cccc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058ccce: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058cccf: jbe 0x58ccdb */ if ((fC||fZ)) goto L_0058ccdb;
L_0058ccd1:; BB(0x0058ccd1);
    /* 0058ccd1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058ccd3: fld dword ptr [0x928a50] */ FPUSH(R_F32((u32)(0x928a50u)));
    /* 0058ccd9: jmp 0x58ccec */ goto L_0058ccec;
L_0058ccdb:; BB(0x0058ccdb);
    /* 0058ccdb: fld dword ptr [0x928a54] */ FPUSH(R_F32((u32)(0x928a54u)));
    /* 0058cce1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0058cce3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058cce5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058cce6: jbe 0x58ccea */ if ((fC||fZ)) goto L_0058ccea;
L_0058cce8:; BB(0x0058cce8);
    /* 0058cce8: fst st(1) */ ST(1) = ST(0);
L_0058ccea:; BB(0x0058ccea);
    /* 0058ccea: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0058ccec:; BB(0x0058ccec);
    /* 0058ccec: fdiv dword ptr [0x928a48] */ ST(0) = ST(0) / R_F32((u32)(0x928a48u));
    /* 0058ccf2: fadd dword ptr [0x928a4c] */ ST(0) = ST(0) + R_F32((u32)(0x928a4cu));
    /* 0058ccf8: movzx eax, byte ptr [0xa74404] */ r_eax = (u32)R8((u32)(0xa74404u));
    /* 0058ccff: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 0058cd04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0058cd06: jne 0x58cd1c */ if (!fZ) goto L_0058cd1c;
L_0058cd08:; BB(0x0058cd08);
    /* 0058cd08: mov dword ptr [0xa74408], 0x3f266666 */ W32((u32)(0xa74408u), 0x3f266666u);
    /* 0058cd12: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058cd17: mov byte ptr [0xa74404], al */ W8((u32)(0xa74404u), (u8)r_eax);
L_0058cd1c:; BB(0x0058cd1c);
    /* 0058cd1c: fld dword ptr [0xa74408] */ FPUSH(R_F32((u32)(0xa74408u)));
    /* 0058cd22: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0058cd24: fadd dword ptr [0x928a28] */ ST(0) = ST(0) + R_F32((u32)(0x928a28u));
    /* 0058cd2a: fst dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0));
    /* 0058cd2e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0058cd32: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0058cd36: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0058cd3a: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x58cd3fu); f_00831290();
    /* 0058cd3f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cd41: call 0x52d46c */ r_esp -= 4; W32(r_esp, 0x58cd46u); f_0052d46c();
    /* 0058cd46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058cd47: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x58cd4cu); f_0082da80();
    /* 0058cd4c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058cd4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058cd50: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058cd51: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058cd52: ret  */ FN_RET(0x0058cbe4); r_esp += 4; return;
L_0058cd53:; BB(0x0058cd53);
    /* 0058cd53: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0058cd57: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058cd5c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0058cd60: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058cd63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058cd64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058cd65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0058cd66: ret  */ FN_RET(0x0058cbe4); r_esp += 4; return;
}

void f_0058cd68(void) /* sub_58CD68 */
{
    FN_ENTER(0x0058cd68);
    /* 0058cd68: mov dword ptr [0xa7440c], 0x3f800000 */ W32((u32)(0xa7440cu), 0x3f800000u);
    /* 0058cd72: mov dword ptr [0xa74410], 0x41000000 */ W32((u32)(0xa74410u), 0x41000000u);
    /* 0058cd7c: mov dword ptr [0xa74414], 0x3fc00000 */ W32((u32)(0xa74414u), 0x3fc00000u);
    /* 0058cd86: ret  */ FN_RET(0x0058cd68); r_esp += 4; return;
}

void f_0058cd88(void) /* sub_58CD88 */
{
    FN_ENTER(0x0058cd88);
    /* 0058cd88: call 0x58943c */ r_esp -= 4; W32(r_esp, 0x58cd8du); f_0058943c();
    /* 0058cd8d: mov dword ptr [0xa74418], eax */ W32((u32)(0xa74418u), r_eax);
    /* 0058cd92: ret  */ FN_RET(0x0058cd88); r_esp += 4; return;
}

void f_0058cd94(void) /* sub_58CD94 */
{
    FN_ENTER(0x0058cd94);
    /* 0058cd94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cd95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058cd97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058cd99: call 0x58ce2c */ r_esp -= 4; W32(r_esp, 0x58cd9eu); f_0058ce2c();
    /* 0058cd9e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058cda2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058cda4: jne 0x58cdaa */ if (!fZ) goto L_0058cdaa;
L_0058cda6:; BB(0x0058cda6);
    /* 0058cda6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cda7: ret 4 */ FN_RET(0x0058cd94); r_esp += 8; return;
L_0058cdaa:; BB(0x0058cdaa);
    /* 0058cdaa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cdab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x58cdb0u); f_005c2f74();
    /* 0058cdb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058cdb1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cdb2: ret 4 */ FN_RET(0x0058cd94); r_esp += 8; return;
}

void f_0058cdb8(void) /* sub_58CDB8 */
{
    FN_ENTER(0x0058cdb8);
    /* 0058cdb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cdb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058cdbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058cdbd: call 0x58cddc */ r_esp -= 4; W32(r_esp, 0x58cdc2u); f_0058cddc();
    /* 0058cdc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058cdc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058cdc8: jne 0x58cdce */ if (!fZ) goto L_0058cdce;
L_0058cdca:; BB(0x0058cdca);
    /* 0058cdca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cdcb: ret 4 */ FN_RET(0x0058cdb8); r_esp += 8; return;
L_0058cdce:; BB(0x0058cdce);
    /* 0058cdce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cdcf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x58cdd4u); f_005c2f74();
    /* 0058cdd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058cdd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cdd6: ret 4 */ FN_RET(0x0058cdb8); r_esp += 8; return;
}

void f_0058cddc(void) /* sub_58CDDC */
{
    FN_ENTER(0x0058cddc);
    /* 0058cddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058cddd: mov ebp, esp */ r_ebp = r_esp;
    /* 0058cddf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cde1: push 0x8d8058 */ { u32 v = 0x8d8058u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cde6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058cdec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cded: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058cdf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058cdf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058cdfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058cdfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058ce00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058ce03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058ce06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058ce09: mov dword ptr [ecx], 0xb08820 */ W32((u32)(r_ecx), 0xb08820u);
    /* 0058ce0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058ce16: call 0x58ce2c */ r_esp -= 4; W32(r_esp, 0x58ce1bu); f_0058ce2c();
    /* 0058ce1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058ce1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058ce25: mov esp, ebp */ r_esp = r_ebp;
    /* 0058ce27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058ce28: ret  */ FN_RET(0x0058cddc); r_esp += 4; return;
}

void f_0058ce2c(void) /* sub_58CE2C */
{
    FN_ENTER(0x0058ce2c);
    /* 0058ce2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce2d: mov ebp, esp */ r_ebp = r_esp;
    /* 0058ce2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce31: push 0x8d8098 */ { u32 v = 0x8d8098u; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058ce3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058ce3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058ce44: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058ce47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058ce4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058ce4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058ce50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058ce53: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058ce56: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0058ce5d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058ce60: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058ce63: mov ecx, dword ptr [eax + 0x3ec] */ r_ecx = R32((u32)(r_eax+0x3ecu));
    /* 0058ce69: mov dword ptr [eax], 0xb08620 */ W32((u32)(r_eax), 0xb08620u);
    /* 0058ce6f: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0058ce73: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0058ce79: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0058ce7d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058ce80: mov edi, dword ptr [ebx + 0x3e8] */ r_edi = R32((u32)(r_ebx+0x3e8u));
    /* 0058ce86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0058ce88: mov dword ptr [ebx + 0x3ec], eax */ W32((u32)(r_ebx+0x3ecu), r_eax);
    /* 0058ce8e: movzx esi, word ptr [edi + 8] */ r_esi = (u32)R16((u32)(r_edi+0x8u));
    /* 0058ce92: or esi, 0xffff0001 */ {  u32 a = r_esi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0058ce98: mov word ptr [edi + 8], si */ W16((u32)(r_edi+0x8u), (u16)r_esi);
    /* 0058ce9c: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 0058cea2: mov dword ptr [ecx + 0x3e8], eax */ W32((u32)(r_ecx+0x3e8u), r_eax);
    /* 0058cea8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058ceaa: je 0x58cec6 */ if (fZ) goto L_0058cec6;
L_0058ceac:; BB(0x0058ceac);
    /* 0058ceac: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058ceaf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0058ceb3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058ceb8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0058cebc: mov dword ptr [ecx + 0x42c], 0 */ W32((u32)(r_ecx+0x42cu), 0x0u);
L_0058cec6:; BB(0x0058cec6);
    /* 0058cec6: mov edx, dword ptr [ecx + 0x430] */ r_edx = R32((u32)(r_ecx+0x430u));
    /* 0058cecc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cece: je 0x58ceea */ if (fZ) goto L_0058ceea;
L_0058ced0:; BB(0x0058ced0);
    /* 0058ced0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058ced3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0058ced7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0058cedc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0058cee0: mov dword ptr [ecx + 0x430], 0 */ W32((u32)(r_ecx+0x430u), 0x0u);
L_0058ceea:; BB(0x0058ceea);
    /* 0058ceea: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x58ceefu); f_007b9c8c();
    /* 0058ceef: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0058cef6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058cef9: add ecx, 0x3f0 */ {  u32 a = r_ecx; u32 b = 0x3f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0058ceff: call 0x5769f8 */ r_esp -= 4; W32(r_esp, 0x58cf04u); f_005769f8();
    /* 0058cf04: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058cf0b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058cf0e: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x58cf13u); f_0051f4fc();
    /* 0058cf13: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0058cf16: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0058cf19: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0058cf1c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058cf1f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058cf26: mov esp, ebp */ r_esp = r_ebp;
    /* 0058cf28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058cf29: ret  */ FN_RET(0x0058ce2c); r_esp += 4; return;
}

void f_0058cf2c(void) /* sub_58CF2C */
{
    FN_ENTER(0x0058cf2c);
    /* 0058cf2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0058cf2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0058cf31: call 0x58cf50 */ r_esp -= 4; W32(r_esp, 0x58cf36u); f_0058cf50();
    /* 0058cf36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0058cf3a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058cf3c: jne 0x58cf42 */ if (!fZ) goto L_0058cf42;
L_0058cf3e:; BB(0x0058cf3e);
    /* 0058cf3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cf3f: ret 4 */ FN_RET(0x0058cf2c); r_esp += 8; return;
L_0058cf42:; BB(0x0058cf42);
    /* 0058cf42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf43: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x58cf48u); f_005c2f74();
    /* 0058cf48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0058cf49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0058cf4a: ret 4 */ FN_RET(0x0058cf2c); r_esp += 8; return;
}

void f_0058cf50(void) /* sub_58CF50 */
{
    FN_ENTER(0x0058cf50);
    /* 0058cf50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf51: mov ebp, esp */ r_ebp = r_esp;
    /* 0058cf53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf55: push 0x8d80b4 */ { u32 v = 0x8d80b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0058cf60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058cf61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0058cf68: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0058cf6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0058cf6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0058cf71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0058cf74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0058cf77: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0058cf7a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0058cf7d: mov dword ptr [ecx], 0xb08a20 */ W32((u32)(r_ecx), 0xb08a20u);
    /* 0058cf83: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0058cf8a: call 0x58ce2c */ r_esp -= 4; W32(r_esp, 0x58cf8fu); f_0058ce2c();
    /* 0058cf8f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0058cf92: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0058cf99: mov esp, ebp */ r_esp = r_ebp;
    /* 0058cf9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058cf9c: ret  */ FN_RET(0x0058cf50); r_esp += 4; return;
}

void f_0058cfa0(void) /* sub_58CFA0 */
{
    FN_ENTER(0x0058cfa0);
    /* 0058cfa0: mov eax, dword ptr [0xa744a0] */ r_eax = R32((u32)(0xa744a0u));
    /* 0058cfa5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058cfa8: je 0x58cfb3 */ if (fZ) goto L_0058cfb3;
L_0058cfaa:; BB(0x0058cfaa);
    /* 0058cfaa: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0058cfad: mov dword ptr [0xa744a0], eax */ W32((u32)(0xa744a0u), r_eax);
    /* 0058cfb2: ret  */ FN_RET(0x0058cfa0); r_esp += 4; return;
L_0058cfb3:; BB(0x0058cfb3);
    /* 0058cfb3: push 0xa74494 */ { u32 v = 0xa74494u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cfb8: push 0xa74420 */ { u32 v = 0xa74420u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cfbd: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x58cfc2u); f_00520c5c();
    /* 0058cfc2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0058cfc5: mov eax, dword ptr [0xa744a0] */ r_eax = R32((u32)(0xa744a0u));
    /* 0058cfca: jmp 0x58cfaa */ goto L_0058cfaa;
}

void f_0058cfcc(void) /* sub_58CFCC */
{
    FN_ENTER(0x0058cfcc);
    /* 0058cfcc: fld dword ptr [ecx + 0x304] */ FPUSH(R_F32((u32)(r_ecx+0x304u)));
    /* 0058cfd2: fsub dword ptr [ecx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x3cu));
    /* 0058cfd5: fadd dword ptr [ecx + 0x3d4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3d4u));
    /* 0058cfdb: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0058cfe1: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 0058cfe4: ret  */ FN_RET(0x0058cfcc); r_esp += 4; return;
}

void f_0058cfe8(void) /* sub_58CFE8 */
{
    FN_ENTER(0x0058cfe8);
    /* 0058cfe8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058cfe9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0058cfea: mov esi, ecx */ r_esi = r_ecx;
    /* 0058cfec: push 0x41980000 */ { u32 v = 0x41980000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cff1: mov ecx, esi */ r_ecx = r_esi;
    /* 0058cff3: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58cff8u); f_007aaa30();
    /* 0058cff8: mov ebp, eax */ r_ebp = r_eax;
    /* 0058cffa: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058cfff: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d001: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x58d006u); f_007aaa30();
    /* 0058d006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d008: jne 0x58d012 */ if (!fZ) goto L_0058d012;
L_0058d00a:; BB(0x0058d00a);
    /* 0058d00a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0058d00c: je 0x58d096 */ if (fZ) goto L_0058d096;
L_0058d012:; BB(0x0058d012);
    /* 0058d012: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d014: call 0x521324 */ r_esp -= 4; W32(r_esp, 0x58d019u); f_00521324();
    /* 0058d019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d01b: je 0x58d079 */ if (fZ) goto L_0058d079;
L_0058d01d:; BB(0x0058d01d);
    /* 0058d01d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d022: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d023: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0058d029: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d02b: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x58d02eu); call_ind(t); }
    /* 0058d02e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d030: je 0x58d079 */ if (fZ) goto L_0058d079;
L_0058d032:; BB(0x0058d032);
    /* 0058d032: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d037: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d038: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0058d03e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d040: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x58d043u); call_ind(t); }
    /* 0058d043: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0058d045: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d04a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d04b: mov ecx, dword ptr [esi + 0x398] */ r_ecx = R32((u32)(r_esi+0x398u));
    /* 0058d051: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0058d053: call dword ptr [edx + 0x68] */ { u32 t = R32((u32)(r_edx+0x68u)); r_esp -= 4; W32(r_esp, 0x58d056u); call_ind(t); }
    /* 0058d056: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0058d058: je 0x58d079 */ if (fZ) goto L_0058d079;
L_0058d05a:; BB(0x0058d05a);
    /* 0058d05a: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d05c: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x58d061u); f_007751b0();
    /* 0058d061: fcomp dword ptr [0x928d44] */ fx_compare(ST(0), R_F32((u32)(0x928d44u))); FPOP();
    /* 0058d067: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0058d069: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0058d06a: ja 0x58d079 */ if ((!fC&&!fZ)) goto L_0058d079;
L_0058d06c:; BB(0x0058d06c);
    /* 0058d06c: push dword ptr [esi + 0x398] */ { u32 v = R32((u32)(r_esi+0x398u)); r_esp -= 4; W32(r_esp, v); }
    /* 0058d072: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d074: call 0x51fe4c */ r_esp -= 4; W32(r_esp, 0x58d079u); f_0051fe4c();
L_0058d079:; BB(0x0058d079);
    /* 0058d079: push 0x138 */ { u32 v = 0x138u; r_esp -= 4; W32(r_esp, v); }
    /* 0058d07e: mov ecx, esi */ r_ecx = r_esi;
    /* 0058d080: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x58d085u); f_007879b8();
    /* 0058d085: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0058d088: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0058d08a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d08b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0058d08c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0058d08d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0058d08e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x58d093u); f_00814298();
    /* 0058d093: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0058d096:; BB(0x0058d096);
    /* 0058d096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0058d097: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0058d098: ret  */ FN_RET(0x0058cfe8); r_esp += 4; return;
}

