#include "protos.h"

void f_004eb0e8(void) /* sub_4EB0E8 */
{
    FN_ENTER(0x004eb0e8);
    /* 004eb0e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb0e9: mov esi, ecx */ r_esi = r_ecx;
    /* 004eb0eb: mov eax, dword ptr [0xa4d7f8] */ r_eax = R32((u32)(0xa4d7f8u));
    /* 004eb0f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb0f2: je 0x4eb15a */ if (fZ) goto L_004eb15a;
L_004eb0f4:; BB(0x004eb0f4);
    /* 004eb0f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb0f5: call 0x4e68cc */ r_esp -= 4; W32(r_esp, 0x4eb0fau); f_004e68cc();
    /* 004eb0fa: fmul dword ptr [0x91d89c] */ ST(0) = ST(0) * R_F32((u32)(0x91d89cu));
    /* 004eb100: mov edx, dword ptr [0xa4d7f8] */ r_edx = R32((u32)(0xa4d7f8u));
    /* 004eb106: fld dword ptr [0x91d91c] */ FPUSH(R_F32((u32)(0x91d91cu)));
    /* 004eb10c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004eb10e: fst dword ptr [esi + 0x6c] */ W_F32((u32)(r_esi+0x6cu), ST(0));
    /* 004eb111: fstp dword ptr [esi + 0x80] */ W_F32((u32)(r_esi+0x80u), ST(0)); FPOP();
    /* 004eb117: fsub dword ptr [edx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x4cu));
    /* 004eb11a: movzx eax, byte ptr [edx + 0x31] */ r_eax = (u32)R8((u32)(r_edx+0x31u));
    /* 004eb11e: fld dword ptr [eax*8 + 0x9b8c80] */ FPUSH(R_F32((u32)(r_eax*8+0x9b8c80u)));
    /* 004eb125: fld dword ptr [eax*8 + 0x9b8c84] */ FPUSH(R_F32((u32)(r_eax*8+0x9b8c84u)));
    /* 004eb12c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004eb12e: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004eb130: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eb132: fmul dword ptr [0x91d898] */ ST(0) = ST(0) * R_F32((u32)(0x91d898u));
    /* 004eb138: mov dword ptr [0xa72238], 2 */ W32((u32)(0xa72238u), 0x2u);
    /* 004eb142: fstp dword ptr [esi + 0x4c] */ W_F32((u32)(r_esi+0x4cu), ST(0)); FPOP();
    /* 004eb145: mov dword ptr [esi + 0x84], 0x78 */ W32((u32)(r_esi+0x84u), 0x78u);
    /* 004eb14f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb151: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 004eb154: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 004eb157: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb158: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb159: ret  */ FN_RET(0x004eb0e8); r_esp += 4; return;
L_004eb15a:; BB(0x004eb15a);
    /* 004eb15a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb15b: ret  */ FN_RET(0x004eb0e8); r_esp += 4; return;
}

void f_004eb15c(void) /* sub_4EB15C */
{
    FN_ENTER(0x004eb15c);
    /* 004eb15c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eb15d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004eb15f: mov ecx, dword ptr [ebp + 0x84] */ r_ecx = R32((u32)(r_ebp+0x84u));
    /* 004eb165: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004eb168: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb16a: jle 0x4eb1b2 */ if ((fZ||fS!=fO)) goto L_004eb1b2;
L_004eb16c:; BB(0x004eb16c);
    /* 004eb16c: mov dword ptr [ebp + 0x84], ecx */ W32((u32)(r_ebp+0x84u), r_ecx);
    /* 004eb172: shl ecx, 0xf */ { u32 c = (15u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004eb175: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 004eb17a: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004eb17c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eb17e: sar edx, 6 */ { u32 c = (6u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004eb181: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004eb184: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004eb186: mov ecx, edx */ r_ecx = r_edx;
    /* 004eb188: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4eb18du); f_0082ddd8();
    /* 004eb18d: fadd dword ptr [0x91d914] */ ST(0) = ST(0) + R_F32((u32)(0x91d914u));
    /* 004eb193: fmul dword ptr [0x91d918] */ ST(0) = ST(0) * R_F32((u32)(0x91d918u));
    /* 004eb199: fld dword ptr [0x91d8a0] */ FPUSH(R_F32((u32)(0x91d8a0u)));
    /* 004eb19f: fld dword ptr [ebp + 0x80] */ FPUSH(R_F32((u32)(r_ebp+0x80u)));
    /* 004eb1a5: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004eb1a7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004eb1a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004eb1ab: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004eb1ad: fstp dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0)); FPOP();
    /* 004eb1b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eb1b1: ret  */ FN_RET(0x004eb15c); r_esp += 4; return;
L_004eb1b2:; BB(0x004eb1b2);
    /* 004eb1b2: mov dword ptr [ebp + 0x84], 0 */ W32((u32)(r_ebp+0x84u), 0x0u);
    /* 004eb1bc: mov dword ptr [0xa72238], 3 */ W32((u32)(0xa72238u), 0x3u);
    /* 004eb1c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eb1c7: ret  */ FN_RET(0x004eb15c); r_esp += 4; return;
}

void f_004eb1c8(void) /* sub_4EB1C8 */
{
    FN_ENTER(0x004eb1c8);
    /* 004eb1c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eb1c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eb1cb: movzx edx, byte ptr [0xa72220] */ r_edx = (u32)R8((u32)(0xa72220u));
    /* 004eb1d2: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004eb1d5: jne 0x4eb20b */ if (!fZ) goto L_004eb20b;
L_004eb1d7:; BB(0x004eb1d7);
    /* 004eb1d7: mov eax, dword ptr [0xa0f664] */ r_eax = R32((u32)(0xa0f664u));
    /* 004eb1dc: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb1e2: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004eb1e8: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb1ee: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb1f4: or eax, dword ptr [0xa0f67c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f67cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb1fa: or eax, dword ptr [0xa0f680] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f680u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb200: mov dword ptr [0xa72224], eax */ W32((u32)(0xa72224u), r_eax);
    /* 004eb205: mov byte ptr [0xa72220], dl */ W8((u32)(0xa72220u), (u8)r_edx);
L_004eb20b:; BB(0x004eb20b);
    /* 004eb20b: push dword ptr [0xa72224] */ { u32 v = R32((u32)(0xa72224u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb211: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4eb216u); f_004f3eb8();
    /* 004eb216: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb219: jne 0x4eb293 */ if (!fZ) goto L_004eb293;
L_004eb21b:; BB(0x004eb21b);
    /* 004eb21b: mov eax, dword ptr [ebx + 0x84] */ r_eax = R32((u32)(r_ebx+0x84u));
    /* 004eb221: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004eb224: mov dword ptr [ebx + 0x84], eax */ W32((u32)(r_ebx+0x84u), r_eax);
    /* 004eb22a: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb22f: jne 0x4eb233 */ if (!fZ) goto L_004eb233;
L_004eb231:; BB(0x004eb231);
    /* 004eb231: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb232: ret  */ FN_RET(0x004eb1c8); r_esp += 4; return;
L_004eb233:; BB(0x004eb233);
    /* 004eb233: mov edx, dword ptr [ebx + 0x70] */ r_edx = R32((u32)(r_ebx+0x70u));
    /* 004eb236: cmp edx, -0x6d */ {  u32 a = r_edx; u32 b = 0xffffff93u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eb239: jle 0x4eb249 */ if ((fZ||fS!=fO)) goto L_004eb249;
L_004eb23b:; BB(0x004eb23b);
    /* 004eb23b: cmp edx, 0x6d */ {  u32 a = r_edx; u32 b = 0x6du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eb23e: jge 0x4eb249 */ if ((fS==fO)) goto L_004eb249;
L_004eb240:; BB(0x004eb240);
    /* 004eb240: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
    /* 004eb247: jmp 0x4eb253 */ goto L_004eb253;
L_004eb249:; BB(0x004eb249);
    /* 004eb249: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004eb24b: jl 0x4eb2b6 */ if ((fS!=fO)) goto L_004eb2b6;
L_004eb24d:; BB(0x004eb24d);
    /* 004eb24d: add edx, -0x6d */ {  u32 a = r_edx; u32 b = 0xffffff93u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eb250: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
L_004eb253:; BB(0x004eb253);
    /* 004eb253: sar eax, 9 */ { u32 c = (9u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004eb256: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 004eb259: je 0x4eb2a9 */ if (fZ) goto L_004eb2a9;
L_004eb25b:; BB(0x004eb25b);
    /* 004eb25b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eb25e: je 0x4eb285 */ if (fZ) goto L_004eb285;
L_004eb260:; BB(0x004eb260);
    /* 004eb260: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb263: jne 0x4eb272 */ if (!fZ) goto L_004eb272;
L_004eb265:; BB(0x004eb265);
    /* 004eb265: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004eb268: add eax, 0xffffff26 */ {  u32 a = r_eax; u32 b = 0xffffff26u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb26d: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004eb270: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb271: ret  */ FN_RET(0x004eb1c8); r_esp += 4; return;
L_004eb272:; BB(0x004eb272);
    /* 004eb272: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eb275: jne 0x4eb291 */ if (!fZ) goto L_004eb291;
L_004eb277:; BB(0x004eb277);
    /* 004eb277: fld dword ptr [0x91d910] */ FPUSH(R_F32((u32)(0x91d910u)));
    /* 004eb27d: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 004eb280: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
    /* 004eb283: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb284: ret  */ FN_RET(0x004eb1c8); r_esp += 4; return;
L_004eb285:; BB(0x004eb285);
    /* 004eb285: fld dword ptr [0x91d90c] */ FPUSH(R_F32((u32)(0x91d90cu)));
    /* 004eb28b: fadd dword ptr [ebx + 0x6c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x6cu));
    /* 004eb28e: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
L_004eb291:; BB(0x004eb291);
    /* 004eb291: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb292: ret  */ FN_RET(0x004eb1c8); r_esp += 4; return;
L_004eb293:; BB(0x004eb293);
    /* 004eb293: mov dword ptr [ebx + 0x84], 0 */ W32((u32)(r_ebx+0x84u), 0x0u);
    /* 004eb29d: mov dword ptr [0xa72238], 4 */ W32((u32)(0xa72238u), 0x4u);
    /* 004eb2a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb2a8: ret  */ FN_RET(0x004eb1c8); r_esp += 4; return;
L_004eb2a9:; BB(0x004eb2a9);
    /* 004eb2a9: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004eb2ac: add eax, 0xda */ {  u32 a = r_eax; u32 b = 0xdau; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb2b1: mov dword ptr [ebx + 0x74], eax */ W32((u32)(r_ebx+0x74u), r_eax);
    /* 004eb2b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb2b5: ret  */ FN_RET(0x004eb1c8); r_esp += 4; return;
L_004eb2b6:; BB(0x004eb2b6);
    /* 004eb2b6: add edx, 0x6d */ {  u32 a = r_edx; u32 b = 0x6du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004eb2b9: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 004eb2bc: jmp 0x4eb253 */ goto L_004eb253;
}

void f_004eb2c0(void) /* sub_4EB2C0 */
{
    FN_ENTER(0x004eb2c0);
    /* 004eb2c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eb2c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004eb2c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb2c5: push 0x8d285c */ { u32 v = 0x8d285cu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb2ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eb2d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb2d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eb2d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eb2db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eb2de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eb2e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eb2e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eb2e7: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb2ec: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004eb2f3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4eb2f8u); f_005caba4();
    /* 004eb2f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb2f9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004eb2fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb2fe: je 0x4eb32e */ if (fZ) goto L_004eb32e;
L_004eb300:; BB(0x004eb300);
    /* 004eb300: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004eb307: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eb30e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eb311: call 0x4eb334 */ r_esp -= 4; W32(r_esp, 0x4eb316u); f_004eb334();
    /* 004eb316: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eb319: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004eb320:; BB(0x004eb320);
    /* 004eb320: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eb323: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eb32a: mov esp, ebp */ r_esp = r_ebp;
    /* 004eb32c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eb32d: ret  */ FN_RET(0x004eb2c0); r_esp += 4; return;
L_004eb32e:; BB(0x004eb32e);
    /* 004eb32e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb330: jmp 0x4eb320 */ goto L_004eb320;
}

void f_004eb334(void) /* sub_4EB334 */
{
    FN_ENTER(0x004eb334);
    /* 004eb334: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb335: mov edi, ecx */ r_edi = r_ecx;
    /* 004eb337: mov ecx, edi */ r_ecx = r_edi;
    /* 004eb339: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4eb33eu); f_004d1f68();
    /* 004eb33e: mov dword ptr [edi], 0xafd318 */ W32((u32)(r_edi), 0xafd318u);
    /* 004eb344: mov edx, dword ptr [0xa72230] */ r_edx = R32((u32)(0xa72230u));
    /* 004eb34a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb34c: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004eb34f: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 004eb356: mov dword ptr [0xa72238], eax */ W32((u32)(0xa72238u), r_eax);
    /* 004eb35b: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 004eb35e: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
    /* 004eb365: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 004eb368: mov dword ptr [edi + 0x70], eax */ W32((u32)(r_edi+0x70u), r_eax);
    /* 004eb36b: mov dword ptr [edi + 0x7c], eax */ W32((u32)(r_edi+0x7cu), r_eax);
    /* 004eb36e: mov dword ptr [edi + 0x6c], 0x41f00000 */ W32((u32)(r_edi+0x6cu), 0x41f00000u);
    /* 004eb375: mov eax, edi */ r_eax = r_edi;
    /* 004eb377: mov dword ptr [edi + 0x78], 2 */ W32((u32)(r_edi+0x78u), 0x2u);
    /* 004eb37e: mov dword ptr [edi + 0x88], 0 */ W32((u32)(r_edi+0x88u), 0x0u);
    /* 004eb388: mov dword ptr [edi + 0x8c], 0 */ W32((u32)(r_edi+0x8cu), 0x0u);
    /* 004eb392: mov dword ptr [edi + 0x54], 0x438e */ W32((u32)(r_edi+0x54u), 0x438eu);
    /* 004eb399: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb39a: ret  */ FN_RET(0x004eb334); r_esp += 4; return;
}

void f_004eb39c(void) /* sub_4EB39C */
{
    FN_ENTER(0x004eb39c);
    /* 004eb39c: call 0x4d4438 */ r_esp -= 4; W32(r_esp, 0x4eb3a1u); f_004d4438();
    /* 004eb3a1: mov dword ptr [0xa72234], 0 */ W32((u32)(0xa72234u), 0x0u);
    /* 004eb3ab: ret  */ FN_RET(0x004eb39c); r_esp += 4; return;
}

void f_004eb3ac(void) /* sub_4EB3AC */
{
    FN_ENTER(0x004eb3ac);
    /* 004eb3ac: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004eb3b0: mov dword ptr [0xa72234], eax */ W32((u32)(0xa72234u), r_eax);
    /* 004eb3b5: ret  */ FN_RET(0x004eb3ac); r_esp += 4; return;
}

void f_004eb3b8(void) /* sub_4EB3B8 */
{
    FN_ENTER(0x004eb3b8);
    /* 004eb3b8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eb3bb: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 004eb3c0: mov ecx, dword ptr [0xaf0354] */ r_ecx = R32((u32)(0xaf0354u));
    /* 004eb3c6: fld dword ptr [0x91d8f0] */ FPUSH(R_F32((u32)(0x91d8f0u)));
    /* 004eb3cc: fmul dword ptr [0xacc0e8] */ ST(0) = ST(0) * R_F32((u32)(0xacc0e8u));
    /* 004eb3d2: fmul dword ptr [0xa72234] */ ST(0) = ST(0) * R_F32((u32)(0xa72234u));
    /* 004eb3d8: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004eb3dc: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 004eb3e0: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 004eb3e5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb3ea: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004eb3ee: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 004eb3f2: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004eb3f6: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 004eb3fa: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004eb3fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004eb400: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004eb403: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004eb407: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 004eb40b: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004eb40e: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x4eb413u); f_0082f308();
    /* 004eb413: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb418: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb41d: push 0x3f911112 */ { u32 v = 0x3f911112u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb422: mov ecx, 0x3555 */ r_ecx = 0x3555u;
    /* 004eb427: call 0x82eea0 */ r_esp -= 4; W32(r_esp, 0x4eb42cu); f_0082eea0();
    /* 004eb42c: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb42f: ret  */ FN_RET(0x004eb3b8); r_esp += 4; return;
}

void f_004eb430(void) /* sub_4EB430 */
{
    FN_ENTER(0x004eb430);
    /* 004eb430: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eb433: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 004eb438: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 004eb43e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004eb442: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004eb444: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 004eb447: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 004eb44b: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004eb44f: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 004eb453: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 004eb457: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004eb45a: call 0x82f308 */ r_esp -= 4; W32(r_esp, 0x4eb45fu); f_0082f308();
    /* 004eb45f: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x4eb464u); f_004d2968();
    /* 004eb464: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb467: ret  */ FN_RET(0x004eb430); r_esp += 4; return;
}

void f_004eb520(void) /* sub_4EB520 */
{
    FN_ENTER(0x004eb520);
    /* 004eb520: mov dword ptr [0xa72234], 0x3f800000 */ W32((u32)(0xa72234u), 0x3f800000u);
    /* 004eb52a: ret  */ FN_RET(0x004eb520); r_esp += 4; return;
}

void f_004eb52c(void) /* sub_4EB52C */
{
    FN_ENTER(0x004eb52c);
    /* 004eb52c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eb52d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004eb52f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004eb531: call 0x4eb550 */ r_esp -= 4; W32(r_esp, 0x4eb536u); f_004eb550();
    /* 004eb536: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004eb53a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb53c: jne 0x4eb542 */ if (!fZ) goto L_004eb542;
L_004eb53e:; BB(0x004eb53e);
    /* 004eb53e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb53f: ret 4 */ FN_RET(0x004eb52c); r_esp += 8; return;
L_004eb542:; BB(0x004eb542);
    /* 004eb542: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eb543: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4eb548u); f_005c2f74();
    /* 004eb548: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb549: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb54a: ret 4 */ FN_RET(0x004eb52c); r_esp += 8; return;
}

void f_004eb550(void) /* sub_4EB550 */
{
    FN_ENTER(0x004eb550);
    /* 004eb550: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eb551: mov ebp, esp */ r_ebp = r_esp;
    /* 004eb553: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb555: push 0x8d2878 */ { u32 v = 0x8d2878u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb55a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eb560: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb561: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eb568: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eb56b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eb56e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eb571: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eb574: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eb577: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eb57a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eb57d: mov dword ptr [ecx], 0xafd3b8 */ W32((u32)(r_ecx), 0xafd3b8u);
    /* 004eb583: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004eb58a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4eb58fu); f_008171e8();
    /* 004eb58f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eb592: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eb599: mov esp, ebp */ r_esp = r_ebp;
    /* 004eb59b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eb59c: ret  */ FN_RET(0x004eb550); r_esp += 4; return;
}

void f_004eb5a0(void) /* sub_4EB5A0 */
{
    FN_ENTER(0x004eb5a0);
    /* 004eb5a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb5a1: mov edi, ecx */ r_edi = r_ecx;
    /* 004eb5a3: call 0x4f3b9c */ r_esp -= 4; W32(r_esp, 0x4eb5a8u); f_004f3b9c();
    /* 004eb5a8: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004eb5ad: mov ecx, edi */ r_ecx = r_edi;
    /* 004eb5af: call dword ptr [eax*4 + 0x9b8d80] */ { u32 t = R32((u32)(r_eax*4+0x9b8d80u)); r_esp -= 4; W32(r_esp, 0x4eb5b6u); call_ind(t); }
    /* 004eb5b6: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004eb5bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb5bd: jne 0x4eb5d0 */ if (!fZ) goto L_004eb5d0;
L_004eb5bf:; BB(0x004eb5bf);
    /* 004eb5bf: push 0x91d94c */ { u32 v = 0x91d94cu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb5c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb5c6: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4eb5cbu); f_004f4128();
    /* 004eb5cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb5ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb5cf: ret  */ FN_RET(0x004eb5a0); r_esp += 4; return;
L_004eb5d0:; BB(0x004eb5d0);
    /* 004eb5d0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb5d3: jne 0x4eb5e6 */ if (!fZ) goto L_004eb5e6;
L_004eb5d5:; BB(0x004eb5d5);
    /* 004eb5d5: push 0x91d950 */ { u32 v = 0x91d950u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb5da: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb5dc: call 0x4f4128 */ r_esp -= 4; W32(r_esp, 0x4eb5e1u); f_004f4128();
    /* 004eb5e1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb5e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb5e5: ret  */ FN_RET(0x004eb5a0); r_esp += 4; return;
L_004eb5e6:; BB(0x004eb5e6);
    /* 004eb5e6: call 0x4f4214 */ r_esp -= 4; W32(r_esp, 0x4eb5ebu); f_004f4214();
    /* 004eb5eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb5ec: ret  */ FN_RET(0x004eb5a0); r_esp += 4; return;
}

void f_004eb5f0(void) /* sub_4EB5F0 */
{
    FN_ENTER(0x004eb5f0);
    /* 004eb5f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb5f1: mov edi, ecx */ r_edi = r_ecx;
    /* 004eb5f3: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb5f9: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4eb5feu); f_004f4010();
    /* 004eb5fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb5ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb601: je 0x4eb635 */ if (fZ) goto L_004eb635;
L_004eb603:; BB(0x004eb603);
    /* 004eb603: mov eax, dword ptr [0x9b8d90] */ r_eax = R32((u32)(0x9b8d90u));
    /* 004eb608: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004eb60b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004eb60e: jl 0x4eb61c */ if ((fS!=fO)) goto L_004eb61c;
L_004eb610:; BB(0x004eb610);
    /* 004eb610: mov dword ptr [0x9b8d90], 0 */ W32((u32)(0x9b8d90u), 0x0u);
    /* 004eb61a: jmp 0x4eb621 */ goto L_004eb621;
L_004eb61c:; BB(0x004eb61c);
    /* 004eb61c: mov dword ptr [0x9b8d90], eax */ W32((u32)(0x9b8d90u), r_eax);
L_004eb621:; BB(0x004eb621);
    /* 004eb621: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb623: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb625: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb626: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb62b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb630u); f_00814298();
    /* 004eb630: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004eb633: jmp 0x4eb668 */ goto L_004eb668;
L_004eb635:; BB(0x004eb635);
    /* 004eb635: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb63b: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4eb640u); f_004f4010();
    /* 004eb640: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb641: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb643: je 0x4eb668 */ if (fZ) goto L_004eb668;
L_004eb645:; BB(0x004eb645);
    /* 004eb645: mov eax, dword ptr [0x9b8d90] */ r_eax = R32((u32)(0x9b8d90u));
    /* 004eb64a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004eb64d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004eb64f: jl 0x4eb6a9 */ if ((fS!=fO)) goto L_004eb6a9;
L_004eb651:; BB(0x004eb651);
    /* 004eb651: mov dword ptr [0x9b8d90], eax */ W32((u32)(0x9b8d90u), r_eax);
L_004eb656:; BB(0x004eb656);
    /* 004eb656: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb659: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb65b: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb660: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb665u); f_00814298();
    /* 004eb665: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eb668:; BB(0x004eb668);
    /* 004eb668: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004eb66d: or eax, dword ptr [0xa0f670] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f670u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb673: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb674: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004eb679: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4eb67eu); f_007c1160();
    /* 004eb67e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb680: je 0x4eb6a7 */ if (fZ) goto L_004eb6a7;
L_004eb682:; BB(0x004eb682);
    /* 004eb682: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb684: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb685: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb687: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb68c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb691u); f_00814298();
    /* 004eb691: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004eb694: mov ecx, edi */ r_ecx = r_edi;
    /* 004eb696: call 0x4eb6b8 */ r_esp -= 4; W32(r_esp, 0x4eb69bu); f_004eb6b8();
    /* 004eb69b: mov dword ptr [0xa7223c], 1 */ W32((u32)(0xa7223cu), 0x1u);
    /* 004eb6a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb6a6: ret  */ FN_RET(0x004eb5f0); r_esp += 4; return;
L_004eb6a7:; BB(0x004eb6a7);
    /* 004eb6a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb6a8: ret  */ FN_RET(0x004eb5f0); r_esp += 4; return;
L_004eb6a9:; BB(0x004eb6a9);
    /* 004eb6a9: mov dword ptr [0x9b8d90], 2 */ W32((u32)(0x9b8d90u), 0x2u);
    /* 004eb6b3: jmp 0x4eb656 */ goto L_004eb656;
}

void f_004eb6b8(void) /* sub_4EB6B8 */
{
    FN_ENTER(0x004eb6b8);
    /* 004eb6b8: mov edx, dword ptr [0x9b8d90] */ r_edx = R32((u32)(0x9b8d90u));
    /* 004eb6be: mov eax, dword ptr [edx*8 + 0x91d9c0] */ r_eax = R32((u32)(r_edx*8+0x91d9c0u));
    /* 004eb6c5: mov ecx, dword ptr [edx*8 + 0x91d9c4] */ r_ecx = R32((u32)(r_edx*8+0x91d9c4u));
    /* 004eb6cc: mov edx, dword ptr [0x9b8d94] */ r_edx = R32((u32)(0x9b8d94u));
    /* 004eb6d2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eb6d4: jl 0x4eb6da */ if ((fS!=fO)) goto L_004eb6da;
L_004eb6d6:; BB(0x004eb6d6);
    /* 004eb6d6: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eb6d8: jle 0x4eb6df */ if ((fZ||fS!=fO)) goto L_004eb6df;
L_004eb6da:; BB(0x004eb6da);
    /* 004eb6da: mov dword ptr [0x9b8d94], eax */ W32((u32)(0x9b8d94u), r_eax);
L_004eb6df:; BB(0x004eb6df);
    /* 004eb6df: ret  */ FN_RET(0x004eb6b8); r_esp += 4; return;
}

void f_004eb6e0(void) /* sub_4EB6E0 */
{
    FN_ENTER(0x004eb6e0);
    /* 004eb6e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb6e1: mov esi, ecx */ r_esi = r_ecx;
    /* 004eb6e3: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb6e9: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4eb6eeu); f_004f4010();
    /* 004eb6ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb6f1: je 0x4eb70e */ if (fZ) goto L_004eb70e;
L_004eb6f3:; BB(0x004eb6f3);
    /* 004eb6f3: add dword ptr [0x9b8d94], 1 */ { u32 ad = (u32)(0x9b8d94u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004eb6fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb6fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb6fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb6fe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb6ff: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb704: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb709u); f_00814298();
    /* 004eb709: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004eb70c: jmp 0x4eb737 */ goto L_004eb737;
L_004eb70e:; BB(0x004eb70e);
    /* 004eb70e: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb714: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4eb719u); f_004f4010();
    /* 004eb719: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb71a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb71c: je 0x4eb737 */ if (fZ) goto L_004eb737;
L_004eb71e:; BB(0x004eb71e);
    /* 004eb71e: add dword ptr [0x9b8d94], -1 */ { u32 ad = (u32)(0x9b8d94u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004eb725: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb72a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb72f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb734u); f_00814298();
    /* 004eb734: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_004eb737:; BB(0x004eb737);
    /* 004eb737: mov ecx, esi */ r_ecx = r_esi;
    /* 004eb739: call 0x4eb7bc */ r_esp -= 4; W32(r_esp, 0x4eb73eu); f_004eb7bc();
    /* 004eb73e: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 004eb743: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb745: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb746: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4eb74bu); f_004f3eb8();
    /* 004eb74b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb74c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb74e: jne 0x4eb79d */ if (!fZ) goto L_004eb79d;
L_004eb750:; BB(0x004eb750);
    /* 004eb750: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb756: call 0x4f4010 */ r_esp -= 4; W32(r_esp, 0x4eb75bu); f_004f4010();
    /* 004eb75b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb75c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb75e: jne 0x4eb79d */ if (!fZ) goto L_004eb79d;
L_004eb760:; BB(0x004eb760);
    /* 004eb760: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004eb765: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb76b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb76c: call 0x4f3eb8 */ r_esp -= 4; W32(r_esp, 0x4eb771u); f_004f3eb8();
    /* 004eb771: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb774: je 0x4eb79b */ if (fZ) goto L_004eb79b;
L_004eb776:; BB(0x004eb776);
    /* 004eb776: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb778: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb779: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb77a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb77b: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb780: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb785u); f_00814298();
    /* 004eb785: mov dword ptr [esi + 0x1c], 0xa */ W32((u32)(r_esi+0x1cu), 0xau);
    /* 004eb78c: mov dword ptr [0xa7223c], 2 */ W32((u32)(0xa7223cu), 0x2u);
    /* 004eb796: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb79a: ret  */ FN_RET(0x004eb6e0); r_esp += 4; return;
L_004eb79b:; BB(0x004eb79b);
    /* 004eb79b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb79c: ret  */ FN_RET(0x004eb6e0); r_esp += 4; return;
L_004eb79d:; BB(0x004eb79d);
    /* 004eb79d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eb79f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7a2: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7a7: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4eb7acu); f_00814298();
    /* 004eb7ac: mov dword ptr [0xa7223c], 0 */ W32((u32)(0xa7223cu), 0x0u);
    /* 004eb7b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb7b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb7ba: ret  */ FN_RET(0x004eb6e0); r_esp += 4; return;
}

void f_004eb7bc(void) /* sub_4EB7BC */
{
    FN_ENTER(0x004eb7bc);
    /* 004eb7bc: mov edx, dword ptr [0x9b8d90] */ r_edx = R32((u32)(0x9b8d90u));
    /* 004eb7c2: mov eax, dword ptr [edx*8 + 0x91d9c0] */ r_eax = R32((u32)(r_edx*8+0x91d9c0u));
    /* 004eb7c9: mov ecx, dword ptr [edx*8 + 0x91d9c4] */ r_ecx = R32((u32)(r_edx*8+0x91d9c4u));
    /* 004eb7d0: mov edx, dword ptr [0x9b8d94] */ r_edx = R32((u32)(0x9b8d94u));
    /* 004eb7d6: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eb7d8: jge 0x4eb7e1 */ if ((fS==fO)) goto L_004eb7e1;
L_004eb7da:; BB(0x004eb7da);
    /* 004eb7da: mov dword ptr [0x9b8d94], ecx */ W32((u32)(0x9b8d94u), r_ecx);
    /* 004eb7e0: ret  */ FN_RET(0x004eb7bc); r_esp += 4; return;
L_004eb7e1:; BB(0x004eb7e1);
    /* 004eb7e1: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004eb7e3: jle 0x4eb7ea */ if ((fZ||fS!=fO)) goto L_004eb7ea;
L_004eb7e5:; BB(0x004eb7e5);
    /* 004eb7e5: mov dword ptr [0x9b8d94], eax */ W32((u32)(0x9b8d94u), r_eax);
L_004eb7ea:; BB(0x004eb7ea);
    /* 004eb7ea: ret  */ FN_RET(0x004eb7bc); r_esp += 4; return;
}

void f_004eb7ec(void) /* sub_4EB7EC */
{
    FN_ENTER(0x004eb7ec);
    /* 004eb7ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eb7ef: mov edi, ecx */ r_edi = r_ecx;
    /* 004eb7f1: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004eb7f4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004eb7f7: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 004eb7fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb7fc: jle 0x4eb802 */ if ((fZ||fS!=fO)) goto L_004eb802;
L_004eb7fe:; BB(0x004eb7fe);
    /* 004eb7fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb7ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb800: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb801: ret  */ FN_RET(0x004eb7ec); r_esp += 4; return;
L_004eb802:; BB(0x004eb802);
    /* 004eb802: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb807: call 0x6c1bcc */ r_esp -= 4; W32(r_esp, 0x4eb80cu); f_006c1bcc();
    /* 004eb80c: mov esi, eax */ r_esi = r_eax;
    /* 004eb80e: mov edx, dword ptr [0x9b8d94] */ r_edx = R32((u32)(0x9b8d94u));
    /* 004eb814: push dword ptr [edx*4 + 0x91d958] */ { u32 v = R32((u32)(r_edx*4+0x91d958u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb81b: lea ebx, [esi + 0x370] */ r_ebx = (u32)(r_esi+0x370u);
    /* 004eb821: call 0x4e7604 */ r_esp -= 4; W32(r_esp, 0x4eb826u); f_004e7604();
    /* 004eb826: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004eb828: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 004eb82a: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004eb82d: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 004eb830: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004eb833: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 004eb836: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004eb839: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 004eb83c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004eb83f: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 004eb842: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004eb845: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 004eb848: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004eb84b: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 004eb84e: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004eb851: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004eb854: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004eb857: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 004eb85a: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004eb85d: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004eb860: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004eb863: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 004eb866: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004eb869: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 004eb86c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004eb86f: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 004eb872: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004eb875: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 004eb878: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004eb87b: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 004eb87e: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004eb881: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 004eb884: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004eb887: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 004eb88a: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004eb88d: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 004eb890: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004eb893: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 004eb896: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004eb899: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 004eb89c: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004eb89f: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 004eb8a2: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004eb8a5: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 004eb8a8: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004eb8ab: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 004eb8ae: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004eb8b1: mov dword ptr [ebx + 0x5c], edx */ W32((u32)(r_ebx+0x5cu), r_edx);
    /* 004eb8b4: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004eb8b7: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 004eb8ba: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004eb8bd: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 004eb8c0: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004eb8c3: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 004eb8c6: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 004eb8c9: mov dword ptr [ebx + 0x6c], edx */ W32((u32)(r_ebx+0x6cu), r_edx);
    /* 004eb8cc: mov byte ptr [esi + 0x3a0], 0xff */ W8((u32)(r_esi+0x3a0u), 0xffu);
    /* 004eb8d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eb8d4: mov byte ptr [esi + 0x370], 0 */ W8((u32)(r_esi+0x370u), 0x0u);
    /* 004eb8db: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb8e1: call 0x4e2f44 */ r_esp -= 4; W32(r_esp, 0x4eb8e6u); f_004e2f44();
    /* 004eb8e6: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004eb8ea: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004eb8ef: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004eb8f3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004eb8f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004eb8f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004eb8f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004eb8f9: ret  */ FN_RET(0x004eb7ec); r_esp += 4; return;
}

void f_004eb8fc(void) /* sub_4EB8FC */
{
    FN_ENTER(0x004eb8fc);
    /* 004eb8fc: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb900: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004eb905: mov dword ptr [0x9b8d90], eax */ W32((u32)(0x9b8d90u), r_eax);
    /* 004eb90a: mov dword ptr [0x9b8d94], eax */ W32((u32)(0x9b8d94u), r_eax);
    /* 004eb90f: call 0x4eb918 */ r_esp -= 4; W32(r_esp, 0x4eb914u); f_004eb918();
    /* 004eb914: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb915: ret  */ FN_RET(0x004eb8fc); r_esp += 4; return;
}

void f_004eb918(void) /* sub_4EB918 */
{
    FN_ENTER(0x004eb918);
    /* 004eb918: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eb919: mov ebp, esp */ r_ebp = r_esp;
    /* 004eb91b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb91d: push 0x8d28a0 */ { u32 v = 0x8d28a0u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb922: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eb928: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb929: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eb930: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eb933: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eb936: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eb939: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eb93c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eb93f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb941: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004eb948: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4eb94du); f_005caba4();
    /* 004eb94d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb94e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004eb951: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb953: je 0x4eb986 */ if (fZ) goto L_004eb986;
L_004eb955:; BB(0x004eb955);
    /* 004eb955: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004eb95c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eb963: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb966: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eb969: call 0x4eb98c */ r_esp -= 4; W32(r_esp, 0x4eb96eu); f_004eb98c();
    /* 004eb96e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eb971: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004eb978:; BB(0x004eb978);
    /* 004eb978: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eb97b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eb982: mov esp, ebp */ r_esp = r_ebp;
    /* 004eb984: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eb985: ret  */ FN_RET(0x004eb918); r_esp += 4; return;
L_004eb986:; BB(0x004eb986);
    /* 004eb986: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004eb988: jmp 0x4eb978 */ goto L_004eb978;
}

void f_004eb98c(void) /* sub_4EB98C */
{
    FN_ENTER(0x004eb98c);
    /* 004eb98c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eb98d: mov ebp, esp */ r_ebp = r_esp;
    /* 004eb98f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb991: push 0x8d28bc */ { u32 v = 0x8d28bcu; r_esp -= 4; W32(r_esp, v); }
    /* 004eb996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004eb99c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004eb99d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004eb9a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eb9a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004eb9aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004eb9ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004eb9b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004eb9b3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004eb9b6: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004eb9b9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4eb9beu); f_008193cc();
    /* 004eb9be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004eb9c5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eb9c8: mov dword ptr [edx], 0xafd3b8 */ W32((u32)(r_edx), 0xafd3b8u);
    /* 004eb9ce: mov eax, dword ptr [0x9b8d8c] */ r_eax = R32((u32)(0x9b8d8cu));
    /* 004eb9d3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004eb9d5: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004eb9d8: call 0x4ecd84 */ r_esp -= 4; W32(r_esp, 0x4eb9ddu); f_004ecd84();
    /* 004eb9dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eb9de: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x4eb9e3u); f_007bebe8();
    /* 004eb9e3: call 0x4f3b58 */ r_esp -= 4; W32(r_esp, 0x4eb9e8u); f_004f3b58();
    /* 004eb9e8: mov eax, dword ptr [0x9b8d90] */ r_eax = R32((u32)(0x9b8d90u));
    /* 004eb9ed: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb9f0: je 0x4eba08 */ if (fZ) goto L_004eba08;
L_004eb9f2:; BB(0x004eb9f2);
    /* 004eb9f2: mov eax, dword ptr [0x9b8d94] */ r_eax = R32((u32)(0x9b8d94u));
    /* 004eb9f7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004eb9fa: je 0x4eba08 */ if (fZ) goto L_004eba08;
L_004eb9fc:; BB(0x004eb9fc);
    /* 004eb9fc: mov dword ptr [0xa7223c], 1 */ W32((u32)(0xa7223cu), 0x1u);
    /* 004eba06: jmp 0x4eba19 */ goto L_004eba19;
L_004eba08:; BB(0x004eba08);
    /* 004eba08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004eba0a: mov dword ptr [0x9b8d90], eax */ W32((u32)(0x9b8d90u), r_eax);
    /* 004eba0f: mov dword ptr [0x9b8d94], eax */ W32((u32)(0x9b8d94u), r_eax);
    /* 004eba14: mov dword ptr [0xa7223c], eax */ W32((u32)(0xa7223cu), r_eax);
L_004eba19:; BB(0x004eba19);
    /* 004eba19: push 0x91d988 */ { u32 v = 0x91d988u; r_esp -= 4; W32(r_esp, v); }
    /* 004eba1e: call 0x4f4234 */ r_esp -= 4; W32(r_esp, 0x4eba23u); f_004f4234();
    /* 004eba23: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004eba24: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eba27: call 0x4eba40 */ r_esp -= 4; W32(r_esp, 0x4eba2cu); f_004eba40();
    /* 004eba2c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004eba2f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004eba32: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004eba39: mov esp, ebp */ r_esp = r_ebp;
    /* 004eba3b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004eba3c: ret 4 */ FN_RET(0x004eb98c); r_esp += 8; return;
}

void f_004eba40(void) /* sub_4EBA40 */
{
    FN_ENTER(0x004eba40);
    /* 004eba40: call 0x4f6160 */ r_esp -= 4; W32(r_esp, 0x4eba45u); f_004f6160();
    /* 004eba45: call 0x4f5a70 */ r_esp -= 4; W32(r_esp, 0x4eba4au); f_004f5a70();
    /* 004eba4a: call 0x4f5e34 */ r_esp -= 4; W32(r_esp, 0x4eba4fu); f_004f5e34();
    /* 004eba4f: call 0x4f6500 */ r_esp -= 4; W32(r_esp, 0x4eba54u); f_004f6500();
    /* 004eba54: call 0x4f68d0 */ r_esp -= 4; W32(r_esp, 0x4eba59u); f_004f68d0();
    /* 004eba59: call 0x4f4d00 */ r_esp -= 4; W32(r_esp, 0x4eba5eu); f_004f4d00();
    /* 004eba5e: ret  */ FN_RET(0x004eba40); r_esp += 4; return;
}

void f_004eba60(void) /* sub_4EBA60 */
{
    FN_ENTER(0x004eba60);
    /* 004eba60: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004eba64: mov eax, dword ptr [edx*4 + 0x91d990] */ r_eax = R32((u32)(r_edx*4+0x91d990u));
    /* 004eba6b: ret  */ FN_RET(0x004eba60); r_esp += 4; return;
}

void f_004eba6c(void) /* sub_4EBA6C */
{
    FN_ENTER(0x004eba6c);
    /* 004eba6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004eba6d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004eba6e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004eba6f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004eba70: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004eba73: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004eba75: lea edi, [ebp + 4] */ r_edi = (u32)(r_ebp+0x4u);
    /* 004eba78: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 004eba7c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 004eba80: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 004eba84: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004eba86: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 004eba88: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004eba8b: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004eba8e: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004eba91: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 004eba94: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 004eba97: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 004eba9a: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 004eba9d: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 004ebaa0: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 004ebaa3: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 004ebaa6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ebaa9: mov dword ptr [edi + 0x18], edx */ W32((u32)(r_edi+0x18u), r_edx);
    /* 004ebaac: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004ebaaf: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004ebab2: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004ebab5: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 004ebab8: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 004ebabb: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004ebabe: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 004ebac1: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 004ebac4: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 004ebac7: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 004ebaca: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004ebacd: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 004ebad0: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 004ebad3: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 004ebad6: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004ebad9: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 004ebadc: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 004ebadf: mov dword ptr [edi + 0x3c], edx */ W32((u32)(r_edi+0x3cu), r_edx);
    /* 004ebae2: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 004ebae5: mov dword ptr [edi + 0x40], edx */ W32((u32)(r_edi+0x40u), r_edx);
    /* 004ebae8: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 004ebaeb: mov dword ptr [edi + 0x44], edx */ W32((u32)(r_edi+0x44u), r_edx);
    /* 004ebaee: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 004ebaf1: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004ebaf4: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 004ebaf7: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
    /* 004ebafa: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 004ebafd: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 004ebb00: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 004ebb03: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 004ebb06: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 004ebb09: mov dword ptr [edi + 0x58], edx */ W32((u32)(r_edi+0x58u), r_edx);
    /* 004ebb0c: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 004ebb0f: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 004ebb12: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 004ebb15: mov dword ptr [edi + 0x60], edx */ W32((u32)(r_edi+0x60u), r_edx);
    /* 004ebb18: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 004ebb1b: mov dword ptr [edi + 0x64], edx */ W32((u32)(r_edi+0x64u), r_edx);
    /* 004ebb1e: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 004ebb21: mov eax, dword ptr [eax + 0x6c] */ r_eax = R32((u32)(r_eax+0x6cu));
    /* 004ebb24: mov dword ptr [edi + 0x68], edx */ W32((u32)(r_edi+0x68u), r_edx);
    /* 004ebb27: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 004ebb2a: mov dword ptr [ebp + 0x4c8], 0xff */ W32((u32)(r_ebp+0x4c8u), 0xffu);
    /* 004ebb34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ebb35: lea ecx, [ebp + 0x74] */ r_ecx = (u32)(r_ebp+0x74u);
    /* 004ebb38: lea edx, [ebp + 0x1e0] */ r_edx = (u32)(r_ebp+0x1e0u);
    /* 004ebb3e: lea eax, [ebp + 0x34c] */ r_eax = (u32)(r_ebp+0x34cu);
    /* 004ebb44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebb45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebb46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebb47: call 0x4e6914 */ r_esp -= 4; W32(r_esp, 0x4ebb4cu); f_004e6914();
    /* 004ebb4c: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 004ebb50: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 004ebb54: lea eax, [ebp + 0x4c8] */ r_eax = (u32)(r_ebp+0x4c8u);
    /* 004ebb5a: lea edx, [ebp + 0x4c4] */ r_edx = (u32)(r_ebp+0x4c4u);
    /* 004ebb60: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004ebb64: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 004ebb68: lea esi, [ebp + 0x4b8] */ r_esi = (u32)(r_ebp+0x4b8u);
    /* 004ebb6e: lea edi, [ebp + 0x4b0] */ r_edi = (u32)(r_ebp+0x4b0u);
    /* 004ebb74: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004ebb78: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 004ebb7c: lea eax, [ebp + 0x344] */ r_eax = (u32)(r_ebp+0x344u);
    /* 004ebb82: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 004ebb86: lea eax, [ebp + 0x1d8] */ r_eax = (u32)(r_ebp+0x1d8u);
    /* 004ebb8c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004ebb90: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 004ebb94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebb95: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebb96: call 0x4ee928 */ r_esp -= 4; W32(r_esp, 0x4ebb9bu); f_004ee928();
    /* 004ebb9b: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 004ebb9e: mov eax, ebp */ r_eax = r_ebp;
    /* 004ebba0: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ebba3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ebba4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebba5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ebba6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ebba7: ret 0xc */ FN_RET(0x004eba6c); r_esp += 16; return;
}

void f_004ebbac(void) /* sub_4EBBAC */
{
    FN_ENTER(0x004ebbac);
    /* 004ebbac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebbad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ebbaf: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 004ebbb1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ebbb3: je 0x4ebbcf */ if (fZ) goto L_004ebbcf;
L_004ebbb5:; BB(0x004ebbb5);
    /* 004ebbb5: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004ebbbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ebbbd: je 0x4ebbcf */ if (fZ) goto L_004ebbcf;
L_004ebbbf:; BB(0x004ebbbf);
    /* 004ebbbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ebbc1: je 0x4ebbc9 */ if (fZ) goto L_004ebbc9;
L_004ebbc3:; BB(0x004ebbc3);
    /* 004ebbc3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004ebbc5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004ebbc7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x4ebbc9u); call_ind(t); }
L_004ebbc9:; BB(0x004ebbc9);
    /* 004ebbc9: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
L_004ebbcf:; BB(0x004ebbcf);
    /* 004ebbcf: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 004ebbd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ebbd4: je 0x4ebbf4 */ if (fZ) goto L_004ebbf4;
L_004ebbd6:; BB(0x004ebbd6);
    /* 004ebbd6: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004ebbdc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ebbde: jne 0x4ebbed */ if (!fZ) goto L_004ebbed;
L_004ebbe0:; BB(0x004ebbe0);
    /* 004ebbe0: lea eax, [ebx + 0x1d8] */ r_eax = (u32)(r_ebx+0x1d8u);
    /* 004ebbe6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebbe7: call 0x81a7c0 */ r_esp -= 4; W32(r_esp, 0x4ebbecu); f_0081a7c0();
    /* 004ebbec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ebbed:; BB(0x004ebbed);
    /* 004ebbed: mov dword ptr [ebx + 0x74], 0 */ W32((u32)(r_ebx+0x74u), 0x0u);
L_004ebbf4:; BB(0x004ebbf4);
    /* 004ebbf4: mov eax, dword ptr [ebx + 0x1e0] */ r_eax = R32((u32)(r_ebx+0x1e0u));
    /* 004ebbfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ebbfc: je 0x4ebc1f */ if (fZ) goto L_004ebc1f;
L_004ebbfe:; BB(0x004ebbfe);
    /* 004ebbfe: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004ebc04: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ebc06: jne 0x4ebc15 */ if (!fZ) goto L_004ebc15;
L_004ebc08:; BB(0x004ebc08);
    /* 004ebc08: lea eax, [ebx + 0x344] */ r_eax = (u32)(r_ebx+0x344u);
    /* 004ebc0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc0f: call 0x81a7c0 */ r_esp -= 4; W32(r_esp, 0x4ebc14u); f_0081a7c0();
    /* 004ebc14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ebc15:; BB(0x004ebc15);
    /* 004ebc15: mov dword ptr [ebx + 0x1e0], 0 */ W32((u32)(r_ebx+0x1e0u), 0x0u);
L_004ebc1f:; BB(0x004ebc1f);
    /* 004ebc1f: mov eax, dword ptr [ebx + 0x34c] */ r_eax = R32((u32)(r_ebx+0x34cu));
    /* 004ebc25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebc27: je 0x4ebc4a */ if (fZ) goto L_004ebc4a;
L_004ebc29:; BB(0x004ebc29);
    /* 004ebc29: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004ebc2f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebc31: jne 0x4ebc40 */ if (!fZ) goto L_004ebc40;
L_004ebc33:; BB(0x004ebc33);
    /* 004ebc33: lea eax, [ebx + 0x4b0] */ r_eax = (u32)(r_ebx+0x4b0u);
    /* 004ebc39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc3a: call 0x81a7c0 */ r_esp -= 4; W32(r_esp, 0x4ebc3fu); f_0081a7c0();
    /* 004ebc3f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004ebc40:; BB(0x004ebc40);
    /* 004ebc40: mov dword ptr [ebx + 0x34c], 0 */ W32((u32)(r_ebx+0x34cu), 0x0u);
L_004ebc4a:; BB(0x004ebc4a);
    /* 004ebc4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ebc4b: ret  */ FN_RET(0x004ebbac); r_esp += 4; return;
}

void f_004ebc4c(void) /* sub_4EBC4C */
{
    FN_ENTER(0x004ebc4c);
    /* 004ebc4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ebc4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ebc51: call 0x4ebc70 */ r_esp -= 4; W32(r_esp, 0x4ebc56u); f_004ebc70();
    /* 004ebc56: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ebc5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebc5c: jne 0x4ebc62 */ if (!fZ) goto L_004ebc62;
L_004ebc5e:; BB(0x004ebc5e);
    /* 004ebc5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ebc5f: ret 4 */ FN_RET(0x004ebc4c); r_esp += 8; return;
L_004ebc62:; BB(0x004ebc62);
    /* 004ebc62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ebc68u); f_005c2f74();
    /* 004ebc68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ebc69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ebc6a: ret 4 */ FN_RET(0x004ebc4c); r_esp += 8; return;
}

void f_004ebc70(void) /* sub_4EBC70 */
{
    FN_ENTER(0x004ebc70);
    /* 004ebc70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc71: mov ebp, esp */ r_ebp = r_esp;
    /* 004ebc73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc75: push 0x8d28d8 */ { u32 v = 0x8d28d8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ebc80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebc81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ebc88: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ebc8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ebc8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ebc91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ebc94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ebc97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ebc9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ebc9d: mov dword ptr [ecx], 0xafd440 */ W32((u32)(r_ecx), 0xafd440u);
    /* 004ebca3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ebcaa: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ebcafu); f_008171e8();
    /* 004ebcaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ebcb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ebcb9: mov esp, ebp */ r_esp = r_ebp;
    /* 004ebcbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebcbc: ret  */ FN_RET(0x004ebc70); r_esp += 4; return;
}

void f_004ebcc0(void) /* sub_4EBCC0 */
{
    FN_ENTER(0x004ebcc0);
    /* 004ebcc0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ebcc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ebcc2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ebcc4: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 004ebcc7: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004ebcca: fld dword ptr [0x91d9dc] */ FPUSH(R_F32((u32)(0x91d9dcu)));
    /* 004ebcd0: fld dword ptr [0xa72244] */ FPUSH(R_F32((u32)(0xa72244u)));
    /* 004ebcd6: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004ebcd8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004ebcda: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004ebcdc: fld dword ptr [ebp + 0x28] */ FPUSH(R_F32((u32)(r_ebp+0x28u)));
    /* 004ebcdf: fld dword ptr [0xa72248] */ FPUSH(R_F32((u32)(0xa72248u)));
    /* 004ebce5: fld dword ptr [0x91da10] */ FPUSH(R_F32((u32)(0x91da10u)));
    /* 004ebceb: fadd dword ptr [ebp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x2cu));
    /* 004ebcee: fld dword ptr [0x91da0c] */ FPUSH(R_F32((u32)(0x91da0cu)));
    /* 004ebcf4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ebcf6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ebcf8: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004ebcfa: fstp dword ptr [ebp + 0x24] */ W_F32((u32)(r_ebp+0x24u), ST(0)); FPOP();
    /* 004ebcfd: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 004ebcff: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004ebd02: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ebd04: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 004ebd06: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004ebd08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004ebd0a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ebd0c: fstp dword ptr [ebp + 0x28] */ W_F32((u32)(r_ebp+0x28u), ST(0)); FPOP();
    /* 004ebd0f: add ecx, 0xb60 */ {  u32 a = r_ecx; u32 b = 0xb60u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 004ebd15: mov dword ptr [ebp + 0x34], ecx */ W32((u32)(r_ebp+0x34u), r_ecx);
    /* 004ebd18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ebd19: ja 0x4ebd1d */ if ((!fC&&!fZ)) goto L_004ebd1d;
L_004ebd1b:; BB(0x004ebd1b);
    /* 004ebd1b: fst st(1) */ ST(1) = ST(0);
L_004ebd1d:; BB(0x004ebd1d);
    /* 004ebd1d: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004ebd1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ebd21: fst dword ptr [ebp + 0x2c] */ W_F32((u32)(r_ebp+0x2cu), ST(0));
    /* 004ebd24: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 004ebd27: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ebd28: je 0x4ebd2d */ if (fZ) goto L_004ebd2d;
L_004ebd2a:; BB(0x004ebd2a);
    /* 004ebd2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ebd2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebd2c: ret  */ FN_RET(0x004ebcc0); r_esp += 4; return;
L_004ebd2d:; BB(0x004ebd2d);
    /* 004ebd2d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4ebd32u); f_0082dcbc();
    /* 004ebd32: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 004ebd35: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebd3a: je 0x4ebd54 */ if (fZ) goto L_004ebd54;
L_004ebd3c:; BB(0x004ebd3c);
    /* 004ebd3c: fld dword ptr [0x91d9d8] */ FPUSH(R_F32((u32)(0x91d9d8u)));
    /* 004ebd42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ebd44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ebd46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ebd47: jae 0x4ebd62 */ if (!fC) goto L_004ebd62;
L_004ebd49:; BB(0x004ebd49);
    /* 004ebd49: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004ebd4b: fsubr dword ptr [0x91da0c] */ ST(0) = R_F32((u32)(0x91da0cu)) - ST(0);
    /* 004ebd51: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
L_004ebd54:; BB(0x004ebd54);
    /* 004ebd54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ebd56: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ebd59: fmul dword ptr [ebp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x2cu));
    /* 004ebd5c: fstp dword ptr [ebp + 0x30] */ W_F32((u32)(r_ebp+0x30u), ST(0)); FPOP();
    /* 004ebd5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ebd60: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebd61: ret  */ FN_RET(0x004ebcc0); r_esp += 4; return;
L_004ebd62:; BB(0x004ebd62);
    /* 004ebd62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ebd64: jmp 0x4ebd54 */ goto L_004ebd54;
}

void f_004ebd68(void) /* sub_4EBD68 */
{
    FN_ENTER(0x004ebd68);
    /* 004ebd68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ebd69: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ebd6a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ebd6d: mov edi, ecx */ r_edi = r_ecx;
    /* 004ebd6f: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x4ebd74u); f_007a9380();
    /* 004ebd74: fld dword ptr [0x91da08] */ FPUSH(R_F32((u32)(0x91da08u)));
    /* 004ebd7a: fmul dword ptr [edi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x2cu));
    /* 004ebd7d: fld dword ptr [0x91da04] */ FPUSH(R_F32((u32)(0x91da04u)));
    /* 004ebd83: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 004ebd86: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004ebd88: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ebd8a: lea esi, [edi + 0x24] */ r_esi = (u32)(r_edi+0x24u);
    /* 004ebd8d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ebd8e: mov dword ptr [esp + 4], 0xbfe80000 */ W32((u32)(r_esp+0x4u), 0xbfe80000u);
    /* 004ebd96: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004ebd99: jae 0x4ebd9d */ if (!fC) goto L_004ebd9d;
L_004ebd9b:; BB(0x004ebd9b);
    /* 004ebd9b: fst st(1) */ ST(1) = ST(0);
L_004ebd9d:; BB(0x004ebd9d);
    /* 004ebd9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ebd9f: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004ebda3: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 004ebda7: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4ebdacu); f_004e9ef8();
    /* 004ebdac: push dword ptr [edi + 0x30] */ { u32 v = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ebdaf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ebdb0: push 0xbfe80000 */ { u32 v = 0xbfe80000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ebdb5: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ebdb8: call 0x4e9ef8 */ r_esp -= 4; W32(r_esp, 0x4ebdbdu); f_004e9ef8();
    /* 004ebdbd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ebdc0: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x4ebdc5u); f_007a9318();
    /* 004ebdc5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ebdc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ebdc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ebdca: ret  */ FN_RET(0x004ebd68); r_esp += 4; return;
}

void f_004ebdcc(void) /* sub_4EBDCC */
{
    FN_ENTER(0x004ebdcc);
    /* 004ebdcc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ebdcd: mov ebp, esp */ r_ebp = r_esp;
    /* 004ebdcf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ebdd1: push 0x8d2900 */ { u32 v = 0x8d2900u; r_esp -= 4; W32(r_esp, v); }
    /* 004ebdd6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ebddc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebddd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ebde4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ebde7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ebdea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ebded: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ebdf0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ebdf3: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004ebdf5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004ebdfc: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ebe01u); f_005caba4();
    /* 004ebe01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ebe02: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004ebe05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ebe07: je 0x4ebe3a */ if (fZ) goto L_004ebe3a;
L_004ebe09:; BB(0x004ebe09);
    /* 004ebe09: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004ebe10: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ebe17: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ebe1a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ebe1d: call 0x4ebe40 */ r_esp -= 4; W32(r_esp, 0x4ebe22u); f_004ebe40();
    /* 004ebe22: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ebe25: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004ebe2c:; BB(0x004ebe2c);
    /* 004ebe2c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ebe2f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ebe36: mov esp, ebp */ r_esp = r_ebp;
    /* 004ebe38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebe39: ret  */ FN_RET(0x004ebdcc); r_esp += 4; return;
L_004ebe3a:; BB(0x004ebe3a);
    /* 004ebe3a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebe3c: jmp 0x4ebe2c */ goto L_004ebe2c;
}

void f_004ebe40(void) /* sub_4EBE40 */
{
    FN_ENTER(0x004ebe40);
    /* 004ebe40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ebe41: mov ebp, esp */ r_ebp = r_esp;
    /* 004ebe43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ebe45: push 0x8d291c */ { u32 v = 0x8d291cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ebe4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ebe50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebe51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ebe58: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ebe5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ebe5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ebe61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ebe64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ebe67: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ebe6a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ebe6d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ebe72u); f_008193cc();
    /* 004ebe72: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ebe79: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ebe7c: mov dword ptr [edx], 0xafd440 */ W32((u32)(r_edx), 0xafd440u);
    /* 004ebe82: mov eax, dword ptr [0x9b8d98] */ r_eax = R32((u32)(0x9b8d98u));
    /* 004ebe87: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004ebe8a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x4ebe8fu); f_006dc358();
    /* 004ebe8f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ebe92: mov edx, dword ptr [0xa7224c] */ r_edx = R32((u32)(0xa7224cu));
    /* 004ebe98: mov ecx, dword ptr [0xa72250] */ r_ecx = R32((u32)(0xa72250u));
    /* 004ebe9e: mov dword ptr [ebx + 0x20], 0xc3 */ W32((u32)(r_ebx+0x20u), 0xc3u);
    /* 004ebea5: add eax, 0x8f */ {  u32 a = r_eax; u32 b = 0x8fu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ebeaa: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 004ebead: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 004ebeb0: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
    /* 004ebeb7: mov dword ptr [ebx + 0x28], ecx */ W32((u32)(r_ebx+0x28u), r_ecx);
    /* 004ebeba: mov eax, ebx */ r_eax = r_ebx;
    /* 004ebebc: mov dword ptr [ebx + 0x34], 0 */ W32((u32)(r_ebx+0x34u), 0x0u);
    /* 004ebec3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ebec6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ebec9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ebed0: mov esp, ebp */ r_esp = r_ebp;
    /* 004ebed2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebed3: ret 4 */ FN_RET(0x004ebe40); r_esp += 8; return;
}

void f_004ebed8(void)
{
    FN_ENTER(0x004ebed8);
    /* 004ebed8: fld dword ptr [0x91d9f0] */ FPUSH(R_F32((u32)(0x91d9f0u)));
    /* 004ebede: mov dword ptr [0xa72254], 0x42800000 */ W32((u32)(0xa72254u), 0x42800000u);
    /* 004ebee8: mov dword ptr [0xa72258], 0x41600000 */ W32((u32)(0xa72258u), 0x41600000u);
    /* 004ebef2: fadd dword ptr [0xa72258] */ ST(0) = ST(0) + R_F32((u32)(0xa72258u));
    /* 004ebef8: fst dword ptr [0xa7225c] */ W_F32((u32)(0xa7225cu), ST(0));
    /* 004ebefe: fst dword ptr [0xa72250] */ W_F32((u32)(0xa72250u), ST(0));
    /* 004ebf04: fstp dword ptr [0xa72248] */ W_F32((u32)(0xa72248u), ST(0)); FPOP();
    /* 004ebf0a: mov dword ptr [0xa7224c], 0x44328000 */ W32((u32)(0xa7224cu), 0x44328000u);
    /* 004ebf14: mov dword ptr [0xa72244], 0x44078000 */ W32((u32)(0xa72244u), 0x44078000u);
    /* 004ebf1e: ret  */ FN_RET(0x004ebed8); r_esp += 4; return;
}

void f_004ebf20(void) /* sub_4EBF20 */
{
    FN_ENTER(0x004ebf20);
    /* 004ebf20: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf21: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ebf23: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ebf25: call 0x4ebf44 */ r_esp -= 4; W32(r_esp, 0x4ebf2au); f_004ebf44();
    /* 004ebf2a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ebf2e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebf30: jne 0x4ebf36 */ if (!fZ) goto L_004ebf36;
L_004ebf32:; BB(0x004ebf32);
    /* 004ebf32: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ebf33: ret 4 */ FN_RET(0x004ebf20); r_esp += 8; return;
L_004ebf36:; BB(0x004ebf36);
    /* 004ebf36: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf37: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ebf3cu); f_005c2f74();
    /* 004ebf3c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ebf3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ebf3e: ret 4 */ FN_RET(0x004ebf20); r_esp += 8; return;
}

void f_004ebf44(void) /* sub_4EBF44 */
{
    FN_ENTER(0x004ebf44);
    /* 004ebf44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf45: mov ebp, esp */ r_ebp = r_esp;
    /* 004ebf47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf49: push 0x8d2938 */ { u32 v = 0x8d2938u; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ebf54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ebf5c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ebf5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ebf62: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ebf65: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ebf68: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ebf6b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ebf6e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ebf71: mov dword ptr [ecx], 0xafd4c8 */ W32((u32)(r_ecx), 0xafd4c8u);
    /* 004ebf77: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ebf7e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ebf83u); f_008171e8();
    /* 004ebf83: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ebf86: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ebf8d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ebf8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ebf90: ret  */ FN_RET(0x004ebf44); r_esp += 4; return;
}

void f_004ebf94(void) /* sub_4EBF94 */
{
    FN_ENTER(0x004ebf94);
    /* 004ebf94: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ebf95: mov edi, ecx */ r_edi = r_ecx;
    /* 004ebf97: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004ebf9a: mov ecx, edi */ r_ecx = r_edi;
    /* 004ebf9c: add dword ptr [edi + 0x24], eax */ { u32 ad = (u32)(r_edi+0x24u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004ebf9f: call 0x4ebfc4 */ r_esp -= 4; W32(r_esp, 0x4ebfa4u); f_004ebfc4();
    /* 004ebfa4: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 004ebfa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ebfa9: jle 0x4ebfb2 */ if ((fZ||fS!=fO)) goto L_004ebfb2;
L_004ebfab:; BB(0x004ebfab);
    /* 004ebfab: cmp eax, dword ptr [edi + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ebfae: jge 0x4ebfb2 */ if ((fS==fO)) goto L_004ebfb2;
L_004ebfb0:; BB(0x004ebfb0);
    /* 004ebfb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ebfb1: ret  */ FN_RET(0x004ebf94); r_esp += 4; return;
L_004ebfb2:; BB(0x004ebfb2);
    /* 004ebfb2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 004ebfb6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ebfbb: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 004ebfbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ebfc0: ret  */ FN_RET(0x004ebf94); r_esp += 4; return;
}

void f_004ebfc4(void) /* sub_4EBFC4 */
{
    FN_ENTER(0x004ebfc4);
    /* 004ebfc4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ebfc7: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 004ebfca: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ebfcd: jg 0x4ebfda */ if ((!fZ&&fS==fO)) goto L_004ebfda;
L_004ebfcf:; BB(0x004ebfcf);
    /* 004ebfcf: mov dword ptr [ecx + 0x28], 0x3f800000 */ W32((u32)(r_ecx+0x28u), 0x3f800000u);
    /* 004ebfd6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ebfd9: ret  */ FN_RET(0x004ebfc4); r_esp += 4; return;
L_004ebfda:; BB(0x004ebfda);
    /* 004ebfda: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ebfdd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004ebfe0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004ebfe3: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004ebfe6: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ebfe9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004ebfed: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 004ebff1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004ebff3: fsubr dword ptr [0x91dacc] */ ST(0) = R_F32((u32)(0x91daccu)) - ST(0);
    /* 004ebff9: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 004ebffc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ebfff: ret  */ FN_RET(0x004ebfc4); r_esp += 4; return;
}

