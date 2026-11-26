#include "protos.h"

void f_0054a160(void) /* sub_54A160 */
{
    FN_ENTER(0x0054a160);
    /* 0054a160: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a161: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a162: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a163: mov edi, ecx */ r_edi = r_ecx;
    /* 0054a165: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0054a169: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0054a16c: and eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054a171: and ebx, 0xffffefff */ {  u32 a = r_ebx; u32 b = 0xffffefffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0054a177: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 0054a17a: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054a17d: je 0x54a1c5 */ if (fZ) goto L_0054a1c5;
L_0054a17f:; BB(0x0054a17f);
    /* 0054a17f: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a182: jge 0x54a1cb */ if ((fS==fO)) goto L_0054a1cb;
L_0054a184:; BB(0x0054a184);
    /* 0054a184: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a186: je 0x54a1bc */ if (fZ) goto L_0054a1bc;
L_0054a188:; BB(0x0054a188);
    /* 0054a188: mov ebp, dword ptr [edi] */ r_ebp = R32((u32)(r_edi));
    /* 0054a18a: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0054a190: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 0054a193: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a194: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054a197: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a19a: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0054a1a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a1a2: call 0x7a9a6c */ r_esp -= 4; W32(r_esp, 0x54a1a7u); f_007a9a6c();
    /* 0054a1a7: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0054a1ad: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a1b0: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0054a1b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054a1b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a1b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a1b9: ret 4 */ FN_RET(0x0054a160); r_esp += 8; return;
L_0054a1bc:; BB(0x0054a1bc);
    /* 0054a1bc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054a1be: mov word ptr [eax + 0xb8], bx */ W16((u32)(r_eax+0xb8u), (u16)r_ebx);
L_0054a1c5:; BB(0x0054a1c5);
    /* 0054a1c5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054a1c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a1c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a1c8: ret 4 */ FN_RET(0x0054a160); r_esp += 8; return;
L_0054a1cb:; BB(0x0054a1cb);
    /* 0054a1cb: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a1ce: jge 0x54a229 */ if ((fS==fO)) goto L_0054a229;
L_0054a1d0:; BB(0x0054a1d0);
    /* 0054a1d0: mov ebp, dword ptr [0xa738c8] */ r_ebp = R32((u32)(0xa738c8u));
    /* 0054a1d6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1d8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a1da: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x54a1dfu); f_005b8610();
    /* 0054a1df: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a1e1: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0054a1e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a1e6: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x54a1ebu); f_005b8624();
    /* 0054a1eb: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0054a1ee: push dword ptr [ebx*8 + 0x9bd314] */ { u32 v = R32((u32)(r_ebx*8+0x9bd314u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a1f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a1f7: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x54a1fcu); f_005b8638();
    /* 0054a1fc: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0054a1ff: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0054a202: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054a205: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0054a208: fadd dword ptr [edx*4 + 0x9240a8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9240a8u));
    /* 0054a20f: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 0054a212: mov eax, dword ptr [ebx*8 + 0x9bd318] */ r_eax = R32((u32)(r_ebx*8+0x9bd318u));
    /* 0054a219: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0054a220: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0054a223: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054a224: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a225: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a226: ret 4 */ FN_RET(0x0054a160); r_esp += 8; return;
L_0054a229:; BB(0x0054a229);
    /* 0054a229: mov ebp, dword ptr [0xa738c8] */ r_ebp = R32((u32)(0xa738c8u));
    /* 0054a22f: lea ebx, [ebx + ebx*4] */ r_ebx = (u32)(r_ebx+r_ebx*4);
    /* 0054a232: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0054a235: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054a237: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a239: push dword ptr [eax + 0x9bd29c] */ { u32 v = R32((u32)(r_eax+0x9bd29cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a23f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x54a244u); f_005b8610();
    /* 0054a244: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 0054a247: push dword ptr [ebx*4 + 0x9bd29c] */ { u32 v = R32((u32)(r_ebx*4+0x9bd29cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a24e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a250: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x54a255u); f_005b8624();
    /* 0054a255: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0054a258: push dword ptr [ebx*4 + 0x9bd2a0] */ { u32 v = R32((u32)(r_ebx*4+0x9bd2a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a25f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a261: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x54a266u); f_005b8638();
    /* 0054a266: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 0054a269: push dword ptr [ebx*4 + 0x9bd2a4] */ { u32 v = R32((u32)(r_ebx*4+0x9bd2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a270: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a272: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x54a277u); f_005b8610();
    /* 0054a277: mov dword ptr [edi + 0x14], eax */ W32((u32)(r_edi+0x14u), r_eax);
    /* 0054a27a: push dword ptr [ebx*4 + 0x9bd2a4] */ { u32 v = R32((u32)(r_ebx*4+0x9bd2a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a281: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a283: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x54a288u); f_005b8624();
    /* 0054a288: mov dword ptr [edi + 0x18], eax */ W32((u32)(r_edi+0x18u), r_eax);
    /* 0054a28b: push dword ptr [ebx*4 + 0x9bd2a8] */ { u32 v = R32((u32)(r_ebx*4+0x9bd2a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a292: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a294: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x54a299u); f_005b8638();
    /* 0054a299: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0054a29c: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 0054a29f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 0054a2a2: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0054a2a5: fadd dword ptr [edx*4 + 0x9240a8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9240a8u));
    /* 0054a2ac: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 0054a2af: mov eax, dword ptr [ebx*4 + 0x9bd2ac] */ r_eax = R32((u32)(r_ebx*4+0x9bd2acu));
    /* 0054a2b6: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 0054a2bd: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 0054a2c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054a2c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a2c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a2c3: ret 4 */ FN_RET(0x0054a160); r_esp += 8; return;
}

void f_0054a2c8(void) /* sub_54A2C8 */
{
    FN_ENTER(0x0054a2c8);
    /* 0054a2c8: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0054a2cb: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054a2ce: je 0x54a30a */ if (fZ) goto L_0054a30a;
L_0054a2d0:; BB(0x0054a2d0);
    /* 0054a2d0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a2d3: jl 0x54a307 */ if ((fS!=fO)) goto L_0054a307;
L_0054a2d5:; BB(0x0054a2d5);
    /* 0054a2d5: movzx eax, byte ptr [0xa738d8] */ r_eax = (u32)R8((u32)(0xa738d8u));
    /* 0054a2dc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0054a2de: jne 0x54a2f9 */ if (!fZ) goto L_0054a2f9;
L_0054a2e0:; BB(0x0054a2e0);
    /* 0054a2e0: fld dword ptr [0x9240b4] */ FPUSH(R_F32((u32)(0x9240b4u)));
    /* 0054a2e6: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 0054a2e9: fstp dword ptr [0xa738dc] */ W_F32((u32)(0xa738dcu), ST(0)); FPOP();
    /* 0054a2ef: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 0054a2f4: mov byte ptr [0xa738d8], al */ W8((u32)(0xa738d8u), (u8)r_eax);
L_0054a2f9:; BB(0x0054a2f9);
    /* 0054a2f9: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0054a2fc: fcomp dword ptr [0xa738dc] */ fx_compare(ST(0), R_F32((u32)(0xa738dcu))); FPOP();
    /* 0054a302: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054a304: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054a305: je 0x54a30a */ if (fZ) goto L_0054a30a;
L_0054a307:; BB(0x0054a307);
    /* 0054a307: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a309: ret  */ FN_RET(0x0054a2c8); r_esp += 4; return;
L_0054a30a:; BB(0x0054a30a);
    /* 0054a30a: mov eax, 1 */ r_eax = 0x1u;
    /* 0054a30f: ret  */ FN_RET(0x0054a2c8); r_esp += 4; return;
}

void f_0054a310(void) /* sub_54A310 */
{
    FN_ENTER(0x0054a310);
    /* 0054a310: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0054a313: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054a316: je 0x54a38a */ if (fZ) goto L_0054a38a;
L_0054a318:; BB(0x0054a318);
    /* 0054a318: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a31b: jl 0x54a383 */ if ((fS!=fO)) goto L_0054a383;
L_0054a31d:; BB(0x0054a31d);
    /* 0054a31d: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a320: jge 0x54a33e */ if ((fS==fO)) goto L_0054a33e;
L_0054a322:; BB(0x0054a322);
    /* 0054a322: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0054a325: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 0054a328: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 0054a32b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054a32d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054a32f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054a330: ja 0x54a338 */ if ((!fC&&!fZ)) goto L_0054a338;
L_0054a332:; BB(0x0054a332);
    /* 0054a332: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0054a334: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0054a337: ret  */ FN_RET(0x0054a310); r_esp += 4; return;
L_0054a338:; BB(0x0054a338);
    /* 0054a338: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054a33a: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0054a33d: ret  */ FN_RET(0x0054a310); r_esp += 4; return;
L_0054a33e:; BB(0x0054a33e);
    /* 0054a33e: movzx eax, byte ptr [0xa738e0] */ r_eax = (u32)R8((u32)(0xa738e0u));
    /* 0054a345: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 0054a347: jne 0x54a364 */ if (!fZ) goto L_0054a364;
L_0054a349:; BB(0x0054a349);
    /* 0054a349: fld dword ptr [0x9240b0] */ FPUSH(R_F32((u32)(0x9240b0u)));
    /* 0054a34f: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 0054a352: fst dword ptr [0xa738e4] */ W_F32((u32)(0xa738e4u), ST(0));
    /* 0054a358: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fO = 0; }
    /* 0054a35d: mov byte ptr [0xa738e0], al */ W8((u32)(0xa738e0u), (u8)r_eax);
    /* 0054a362: jmp 0x54a36a */ goto L_0054a36a;
L_0054a364:; BB(0x0054a364);
    /* 0054a364: fld dword ptr [0xa738e4] */ FPUSH(R_F32((u32)(0xa738e4u)));
L_0054a36a:; BB(0x0054a36a);
    /* 0054a36a: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 0054a36d: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 0054a370: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0054a372: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054a374: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054a375: jb 0x54a37d */ if (fC) goto L_0054a37d;
L_0054a377:; BB(0x0054a377);
    /* 0054a377: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054a379: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0054a37c: ret  */ FN_RET(0x0054a310); r_esp += 4; return;
L_0054a37d:; BB(0x0054a37d);
    /* 0054a37d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0054a37f: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 0054a382: ret  */ FN_RET(0x0054a310); r_esp += 4; return;
L_0054a383:; BB(0x0054a383);
    /* 0054a383: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0054a385: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54a38au); f_007aa094();
L_0054a38a:; BB(0x0054a38a);
    /* 0054a38a: ret  */ FN_RET(0x0054a310); r_esp += 4; return;
}

void f_0054a38c(void) /* sub_54A38C */
{
    FN_ENTER(0x0054a38c);
    /* 0054a38c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a38d: mov edi, ecx */ r_edi = r_ecx;
    /* 0054a38f: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0054a392: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054a395: je 0x54a423 */ if (fZ) goto L_0054a423;
L_0054a39b:; BB(0x0054a39b);
    /* 0054a39b: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a39e: jl 0x54a408 */ if ((fS!=fO)) goto L_0054a408;
L_0054a3a0:; BB(0x0054a3a0);
    /* 0054a3a0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0054a3a3: jge 0x54a3ca */ if ((fS==fO)) goto L_0054a3ca;
L_0054a3a5:; BB(0x0054a3a5);
    /* 0054a3a5: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0054a3a8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54a3adu); f_00829cc8();
    /* 0054a3ad: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x54a3b2u); f_0082fa9c();
    /* 0054a3b2: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3b5: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3b8: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3bb: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x54a3c0u); f_0083046c();
    /* 0054a3c0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a3c3: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x54a3c8u); f_0082faac();
    /* 0054a3c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a3c9: ret  */ FN_RET(0x0054a38c); r_esp += 4; return;
L_0054a3ca:; BB(0x0054a3ca);
    /* 0054a3ca: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x54a3cfu); f_0082fa9c();
    /* 0054a3cf: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 0054a3d2: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54a3d7u); f_00829cc8();
    /* 0054a3d7: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3da: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3dd: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3e0: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x54a3e5u); f_0083046c();
    /* 0054a3e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a3e8: mov ecx, dword ptr [edi + 0x18] */ r_ecx = R32((u32)(r_edi+0x18u));
    /* 0054a3eb: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54a3f0u); f_00829cc8();
    /* 0054a3f0: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3f3: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3f6: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a3f9: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x54a3feu); f_0083046c();
    /* 0054a3fe: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a401: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x54a406u); f_0082faac();
    /* 0054a406: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a407: ret  */ FN_RET(0x0054a38c); r_esp += 4; return;
L_0054a408:; BB(0x0054a408);
    /* 0054a408: mov ecx, dword ptr [0xa738c8] */ r_ecx = R32((u32)(0xa738c8u));
    /* 0054a40e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a410: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x54a415u); f_005b8624();
    /* 0054a415: mov ecx, eax */ r_ecx = r_eax;
    /* 0054a417: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54a41cu); f_00829cc8();
    /* 0054a41c: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 0054a41e: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x54a423u); f_007aa668();
L_0054a423:; BB(0x0054a423);
    /* 0054a423: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054a424: ret  */ FN_RET(0x0054a38c); r_esp += 4; return;
}

void f_0054a428(void) /* sub_54A428 */
{
    FN_ENTER(0x0054a428);
    /* 0054a428: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a429: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0054a42b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0054a42d: call 0x54a44c */ r_esp -= 4; W32(r_esp, 0x54a432u); f_0054a44c();
    /* 0054a432: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054a436: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a438: jne 0x54a43e */ if (!fZ) goto L_0054a43e;
L_0054a43a:; BB(0x0054a43a);
    /* 0054a43a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054a43b: ret 4 */ FN_RET(0x0054a428); r_esp += 8; return;
L_0054a43e:; BB(0x0054a43e);
    /* 0054a43e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a43f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x54a444u); f_005c2f74();
    /* 0054a444: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054a445: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054a446: ret 4 */ FN_RET(0x0054a428); r_esp += 8; return;
}

void f_0054a44c(void) /* sub_54A44C */
{
    FN_ENTER(0x0054a44c);
    /* 0054a44c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a44d: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a44f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a451: push 0x8d5b88 */ { u32 v = 0x8d5b88u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a456: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054a45c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a45d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054a464: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a467: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054a46a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0054a46d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0054a470: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054a473: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0054a476: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054a47d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a480: mov edx, dword ptr [eax + 0x4c8] */ r_edx = R32((u32)(r_eax+0x4c8u));
    /* 0054a486: mov dword ptr [eax], 0xb03be0 */ W32((u32)(r_eax), 0xb03be0u);
    /* 0054a48c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a48e: je 0x54a4aa */ if (fZ) goto L_0054a4aa;
L_0054a490:; BB(0x0054a490);
    /* 0054a490: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054a494: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a499: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054a49d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a4a0: mov dword ptr [eax + 0x4c8], 0 */ W32((u32)(r_eax+0x4c8u), 0x0u);
L_0054a4aa:; BB(0x0054a4aa);
    /* 0054a4aa: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 0054a4b0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a4b2: je 0x54a4ce */ if (fZ) goto L_0054a4ce;
L_0054a4b4:; BB(0x0054a4b4);
    /* 0054a4b4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054a4b8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a4bd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054a4c1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a4c4: mov dword ptr [eax + 0x4cc], 0 */ W32((u32)(r_eax+0x4ccu), 0x0u);
L_0054a4ce:; BB(0x0054a4ce);
    /* 0054a4ce: mov edx, dword ptr [eax + 0x4d0] */ r_edx = R32((u32)(r_eax+0x4d0u));
    /* 0054a4d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a4d6: je 0x54a4f2 */ if (fZ) goto L_0054a4f2;
L_0054a4d8:; BB(0x0054a4d8);
    /* 0054a4d8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054a4dc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a4e1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054a4e5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a4e8: mov dword ptr [eax + 0x4d0], 0 */ W32((u32)(r_eax+0x4d0u), 0x0u);
L_0054a4f2:; BB(0x0054a4f2);
    /* 0054a4f2: mov edx, dword ptr [eax + 0x4ac] */ r_edx = R32((u32)(r_eax+0x4acu));
    /* 0054a4f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a4fa: je 0x54a516 */ if (fZ) goto L_0054a516;
L_0054a4fc:; BB(0x0054a4fc);
    /* 0054a4fc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054a500: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a505: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054a509: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a50c: mov dword ptr [eax + 0x4ac], 0 */ W32((u32)(r_eax+0x4acu), 0x0u);
L_0054a516:; BB(0x0054a516);
    /* 0054a516: mov ecx, dword ptr [eax + 0x4a8] */ r_ecx = R32((u32)(r_eax+0x4a8u));
    /* 0054a51c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a51e: je 0x54a536 */ if (fZ) goto L_0054a536;
L_0054a520:; BB(0x0054a520);
    /* 0054a520: je 0x54a52c */ if (fZ) goto L_0054a52c;
L_0054a522:; BB(0x0054a522);
    /* 0054a522: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a524: call 0x418aa8 */ r_esp -= 4; W32(r_esp, 0x54a529u); f_00418aa8();
    /* 0054a529: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0054a52c:; BB(0x0054a52c);
    /* 0054a52c: mov dword ptr [eax + 0x4a8], 0 */ W32((u32)(r_eax+0x4a8u), 0x0u);
L_0054a536:; BB(0x0054a536);
    /* 0054a536: mov ecx, dword ptr [eax + 0x4a0] */ r_ecx = R32((u32)(r_eax+0x4a0u));
    /* 0054a53c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a53e: je 0x54a555 */ if (fZ) goto L_0054a555;
L_0054a540:; BB(0x0054a540);
    /* 0054a540: je 0x54a54b */ if (fZ) goto L_0054a54b;
L_0054a542:; BB(0x0054a542);
    /* 0054a542: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a544: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054a546: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x54a548u); call_ind(t); }
    /* 0054a548: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0054a54b:; BB(0x0054a54b);
    /* 0054a54b: mov dword ptr [eax + 0x4a0], 0 */ W32((u32)(r_eax+0x4a0u), 0x0u);
L_0054a555:; BB(0x0054a555);
    /* 0054a555: mov ecx, dword ptr [eax + 0x49c] */ r_ecx = R32((u32)(r_eax+0x49cu));
    /* 0054a55b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a55d: je 0x54a574 */ if (fZ) goto L_0054a574;
L_0054a55f:; BB(0x0054a55f);
    /* 0054a55f: je 0x54a56a */ if (fZ) goto L_0054a56a;
L_0054a561:; BB(0x0054a561);
    /* 0054a561: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a563: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054a565: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x54a567u); call_ind(t); }
    /* 0054a567: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0054a56a:; BB(0x0054a56a);
    /* 0054a56a: mov dword ptr [eax + 0x49c], 0 */ W32((u32)(r_eax+0x49cu), 0x0u);
L_0054a574:; BB(0x0054a574);
    /* 0054a574: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0054a57a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a57c: je 0x54a5a3 */ if (fZ) goto L_0054a5a3;
L_0054a57e:; BB(0x0054a57e);
    /* 0054a57e: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x54a583u); f_007b9c8c();
    /* 0054a583: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a586: mov ecx, dword ptr [eax + 0x4a4] */ r_ecx = R32((u32)(r_eax+0x4a4u));
    /* 0054a58c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a58e: je 0x54a599 */ if (fZ) goto L_0054a599;
L_0054a590:; BB(0x0054a590);
    /* 0054a590: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a592: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0054a594: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x54a596u); call_ind(t); }
    /* 0054a596: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0054a599:; BB(0x0054a599);
    /* 0054a599: mov dword ptr [eax + 0x4a4], 0 */ W32((u32)(r_eax+0x4a4u), 0x0u);
L_0054a5a3:; BB(0x0054a5a3);
    /* 0054a5a3: mov ecx, eax */ r_ecx = r_eax;
    /* 0054a5a5: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x54a5aau); f_007b9c8c();
    /* 0054a5aa: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0054a5b1: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5b6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a5b9: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054a5be: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5c0: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a5c3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x54a5c8u); f_008586d6();
    /* 0054a5c8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0054a5cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a5d2: add ecx, 0x3dc */ {  u32 a = r_ecx; u32 b = 0x3dcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a5d8: call 0x5122a8 */ r_esp -= 4; W32(r_esp, 0x54a5ddu); f_005122a8();
    /* 0054a5dd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a5e0: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x54a5e5u); f_0051f4fc();
    /* 0054a5e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a5e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054a5ef: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a5f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a5f2: ret  */ FN_RET(0x0054a44c); r_esp += 4; return;
}

void f_0054a5f4(void) /* sub_54A5F4 */
{
    FN_ENTER(0x0054a5f4);
    /* 0054a5f4: mov eax, dword ptr [0xa73930] */ r_eax = R32((u32)(0xa73930u));
    /* 0054a5f9: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a5fc: je 0x54a637 */ if (fZ) goto L_0054a637;
L_0054a5fe:; BB(0x0054a5fe);
    /* 0054a5fe: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a601: je 0x54a60d */ if (fZ) goto L_0054a60d;
L_0054a603:; BB(0x0054a603);
    /* 0054a603: cmp eax, 0x16 */ {  u32 a = r_eax; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a606: je 0x54a60d */ if (fZ) goto L_0054a60d;
L_0054a608:; BB(0x0054a608);
    /* 0054a608: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a60b: jne 0x54a62e */ if (!fZ) goto L_0054a62e;
L_0054a60d:; BB(0x0054a60d);
    /* 0054a60d: mov edx, dword ptr [0xa73928] */ r_edx = R32((u32)(0xa73928u));
    /* 0054a613: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a614: lea eax, [edx + 0xc] */ r_eax = (u32)(r_edx+0xcu);
    /* 0054a617: mov dword ptr [0xa73928], eax */ W32((u32)(0xa73928u), r_eax);
    /* 0054a61c: push 0xa738ec */ { u32 v = 0xa738ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a621: call 0x520c5c */ r_esp -= 4; W32(r_esp, 0x54a626u); f_00520c5c();
    /* 0054a626: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a629: mov eax, dword ptr [0xa73930] */ r_eax = R32((u32)(0xa73930u));
L_0054a62e:; BB(0x0054a62e);
    /* 0054a62e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054a631: mov dword ptr [0xa73930], eax */ W32((u32)(0xa73930u), r_eax);
    /* 0054a636: ret  */ FN_RET(0x0054a5f4); r_esp += 4; return;
L_0054a637:; BB(0x0054a637);
    /* 0054a637: mov edx, dword ptr [0xa7392c] */ r_edx = R32((u32)(0xa7392cu));
    /* 0054a63d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a63f: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x54a644u); f_0082e9e4();
    /* 0054a644: mov eax, dword ptr [0xa73930] */ r_eax = R32((u32)(0xa73930u));
    /* 0054a649: jmp 0x54a62e */ goto L_0054a62e;
}

void f_0054a64c(void) /* sub_54A64C */
{
    FN_ENTER(0x0054a64c);
    /* 0054a64c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a64d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054a64f: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054a652: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a654: call dword ptr [eax + 0x194] */ { u32 t = R32((u32)(r_eax+0x194u)); r_esp -= 4; W32(r_esp, 0x54a65au); call_ind(t); }
    /* 0054a65a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a65c: je 0x54a66e */ if (fZ) goto L_0054a66e;
L_0054a65e:; BB(0x0054a65e);
    /* 0054a65e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054a662: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a663: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a665: call 0x521010 */ r_esp -= 4; W32(r_esp, 0x54a66au); f_00521010();
    /* 0054a66a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a66b: ret 4 */ FN_RET(0x0054a64c); r_esp += 8; return;
L_0054a66e:; BB(0x0054a66e);
    /* 0054a66e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054a672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a673: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054a675: call 0x520f8c */ r_esp -= 4; W32(r_esp, 0x54a67au); f_00520f8c();
    /* 0054a67a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a67b: ret 4 */ FN_RET(0x0054a64c); r_esp += 8; return;
}

void f_0054a680(void)
{
    FN_ENTER(0x0054a680);
    /* 0054a680: mov ecx, dword ptr [0xa7390c] */ r_ecx = R32((u32)(0xa7390cu));
    /* 0054a686: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a688: je 0x54a69d */ if (fZ) goto L_0054a69d;
L_0054a68a:; BB(0x0054a68a);
    /* 0054a68a: je 0x54a693 */ if (fZ) goto L_0054a693;
L_0054a68c:; BB(0x0054a68c);
    /* 0054a68c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a68e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x54a693u); f_004066a8();
L_0054a693:; BB(0x0054a693);
    /* 0054a693: mov dword ptr [0xa7390c], 0 */ W32((u32)(0xa7390cu), 0x0u);
L_0054a69d:; BB(0x0054a69d);
    /* 0054a69d: ret  */ FN_RET(0x0054a680); r_esp += 4; return;
}

void f_0054a6a0(void)
{
    FN_ENTER(0x0054a6a0);
    /* 0054a6a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6a1: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a6a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6a5: push 0x8d5bb0 */ { u32 v = 0x8d5bb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054a6b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054a6b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a6bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054a6be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0054a6c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0054a6c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0054a6c7: push 0x4ec */ { u32 v = 0x4ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a6cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0054a6d3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x54a6d8u); f_005caba4();
    /* 0054a6d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054a6d9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0054a6dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a6de: je 0x54a717 */ if (fZ) goto L_0054a717;
L_0054a6e0:; BB(0x0054a6e0);
    /* 0054a6e0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0054a6e7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054a6ee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a6f1: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a6f7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a6fa: call 0x54a71c */ r_esp -= 4; W32(r_esp, 0x54a6ffu); f_0054a71c();
    /* 0054a6ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0054a702: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0054a709:; BB(0x0054a709);
    /* 0054a709: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a70c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054a713: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a715: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a716: ret  */ FN_RET(0x0054a6a0); r_esp += 4; return;
L_0054a717:; BB(0x0054a717);
    /* 0054a717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a719: jmp 0x54a709 */ goto L_0054a709;
}

void f_0054a71c(void) /* sub_54A71C */
{
    FN_ENTER(0x0054a71c);
    /* 0054a71c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a71d: mov ebp, esp */ r_ebp = r_esp;
    /* 0054a71f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a721: push 0x8d5c00 */ { u32 v = 0x8d5c00u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a726: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0054a72c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a72d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0054a734: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a737: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0054a73a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0054a73d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0054a740: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0054a743: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0054a746: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a749: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0054a74c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0054a74f: call 0x5216f4 */ r_esp -= 4; W32(r_esp, 0x54a754u); f_005216f4();
    /* 0054a754: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0054a75b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054a75e: mov dword ptr [ecx], 0xb03be0 */ W32((u32)(r_ecx), 0xb03be0u);
    /* 0054a764: add ecx, 0x3dc */ {  u32 a = r_ecx; u32 b = 0x3dcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0054a76a: call 0x5122f8 */ r_esp -= 4; W32(r_esp, 0x54a76fu); f_005122f8();
    /* 0054a76f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0054a776: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a77b: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a780: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054a783: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a785: add eax, 0x3f8 */ {  u32 a = r_eax; u32 b = 0x3f8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054a78a: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a78c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a78d: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x54a792u); f_00858736();
    /* 0054a792: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0054a799: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054a79c: mov eax, dword ptr [0x9bd588] */ r_eax = R32((u32)(0x9bd588u));
    /* 0054a7a1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0054a7a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054a7a5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0054a7a8: call 0x51f750 */ r_esp -= 4; W32(r_esp, 0x54a7adu); f_0051f750();
    /* 0054a7ad: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054a7b0: call 0x54a7d0 */ r_esp -= 4; W32(r_esp, 0x54a7b5u); f_0054a7d0();
    /* 0054a7b5: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054a7b8: call 0x54d8c8 */ r_esp -= 4; W32(r_esp, 0x54a7bdu); f_0054d8c8();
    /* 0054a7bd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0054a7c0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0054a7c3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0054a7ca: mov esp, ebp */ r_esp = r_ebp;
    /* 0054a7cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a7cd: ret 8 */ FN_RET(0x0054a71c); r_esp += 12; return;
}

void f_0054a7d0(void) /* sub_54A7D0 */
{
    FN_ENTER(0x0054a7d0);
    /* 0054a7d0: fld dword ptr [0x924278] */ FPUSH(R_F32((u32)(0x924278u)));
    /* 0054a7d6: fld dword ptr [0x924274] */ FPUSH(R_F32((u32)(0x924274u)));
    /* 0054a7dc: fadd dword ptr [ecx + 0x364] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x364u));
    /* 0054a7e2: fld dword ptr [ecx + 0x35c] */ FPUSH(R_F32((u32)(r_ecx+0x35cu)));
    /* 0054a7e8: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0054a7ea: fld dword ptr [0x92426c] */ FPUSH(R_F32((u32)(0x92426cu)));
    /* 0054a7f0: fld dword ptr [0x924270] */ FPUSH(R_F32((u32)(0x924270u)));
    /* 0054a7f6: fadd dword ptr [ecx + 0x36c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x36cu));
    /* 0054a7fc: fld dword ptr [ecx + 0x360] */ FPUSH(R_F32((u32)(r_ecx+0x360u)));
    /* 0054a802: fld dword ptr [ecx + 0x368] */ FPUSH(R_F32((u32)(r_ecx+0x368u)));
    /* 0054a808: mov edx, dword ptr [ecx + 0x370] */ r_edx = R32((u32)(r_ecx+0x370u));
    /* 0054a80e: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0054a810: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0054a812: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0054a814: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0054a816: fstp dword ptr [ecx + 0x4b0] */ W_F32((u32)(r_ecx+0x4b0u), ST(0)); FPOP();
    /* 0054a81c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054a81e: fstp dword ptr [ecx + 0x4c0] */ W_F32((u32)(r_ecx+0x4c0u), ST(0)); FPOP();
    /* 0054a824: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0054a826: fstp dword ptr [ecx + 0x4b4] */ W_F32((u32)(r_ecx+0x4b4u), ST(0)); FPOP();
    /* 0054a82c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0054a82e: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0054a830: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054a832: fstp dword ptr [ecx + 0x4bc] */ W_F32((u32)(r_ecx+0x4bcu), ST(0)); FPOP();
    /* 0054a838: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0054a839: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0054a83b: ja 0x54a83f */ if ((!fC&&!fZ)) goto L_0054a83f;
L_0054a83d:; BB(0x0054a83d);
    /* 0054a83d: fst st(1) */ ST(1) = ST(0);
L_0054a83f:; BB(0x0054a83f);
    /* 0054a83f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0054a841: fstp dword ptr [ecx + 0x4b8] */ W_F32((u32)(r_ecx+0x4b8u), ST(0)); FPOP();
    /* 0054a847: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054a849: jle 0x54a856 */ if ((fZ||fS!=fO)) goto L_0054a856;
L_0054a84b:; BB(0x0054a84b);
    /* 0054a84b: mov dword ptr [ecx + 0x4c4], 1 */ W32((u32)(r_ecx+0x4c4u), 0x1u);
    /* 0054a855: ret  */ FN_RET(0x0054a7d0); r_esp += 4; return;
L_0054a856:; BB(0x0054a856);
    /* 0054a856: mov dword ptr [ecx + 0x4c4], 0 */ W32((u32)(r_ecx+0x4c4u), 0x0u);
    /* 0054a860: ret  */ FN_RET(0x0054a7d0); r_esp += 4; return;
}

void f_0054a864(void) /* sub_54A864 */
{
    FN_ENTER(0x0054a864);
    /* 0054a864: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054a865: mov esi, ecx */ r_esi = r_ecx;
    /* 0054a867: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x54a86cu); f_004f7c84();
    /* 0054a86c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a86e: je 0x54a87c */ if (fZ) goto L_0054a87c;
L_0054a870:; BB(0x0054a870);
    /* 0054a870: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054a872: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a874: call dword ptr [eax + 0x1ac] */ { u32 t = R32((u32)(r_eax+0x1acu)); r_esp -= 4; W32(r_esp, 0x54a87au); call_ind(t); }
    /* 0054a87a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054a87b: ret  */ FN_RET(0x0054a864); r_esp += 4; return;
L_0054a87c:; BB(0x0054a87c);
    /* 0054a87c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054a87e: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a880: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x54a886u); call_ind(t); }
    /* 0054a886: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a889: je 0x54a8bb */ if (fZ) goto L_0054a8bb;
L_0054a88b:; BB(0x0054a88b);
    /* 0054a88b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054a88d: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a88f: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x54a895u); call_ind(t); }
    /* 0054a895: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0054a89a: cmp eax, dword ptr [0xa73920] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa73920u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a8a0: je 0x54a8bb */ if (fZ) goto L_0054a8bb;
L_0054a8a2:; BB(0x0054a8a2);
    /* 0054a8a2: mov dword ptr [0xa73920], eax */ W32((u32)(0xa73920u), r_eax);
    /* 0054a8a7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0054a8a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a8aa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a8ab: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0054a8ad: push dword ptr [0xa73924] */ { u32 v = R32((u32)(0xa73924u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054a8b3: call 0x81a2b0 */ r_esp -= 4; W32(r_esp, 0x54a8b8u); f_0081a2b0();
    /* 0054a8b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054a8bb:; BB(0x0054a8bb);
    /* 0054a8bb: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a8bd: call 0x54a8f0 */ r_esp -= 4; W32(r_esp, 0x54a8c2u); f_0054a8f0();
    /* 0054a8c2: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0054a8c8: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a8cd: je 0x54a8d6 */ if (fZ) goto L_0054a8d6;
L_0054a8cf:; BB(0x0054a8cf);
    /* 0054a8cf: mov byte ptr [0xa72b88], 1 */ W8((u32)(0xa72b88u), 0x1u);
L_0054a8d6:; BB(0x0054a8d6);
    /* 0054a8d6: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a8d8: call 0x54aa50 */ r_esp -= 4; W32(r_esp, 0x54a8ddu); f_0054aa50();
    /* 0054a8dd: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a8df: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x54a8e4u); f_006401f0();
    /* 0054a8e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0054a8e6: mov ecx, esi */ r_ecx = r_esi;
    /* 0054a8e8: call dword ptr [eax + 0x198] */ { u32 t = R32((u32)(r_eax+0x198u)); r_esp -= 4; W32(r_esp, 0x54a8eeu); call_ind(t); }
    /* 0054a8ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054a8ef: ret  */ FN_RET(0x0054a864); r_esp += 4; return;
}

void f_0054a8f0(void) /* sub_54A8F0 */
{
    FN_ENTER(0x0054a8f0);
    /* 0054a8f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054a8f1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054a8f4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054a8f6: mov edx, dword ptr [ebp + 0x3c8] */ r_edx = R32((u32)(r_ebp+0x3c8u));
    /* 0054a8fc: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054a8ff: je 0x54a97d */ if (fZ) goto L_0054a97d;
L_0054a901:; BB(0x0054a901);
    /* 0054a901: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
    /* 0054a907: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0054a909: jle 0x54aa3f */ if ((fZ||fS!=fO)) goto L_0054aa3f;
L_0054a90f:; BB(0x0054a90f);
    /* 0054a90f: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0054a912: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0054a915: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054a918: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0054a91b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054a91f: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0054a923: fadd dword ptr [0x924268] */ ST(0) = ST(0) + R_F32((u32)(0x924268u));
    /* 0054a929: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054a92d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054a931: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0054a936: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a939: je 0x54a9ff */ if (fZ) goto L_0054a9ff;
L_0054a93f:; BB(0x0054a93f);
    /* 0054a93f: mov ecx, dword ptr [ebp + 0x4cc] */ r_ecx = R32((u32)(r_ebp+0x4ccu));
    /* 0054a945: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a947: je 0x54a9e3 */ if (fZ) goto L_0054a9e3;
L_0054a94d:; BB(0x0054a94d);
    /* 0054a94d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054a950: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a951: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x54a956u); f_00508db8();
L_0054a956:; BB(0x0054a956);
    /* 0054a956: mov ecx, dword ptr [ebp + 0x4d0] */ r_ecx = R32((u32)(r_ebp+0x4d0u));
    /* 0054a95c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a95e: je 0x54a9c4 */ if (fZ) goto L_0054a9c4;
L_0054a960:; BB(0x0054a960);
    /* 0054a960: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054a963: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a964: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x54a969u); f_00508db8();
    /* 0054a969: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
L_0054a96f:; BB(0x0054a96f);
    /* 0054a96f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0054a972: mov dword ptr [ebp + 0x498], eax */ W32((u32)(r_ebp+0x498u), r_eax);
    /* 0054a978: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054a97b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a97c: ret  */ FN_RET(0x0054a8f0); r_esp += 4; return;
L_0054a97d:; BB(0x0054a97d);
    /* 0054a97d: mov edx, dword ptr [ebp + 0x4cc] */ r_edx = R32((u32)(r_ebp+0x4ccu));
    /* 0054a983: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a985: je 0x54a99e */ if (fZ) goto L_0054a99e;
L_0054a987:; BB(0x0054a987);
    /* 0054a987: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054a98b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a990: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054a994: mov dword ptr [ebp + 0x4cc], 0 */ W32((u32)(r_ebp+0x4ccu), 0x0u);
L_0054a99e:; BB(0x0054a99e);
    /* 0054a99e: mov edx, dword ptr [ebp + 0x4d0] */ r_edx = R32((u32)(r_ebp+0x4d0u));
    /* 0054a9a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054a9a6: je 0x54a9bf */ if (fZ) goto L_0054a9bf;
L_0054a9a8:; BB(0x0054a9a8);
    /* 0054a9a8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0054a9ac: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054a9b1: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0054a9b5: mov dword ptr [ebp + 0x4d0], 0 */ W32((u32)(r_ebp+0x4d0u), 0x0u);
L_0054a9bf:; BB(0x0054a9bf);
    /* 0054a9bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054a9c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054a9c3: ret  */ FN_RET(0x0054a8f0); r_esp += 4; return;
L_0054a9c4:; BB(0x0054a9c4);
    /* 0054a9c4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054a9c7: push 0x219 */ { u32 v = 0x219u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9cd: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x54a9d2u); f_00509590();
    /* 0054a9d2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a9d5: mov dword ptr [ebp + 0x4d0], eax */ W32((u32)(r_ebp+0x4d0u), r_eax);
    /* 0054a9db: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
    /* 0054a9e1: jmp 0x54a96f */ goto L_0054a96f;
L_0054a9e3:; BB(0x0054a9e3);
    /* 0054a9e3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054a9e6: push 0x215 */ { u32 v = 0x215u; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054a9ec: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x54a9f1u); f_00509590();
    /* 0054a9f1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054a9f4: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 0054a9fa: jmp 0x54a956 */ goto L_0054a956;
L_0054a9ff:; BB(0x0054a9ff);
    /* 0054a9ff: mov ecx, dword ptr [ebp + 0x4cc] */ r_ecx = R32((u32)(r_ebp+0x4ccu));
    /* 0054aa05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aa07: je 0x54aa1d */ if (fZ) goto L_0054aa1d;
L_0054aa09:; BB(0x0054aa09);
    /* 0054aa09: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054aa0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa0d: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x54aa12u); f_00508db8();
    /* 0054aa12: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
    /* 0054aa18: jmp 0x54a96f */ goto L_0054a96f;
L_0054aa1d:; BB(0x0054aa1d);
    /* 0054aa1d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054aa20: push 0x216 */ { u32 v = 0x216u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa25: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa26: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x54aa2bu); f_00509590();
    /* 0054aa2b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aa2e: mov dword ptr [ebp + 0x4cc], eax */ W32((u32)(r_ebp+0x4ccu), r_eax);
    /* 0054aa34: mov eax, dword ptr [ebp + 0x498] */ r_eax = R32((u32)(r_ebp+0x498u));
    /* 0054aa3a: jmp 0x54a96f */ goto L_0054a96f;
L_0054aa3f:; BB(0x0054aa3f);
    /* 0054aa3f: and edx, 0xffffffef */ {  u32 a = r_edx; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0054aa42: mov dword ptr [ebp + 0x3c8], edx */ W32((u32)(r_ebp+0x3c8u), r_edx);
    /* 0054aa48: jmp 0x54a96f */ goto L_0054a96f;
}

void f_0054aa50(void) /* sub_54AA50 */
{
    FN_ENTER(0x0054aa50);
    /* 0054aa50: fld dword ptr [0x924264] */ FPUSH(R_F32((u32)(0x924264u)));
    /* 0054aa56: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 0054aa59: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0054aa5c: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 0054aa5f: fst dword ptr [ecx + 0x304] */ W_F32((u32)(r_ecx+0x304u), ST(0));
    /* 0054aa65: fstp dword ptr [ecx + 0x78] */ W_F32((u32)(r_ecx+0x78u), ST(0)); FPOP();
    /* 0054aa68: mov dword ptr [ecx + 0x300], eax */ W32((u32)(r_ecx+0x300u), r_eax);
    /* 0054aa6e: mov dword ptr [ecx + 0x308], edx */ W32((u32)(r_ecx+0x308u), r_edx);
    /* 0054aa74: mov dword ptr [ecx + 0x74], eax */ W32((u32)(r_ecx+0x74u), r_eax);
    /* 0054aa77: mov dword ptr [ecx + 0x7c], edx */ W32((u32)(r_ecx+0x7cu), r_edx);
    /* 0054aa7a: ret  */ FN_RET(0x0054aa50); r_esp += 4; return;
}

void f_0054aa7c(void) /* sub_54AA7C */
{
    FN_ENTER(0x0054aa7c);
    /* 0054aa7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0054aa80: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054aa83: mov edi, ecx */ r_edi = r_ecx;
    /* 0054aa85: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x54aa8au); f_004f7c84();
    /* 0054aa8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aa8c: je 0x54aaa0 */ if (fZ) goto L_0054aaa0;
L_0054aa8e:; BB(0x0054aa8e);
    /* 0054aa8e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054aa90: mov ecx, edi */ r_ecx = r_edi;
    /* 0054aa92: call dword ptr [eax + 0x1b0] */ { u32 t = R32((u32)(r_eax+0x1b0u)); r_esp -= 4; W32(r_esp, 0x54aa98u); call_ind(t); }
    /* 0054aa98: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054aa9b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054aa9c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054aa9d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054aa9e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054aa9f: ret  */ FN_RET(0x0054aa7c); r_esp += 4; return;
L_0054aaa0:; BB(0x0054aaa0);
    /* 0054aaa0: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 0054aaa6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054aaa8: jne 0x54ac9c */ if (!fZ) goto L_0054ac9c;
L_0054aaae:; BB(0x0054aaae);
    /* 0054aaae: call 0x694cc8 */ r_esp -= 4; W32(r_esp, 0x54aab3u); f_00694cc8();
    /* 0054aab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aab5: je 0x54aae9 */ if (fZ) goto L_0054aae9;
L_0054aab7:; BB(0x0054aab7);
    /* 0054aab7: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x54aabcu); f_00807ac0();
    /* 0054aabc: cmp eax, 0x23 */ {  u32 a = r_eax; u32 b = 0x23u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aabf: je 0x54acec */ if (fZ) goto L_0054acec;
L_0054aac5:; BB(0x0054aac5);
    /* 0054aac5: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aaca: mov ecx, edi */ r_ecx = r_edi;
    /* 0054aacc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054aace: push dword ptr [0x921684] */ { u32 v = R32((u32)(0x921684u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054aad4: push dword ptr [0xa72eb0] */ { u32 v = R32((u32)(0xa72eb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054aada: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x54aaddu); call_ind(t); }
    /* 0054aadd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_0054aae0:; BB(0x0054aae0);
    /* 0054aae0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aae2: jne 0x54ab0a */ if (!fZ) goto L_0054ab0a;
L_0054aae4:; BB(0x0054aae4);
    /* 0054aae4: jmp 0x54ac9c */ goto L_0054ac9c;
L_0054aae9:; BB(0x0054aae9);
    /* 0054aae9: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aaee: mov ecx, edi */ r_ecx = r_edi;
    /* 0054aaf0: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054aaf2: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aaf7: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x54aafau); call_ind(t); }
    /* 0054aafa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054aafc: je 0x54ac9c */ if (fZ) goto L_0054ac9c;
L_0054ab02:; BB(0x0054ab02);
    /* 0054ab02: mov eax, 1 */ r_eax = 0x1u;
    /* 0054ab07: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_0054ab0a:; BB(0x0054ab0a);
    /* 0054ab0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ab0c: call 0x54ad18 */ r_esp -= 4; W32(r_esp, 0x54ab11u); f_0054ad18();
    /* 0054ab11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab13: jne 0x54ace4 */ if (!fZ) goto L_0054ace4;
L_0054ab19:; BB(0x0054ab19);
    /* 0054ab19: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 0054ab1f: test eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ab24: jne 0x54ab4c */ if (!fZ) goto L_0054ab4c;
L_0054ab26:; BB(0x0054ab26);
    /* 0054ab26: mov dword ptr [esp + 4], 0x40000000 */ W32((u32)(r_esp+0x4u), 0x40000000u);
    /* 0054ab2e: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0054ab32: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ab34: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0054ab3c: mov dword ptr [esp + 0xc], 0x40a00000 */ W32((u32)(r_esp+0xcu), 0x40a00000u);
    /* 0054ab44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ab47: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x54ab4cu); f_00520cf8();
L_0054ab4c:; BB(0x0054ab4c);
    /* 0054ab4c: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ab4e: call 0x520608 */ r_esp -= 4; W32(r_esp, 0x54ab53u); f_00520608();
    /* 0054ab53: mov ebx, dword ptr [0xaf034c] */ r_ebx = R32((u32)(0xaf034cu));
    /* 0054ab59: mov eax, dword ptr [edi + 0x48c] */ r_eax = R32((u32)(r_edi+0x48cu));
    /* 0054ab5f: mov dword ptr [0xa73930], 0 */ W32((u32)(0xa73930u), 0x0u);
    /* 0054ab69: lea edx, [edi + 0x468] */ r_edx = (u32)(r_edi+0x468u);
    /* 0054ab6f: mov dword ptr [0xa7392c], eax */ W32((u32)(0xa7392cu), r_eax);
    /* 0054ab74: mov dword ptr [0xa73928], edx */ W32((u32)(0xa73928u), r_edx);
    /* 0054ab7a: mov dword ptr [0xaab518], ebx */ W32((u32)(0xaab518u), r_ebx);
    /* 0054ab80: call 0x520d08 */ r_esp -= 4; W32(r_esp, 0x54ab85u); f_00520d08();
    /* 0054ab85: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x54ab8au); f_00578b38();
    /* 0054ab8a: mov esi, 1 */ r_esi = 0x1u;
    /* 0054ab8f: lea ebp, [edi + 0x3f8] */ r_ebp = (u32)(r_edi+0x3f8u);
    /* 0054ab95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ab97: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x54ab9cu); f_005771a4();
    /* 0054ab9c: lea eax, [edi + 0x300] */ r_eax = (u32)(r_edi+0x300u);
    /* 0054aba2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aba3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054aba5: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x54abaau); f_0057725c();
    /* 0054abaa: mov ebx, eax */ r_ebx = r_eax;
    /* 0054abac: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0054abb2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054abb5: jne 0x54abd5 */ if (!fZ) goto L_0054abd5;
L_0054abb7:; BB(0x0054abb7);
    /* 0054abb7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abb9: je 0x54abf1 */ if (fZ) goto L_0054abf1;
L_0054abbb:; BB(0x0054abbb);
    /* 0054abbb: mov edx, dword ptr [edi + 0x3f8] */ r_edx = R32((u32)(r_edi+0x3f8u));
    /* 0054abc1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054abc3: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x54abc6u); call_ind(t); }
    /* 0054abc6: mov ecx, edi */ r_ecx = r_edi;
    /* 0054abc8: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x54abcdu); f_008173d0();
    /* 0054abcd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abcf: je 0x54abf1 */ if (fZ) goto L_0054abf1;
L_0054abd1:; BB(0x0054abd1);
    /* 0054abd1: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0054abd3: jmp 0x54abf1 */ goto L_0054abf1;
L_0054abd5:; BB(0x0054abd5);
    /* 0054abd5: mov edx, dword ptr [edi + 0x3dc] */ r_edx = R32((u32)(r_edi+0x3dcu));
    /* 0054abdb: lea ecx, [edi + 0x3dc] */ r_ecx = (u32)(r_edi+0x3dcu);
    /* 0054abe1: call dword ptr [edx + 0x18] */ { u32 t = R32((u32)(r_edx+0x18u)); r_esp -= 4; W32(r_esp, 0x54abe4u); call_ind(t); }
    /* 0054abe4: mov ecx, edi */ r_ecx = r_edi;
    /* 0054abe6: call 0x8173d0 */ r_esp -= 4; W32(r_esp, 0x54abebu); f_008173d0();
    /* 0054abeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abed: je 0x54abf1 */ if (fZ) goto L_0054abf1;
L_0054abef:; BB(0x0054abef);
    /* 0054abef: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0054abf1:; BB(0x0054abf1);
    /* 0054abf1: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 0054abf4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54abf9u); f_00829cc8();
    /* 0054abf9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054abfb: je 0x54ac53 */ if (fZ) goto L_0054ac53;
L_0054abfd:; BB(0x0054abfd);
    /* 0054abfd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x54ac02u); f_0082d7b0();
    /* 0054ac02: lea ecx, [edi + 0x38] */ r_ecx = (u32)(r_edi+0x38u);
    /* 0054ac05: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54ac0au); f_0082d838();
    /* 0054ac0a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0054ac0d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ac0f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54ac14u); f_0082d8bc();
    /* 0054ac14: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac19: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac1e: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ac23: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ac25: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x54ac2au); f_0082fa0c();
    /* 0054ac2a: mov ecx, 0x54a5f4 */ r_ecx = 0x54a5f4u;
    /* 0054ac2f: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x54ac34u); f_0082fac4();
    /* 0054ac34: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0054ac37: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ac3a: je 0x54ad0a */ if (fZ) goto L_0054ad0a;
L_0054ac40:; BB(0x0054ac40);
    /* 0054ac40: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ac42: call 0x7aa7b8 */ r_esp -= 4; W32(r_esp, 0x54ac47u); f_007aa7b8();
L_0054ac47:; BB(0x0054ac47);
    /* 0054ac47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ac49: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x54ac4eu); f_0082fac4();
    /* 0054ac4e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54ac53u); f_0082da80();
L_0054ac53:; BB(0x0054ac53);
    /* 0054ac53: mov edx, dword ptr [edi + 0x3c8] */ r_edx = R32((u32)(r_edi+0x3c8u));
    /* 0054ac59: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054ac5c: jne 0x54ac6f */ if (!fZ) goto L_0054ac6f;
L_0054ac5e:; BB(0x0054ac5e);
    /* 0054ac5e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ac60: je 0x54ac7e */ if (fZ) goto L_0054ac7e;
L_0054ac62:; BB(0x0054ac62);
    /* 0054ac62: mov eax, dword ptr [edi + 0x3f8] */ r_eax = R32((u32)(r_edi+0x3f8u));
    /* 0054ac68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ac6a: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x54ac6du); call_ind(t); }
    /* 0054ac6d: jmp 0x54ac7e */ goto L_0054ac7e;
L_0054ac6f:; BB(0x0054ac6f);
    /* 0054ac6f: mov eax, dword ptr [edi + 0x3dc] */ r_eax = R32((u32)(r_edi+0x3dcu));
    /* 0054ac75: lea ecx, [edi + 0x3dc] */ r_ecx = (u32)(r_edi+0x3dcu);
    /* 0054ac7b: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x54ac7eu); call_ind(t); }
L_0054ac7e:; BB(0x0054ac7e);
    /* 0054ac7e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x54ac83u); f_0082dab0();
    /* 0054ac83: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0054ac88: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0054ac8d: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ac8f: call 0x520610 */ r_esp -= 4; W32(r_esp, 0x54ac94u); f_00520610();
    /* 0054ac94: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ac97: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054ac98: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ac99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054ac9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054ac9b: ret  */ FN_RET(0x0054aa7c); r_esp += 4; return;
L_0054ac9c:; BB(0x0054ac9c);
    /* 0054ac9c: mov eax, dword ptr [edi + 0x300] */ r_eax = R32((u32)(r_edi+0x300u));
    /* 0054aca2: mov edx, dword ptr [edi + 0x304] */ r_edx = R32((u32)(r_edi+0x304u));
    /* 0054aca8: mov ebx, dword ptr [edi + 0x308] */ r_ebx = R32((u32)(r_edi+0x308u));
    /* 0054acae: mov dword ptr [edi + 0x468], eax */ W32((u32)(r_edi+0x468u), r_eax);
    /* 0054acb4: mov dword ptr [edi + 0x46c], edx */ W32((u32)(r_edi+0x46cu), r_edx);
    /* 0054acba: mov dword ptr [edi + 0x470], ebx */ W32((u32)(r_edi+0x470u), r_ebx);
    /* 0054acc0: mov dword ptr [edi + 0x474], eax */ W32((u32)(r_edi+0x474u), r_eax);
    /* 0054acc6: mov dword ptr [edi + 0x478], edx */ W32((u32)(r_edi+0x478u), r_edx);
    /* 0054accc: mov dword ptr [edi + 0x47c], ebx */ W32((u32)(r_edi+0x47cu), r_ebx);
    /* 0054acd2: mov dword ptr [edi + 0x480], eax */ W32((u32)(r_edi+0x480u), r_eax);
    /* 0054acd8: mov dword ptr [edi + 0x484], edx */ W32((u32)(r_edi+0x484u), r_edx);
    /* 0054acde: mov dword ptr [edi + 0x488], ebx */ W32((u32)(r_edi+0x488u), r_ebx);
L_0054ace4:; BB(0x0054ace4);
    /* 0054ace4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054ace7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0054ace8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ace9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0054acea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054aceb: ret  */ FN_RET(0x0054aa7c); r_esp += 4; return;
L_0054acec:; BB(0x0054acec);
    /* 0054acec: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054acf1: mov ecx, edi */ r_ecx = r_edi;
    /* 0054acf3: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0054acf5: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054acfa: push 0x44160000 */ { u32 v = 0x44160000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054acff: call dword ptr [eax + 0x20] */ { u32 t = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, 0x54ad02u); call_ind(t); }
    /* 0054ad02: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054ad05: jmp 0x54aae0 */ goto L_0054aae0;
L_0054ad0a:; BB(0x0054ad0a);
    /* 0054ad0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ad0c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x54ad11u); f_007aa668();
    /* 0054ad11: jmp 0x54ac47 */ goto L_0054ac47;
}

void f_0054ad18(void) /* sub_54AD18 */
{
    FN_ENTER(0x0054ad18);
    /* 0054ad18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad19: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054ad1b: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 0054ad20: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054ad22: je 0x54ad85 */ if (fZ) goto L_0054ad85;
L_0054ad24:; BB(0x0054ad24);
    /* 0054ad24: lea eax, [ebp + 0x3d0] */ r_eax = (u32)(r_ebp+0x3d0u);
    /* 0054ad2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad2b: call 0x505a3c */ r_esp -= 4; W32(r_esp, 0x54ad30u); f_00505a3c();
    /* 0054ad30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054ad31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054ad33: je 0x54ad7e */ if (fZ) goto L_0054ad7e;
L_0054ad35:; BB(0x0054ad35);
    /* 0054ad35: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0054ad38: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54ad3du); f_00829cc8();
    /* 0054ad3d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x54ad42u); f_0082d7b0();
    /* 0054ad42: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0054ad45: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54ad4au); f_0082d838();
    /* 0054ad4a: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0054ad4d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ad4f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54ad54u); f_0082d8bc();
    /* 0054ad54: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad59: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad5e: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ad65: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x54ad6au); f_0082fa0c();
    /* 0054ad6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ad6c: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x54ad71u); f_007aa668();
    /* 0054ad71: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54ad76u); f_0082da80();
    /* 0054ad76: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad78: call 0x505bf8 */ r_esp -= 4; W32(r_esp, 0x54ad7du); f_00505bf8();
    /* 0054ad7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0054ad7e:; BB(0x0054ad7e);
    /* 0054ad7e: mov eax, 1 */ r_eax = 0x1u;
    /* 0054ad83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ad84: ret  */ FN_RET(0x0054ad18); r_esp += 4; return;
L_0054ad85:; BB(0x0054ad85);
    /* 0054ad85: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054ad87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054ad88: ret  */ FN_RET(0x0054ad18); r_esp += 4; return;
}

void f_0054ad8c(void) /* sub_54AD8C */
{
    FN_ENTER(0x0054ad8c);
    /* 0054ad8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0054ad8d: mov edi, ecx */ r_edi = r_ecx;
    /* 0054ad8f: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ad91: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x54ad96u); f_0051f814();
    /* 0054ad96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0054ad98: je 0x54ada1 */ if (fZ) goto L_0054ada1;
L_0054ad9a:; BB(0x0054ad9a);
    /* 0054ad9a: mov ecx, edi */ r_ecx = r_edi;
    /* 0054ad9c: call 0x54a7d0 */ r_esp -= 4; W32(r_esp, 0x54ada1u); f_0054a7d0();
L_0054ada1:; BB(0x0054ada1);
    /* 0054ada1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0054ada2: ret  */ FN_RET(0x0054ad8c); r_esp += 4; return;
}

void f_0054ada4(void) /* sub_54ADA4 */
{
    FN_ENTER(0x0054ada4);
    /* 0054ada4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054ada5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054ada8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054adaa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054adac: call 0x51f814 */ r_esp -= 4; W32(r_esp, 0x54adb1u); f_0051f814();
    /* 0054adb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054adb3: je 0x54ae46 */ if (fZ) goto L_0054ae46;
L_0054adb9:; BB(0x0054adb9);
    /* 0054adb9: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adbd: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54adc2u); f_0051f7fc();
    /* 0054adc2: push 0x9243c0 */ { u32 v = 0x9243c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adc7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054adc8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54adcdu); f_0061cdb0();
    /* 0054adcd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054add1: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54add6u); f_0051f7fc();
    /* 0054add6: push 0x9243d0 */ { u32 v = 0x9243d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054addb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054addc: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54ade1u); f_0061cdb0();
    /* 0054ade1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ade3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ade5: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54adeau); f_0051f7fc();
    /* 0054adea: push 0x9243e4 */ { u32 v = 0x9243e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054adf0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54adf5u); f_0061cdb0();
    /* 0054adf5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adf7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054adf9: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54adfeu); f_0051f7fc();
    /* 0054adfe: push 0x9243f8 */ { u32 v = 0x9243f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae04: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54ae09u); f_0061cdb0();
    /* 0054ae09: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae0b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae0d: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54ae12u); f_0051f7fc();
    /* 0054ae12: push 0x92440c */ { u32 v = 0x92440cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae18: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54ae1du); f_0061cdb0();
    /* 0054ae1d: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054ae20: mov eax, dword ptr [ebp + 0x4c4] */ r_eax = R32((u32)(r_ebp+0x4c4u));
    /* 0054ae26: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae29: je 0x54aedc */ if (fZ) goto L_0054aedc;
L_0054ae2f:; BB(0x0054ae2f);
    /* 0054ae2f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae31: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae33: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54ae38u); f_0051f7fc();
    /* 0054ae38: push 0x92442c */ { u32 v = 0x92442cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae3e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54ae43u); f_0061cdb0();
    /* 0054ae43: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054ae46:; BB(0x0054ae46);
    /* 0054ae46: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae4b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ae4d: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054ae50: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae55: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x54ae58u); call_ind(t); }
    /* 0054ae58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054ae5a: je 0x54aed7 */ if (fZ) goto L_0054aed7;
L_0054ae5c:; BB(0x0054ae5c);
    /* 0054ae5c: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 0054ae63: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054ae66: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054ae68: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 0054ae70: mov dword ptr [esp + 8], 0x40400000 */ W32((u32)(r_esp+0x8u), 0x40400000u);
    /* 0054ae78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054ae7b: call 0x520cf8 */ r_esp -= 4; W32(r_esp, 0x54ae80u); f_00520cf8();
    /* 0054ae80: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x54ae85u); f_00578b38();
    /* 0054ae85: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0054ae88: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x54ae8du); f_00829cc8();
    /* 0054ae8d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x54ae92u); f_0082d7b0();
    /* 0054ae92: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 0054ae95: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x54ae9au); f_0082d838();
    /* 0054ae9a: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 0054ae9d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054ae9f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x54aea4u); f_0082d8bc();
    /* 0054aea4: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054aea9: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054aeae: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 0054aeb3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0054aeb5: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x54aebau); f_0082fa0c();
    /* 0054aeba: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x54aebfu); f_0082fa9c();
    /* 0054aebf: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 0054aec2: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x54aec7u); f_0082e1e8();
    /* 0054aec7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0054aec8: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x54aecdu); f_0082faac();
    /* 0054aecd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x54aed2u); f_0082da80();
    /* 0054aed2: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x54aed7u); f_0082dab0();
L_0054aed7:; BB(0x0054aed7);
    /* 0054aed7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054aeda: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054aedb: ret  */ FN_RET(0x0054ada4); r_esp += 4; return;
L_0054aedc:; BB(0x0054aedc);
    /* 0054aedc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aede: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aee0: call 0x51f7fc */ r_esp -= 4; W32(r_esp, 0x54aee5u); f_0051f7fc();
    /* 0054aee5: push 0x924420 */ { u32 v = 0x924420u; r_esp -= 4; W32(r_esp, v); }
    /* 0054aeea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054aeeb: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x54aef0u); f_0061cdb0();
    /* 0054aef0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054aef3: jmp 0x54ae46 */ goto L_0054ae46;
}

void f_0054aef8(void) /* sub_54AEF8 */
{
    FN_ENTER(0x0054aef8);
    /* 0054aef8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0054aefc: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0054aeff: ja 0x54afae */ if ((!fC&&!fZ)) goto L_0054afae;
L_0054af05:; BB(0x0054af05);
    /* 0054af05: mov eax, dword ptr [eax*4 + 0x9240d8] */ r_eax = R32((u32)(r_eax*4+0x9240d8u));
    /* 0054af0c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054aef8); r_esp += 12; return;
}

void f_0054af0e(void)
{
    FN_ENTER(0x0054af0e);
    /* 0054af0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af13: call 0x54afb4 */ r_esp -= 4; W32(r_esp, 0x54af18u); f_0054afb4();
    /* 0054af18: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af0e); r_esp += 12; return;
}

void f_0054af1d(void)
{
    FN_ENTER(0x0054af1d);
    /* 0054af1d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af22: call 0x54b144 */ r_esp -= 4; W32(r_esp, 0x54af27u); f_0054b144();
    /* 0054af27: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af1d); r_esp += 12; return;
}

void f_0054af2c(void)
{
    FN_ENTER(0x0054af2c);
    /* 0054af2c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af31: call 0x54b2b4 */ r_esp -= 4; W32(r_esp, 0x54af36u); f_0054b2b4();
    /* 0054af36: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af2c); r_esp += 12; return;
}

void f_0054af38(void)
{
    FN_ENTER(0x0054af38);
    /* 0054af38: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af3d: call 0x54b478 */ r_esp -= 4; W32(r_esp, 0x54af42u); f_0054b478();
    /* 0054af42: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af38); r_esp += 12; return;
}

void f_0054af44(void)
{
    FN_ENTER(0x0054af44);
    /* 0054af44: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af49: call 0x54b9f4 */ r_esp -= 4; W32(r_esp, 0x54af4eu); f_0054b9f4();
    /* 0054af4e: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af44); r_esp += 12; return;
}

void f_0054af50(void)
{
    FN_ENTER(0x0054af50);
    /* 0054af50: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af55: call 0x54bc98 */ r_esp -= 4; W32(r_esp, 0x54af5au); f_0054bc98();
    /* 0054af5a: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af50); r_esp += 12; return;
}

void f_0054af5c(void)
{
    FN_ENTER(0x0054af5c);
    /* 0054af5c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af61: call 0x54c1b8 */ r_esp -= 4; W32(r_esp, 0x54af66u); f_0054c1b8();
    /* 0054af66: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af5c); r_esp += 12; return;
}

void f_0054af68(void)
{
    FN_ENTER(0x0054af68);
    /* 0054af68: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af6d: call 0x54ca10 */ r_esp -= 4; W32(r_esp, 0x54af72u); f_0054ca10();
    /* 0054af72: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af68); r_esp += 12; return;
}

void f_0054af74(void)
{
    FN_ENTER(0x0054af74);
    /* 0054af74: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af79: call 0x54cc74 */ r_esp -= 4; W32(r_esp, 0x54af7eu); f_0054cc74();
    /* 0054af7e: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af74); r_esp += 12; return;
}

void f_0054af80(void)
{
    FN_ENTER(0x0054af80);
    /* 0054af80: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af85: call 0x54cda4 */ r_esp -= 4; W32(r_esp, 0x54af8au); f_0054cda4();
    /* 0054af8a: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af80); r_esp += 12; return;
}

void f_0054af8c(void)
{
    FN_ENTER(0x0054af8c);
    /* 0054af8c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af91: call 0x54d3d4 */ r_esp -= 4; W32(r_esp, 0x54af96u); f_0054d3d4();
    /* 0054af96: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af8c); r_esp += 12; return;
}

void f_0054af98(void)
{
    FN_ENTER(0x0054af98);
    /* 0054af98: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054af9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054af9d: call 0x54d5b0 */ r_esp -= 4; W32(r_esp, 0x54afa2u); f_0054d5b0();
    /* 0054afa2: jmp 0x54afae */ goto L_0054afae;
L_0054afae:; BB(0x0054afae);
    /* 0054afae: ret 8 */ FN_RET(0x0054af98); r_esp += 12; return;
}

void f_0054afa4(void)
{
    FN_ENTER(0x0054afa4);
    /* 0054afa4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0054afa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054afa9: call 0x54d868 */ r_esp -= 4; W32(r_esp, 0x54afaeu); f_0054d868();
    /* 0054afae: ret 8 */ FN_RET(0x0054afa4); r_esp += 12; return;
}

void f_0054afb4(void) /* sub_54AFB4 */
{
    FN_ENTER(0x0054afb4);
    /* 0054afb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0054afb5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0054afb8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0054afba: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0054afbe: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afc1: je 0x54b10c */ if (fZ) goto L_0054b10c;
L_0054afc7:; BB(0x0054afc7);
    /* 0054afc7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afca: je 0x54b0cc */ if (fZ) goto L_0054b0cc;
L_0054afd0:; BB(0x0054afd0);
    /* 0054afd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afd2: jne 0x54b0e0 */ if (!fZ) goto L_0054b0e0;
L_0054afd8:; BB(0x0054afd8);
    /* 0054afd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054afda: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x54afdfu); f_007aa094();
    /* 0054afdf: push 0x41b80000 */ { u32 v = 0x41b80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054afe4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054afe6: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54afebu); f_007aaa30();
    /* 0054afeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054afed: je 0x54b03f */ if (fZ) goto L_0054b03f;
L_0054afef:; BB(0x0054afef);
    /* 0054afef: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 0054aff2: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0054aff5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0054aff8: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0054affb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0054afff: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0054b003: fadd dword ptr [0x924268] */ ST(0) = ST(0) + R_F32((u32)(0x924268u));
    /* 0054b009: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0054b00d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0054b011: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0054b016: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b019: je 0x54b0e7 */ if (fZ) goto L_0054b0e7;
L_0054b01f:; BB(0x0054b01f);
    /* 0054b01f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054b022: push 0x21b */ { u32 v = 0x21bu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b027: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b028: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54b02du); f_0050b510();
    /* 0054b02d: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0054b031: push 0x21c */ { u32 v = 0x21cu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b036: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b037: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54b03cu); f_0050b510();
    /* 0054b03c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b03f:; BB(0x0054b03f);
    /* 0054b03f: push 0x41300000 */ { u32 v = 0x41300000u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b044: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b046: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x54b04bu); f_007aaa30();
    /* 0054b04b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b04d: je 0x54b06e */ if (fZ) goto L_0054b06e;
L_0054b04f:; BB(0x0054b04f);
    /* 0054b04f: push 0x26a */ { u32 v = 0x26au; r_esp -= 4; W32(r_esp, v); }
    /* 0054b054: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b056: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x54b05bu); f_007879b8();
    /* 0054b05b: mov ecx, eax */ r_ecx = r_eax;
    /* 0054b05d: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 0054b060: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0054b062: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b063: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b065: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0054b066: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x54b06bu); f_00814298();
    /* 0054b06b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0054b06e:; BB(0x0054b06e);
    /* 0054b06e: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0054b074: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0054b076: je 0x54b0af */ if (fZ) goto L_0054b0af;
L_0054b078:; BB(0x0054b078);
    /* 0054b078: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054b07e: mov dword ptr [ebp + 0x4d4], 1 */ W32((u32)(r_ebp+0x4d4u), 0x1u);
    /* 0054b088: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054b08b: mov edx, dword ptr [0xa73910] */ r_edx = R32((u32)(0xa73910u));
    /* 0054b091: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054b097: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 0054b09a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0054b09d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b09f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b0a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b0a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0054b0a5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0054b0a7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0054b0a9: mov dword ptr [ebp + 0x498], edx */ W32((u32)(r_ebp+0x498u), r_edx);
L_0054b0af:; BB(0x0054b0af);
    /* 0054b0af: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054b0b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b0b4: call dword ptr [eax + 0x1a0] */ { u32 t = R32((u32)(r_eax+0x1a0u)); r_esp -= 4; W32(r_esp, 0x54b0bau); call_ind(t); }
    /* 0054b0ba: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0054b0bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b0bf: call dword ptr [eax + 0x16c] */ { u32 t = R32((u32)(r_eax+0x16cu)); r_esp -= 4; W32(r_esp, 0x54b0c5u); call_ind(t); }
    /* 0054b0c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b0c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b0c9: ret 4 */ FN_RET(0x0054afb4); r_esp += 8; return;
L_0054b0cc:; BB(0x0054b0cc);
    /* 0054b0cc: mov eax, dword ptr [ebp + 0x4d4] */ r_eax = R32((u32)(r_ebp+0x4d4u));
    /* 0054b0d2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0054b0d5: jne 0x54b0e0 */ if (!fZ) goto L_0054b0e0;
L_0054b0d7:; BB(0x0054b0d7);
    /* 0054b0d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0d9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b0db: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x54b0e0u); f_0051f62c();
L_0054b0e0:; BB(0x0054b0e0);
    /* 0054b0e0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b0e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b0e4: ret 4 */ FN_RET(0x0054afb4); r_esp += 8; return;
L_0054b0e7:; BB(0x0054b0e7);
    /* 0054b0e7: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0054b0ea: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0f0: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54b0f5u); f_0050b510();
    /* 0054b0f5: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0054b0f9: push 0x21e */ { u32 v = 0x21eu; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0054b0ff: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x54b104u); f_0050b510();
    /* 0054b104: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0054b107: jmp 0x54b03f */ goto L_0054b03f;
L_0054b10c:; BB(0x0054b10c);
    /* 0054b10c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0054b10e: mov eax, 8 */ r_eax = 0x8u;
    /* 0054b113: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0054b11a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0054b11c: call 0x51f664 */ r_esp -= 4; W32(r_esp, 0x54b121u); f_0051f664();
    /* 0054b121: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 0054b127: mov dword ptr [ebp + 0x4d4], 0 */ W32((u32)(r_ebp+0x4d4u), 0x0u);
    /* 0054b131: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0054b134: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0054b137: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 0054b13d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0054b140: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0054b141: ret 4 */ FN_RET(0x0054afb4); r_esp += 8; return;
}

