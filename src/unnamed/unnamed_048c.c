#include "protos.h"

void f_0048c0d8(void) /* sub_48C0D8 */
{
    FN_ENTER(0x0048c0d8);
    /* 0048c0d8: mov eax, dword ptr [ecx + 0x394] */ r_eax = R32((u32)(r_ecx+0x394u));
    /* 0048c0de: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c0e1: cmp eax, dword ptr [ecx + 0x3b0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048c0e7: jg 0x48c0f0 */ if ((!fZ&&fS==fO)) goto L_0048c0f0;
L_0048c0e9:; BB(0x0048c0e9);
    /* 0048c0e9: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0048c0ef: ret  */ FN_RET(0x0048c0d8); r_esp += 4; return;
L_0048c0f0:; BB(0x0048c0f0);
    /* 0048c0f0: mov dword ptr [ecx + 0x388], 5 */ W32((u32)(r_ecx+0x388u), 0x5u);
    /* 0048c0fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048c0fc: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0048c102: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c105: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c106: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c107: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c108: push 0x3d1 */ { u32 v = 0x3d1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c10d: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48c112u); f_00814298();
    /* 0048c112: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c115: ret  */ FN_RET(0x0048c0d8); r_esp += 4; return;
}

void f_0048c118(void) /* sub_48C118 */
{
    FN_ENTER(0x0048c118);
    /* 0048c118: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c119: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c11a: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c11d: mov esi, ecx */ r_esi = r_ecx;
    /* 0048c11f: movzx eax, byte ptr [0xa46e20] */ r_eax = (u32)R8((u32)(0xa46e20u));
    /* 0048c126: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048c128: jne 0x48c13c */ if (!fZ) goto L_0048c13c;
L_0048c12a:; BB(0x0048c12a);
    /* 0048c12a: mov dword ptr [0xa46e24], 0x43960000 */ W32((u32)(0xa46e24u), 0x43960000u);
    /* 0048c134: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c137: mov byte ptr [0xa46e20], al */ W8((u32)(0xa46e20u), (u8)r_eax);
L_0048c13c:; BB(0x0048c13c);
    /* 0048c13c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048c13e: jne 0x48c152 */ if (!fZ) goto L_0048c152;
L_0048c140:; BB(0x0048c140);
    /* 0048c140: mov dword ptr [0xa46e28], 0x42960000 */ W32((u32)(0xa46e28u), 0x42960000u);
    /* 0048c14a: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c14d: mov byte ptr [0xa46e20], al */ W8((u32)(0xa46e20u), (u8)r_eax);
L_0048c152:; BB(0x0048c152);
    /* 0048c152: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048c154: jne 0x48c173 */ if (!fZ) goto L_0048c173;
L_0048c156:; BB(0x0048c156);
    /* 0048c156: fld dword ptr [0xa46e24] */ FPUSH(R_F32((u32)(0xa46e24u)));
    /* 0048c15c: fadd dword ptr [0xa46e28] */ ST(0) = ST(0) + R_F32((u32)(0xa46e28u));
    /* 0048c162: fstp dword ptr [0xa46e2c] */ W_F32((u32)(0xa46e2cu), ST(0)); FPOP();
    /* 0048c168: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0048c16b: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c16e: mov byte ptr [0xa46e20], al */ W8((u32)(0xa46e20u), (u8)r_eax);
L_0048c173:; BB(0x0048c173);
    /* 0048c173: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048c175: jne 0x48c193 */ if (!fZ) goto L_0048c193;
L_0048c177:; BB(0x0048c177);
    /* 0048c177: fld dword ptr [0xa46e2c] */ FPUSH(R_F32((u32)(0xa46e2cu)));
    /* 0048c17d: fdiv dword ptr [0x9014b0] */ ST(0) = ST(0) / R_F32((u32)(0x9014b0u));
    /* 0048c183: fstp dword ptr [0xa46e30] */ W_F32((u32)(0xa46e30u), ST(0)); FPOP();
    /* 0048c189: or eax, 0xffffff08 */ {  u32 a = r_eax; u32 b = 0xffffff08u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c18e: mov byte ptr [0xa46e20], al */ W8((u32)(0xa46e20u), (u8)r_eax);
L_0048c193:; BB(0x0048c193);
    /* 0048c193: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c196: mov eax, dword ptr [esi + 0x3c4] */ r_eax = R32((u32)(r_esi+0x3c4u));
    /* 0048c19c: mov edi, dword ptr [esi + 0x3c8] */ r_edi = R32((u32)(r_esi+0x3c8u));
    /* 0048c1a2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048c1a5: mov eax, dword ptr [esi + 0x3cc] */ r_eax = R32((u32)(r_esi+0x3ccu));
    /* 0048c1ab: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0048c1af: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048c1b3: lea edi, [esi + 0x38] */ r_edi = (u32)(r_esi+0x38u);
    /* 0048c1b6: mov edx, edi */ r_edx = r_edi;
    /* 0048c1b8: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48c1bdu); f_0082f9c4();
    /* 0048c1bd: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c1c0: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48c1c5u); f_0083173c();
    /* 0048c1c5: fcomp dword ptr [0xa46e30] */ fx_compare(ST(0), R_F32((u32)(0xa46e30u))); FPOP();
    /* 0048c1cb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c1cd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c1ce: ja 0x48c1ea */ if ((!fC&&!fZ)) goto L_0048c1ea;
L_0048c1d0:; BB(0x0048c1d0);
    /* 0048c1d0: mov dword ptr [esi + 0x394], 0 */ W32((u32)(r_esi+0x394u), 0x0u);
    /* 0048c1da: mov dword ptr [esi + 0x388], 6 */ W32((u32)(r_esi+0x388u), 0x6u);
    /* 0048c1e4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c1e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048c1e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048c1e9: ret  */ FN_RET(0x0048c118); r_esp += 4; return;
L_0048c1ea:; BB(0x0048c1ea);
    /* 0048c1ea: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c1ed: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x48c1f2u); f_0082df08();
    /* 0048c1f2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0048c1f4: fld dword ptr [0xa46e30] */ FPUSH(R_F32((u32)(0xa46e30u)));
    /* 0048c1fa: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0048c1fd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0048c1ff: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 0048c203: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0048c207: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c209: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0048c20b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0048c20d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048c20f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c211: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0048c214: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0048c216: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0048c21a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0048c21e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0048c221: mov ecx, edi */ r_ecx = r_edi;
    /* 0048c223: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x48c228u); f_0082ebac();
    /* 0048c228: movzx eax, byte ptr [0xa46e20] */ r_eax = (u32)R8((u32)(0xa46e20u));
    /* 0048c22f: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048c231: jne 0x48c253 */ if (!fZ) goto L_0048c253;
L_0048c233:; BB(0x0048c233);
    /* 0048c233: fld dword ptr [0x9014ac] */ FPUSH(R_F32((u32)(0x9014acu)));
    /* 0048c239: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0048c23d: or eax, 0xffffff10 */ {  u32 a = r_eax; u32 b = 0xffffff10u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c242: mov dword ptr [0xa46e34], 0x41200000 */ W32((u32)(0xa46e34u), 0x41200000u);
    /* 0048c24c: mov byte ptr [0xa46e20], al */ W8((u32)(0xa46e20u), (u8)r_eax);
    /* 0048c251: jmp 0x48c25d */ goto L_0048c25d;
L_0048c253:; BB(0x0048c253);
    /* 0048c253: fld dword ptr [0xa46e34] */ FPUSH(R_F32((u32)(0xa46e34u)));
    /* 0048c259: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
L_0048c25d:; BB(0x0048c25d);
    /* 0048c25d: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048c261: fsubr dword ptr [esi + 0x3c] */ ST(0) = R_F32((u32)(r_esi+0x3cu)) - ST(0);
    /* 0048c264: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 0048c267: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0048c26a: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0048c26e: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0048c272: mov ecx, esi */ r_ecx = r_esi;
    /* 0048c274: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0048c278: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0048c27c: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 0048c280: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c282: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c283: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x48c288u); f_007b4c58();
    /* 0048c288: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c28a: je 0x48c2ce */ if (fZ) goto L_0048c2ce;
L_0048c28c:; BB(0x0048c28c);
    /* 0048c28c: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0048c290: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0048c294: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 0048c296: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c298: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c299: jae 0x48c2cc */ if (!fC) goto L_0048c2cc;
L_0048c29b:; BB(0x0048c29b);
    /* 0048c29b: fadd dword ptr [0xa46e34] */ ST(0) = ST(0) + R_F32((u32)(0xa46e34u));
    /* 0048c2a1: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0048c2a5: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 0048c2a9: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 0048c2ac: mov dword ptr [esi + 0x394], 0 */ W32((u32)(r_esi+0x394u), 0x0u);
    /* 0048c2b6: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0048c2b9: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 0048c2bc: mov dword ptr [esi + 0x388], 6 */ W32((u32)(r_esi+0x388u), 0x6u);
    /* 0048c2c6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c2c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048c2ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048c2cb: ret  */ FN_RET(0x0048c118); r_esp += 4; return;
L_0048c2cc:; BB(0x0048c2cc);
    /* 0048c2cc: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048c2ce:; BB(0x0048c2ce);
    /* 0048c2ce: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c2d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048c2d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048c2d3: ret  */ FN_RET(0x0048c118); r_esp += 4; return;
}

void f_0048c2d4(void) /* sub_48C2D4 */
{
    FN_ENTER(0x0048c2d4);
    /* 0048c2d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2d6: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c2d9: mov esi, ecx */ r_esi = r_ecx;
    /* 0048c2db: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048c2e0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048c2e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048c2e4: jle 0x48c393 */ if ((fZ||fS!=fO)) goto L_0048c393;
L_0048c2ea:; BB(0x0048c2ea);
    /* 0048c2ea: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 0048c2ee: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0048c2f2: mov ebp, eax */ r_ebp = r_eax;
L_0048c2f4:; BB(0x0048c2f4);
    /* 0048c2f4: mov edi, dword ptr [ebx*4 + 0xaad720] */ r_edi = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048c2fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c2fc: call 0x48e100 */ r_esp -= 4; W32(r_esp, 0x48c301u); f_0048e100();
    /* 0048c301: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048c302: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c304: je 0x48c380 */ if (fZ) goto L_0048c380;
L_0048c306:; BB(0x0048c306);
    /* 0048c306: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c309: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0048c30c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0048c30f: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0048c312: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0048c316: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0048c319: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0048c31d: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 0048c320: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x48c325u); f_0082f9c4();
    /* 0048c325: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0048c32d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048c330: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x48c335u); f_0083173c();
    /* 0048c335: fcomp dword ptr [0x9014a4] */ fx_compare(ST(0), R_F32((u32)(0x9014a4u))); FPOP();
    /* 0048c33b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c33d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c33e: ja 0x48c380 */ if ((!fC&&!fZ)) goto L_0048c380;
L_0048c340:; BB(0x0048c340);
    /* 0048c340: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c345: push dword ptr [esi + 0x38c] */ { u32 v = R32((u32)(r_esi+0x38cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c34b: call 0x48e9d4 */ r_esp -= 4; W32(r_esp, 0x48c350u); f_0048e9d4();
    /* 0048c350: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c353: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0048c357: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0048c35b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0048c35d: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0048c361: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 0048c369: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0048c36e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c36f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c370: mov ecx, edi */ r_ecx = r_edi;
    /* 0048c372: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c374: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c378: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c37a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c37b: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x48c37eu); call_ind(t); }
    /* 0048c37e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0048c380:; BB(0x0048c380);
    /* 0048c380: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048c383: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048c385: jl 0x48c2f4 */ if ((fS!=fO)) goto L_0048c2f4;
L_0048c38b:; BB(0x0048c38b);
    /* 0048c38b: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0048c38f: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_0048c393:; BB(0x0048c393);
    /* 0048c393: lea ebx, [esi + 0x38] */ r_ebx = (u32)(r_esi+0x38u);
    /* 0048c396: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048c398: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c399: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c39a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c39b: push 0x3d2 */ { u32 v = 0x3d2u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3a0: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x48c3a5u); f_00814298();
    /* 0048c3a5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3a7: push 0xfb */ { u32 v = 0xfbu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3ad: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48c3b2u); f_0050b7a4();
    /* 0048c3b2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3b4: push 0xfc */ { u32 v = 0xfcu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3ba: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x48c3bfu); f_0050b7a4();
    /* 0048c3bf: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3c1: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3c6: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3cb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3cc: call 0x48e41c */ r_esp -= 4; W32(r_esp, 0x48c3d1u); f_0048e41c();
    /* 0048c3d1: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 0048c3d5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c3da: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 0048c3de: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048c3e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048c3e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048c3e3: ret  */ FN_RET(0x0048c2d4); r_esp += 4; return;
}

void f_0048c3e4(void) /* sub_48C3E4 */
{
    FN_ENTER(0x0048c3e4);
    /* 0048c3e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c3e5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048c3e7: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x48c3ecu); f_0082d7b0();
    /* 0048c3ec: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0048c3ef: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x48c3f4u); f_0082d838();
    /* 0048c3f4: mov edx, dword ptr [ebx + 0x398] */ r_edx = R32((u32)(r_ebx+0x398u));
    /* 0048c3fa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c3fc: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x48c401u); f_0082d8bc();
    /* 0048c401: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 0048c407: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c409: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x48c40eu); f_0082e9e4();
    /* 0048c40e: mov edx, dword ptr [ebx + 0x3a0] */ r_edx = R32((u32)(r_ebx+0x3a0u));
    /* 0048c414: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048c416: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x48c41bu); f_0082d8bc();
    /* 0048c41b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048c41d: call 0x48c42c */ r_esp -= 4; W32(r_esp, 0x48c422u); f_0048c42c();
    /* 0048c422: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x48c427u); f_0082da80();
    /* 0048c427: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048c428: ret  */ FN_RET(0x0048c3e4); r_esp += 4; return;
}

void f_0048c42c(void) /* sub_48C42C */
{
    FN_ENTER(0x0048c42c);
    /* 0048c42c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c42d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c42e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c42f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c430: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0048c432: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x48c437u); f_0082fa9c();
    /* 0048c437: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c439: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0048c43f: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x48c444u); f_005b8624();
    /* 0048c444: mov ebx, eax */ r_ebx = r_eax;
    /* 0048c446: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c448: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0048c44e: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x48c453u); f_005b8610();
    /* 0048c453: mov edi, eax */ r_edi = r_eax;
    /* 0048c455: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c457: mov ecx, dword ptr [ebp + 0x37c] */ r_ecx = R32((u32)(r_ebp+0x37cu));
    /* 0048c45d: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x48c462u); f_005b8638();
    /* 0048c462: mov esi, eax */ r_esi = r_eax;
    /* 0048c464: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048c466: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x48c46bu); f_00829cc8();
    /* 0048c46b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c46d: push dword ptr [ebp + 0x3d0] */ { u32 v = R32((u32)(r_ebp+0x3d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c473: call 0x48e148 */ r_esp -= 4; W32(r_esp, 0x48c478u); f_0048e148();
    /* 0048c478: push dword ptr [ebp + 0x3a4] */ { u32 v = R32((u32)(r_ebp+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c47e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c47f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c480: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x48c485u); f_0083046c();
    /* 0048c485: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c488: call 0x48e364 */ r_esp -= 4; W32(r_esp, 0x48c48du); f_0048e364();
    /* 0048c48d: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x48c492u); f_0082faac();
    /* 0048c492: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048c493: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c494: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048c495: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048c496: ret  */ FN_RET(0x0048c42c); r_esp += 4; return;
}

void f_0048c498(void) /* sub_48C498 */
{
    FN_ENTER(0x0048c498);
    /* 0048c498: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 0048c49b: and eax, 0xfffffdff */ {  u32 a = r_eax; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048c4a0: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0048c4a3: mov dword ptr [ecx + 0x3d0], 0x3f800000 */ W32((u32)(r_ecx+0x3d0u), 0x3f800000u);
    /* 0048c4ad: ret  */ FN_RET(0x0048c498); r_esp += 4; return;
}

void f_0048c4b0(void) /* sub_48C4B0 */
{
    FN_ENTER(0x0048c4b0);
    /* 0048c4b0: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 0048c4b6: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048c4b9: je 0x48c4c6 */ if (fZ) goto L_0048c4c6;
L_0048c4bb:; BB(0x0048c4bb);
    /* 0048c4bb: mov dword ptr [ecx + 0x388], 7 */ W32((u32)(r_ecx+0x388u), 0x7u);
    /* 0048c4c5: ret  */ FN_RET(0x0048c4b0); r_esp += 4; return;
L_0048c4c6:; BB(0x0048c4c6);
    /* 0048c4c6: ret  */ FN_RET(0x0048c4b0); r_esp += 4; return;
}

void f_0048c4c8(void) /* sub_48C4C8 */
{
    FN_ENTER(0x0048c4c8);
    /* 0048c4c8: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0048c4cb: fcomp dword ptr [0x90142c] */ fx_compare(ST(0), R_F32((u32)(0x90142cu))); FPOP();
    /* 0048c4d1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c4d3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c4d4: jb 0x48c4db */ if (fC) goto L_0048c4db;
L_0048c4d6:; BB(0x0048c4d6);
    /* 0048c4d6: call 0x7879e0 */ r_esp -= 4; W32(r_esp, 0x48c4dbu); f_007879e0();
L_0048c4db:; BB(0x0048c4db);
    /* 0048c4db: ret  */ FN_RET(0x0048c4c8); r_esp += 4; return;
}

void f_0048c4dc(void) /* sub_48C4DC */
{
    FN_ENTER(0x0048c4dc);
    /* 0048c4dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c4dd: mov ebp, esp */ r_ebp = r_esp;
    /* 0048c4df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c4e1: push 0x8cfeda */ { u32 v = 0x8cfedau; r_esp -= 4; W32(r_esp, v); }
    /* 0048c4e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048c4ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c4ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048c4f4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c4f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048c4fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048c4fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048c500: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048c503: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048c505: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0048c508: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0048c50b: push 0x3d8 */ { u32 v = 0x3d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c510: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48c515u); f_005caba4();
    /* 0048c515: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048c516: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0048c519: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c51b: je 0x48c588 */ if (fZ) goto L_0048c588;
L_0048c51d:; BB(0x0048c51d);
    /* 0048c51d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 0048c524: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048c52b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c52d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x48c532u); f_005caba4();
    /* 0048c532: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048c533: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0048c536: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c538: je 0x48c584 */ if (fZ) goto L_0048c584;
L_0048c53a:; BB(0x0048c53a);
    /* 0048c53a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0048c541: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0048c548: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c54e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048c551: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x48c556u); f_00787a4c();
    /* 0048c556: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048c559: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0048c560:; BB(0x0048c560);
    /* 0048c560: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c563: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048c566: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c567: call 0x48c58c */ r_esp -= 4; W32(r_esp, 0x48c56cu); f_0048c58c();
    /* 0048c56c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0048c56f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0048c576:; BB(0x0048c576);
    /* 0048c576: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c579: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048c580: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c582: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c583: ret  */ FN_RET(0x0048c4dc); r_esp += 4; return;
L_0048c584:; BB(0x0048c584);
    /* 0048c584: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048c586: jmp 0x48c560 */ goto L_0048c560;
L_0048c588:; BB(0x0048c588);
    /* 0048c588: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048c58a: jmp 0x48c576 */ goto L_0048c576;
}

void f_0048c58c(void) /* sub_48C58C */
{
    FN_ENTER(0x0048c58c);
    /* 0048c58c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c58d: mov ebp, esp */ r_ebp = r_esp;
    /* 0048c58f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048c591: push 0x8cfef4 */ { u32 v = 0x8cfef4u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c596: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048c59c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c59d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048c5a4: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048c5a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048c5aa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0048c5ad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0048c5b0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0048c5b3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0048c5b6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0048c5b9: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0048c5bc: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0048c5bf: call 0x7865e8 */ r_esp -= 4; W32(r_esp, 0x48c5c4u); f_007865e8();
    /* 0048c5c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048c5cb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c5ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0048c5d1: mov dword ptr [ecx], 0xaf9000 */ W32((u32)(r_ecx), 0xaf9000u);
    /* 0048c5d7: mov edx, dword ptr [0x9a6a70] */ r_edx = R32((u32)(0x9a6a70u));
    /* 0048c5dd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c5de: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 0048c5e1: mov ebx, dword ptr [eax + 0x40] */ r_ebx = R32((u32)(r_eax+0x40u));
    /* 0048c5e4: mov dword ptr [ecx + 0x380], ebx */ W32((u32)(r_ecx+0x380u), r_ebx);
    /* 0048c5ea: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0048c5ed: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 0048c5f0: mov edi, dword ptr [eax + 0x48] */ r_edi = R32((u32)(r_eax+0x48u));
    /* 0048c5f3: mov dword ptr [ecx + 0x3c], edi */ W32((u32)(r_ecx+0x3cu), r_edi);
    /* 0048c5f6: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 0048c5f9: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 0048c5fc: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0048c5ff: mov dword ptr [ecx + 0x3c4], edx */ W32((u32)(r_ecx+0x3c4u), r_edx);
    /* 0048c605: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 0048c608: mov dword ptr [ecx + 0x3c8], edx */ W32((u32)(r_ecx+0x3c8u), r_edx);
    /* 0048c60e: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 0048c611: mov dword ptr [ecx + 0x3cc], edx */ W32((u32)(r_ecx+0x3ccu), r_edx);
    /* 0048c617: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 0048c61a: mov dword ptr [ecx + 0x384], edx */ W32((u32)(r_ecx+0x384u), r_edx);
    /* 0048c620: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0048c623: mov dword ptr [ecx + 0x390], edx */ W32((u32)(r_ecx+0x390u), r_edx);
    /* 0048c629: mov edx, dword ptr [ecx + 0x2e8] */ r_edx = R32((u32)(r_ecx+0x2e8u));
    /* 0048c62f: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0048c632: mov dword ptr [ecx + 0x2e8], edx */ W32((u32)(r_ecx+0x2e8u), r_edx);
    /* 0048c638: call dword ptr [0xaf914c] */ { u32 t = R32((u32)(0xaf914cu)); r_esp -= 4; W32(r_esp, 0x48c63eu); call_ind(t); }
    /* 0048c63e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c641: movsx ebx, word ptr [ecx + 0x2c] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cu));
    /* 0048c645: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048c647: jl 0x48c688 */ if ((fS!=fO)) goto L_0048c688;
L_0048c649:; BB(0x0048c649);
    /* 0048c649: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048c64f: jg 0x48c688 */ if ((!fZ&&fS==fO)) goto L_0048c688;
L_0048c651:; BB(0x0048c651);
    /* 0048c651: mov edx, dword ptr [0xab02b8] */ r_edx = R32((u32)(0xab02b8u));
    /* 0048c657: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 0048c65a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048c65c: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0048c65f: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c661: mov edi, dword ptr [eax + edx + 8] */ r_edi = R32((u32)(r_eax+r_edx+0x8u));
    /* 0048c665: movzx esi, word ptr [eax + edx + 4] */ r_esi = (u32)R16((u32)(r_eax+r_edx+0x4u));
    /* 0048c66a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048c66c: jl 0x48c688 */ if ((fS!=fO)) goto L_0048c688;
L_0048c66e:; BB(0x0048c66e);
    /* 0048c66e: cmp ebx, 0xb4f */ {  u32 a = r_ebx; u32 b = 0xb4fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048c674: jg 0x48c688 */ if ((!fZ&&fS==fO)) goto L_0048c688;
L_0048c676:; BB(0x0048c676);
    /* 0048c676: mov dword ptr [eax + edx], 0 */ W32((u32)(r_eax+r_edx), 0x0u);
    /* 0048c67d: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c680: mov dword ptr [eax + edx + 4], esi */ W32((u32)(r_eax+r_edx+0x4u), r_esi);
    /* 0048c684: mov dword ptr [eax + edx + 8], edi */ W32((u32)(r_eax+r_edx+0x8u), r_edi);
L_0048c688:; BB(0x0048c688);
    /* 0048c688: mov eax, dword ptr [0xa46fa0] */ r_eax = R32((u32)(0xa46fa0u));
    /* 0048c68d: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0048c690: mov esi, dword ptr [ecx + 0x3c] */ r_esi = R32((u32)(r_ecx+0x3cu));
    /* 0048c693: mov edi, dword ptr [ecx + 0x40] */ r_edi = R32((u32)(r_ecx+0x40u));
    /* 0048c696: mov dword ptr [ecx + 0x37c], eax */ W32((u32)(r_ecx+0x37cu), r_eax);
    /* 0048c69c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048c69e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c6a0: push 0x9a6a74 */ { u32 v = 0x9a6a74u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c6a5: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 0048c6a8: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0048c6ab: mov dword ptr [ecx + 0x74], ebx */ W32((u32)(r_ecx+0x74u), r_ebx);
    /* 0048c6ae: mov dword ptr [ecx + 0x78], esi */ W32((u32)(r_ecx+0x78u), r_esi);
    /* 0048c6b1: mov dword ptr [ecx + 0x7c], edi */ W32((u32)(r_ecx+0x7cu), r_edi);
    /* 0048c6b4: mov dword ptr [ecx + 0x50], ebx */ W32((u32)(r_ecx+0x50u), r_ebx);
    /* 0048c6b7: mov dword ptr [ecx + 0x54], esi */ W32((u32)(r_ecx+0x54u), r_esi);
    /* 0048c6ba: mov dword ptr [ecx + 0x58], edi */ W32((u32)(r_ecx+0x58u), r_edi);
    /* 0048c6bd: mov dword ptr [ecx + 0x44], ebx */ W32((u32)(r_ecx+0x44u), r_ebx);
    /* 0048c6c0: mov dword ptr [ecx + 0x48], esi */ W32((u32)(r_ecx+0x48u), r_esi);
    /* 0048c6c3: mov dword ptr [ecx + 0x4c], edi */ W32((u32)(r_ecx+0x4cu), r_edi);
    /* 0048c6c6: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x48c6cbu); f_007b9a88();
    /* 0048c6cb: mov ebx, dword ptr [ebp - 0x3c] */ r_ebx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c6ce: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c6d1: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048c6d3: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 0048c6d6: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 0048c6d9: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0048c6dc: mov dword ptr [ebx + 0x300], eax */ W32((u32)(r_ebx+0x300u), r_eax);
    /* 0048c6e2: mov dword ptr [ebx + 0x304], edx */ W32((u32)(r_ebx+0x304u), r_edx);
    /* 0048c6e8: mov dword ptr [ebx + 0x308], ecx */ W32((u32)(r_ebx+0x308u), r_ecx);
    /* 0048c6ee: mov dword ptr [esi + 0x314], 0 */ W32((u32)(r_esi+0x314u), 0x0u);
    /* 0048c6f8: mov dword ptr [esi + 0x310], 0 */ W32((u32)(r_esi+0x310u), 0x0u);
    /* 0048c702: mov dword ptr [esi + 0x30c], 0 */ W32((u32)(r_esi+0x30cu), 0x0u);
    /* 0048c70c: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x48c711u); f_0077a684();
    /* 0048c711: mov esi, eax */ r_esi = r_eax;
    /* 0048c713: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048c715: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x48c71au); f_0077a698();
    /* 0048c71a: mov ebx, eax */ r_ebx = r_eax;
    /* 0048c71c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048c71e: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x48c723u); f_0077a6b4();
    /* 0048c723: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c726: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c72a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c72b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c72c: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x48c731u); f_007868f8();
    /* 0048c731: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c734: movzx eax, word ptr [ecx + 0x334] */ r_eax = (u32)R16((u32)(r_ecx+0x334u));
    /* 0048c73b: mov word ptr [ecx + 0x346], ax */ W16((u32)(r_ecx+0x346u), (u16)r_eax);
    /* 0048c742: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x48c747u); f_007b4f54();
    /* 0048c747: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c74a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c74c: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x48c751u); f_00787550();
    /* 0048c751: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c754: add eax, 0x390 */ {  u32 a = r_eax; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c759: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048c75a: call 0x48e500 */ r_esp -= 4; W32(r_esp, 0x48c75fu); f_0048e500();
    /* 0048c75f: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c762: fld dword ptr [0x901478] */ FPUSH(R_F32((u32)(0x901478u)));
    /* 0048c768: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048c76a: fadd dword ptr [0x90147c] */ ST(0) = ST(0) + R_F32((u32)(0x90147cu));
    /* 0048c770: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048c773: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048c777: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c77c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048c77f: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048c782: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048c785: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048c788: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048c78b: mov dword ptr [edx + 0x3a8], eax */ W32((u32)(r_edx+0x3a8u), r_eax);
    /* 0048c791: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0048c793: add eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048c798: mov dword ptr [edx + 0x3ac], eax */ W32((u32)(r_edx+0x3acu), r_eax);
    /* 0048c79e: add edx, 0x390 */ {  u32 a = r_edx; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048c7a4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c7a5: call 0x48e500 */ r_esp -= 4; W32(r_esp, 0x48c7aau); f_0048e500();
    /* 0048c7aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c7ad: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c7b0: fld dword ptr [0x901470] */ FPUSH(R_F32((u32)(0x901470u)));
    /* 0048c7b6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048c7b8: fadd dword ptr [0x901474] */ ST(0) = ST(0) + R_F32((u32)(0x901474u));
    /* 0048c7be: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048c7c1: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048c7c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c7ca: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048c7cd: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048c7d0: fistp dword ptr [edx + 0x3b0] */ W32((u32)(r_edx+0x3b0u), (u32)fx_int32(ST(0))); FPOP();
    /* 0048c7d6: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048c7d9: movzx eax, byte ptr [0xa46e38] */ r_eax = (u32)R8((u32)(0xa46e38u));
    /* 0048c7e0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048c7e2: jne 0x48c7f8 */ if (!fZ) goto L_0048c7f8;
L_0048c7e4:; BB(0x0048c7e4);
    /* 0048c7e4: mov dword ptr [0xa46e3c], 0x42a00000 */ W32((u32)(0xa46e3cu), 0x42a00000u);
    /* 0048c7ee: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c7f3: mov byte ptr [0xa46e38], al */ W8((u32)(0xa46e38u), (u8)r_eax);
L_0048c7f8:; BB(0x0048c7f8);
    /* 0048c7f8: add edx, 0x390 */ {  u32 a = r_edx; u32 b = 0x390u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048c7fe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c7ff: call 0x48e500 */ r_esp -= 4; W32(r_esp, 0x48c804u); f_0048e500();
    /* 0048c804: fld dword ptr [0xa46e3c] */ FPUSH(R_F32((u32)(0xa46e3cu)));
    /* 0048c80a: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0048c80c: fadd dword ptr [0x9014b8] */ ST(0) = ST(0) + R_F32((u32)(0x9014b8u));
    /* 0048c812: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c815: fstp dword ptr [eax + 0x3b4] */ W_F32((u32)(r_eax+0x3b4u), ST(0)); FPOP();
    /* 0048c81b: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0048c81d: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x48c822u); f_0077a6cc();
    /* 0048c822: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c825: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c828: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 0048c82a: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0048c82d: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0048c831: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048c836: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0048c839: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0048c83c: fist dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0)));
    /* 0048c83f: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0048c842: fcomp dword ptr [0x901480] */ fx_compare(ST(0), R_F32((u32)(0x901480u))); FPOP();
    /* 0048c848: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048c84a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0048c84d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048c84f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048c850: je 0x48c8ec */ if (fZ) goto L_0048c8ec;
L_0048c856:; BB(0x0048c856);
    /* 0048c856: mov dword ptr [edx + 0x38c], ecx */ W32((u32)(r_edx+0x38cu), r_ecx);
L_0048c85c:; BB(0x0048c85c);
    /* 0048c85c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0048c85f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0048c862: mov dword ptr [edx + 0x3a4], 0x3f800000 */ W32((u32)(r_edx+0x3a4u), 0x3f800000u);
    /* 0048c86c: mov dword ptr [edx + 0x3d0], ebx */ W32((u32)(r_edx+0x3d0u), r_ebx);
    /* 0048c872: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0048c875: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c87a: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 0048c880: mov dword ptr [edx + 0x3bc], ecx */ W32((u32)(r_edx+0x3bcu), r_ecx);
    /* 0048c886: mov dword ptr [edx + 0x3c0], ebx */ W32((u32)(r_edx+0x3c0u), r_ebx);
    /* 0048c88c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048c88e: mov dword ptr [edx + 0x398], esi */ W32((u32)(r_edx+0x398u), r_esi);
    /* 0048c894: mov dword ptr [edx + 0x39c], esi */ W32((u32)(r_edx+0x39cu), r_esi);
    /* 0048c89a: mov dword ptr [edx + 0x3a0], esi */ W32((u32)(r_edx+0x3a0u), r_esi);
    /* 0048c8a0: mov dword ptr [edx + 0x394], esi */ W32((u32)(r_edx+0x394u), r_esi);
    /* 0048c8a6: mov dword ptr [edx + 0x388], esi */ W32((u32)(r_edx+0x388u), r_esi);
    /* 0048c8ac: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048c8af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8b0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48c8b5u); f_00509590();
    /* 0048c8b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c8b8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c8bb: mov dword ptr [edx + 0x3d4], eax */ W32((u32)(r_edx+0x3d4u), r_eax);
    /* 0048c8c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048c8c3: je 0x48c8d1 */ if (fZ) goto L_0048c8d1;
L_0048c8c5:; BB(0x0048c8c5);
    /* 0048c8c5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8c7: mov ecx, eax */ r_ecx = r_eax;
    /* 0048c8c9: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48c8ceu); f_00508efc();
    /* 0048c8ce: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
L_0048c8d1:; BB(0x0048c8d1);
    /* 0048c8d1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048c8d4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c8d7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048c8da: mov eax, edx */ r_eax = r_edx;
    /* 0048c8dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c8df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048c8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c8e9: ret 8 */ FN_RET(0x0048c58c); r_esp += 12; return;
L_0048c8ec:; BB(0x0048c8ec);
    /* 0048c8ec: mov dword ptr [edx + 0x38c], 0x14 */ W32((u32)(r_edx+0x38cu), 0x14u);
    /* 0048c8f6: jmp 0x48c85c */ goto L_0048c85c;
}

void f_0048c84c(void)
{
    FN_ENTER(0x0048c84c);
    /* 0048c84c: fdiv dword ptr [ebx] */ ST(0) = ST(0) / R_F32((u32)(r_ebx));
    /* 0048c84e: fistp dword ptr [esi + 0x96840f] */ W32((u32)(r_esi+0x96840fu), (u32)fx_int32(ST(0))); FPOP();
    /* 0048c854: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0048c856: mov dword ptr [edx + 0x38c], ecx */ W32((u32)(r_edx+0x38cu), r_ecx);
    /* 0048c85c: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 0048c85f: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 0048c862: mov dword ptr [edx + 0x3a4], 0x3f800000 */ W32((u32)(r_edx+0x3a4u), 0x3f800000u);
    /* 0048c86c: mov dword ptr [edx + 0x3d0], ebx */ W32((u32)(r_edx+0x3d0u), r_ebx);
    /* 0048c872: mov ebx, dword ptr [edx + 0x40] */ r_ebx = R32((u32)(r_edx+0x40u));
    /* 0048c875: push 0x146 */ { u32 v = 0x146u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c87a: mov dword ptr [edx + 0x3b8], eax */ W32((u32)(r_edx+0x3b8u), r_eax);
    /* 0048c880: mov dword ptr [edx + 0x3bc], ecx */ W32((u32)(r_edx+0x3bcu), r_ecx);
    /* 0048c886: mov dword ptr [edx + 0x3c0], ebx */ W32((u32)(r_edx+0x3c0u), r_ebx);
    /* 0048c88c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0048c88e: mov dword ptr [edx + 0x398], esi */ W32((u32)(r_edx+0x398u), r_esi);
    /* 0048c894: mov dword ptr [edx + 0x39c], esi */ W32((u32)(r_edx+0x39cu), r_esi);
    /* 0048c89a: mov dword ptr [edx + 0x3a0], esi */ W32((u32)(r_edx+0x3a0u), r_esi);
    /* 0048c8a0: mov dword ptr [edx + 0x394], esi */ W32((u32)(r_edx+0x394u), r_esi);
    /* 0048c8a6: mov dword ptr [edx + 0x388], esi */ W32((u32)(r_edx+0x388u), r_esi);
    /* 0048c8ac: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0048c8af: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8b0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x48c8b5u); f_00509590();
    /* 0048c8b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c8b8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0048c8bb: mov dword ptr [edx + 0x3d4], eax */ W32((u32)(r_edx+0x3d4u), r_eax);
    /* 0048c8c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048c8c3: je 0x48c8d1 */ if (fZ) goto L_0048c8d1;
L_0048c8c5:; BB(0x0048c8c5);
    /* 0048c8c5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0048c8c7: mov ecx, eax */ r_ecx = r_eax;
    /* 0048c8c9: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x48c8ceu); f_00508efc();
    /* 0048c8ce: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
L_0048c8d1:; BB(0x0048c8d1);
    /* 0048c8d1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048c8d4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048c8d7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048c8da: mov eax, edx */ r_eax = r_edx;
    /* 0048c8dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048c8df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048c8e6: mov esp, ebp */ r_esp = r_ebp;
    /* 0048c8e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048c8e9: ret 8 */ FN_RET(0x0048c84c); r_esp += 12; return;
}

void f_0048c930(void) /* sub_48C930 */
{
    FN_ENTER(0x0048c930);
    /* 0048c930: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c931: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c932: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c933: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0048c935: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048c937: mov ebx, eax */ r_ebx = r_eax;
    /* 0048c939: mov esi, edx */ r_esi = r_edx;
L_0048c93b:; BB(0x0048c93b);
    /* 0048c93b: mov dword ptr [ebx + 0xa46e80], 0 */ W32((u32)(r_ebx+0xa46e80u), 0x0u);
    /* 0048c945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c946: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x48c94bu); f_0068d5a8();
    /* 0048c94b: mov edi, eax */ r_edi = r_eax;
    /* 0048c94d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048c950: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c952: je 0x48c9e6 */ if (fZ) goto L_0048c9e6;
L_0048c958:; BB(0x0048c958);
    /* 0048c958: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048c959: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x48c95eu); f_0048df48();
    /* 0048c95e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048c95f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048c961: je 0x48c9e6 */ if (fZ) goto L_0048c9e6;
L_0048c967:; BB(0x0048c967);
    /* 0048c967: mov ecx, dword ptr [edi + 0xde8] */ r_ecx = R32((u32)(r_edi+0xde8u));
    /* 0048c96d: mov dword ptr [ebx + 0xa46e84], ecx */ W32((u32)(r_ebx+0xa46e84u), r_ecx);
    /* 0048c973: mov ecx, dword ptr [edi + 0xdec] */ r_ecx = R32((u32)(r_edi+0xdecu));
    /* 0048c979: mov dword ptr [ebx + 0xa46e88], ecx */ W32((u32)(r_ebx+0xa46e88u), r_ecx);
    /* 0048c97f: mov ecx, dword ptr [edi + 0xb10] */ r_ecx = R32((u32)(r_edi+0xb10u));
    /* 0048c985: mov dword ptr [ebx + 0xa46e8c], ecx */ W32((u32)(r_ebx+0xa46e8cu), r_ecx);
    /* 0048c98b: mov ecx, dword ptr [edi + 0xb14] */ r_ecx = R32((u32)(r_edi+0xb14u));
    /* 0048c991: mov dword ptr [ebx + 0xa46e90], ecx */ W32((u32)(r_ebx+0xa46e90u), r_ecx);
    /* 0048c997: mov ecx, dword ptr [edi + 0xc7c] */ r_ecx = R32((u32)(r_edi+0xc7cu));
    /* 0048c99d: mov dword ptr [ebx + 0xa46e94], ecx */ W32((u32)(r_ebx+0xa46e94u), r_ecx);
    /* 0048c9a3: mov ecx, dword ptr [edi + 0xc80] */ r_ecx = R32((u32)(r_edi+0xc80u));
    /* 0048c9a9: mov dword ptr [ebx + 0xa46e98], ecx */ W32((u32)(r_ebx+0xa46e98u), r_ecx);
    /* 0048c9af: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 0048c9b2: mov dword ptr [ebx + 0xa46e9c], ecx */ W32((u32)(r_ebx+0xa46e9cu), r_ecx);
    /* 0048c9b8: mov ecx, dword ptr [edi + 0x9a4] */ r_ecx = R32((u32)(r_edi+0x9a4u));
    /* 0048c9be: mov dword ptr [ebx + 0xa46ea0], ecx */ W32((u32)(r_ebx+0xa46ea0u), r_ecx);
    /* 0048c9c4: mov ecx, dword ptr [edi + 0x9a0] */ r_ecx = R32((u32)(r_edi+0x9a0u));
    /* 0048c9ca: mov dword ptr [ebx + 0xa46ea4], ecx */ W32((u32)(r_ebx+0xa46ea4u), r_ecx);
    /* 0048c9d0: mov edi, dword ptr [edi + 0x9a8] */ r_edi = R32((u32)(r_edi+0x9a8u));
    /* 0048c9d6: mov dword ptr [ebx + 0xa46e80], 1 */ W32((u32)(r_ebx+0xa46e80u), 0x1u);
    /* 0048c9e0: mov dword ptr [ebx + 0xa46ea8], edi */ W32((u32)(r_ebx+0xa46ea8u), r_edi);
L_0048c9e6:; BB(0x0048c9e6);
    /* 0048c9e6: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048c9e9: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048c9ec: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048c9ef: jl 0x48c93b */ if ((fS!=fO)) goto L_0048c93b;
L_0048c9f5:; BB(0x0048c9f5);
    /* 0048c9f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048c9f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048c9f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048c9f8: ret  */ FN_RET(0x0048c930); r_esp += 4; return;
}

void f_0048c9fc(void) /* sub_48C9FC */
{
    FN_ENTER(0x0048c9fc);
    /* 0048c9fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048c9fd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048c9fe: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 0048ca02: movzx eax, word ptr [ebx + 0x1c] */ r_eax = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0048ca06: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ca08: jl 0x48ca45 */ if ((fS!=fO)) goto L_0048ca45;
L_0048ca0a:; BB(0x0048ca0a);
    /* 0048ca0a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0048ca0d: jge 0x48ca45 */ if ((fS==fO)) goto L_0048ca45;
L_0048ca0f:; BB(0x0048ca0f);
    /* 0048ca0f: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0048ca12: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048ca14: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0048ca16: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048ca18: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048ca1a: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0048ca1c: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 0048ca20: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ca22: mov edx, dword ptr [eax + 0xa46e80] */ r_edx = R32((u32)(r_eax+0xa46e80u));
    /* 0048ca28: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ca2a: jne 0x48ca2f */ if (!fZ) goto L_0048ca2f;
L_0048ca2c:; BB(0x0048ca2c);
    /* 0048ca2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ca2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ca2e: ret  */ FN_RET(0x0048c9fc); r_esp += 4; return;
L_0048ca2f:; BB(0x0048ca2f);
    /* 0048ca2f: mov dword ptr [ebp*4 + 0xa46e80], 0 */ W32((u32)(r_ebp*4+0xa46e80u), 0x0u);
    /* 0048ca3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ca3b: call 0x48df48 */ r_esp -= 4; W32(r_esp, 0x48ca40u); f_0048df48();
    /* 0048ca40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ca41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ca43: jne 0x48ca48 */ if (!fZ) goto L_0048ca48;
L_0048ca45:; BB(0x0048ca45);
    /* 0048ca45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ca46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ca47: ret  */ FN_RET(0x0048c9fc); r_esp += 4; return;
L_0048ca48:; BB(0x0048ca48);
    /* 0048ca48: mov eax, dword ptr [ebp*4 + 0xa46e84] */ r_eax = R32((u32)(r_ebp*4+0xa46e84u));
    /* 0048ca4f: mov dword ptr [ebx + 0xde8], eax */ W32((u32)(r_ebx+0xde8u), r_eax);
    /* 0048ca55: mov edx, dword ptr [ebp*4 + 0xa46e88] */ r_edx = R32((u32)(r_ebp*4+0xa46e88u));
    /* 0048ca5c: mov dword ptr [ebx + 0xdec], edx */ W32((u32)(r_ebx+0xdecu), r_edx);
    /* 0048ca62: mov ecx, dword ptr [ebp*4 + 0xa46e8c] */ r_ecx = R32((u32)(r_ebp*4+0xa46e8cu));
    /* 0048ca69: mov dword ptr [ebx + 0xb10], ecx */ W32((u32)(r_ebx+0xb10u), r_ecx);
    /* 0048ca6f: mov eax, dword ptr [ebp*4 + 0xa46e90] */ r_eax = R32((u32)(r_ebp*4+0xa46e90u));
    /* 0048ca76: mov dword ptr [ebx + 0xb14], eax */ W32((u32)(r_ebx+0xb14u), r_eax);
    /* 0048ca7c: mov eax, dword ptr [ebp*4 + 0xa46e94] */ r_eax = R32((u32)(r_ebp*4+0xa46e94u));
    /* 0048ca83: mov dword ptr [ebx + 0xc7c], eax */ W32((u32)(r_ebx+0xc7cu), r_eax);
    /* 0048ca89: mov eax, dword ptr [ebp*4 + 0xa46e98] */ r_eax = R32((u32)(r_ebp*4+0xa46e98u));
    /* 0048ca90: mov dword ptr [ebx + 0xc80], eax */ W32((u32)(r_ebx+0xc80u), r_eax);
    /* 0048ca96: mov eax, dword ptr [ebp*4 + 0xa46e9c] */ r_eax = R32((u32)(r_ebp*4+0xa46e9cu));
    /* 0048ca9d: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 0048caa0: mov eax, dword ptr [ebp*4 + 0xa46ea0] */ r_eax = R32((u32)(r_ebp*4+0xa46ea0u));
    /* 0048caa7: mov dword ptr [ebx + 0x9a4], eax */ W32((u32)(r_ebx+0x9a4u), r_eax);
    /* 0048caad: mov eax, dword ptr [ebp*4 + 0xa46ea4] */ r_eax = R32((u32)(r_ebp*4+0xa46ea4u));
    /* 0048cab4: mov dword ptr [ebx + 0x9a0], eax */ W32((u32)(r_ebx+0x9a0u), r_eax);
    /* 0048caba: mov ebp, dword ptr [ebp*4 + 0xa46ea8] */ r_ebp = R32((u32)(r_ebp*4+0xa46ea8u));
    /* 0048cac1: mov dword ptr [ebx + 0x9a8], ebp */ W32((u32)(r_ebx+0x9a8u), r_ebp);
    /* 0048cac7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048cac8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cac9: ret  */ FN_RET(0x0048c9fc); r_esp += 4; return;
}

void f_0048cacc(void) /* sub_48CACC */
{
    FN_ENTER(0x0048cacc);
    /* 0048cacc: mov dword ptr [0xa46f30], 0x3f800000 */ W32((u32)(0xa46f30u), 0x3f800000u);
    /* 0048cad6: mov dword ptr [0xa46f34], 0x41000000 */ W32((u32)(0xa46f34u), 0x41000000u);
    /* 0048cae0: mov dword ptr [0xa46f38], 0x3fc00000 */ W32((u32)(0xa46f38u), 0x3fc00000u);
    /* 0048caea: ret  */ FN_RET(0x0048cacc); r_esp += 4; return;
}

void f_0048caec(void) /* sub_48CAEC */
{
    FN_ENTER(0x0048caec);
    /* 0048caec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048caee: mov dword ptr [0xa46e80], eax */ W32((u32)(0xa46e80u), r_eax);
    /* 0048caf3: mov dword ptr [0xa46eac], eax */ W32((u32)(0xa46eacu), r_eax);
    /* 0048caf8: mov dword ptr [0xa46ed8], eax */ W32((u32)(0xa46ed8u), r_eax);
    /* 0048cafd: mov dword ptr [0xa46f04], eax */ W32((u32)(0xa46f04u), r_eax);
    /* 0048cb02: ret  */ FN_RET(0x0048caec); r_esp += 4; return;
}

void f_0048cb04(void) /* sub_48CB04 */
{
    FN_ENTER(0x0048cb04);
    /* 0048cb04: mov dword ptr [0xa46f40], 0 */ W32((u32)(0xa46f40u), 0x0u);
    /* 0048cb0e: ret  */ FN_RET(0x0048cb04); r_esp += 4; return;
}

void f_0048cb10(void) /* sub_48CB10 */
{
    FN_ENTER(0x0048cb10);
    /* 0048cb10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb14: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cb17: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0048cb1b: mov eax, dword ptr [0xa46f40] */ r_eax = R32((u32)(0xa46f40u));
    /* 0048cb20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cb22: jne 0x48cb2c */ if (!fZ) goto L_0048cb2c;
L_0048cb24:; BB(0x0048cb24);
    /* 0048cb24: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048cb27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048cb28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cb29: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048cb2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048cb2b: ret  */ FN_RET(0x0048cb10); r_esp += 4; return;
L_0048cb2c:; BB(0x0048cb2c);
    /* 0048cb2c: movsx edx, byte ptr [esi + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x4u));
    /* 0048cb30: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cb32: jl 0x48cb8d */ if ((fS!=fO)) goto L_0048cb8d;
L_0048cb34:; BB(0x0048cb34);
    /* 0048cb34: lea ecx, [esi + 5] */ r_ecx = (u32)(r_esi+0x5u);
    /* 0048cb37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048cb39: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cb3b: mov ebp, eax */ r_ebp = r_eax;
    /* 0048cb3d: mov esi, edx */ r_esi = r_edx;
    /* 0048cb3f: mov edi, ecx */ r_edi = r_ecx;
L_0048cb41:; BB(0x0048cb41);
    /* 0048cb41: movsx edx, byte ptr [edi] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi));
    /* 0048cb44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cb46: jl 0x48cbf7 */ if ((fS!=fO)) goto L_0048cbf7;
L_0048cb4c:; BB(0x0048cb4c);
    /* 0048cb4c: movsx eax, byte ptr [edi + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1u));
    /* 0048cb50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cb52: jl 0x48cbed */ if ((fS!=fO)) goto L_0048cbed;
L_0048cb58:; BB(0x0048cb58);
    /* 0048cb58: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048cb5b: lea ecx, [ecx + ebx] */ r_ecx = (u32)(r_ecx+r_ebx);
    /* 0048cb5e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb61: call 0x49e6b4 */ r_esp -= 4; W32(r_esp, 0x48cb66u); f_0049e6b4();
    /* 0048cb66: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048cb69: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048cb6c: add ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cb6f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0048cb72: cmp ebx, 0x24 */ {  u32 a = r_ebx; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cb75: jl 0x48cb41 */ if ((fS!=fO)) goto L_0048cb41;
L_0048cb77:; BB(0x0048cb77);
    /* 0048cb77: mov eax, ebp */ r_eax = r_ebp;
    /* 0048cb79: mov edx, esi */ r_edx = r_esi;
    /* 0048cb7b: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_0048cb7f:; BB(0x0048cb7f);
    /* 0048cb7f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0048cb82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb84: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cb85: call 0x48a8e4 */ r_esp -= 4; W32(r_esp, 0x48cb8au); f_0048a8e4();
    /* 0048cb8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0048cb8d:; BB(0x0048cb8d);
    /* 0048cb8d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0048cb8f:; BB(0x0048cb8f);
    /* 0048cb8f: movsx eax, byte ptr [ebx + esi + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+r_esi+0x4u));
    /* 0048cb94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cb96: jl 0x48cbdd */ if ((fS!=fO)) goto L_0048cbdd;
L_0048cb98:; BB(0x0048cb98);
    /* 0048cb98: cmp ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cb9b: jl 0x48cbdd */ if ((fS!=fO)) goto L_0048cbdd;
L_0048cb9d:; BB(0x0048cb9d);
    /* 0048cb9d: cmp ebx, 0x26 */ {  u32 a = r_ebx; u32 b = 0x26u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cba0: jg 0x48cbdd */ if ((!fZ&&fS==fO)) goto L_0048cbdd;
L_0048cba2:; BB(0x0048cba2);
    /* 0048cba2: lea edi, [ebx - 7] */ r_edi = (u32)(r_ebx+0xfffffff9u);
    /* 0048cba5: mov edx, eax */ r_edx = r_eax;
    /* 0048cba7: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0048cbaa: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0048cbac: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048cbae: je 0x48cbb5 */ if (fZ) goto L_0048cbb5;
L_0048cbb0:; BB(0x0048cbb0);
    /* 0048cbb0: mov ebp, 1 */ r_ebp = 0x1u;
L_0048cbb5:; BB(0x0048cbb5);
    /* 0048cbb5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0048cbb7: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0048cbb9: je 0x48cbc0 */ if (fZ) goto L_0048cbc0;
L_0048cbbb:; BB(0x0048cbbb);
    /* 0048cbbb: mov ecx, 1 */ r_ecx = 0x1u;
L_0048cbc0:; BB(0x0048cbc0);
    /* 0048cbc0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cbc2: jne 0x48cbd1 */ if (!fZ) goto L_0048cbd1;
L_0048cbc4:; BB(0x0048cbc4);
    /* 0048cbc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cbc5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cbc6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048cbc7: call 0x490058 */ r_esp -= 4; W32(r_esp, 0x48cbccu); f_00490058();
    /* 0048cbcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048cbcf: jmp 0x48cbdd */ goto L_0048cbdd;
L_0048cbd1:; BB(0x0048cbd1);
    /* 0048cbd1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cbd4: jne 0x48cbdd */ if (!fZ) goto L_0048cbdd;
L_0048cbd6:; BB(0x0048cbd6);
    /* 0048cbd6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048cbd7: call 0x490090 */ r_esp -= 4; W32(r_esp, 0x48cbdcu); f_00490090();
    /* 0048cbdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0048cbdd:; BB(0x0048cbdd);
    /* 0048cbdd: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cbe0: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cbe3: jl 0x48cb8f */ if ((fS!=fO)) goto L_0048cb8f;
L_0048cbe5:; BB(0x0048cbe5);
    /* 0048cbe5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048cbe8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048cbe9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cbea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0048cbeb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048cbec: ret  */ FN_RET(0x0048cb10); r_esp += 4; return;
L_0048cbed:; BB(0x0048cbed);
    /* 0048cbed: mov eax, ebp */ r_eax = r_ebp;
    /* 0048cbef: mov edx, esi */ r_edx = r_esi;
    /* 0048cbf1: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0048cbf5: jmp 0x48cb7f */ goto L_0048cb7f;
L_0048cbf7:; BB(0x0048cbf7);
    /* 0048cbf7: mov eax, ebp */ r_eax = r_ebp;
    /* 0048cbf9: mov edx, esi */ r_edx = r_esi;
    /* 0048cbfb: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
    /* 0048cbff: jmp 0x48cb7f */ goto L_0048cb7f;
}

void f_0048cc04(void) /* sub_48CC04 */
{
    FN_ENTER(0x0048cc04);
    /* 0048cc04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc05: sub esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cc0b: mov ecx, dword ptr [esp + 0xa0] */ r_ecx = R32((u32)(r_esp+0xa0u));
    /* 0048cc12: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 0048cc19: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cc1b: jl 0x48cc22 */ if ((fS!=fO)) goto L_0048cc22;
L_0048cc1d:; BB(0x0048cc1d);
    /* 0048cc1d: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cc20: jle 0x48cc2a */ if ((fZ||fS!=fO)) goto L_0048cc2a;
L_0048cc22:; BB(0x0048cc22);
    /* 0048cc22: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048cc28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cc29: ret  */ FN_RET(0x0048cc04); r_esp += 4; return;
L_0048cc2a:; BB(0x0048cc2a);
    /* 0048cc2a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0048cc2c:; BB(0x0048cc2c);
    /* 0048cc2c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0048cc31: mov byte ptr [esp + ebp + 0x4c], al */ W8((u32)(r_esp+r_ebp+0x4cu), (u8)r_eax);
    /* 0048cc35: mov byte ptr [esp + ebp + 0x4d], al */ W8((u32)(r_esp+r_ebp+0x4du), (u8)r_eax);
    /* 0048cc39: mov byte ptr [esp + ebp + 0x4e], al */ W8((u32)(r_esp+r_ebp+0x4eu), (u8)r_eax);
    /* 0048cc3d: mov byte ptr [esp + ebp + 0x4f], al */ W8((u32)(r_esp+r_ebp+0x4fu), (u8)r_eax);
    /* 0048cc41: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048cc44: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cc47: jl 0x48cc2c */ if ((fS!=fO)) goto L_0048cc2c;
L_0048cc49:; BB(0x0048cc49);
    /* 0048cc49: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 0048cc50: mov byte ptr [esp + 0x4c], al */ W8((u32)(r_esp+0x4cu), (u8)r_eax);
    /* 0048cc54: mov eax, 1 */ r_eax = 0x1u;
    /* 0048cc59: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0048cc5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cc5d: jle 0x48ccb6 */ if ((fZ||fS!=fO)) goto L_0048ccb6;
L_0048cc5f:; BB(0x0048cc5f);
    /* 0048cc5f: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0048cc63: mov ebx, eax */ r_ebx = r_eax;
    /* 0048cc65: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0048cc68: mov esi, ecx */ r_esi = r_ecx;
L_0048cc6a:; BB(0x0048cc6a);
    /* 0048cc6a: lea eax, [esp + 0x90] */ r_eax = (u32)(r_esp+0x90u);
    /* 0048cc71: lea edx, [esp + 0x8c] */ r_edx = (u32)(r_esp+0x8cu);
    /* 0048cc78: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc7a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0048cc7b: call 0x49b750 */ r_esp -= 4; W32(r_esp, 0x48cc80u); f_0049b750();
    /* 0048cc80: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0048cc83: movzx edx, byte ptr [esp + 0x90] */ r_edx = (u32)R8((u32)(r_esp+0x90u));
    /* 0048cc8b: mov byte ptr [esp + ebx + 0x4c], dl */ W8((u32)(r_esp+r_ebx+0x4cu), (u8)r_edx);
    /* 0048cc8f: movzx edx, byte ptr [esp + 0x8c] */ r_edx = (u32)R8((u32)(r_esp+0x8cu));
    /* 0048cc97: mov byte ptr [esp + ebx + 0x4d], dl */ W8((u32)(r_esp+r_ebx+0x4du), (u8)r_edx);
    /* 0048cc9b: mov edx, dword ptr [esp + 0xa4] */ r_edx = R32((u32)(r_esp+0xa4u));
    /* 0048cca2: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048cca5: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cca8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0048ccab: cmp ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ccad: jl 0x48cc6a */ if ((fS!=fO)) goto L_0048cc6a;
L_0048ccaf:; BB(0x0048ccaf);
    /* 0048ccaf: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0048ccb3: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0048ccb6:; BB(0x0048ccb6);
    /* 0048ccb6: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x48ccbbu); f_0052cf54();
    /* 0048ccbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ccbd: je 0x48cd00 */ if (fZ) goto L_0048cd00;
L_0048ccbf:; BB(0x0048ccbf);
    /* 0048ccbf: mov byte ptr [esp + 8], 0xad */ W8((u32)(r_esp+0x8u), 0xadu);
    /* 0048ccc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048ccc6: mov byte ptr [esp + 9], 0x11 */ W8((u32)(r_esp+0x9u), 0x11u);
L_0048cccb:; BB(0x0048cccb);
    /* 0048cccb: movzx edx, byte ptr [esp + eax + 0x4c] */ r_edx = (u32)R8((u32)(r_esp+r_eax+0x4cu));
    /* 0048ccd0: movzx ecx, byte ptr [esp + eax + 0x4d] */ r_ecx = (u32)R8((u32)(r_esp+r_eax+0x4du));
    /* 0048ccd5: mov byte ptr [esp + eax + 0xc], dl */ W8((u32)(r_esp+r_eax+0xcu), (u8)r_edx);
    /* 0048ccd9: movzx edx, byte ptr [esp + eax + 0x4e] */ r_edx = (u32)R8((u32)(r_esp+r_eax+0x4eu));
    /* 0048ccde: mov byte ptr [esp + eax + 0xd], cl */ W8((u32)(r_esp+r_eax+0xdu), (u8)r_ecx);
    /* 0048cce2: mov byte ptr [esp + eax + 0xe], dl */ W8((u32)(r_esp+r_eax+0xeu), (u8)r_edx);
    /* 0048cce6: movzx edx, byte ptr [esp + eax + 0x4f] */ r_edx = (u32)R8((u32)(r_esp+r_eax+0x4fu));
    /* 0048cceb: mov byte ptr [esp + eax + 0xf], dl */ W8((u32)(r_esp+r_eax+0xfu), (u8)r_edx);
    /* 0048ccef: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ccf2: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ccf5: jl 0x48cccb */ if ((fS!=fO)) goto L_0048cccb;
L_0048ccf7:; BB(0x0048ccf7);
    /* 0048ccf7: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0048ccfb: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x48cd00u); f_008003e0();
L_0048cd00:; BB(0x0048cd00);
    /* 0048cd00: add esp, 0x94 */ {  u32 a = r_esp; u32 b = 0x94u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048cd06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cd07: ret  */ FN_RET(0x0048cc04); r_esp += 4; return;
}

void f_0048cd08(void) /* sub_48CD08 */
{
    FN_ENTER(0x0048cd08);
    /* 0048cd08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048cd0a: sub esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048cd10: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048cd12: mov ecx, dword ptr [esp + 0xa8] */ r_ecx = R32((u32)(r_esp+0xa8u));
    /* 0048cd19: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 0048cd20: mov ebp, ecx */ r_ebp = r_ecx;
L_0048cd22:; BB(0x0048cd22);
    /* 0048cd22: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0048cd27: mov byte ptr [esp + eax + 0x5c], cl */ W8((u32)(r_esp+r_eax+0x5cu), (u8)r_ecx);
    /* 0048cd2b: mov byte ptr [esp + eax + 0x5d], cl */ W8((u32)(r_esp+r_eax+0x5du), (u8)r_ecx);
    /* 0048cd2f: mov byte ptr [esp + eax + 0x5e], cl */ W8((u32)(r_esp+r_eax+0x5eu), (u8)r_ecx);
    /* 0048cd33: mov byte ptr [esp + eax + 0x5f], cl */ W8((u32)(r_esp+r_eax+0x5fu), (u8)r_ecx);
    /* 0048cd37: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048cd3a: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cd3d: jl 0x48cd22 */ if ((fS!=fO)) goto L_0048cd22;
L_0048cd3f:; BB(0x0048cd3f);
    /* 0048cd3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0048cd41: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048cd43: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cd45: jle 0x48cdce */ if ((fZ||fS!=fO)) goto L_0048cdce;
L_0048cd4b:; BB(0x0048cd4b);
    /* 0048cd4b: mov edi, dword ptr [esp + 0xb0] */ r_edi = R32((u32)(r_esp+0xb0u));
    /* 0048cd52: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0048cd56: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 0048cd5a: mov esi, eax */ r_esi = r_eax;
L_0048cd5c:; BB(0x0048cd5c);
    /* 0048cd5c: mov edx, dword ptr [esp + 0xa8] */ r_edx = R32((u32)(r_esp+0xa8u));
    /* 0048cd63: mov ebp, dword ptr [edx + esi*4] */ r_ebp = R32((u32)(r_edx+r_esi*4));
    /* 0048cd66: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cd68: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48cd6du); f_008587a5();
    /* 0048cd6d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0048cd70: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0048cd73: fdiv dword ptr [0x901520] */ ST(0) = ST(0) / R_F32((u32)(0x901520u));
    /* 0048cd79: fcomp dword ptr [0x901500] */ fx_compare(ST(0), R_F32((u32)(0x901500u))); FPOP();
    /* 0048cd7f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048cd81: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048cd82: jbe 0x48cd89 */ if ((fC||fZ)) goto L_0048cd89;
L_0048cd84:; BB(0x0048cd84);
    /* 0048cd84: mov ebx, 0x40 */ r_ebx = 0x40u;
L_0048cd89:; BB(0x0048cd89);
    /* 0048cd89: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cd8b: jne 0x48cdab */ if (!fZ) goto L_0048cdab;
L_0048cd8d:; BB(0x0048cd8d);
    /* 0048cd8d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x48cd92u); f_008587a5();
    /* 0048cd92: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0048cd96: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0048cd9a: fdiv dword ptr [0x901520] */ ST(0) = ST(0) / R_F32((u32)(0x901520u));
    /* 0048cda0: fcomp dword ptr [0x9014fc] */ fx_compare(ST(0), R_F32((u32)(0x9014fcu))); FPOP();
    /* 0048cda6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0048cda8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0048cda9: jae 0x48cdae */ if (!fC) goto L_0048cdae;
L_0048cdab:; BB(0x0048cdab);
    /* 0048cdab: or ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0048cdae:; BB(0x0048cdae);
    /* 0048cdae: mov edx, dword ptr [esp + 0xac] */ r_edx = R32((u32)(r_esp+0xacu));
    /* 0048cdb5: or ebx, 0xffffff00 */ {  u32 a = r_ebx; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cdbb: mov byte ptr [esp + ebp + 0x63], bl */ W8((u32)(r_esp+r_ebp+0x63u), (u8)r_ebx);
    /* 0048cdbf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0048cdc2: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cdc4: jl 0x48cd5c */ if ((fS!=fO)) goto L_0048cd5c;
L_0048cdc6:; BB(0x0048cdc6);
    /* 0048cdc6: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0048cdca: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
L_0048cdce:; BB(0x0048cdce);
    /* 0048cdce: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x48cdd3u); f_0052cf54();
    /* 0048cdd3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cdd5: je 0x48ce18 */ if (fZ) goto L_0048ce18;
L_0048cdd7:; BB(0x0048cdd7);
    /* 0048cdd7: mov byte ptr [esp + 0x18], 0xad */ W8((u32)(r_esp+0x18u), 0xadu);
    /* 0048cddc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0048cdde: mov byte ptr [esp + 0x19], 0x11 */ W8((u32)(r_esp+0x19u), 0x11u);
L_0048cde3:; BB(0x0048cde3);
    /* 0048cde3: movzx edx, byte ptr [esp + eax + 0x5c] */ r_edx = (u32)R8((u32)(r_esp+r_eax+0x5cu));
    /* 0048cde8: movzx ecx, byte ptr [esp + eax + 0x5d] */ r_ecx = (u32)R8((u32)(r_esp+r_eax+0x5du));
    /* 0048cded: mov byte ptr [esp + eax + 0x1c], dl */ W8((u32)(r_esp+r_eax+0x1cu), (u8)r_edx);
    /* 0048cdf1: movzx edx, byte ptr [esp + eax + 0x5e] */ r_edx = (u32)R8((u32)(r_esp+r_eax+0x5eu));
    /* 0048cdf6: mov byte ptr [esp + eax + 0x1d], cl */ W8((u32)(r_esp+r_eax+0x1du), (u8)r_ecx);
    /* 0048cdfa: mov byte ptr [esp + eax + 0x1e], dl */ W8((u32)(r_esp+r_eax+0x1eu), (u8)r_edx);
    /* 0048cdfe: movzx edx, byte ptr [esp + eax + 0x5f] */ r_edx = (u32)R8((u32)(r_esp+r_eax+0x5fu));
    /* 0048ce03: mov byte ptr [esp + eax + 0x1f], dl */ W8((u32)(r_esp+r_eax+0x1fu), (u8)r_edx);
    /* 0048ce07: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0048ce0a: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ce0d: jl 0x48cde3 */ if ((fS!=fO)) goto L_0048cde3;
L_0048ce0f:; BB(0x0048ce0f);
    /* 0048ce0f: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0048ce13: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x48ce18u); f_008003e0();
L_0048ce18:; BB(0x0048ce18);
    /* 0048ce18: add esp, 0x9c */ {  u32 a = r_esp; u32 b = 0x9cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0048ce1e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048ce1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0048ce20: ret  */ FN_RET(0x0048cd08); r_esp += 4; return;
}

void f_0048ce24(void) /* sub_48CE24 */
{
    FN_ENTER(0x0048ce24);
    /* 0048ce24: mov dword ptr [0xa46f40], 1 */ W32((u32)(0xa46f40u), 0x1u);
    /* 0048ce2e: ret  */ FN_RET(0x0048ce24); r_esp += 4; return;
}

void f_0048ce30(void) /* sub_48CE30 */
{
    FN_ENTER(0x0048ce30);
    /* 0048ce30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0048ce33: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0048ce35: call 0x48ce54 */ r_esp -= 4; W32(r_esp, 0x48ce3au); f_0048ce54();
    /* 0048ce3a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0048ce3e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048ce40: jne 0x48ce46 */ if (!fZ) goto L_0048ce46;
L_0048ce42:; BB(0x0048ce42);
    /* 0048ce42: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ce43: ret 4 */ FN_RET(0x0048ce30); r_esp += 8; return;
L_0048ce46:; BB(0x0048ce46);
    /* 0048ce46: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce47: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x48ce4cu); f_005c2f74();
    /* 0048ce4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048ce4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0048ce4e: ret 4 */ FN_RET(0x0048ce30); r_esp += 8; return;
}

void f_0048ce54(void) /* sub_48CE54 */
{
    FN_ENTER(0x0048ce54);
    /* 0048ce54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce55: mov ebp, esp */ r_ebp = r_esp;
    /* 0048ce57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce59: push 0x8cff10 */ { u32 v = 0x8cff10u; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce5e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0048ce64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce65: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0048ce6c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0048ce6f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0048ce72: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0048ce75: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0048ce78: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0048ce7b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0048ce7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0048ce85: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ce88: mov eax, dword ptr [ecx + 0x380] */ r_eax = R32((u32)(r_ecx+0x380u));
    /* 0048ce8e: mov dword ptr [ecx], 0xaf9240 */ W32((u32)(r_ecx), 0xaf9240u);
    /* 0048ce94: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ce97: jl 0x48cea8 */ if ((fS!=fO)) goto L_0048cea8;
L_0048ce99:; BB(0x0048ce99);
    /* 0048ce99: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048ce9c: jg 0x48cea8 */ if ((!fZ&&fS==fO)) goto L_0048cea8;
L_0048ce9e:; BB(0x0048ce9e);
    /* 0048ce9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0048ce9f: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x48cea4u); f_008113e4();
    /* 0048cea4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048cea5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_0048cea8:; BB(0x0048cea8);
    /* 0048cea8: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x48ceadu); f_0044bd78();
    /* 0048cead: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048ceaf: je 0x48cf92 */ if (fZ) goto L_0048cf92;
L_0048ceb5:; BB(0x0048ceb5);
    /* 0048ceb5: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_0048ceb8:; BB(0x0048ceb8);
    /* 0048ceb8: mov edx, dword ptr [edx + 0x388] */ r_edx = R32((u32)(r_edx+0x388u));
    /* 0048cebe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cec0: je 0x48cedc */ if (fZ) goto L_0048cedc;
L_0048cec2:; BB(0x0048cec2);
    /* 0048cec2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0048cec6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0048cecb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0048cecf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048ced2: mov dword ptr [edx + 0x388], 0 */ W32((u32)(r_edx+0x388u), 0x0u);
L_0048cedc:; BB(0x0048cedc);
    /* 0048cedc: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x48cee1u); f_00717f38();
    /* 0048cee1: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0048cee6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048ceea: jle 0x48cf08 */ if ((fZ||fS!=fO)) goto L_0048cf08;
L_0048ceec:; BB(0x0048ceec);
    /* 0048ceec: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048cef3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cef5: je 0x48cf01 */ if (fZ) goto L_0048cf01;
L_0048cef7:; BB(0x0048cef7);
    /* 0048cef7: call 0x6855b0 */ r_esp -= 4; W32(r_esp, 0x48cefcu); f_006855b0();
    /* 0048cefc: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0048cf01:; BB(0x0048cf01);
    /* 0048cf01: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cf04: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cf06: jl 0x48ceec */ if ((fS!=fO)) goto L_0048ceec;
L_0048cf08:; BB(0x0048cf08);
    /* 0048cf08: call 0x69b69c */ r_esp -= 4; W32(r_esp, 0x48cf0du); f_0069b69c();
    /* 0048cf0d: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0048cf13: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cf15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0048cf17: jle 0x48cf36 */ if ((fZ||fS!=fO)) goto L_0048cf36;
L_0048cf19:; BB(0x0048cf19);
    /* 0048cf19: mov ecx, dword ptr [ebx*4 + 0xaad720] */ r_ecx = R32((u32)(r_ebx*4+0xaad720u));
    /* 0048cf20: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cf22: je 0x48cf2f */ if (fZ) goto L_0048cf2f;
L_0048cf24:; BB(0x0048cf24);
    /* 0048cf24: mov eax, dword ptr [ecx + 0x3ec] */ r_eax = R32((u32)(r_ecx+0x3ecu));
    /* 0048cf2a: cmp eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cf2d: je 0x48cf85 */ if (fZ) goto L_0048cf85;
L_0048cf2f:; BB(0x0048cf2f);
    /* 0048cf2f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0048cf32: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0048cf34: jl 0x48cf19 */ if ((fS!=fO)) goto L_0048cf19;
L_0048cf36:; BB(0x0048cf36);
    /* 0048cf36: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x48cf3bu); f_004d3250();
    /* 0048cf3b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048cf3e: call 0x48cfbc */ r_esp -= 4; W32(r_esp, 0x48cf43u); f_0048cfbc();
    /* 0048cf43: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048cf46: call 0x48cfe0 */ r_esp -= 4; W32(r_esp, 0x48cf4bu); f_0048cfe0();
    /* 0048cf4b: mov dword ptr [0xa46f9c], 0 */ W32((u32)(0xa46f9cu), 0x0u);
    /* 0048cf55: mov dword ptr [0xa46f90], 0xbf800000 */ W32((u32)(0xa46f90u), 0xbf800000u);
    /* 0048cf5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0048cf66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048cf69: call 0x78638c */ r_esp -= 4; W32(r_esp, 0x48cf6eu); f_0078638c();
    /* 0048cf6e: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0048cf71: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0048cf74: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0048cf77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0048cf7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0048cf81: mov esp, ebp */ r_esp = r_ebp;
    /* 0048cf83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0048cf84: ret  */ FN_RET(0x0048ce54); r_esp += 4; return;
L_0048cf85:; BB(0x0048cf85);
    /* 0048cf85: call 0x69357c */ r_esp -= 4; W32(r_esp, 0x48cf8au); f_0069357c();
    /* 0048cf8a: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 0048cf90: jmp 0x48cf2f */ goto L_0048cf2f;
L_0048cf92:; BB(0x0048cf92);
    /* 0048cf92: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x48cf97u); f_00815434();
    /* 0048cf97: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048cf9a: mov eax, dword ptr [edx + 0x380] */ r_eax = R32((u32)(r_edx+0x380u));
    /* 0048cfa0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0048cfa3: jne 0x48ceb8 */ if (!fZ) goto L_0048ceb8;
L_0048cfa9:; BB(0x0048cfa9);
    /* 0048cfa9: push 0x900f68 */ { u32 v = 0x900f68u; r_esp -= 4; W32(r_esp, v); }
    /* 0048cfae: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x48cfb3u); f_00814afc();
    /* 0048cfb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0048cfb4: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0048cfb7: jmp 0x48ceb8 */ goto L_0048ceb8;
}

void f_0048cf65(void)
{
    FN_ENTER(0x0048cf65);
    /* 0048cf65: dec dword ptr [ebx + 0x1ee8e04d] */ { u32 ad = (u32)(r_ebx+0x1ee8e04du); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0048cf6b: xchg esp, eax */ { u32 x = r_esp; u32 y = r_eax; r_esp = y; r_eax = x; }
    /* 0048cf6c: das  */ UNSUP(0x0048cf6c, "das ");
    /* 0048cf6d: add byte ptr [ebx + 0x758be47d], cl */ { u32 ad = (u32)(r_ebx+0x758be47du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0048cf73: call 0x8c352d03 */ r_esp -= 4; W32(r_esp, 0x48cf78u); f_8c352d03();
    /* 0048cf78: dec ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0048cf79: hlt  */ UNSUP(0x0048cf79, "hlt");
}

void f_0048cfbc(void) /* sub_48CFBC */
{
    FN_ENTER(0x0048cfbc);
    /* 0048cfbc: mov edx, dword ptr [0xa46f98] */ r_edx = R32((u32)(0xa46f98u));
    /* 0048cfc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048cfc4: je 0x48cfde */ if (fZ) goto L_0048cfde;
L_0048cfc6:; BB(0x0048cfc6);
    /* 0048cfc6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0048cfca: mov dword ptr [0xa46f98], 0 */ W32((u32)(0xa46f98u), 0x0u);
    /* 0048cfd4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048cfd9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0048cfdd: ret  */ FN_RET(0x0048cfbc); r_esp += 4; return;
L_0048cfde:; BB(0x0048cfde);
    /* 0048cfde: ret  */ FN_RET(0x0048cfbc); r_esp += 4; return;
}

void f_0048cfe0(void) /* sub_48CFE0 */
{
    FN_ENTER(0x0048cfe0);
    /* 0048cfe0: mov edx, dword ptr [0xa46f94] */ r_edx = R32((u32)(0xa46f94u));
    /* 0048cfe6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048cfe8: je 0x48d002 */ if (fZ) goto L_0048d002;
L_0048cfea:; BB(0x0048cfea);
    /* 0048cfea: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0048cfee: mov dword ptr [0xa46f94], 0 */ W32((u32)(0xa46f94u), 0x0u);
    /* 0048cff8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0048cffd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0048d001: ret  */ FN_RET(0x0048cfe0); r_esp += 4; return;
L_0048d002:; BB(0x0048d002);
    /* 0048d002: ret  */ FN_RET(0x0048cfe0); r_esp += 4; return;
}

