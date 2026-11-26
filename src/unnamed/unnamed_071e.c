#include "protos.h"

void f_0071e010(void) /* sub_71E010 */
{
    FN_ENTER(0x0071e010);
    /* 0071e010: mov eax, dword ptr [ecx + 0x94] */ r_eax = R32((u32)(r_ecx+0x94u));
    /* 0071e016: mov dword ptr [ecx + 0x68], eax */ W32((u32)(r_ecx+0x68u), r_eax);
    /* 0071e019: mov dword ptr [ecx + 0x6c], eax */ W32((u32)(r_ecx+0x6cu), r_eax);
    /* 0071e01c: ret  */ FN_RET(0x0071e010); r_esp += 4; return;
}

void f_0071e020(void) /* sub_71E020 */
{
    FN_ENTER(0x0071e020);
    /* 0071e020: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e021: mov edi, ecx */ r_edi = r_ecx;
    /* 0071e023: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 0071e02a: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e02c: je 0x71e04d */ if (fZ) goto L_0071e04d;
L_0071e02e:; BB(0x0071e02e);
    /* 0071e02e: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 0071e031: cmp eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071e036: jge 0x71e04d */ if ((fS==fO)) goto L_0071e04d;
L_0071e038:; BB(0x0071e038);
    /* 0071e038: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071e03c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e03d: call 0x7be1d0 */ r_esp -= 4; W32(r_esp, 0x71e042u); f_007be1d0();
    /* 0071e042: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e043: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 0071e046: lea eax, [eax + edx + 1] */ r_eax = (u32)(r_eax+r_edx+0x1u);
    /* 0071e04a: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
L_0071e04d:; BB(0x0071e04d);
    /* 0071e04d: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0071e050: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071e052: je 0x71e06b */ if (fZ) goto L_0071e06b;
L_0071e054:; BB(0x0071e054);
    /* 0071e054: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e056: je 0x71e05e */ if (fZ) goto L_0071e05e;
L_0071e058:; BB(0x0071e058);
    /* 0071e058: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071e05a: jne 0x71e05e */ if (!fZ) goto L_0071e05e;
L_0071e05c:; BB(0x0071e05c);
    /* 0071e05c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e05d: ret  */ FN_RET(0x0071e020); r_esp += 4; return;
L_0071e05e:; BB(0x0071e05e);
    /* 0071e05e: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071e061: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0071e064: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e066: call 0x71e070 */ r_esp -= 4; W32(r_esp, 0x71e06bu); f_0071e070();
L_0071e06b:; BB(0x0071e06b);
    /* 0071e06b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e06c: ret  */ FN_RET(0x0071e020); r_esp += 4; return;
}

void f_0071e070(void) /* sub_71E070 */
{
    FN_ENTER(0x0071e070);
    /* 0071e070: movzx eax, byte ptr [ecx + 0x85] */ r_eax = (u32)R8((u32)(r_ecx+0x85u));
    /* 0071e077: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071e079: je 0x71e07c */ if (fZ) goto L_0071e07c;
L_0071e07b:; BB(0x0071e07b);
    /* 0071e07b: ret  */ FN_RET(0x0071e070); r_esp += 4; return;
L_0071e07c:; BB(0x0071e07c);
    /* 0071e07c: mov byte ptr [ecx + 0x84], 7 */ W8((u32)(r_ecx+0x84u), 0x7u);
    /* 0071e083: ret  */ FN_RET(0x0071e070); r_esp += 4; return;
}

void f_0071e084(void) /* sub_71E084 */
{
    FN_ENTER(0x0071e084);
    /* 0071e084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e086: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e087: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e088: sub esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071e08e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071e090: movzx eax, byte ptr [ebx + 0x84] */ r_eax = (u32)R8((u32)(r_ebx+0x84u));
    /* 0071e097: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0071e09a: ja 0x71e1fa */ if ((!fC&&!fZ)) goto L_0071e1fa;
L_0071e0a0:; BB(0x0071e0a0);
    /* 0071e0a0: mov eax, dword ptr [eax*4 + 0x970268] */ r_eax = R32((u32)(r_eax*4+0x970268u));
    /* 0071e0a7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0071e1fa:; BB(0x0071e1fa);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e084); r_esp += 4; return;
}

void f_0071e0a9(void)
{
    FN_ENTER(0x0071e0a9);
    /* 0071e0a9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e0ab: call 0x71f948 */ r_esp -= 4; W32(r_esp, 0x71e0b0u); f_0071f948();
    /* 0071e0b0: jmp 0x71e1fa */ goto L_0071e1fa;
L_0071e1fa:; BB(0x0071e1fa);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e0a9); r_esp += 4; return;
}

void f_0071e0b5(void)
{
    FN_ENTER(0x0071e0b5);
    /* 0071e0b5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e0b7: call 0x71e4f4 */ r_esp -= 4; W32(r_esp, 0x71e0bcu); f_0071e4f4();
    /* 0071e0bc: jmp 0x71e1fa */ goto L_0071e1fa;
L_0071e1fa:; BB(0x0071e1fa);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e0b5); r_esp += 4; return;
}

void f_0071e0c1(void)
{
    FN_ENTER(0x0071e0c1);
    /* 0071e0c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e0c3: call 0x71e4f4 */ r_esp -= 4; W32(r_esp, 0x71e0c8u); f_0071e4f4();
    /* 0071e0c8: jmp 0x71e1fa */ goto L_0071e1fa;
L_0071e1fa:; BB(0x0071e1fa);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e0c1); r_esp += 4; return;
}

void f_0071e0cd(void)
{
    FN_ENTER(0x0071e0cd);
    /* 0071e0cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e0cf: call 0x71e4f4 */ r_esp -= 4; W32(r_esp, 0x71e0d4u); f_0071e4f4();
    /* 0071e0d4: jmp 0x71e1fa */ goto L_0071e1fa;
L_0071e1fa:; BB(0x0071e1fa);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e0cd); r_esp += 4; return;
}

void f_0071e0d9(void)
{
    FN_ENTER(0x0071e0d9);
    /* 0071e0d9: movzx eax, word ptr [ebx + 0x8a] */ r_eax = (u32)R16((u32)(r_ebx+0x8au));
    /* 0071e0e0: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e0e5: lea esi, [ebx + 0xa4] */ r_esi = (u32)(r_ebx+0xa4u);
    /* 0071e0eb: je 0x71e1c4 */ if (fZ) goto L_0071e1c4;
L_0071e0f1:; BB(0x0071e0f1);
    /* 0071e0f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e0f2: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71e0f7u); f_007b4d18();
    /* 0071e0f7: mov ebp, eax */ r_ebp = r_eax;
    /* 0071e0f9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e0fc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e0fe: je 0x71e1c4 */ if (fZ) goto L_0071e1c4;
L_0071e104:; BB(0x0071e104);
    /* 0071e104: movzx edx, word ptr [ebx + 0x8a] */ r_edx = (u32)R16((u32)(r_ebx+0x8au));
    /* 0071e10b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e10c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71e111u); f_0068d5a8();
    /* 0071e111: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e112: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e114: je 0x71e12c */ if (fZ) goto L_0071e12c;
L_0071e116:; BB(0x0071e116);
    /* 0071e116: movzx edx, word ptr [ebx + 0x8a] */ r_edx = (u32)R16((u32)(r_ebx+0x8au));
    /* 0071e11d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e11e: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71e123u); f_006944ec();
    /* 0071e123: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e124: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e126: je 0x71e1c4 */ if (fZ) goto L_0071e1c4;
L_0071e12c:; BB(0x0071e12c);
    /* 0071e12c: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 0071e12f: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0071e133: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 0071e136: fadd dword ptr [ebx + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x90u));
    /* 0071e13c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e13e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0071e142: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 0071e145: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 0071e149: je 0x71e1c4 */ if (fZ) goto L_0071e1c4;
L_0071e14b:; BB(0x0071e14b);
    /* 0071e14b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x71e150u); f_0082d7b0();
    /* 0071e150: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71e155u); f_004d2968();
    /* 0071e155: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e156: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 0071e15a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071e15c: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x71e161u); f_0082f09c();
    /* 0071e161: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71e166u); f_004d28a4();
    /* 0071e166: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x71e16bu); f_0082da80();
    /* 0071e16b: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 0071e170: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0071e172: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0071e176: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0071e17a: fsubr dword ptr [0xa48828] */ ST(0) = R_F32((u32)(0xa48828u)) - ST(0);
    /* 0071e180: fadd dword ptr [ebx + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa4u));
    /* 0071e186: fst dword ptr [ebx + 0xa4] */ W_F32((u32)(r_ebx+0xa4u), ST(0));
    /* 0071e18c: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 0071e192: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071e194: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 0071e19a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0071e19c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0071e1a0: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 0071e1a4: fsubr dword ptr [0xa4882c] */ ST(0) = R_F32((u32)(0xa4882cu)) - ST(0);
    /* 0071e1aa: fadd dword ptr [ebx + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa8u));
    /* 0071e1b0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e1b2: fstp dword ptr [ebx + 0xa4] */ W_F32((u32)(r_ebx+0xa4u), ST(0)); FPOP();
    /* 0071e1b8: fdiv dword ptr [0xaf035c] */ ST(0) = ST(0) / R_F32((u32)(0xaf035cu));
    /* 0071e1be: fstp dword ptr [ebx + 0xa8] */ W_F32((u32)(r_ebx+0xa8u), ST(0)); FPOP();
L_0071e1c4:; BB(0x0071e1c4);
    /* 0071e1c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1c6: call 0x71f948 */ r_esp -= 4; W32(r_esp, 0x71e1cbu); f_0071f948();
    /* 0071e1cb: fld dword ptr [0x97055c] */ FPUSH(R_F32((u32)(0x97055cu)));
    /* 0071e1d1: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 0071e1d4: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 0071e1d7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e1d9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071e1db: fadd dword ptr [ebx + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x30u));
    /* 0071e1de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e1e0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071e1e2: fadd dword ptr [ebx + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x34u));
    /* 0071e1e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e1e7: fstp dword ptr [ebx + 0x9c] */ W_F32((u32)(r_ebx+0x9cu), ST(0)); FPOP();
    /* 0071e1ed: fstp dword ptr [ebx + 0xa0] */ W_F32((u32)(r_ebx+0xa0u), ST(0)); FPOP();
    /* 0071e1f3: mov byte ptr [ebx + 0x84], 1 */ W8((u32)(r_ebx+0x84u), 0x1u);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e0d9); r_esp += 4; return;
}

void f_0071e1fa(void)
{
    FN_ENTER(0x0071e1fa);
    /* 0071e1fa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e1fc: call 0x71fbac */ r_esp -= 4; W32(r_esp, 0x71e201u); f_0071fbac();
    /* 0071e201: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e203: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x71e208u); f_007108f4();
    /* 0071e208: mov esi, eax */ r_esi = r_eax;
    /* 0071e20a: call 0x4d2764 */ r_esp -= 4; W32(r_esp, 0x71e20fu); f_004d2764();
    /* 0071e20f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071e212: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0071e214: fstp dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0)); FPOP();
    /* 0071e217: call 0x4d276c */ r_esp -= 4; W32(r_esp, 0x71e21cu); f_004d276c();
    /* 0071e21c: fld dword ptr [0x970558] */ FPUSH(R_F32((u32)(0x970558u)));
    /* 0071e222: fld dword ptr [0x970554] */ FPUSH(R_F32((u32)(0x970554u)));
    /* 0071e228: fld dword ptr [0x970550] */ FPUSH(R_F32((u32)(0x970550u)));
    /* 0071e22e: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071e231: fdivrp st(4) */ ST(4) = ST(0) / ST(4); FPOP();
    /* 0071e233: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071e235: fstp dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0)); FPOP();
    /* 0071e238: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e23a: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e23d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e23f: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 0071e245: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071e247: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071e249: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e24b: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0071e24f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e251: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e255: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e258: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e25c: mov dword ptr [esp + 4], 0xff000000 */ W32((u32)(r_esp+0x4u), 0xff000000u);
    /* 0071e264: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e267: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e26b: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0071e26f: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e274u); f_0071ff10();
    /* 0071e274: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e27b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e27e: je 0x71e45a */ if (fZ) goto L_0071e45a;
L_0071e284:; BB(0x0071e284);
    /* 0071e284: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e288: lea edx, [esp + 0x5c] */ r_edx = (u32)(r_esp+0x5cu);
    /* 0071e28c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e28d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e28f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e290: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e295u); f_0071db74();
    /* 0071e295: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 0071e299: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 0071e29d: fld dword ptr [ebx + 0x9c] */ FPUSH(R_F32((u32)(r_ebx+0x9cu)));
    /* 0071e2a3: fld dword ptr [ebx + 0xa0] */ FPUSH(R_F32((u32)(r_ebx+0xa0u)));
    /* 0071e2a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2ab: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071e2af: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b1: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071e2b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2b7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0071e2b9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071e2bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e2bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e2bf: fmul qword ptr [0x970338] */ ST(0) = ST(0) * R_F64((u32)(0x970338u));
    /* 0071e2c5: fdiv qword ptr [0x970330] */ ST(0) = ST(0) / R_F64((u32)(0x970330u));
    /* 0071e2cb: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 0071e2d1: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e2d5: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e2da: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e2df: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e2e3: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e2e7: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e2eb: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e2ef: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 0071e2f3: add edi, 0x178 */ {  u32 a = r_edi; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071e2f9: lea edx, [esp + 0x64] */ r_edx = (u32)(r_esp+0x64u);
    /* 0071e2fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e2ff: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e304u); f_00836208();
    /* 0071e304: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 0071e308: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e30b: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0071e30f: fdivr dword ptr [0x97054c] */ ST(0) = R_F32((u32)(0x97054cu)) / ST(0);
    /* 0071e315: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 0071e319: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e31b: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e320u); f_0082ddd8();
    /* 0071e320: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e324: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e328: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e32c: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 0071e330: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071e334: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e336: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e33bu); f_0082dcbc();
    /* 0071e33b: fmul dword ptr [esp + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x40u));
    /* 0071e33f: fadd dword ptr [esp + 0x60] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x60u));
    /* 0071e343: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071e347: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071e34e: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0071e355: mov dword ptr [esp + 0x78], 0 */ W32((u32)(r_esp+0x78u), 0x0u);
    /* 0071e35d: lea edx, [esp + 0x80] */ r_edx = (u32)(r_esp+0x80u);
    /* 0071e364: mov dword ptr [esp + 0x7c], 3 */ W32((u32)(r_esp+0x7cu), 0x3u);
    /* 0071e36c: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0071e370: mov edx, 0xff000000 */ r_edx = 0xff000000u;
    /* 0071e375: lea edi, [esp + 0x98] */ r_edi = (u32)(r_esp+0x98u);
    /* 0071e37c: mov dword ptr [esp + 0x74], edi */ W32((u32)(r_esp+0x74u), r_edi);
    /* 0071e380: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0071e387: lea edi, [ebp + 0x4000] */ r_edi = (u32)(r_ebp+0x4000u);
    /* 0071e38d: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 0071e394: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e396: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 0071e39d: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3a2u); f_0082ddd8();
    /* 0071e3a2: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3a8: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3ae: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e3b2: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e3b6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3b8: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 0071e3bf: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e3c1: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e3c6u); f_0082dcbc();
    /* 0071e3c6: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3cc: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3d2: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e3d6: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e3da: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e3dc: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 0071e3e3: add ebp, 0xffffc000 */ {  u32 a = r_ebp; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071e3e9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e3eb: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e3f0u); f_0082ddd8();
    /* 0071e3f0: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e3f6: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e3fc: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 0071e400: fadd dword ptr [esp + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x38u));
    /* 0071e404: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e406: fstp dword ptr [esp + 0x90] */ W_F32((u32)(r_esp+0x90u), ST(0)); FPOP();
    /* 0071e40d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e40f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71e414u); f_0082dcbc();
    /* 0071e414: fmul dword ptr [0x970548] */ ST(0) = ST(0) * R_F32((u32)(0x970548u));
    /* 0071e41a: fmul dword ptr [ebx + 0x94] */ ST(0) = ST(0) * R_F32((u32)(r_ebx+0x94u));
    /* 0071e420: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 0071e424: fadd dword ptr [esp + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x3cu));
    /* 0071e428: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e42a: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e430: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e433: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071e437: fstp dword ptr [esp + 0x94] */ W_F32((u32)(r_esp+0x94u), ST(0)); FPOP();
    /* 0071e43e: mov dword ptr [esp + 4], 3 */ W32((u32)(r_esp+0x4u), 0x3u);
    /* 0071e446: mov dword ptr [esp + 0xc], 0x20 */ W32((u32)(r_esp+0xcu), 0x20u);
    /* 0071e44e: lea edx, [esp + 0x70] */ r_edx = (u32)(r_esp+0x70u);
    /* 0071e452: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e455: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x71e45au); f_0082b5d8();
L_0071e45a:; BB(0x0071e45a);
    /* 0071e45a: fld dword ptr [0x97053c] */ FPUSH(R_F32((u32)(0x97053cu)));
    /* 0071e460: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e463: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e469: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e46b: mov dword ptr [esp + 0x54], 0 */ W32((u32)(r_esp+0x54u), 0x0u);
    /* 0071e473: mov dword ptr [esp + 0x58], 0 */ W32((u32)(r_esp+0x58u), 0x0u);
    /* 0071e47b: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e47e: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e482: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e485: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e489: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e48d: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e491: call 0x71ff10 */ r_esp -= 4; W32(r_esp, 0x71e496u); f_0071ff10();
    /* 0071e496: fld dword ptr [0x970544] */ FPUSH(R_F32((u32)(0x970544u)));
    /* 0071e49c: fadd dword ptr [ebx + 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x54u));
    /* 0071e49f: mov edx, dword ptr [ebx + 0x98] */ r_edx = R32((u32)(r_ebx+0x98u));
    /* 0071e4a5: add esp, -0x10 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4a8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0071e4ac: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0071e4af: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071e4b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4b5: lea ebp, [esp + 0x64] */ r_ebp = (u32)(r_esp+0x64u);
    /* 0071e4b9: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0071e4bd: call 0x720444 */ r_esp -= 4; W32(r_esp, 0x71e4c2u); f_00720444();
    /* 0071e4c2: movzx edx, byte ptr [ebx + 0x85] */ r_edx = (u32)R8((u32)(r_ebx+0x85u));
    /* 0071e4c9: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e4cc: je 0x71e4e8 */ if (fZ) goto L_0071e4e8;
L_0071e4ce:; BB(0x0071e4ce);
    /* 0071e4ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4cf: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0071e4d2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4d5: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71e4dau); f_0072a648();
    /* 0071e4da: push dword ptr [ebx + 0x98] */ { u32 v = R32((u32)(r_ebx+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071e4e3: call 0x72062c */ r_esp -= 4; W32(r_esp, 0x71e4e8u); f_0072062c();
L_0071e4e8:; BB(0x0071e4e8);
    /* 0071e4e8: add esp, 0xa4 */ {  u32 a = r_esp; u32 b = 0xa4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e4ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071e4ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e4f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e4f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e4f2: ret  */ FN_RET(0x0071e1fa); r_esp += 4; return;
}

void f_0071e4f4(void) /* sub_71E4F4 */
{
    FN_ENTER(0x0071e4f4);
    /* 0071e4f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e4f7: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071e4fa: mov edi, ecx */ r_edi = r_ecx;
    /* 0071e4fc: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e4fe: call 0x71e70c */ r_esp -= 4; W32(r_esp, 0x71e503u); f_0071e70c();
    /* 0071e503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e505: je 0x71e5e0 */ if (fZ) goto L_0071e5e0;
L_0071e50b:; BB(0x0071e50b);
    /* 0071e50b: movsx eax, byte ptr [edi + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x87u));
    /* 0071e512: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e515: je 0x71e6c4 */ if (fZ) goto L_0071e6c4;
L_0071e51b:; BB(0x0071e51b);
    /* 0071e51b: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071e51f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e521: call 0x717ca8 */ r_esp -= 4; W32(r_esp, 0x71e526u); f_00717ca8();
    /* 0071e526: fld dword ptr [0x970538] */ FPUSH(R_F32((u32)(0x970538u)));
    /* 0071e52c: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 0071e52f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071e531: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071e533: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 0071e536: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071e538: fstp dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0)); FPOP();
    /* 0071e53b: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071e53e: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071e542: fstp dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0)); FPOP();
    /* 0071e545: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e546: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71e54bu); f_007199a0();
    /* 0071e54b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e54e: fld dword ptr [0x970534] */ FPUSH(R_F32((u32)(0x970534u)));
    /* 0071e554: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e556: fcom dword ptr [edi + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x30u))); 
    /* 0071e559: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e55b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e55c: jbe 0x71e561 */ if ((fC||fZ)) goto L_0071e561;
L_0071e55e:; BB(0x0071e55e);
    /* 0071e55e: fst dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0));
L_0071e561:; BB(0x0071e561);
    /* 0071e561: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071e563: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071e567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e568: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71e56du); f_007199c0();
    /* 0071e56d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e56e: fld dword ptr [0x970530] */ FPUSH(R_F32((u32)(0x970530u)));
    /* 0071e574: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e576: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071e579: fmul dword ptr [0x97052c] */ ST(0) = ST(0) * R_F32((u32)(0x97052cu));
    /* 0071e57f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e581: fcom dword ptr [edi + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x30u))); 
    /* 0071e584: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e586: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e587: jae 0x71e58c */ if (!fC) goto L_0071e58c;
L_0071e589:; BB(0x0071e589);
    /* 0071e589: fst dword ptr [edi + 0x30] */ W_F32((u32)(r_edi+0x30u), ST(0));
L_0071e58c:; BB(0x0071e58c);
    /* 0071e58c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071e58e: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071e592: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e593: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71e598u); f_007199b0();
    /* 0071e598: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e599: fld dword ptr [0x970528] */ FPUSH(R_F32((u32)(0x970528u)));
    /* 0071e59f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e5a1: fcom dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); 
    /* 0071e5a4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e5a6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e5a7: jbe 0x71e5ac */ if ((fC||fZ)) goto L_0071e5ac;
L_0071e5a9:; BB(0x0071e5a9);
    /* 0071e5a9: fst dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0));
L_0071e5ac:; BB(0x0071e5ac);
    /* 0071e5ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071e5ae: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071e5b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e5b3: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71e5b8u); f_007199d0();
    /* 0071e5b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e5b9: fld dword ptr [0x970524] */ FPUSH(R_F32((u32)(0x970524u)));
    /* 0071e5bf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e5c1: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0071e5c4: fmul dword ptr [0x97052c] */ ST(0) = ST(0) * R_F32((u32)(0x97052cu));
    /* 0071e5ca: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e5cc: fcom dword ptr [edi + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edi+0x34u))); 
    /* 0071e5cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e5d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e5d2: jae 0x71e5d7 */ if (!fC) goto L_0071e5d7;
L_0071e5d4:; BB(0x0071e5d4);
    /* 0071e5d4: fst dword ptr [edi + 0x34] */ W_F32((u32)(r_edi+0x34u), ST(0));
L_0071e5d7:; BB(0x0071e5d7);
    /* 0071e5d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071e5d9: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e5dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e5dd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e5de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e5df: ret  */ FN_RET(0x0071e4f4); r_esp += 4; return;
L_0071e5e0:; BB(0x0071e5e0);
    /* 0071e5e0: movsx eax, byte ptr [edi + 0x87] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x87u));
    /* 0071e5e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e5ea: je 0x71e617 */ if (fZ) goto L_0071e617;
L_0071e5ec:; BB(0x0071e5ec);
    /* 0071e5ec: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 0071e5f3: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0071e5f6: and eax, 0xfe */ {  u32 a = r_eax; u32 b = 0xfeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071e5fb: mov byte ptr [edi + 0x85], al */ W8((u32)(r_edi+0x85u), (u8)r_eax);
    /* 0071e601: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0071e607: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 0071e60a: lea ebp, [edi + 0x87] */ r_ebp = (u32)(r_edi+0x87u);
    /* 0071e610: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e611: call 0x717c78 */ r_esp -= 4; W32(r_esp, 0x71e616u); f_00717c78();
    /* 0071e616: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0071e617:; BB(0x0071e617);
    /* 0071e617: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 0071e61a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0071e61c: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e621: je 0x71e680 */ if (fZ) goto L_0071e680;
L_0071e623:; BB(0x0071e623);
    /* 0071e623: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071e628: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 0071e62b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071e62e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e62f: lea ebp, [edi + 0x30] */ r_ebp = (u32)(r_edi+0x30u);
    /* 0071e632: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e633: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e635: call 0x71eeac */ r_esp -= 4; W32(r_esp, 0x71e63au); f_0071eeac();
    /* 0071e63a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e63c: je 0x71e641 */ if (fZ) goto L_0071e641;
L_0071e63e:; BB(0x0071e63e);
    /* 0071e63e: lea esi, [esp] */ r_esi = (u32)(r_esp);
L_0071e641:; BB(0x0071e641);
    /* 0071e641: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0071e644: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0071e648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e649: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e64b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e64c: call 0x71e8f8 */ r_esp -= 4; W32(r_esp, 0x71e651u); f_0071e8f8();
    /* 0071e651: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e653: je 0x71e659 */ if (fZ) goto L_0071e659;
L_0071e655:; BB(0x0071e655);
    /* 0071e655: lea esi, [esp + 8] */ r_esi = (u32)(r_esp+0x8u);
L_0071e659:; BB(0x0071e659);
    /* 0071e659: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0071e65d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e65f: je 0x71e67a */ if (fZ) goto L_0071e67a;
L_0071e661:; BB(0x0071e661);
    /* 0071e661: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0071e665: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0071e669: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e66a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e66c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e66d: call 0x71f0c0 */ r_esp -= 4; W32(r_esp, 0x71e672u); f_0071f0c0();
    /* 0071e672: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e674: je 0x71e67a */ if (fZ) goto L_0071e67a;
L_0071e676:; BB(0x0071e676);
    /* 0071e676: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
L_0071e67a:; BB(0x0071e67a);
    /* 0071e67a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e67c: je 0x71e6f4 */ if (fZ) goto L_0071e6f4;
L_0071e67e:; BB(0x0071e67e);
    /* 0071e67e: jmp 0x71e6b2 */ goto L_0071e6b2;
L_0071e680:; BB(0x0071e680);
    /* 0071e680: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071e683: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e684: lea edx, [edi + 0x30] */ r_edx = (u32)(r_edi+0x30u);
    /* 0071e687: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e689: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e68a: call 0x71eeac */ r_esp -= 4; W32(r_esp, 0x71e68fu); f_0071eeac();
    /* 0071e68f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e691: je 0x71e696 */ if (fZ) goto L_0071e696;
L_0071e693:; BB(0x0071e693);
    /* 0071e693: lea esi, [esp] */ r_esi = (u32)(r_esp);
L_0071e696:; BB(0x0071e696);
    /* 0071e696: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0071e699: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 0071e69d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e69e: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e6a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e6a1: call 0x71f0c0 */ r_esp -= 4; W32(r_esp, 0x71e6a6u); f_0071f0c0();
    /* 0071e6a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e6a8: je 0x71e6ae */ if (fZ) goto L_0071e6ae;
L_0071e6aa:; BB(0x0071e6aa);
    /* 0071e6aa: lea esi, [esp + 0x10] */ r_esi = (u32)(r_esp+0x10u);
L_0071e6ae:; BB(0x0071e6ae);
    /* 0071e6ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e6b0: je 0x71e6bd */ if (fZ) goto L_0071e6bd;
L_0071e6b2:; BB(0x0071e6b2);
    /* 0071e6b2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0071e6b4: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0071e6b7: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 0071e6ba: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
L_0071e6bd:; BB(0x0071e6bd);
    /* 0071e6bd: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e6c0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e6c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071e6c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071e6c3: ret  */ FN_RET(0x0071e4f4); r_esp += 4; return;
L_0071e6c4:; BB(0x0071e6c4);
    /* 0071e6c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e6c5: movzx eax, byte ptr [edi + 0x85] */ r_eax = (u32)R8((u32)(r_edi+0x85u));
    /* 0071e6cc: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 0071e6cf: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e6d4: mov byte ptr [edi + 0x85], al */ W8((u32)(r_edi+0x85u), (u8)r_eax);
    /* 0071e6da: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0071e6e0: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 0071e6e3: call 0x717aec */ r_esp -= 4; W32(r_esp, 0x71e6e8u); f_00717aec();
    /* 0071e6e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e6e9: mov byte ptr [edi + 0x87], al */ W8((u32)(r_edi+0x87u), (u8)r_eax);
    /* 0071e6ef: jmp 0x71e51b */ goto L_0071e51b;
L_0071e6f4:; BB(0x0071e6f4);
    /* 0071e6f4: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071e6f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e6f9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e6fa: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e6fc: call 0x71edcc */ r_esp -= 4; W32(r_esp, 0x71e701u); f_0071edcc();
    /* 0071e701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e703: je 0x71e6bd */ if (fZ) goto L_0071e6bd;
L_0071e705:; BB(0x0071e705);
    /* 0071e705: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 0071e709: jmp 0x71e6ae */ goto L_0071e6ae;
}

void f_0071e70c(void) /* sub_71E70C */
{
    FN_ENTER(0x0071e70c);
    /* 0071e70c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e70d: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071e710: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0071e712: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071e719: and eax, 0xdf */ {  u32 a = r_eax; u32 b = 0xdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071e71e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0071e722: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 0071e728: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0071e72c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e72d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071e72f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e730: call 0x71db74 */ r_esp -= 4; W32(r_esp, 0x71e735u); f_0071db74();
    /* 0071e735: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e737: jne 0x71e743 */ if (!fZ) goto L_0071e743;
L_0071e739:; BB(0x0071e739);
    /* 0071e739: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e73e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e741: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e742: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e743:; BB(0x0071e743);
    /* 0071e743: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071e74a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e74c: je 0x71e759 */ if (fZ) goto L_0071e759;
L_0071e74e:; BB(0x0071e74e);
    /* 0071e74e: fld dword ptr [0x97051c] */ FPUSH(R_F32((u32)(0x97051cu)));
    /* 0071e754: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071e757: jmp 0x71e762 */ goto L_0071e762;
L_0071e759:; BB(0x0071e759);
    /* 0071e759: fld dword ptr [0x970520] */ FPUSH(R_F32((u32)(0x970520u)));
    /* 0071e75f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_0071e762:; BB(0x0071e762);
    /* 0071e762: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 0071e766: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e767: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71e76cu); f_007199a0();
    /* 0071e76c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e76d: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 0071e770: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0071e774: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e776: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e777: jbe 0x71e783 */ if ((fC||fZ)) goto L_0071e783;
L_0071e779:; BB(0x0071e779);
    /* 0071e779: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e77e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e781: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e782: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e783:; BB(0x0071e783);
    /* 0071e783: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 0071e787: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e788: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71e78du); f_007199b0();
    /* 0071e78d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e78e: fsub dword ptr [esp] */ ST(0) = ST(0) - R_F32((u32)(r_esp));
    /* 0071e791: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 0071e795: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e797: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e798: jbe 0x71e7a4 */ if ((fC||fZ)) goto L_0071e7a4;
L_0071e79a:; BB(0x0071e79a);
    /* 0071e79a: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e79f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e7a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e7a3: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e7a4:; BB(0x0071e7a4);
    /* 0071e7a4: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 0071e7a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e7a9: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71e7aeu); f_007199c0();
    /* 0071e7ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e7af: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0071e7b2: fcomp dword ptr [esp + 4] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4u))); FPOP();
    /* 0071e7b6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e7b8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e7b9: jae 0x71e7c5 */ if (!fC) goto L_0071e7c5;
L_0071e7bb:; BB(0x0071e7bb);
    /* 0071e7bb: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e7c0: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e7c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e7c4: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e7c5:; BB(0x0071e7c5);
    /* 0071e7c5: movsx eax, word ptr [ebp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 0071e7c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e7ca: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71e7cfu); f_007199d0();
    /* 0071e7cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e7d0: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 0071e7d3: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 0071e7d7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e7d9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e7da: jae 0x71e7e6 */ if (!fC) goto L_0071e7e6;
L_0071e7dc:; BB(0x0071e7dc);
    /* 0071e7dc: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e7e1: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e7e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e7e5: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e7e6:; BB(0x0071e7e6);
    /* 0071e7e6: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0071e7ee: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0071e7f3: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0071e7fb: mov dword ptr [esp + 0x20], 0xbf800000 */ W32((u32)(r_esp+0x20u), 0xbf800000u);
    /* 0071e803: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x71e808u); f_0082d990();
    /* 0071e808: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0071e80d: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 0071e813: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071e815: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x71e81au); f_0082d8bc();
    /* 0071e81a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0071e81f: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 0071e825: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071e827: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x71e82cu); f_0082e9e4();
    /* 0071e82c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0071e831: mov edx, dword ptr [eax + 0x198] */ r_edx = R32((u32)(r_eax+0x198u));
    /* 0071e837: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071e839: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x71e83eu); f_00830c04();
    /* 0071e83e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071e842: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e843: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 0071e847: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071e849: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x71e84eu); f_0082eab8();
    /* 0071e84e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x71e853u); f_0082da80();
    /* 0071e853: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0071e858: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0071e85c: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 0071e862: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 0071e866: fsub dword ptr [eax + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x17cu));
    /* 0071e86c: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0071e870: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 0071e876: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e878: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0071e87c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0071e880: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0071e884: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0071e888: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0071e88c: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x71e891u); f_0082f9e0();
    /* 0071e891: fcomp dword ptr [0x970520] */ fx_compare(ST(0), R_F32((u32)(0x970520u))); FPOP();
    /* 0071e897: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e899: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e89a: jbe 0x71e8e6 */ if ((fC||fZ)) goto L_0071e8e6;
L_0071e89c:; BB(0x0071e89c);
    /* 0071e89c: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071e8a0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071e8a2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071e8a6: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071e8a8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e8aa: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0071e8ae: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0071e8b0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071e8b2: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 0071e8b5: fmul dword ptr [0x970514] */ ST(0) = ST(0) * R_F32((u32)(0x970514u));
    /* 0071e8bb: fadd dword ptr [0x970518] */ ST(0) = ST(0) + R_F32((u32)(0x970518u));
    /* 0071e8c1: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0071e8c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071e8c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071e8c6: jae 0x71e8d2 */ if (!fC) goto L_0071e8d2;
L_0071e8c8:; BB(0x0071e8c8);
    /* 0071e8c8: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e8cd: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e8d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e8d1: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e8d2:; BB(0x0071e8d2);
    /* 0071e8d2: movzx eax, byte ptr [ebp + 0x85] */ r_eax = (u32)R8((u32)(r_ebp+0x85u));
    /* 0071e8d9: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e8dc: mov byte ptr [ebp + 0x85], al */ W8((u32)(r_ebp+0x85u), (u8)r_eax);
    /* 0071e8e2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071e8e4: je 0x71e8f0 */ if (fZ) goto L_0071e8f0;
L_0071e8e6:; BB(0x0071e8e6);
    /* 0071e8e6: mov eax, 1 */ r_eax = 0x1u;
    /* 0071e8eb: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e8ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e8ef: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
L_0071e8f0:; BB(0x0071e8f0);
    /* 0071e8f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071e8f2: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071e8f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071e8f6: ret  */ FN_RET(0x0071e70c); r_esp += 4; return;
}

void f_0071e8f8(void) /* sub_71E8F8 */
{
    FN_ENTER(0x0071e8f8);
    /* 0071e8f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e8f9: mov ebx, esp */ r_ebx = r_esp;
    /* 0071e8fb: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0071e8fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e8ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071e900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071e901: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071e904: mov esi, ecx */ r_esi = r_ecx;
    /* 0071e906: mov ebp, dword ptr [ebx + 0xc] */ r_ebp = R32((u32)(r_ebx+0xcu));
    /* 0071e909: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 0071e910: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e915: je 0x71e964 */ if (fZ) goto L_0071e964;
L_0071e917:; BB(0x0071e917);
    /* 0071e917: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e918: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71e91du); f_007b4d18();
    /* 0071e91d: mov edi, eax */ r_edi = r_eax;
    /* 0071e91f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e922: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e924: je 0x71e964 */ if (fZ) goto L_0071e964;
L_0071e926:; BB(0x0071e926);
    /* 0071e926: movzx edx, word ptr [esi + 0x8a] */ r_edx = (u32)R16((u32)(r_esi+0x8au));
    /* 0071e92d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e92e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71e933u); f_0068d5a8();
    /* 0071e933: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e936: je 0x71e94a */ if (fZ) goto L_0071e94a;
L_0071e938:; BB(0x0071e938);
    /* 0071e938: movzx edx, word ptr [esi + 0x8a] */ r_edx = (u32)R16((u32)(r_esi+0x8au));
    /* 0071e93f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e940: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71e945u); f_006944ec();
    /* 0071e945: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071e946: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071e948: je 0x71e964 */ if (fZ) goto L_0071e964;
L_0071e94a:; BB(0x0071e94a);
    /* 0071e94a: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 0071e94d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071e950: fld dword ptr [esi + 0x90] */ FPUSH(R_F32((u32)(r_esi+0x90u)));
    /* 0071e956: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 0071e959: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071e95d: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 0071e960: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0071e964:; BB(0x0071e964);
    /* 0071e964: mov edx, dword ptr [0xa48a54] */ r_edx = R32((u32)(0xa48a54u));
    /* 0071e96a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0071e96d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071e96e: add edx, 0x178 */ {  u32 a = r_edx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071e974: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071e975: call 0x836208 */ r_esp -= 4; W32(r_esp, 0x71e97au); f_00836208();
    /* 0071e97a: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 0071e97e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071e981: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0071e985: fdivr dword ptr [0x970510] */ ST(0) = R_F32((u32)(0x970510u)) / ST(0);
    /* 0071e98b: fld dword ptr [0x97050c] */ FPUSH(R_F32((u32)(0x97050cu)));
    /* 0071e991: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071e994: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071e997: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0071e99a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e99c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071e99e: fsub dword ptr [esi + 0xa4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xa4u));
    /* 0071e9a4: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071e9a6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e9a8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071e9aa: fsub dword ptr [esi + 0xa8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0xa8u));
    /* 0071e9b0: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071e9b3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071e9b5: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0071e9b9: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0071e9bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e9bf: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0071e9c3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071e9c5: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071e9c7: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071e9cd: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071e9d3: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071e9d7: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071e9dc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071e9e1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071e9e5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071e9e9: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e9ed: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e9f1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071e9f5: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e9f7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e9fcu); f_0082ddd8();
    /* 0071e9fc: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071ea00: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071ea04: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071ea06: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ea0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ea0c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71ea11u); f_0082dcbc();
    /* 0071ea11: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0071ea15: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071ea19: fld dword ptr [0x970504] */ FPUSH(R_F32((u32)(0x970504u)));
    /* 0071ea1f: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 0071ea22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071ea24: fchs  */ ST(0) = -ST(0);
    /* 0071ea26: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071ea28: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071ea2a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0071ea2c: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071ea32: fadd dword ptr [esi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x48u));
    /* 0071ea35: fdivr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) / ST(0);
    /* 0071ea39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ea3b: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0071ea3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ea41: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0071ea45: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ea47: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ea4d: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ea53: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ea57: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ea5c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ea61: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ea65: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ea69: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ea6d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ea71: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071ea75: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ea77: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0071ea7b: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071ea81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ea82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ea83: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71ea88u); f_0071f830();
    /* 0071ea88: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ea8c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ea90: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ea92: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ea98: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ea9e: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071eaa2: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071eaa7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071eaac: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071eab0: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071eab4: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071eab8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071eabc: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0071eac0: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0071eac4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71eac9u); f_0082ddd8();
    /* 0071eac9: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eacd: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071ead1: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0071ead5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ead9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71eadeu); f_0082dcbc();
    /* 0071eade: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eae2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071eae6: fld dword ptr [0x970500] */ FPUSH(R_F32((u32)(0x970500u)));
    /* 0071eaec: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071eaf0: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071eaf6: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071eaf9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071eafb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071eafd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071eb01: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071eb03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071eb05: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071eb08: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071eb0b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071eb0d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071eb11: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071eb17: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb19: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071eb1c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071eb1e: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb23: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71eb28u); f_007199a0();
    /* 0071eb28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eb29: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071eb2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb31: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071eb34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb36: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb37: jbe 0x71eb41 */ if ((fC||fZ)) goto L_0071eb41;
L_0071eb39:; BB(0x0071eb39);
    /* 0071eb39: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071eb3c: mov edi, 1 */ r_edi = 0x1u;
L_0071eb41:; BB(0x0071eb41);
    /* 0071eb41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb43: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb48: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71eb4du); f_007199c0();
    /* 0071eb4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eb4e: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071eb51: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071eb57: fadd dword ptr [0x9704fc] */ ST(0) = ST(0) + R_F32((u32)(0x9704fcu));
    /* 0071eb5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb5f: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071eb62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb65: jae 0x71eb6f */ if (!fC) goto L_0071eb6f;
L_0071eb67:; BB(0x0071eb67);
    /* 0071eb67: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071eb6a: mov edi, 1 */ r_edi = 0x1u;
L_0071eb6f:; BB(0x0071eb6f);
    /* 0071eb6f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb71: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb76: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71eb7bu); f_007199b0();
    /* 0071eb7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eb7c: fld dword ptr [0x9704f4] */ FPUSH(R_F32((u32)(0x9704f4u)));
    /* 0071eb82: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb84: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071eb87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb8a: jbe 0x71eb94 */ if ((fC||fZ)) goto L_0071eb94;
L_0071eb8c:; BB(0x0071eb8c);
    /* 0071eb8c: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071eb8f: mov edi, 1 */ r_edi = 0x1u;
L_0071eb94:; BB(0x0071eb94);
    /* 0071eb94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb96: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb9b: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71eba0u); f_007199d0();
    /* 0071eba0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eba1: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071eba4: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ebaa: fadd dword ptr [0x9704f0] */ ST(0) = ST(0) + R_F32((u32)(0x9704f0u));
    /* 0071ebb0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ebb2: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ebb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ebb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ebb8: jae 0x71ebc2 */ if (!fC) goto L_0071ebc2;
L_0071ebba:; BB(0x0071ebba);
    /* 0071ebba: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ebbd: mov edi, 1 */ r_edi = 0x1u;
L_0071ebc2:; BB(0x0071ebc2);
    /* 0071ebc2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ebc4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ebc6: je 0x71ebd6 */ if (fZ) goto L_0071ebd6;
L_0071ebc8:; BB(0x0071ebc8);
    /* 0071ebc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ebca: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ebcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ebce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ebcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ebd0: mov esp, ebx */ r_esp = r_ebx;
    /* 0071ebd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ebd3: ret 8 */ FN_RET(0x0071e8f8); r_esp += 12; return;
L_0071ebd6:; BB(0x0071ebd6);
    /* 0071ebd6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0071ebd9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0071ebdd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe2: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71ebe7u); f_0071534c();
    /* 0071ebe7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ebea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ebec: je 0x71edb9 */ if (fZ) goto L_0071edb9;
L_0071ebf2:; BB(0x0071ebf2);
    /* 0071ebf2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71ebf7u); f_008587a5();
    /* 0071ebf7: fld dword ptr [0x9704e8] */ FPUSH(R_F32((u32)(0x9704e8u)));
    /* 0071ebfd: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0071ec01: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0071ec05: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071ec09: fadd dword ptr [0x9704ec] */ ST(0) = ST(0) + R_F32((u32)(0x9704ecu));
    /* 0071ec0f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ec11: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0071ec15: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071ec19: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0071ec1b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071ec1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ec1f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ec23: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ec28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ec2d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ec31: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ec35: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ec39: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ec3d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071ec41: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071ec45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ec46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ec47: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71ec4cu); f_0071f830();
    /* 0071ec4c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ec50: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ec54: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ec56: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ec5c: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ec62: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ec66: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ec6b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ec70: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ec74: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ec78: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ec7c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ec80: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071ec84: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ec86: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71ec8bu); f_0082ddd8();
    /* 0071ec8b: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071ec8f: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071ec93: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ec97: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ec99: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71ec9eu); f_0082dcbc();
    /* 0071ec9e: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eca2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071eca6: fld dword ptr [0x970500] */ FPUSH(R_F32((u32)(0x970500u)));
    /* 0071ecac: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ecb0: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071ecb6: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071ecb9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071ecbb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071ecbd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071ecc1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071ecc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ecc5: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071ecc8: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071eccb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071eccd: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ecd1: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071ecd7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ecd9: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071ecdc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071ecde: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ece2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ece3: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71ece8u); f_007199a0();
    /* 0071ece8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ece9: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071ecef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ecf1: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071ecf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ecf6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ecf7: jbe 0x71ed01 */ if ((fC||fZ)) goto L_0071ed01;
L_0071ecf9:; BB(0x0071ecf9);
    /* 0071ecf9: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071ecfc: mov edi, 1 */ r_edi = 0x1u;
L_0071ed01:; BB(0x0071ed01);
    /* 0071ed01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed03: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed08: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71ed0du); f_007199c0();
    /* 0071ed0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed0e: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071ed11: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ed17: fadd dword ptr [0x9704fc] */ ST(0) = ST(0) + R_F32((u32)(0x9704fcu));
    /* 0071ed1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed1f: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071ed22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed25: jae 0x71ed2f */ if (!fC) goto L_0071ed2f;
L_0071ed27:; BB(0x0071ed27);
    /* 0071ed27: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071ed2a: mov edi, 1 */ r_edi = 0x1u;
L_0071ed2f:; BB(0x0071ed2f);
    /* 0071ed2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed31: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed36: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71ed3bu); f_007199b0();
    /* 0071ed3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed3c: fld dword ptr [0x9704f4] */ FPUSH(R_F32((u32)(0x9704f4u)));
    /* 0071ed42: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed44: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ed47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed4a: jbe 0x71ed54 */ if ((fC||fZ)) goto L_0071ed54;
L_0071ed4c:; BB(0x0071ed4c);
    /* 0071ed4c: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ed4f: mov edi, 1 */ r_edi = 0x1u;
L_0071ed54:; BB(0x0071ed54);
    /* 0071ed54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed56: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed5b: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71ed60u); f_007199d0();
    /* 0071ed60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed61: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071ed64: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ed6a: fadd dword ptr [0x9704f0] */ ST(0) = ST(0) + R_F32((u32)(0x9704f0u));
    /* 0071ed70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed72: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ed75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed78: jae 0x71ed82 */ if (!fC) goto L_0071ed82;
L_0071ed7a:; BB(0x0071ed7a);
    /* 0071ed7a: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ed7d: mov edi, 1 */ r_edi = 0x1u;
L_0071ed82:; BB(0x0071ed82);
    /* 0071ed82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed84: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ed86: je 0x71ed96 */ if (fZ) goto L_0071ed96;
L_0071ed88:; BB(0x0071ed88);
    /* 0071ed88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ed8a: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ed8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ed8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ed8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ed90: mov esp, ebx */ r_esp = r_ebx;
    /* 0071ed92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ed93: ret 8 */ FN_RET(0x0071e8f8); r_esp += 12; return;
L_0071ed96:; BB(0x0071ed96);
    /* 0071ed96: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed98: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0071ed9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9f: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71eda4u); f_0071534c();
    /* 0071eda4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071eda7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071eda9: je 0x71edb9 */ if (fZ) goto L_0071edb9;
L_0071edab:; BB(0x0071edab);
    /* 0071edab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071edad: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071edb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071edb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071edb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071edb3: mov esp, ebx */ r_esp = r_ebx;
    /* 0071edb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071edb6: ret 8 */ FN_RET(0x0071e8f8); r_esp += 12; return;
L_0071edb9:; BB(0x0071edb9);
    /* 0071edb9: mov eax, 1 */ r_eax = 0x1u;
    /* 0071edbe: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071edc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071edc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071edc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071edc4: mov esp, ebx */ r_esp = r_ebx;
    /* 0071edc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071edc7: ret 8 */ FN_RET(0x0071e8f8); r_esp += 12; return;
}

void f_0071e9e0(void)
{
    FN_ENTER(0x0071e9e0);
    /* 0071e9e0: add byte ptr [ecx - 0x26d7dbbc], cl */ { u32 ad = (u32)(r_ecx+0xd9282444u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0071e9e6: insb byte ptr es:[edi], dx */ UNSUP(0x0071e9e6, "insb byte ptr es:[edi], dx");
    /* 0071e9e7: and al, 0x28 */ {  u32 a = (u8)r_eax; u32 b = 0x28u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0071e9e9: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071e9ed: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071e9f1: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071e9f5: mov ecx, edi */ r_ecx = r_edi;
    /* 0071e9f7: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71e9fcu); f_0082ddd8();
    /* 0071e9fc: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071ea00: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0071ea04: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0071ea06: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ea0a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ea0c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71ea11u); f_0082dcbc();
    /* 0071ea11: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 0071ea15: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0071ea19: fld dword ptr [0x970504] */ FPUSH(R_F32((u32)(0x970504u)));
    /* 0071ea1f: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 0071ea22: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071ea24: fchs  */ ST(0) = -ST(0);
    /* 0071ea26: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071ea28: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071ea2a: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0071ea2c: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071ea32: fadd dword ptr [esi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x48u));
    /* 0071ea35: fdivr dword ptr [esp + 0x18] */ ST(0) = R_F32((u32)(r_esp+0x18u)) / ST(0);
    /* 0071ea39: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ea3b: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 0071ea3f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ea41: fst dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0));
    /* 0071ea45: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ea47: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ea4d: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ea53: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ea57: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ea5c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ea61: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ea65: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ea69: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ea6d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ea71: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071ea75: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ea77: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0071ea7b: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071ea81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ea82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ea83: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71ea88u); f_0071f830();
    /* 0071ea88: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ea8c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ea90: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ea92: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ea98: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ea9e: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071eaa2: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071eaa7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071eaac: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071eab0: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071eab4: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071eab8: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071eabc: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 0071eac0: mov dword ptr [esp + 0x4c], ecx */ W32((u32)(r_esp+0x4cu), r_ecx);
    /* 0071eac4: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71eac9u); f_0082ddd8();
    /* 0071eac9: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eacd: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071ead1: mov ecx, dword ptr [esp + 0x4c] */ r_ecx = R32((u32)(r_esp+0x4cu));
    /* 0071ead5: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ead9: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71eadeu); f_0082dcbc();
    /* 0071eade: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eae2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071eae6: fld dword ptr [0x970500] */ FPUSH(R_F32((u32)(0x970500u)));
    /* 0071eaec: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071eaf0: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071eaf6: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071eaf9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071eafb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071eafd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071eb01: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071eb03: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071eb05: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071eb08: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071eb0b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071eb0d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071eb11: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071eb17: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb19: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071eb1c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071eb1e: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb23: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71eb28u); f_007199a0();
    /* 0071eb28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eb29: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071eb2f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb31: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071eb34: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb36: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb37: jbe 0x71eb41 */ if ((fC||fZ)) goto L_0071eb41;
L_0071eb39:; BB(0x0071eb39);
    /* 0071eb39: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071eb3c: mov edi, 1 */ r_edi = 0x1u;
L_0071eb41:; BB(0x0071eb41);
    /* 0071eb41: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb43: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb48: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71eb4du); f_007199c0();
    /* 0071eb4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eb4e: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071eb51: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071eb57: fadd dword ptr [0x9704fc] */ ST(0) = ST(0) + R_F32((u32)(0x9704fcu));
    /* 0071eb5d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb5f: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071eb62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb65: jae 0x71eb6f */ if (!fC) goto L_0071eb6f;
L_0071eb67:; BB(0x0071eb67);
    /* 0071eb67: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071eb6a: mov edi, 1 */ r_edi = 0x1u;
L_0071eb6f:; BB(0x0071eb6f);
    /* 0071eb6f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb71: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb76: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71eb7bu); f_007199b0();
    /* 0071eb7b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eb7c: fld dword ptr [0x9704f4] */ FPUSH(R_F32((u32)(0x9704f4u)));
    /* 0071eb82: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb84: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071eb87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb8a: jbe 0x71eb94 */ if ((fC||fZ)) goto L_0071eb94;
L_0071eb8c:; BB(0x0071eb8c);
    /* 0071eb8c: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071eb8f: mov edi, 1 */ r_edi = 0x1u;
L_0071eb94:; BB(0x0071eb94);
    /* 0071eb94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb96: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb9b: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71eba0u); f_007199d0();
    /* 0071eba0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eba1: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071eba4: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ebaa: fadd dword ptr [0x9704f0] */ ST(0) = ST(0) + R_F32((u32)(0x9704f0u));
    /* 0071ebb0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ebb2: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ebb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ebb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ebb8: jae 0x71ebc2 */ if (!fC) goto L_0071ebc2;
L_0071ebba:; BB(0x0071ebba);
    /* 0071ebba: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ebbd: mov edi, 1 */ r_edi = 0x1u;
L_0071ebc2:; BB(0x0071ebc2);
    /* 0071ebc2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ebc4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ebc6: je 0x71ebd6 */ if (fZ) goto L_0071ebd6;
L_0071ebc8:; BB(0x0071ebc8);
    /* 0071ebc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ebca: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ebcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ebce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ebcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ebd0: mov esp, ebx */ r_esp = r_ebx;
    /* 0071ebd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ebd3: ret 8 */ FN_RET(0x0071e9e0); r_esp += 12; return;
L_0071ebd6:; BB(0x0071ebd6);
    /* 0071ebd6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0071ebd9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0071ebdd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe2: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71ebe7u); f_0071534c();
    /* 0071ebe7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ebea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ebec: je 0x71edb9 */ if (fZ) goto L_0071edb9;
L_0071ebf2:; BB(0x0071ebf2);
    /* 0071ebf2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71ebf7u); f_008587a5();
    /* 0071ebf7: fld dword ptr [0x9704e8] */ FPUSH(R_F32((u32)(0x9704e8u)));
    /* 0071ebfd: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0071ec01: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0071ec05: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071ec09: fadd dword ptr [0x9704ec] */ ST(0) = ST(0) + R_F32((u32)(0x9704ecu));
    /* 0071ec0f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ec11: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0071ec15: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071ec19: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0071ec1b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071ec1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ec1f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ec23: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ec28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ec2d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ec31: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ec35: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ec39: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ec3d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071ec41: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071ec45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ec46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ec47: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71ec4cu); f_0071f830();
    /* 0071ec4c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ec50: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ec54: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ec56: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ec5c: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ec62: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ec66: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ec6b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ec70: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ec74: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ec78: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ec7c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ec80: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071ec84: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ec86: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71ec8bu); f_0082ddd8();
    /* 0071ec8b: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071ec8f: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071ec93: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ec97: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ec99: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71ec9eu); f_0082dcbc();
    /* 0071ec9e: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eca2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071eca6: fld dword ptr [0x970500] */ FPUSH(R_F32((u32)(0x970500u)));
    /* 0071ecac: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ecb0: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071ecb6: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071ecb9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071ecbb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071ecbd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071ecc1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071ecc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ecc5: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071ecc8: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071eccb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071eccd: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ecd1: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071ecd7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ecd9: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071ecdc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071ecde: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ece2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ece3: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71ece8u); f_007199a0();
    /* 0071ece8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ece9: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071ecef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ecf1: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071ecf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ecf6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ecf7: jbe 0x71ed01 */ if ((fC||fZ)) goto L_0071ed01;
L_0071ecf9:; BB(0x0071ecf9);
    /* 0071ecf9: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071ecfc: mov edi, 1 */ r_edi = 0x1u;
L_0071ed01:; BB(0x0071ed01);
    /* 0071ed01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed03: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed08: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71ed0du); f_007199c0();
    /* 0071ed0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed0e: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071ed11: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ed17: fadd dword ptr [0x9704fc] */ ST(0) = ST(0) + R_F32((u32)(0x9704fcu));
    /* 0071ed1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed1f: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071ed22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed25: jae 0x71ed2f */ if (!fC) goto L_0071ed2f;
L_0071ed27:; BB(0x0071ed27);
    /* 0071ed27: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071ed2a: mov edi, 1 */ r_edi = 0x1u;
L_0071ed2f:; BB(0x0071ed2f);
    /* 0071ed2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed31: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed36: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71ed3bu); f_007199b0();
    /* 0071ed3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed3c: fld dword ptr [0x9704f4] */ FPUSH(R_F32((u32)(0x9704f4u)));
    /* 0071ed42: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed44: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ed47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed4a: jbe 0x71ed54 */ if ((fC||fZ)) goto L_0071ed54;
L_0071ed4c:; BB(0x0071ed4c);
    /* 0071ed4c: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ed4f: mov edi, 1 */ r_edi = 0x1u;
L_0071ed54:; BB(0x0071ed54);
    /* 0071ed54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed56: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed5b: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71ed60u); f_007199d0();
    /* 0071ed60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed61: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071ed64: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ed6a: fadd dword ptr [0x9704f0] */ ST(0) = ST(0) + R_F32((u32)(0x9704f0u));
    /* 0071ed70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed72: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ed75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed78: jae 0x71ed82 */ if (!fC) goto L_0071ed82;
L_0071ed7a:; BB(0x0071ed7a);
    /* 0071ed7a: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ed7d: mov edi, 1 */ r_edi = 0x1u;
L_0071ed82:; BB(0x0071ed82);
    /* 0071ed82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed84: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ed86: je 0x71ed96 */ if (fZ) goto L_0071ed96;
L_0071ed88:; BB(0x0071ed88);
    /* 0071ed88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ed8a: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ed8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ed8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ed8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ed90: mov esp, ebx */ r_esp = r_ebx;
    /* 0071ed92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ed93: ret 8 */ FN_RET(0x0071e9e0); r_esp += 12; return;
L_0071ed96:; BB(0x0071ed96);
    /* 0071ed96: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed98: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0071ed9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9f: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71eda4u); f_0071534c();
    /* 0071eda4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071eda7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071eda9: je 0x71edb9 */ if (fZ) goto L_0071edb9;
L_0071edab:; BB(0x0071edab);
    /* 0071edab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071edad: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071edb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071edb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071edb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071edb3: mov esp, ebx */ r_esp = r_ebx;
    /* 0071edb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071edb6: ret 8 */ FN_RET(0x0071e9e0); r_esp += 12; return;
L_0071edb9:; BB(0x0071edb9);
    /* 0071edb9: mov eax, 1 */ r_eax = 0x1u;
    /* 0071edbe: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071edc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071edc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071edc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071edc4: mov esp, ebx */ r_esp = r_ebx;
    /* 0071edc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071edc7: ret 8 */ FN_RET(0x0071e9e0); r_esp += 12; return;
}

void f_0071eb82(void)
{
    FN_ENTER(0x0071eb82);
    /* 0071eb82: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eb84: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071eb87: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eb89: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eb8a: jbe 0x71eb94 */ if ((fC||fZ)) goto L_0071eb94;
L_0071eb8c:; BB(0x0071eb8c);
    /* 0071eb8c: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071eb8f: mov edi, 1 */ r_edi = 0x1u;
L_0071eb94:; BB(0x0071eb94);
    /* 0071eb94: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eb96: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071eb9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eb9b: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71eba0u); f_007199d0();
    /* 0071eba0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071eba1: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071eba4: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ebaa: fadd dword ptr [0x9704f0] */ ST(0) = ST(0) + R_F32((u32)(0x9704f0u));
    /* 0071ebb0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ebb2: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ebb5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ebb7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ebb8: jae 0x71ebc2 */ if (!fC) goto L_0071ebc2;
L_0071ebba:; BB(0x0071ebba);
    /* 0071ebba: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ebbd: mov edi, 1 */ r_edi = 0x1u;
L_0071ebc2:; BB(0x0071ebc2);
    /* 0071ebc2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ebc4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ebc6: je 0x71ebd6 */ if (fZ) goto L_0071ebd6;
L_0071ebc8:; BB(0x0071ebc8);
    /* 0071ebc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ebca: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ebcd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ebce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ebcf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ebd0: mov esp, ebx */ r_esp = r_ebx;
    /* 0071ebd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ebd3: ret 8 */ FN_RET(0x0071eb82); r_esp += 12; return;
L_0071ebd6:; BB(0x0071ebd6);
    /* 0071ebd6: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0071ebd9: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0071ebdd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ebe2: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71ebe7u); f_0071534c();
    /* 0071ebe7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ebea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ebec: je 0x71edb9 */ if (fZ) goto L_0071edb9;
L_0071ebf2:; BB(0x0071ebf2);
    /* 0071ebf2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71ebf7u); f_008587a5();
    /* 0071ebf7: fld dword ptr [0x9704e8] */ FPUSH(R_F32((u32)(0x9704e8u)));
    /* 0071ebfd: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 0071ec01: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 0071ec05: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071ec09: fadd dword ptr [0x9704ec] */ ST(0) = ST(0) + R_F32((u32)(0x9704ecu));
    /* 0071ec0f: mov ecx, esi */ r_ecx = r_esi;
    /* 0071ec11: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0071ec15: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0071ec19: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0071ec1b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071ec1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ec1f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ec23: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ec28: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ec2d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ec31: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ec35: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ec39: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ec3d: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0071ec41: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071ec45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ec46: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ec47: call 0x71f830 */ r_esp -= 4; W32(r_esp, 0x71ec4cu); f_0071f830();
    /* 0071ec4c: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ec50: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ec54: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0071ec56: fmul qword ptr [0x970328] */ ST(0) = ST(0) * R_F64((u32)(0x970328u));
    /* 0071ec5c: fdiv qword ptr [0x970320] */ ST(0) = ST(0) / R_F64((u32)(0x970320u));
    /* 0071ec62: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0071ec66: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0071ec6b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071ec70: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0071ec74: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0071ec78: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0071ec7c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0071ec80: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0071ec84: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ec86: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x71ec8bu); f_0082ddd8();
    /* 0071ec8b: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071ec8f: fadd dword ptr [esp + 0x18] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x18u));
    /* 0071ec93: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ec97: mov ecx, edi */ r_ecx = r_edi;
    /* 0071ec99: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x71ec9eu); f_0082dcbc();
    /* 0071ec9e: fmul dword ptr [esp + 0x50] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x50u));
    /* 0071eca2: fadd dword ptr [esp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x1cu));
    /* 0071eca6: fld dword ptr [0x970500] */ FPUSH(R_F32((u32)(0x970500u)));
    /* 0071ecac: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ecb0: fadd dword ptr [esi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa4u));
    /* 0071ecb6: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 0071ecb9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071ecbb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071ecbd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071ecc1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071ecc3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071ecc5: fstp dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0)); FPOP();
    /* 0071ecc8: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 0071eccb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071eccd: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 0071ecd1: fadd dword ptr [esi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xa8u));
    /* 0071ecd7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ecd9: fstp dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0)); FPOP();
    /* 0071ecdc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0071ecde: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ece2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ece3: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71ece8u); f_007199a0();
    /* 0071ece8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ece9: fld dword ptr [0x970508] */ FPUSH(R_F32((u32)(0x970508u)));
    /* 0071ecef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ecf1: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071ecf4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ecf6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ecf7: jbe 0x71ed01 */ if ((fC||fZ)) goto L_0071ed01;
L_0071ecf9:; BB(0x0071ecf9);
    /* 0071ecf9: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071ecfc: mov edi, 1 */ r_edi = 0x1u;
L_0071ed01:; BB(0x0071ed01);
    /* 0071ed01: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed03: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed08: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71ed0du); f_007199c0();
    /* 0071ed0d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed0e: fld dword ptr [esi + 0x48] */ FPUSH(R_F32((u32)(r_esi+0x48u)));
    /* 0071ed11: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ed17: fadd dword ptr [0x9704fc] */ ST(0) = ST(0) + R_F32((u32)(0x9704fcu));
    /* 0071ed1d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed1f: fcom dword ptr [ebp] */ fx_compare(ST(0), R_F32((u32)(r_ebp))); 
    /* 0071ed22: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed24: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed25: jae 0x71ed2f */ if (!fC) goto L_0071ed2f;
L_0071ed27:; BB(0x0071ed27);
    /* 0071ed27: fst dword ptr [ebp] */ W_F32((u32)(r_ebp), ST(0));
    /* 0071ed2a: mov edi, 1 */ r_edi = 0x1u;
L_0071ed2f:; BB(0x0071ed2f);
    /* 0071ed2f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed31: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed36: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71ed3bu); f_007199b0();
    /* 0071ed3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed3c: fld dword ptr [0x9704f4] */ FPUSH(R_F32((u32)(0x9704f4u)));
    /* 0071ed42: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed44: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ed47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed4a: jbe 0x71ed54 */ if ((fC||fZ)) goto L_0071ed54;
L_0071ed4c:; BB(0x0071ed4c);
    /* 0071ed4c: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ed4f: mov edi, 1 */ r_edi = 0x1u;
L_0071ed54:; BB(0x0071ed54);
    /* 0071ed54: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed56: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0071ed5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed5b: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71ed60u); f_007199d0();
    /* 0071ed60: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ed61: fld dword ptr [esi + 0x4c] */ FPUSH(R_F32((u32)(r_esi+0x4cu)));
    /* 0071ed64: fmul dword ptr [0x9704f8] */ ST(0) = ST(0) * R_F32((u32)(0x9704f8u));
    /* 0071ed6a: fadd dword ptr [0x9704f0] */ ST(0) = ST(0) + R_F32((u32)(0x9704f0u));
    /* 0071ed70: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ed72: fcom dword ptr [ebp + 4] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x4u))); 
    /* 0071ed75: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071ed77: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071ed78: jae 0x71ed82 */ if (!fC) goto L_0071ed82;
L_0071ed7a:; BB(0x0071ed7a);
    /* 0071ed7a: fst dword ptr [ebp + 4] */ W_F32((u32)(r_ebp+0x4u), ST(0));
    /* 0071ed7d: mov edi, 1 */ r_edi = 0x1u;
L_0071ed82:; BB(0x0071ed82);
    /* 0071ed82: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071ed84: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ed86: je 0x71ed96 */ if (fZ) goto L_0071ed96;
L_0071ed88:; BB(0x0071ed88);
    /* 0071ed88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ed8a: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ed8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071ed8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071ed8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ed90: mov esp, ebx */ r_esp = r_ebx;
    /* 0071ed92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ed93: ret 8 */ FN_RET(0x0071eb82); r_esp += 12; return;
L_0071ed96:; BB(0x0071ed96);
    /* 0071ed96: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed98: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 0071ed9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ed9f: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71eda4u); f_0071534c();
    /* 0071eda4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071eda7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071eda9: je 0x71edb9 */ if (fZ) goto L_0071edb9;
L_0071edab:; BB(0x0071edab);
    /* 0071edab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071edad: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071edb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071edb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071edb2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071edb3: mov esp, ebx */ r_esp = r_ebx;
    /* 0071edb5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071edb6: ret 8 */ FN_RET(0x0071eb82); r_esp += 12; return;
L_0071edb9:; BB(0x0071edb9);
    /* 0071edb9: mov eax, 1 */ r_eax = 0x1u;
    /* 0071edbe: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071edc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071edc2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071edc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071edc4: mov esp, ebx */ r_esp = r_ebx;
    /* 0071edc6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071edc7: ret 8 */ FN_RET(0x0071eb82); r_esp += 12; return;
}

void f_0071edcc(void) /* sub_71EDCC */
{
    FN_ENTER(0x0071edcc);
    /* 0071edcc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071edcd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071edce: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071edd1: mov edi, ecx */ r_edi = r_ecx;
    /* 0071edd3: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 0071edd7: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071eddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eddc: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71ede1u); f_007199a0();
    /* 0071ede1: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071ede5: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071ede9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071edea: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71edefu); f_007199c0();
    /* 0071edef: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071edf3: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071edf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071edf8: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71edfdu); f_007199a0();
    /* 0071edfd: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071ee01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ee04: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71ee09u); f_008587a5();
    /* 0071ee09: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0071ee0d: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 0071ee10: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 0071ee14: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ee18: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0071ee1b: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071ee1e: fdiv dword ptr [0x9704e4] */ ST(0) = ST(0) / R_F32((u32)(0x9704e4u));
    /* 0071ee24: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071ee26: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ee28: fstp dword ptr [ebx] */ W_F32((u32)(r_ebx), ST(0)); FPOP();
    /* 0071ee2a: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071ee2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee2f: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71ee34u); f_007199b0();
    /* 0071ee34: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 0071ee38: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071ee3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee3d: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71ee42u); f_007199d0();
    /* 0071ee42: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0071ee46: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071ee4a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee4b: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71ee50u); f_007199b0();
    /* 0071ee50: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071ee54: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ee57: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x71ee5cu); f_008587a5();
    /* 0071ee5c: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 0071ee60: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 0071ee63: fsub dword ptr [esp + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x10u));
    /* 0071ee67: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 0071ee6b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071ee6f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0071ee73: fdiv dword ptr [0x9704e4] */ ST(0) = ST(0) / R_F32((u32)(0x9704e4u));
    /* 0071ee79: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071ee7b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071ee7f: fstp dword ptr [ebx + 4] */ W_F32((u32)(r_ebx+0x4u), ST(0)); FPOP();
    /* 0071ee82: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0071ee85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee87: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071ee88: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71ee8du); f_0071534c();
    /* 0071ee8d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071ee90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ee92: je 0x71ee9e */ if (fZ) goto L_0071ee9e;
L_0071ee94:; BB(0x0071ee94);
    /* 0071ee94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071ee96: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071ee99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071ee9a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071ee9b: ret 8 */ FN_RET(0x0071edcc); r_esp += 12; return;
L_0071ee9e:; BB(0x0071ee9e);
    /* 0071ee9e: mov eax, 1 */ r_eax = 0x1u;
    /* 0071eea3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071eea6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071eea7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071eea8: ret 8 */ FN_RET(0x0071edcc); r_esp += 12; return;
}

void f_0071eeac(void) /* sub_71EEAC */
{
    FN_ENTER(0x0071eeac);
    /* 0071eeac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071eead: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071eeae: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071eeaf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071eeb0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071eeb3: mov edi, ecx */ r_edi = r_ecx;
    /* 0071eeb5: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 0071eebb: fld dword ptr [edi + 0xa8] */ FPUSH(R_F32((u32)(r_edi+0xa8u)));
    /* 0071eec1: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 0071eec5: movzx eax, word ptr [edi + 0x8a] */ r_eax = (u32)R16((u32)(r_edi+0x8au));
    /* 0071eecc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071eece: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 0071eed2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071eed4: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0071eed8: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071eedd: lea ebp, [edi + 0xa4] */ r_ebp = (u32)(r_edi+0xa4u);
    /* 0071eee3: je 0x71efc3 */ if (fZ) goto L_0071efc3;
L_0071eee9:; BB(0x0071eee9);
    /* 0071eee9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071eeeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071eeec: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x71eef1u); f_007b4d18();
    /* 0071eef1: mov ebx, eax */ r_ebx = r_eax;
    /* 0071eef3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071eef6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071eef8: je 0x71f0a3 */ if (fZ) goto L_0071f0a3;
L_0071eefe:; BB(0x0071eefe);
    /* 0071eefe: movzx edx, word ptr [edi + 0x8a] */ r_edx = (u32)R16((u32)(r_edi+0x8au));
    /* 0071ef05: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ef06: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71ef0bu); f_0068d5a8();
    /* 0071ef0b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ef0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ef0e: je 0x71ef26 */ if (fZ) goto L_0071ef26;
L_0071ef10:; BB(0x0071ef10);
    /* 0071ef10: movzx edx, word ptr [edi + 0x8a] */ r_edx = (u32)R16((u32)(r_edi+0x8au));
    /* 0071ef17: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071ef18: call 0x6944ec */ r_esp -= 4; W32(r_esp, 0x71ef1du); f_006944ec();
    /* 0071ef1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071ef1e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ef20: je 0x71f08d */ if (fZ) goto L_0071f08d;
L_0071ef26:; BB(0x0071ef26);
    /* 0071ef26: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 0071ef29: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0071ef2c: fld dword ptr [edi + 0x90] */ FPUSH(R_F32((u32)(r_edi+0x90u)));
    /* 0071ef32: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0071ef35: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071ef37: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071ef3b: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 0071ef3e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071ef42: je 0x71f098 */ if (fZ) goto L_0071f098;
L_0071ef48:; BB(0x0071ef48);
    /* 0071ef48: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x71ef4du); f_0082d7b0();
    /* 0071ef4d: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x71ef52u); f_004d2968();
    /* 0071ef52: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071ef53: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0071ef57: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071ef59: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x71ef5eu); f_0082f09c();
    /* 0071ef5e: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x71ef63u); f_004d28a4();
    /* 0071ef63: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x71ef68u); f_0082da80();
    /* 0071ef68: mov eax, dword ptr [0xaf0350] */ r_eax = R32((u32)(0xaf0350u));
    /* 0071ef6d: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0071ef6f: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0071ef73: fild dword ptr [esp + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_esp+0xcu)));
    /* 0071ef77: fsubr dword ptr [0xa48828] */ ST(0) = R_F32((u32)(0xa48828u)) - ST(0);
    /* 0071ef7d: fadd dword ptr [edi + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xa4u));
    /* 0071ef83: fst dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0));
    /* 0071ef89: mov edx, dword ptr [0xaf0354] */ r_edx = R32((u32)(0xaf0354u));
    /* 0071ef8f: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071ef91: fld dword ptr [0xaf0358] */ FPUSH(R_F32((u32)(0xaf0358u)));
    /* 0071ef97: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0071ef99: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0071ef9d: fild dword ptr [esp + 0x14] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x14u)));
    /* 0071efa1: fsubr dword ptr [0xa4882c] */ ST(0) = R_F32((u32)(0xa4882cu)) - ST(0);
    /* 0071efa7: fadd dword ptr [edi + 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0xa8u));
    /* 0071efad: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071efaf: fst dword ptr [edi + 0xa4] */ W_F32((u32)(r_edi+0xa4u), ST(0));
    /* 0071efb5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071efb7: fdiv dword ptr [0xaf035c] */ ST(0) = ST(0) / R_F32((u32)(0xaf035cu));
    /* 0071efbd: fstp dword ptr [edi + 0xa8] */ W_F32((u32)(r_edi+0xa8u), ST(0)); FPOP();
L_0071efc3:; BB(0x0071efc3);
    /* 0071efc3: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 0071efc7: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0071efc9: fsub dword ptr [esp + 0x20] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x20u));
    /* 0071efcd: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 0071efcf: fld dword ptr [edi + 0xa8] */ FPUSH(R_F32((u32)(r_edi+0xa8u)));
    /* 0071efd5: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 0071efd8: fsub dword ptr [esp + 0x1c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x1cu));
    /* 0071efdc: fstp dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0)); FPOP();
    /* 0071efdf: movsx edx, word ptr [edi + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071efe3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071efe4: call 0x7199a0 */ r_esp -= 4; W32(r_esp, 0x71efe9u); f_007199a0();
    /* 0071efe9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071efea: fld dword ptr [0x9704e0] */ FPUSH(R_F32((u32)(0x9704e0u)));
    /* 0071eff0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071eff2: fcom dword ptr [esi] */ fx_compare(ST(0), R_F32((u32)(r_esi))); 
    /* 0071eff4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071eff6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071eff7: jbe 0x71effb */ if ((fC||fZ)) goto L_0071effb;
L_0071eff9:; BB(0x0071eff9);
    /* 0071eff9: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
L_0071effb:; BB(0x0071effb);
    /* 0071effb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071effd: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f002: call 0x7199c0 */ r_esp -= 4; W32(r_esp, 0x71f007u); f_007199c0();
    /* 0071f007: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f008: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071f00b: fmul dword ptr [0x9704d8] */ ST(0) = ST(0) * R_F32((u32)(0x9704d8u));
    /* 0071f011: fadd dword ptr [0x9704dc] */ ST(0) = ST(0) + R_F32((u32)(0x9704dcu));
    /* 0071f017: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f019: fcom dword ptr [esi] */ fx_compare(ST(0), R_F32((u32)(r_esi))); 
    /* 0071f01b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f01d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f01e: jae 0x71f022 */ if (!fC) goto L_0071f022;
L_0071f020:; BB(0x0071f020);
    /* 0071f020: fst dword ptr [esi] */ W_F32((u32)(r_esi), ST(0));
L_0071f022:; BB(0x0071f022);
    /* 0071f022: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f024: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f028: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f029: call 0x7199b0 */ r_esp -= 4; W32(r_esp, 0x71f02eu); f_007199b0();
    /* 0071f02e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f02f: fld dword ptr [0x9704d4] */ FPUSH(R_F32((u32)(0x9704d4u)));
    /* 0071f035: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f037: fcom dword ptr [esi + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x4u))); 
    /* 0071f03a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f03c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f03d: jbe 0x71f042 */ if ((fC||fZ)) goto L_0071f042;
L_0071f03f:; BB(0x0071f03f);
    /* 0071f03f: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
L_0071f042:; BB(0x0071f042);
    /* 0071f042: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f044: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 0071f048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f049: call 0x7199d0 */ r_esp -= 4; W32(r_esp, 0x71f04eu); f_007199d0();
    /* 0071f04e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071f04f: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 0071f052: fmul dword ptr [0x9704d8] */ ST(0) = ST(0) * R_F32((u32)(0x9704d8u));
    /* 0071f058: fadd dword ptr [0x9704d0] */ ST(0) = ST(0) + R_F32((u32)(0x9704d0u));
    /* 0071f05e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071f060: fcom dword ptr [esi + 4] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x4u))); 
    /* 0071f063: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071f065: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071f066: jae 0x71f06b */ if (!fC) goto L_0071f06b;
L_0071f068:; BB(0x0071f068);
    /* 0071f068: fst dword ptr [esi + 4] */ W_F32((u32)(r_esi+0x4u), ST(0));
L_0071f06b:; BB(0x0071f06b);
    /* 0071f06b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071f06d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071f06f: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0071f072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071f073: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f074: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071f075: call 0x71534c */ r_esp -= 4; W32(r_esp, 0x71f07au); f_0071534c();
    /* 0071f07a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0071f07d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071f07f: je 0x71f0ae */ if (fZ) goto L_0071f0ae;
L_0071f081:; BB(0x0071f081);
    /* 0071f081: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071f083: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f086: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f087: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f088: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f089: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f08a: ret 8 */ FN_RET(0x0071eeac); r_esp += 12; return;
L_0071f08d:; BB(0x0071f08d);
    /* 0071f08d: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 0071f093: jmp 0x71efc3 */ goto L_0071efc3;
L_0071f098:; BB(0x0071f098);
    /* 0071f098: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 0071f09e: jmp 0x71efc3 */ goto L_0071efc3;
L_0071f0a3:; BB(0x0071f0a3);
    /* 0071f0a3: fld dword ptr [edi + 0xa4] */ FPUSH(R_F32((u32)(r_edi+0xa4u)));
    /* 0071f0a9: jmp 0x71efc3 */ goto L_0071efc3;
L_0071f0ae:; BB(0x0071f0ae);
    /* 0071f0ae: mov eax, 1 */ r_eax = 0x1u;
    /* 0071f0b3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071f0b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071f0b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071f0b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071f0b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071f0ba: ret 8 */ FN_RET(0x0071eeac); r_esp += 12; return;
}

