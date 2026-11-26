#include "protos.h"

void f_00636068(void) /* sub_636068 */
{
    FN_ENTER(0x00636068);
    /* 00636068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636069: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0063606a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0063606c: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00636070: call 0x68c414 */ r_esp -= 4; W32(r_esp, 0x636075u); f_0068c414();
    /* 00636075: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636077: je 0x6360af */ if (fZ) goto L_006360af;
L_00636079:; BB(0x00636079);
    /* 00636079: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 0063607c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x636081u); f_0082dcbc();
    /* 00636081: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00636084: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 00636087: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x63608cu); f_0082ddd8();
    /* 0063608c: fld dword ptr [ebp + 0x340] */ FPUSH(R_F32((u32)(r_ebp+0x340u)));
    /* 00636092: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00636094: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636097: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0063609b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0063609f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006360a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006360a3: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006360a7: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006360aa: call 0x77a0f8 */ r_esp -= 4; W32(r_esp, 0x6360afu); f_0077a0f8();
L_006360af:; BB(0x006360af);
    /* 006360af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006360b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006360b1: ret 4 */ FN_RET(0x00636068); r_esp += 8; return;
}

void f_006360b4(void) /* sub_6360B4 */
{
    FN_ENTER(0x006360b4);
    /* 006360b4: mov dword ptr [0xa8f0c4], 0x3f800000 */ W32((u32)(0xa8f0c4u), 0x3f800000u);
    /* 006360be: mov dword ptr [0xa8f0c8], 0x41000000 */ W32((u32)(0xa8f0c8u), 0x41000000u);
    /* 006360c8: mov dword ptr [0xa8f0cc], 0x3fc00000 */ W32((u32)(0xa8f0ccu), 0x3fc00000u);
    /* 006360d2: ret  */ FN_RET(0x006360b4); r_esp += 4; return;
}

void f_006360d4(void) /* sub_6360D4 */
{
    FN_ENTER(0x006360d4);
    /* 006360d4: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 006360da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006360dc: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 006360df: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 006360e2: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 006360e5: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 006360e8: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 006360eb: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 006360ee: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 006360f1: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 006360f4: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 006360fa: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 006360fd: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00636100: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00636106: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00636109: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0063610c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00636112: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00636119: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0063611f: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 00636126: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 0063612c: fdiv dword ptr [0x933650] */ ST(0) = ST(0) / R_F32((u32)(0x933650u));
    /* 00636132: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00636138: ret  */ FN_RET(0x006360d4); r_esp += 4; return;
}

void f_0063613c(void) /* sub_63613C */
{
    FN_ENTER(0x0063613c);
    /* 0063613c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00636142: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636144: mov dword ptr [ecx + 0x5c], edx */ W32((u32)(r_ecx+0x5cu), r_edx);
    /* 00636147: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0063614a: mov edx, dword ptr [ecx + 0x38] */ r_edx = R32((u32)(r_ecx+0x38u));
    /* 0063614d: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00636150: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 00636153: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00636156: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 00636159: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0063615c: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00636162: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00636165: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00636168: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 0063616e: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00636171: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00636174: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0063617a: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00636181: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00636187: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 0063618e: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 00636194: fdiv dword ptr [0x93364c] */ ST(0) = ST(0) / R_F32((u32)(0x93364cu));
    /* 0063619a: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 006361a0: ret  */ FN_RET(0x0063613c); r_esp += 4; return;
}

void f_00636170(void)
{
    FN_ENTER(0x00636170);
    goto L_00636170;
L_006360fb:; BB(0x006360fb);
    /* 006360fb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006360fc: insb byte ptr es:[edi], dx */ UNSUP(0x006360fc, "insb byte ptr es:[edi], dx");
    /* 006360fd: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00636100: mov edx, dword ptr [ecx + 0x33c] */ r_edx = R32((u32)(r_ecx+0x33cu));
    /* 00636106: mov eax, dword ptr [ecx + 0x6c] */ r_eax = R32((u32)(r_ecx+0x6cu));
    /* 00636109: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0063610c: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 00636112: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 00636119: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 0063611f: mov dword ptr [eax + 0x18], 0x18002 */ W32((u32)(r_eax+0x18u), 0x18002u);
    /* 00636126: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 0063612c: fdiv dword ptr [0x933650] */ ST(0) = ST(0) / R_F32((u32)(0x933650u));
    /* 00636132: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 00636138: ret  */ FN_RET(0x00636170); r_esp += 4; return;
L_00636170:; BB(0x00636170);
    /* 00636170: jo 0x6360fb */ if (fO) goto L_006360fb;
L_00636172:; BB(0x00636172);
    /* 00636172: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00636173: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00636175: cmp dword ptr [ebx + eax], 0x40c70000 */ {  u32 a = R32((u32)(r_ebx+r_eax)); u32 b = 0x40c70000u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0063617c: adc al, 1 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0063617e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00636180: add byte ptr [ebx + 0x33c81], cl */ { u32 ad = (u32)(r_ebx+0x33c81u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00636186: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fC = (r < a); }
    /* 00636188: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636189: sbb byte ptr [edx], al */ { u32 ad = (u32)(r_edx); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 0063618b: add byte ptr [ecx], 0 */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0063618e: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 00636194: fdiv dword ptr [0x93364c] */ ST(0) = ST(0) / R_F32((u32)(0x93364cu));
    /* 0063619a: fstp dword ptr [ecx + 0x340] */ W_F32((u32)(r_ecx+0x340u), ST(0)); FPOP();
    /* 006361a0: ret  */ FN_RET(0x00636170); r_esp += 4; return;
}

void f_006361a4(void) /* sub_6361A4 */
{
    FN_ENTER(0x006361a4);
    /* 006361a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006361a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006361a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006361a9: call 0x6361c8 */ r_esp -= 4; W32(r_esp, 0x6361aeu); f_006361c8();
    /* 006361ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006361b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006361b4: jne 0x6361ba */ if (!fZ) goto L_006361ba;
L_006361b6:; BB(0x006361b6);
    /* 006361b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006361b7: ret 4 */ FN_RET(0x006361a4); r_esp += 8; return;
L_006361ba:; BB(0x006361ba);
    /* 006361ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006361bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6361c0u); f_005c2f74();
    /* 006361c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006361c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006361c2: ret 4 */ FN_RET(0x006361a4); r_esp += 8; return;
}

void f_006361c8(void) /* sub_6361C8 */
{
    FN_ENTER(0x006361c8);
    /* 006361c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006361c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006361cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006361cd: push 0x8e44d0 */ { u32 v = 0x8e44d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006361d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006361d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006361d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006361e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006361e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006361e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006361e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006361ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006361ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006361f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006361f5: mov dword ptr [ecx], 0xb2c5c0 */ W32((u32)(r_ecx), 0xb2c5c0u);
    /* 006361fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00636202: call 0x6296c8 */ r_esp -= 4; W32(r_esp, 0x636207u); f_006296c8();
    /* 00636207: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063620a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636211: mov esp, ebp */ r_esp = r_ebp;
    /* 00636213: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636214: ret  */ FN_RET(0x006361c8); r_esp += 4; return;
}

void f_00636218(void) /* sub_636218 */
{
    FN_ENTER(0x00636218);
    /* 00636218: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00636219: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063621a: mov esi, ecx */ r_esi = r_ecx;
    /* 0063621c: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 00636222: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00636225: je 0x63630c */ if (fZ) goto L_0063630c;
L_0063622b:; BB(0x0063622b);
    /* 0063622b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636231: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x636236u); f_0068d5a8();
    /* 00636236: mov ebp, eax */ r_ebp = r_eax;
    /* 00636238: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063623b: mov edx, dword ptr [esi + 0xd0] */ r_edx = R32((u32)(r_esi+0xd0u));
    /* 00636241: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636244: jne 0x6362a1 */ if (!fZ) goto L_006362a1;
L_00636246:; BB(0x00636246);
    /* 00636246: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636248: jne 0x636253 */ if (!fZ) goto L_00636253;
L_0063624a:; BB(0x0063624a);
    /* 0063624a: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 00636250: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636251: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636252: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_00636253:; BB(0x00636253);
    /* 00636253: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00636256: test edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063625c: jne 0x636267 */ if (!fZ) goto L_00636267;
L_0063625e:; BB(0x0063625e);
    /* 0063625e: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 00636264: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636265: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636266: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_00636267:; BB(0x00636267);
    /* 00636267: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0063626a: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 0063626d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063626e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063626f: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x636274u); f_007a9180();
    /* 00636274: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00636277: fld dword ptr [esi + 0xcc] */ FPUSH(R_F32((u32)(r_esi+0xccu)));
    /* 0063627d: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0063627f: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00636281: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00636283: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00636284: jbe 0x636298 */ if ((fC||fZ)) goto L_00636298;
L_00636286:; BB(0x00636286);
    /* 00636286: mov dword ptr [esi + 0xd4], 1 */ W32((u32)(r_esi+0xd4u), 0x1u);
    /* 00636290: mov eax, 1 */ r_eax = 0x1u;
    /* 00636295: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636296: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636297: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_00636298:; BB(0x00636298);
    /* 00636298: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 0063629e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063629f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006362a0: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_006362a1:; BB(0x006362a1);
    /* 006362a1: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006362a4: je 0x6362af */ if (fZ) goto L_006362af;
L_006362a6:; BB(0x006362a6);
    /* 006362a6: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 006362ac: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006362ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006362ae: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_006362af:; BB(0x006362af);
    /* 006362af: call 0x71891c */ r_esp -= 4; W32(r_esp, 0x6362b4u); f_0071891c();
    /* 006362b4: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 006362b7: cmp edx, dword ptr [0xa9c4f4] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006362bd: je 0x6362c8 */ if (fZ) goto L_006362c8;
L_006362bf:; BB(0x006362bf);
    /* 006362bf: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 006362c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006362c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006362c7: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_006362c8:; BB(0x006362c8);
    /* 006362c8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006362ca: jne 0x6362d5 */ if (!fZ) goto L_006362d5;
L_006362cc:; BB(0x006362cc);
    /* 006362cc: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
    /* 006362d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006362d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006362d4: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_006362d5:; BB(0x006362d5);
    /* 006362d5: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006362d8: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 006362db: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006362dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006362dd: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x6362e2u); f_007a9180();
    /* 006362e2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 006362e5: fld dword ptr [esi + 0xcc] */ FPUSH(R_F32((u32)(r_esi+0xccu)));
    /* 006362eb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006362ed: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006362ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006362f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006362f2: jbe 0x636306 */ if ((fC||fZ)) goto L_00636306;
L_006362f4:; BB(0x006362f4);
    /* 006362f4: mov dword ptr [esi + 0xd4], 1 */ W32((u32)(r_esi+0xd4u), 0x1u);
    /* 006362fe: mov eax, 1 */ r_eax = 0x1u;
    /* 00636303: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636304: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636305: ret  */ FN_RET(0x00636218); r_esp += 4; return;
L_00636306:; BB(0x00636306);
    /* 00636306: mov eax, dword ptr [esi + 0xd4] */ r_eax = R32((u32)(r_esi+0xd4u));
L_0063630c:; BB(0x0063630c);
    /* 0063630c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063630d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063630e: ret  */ FN_RET(0x00636218); r_esp += 4; return;
}

void f_00636261(void)
{
    FN_ENTER(0x00636261);
    /* 00636261: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00636263: add byte ptr [ebp + 0x5e], bl */ { u32 ad = (u32)(r_ebp+0x5eu);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00636266: ret  */ FN_RET(0x00636261); r_esp += 4; return;
}

void f_00636310(void) /* sub_636310 */
{
    FN_ENTER(0x00636310);
    /* 00636310: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00636311: mov esi, ecx */ r_esi = r_ecx;
    /* 00636313: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636317: mov ecx, esi */ r_ecx = r_esi;
    /* 00636319: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x63631eu); f_0062998c();
    /* 0063631e: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 00636321: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00636324: mov dword ptr [esi], 0xb2c5c0 */ W32((u32)(r_esi), 0xb2c5c0u);
    /* 0063632a: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 0063632d: mov dword ptr [esi + 0x54], eax */ W32((u32)(r_esi+0x54u), r_eax);
    /* 00636330: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00636333: mov dword ptr [esi + 0x58], eax */ W32((u32)(r_esi+0x58u), r_eax);
    /* 00636336: mov eax, dword ptr [0x9c6484] */ r_eax = R32((u32)(0x9c6484u));
    /* 0063633b: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0063633e: mov eax, esi */ r_eax = r_esi;
    /* 00636340: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00636341: ret 4 */ FN_RET(0x00636310); r_esp += 8; return;
}

void f_00636344(void) /* sub_636344 */
{
    FN_ENTER(0x00636344);
    /* 00636344: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00636345: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636348: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063634a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0063634c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063634e: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x636351u); call_ind(t); }
    /* 00636351: mov eax, dword ptr [ebx + 0xd4] */ r_eax = R32((u32)(r_ebx+0xd4u));
    /* 00636357: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063635a: jne 0x63636c */ if (!fZ) goto L_0063636c;
L_0063635c:; BB(0x0063635c);
    /* 0063635c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0063635e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636360: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x636363u); call_ind(t); }
    /* 00636363: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636365: call 0x636458 */ r_esp -= 4; W32(r_esp, 0x63636au); f_00636458();
    /* 0063636a: jmp 0x636386 */ goto L_00636386;
L_0063636c:; BB(0x0063636c);
    /* 0063636c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0063636e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636370: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x636373u); call_ind(t); }
    /* 00636373: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636375: call 0x6363f8 */ r_esp -= 4; W32(r_esp, 0x63637au); f_006363f8();
    /* 0063637a: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0063637c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063637e: call dword ptr [eax + 0x34] */ { u32 t = R32((u32)(r_eax+0x34u)); r_esp -= 4; W32(r_esp, 0x636381u); call_ind(t); }
    /* 00636381: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636384: je 0x6363a9 */ if (fZ) goto L_006363a9;
L_00636386:; BB(0x00636386);
    /* 00636386: fld dword ptr [0x93370c] */ FPUSH(R_F32((u32)(0x93370cu)));
    /* 0063638c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0063638f: fcomp dword ptr [ebx + 0x3c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x3cu))); FPOP();
    /* 00636392: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00636394: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00636395: jae 0x6363a4 */ if (!fC) goto L_006363a4;
L_00636397:; BB(0x00636397);
    /* 00636397: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 0063639b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006363a0: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006363a4:; BB(0x006363a4);
    /* 006363a4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006363a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006363a8: ret  */ FN_RET(0x00636344); r_esp += 4; return;
L_006363a9:; BB(0x006363a9);
    /* 006363a9: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006363ab: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006363ad: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x6363b0u); call_ind(t); }
    /* 006363b0: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006363b4: mov byte ptr [esp], 5 */ W8((u32)(r_esp), 0x5u);
    /* 006363b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006363ba: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 006363bf: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006363c4: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006363c9: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 006363ce: mov eax, dword ptr [ebx + 0xc8] */ r_eax = R32((u32)(r_ebx+0xc8u));
    /* 006363d4: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 006363d9: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 006363de: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006363e3: mov byte ptr [esp + 0xa], al */ W8((u32)(r_esp+0xau), (u8)r_eax);
    /* 006363e7: mov byte ptr [esp + 0xb], 1 */ W8((u32)(r_esp+0xbu), 0x1u);
    /* 006363ec: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006363ef: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6363f4u); f_008003e0();
    /* 006363f4: jmp 0x636386 */ goto L_00636386;
}

void f_006363f8(void) /* sub_6363F8 */
{
    FN_ENTER(0x006363f8);
    /* 006363f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006363f9: mov edi, ecx */ r_edi = r_ecx;
    /* 006363fb: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x636400u); f_00807ac0();
    /* 00636400: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00636403: ja 0x636454 */ if ((!fC&&!fZ)) goto L_00636454;
L_00636405:; BB(0x00636405);
    /* 00636405: mov eax, dword ptr [eax*4 + 0x933680] */ r_eax = R32((u32)(r_eax*4+0x933680u));
    /* 0063640c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00636454:; BB(0x00636454);
    /* 00636454: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636455: ret  */ FN_RET(0x006363f8); r_esp += 4; return;
}

void f_0063640e(void)
{
    FN_ENTER(0x0063640e);
    /* 0063640e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00636411: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636414: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636415: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636416: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636417: push 0x48a */ { u32 v = 0x48au; r_esp -= 4; W32(r_esp, v); }
    /* 0063641c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x636421u); f_008144b0();
    /* 00636421: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636424: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636425: ret  */ FN_RET(0x0063640e); r_esp += 4; return;
}

void f_00636426(void)
{
    FN_ENTER(0x00636426);
    /* 00636426: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00636429: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063642b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063642c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063642d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063642e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063642f: push 0x46c */ { u32 v = 0x46cu; r_esp -= 4; W32(r_esp, v); }
    /* 00636434: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x636439u); f_008144b0();
    /* 00636439: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063643c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063643d: ret  */ FN_RET(0x00636426); r_esp += 4; return;
}

void f_0063643e(void)
{
    FN_ENTER(0x0063643e);
    /* 0063643e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00636441: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636443: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636444: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636445: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636446: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636447: push 0x457 */ { u32 v = 0x457u; r_esp -= 4; W32(r_esp, v); }
    /* 0063644c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x636451u); f_008144b0();
    /* 00636451: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636454: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636455: ret  */ FN_RET(0x0063643e); r_esp += 4; return;
}

void f_00636454(void)
{
    FN_ENTER(0x00636454);
    /* 00636454: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636455: ret  */ FN_RET(0x00636454); r_esp += 4; return;
}

void f_00636458(void) /* sub_636458 */
{
    FN_ENTER(0x00636458);
    /* 00636458: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636459: mov edi, ecx */ r_edi = r_ecx;
    /* 0063645b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x636460u); f_00807ac0();
    /* 00636460: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00636463: ja 0x6364b4 */ if ((!fC&&!fZ)) goto L_006364b4;
L_00636465:; BB(0x00636465);
    /* 00636465: mov eax, dword ptr [eax*4 + 0x9336c0] */ r_eax = R32((u32)(r_eax*4+0x9336c0u));
    /* 0063646c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006364b4:; BB(0x006364b4);
    /* 006364b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006364b5: ret  */ FN_RET(0x00636458); r_esp += 4; return;
}

void f_0063646e(void)
{
    FN_ENTER(0x0063646e);
    /* 0063646e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00636471: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636473: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636474: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636476: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636477: push 0x48b */ { u32 v = 0x48bu; r_esp -= 4; W32(r_esp, v); }
    /* 0063647c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x636481u); f_008144b0();
    /* 00636481: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636484: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636485: ret  */ FN_RET(0x0063646e); r_esp += 4; return;
}

void f_00636486(void)
{
    FN_ENTER(0x00636486);
    /* 00636486: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00636489: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063648b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063648c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063648d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063648e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063648f: push 0x46d */ { u32 v = 0x46du; r_esp -= 4; W32(r_esp, v); }
    /* 00636494: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x636499u); f_008144b0();
    /* 00636499: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063649c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063649d: ret  */ FN_RET(0x00636486); r_esp += 4; return;
}

void f_0063649e(void)
{
    FN_ENTER(0x0063649e);
    /* 0063649e: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 006364a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006364a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006364a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006364a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006364a6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006364a7: push 0x458 */ { u32 v = 0x458u; r_esp -= 4; W32(r_esp, v); }
    /* 006364ac: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6364b1u); f_008144b0();
    /* 006364b1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006364b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006364b5: ret  */ FN_RET(0x0063649e); r_esp += 4; return;
}

void f_006364b4(void)
{
    FN_ENTER(0x006364b4);
    /* 006364b4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006364b5: ret  */ FN_RET(0x006364b4); r_esp += 4; return;
}

void f_006364b8(void) /* sub_6364B8 */
{
    FN_ENTER(0x006364b8);
    /* 006364b8: mov dword ptr [0xa8f0d4], 0x3f800000 */ W32((u32)(0xa8f0d4u), 0x3f800000u);
    /* 006364c2: mov dword ptr [0xa8f0d8], 0x41000000 */ W32((u32)(0xa8f0d8u), 0x41000000u);
    /* 006364cc: mov dword ptr [0xa8f0dc], 0x3fc00000 */ W32((u32)(0xa8f0dcu), 0x3fc00000u);
    /* 006364d6: ret  */ FN_RET(0x006364b8); r_esp += 4; return;
}

void f_006364d8(void) /* sub_6364D8 */
{
    FN_ENTER(0x006364d8);
    /* 006364d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006364d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006364db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006364dd: call 0x6364fc */ r_esp -= 4; W32(r_esp, 0x6364e2u); f_006364fc();
    /* 006364e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006364e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006364e8: jne 0x6364ee */ if (!fZ) goto L_006364ee;
L_006364ea:; BB(0x006364ea);
    /* 006364ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006364eb: ret 4 */ FN_RET(0x006364d8); r_esp += 8; return;
L_006364ee:; BB(0x006364ee);
    /* 006364ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006364ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6364f4u); f_005c2f74();
    /* 006364f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006364f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006364f6: ret 4 */ FN_RET(0x006364d8); r_esp += 8; return;
}

void f_006364fc(void) /* sub_6364FC */
{
    FN_ENTER(0x006364fc);
    /* 006364fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006364fd: mov ebp, esp */ r_ebp = r_esp;
    /* 006364ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636501: push 0x8e44ec */ { u32 v = 0x8e44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00636506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063650c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063650d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636514: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063651a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063651d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00636520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00636523: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00636526: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636529: mov dword ptr [ecx], 0xb2c6e0 */ W32((u32)(r_ecx), 0xb2c6e0u);
    /* 0063652f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00636536: call 0x6361c8 */ r_esp -= 4; W32(r_esp, 0x63653bu); f_006361c8();
    /* 0063653b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063653e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636545: mov esp, ebp */ r_esp = r_ebp;
    /* 00636547: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636548: ret  */ FN_RET(0x006364fc); r_esp += 4; return;
}

void f_00636544(void)
{
    FN_ENTER(0x00636544);
    /* 00636544: add byte ptr [ebx - 0x6f3ca21b], cl */ { u32 ad = (u32)(r_ebx+0x90c35de5u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0063654a: nop  */ ;
    /* 0063654b: nop  */ ;
    /* 0063654c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063654d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636550: mov edi, ecx */ r_edi = r_ecx;
    /* 00636552: fild dword ptr [edi + 0xec] */ FPUSH((long double)(i32)R32((u32)(r_edi+0xecu)));
    /* 00636558: fadd dword ptr [0x93374c] */ ST(0) = ST(0) + R_F32((u32)(0x93374cu));
    /* 0063655e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00636561: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00636565: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063656a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063656e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00636572: fistp dword ptr [edi + 0xec] */ W32((u32)(r_edi+0xecu), (u32)fx_int32(ST(0))); FPOP();
    /* 00636578: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063657b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063657d: call 0x6365b8 */ r_esp -= 4; W32(r_esp, 0x636582u); f_006365b8();
    /* 00636582: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 00636588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063658a: jle 0x63659a */ if ((fZ||fS!=fO)) goto L_0063659a;
L_0063658c:; BB(0x0063658c);
    /* 0063658c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063658f: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 00636595: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636598: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636599: ret  */ FN_RET(0x00636544); r_esp += 4; return;
L_0063659a:; BB(0x0063659a);
    /* 0063659a: fld dword ptr [0x933748] */ FPUSH(R_F32((u32)(0x933748u)));
    /* 006365a0: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 006365a3: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006365a6: mov dword ptr [edi + 0xe8], 0 */ W32((u32)(r_edi+0xe8u), 0x0u);
    /* 006365b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006365b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006365b4: ret  */ FN_RET(0x00636544); r_esp += 4; return;
}

void f_0063654c(void) /* sub_63654C */
{
    FN_ENTER(0x0063654c);
    /* 0063654c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0063654d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636550: mov edi, ecx */ r_edi = r_ecx;
    /* 00636552: fild dword ptr [edi + 0xec] */ FPUSH((long double)(i32)R32((u32)(r_edi+0xecu)));
    /* 00636558: fadd dword ptr [0x93374c] */ ST(0) = ST(0) + R_F32((u32)(0x93374cu));
    /* 0063655e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00636561: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00636565: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0063656a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0063656e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00636572: fistp dword ptr [edi + 0xec] */ W32((u32)(r_edi+0xecu), (u32)fx_int32(ST(0))); FPOP();
    /* 00636578: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063657b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063657d: call 0x6365b8 */ r_esp -= 4; W32(r_esp, 0x636582u); f_006365b8();
    /* 00636582: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 00636588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063658a: jle 0x63659a */ if ((fZ||fS!=fO)) goto L_0063659a;
L_0063658c:; BB(0x0063658c);
    /* 0063658c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063658f: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 00636595: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636598: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636599: ret  */ FN_RET(0x0063654c); r_esp += 4; return;
L_0063659a:; BB(0x0063659a);
    /* 0063659a: fld dword ptr [0x933748] */ FPUSH(R_F32((u32)(0x933748u)));
    /* 006365a0: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 006365a3: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006365a6: mov dword ptr [edi + 0xe8], 0 */ W32((u32)(r_edi+0xe8u), 0x0u);
    /* 006365b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006365b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006365b4: ret  */ FN_RET(0x0063654c); r_esp += 4; return;
}

void f_00636570(void)
{
    FN_ENTER(0x00636570);
    /* 00636570: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00636572: fistp dword ptr [edi + 0xec] */ W32((u32)(r_edi+0xecu), (u32)fx_int32(ST(0))); FPOP();
    /* 00636578: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063657b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063657d: call 0x6365b8 */ r_esp -= 4; W32(r_esp, 0x636582u); f_006365b8();
    /* 00636582: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 00636588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063658a: jle 0x63659a */ if ((fZ||fS!=fO)) goto L_0063659a;
L_0063658c:; BB(0x0063658c);
    /* 0063658c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063658f: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 00636595: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636598: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636599: ret  */ FN_RET(0x00636570); r_esp += 4; return;
L_0063659a:; BB(0x0063659a);
    /* 0063659a: fld dword ptr [0x933748] */ FPUSH(R_F32((u32)(0x933748u)));
    /* 006365a0: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 006365a3: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006365a6: mov dword ptr [edi + 0xe8], 0 */ W32((u32)(r_edi+0xe8u), 0x0u);
    /* 006365b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006365b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006365b4: ret  */ FN_RET(0x00636570); r_esp += 4; return;
}

void f_00636578(void)
{
    FN_ENTER(0x00636578);
    /* 00636578: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0063657b: mov ecx, edi */ r_ecx = r_edi;
    /* 0063657d: call 0x6365b8 */ r_esp -= 4; W32(r_esp, 0x636582u); f_006365b8();
    /* 00636582: mov eax, dword ptr [edi + 0xe8] */ r_eax = R32((u32)(r_edi+0xe8u));
    /* 00636588: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0063658a: jle 0x63659a */ if ((fZ||fS!=fO)) goto L_0063659a;
L_0063658c:; BB(0x0063658c);
    /* 0063658c: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063658f: mov dword ptr [edi + 0xe8], eax */ W32((u32)(r_edi+0xe8u), r_eax);
    /* 00636595: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636598: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636599: ret  */ FN_RET(0x00636578); r_esp += 4; return;
L_0063659a:; BB(0x0063659a);
    /* 0063659a: fld dword ptr [0x933748] */ FPUSH(R_F32((u32)(0x933748u)));
    /* 006365a0: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 006365a3: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 006365a6: mov dword ptr [edi + 0xe8], 0 */ W32((u32)(r_edi+0xe8u), 0x0u);
    /* 006365b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006365b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006365b4: ret  */ FN_RET(0x00636578); r_esp += 4; return;
}

void f_006365b8(void) /* sub_6365B8 */
{
    FN_ENTER(0x006365b8);
    /* 006365b8: mov edx, dword ptr [ecx + 0xf4] */ r_edx = R32((u32)(r_ecx+0xf4u));
    /* 006365be: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fO = 0; }
    /* 006365c1: je 0x6365f8 */ if (fZ) goto L_006365f8;
L_006365c3:; BB(0x006365c3);
    /* 006365c3: fld dword ptr [0xa8f0e4] */ FPUSH(R_F32((u32)(0xa8f0e4u)));
    /* 006365c9: fadd dword ptr [ecx + 0xf0] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xf0u));
    /* 006365cf: fcom dword ptr [0x933740] */ fx_compare(ST(0), R_F32((u32)(0x933740u))); 
    /* 006365d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006365d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006365d8: jbe 0x6365f1 */ if ((fC||fZ)) goto L_006365f1;
L_006365da:; BB(0x006365da);
    /* 006365da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006365dc: mov eax, 0x40800000 */ r_eax = 0x40800000u;
    /* 006365e1: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 006365e7: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006365ea: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 006365f0: ret  */ FN_RET(0x006365b8); r_esp += 4; return;
L_006365f1:; BB(0x006365f1);
    /* 006365f1: fstp dword ptr [ecx + 0xf0] */ W_F32((u32)(r_ecx+0xf0u), ST(0)); FPOP();
    /* 006365f7: ret  */ FN_RET(0x006365b8); r_esp += 4; return;
L_006365f8:; BB(0x006365f8);
    /* 006365f8: fld dword ptr [ecx + 0xf0] */ FPUSH(R_F32((u32)(r_ecx+0xf0u)));
    /* 006365fe: fsub dword ptr [0xa8f0e4] */ ST(0) = ST(0) - R_F32((u32)(0xa8f0e4u));
    /* 00636604: fcom dword ptr [0x933744] */ fx_compare(ST(0), R_F32((u32)(0x933744u))); 
    /* 0063660a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063660c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063660d: jae 0x636623 */ if (!fC) goto L_00636623;
L_0063660f:; BB(0x0063660f);
    /* 0063660f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00636611: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636613: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 00636619: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063661c: mov dword ptr [ecx + 0xf4], edx */ W32((u32)(r_ecx+0xf4u), r_edx);
    /* 00636622: ret  */ FN_RET(0x006365b8); r_esp += 4; return;
L_00636623:; BB(0x00636623);
    /* 00636623: fstp dword ptr [ecx + 0xf0] */ W_F32((u32)(r_ecx+0xf0u), ST(0)); FPOP();
    /* 00636629: ret  */ FN_RET(0x006365b8); r_esp += 4; return;
}

void f_0063662c(void) /* sub_63662C */
{
    FN_ENTER(0x0063662c);
    /* 0063662c: mov eax, dword ptr [ecx + 0xec] */ r_eax = R32((u32)(r_ecx+0xecu));
    /* 00636632: add eax, 0x28f */ {  u32 a = r_eax; u32 b = 0x28fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636637: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 0063663d: call 0x6365b8 */ r_esp -= 4; W32(r_esp, 0x636642u); f_006365b8();
    /* 00636642: ret  */ FN_RET(0x0063662c); r_esp += 4; return;
}

void f_00636644(void) /* sub_636644 */
{
    FN_ENTER(0x00636644);
    /* 00636644: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00636645: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00636646: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00636648: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063664e: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636654: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00636656: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636658: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63665bu); call_ind(t); }
    /* 0063665b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063665d: je 0x636884 */ if (fZ) goto L_00636884;
L_00636663:; BB(0x00636663);
    /* 00636663: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636668u); f_0082d7b0();
    /* 00636668: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0063666b: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x636670u); f_0082d838();
    /* 00636670: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00636673: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636675: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63667au); f_0082d8bc();
    /* 0063667a: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 0063667f: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 00636685: mov ecx, dword ptr [eax + edx*8] */ r_ecx = R32((u32)(r_eax+r_edx*8));
    /* 00636688: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63668du); f_00829cc8();
    /* 0063668d: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 00636690: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 00636693: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x636698u); f_0082d838();
    /* 00636698: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063669b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6366a0u); f_008321d8();
    /* 006366a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006366a1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6366a6u); f_0082dbac();
    /* 006366a6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6366abu); f_0082d7b0();
    /* 006366ab: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 006366ae: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 006366b4: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006366b7: jge 0x6366cd */ if ((fS==fO)) goto L_006366cd;
L_006366b9:; BB(0x006366b9);
    /* 006366b9: mov edx, dword ptr [0xa8f0f0] */ r_edx = R32((u32)(0xa8f0f0u));
    /* 006366bf: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 006366c4: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 006366c8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6366cdu); f_00829cc8();
L_006366cd:; BB(0x006366cd);
    /* 006366cd: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 006366d0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6366d5u); f_0082d838();
    /* 006366d5: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006366d8: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6366ddu); f_008321d8();
    /* 006366dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006366de: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6366e3u); f_0082da80();
    /* 006366e3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6366e8u); f_0082d7b0();
    /* 006366e8: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 006366eb: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 006366f1: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006366f4: jge 0x63670a */ if ((fS==fO)) goto L_0063670a;
L_006366f6:; BB(0x006366f6);
    /* 006366f6: mov edx, dword ptr [0xa8f0f0] */ r_edx = R32((u32)(0xa8f0f0u));
    /* 006366fc: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 00636701: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00636705: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63670au); f_00829cc8();
L_0063670a:; BB(0x0063670a);
    /* 0063670a: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063670d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x636712u); f_0082d838();
    /* 00636712: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636715: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63671au); f_008321d8();
    /* 0063671a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063671b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x636720u); f_0082da80();
    /* 00636720: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636725u); f_0082d7b0();
    /* 00636725: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00636728: mov eax, dword ptr [ebx + 0xe8] */ r_eax = R32((u32)(r_ebx+0xe8u));
    /* 0063672e: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636731: jge 0x636747 */ if ((fS==fO)) goto L_00636747;
L_00636733:; BB(0x00636733);
    /* 00636733: mov edx, dword ptr [0xa8f0f0] */ r_edx = R32((u32)(0xa8f0f0u));
    /* 00636739: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 0063673e: mov ecx, dword ptr [eax + edx*8 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*8+0x4u));
    /* 00636742: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x636747u); f_00829cc8();
L_00636747:; BB(0x00636747);
    /* 00636747: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063674a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63674fu); f_0082d838();
    /* 0063674f: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636752: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636757u); f_008321d8();
    /* 00636757: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636758: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63675du); f_0082da80();
    /* 0063675d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x636762u); f_0082dab0();
    /* 00636762: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636767u); f_0082d7b0();
    /* 00636767: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0063676a: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0063676d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x636772u); f_0082d838();
    /* 00636772: mov edx, dword ptr [ebx + 0xec] */ r_edx = R32((u32)(r_ebx+0xecu));
    /* 00636778: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063677a: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63677fu); f_0082d8bc();
    /* 0063677f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x636784u); f_0082dbac();
    /* 00636784: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636787: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63678cu); f_008321d8();
    /* 0063678c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063678d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x636792u); f_0082dab0();
    /* 00636792: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636797u); f_0082d7b0();
    /* 00636797: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063679a: fld dword ptr [ebx + 0xf0] */ FPUSH(R_F32((u32)(r_ebx+0xf0u)));
    /* 006367a0: fadd dword ptr [edi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x8u));
    /* 006367a3: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 006367a6: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 006367a9: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006367ac: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006367af: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006367b3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006367b5: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006367b9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6367beu); f_00830b74();
    /* 006367be: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006367c1: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6367c6u); f_008321d8();
    /* 006367c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006367c7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6367ccu); f_0082da80();
    /* 006367cc: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6367d1u); f_0082d7b0();
    /* 006367d1: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 006367d4: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 006367d7: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 006367da: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 006367dd: fsub dword ptr [ebx + 0xf0] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xf0u));
    /* 006367e3: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006367e6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006367ea: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006367ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006367ef: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006367f3: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6367f8u); f_00830b74();
    /* 006367f8: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006367fb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636800u); f_008321d8();
    /* 00636800: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636801: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x636806u); f_0082da80();
    /* 00636806: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63680bu); f_0082d7b0();
    /* 0063680b: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 0063680e: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00636811: fsub dword ptr [ebx + 0xf0] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xf0u));
    /* 00636817: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0063681a: mov edx, dword ptr [edi + 0x10] */ r_edx = R32((u32)(r_edi+0x10u));
    /* 0063681d: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636820: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00636823: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00636827: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636829: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0063682d: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x636832u); f_00830b74();
    /* 00636832: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636835: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63683au); f_008321d8();
    /* 0063683a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063683b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x636840u); f_0082da80();
    /* 00636840: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636845u); f_0082d7b0();
    /* 00636845: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00636848: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0063684b: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 0063684e: fld dword ptr [ebx + 0xf0] */ FPUSH(R_F32((u32)(r_ebx+0xf0u)));
    /* 00636854: fadd dword ptr [edi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x10u));
    /* 00636857: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063685a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0063685e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00636861: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636863: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00636867: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63686cu); f_00830b74();
    /* 0063686c: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063686f: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636874u); f_008321d8();
    /* 00636874: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636875: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63687au); f_0082da80();
    /* 0063687a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63687fu); f_0082da80();
    /* 0063687f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x636884u); f_0082da80();
L_00636884:; BB(0x00636884);
    /* 00636884: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00636885: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00636886: ret  */ FN_RET(0x00636644); r_esp += 4; return;
}

void f_00636888(void) /* sub_636888 */
{
    FN_ENTER(0x00636888);
    /* 00636888: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 0063688d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063688f: je 0x6368cf */ if (fZ) goto L_006368cf;
L_00636891:; BB(0x00636891);
    /* 00636891: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00636893: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x636898u); f_00800b5c();
    /* 00636898: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 0063689d: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006368a0: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x6368a5u); f_00800b5c();
    /* 006368a5: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 006368aa: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006368ad: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x6368b2u); f_00800b5c();
    /* 006368b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006368b5: mov eax, dword ptr [0xa8f0e8] */ r_eax = R32((u32)(0xa8f0e8u));
    /* 006368ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006368bc: je 0x6368cf */ if (fZ) goto L_006368cf;
L_006368be:; BB(0x006368be);
    /* 006368be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006368bf: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6368c4u); f_00857e98();
    /* 006368c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006368c5: mov dword ptr [0xa8f0e8], 0 */ W32((u32)(0xa8f0e8u), 0x0u);
L_006368cf:; BB(0x006368cf);
    /* 006368cf: mov ecx, dword ptr [0xa8f0ec] */ r_ecx = R32((u32)(0xa8f0ecu));
    /* 006368d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006368d7: je 0x6368ec */ if (fZ) goto L_006368ec;
L_006368d9:; BB(0x006368d9);
    /* 006368d9: je 0x6368e2 */ if (fZ) goto L_006368e2;
L_006368db:; BB(0x006368db);
    /* 006368db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006368dd: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6368e2u); f_004066a8();
L_006368e2:; BB(0x006368e2);
    /* 006368e2: mov dword ptr [0xa8f0ec], 0 */ W32((u32)(0xa8f0ecu), 0x0u);
L_006368ec:; BB(0x006368ec);
    /* 006368ec: ret  */ FN_RET(0x00636888); r_esp += 4; return;
}

void f_006368f0(void)
{
    FN_ENTER(0x006368f0);
    /* 006368f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006368f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006368f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006368f5: push 0x8e4514 */ { u32 v = 0x8e4514u; r_esp -= 4; W32(r_esp, v); }
    /* 006368fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00636900: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636901: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636908: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063690b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063690e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00636911: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00636914: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00636917: push 0xf8 */ { u32 v = 0xf8u; r_esp -= 4; W32(r_esp, v); }
    /* 0063691c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00636923: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x636928u); f_005caba4();
    /* 00636928: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636929: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0063692c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063692e: je 0x636967 */ if (fZ) goto L_00636967;
L_00636930:; BB(0x00636930);
    /* 00636930: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00636937: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063693e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636941: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636947: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063694a: call 0x63696c */ r_esp -= 4; W32(r_esp, 0x63694fu); f_0063696c();
    /* 0063694f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636952: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00636959:; BB(0x00636959);
    /* 00636959: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063695c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636963: mov esp, ebp */ r_esp = r_ebp;
    /* 00636965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636966: ret  */ FN_RET(0x006368f0); r_esp += 4; return;
L_00636967:; BB(0x00636967);
    /* 00636967: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636969: jmp 0x636959 */ goto L_00636959;
}

void f_00636968(void)
{
    FN_ENTER(0x00636968);
    /* 00636968: shr bl, 0xee */ { u32 c = (14u) & 31; u32 a = (u8)r_ebx; u32 r = a; if (c) { r = (c >= 8) ? 0 : (a >> c); r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  } }
    /* 0063696b: nop  */ ;
    /* 0063696c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063696d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063696f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636971: push 0x8e4530 */ { u32 v = 0x8e4530u; r_esp -= 4; W32(r_esp, v); }
    /* 00636976: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063697c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063697d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636984: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636987: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063698a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063698d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00636990: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00636993: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00636996: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636999: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063699c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063699f: call 0x636310 */ r_esp -= 4; W32(r_esp, 0x6369a4u); f_00636310();
    /* 006369a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006369ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006369ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006369b1: mov dword ptr [ecx], 0xb2c6e0 */ W32((u32)(r_ecx), 0xb2c6e0u);
    /* 006369b7: mov eax, dword ptr [0x9c64a8] */ r_eax = R32((u32)(0x9c64a8u));
    /* 006369bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006369bd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006369c0: call dword ptr [0xb2c6f4] */ { u32 t = R32((u32)(0xb2c6f4u)); r_esp -= 4; W32(r_esp, 0x6369c6u); call_ind(t); }
    /* 006369c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006369c9: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x6369ceu); f_0062974c();
    /* 006369ce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006369d1: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 006369d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006369d9: jl 0x636ac6 */ if ((fS!=fO)) goto L_00636ac6;
L_006369df:; BB(0x006369df);
    /* 006369df: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006369e2: jl 0x6369ee */ if ((fS!=fO)) goto L_006369ee;
L_006369e4:; BB(0x006369e4);
    /* 006369e4: mov dword ptr [edx + 0x8c], 1 */ W32((u32)(r_edx+0x8cu), 0x1u);
L_006369ee:; BB(0x006369ee);
    /* 006369ee: mov ebx, dword ptr [0xa8f0ec] */ r_ebx = R32((u32)(0xa8f0ecu));
    /* 006369f4: fld dword ptr [0x93372c] */ FPUSH(R_F32((u32)(0x93372cu)));
    /* 006369fa: fadd dword ptr [edx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x68u));
    /* 006369fd: fld dword ptr [0x933738] */ FPUSH(R_F32((u32)(0x933738u)));
    /* 00636a03: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 00636a09: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00636a0c: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00636a0f: mov esi, dword ptr [ebx + 0x430] */ r_esi = R32((u32)(r_ebx+0x430u));
    /* 00636a15: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00636a18: mov dword ptr [edx + 0xbc], edi */ W32((u32)(r_edx+0xbcu), r_edi);
    /* 00636a1e: fild dword ptr [edi + 4] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4u)));
    /* 00636a21: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00636a24: mov dword ptr [edx + 0xb8], 0x3f800000 */ W32((u32)(r_edx+0xb8u), 0x3f800000u);
    /* 00636a2e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00636a31: fadd dword ptr [eax*4 + 0x933720] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x933720u));
    /* 00636a38: fadd dword ptr [0x93373c] */ ST(0) = ST(0) + R_F32((u32)(0x93373cu));
    /* 00636a3e: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00636a44: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00636a4e: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00636a51: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00636a54: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00636a5a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00636a5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00636a5e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636a60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00636a61: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00636a67: jb 0x636a6b */ if (fC) goto L_00636a6b;
L_00636a69:; BB(0x00636a69);
    /* 00636a69: fst st(1) */ ST(1) = ST(0);
L_00636a6b:; BB(0x00636a6b);
    /* 00636a6b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00636a6d: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 00636a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00636a75: jl 0x636aba */ if ((fS!=fO)) goto L_00636aba;
L_00636a77:; BB(0x00636a77);
    /* 00636a77: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
L_00636a81:; BB(0x00636a81);
    /* 00636a81: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636a84: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00636a87: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00636a8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636a8c: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00636a92: mov dword ptr [edx + 0xf0], ecx */ W32((u32)(r_edx+0xf0u), r_ecx);
    /* 00636a98: mov dword ptr [edx + 0xe8], 0x78 */ W32((u32)(r_edx+0xe8u), 0x78u);
    /* 00636aa2: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00636aa8: mov eax, edx */ r_eax = r_edx;
    /* 00636aaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636aad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636ab4: mov esp, ebp */ r_esp = r_ebp;
    /* 00636ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636ab7: ret 8 */ FN_RET(0x00636968); r_esp += 12; return;
L_00636aba:; BB(0x00636aba);
    /* 00636aba: mov dword ptr [edx + 0xd0], 2 */ W32((u32)(r_edx+0xd0u), 0x2u);
    /* 00636ac4: jmp 0x636a81 */ goto L_00636a81;
L_00636ac6:; BB(0x00636ac6);
    /* 00636ac6: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00636ad0: jmp 0x6369ee */ goto L_006369ee;
}

void f_0063696c(void) /* sub_63696C */
{
    FN_ENTER(0x0063696c);
    /* 0063696c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063696d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063696f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636971: push 0x8e4530 */ { u32 v = 0x8e4530u; r_esp -= 4; W32(r_esp, v); }
    /* 00636976: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063697c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063697d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636984: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636987: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063698a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0063698d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00636990: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00636993: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00636996: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636999: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0063699c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063699f: call 0x636310 */ r_esp -= 4; W32(r_esp, 0x6369a4u); f_00636310();
    /* 006369a4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006369ab: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006369ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006369b1: mov dword ptr [ecx], 0xb2c6e0 */ W32((u32)(r_ecx), 0xb2c6e0u);
    /* 006369b7: mov eax, dword ptr [0x9c64a8] */ r_eax = R32((u32)(0x9c64a8u));
    /* 006369bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006369bd: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006369c0: call dword ptr [0xb2c6f4] */ { u32 t = R32((u32)(0xb2c6f4u)); r_esp -= 4; W32(r_esp, 0x6369c6u); call_ind(t); }
    /* 006369c6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006369c9: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x6369ceu); f_0062974c();
    /* 006369ce: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006369d1: mov eax, dword ptr [edx + 0x8c] */ r_eax = R32((u32)(r_edx+0x8cu));
    /* 006369d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006369d9: jl 0x636ac6 */ if ((fS!=fO)) goto L_00636ac6;
L_006369df:; BB(0x006369df);
    /* 006369df: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006369e2: jl 0x6369ee */ if ((fS!=fO)) goto L_006369ee;
L_006369e4:; BB(0x006369e4);
    /* 006369e4: mov dword ptr [edx + 0x8c], 1 */ W32((u32)(r_edx+0x8cu), 0x1u);
L_006369ee:; BB(0x006369ee);
    /* 006369ee: mov ebx, dword ptr [0xa8f0ec] */ r_ebx = R32((u32)(0xa8f0ecu));
    /* 006369f4: fld dword ptr [0x93372c] */ FPUSH(R_F32((u32)(0x93372cu)));
    /* 006369fa: fadd dword ptr [edx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x68u));
    /* 006369fd: fld dword ptr [0x933738] */ FPUSH(R_F32((u32)(0x933738u)));
    /* 00636a03: mov ecx, dword ptr [ebx + 0x42c] */ r_ecx = R32((u32)(r_ebx+0x42cu));
    /* 00636a09: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 00636a0c: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 00636a0f: mov esi, dword ptr [ebx + 0x430] */ r_esi = R32((u32)(r_ebx+0x430u));
    /* 00636a15: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 00636a18: mov dword ptr [edx + 0xbc], edi */ W32((u32)(r_edx+0xbcu), r_edi);
    /* 00636a1e: fild dword ptr [edi + 4] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4u)));
    /* 00636a21: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00636a24: mov dword ptr [edx + 0xb8], 0x3f800000 */ W32((u32)(r_edx+0xb8u), 0x3f800000u);
    /* 00636a2e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00636a31: fadd dword ptr [eax*4 + 0x933720] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x933720u));
    /* 00636a38: fadd dword ptr [0x93373c] */ ST(0) = ST(0) + R_F32((u32)(0x93373cu));
    /* 00636a3e: fstp dword ptr [edx + 0xb4] */ W_F32((u32)(r_edx+0xb4u), ST(0)); FPOP();
    /* 00636a44: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00636a4e: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00636a51: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00636a54: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00636a5a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00636a5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00636a5e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636a60: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00636a61: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00636a67: jb 0x636a6b */ if (fC) goto L_00636a6b;
L_00636a69:; BB(0x00636a69);
    /* 00636a69: fst st(1) */ ST(1) = ST(0);
L_00636a6b:; BB(0x00636a6b);
    /* 00636a6b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00636a6d: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 00636a73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00636a75: jl 0x636aba */ if ((fS!=fO)) goto L_00636aba;
L_00636a77:; BB(0x00636a77);
    /* 00636a77: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
L_00636a81:; BB(0x00636a81);
    /* 00636a81: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636a84: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00636a87: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00636a8a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636a8c: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 00636a92: mov dword ptr [edx + 0xf0], ecx */ W32((u32)(r_edx+0xf0u), r_ecx);
    /* 00636a98: mov dword ptr [edx + 0xe8], 0x78 */ W32((u32)(r_edx+0xe8u), 0x78u);
    /* 00636aa2: mov dword ptr [edx + 0xf4], eax */ W32((u32)(r_edx+0xf4u), r_eax);
    /* 00636aa8: mov eax, edx */ r_eax = r_edx;
    /* 00636aaa: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636aad: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636ab4: mov esp, ebp */ r_esp = r_ebp;
    /* 00636ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636ab7: ret 8 */ FN_RET(0x0063696c); r_esp += 12; return;
L_00636aba:; BB(0x00636aba);
    /* 00636aba: mov dword ptr [edx + 0xd0], 2 */ W32((u32)(r_edx+0xd0u), 0x2u);
    /* 00636ac4: jmp 0x636a81 */ goto L_00636a81;
L_00636ac6:; BB(0x00636ac6);
    /* 00636ac6: mov dword ptr [edx + 0x8c], 0 */ W32((u32)(r_edx+0x8cu), 0x0u);
    /* 00636ad0: jmp 0x6369ee */ goto L_006369ee;
}

void f_00636ad8(void) /* sub_636AD8 */
{
    FN_ENTER(0x00636ad8);
    /* 00636ad8: mov dword ptr [0xa8f0e4], 0x3e888889 */ W32((u32)(0xa8f0e4u), 0x3e888889u);
    /* 00636ae2: ret  */ FN_RET(0x00636ad8); r_esp += 4; return;
}

void f_00636ae4(void) /* sub_636AE4 */
{
    FN_ENTER(0x00636ae4);
    /* 00636ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 00636ae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636ae9: push 0x8e4558 */ { u32 v = 0x8e4558u; r_esp -= 4; W32(r_esp, v); }
    /* 00636aee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00636af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636af5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636afc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636aff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00636b02: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00636b05: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00636b08: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00636b0b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00636b10: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00636b17: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x636b1cu); f_008581c5();
    /* 00636b1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636b1d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00636b20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636b22: je 0x636be0 */ if (fZ) goto L_00636be0;
L_00636b28:; BB(0x00636b28);
    /* 00636b28: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00636b2f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636b36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636b39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636b3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b3d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636b3e: push 0x9c6498 */ { u32 v = 0x9c6498u; r_esp -= 4; W32(r_esp, v); }
    /* 00636b43: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00636b45: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x636b4au); f_005b7a84();
    /* 00636b4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636b4d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00636b54:; BB(0x00636b54);
    /* 00636b54: mov dword ptr [0xa8f0ec], eax */ W32((u32)(0xa8f0ecu), r_eax);
    /* 00636b59: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00636b60: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00636b62: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x636b67u); f_008581c5();
    /* 00636b67: mov edx, dword ptr [0xa8f0ec] */ r_edx = R32((u32)(0xa8f0ecu));
    /* 00636b6d: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00636b73: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00636b76: mov dword ptr [0xa8f0e8], eax */ W32((u32)(0xa8f0e8u), r_eax);
    /* 00636b7b: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 00636b7e: push 0x93379c */ { u32 v = 0x93379cu; r_esp -= 4; W32(r_esp, v); }
    /* 00636b83: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x636b88u); f_008009dc();
    /* 00636b88: push 0x9337b4 */ { u32 v = 0x9337b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00636b8d: mov edx, dword ptr [0xa8f0e8] */ r_edx = R32((u32)(0xa8f0e8u));
    /* 00636b93: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00636b95: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x636b9au); f_008009dc();
    /* 00636b9a: push 0x9337cc */ { u32 v = 0x9337ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00636b9f: mov edx, dword ptr [0xa8f0e8] */ r_edx = R32((u32)(0xa8f0e8u));
    /* 00636ba5: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00636ba8: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x636badu); f_008009dc();
    /* 00636bad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00636bb0: mov edx, dword ptr [0xa8f0e8] */ r_edx = R32((u32)(0xa8f0e8u));
    /* 00636bb6: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00636bb9: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00636bbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636bbe: mov dword ptr [0xa8f0fc], eax */ W32((u32)(0xa8f0fcu), r_eax);
    /* 00636bc3: mov dword ptr [0xa8f0f8], eax */ W32((u32)(0xa8f0f8u), r_eax);
    /* 00636bc8: mov dword ptr [0xa8f0f4], eax */ W32((u32)(0xa8f0f4u), r_eax);
    /* 00636bcd: mov dword ptr [0xa8f0f0], eax */ W32((u32)(0xa8f0f0u), r_eax);
    /* 00636bd2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636bd5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636bdc: mov esp, ebp */ r_esp = r_ebp;
    /* 00636bde: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636bdf: ret  */ FN_RET(0x00636ae4); r_esp += 4; return;
L_00636be0:; BB(0x00636be0);
    /* 00636be0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636be2: jmp 0x636b54 */ goto L_00636b54;
}

void f_00636be8(void) /* sub_636BE8 */
{
    FN_ENTER(0x00636be8);
    /* 00636be8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00636be9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00636beb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636bed: call 0x636c0c */ r_esp -= 4; W32(r_esp, 0x636bf2u); f_00636c0c();
    /* 00636bf2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00636bf6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636bf8: jne 0x636bfe */ if (!fZ) goto L_00636bfe;
L_00636bfa:; BB(0x00636bfa);
    /* 00636bfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00636bfb: ret 4 */ FN_RET(0x00636be8); r_esp += 8; return;
L_00636bfe:; BB(0x00636bfe);
    /* 00636bfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00636bff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x636c04u); f_005c2f74();
    /* 00636c04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636c05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00636c06: ret 4 */ FN_RET(0x00636be8); r_esp += 8; return;
}

void f_00636c0c(void) /* sub_636C0C */
{
    FN_ENTER(0x00636c0c);
    /* 00636c0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636c0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00636c0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636c11: push 0x8e4574 */ { u32 v = 0x8e4574u; r_esp -= 4; W32(r_esp, v); }
    /* 00636c16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00636c1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636c1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636c24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636c27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00636c2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00636c2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00636c30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00636c33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00636c36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636c39: mov dword ptr [ecx], 0xb2c800 */ W32((u32)(r_ecx), 0xb2c800u);
    /* 00636c3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00636c46: call 0x6361c8 */ r_esp -= 4; W32(r_esp, 0x636c4bu); f_006361c8();
    /* 00636c4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636c4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636c55: mov esp, ebp */ r_esp = r_ebp;
    /* 00636c57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636c58: ret  */ FN_RET(0x00636c0c); r_esp += 4; return;
}

void f_00636c5c(void) /* sub_636C5C */
{
    FN_ENTER(0x00636c5c);
    /* 00636c5c: mov eax, dword ptr [ecx + 0xe8] */ r_eax = R32((u32)(r_ecx+0xe8u));
    /* 00636c62: add eax, 0x28f */ {  u32 a = r_eax; u32 b = 0x28fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636c67: mov dword ptr [ecx + 0xe8], eax */ W32((u32)(r_ecx+0xe8u), r_eax);
    /* 00636c6d: mov eax, dword ptr [ecx + 0xf0] */ r_eax = R32((u32)(r_ecx+0xf0u));
    /* 00636c73: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00636c78: jl 0x636cd1 */ if ((fS!=fO)) goto L_00636cd1;
L_00636c7a:; BB(0x00636c7a);
    /* 00636c7a: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 00636c80: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636c83: jge 0x636c9b */ if ((fS==fO)) goto L_00636c9b;
L_00636c85:; BB(0x00636c85);
    /* 00636c85: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00636c88: mov dword ptr [ecx + 0xec], 1 */ W32((u32)(r_ecx+0xecu), 0x1u);
    /* 00636c92: add eax, 0x147 */ {  u32 a = r_eax; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636c97: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00636c9a: ret  */ FN_RET(0x00636c5c); r_esp += 4; return;
L_00636c9b:; BB(0x00636c9b);
    /* 00636c9b: cmp eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636c9e: jge 0x636cb6 */ if ((fS==fO)) goto L_00636cb6;
L_00636ca0:; BB(0x00636ca0);
    /* 00636ca0: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00636ca3: mov dword ptr [ecx + 0xec], 2 */ W32((u32)(r_ecx+0xecu), 0x2u);
    /* 00636cad: add eax, 0x147 */ {  u32 a = r_eax; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636cb2: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00636cb5: ret  */ FN_RET(0x00636c5c); r_esp += 4; return;
L_00636cb6:; BB(0x00636cb6);
    /* 00636cb6: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00636cb9: jge 0x636cd0 */ if ((fS==fO)) goto L_00636cd0;
L_00636cbb:; BB(0x00636cbb);
    /* 00636cbb: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00636cbe: mov dword ptr [ecx + 0xec], 3 */ W32((u32)(r_ecx+0xecu), 0x3u);
    /* 00636cc8: add eax, 0x147 */ {  u32 a = r_eax; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636ccd: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
L_00636cd0:; BB(0x00636cd0);
    /* 00636cd0: ret  */ FN_RET(0x00636c5c); r_esp += 4; return;
L_00636cd1:; BB(0x00636cd1);
    /* 00636cd1: fld dword ptr [0x9337f0] */ FPUSH(R_F32((u32)(0x9337f0u)));
    /* 00636cd7: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 00636cda: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00636cdd: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00636ce0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00636ce2: mov dword ptr [ecx + 0xf0], eax */ W32((u32)(r_ecx+0xf0u), r_eax);
    /* 00636ce8: mov dword ptr [ecx + 0xec], eax */ W32((u32)(r_ecx+0xecu), r_eax);
    /* 00636cee: add edx, 0xccc */ {  u32 a = r_edx; u32 b = 0xcccu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636cf4: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00636cf7: ret  */ FN_RET(0x00636c5c); r_esp += 4; return;
}

void f_00636cf8(void) /* sub_636CF8 */
{
    FN_ENTER(0x00636cf8);
    /* 00636cf8: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00636cfb: mov edx, dword ptr [ecx + 0xe8] */ r_edx = R32((u32)(r_ecx+0xe8u));
    /* 00636d01: add eax, 0x147 */ {  u32 a = r_eax; u32 b = 0x147u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00636d06: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 00636d09: add edx, 0x28f */ {  u32 a = r_edx; u32 b = 0x28fu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00636d0f: mov dword ptr [ecx + 0xe8], edx */ W32((u32)(r_ecx+0xe8u), r_edx);
    /* 00636d15: ret  */ FN_RET(0x00636cf8); r_esp += 4; return;
}

void f_00636d18(void) /* sub_636D18 */
{
    FN_ENTER(0x00636d18);
    /* 00636d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636d19: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00636d1a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00636d1c: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d22: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d28: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00636d2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00636d2c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x636d2fu); call_ind(t); }
    /* 00636d2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636d31: je 0x636e76 */ if (fZ) goto L_00636e76;
L_00636d37:; BB(0x00636d37);
    /* 00636d37: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636d3cu); f_0082d7b0();
    /* 00636d3c: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00636d3f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x636d44u); f_0082d838();
    /* 00636d44: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00636d47: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636d49: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x636d4eu); f_0082d8bc();
    /* 00636d4e: mov ebp, dword ptr [ebx + 0x34] */ r_ebp = R32((u32)(r_ebx+0x34u));
    /* 00636d51: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d54: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636d59: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d5c: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x636d61u); f_00830b74();
    /* 00636d61: mov eax, dword ptr [0xa8f104] */ r_eax = R32((u32)(0xa8f104u));
    /* 00636d66: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00636d68: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x636d6du); f_00829cc8();
    /* 00636d6d: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d70: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636d75u); f_008321d8();
    /* 00636d75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636d76: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x636d7bu); f_0082dbac();
    /* 00636d7b: mov ebp, dword ptr [ebp + 0x2c] */ r_ebp = R32((u32)(r_ebp+0x2cu));
    /* 00636d7e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d81: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d84: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636d86: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636d89: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x636d8eu); f_00830b74();
    /* 00636d8e: mov edx, dword ptr [0xa8f104] */ r_edx = R32((u32)(0xa8f104u));
    /* 00636d94: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00636d9a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636d9d: mov eax, 0 */ r_eax = 0x0u;
    /* 00636da2: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00636da5: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636da8: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x636dadu); f_00829cc8();
    /* 00636dad: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636db0: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636db5u); f_008321d8();
    /* 00636db5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636db6: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00636db9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636dbc: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636dbf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636dc1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636dc4: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x636dc9u); f_00830b74();
    /* 00636dc9: mov edx, dword ptr [0xa8f104] */ r_edx = R32((u32)(0xa8f104u));
    /* 00636dcf: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00636dd5: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636dd8: mov eax, 0 */ r_eax = 0x0u;
    /* 00636ddd: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00636de0: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636de3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x636de8u); f_00829cc8();
    /* 00636de8: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636deb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636df0u); f_008321d8();
    /* 00636df0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636df1: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00636df4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636df7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636dfa: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636dfc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636dff: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x636e04u); f_00830b74();
    /* 00636e04: mov edx, dword ptr [0xa8f104] */ r_edx = R32((u32)(0xa8f104u));
    /* 00636e0a: mov eax, dword ptr [ebx + 0xec] */ r_eax = R32((u32)(r_ebx+0xecu));
    /* 00636e10: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00636e13: mov eax, 0 */ r_eax = 0x0u;
    /* 00636e18: setl al */ r_eax = (r_eax & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 00636e1b: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00636e1e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x636e23u); f_00829cc8();
    /* 00636e23: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636e26: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636e2bu); f_008321d8();
    /* 00636e2b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636e2c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x636e31u); f_0082dab0();
    /* 00636e31: mov ebp, dword ptr [ebp + 0x30] */ r_ebp = R32((u32)(r_ebp+0x30u));
    /* 00636e34: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x636e39u); f_0082d7b0();
    /* 00636e39: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636e3c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00636e3f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636e41: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636e44: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x636e49u); f_00830b74();
    /* 00636e49: mov edx, dword ptr [ebx + 0xe8] */ r_edx = R32((u32)(r_ebx+0xe8u));
    /* 00636e4f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00636e51: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x636e56u); f_0082d8bc();
    /* 00636e56: mov eax, dword ptr [0xa8f104] */ r_eax = R32((u32)(0xa8f104u));
    /* 00636e5b: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00636e5e: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x636e63u); f_00829cc8();
    /* 00636e63: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636e66: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x636e6bu); f_008321d8();
    /* 00636e6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636e6c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x636e71u); f_0082da80();
    /* 00636e71: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x636e76u); f_0082da80();
L_00636e76:; BB(0x00636e76);
    /* 00636e76: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00636e77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636e78: ret  */ FN_RET(0x00636d18); r_esp += 4; return;
}

void f_00636e7c(void) /* sub_636E7C */
{
    FN_ENTER(0x00636e7c);
    /* 00636e7c: mov eax, dword ptr [0xa8f104] */ r_eax = R32((u32)(0xa8f104u));
    /* 00636e81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636e83: je 0x636ea7 */ if (fZ) goto L_00636ea7;
L_00636e85:; BB(0x00636e85);
    /* 00636e85: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00636e87: call 0x800b5c */ r_esp -= 4; W32(r_esp, 0x636e8cu); f_00800b5c();
    /* 00636e8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636e8d: mov eax, dword ptr [0xa8f104] */ r_eax = R32((u32)(0xa8f104u));
    /* 00636e92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636e94: je 0x636ea7 */ if (fZ) goto L_00636ea7;
L_00636e96:; BB(0x00636e96);
    /* 00636e96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636e97: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x636e9cu); f_00857e98();
    /* 00636e9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636e9d: mov dword ptr [0xa8f104], 0 */ W32((u32)(0xa8f104u), 0x0u);
L_00636ea7:; BB(0x00636ea7);
    /* 00636ea7: mov ecx, dword ptr [0xa8f108] */ r_ecx = R32((u32)(0xa8f108u));
    /* 00636ead: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636eaf: je 0x636ec4 */ if (fZ) goto L_00636ec4;
L_00636eb1:; BB(0x00636eb1);
    /* 00636eb1: je 0x636eba */ if (fZ) goto L_00636eba;
L_00636eb3:; BB(0x00636eb3);
    /* 00636eb3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00636eb5: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x636ebau); f_004066a8();
L_00636eba:; BB(0x00636eba);
    /* 00636eba: mov dword ptr [0xa8f108], 0 */ W32((u32)(0xa8f108u), 0x0u);
L_00636ec4:; BB(0x00636ec4);
    /* 00636ec4: ret  */ FN_RET(0x00636e7c); r_esp += 4; return;
}

void f_00636ec8(void)
{
    FN_ENTER(0x00636ec8);
    /* 00636ec8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636ec9: mov ebp, esp */ r_ebp = r_esp;
    /* 00636ecb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636ecd: push 0x8e459c */ { u32 v = 0x8e459cu; r_esp -= 4; W32(r_esp, v); }
    /* 00636ed2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00636ed8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636ed9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636ee0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636ee3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00636ee6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00636ee9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00636eec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00636eef: push 0xf4 */ { u32 v = 0xf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00636ef4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00636efb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x636f00u); f_005caba4();
    /* 00636f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00636f01: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00636f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00636f06: je 0x636f3f */ if (fZ) goto L_00636f3f;
L_00636f08:; BB(0x00636f08);
    /* 00636f08: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00636f0f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636f16: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636f19: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636f1f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636f22: call 0x636f44 */ r_esp -= 4; W32(r_esp, 0x636f27u); f_00636f44();
    /* 00636f27: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00636f2a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00636f31:; BB(0x00636f31);
    /* 00636f31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00636f34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00636f3b: mov esp, ebp */ r_esp = r_ebp;
    /* 00636f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00636f3e: ret  */ FN_RET(0x00636ec8); r_esp += 4; return;
L_00636f3f:; BB(0x00636f3f);
    /* 00636f3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00636f41: jmp 0x636f31 */ goto L_00636f31;
}

void f_00636f44(void) /* sub_636F44 */
{
    FN_ENTER(0x00636f44);
    /* 00636f44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00636f45: mov ebp, esp */ r_ebp = r_esp;
    /* 00636f47: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00636f49: push 0x8e45b8 */ { u32 v = 0x8e45b8u; r_esp -= 4; W32(r_esp, v); }
    /* 00636f4e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00636f54: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00636f55: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00636f5c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00636f5f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00636f62: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00636f65: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00636f68: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00636f6b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00636f6e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00636f71: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00636f74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00636f77: call 0x636310 */ r_esp -= 4; W32(r_esp, 0x636f7cu); f_00636310();
    /* 00636f7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636f83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636f86: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00636f89: mov dword ptr [ecx], 0xb2c800 */ W32((u32)(r_ecx), 0xb2c800u);
    /* 00636f8f: mov eax, dword ptr [0x9c64c4] */ r_eax = R32((u32)(0x9c64c4u));
    /* 00636f94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636f95: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00636f98: call dword ptr [0xb2c814] */ { u32 t = R32((u32)(0xb2c814u)); r_esp -= 4; W32(r_esp, 0x636f9eu); call_ind(t); }
    /* 00636f9e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636fa1: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x636fa6u); f_0062974c();
    /* 00636fa6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636fa9: mov ecx, dword ptr [0xa8f104] */ r_ecx = R32((u32)(0xa8f104u));
    /* 00636faf: mov esi, dword ptr [0xa8f108] */ r_esi = R32((u32)(0xa8f108u));
    /* 00636fb5: fld dword ptr [0x9337e4] */ FPUSH(R_F32((u32)(0x9337e4u)));
    /* 00636fbb: fadd dword ptr [edx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x68u));
    /* 00636fbe: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00636fc0: fld dword ptr [0x9337ec] */ FPUSH(R_F32((u32)(0x9337ecu)));
    /* 00636fc6: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 00636fc9: mov edi, dword ptr [esi + 0x42c] */ r_edi = R32((u32)(r_esi+0x42cu));
    /* 00636fcf: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00636fd2: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00636fd5: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00636fdf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00636fe2: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00636fe5: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00636feb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00636fed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00636fef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00636ff0: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00636ff6: jb 0x636ffa */ if (fC) goto L_00636ffa;
L_00636ff8:; BB(0x00636ff8);
    /* 00636ff8: fst st(1) */ ST(1) = ST(0);
L_00636ffa:; BB(0x00636ffa);
    /* 00636ffa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00636ffc: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 00637002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637004: jl 0x637049 */ if ((fS!=fO)) goto L_00637049;
L_00637006:; BB(0x00637006);
    /* 00637006: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
L_00637010:; BB(0x00637010);
    /* 00637010: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637013: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00637016: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00637019: mov eax, edx */ r_eax = r_edx;
    /* 0063701b: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 00637025: mov dword ptr [edx + 0xec], 3 */ W32((u32)(r_edx+0xecu), 0x3u);
    /* 0063702f: mov dword ptr [edx + 0xf0], 0x5a */ W32((u32)(r_edx+0xf0u), 0x5au);
    /* 00637039: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063703c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637043: mov esp, ebp */ r_esp = r_ebp;
    /* 00637045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637046: ret 8 */ FN_RET(0x00636f44); r_esp += 12; return;
L_00637049:; BB(0x00637049);
    /* 00637049: mov dword ptr [edx + 0xd0], 2 */ W32((u32)(r_edx+0xd0u), 0x2u);
    /* 00637053: jmp 0x637010 */ goto L_00637010;
}

void f_00636f6c(void)
{
    FN_ENTER(0x00636f6c);
    /* 00636f6c: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00636f6d: or al, 0xff */ {  u32 a = (u8)r_eax; u32 b = 0xffu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00636f6f: jne 0x636f79 */ if (!fZ) UNSUP(0x00636f6f, "branch to code that was not decoded");
L_00636f71:; BB(0x00636f71);
    /* 00636f71: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00636f74: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00636f77: call 0x636310 */ r_esp -= 4; W32(r_esp, 0x636f7cu); f_00636310();
    /* 00636f7c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00636f83: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636f86: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00636f89: mov dword ptr [ecx], 0xb2c800 */ W32((u32)(r_ecx), 0xb2c800u);
    /* 00636f8f: mov eax, dword ptr [0x9c64c4] */ r_eax = R32((u32)(0x9c64c4u));
    /* 00636f94: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00636f95: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00636f98: call dword ptr [0xb2c814] */ { u32 t = R32((u32)(0xb2c814u)); r_esp -= 4; W32(r_esp, 0x636f9eu); call_ind(t); }
    /* 00636f9e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636fa1: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x636fa6u); f_0062974c();
    /* 00636fa6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00636fa9: mov ecx, dword ptr [0xa8f104] */ r_ecx = R32((u32)(0xa8f104u));
    /* 00636faf: mov esi, dword ptr [0xa8f108] */ r_esi = R32((u32)(0xa8f108u));
    /* 00636fb5: fld dword ptr [0x9337e4] */ FPUSH(R_F32((u32)(0x9337e4u)));
    /* 00636fbb: fadd dword ptr [edx + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x68u));
    /* 00636fbe: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00636fc0: fld dword ptr [0x9337ec] */ FPUSH(R_F32((u32)(0x9337ecu)));
    /* 00636fc6: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 00636fc9: mov edi, dword ptr [esi + 0x42c] */ r_edi = R32((u32)(r_esi+0x42cu));
    /* 00636fcf: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00636fd2: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00636fd5: mov dword ptr [edx + 0xc0], 0x43c80000 */ W32((u32)(r_edx+0xc0u), 0x43c80000u);
    /* 00636fdf: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00636fe2: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 00636fe5: mov dword ptr [edx + 0xc4], eax */ W32((u32)(r_edx+0xc4u), r_eax);
    /* 00636feb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00636fed: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00636fef: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00636ff0: mov eax, dword ptr [edx + 0x88] */ r_eax = R32((u32)(r_edx+0x88u));
    /* 00636ff6: jb 0x636ffa */ if (fC) goto L_00636ffa;
L_00636ff8:; BB(0x00636ff8);
    /* 00636ff8: fst st(1) */ ST(1) = ST(0);
L_00636ffa:; BB(0x00636ffa);
    /* 00636ffa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00636ffc: fstp dword ptr [edx + 0xcc] */ W_F32((u32)(r_edx+0xccu), ST(0)); FPOP();
    /* 00637002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637004: jl 0x637049 */ if ((fS!=fO)) goto L_00637049;
L_00637006:; BB(0x00637006);
    /* 00637006: mov dword ptr [edx + 0xd0], 1 */ W32((u32)(r_edx+0xd0u), 0x1u);
L_00637010:; BB(0x00637010);
    /* 00637010: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637013: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00637016: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00637019: mov eax, edx */ r_eax = r_edx;
    /* 0063701b: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 00637025: mov dword ptr [edx + 0xec], 3 */ W32((u32)(r_edx+0xecu), 0x3u);
    /* 0063702f: mov dword ptr [edx + 0xf0], 0x5a */ W32((u32)(r_edx+0xf0u), 0x5au);
    /* 00637039: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063703c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637043: mov esp, ebp */ r_esp = r_ebp;
    /* 00637045: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637046: ret 8 */ FN_RET(0x00636f6c); r_esp += 12; return;
L_00637049:; BB(0x00637049);
    /* 00637049: mov dword ptr [edx + 0xd0], 2 */ W32((u32)(r_edx+0xd0u), 0x2u);
    /* 00637053: jmp 0x637010 */ goto L_00637010;
}

