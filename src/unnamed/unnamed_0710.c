#include "protos.h"

void f_00710000(void)
{
    FN_ENTER(0x00710000);
    /* 00710000: adc ebx, dword ptr [edi - 0x32eb7500] */ { u32 c = fC; u32 a = r_ebx; u32 b = R32((u32)(r_edi+0xcd148b00u)); u32 r = (a + b + c) & 0xffffffffu; r_ebx = r; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00710006: adc byte ptr [ebx], 0x9f */ { u32 ad = (u32)(r_ebx); u32 c = fC; u32 a = R8(ad); u32 b = 0x9fu; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 00710009: add byte ptr [ecx + 0x4d91c50], cl */ { u32 ad = (u32)(r_ecx+0x4d91c50u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fC = (r < a); }
    /* 0071000f: int 0x84 */ UNSUP(0x0071000f, "int 0x84");
    /* 00710011: adc ebx, dword ptr [edi - 0x67fa2700] */ { u32 c = fC; u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x9805d900u)); u32 r = (a + b + c) & 0xffffffffu; r_ebx = r; fC = (unsigned)((((u64)a + b + c) >> 32) & 1); }
    /* 00710017: cmc  */ fC = !fC;
    /* 00710018: xchg esi, eax */ { u32 x = r_esi; u32 y = r_eax; r_esi = y; r_eax = x; }
    /* 00710019: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0071001b: ret 0x5d9 */ FN_RET(0x00710000); r_esp += 1501; return;
}

void f_0071006e(void)
{
    FN_ENTER(0x0071006e);
    goto L_0071006e;
L_00710014:; BB(0x00710014);
    /* 00710014: fld dword ptr [0x96f598] */ FPUSH(R_F32((u32)(0x96f598u)));
    /* 0071001a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071001c: fld dword ptr [0x96f594] */ FPUSH(R_F32((u32)(0x96f594u)));
    /* 00710022: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00710024: fld dword ptr [0x96f590] */ FPUSH(R_F32((u32)(0x96f590u)));
    /* 0071002a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071002c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071002e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00710030: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00710032: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710034: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00710037: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710039: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0071003c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0071003f: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00710042: ret  */ FN_RET(0x0071006e); r_esp += 4; return;
L_0071006e:; BB(0x0071006e);
    /* 0071006e: adc bl, byte ptr [edi - 0x385e1500] */ { u32 c = fC; u32 a = (u8)r_ebx; u32 b = R8((u32)(r_edi+0xc7a1eb00u)); u32 r = (a + b + c) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00710074: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00710075: xor al, 6 */ {  u32 a = (u8)r_eax; u32 b = 0x6u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00710077: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00710079: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0071007b: mov bh, 0xd1 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0xd1u) & 0xffu) << 8);
    /* 0071007d: fld dword ptr [edx*8 + 0x9f15e8] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15e8u)));
    /* 00710084: fld dword ptr [edx*8 + 0x9f15ec] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15ecu)));
    /* 0071008b: jmp 0x710014 */ goto L_00710014;
}

void f_00710070(void)
{
    FN_ENTER(0x00710070);
    goto L_00710070;
L_00710014:; BB(0x00710014);
    /* 00710014: fld dword ptr [0x96f598] */ FPUSH(R_F32((u32)(0x96f598u)));
    /* 0071001a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071001c: fld dword ptr [0x96f594] */ FPUSH(R_F32((u32)(0x96f594u)));
    /* 00710022: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00710024: fld dword ptr [0x96f590] */ FPUSH(R_F32((u32)(0x96f590u)));
    /* 0071002a: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071002c: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071002e: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00710030: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00710032: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710034: fstp dword ptr [eax + 0x1c] */ W_F32((u32)(r_eax+0x1cu), ST(0)); FPOP();
    /* 00710037: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710039: fstp dword ptr [eax + 0x20] */ W_F32((u32)(r_eax+0x20u), ST(0)); FPOP();
    /* 0071003c: fstp dword ptr [eax + 0x24] */ W_F32((u32)(r_eax+0x24u), ST(0)); FPOP();
    /* 0071003f: fstp dword ptr [eax + 0x28] */ W_F32((u32)(r_eax+0x28u), ST(0)); FPOP();
    /* 00710042: ret  */ FN_RET(0x00710070); r_esp += 4; return;
L_00710070:; BB(0x00710070);
    /* 00710070: add bl, ch */ {  u32 a = (u8)r_ebx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00710072: mov eax, dword ptr [0x63440c7] */ r_eax = R32((u32)(0x63440c7u));
    /* 00710077: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00710079: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 0071007b: mov bh, 0xd1 */ r_ebx = (r_ebx & 0xffff00ffu) | (((0xd1u) & 0xffu) << 8);
    /* 0071007d: fld dword ptr [edx*8 + 0x9f15e8] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15e8u)));
    /* 00710084: fld dword ptr [edx*8 + 0x9f15ec] */ FPUSH(R_F32((u32)(r_edx*8+0x9f15ecu)));
    /* 0071008b: jmp 0x710014 */ goto L_00710014;
}

void f_007100a8(void) /* sub_7100A8 */
{
    FN_ENTER(0x007100a8);
    /* 007100a8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 007100ac: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007100b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007100b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007100b2: mov edi, edx */ r_edi = r_edx;
    /* 007100b4: mov ebx, eax */ r_ebx = r_eax;
    /* 007100b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007100b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007100b9: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7100beu); f_007be19c();
    /* 007100be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007100c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007100c3: je 0x7100d2 */ if (fZ) goto L_007100d2;
L_007100c5:; BB(0x007100c5);
    /* 007100c5: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 007100c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007100c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007100ca: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7100cfu); f_007be17c();
    /* 007100cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007100d2:; BB(0x007100d2);
    /* 007100d2: mov dword ptr [ebx + 8], 0x42b60000 */ W32((u32)(r_ebx+0x8u), 0x42b60000u);
    /* 007100d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007100db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007100dd: push 0x42380000 */ { u32 v = 0x42380000u; r_esp -= 4; W32(r_esp, v); }
    /* 007100e2: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7100e7u); f_0072e7e4();
    /* 007100e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007100e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007100e9: ret  */ FN_RET(0x007100a8); r_esp += 4; return;
}

void f_007100b0(void) /* sub_7100B0 */
{
    FN_ENTER(0x007100b0);
    /* 007100b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007100b1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007100b2: mov edi, edx */ r_edi = r_edx;
    /* 007100b4: mov ebx, eax */ r_ebx = r_eax;
    /* 007100b6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007100b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007100b9: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x7100beu); f_007be19c();
    /* 007100be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007100c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007100c3: je 0x7100d2 */ if (fZ) goto L_007100d2;
L_007100c5:; BB(0x007100c5);
    /* 007100c5: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 007100c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007100c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007100ca: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x7100cfu); f_007be17c();
    /* 007100cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007100d2:; BB(0x007100d2);
    /* 007100d2: mov dword ptr [ebx + 8], 0x42b60000 */ W32((u32)(r_ebx+0x8u), 0x42b60000u);
    /* 007100d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007100db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007100dd: push 0x42380000 */ { u32 v = 0x42380000u; r_esp -= 4; W32(r_esp, v); }
    /* 007100e2: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x7100e7u); f_0072e7e4();
    /* 007100e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007100e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007100e9: ret  */ FN_RET(0x007100b0); r_esp += 4; return;
}

void f_007100ec(void) /* sub_7100EC */
{
    FN_ENTER(0x007100ec);
    /* 007100ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007100ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007100ee: mov esi, ecx */ r_esi = r_ecx;
    /* 007100f0: lea eax, [esi + 0x74] */ r_eax = (u32)(r_esi+0x74u);
    /* 007100f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007100f4: mov ecx, esi */ r_ecx = r_esi;
    /* 007100f6: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x7100fbu); f_00712658();
    /* 007100fb: mov ebp, eax */ r_ebp = r_eax;
    /* 007100fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007100fe: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00710101: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00710102: mov ecx, esi */ r_ecx = r_esi;
    /* 00710104: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x710109u); f_0072a648();
    /* 00710109: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071010a: mov ecx, esi */ r_ecx = r_esi;
    /* 0071010c: call 0x710114 */ r_esp -= 4; W32(r_esp, 0x710111u); f_00710114();
    /* 00710111: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710112: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00710113: ret  */ FN_RET(0x007100ec); r_esp += 4; return;
}

void f_00710114(void) /* sub_710114 */
{
    FN_ENTER(0x00710114);
    /* 00710114: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00710115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00710116: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710119: mov edi, ecx */ r_edi = r_ecx;
    /* 0071011b: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 0071011f: mov ecx, edi */ r_ecx = r_edi;
    /* 00710121: call 0x710c94 */ r_esp -= 4; W32(r_esp, 0x710126u); f_00710c94();
    /* 00710126: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00710128: fld dword ptr [0x96f580] */ FPUSH(R_F32((u32)(0x96f580u)));
    /* 0071012e: fdiv dword ptr [edi + 0x54] */ ST(0) = ST(0) / R_F32((u32)(r_edi+0x54u));
    /* 00710131: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 00710135: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0071013a: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x71013fu); f_0082bb30();
    /* 0071013f: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00710145: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x71014au); f_00829cc8();
    /* 0071014a: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 0071014d: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00710152: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x710157u); f_0082bb60();
    /* 00710157: fld dword ptr [0x96f57c] */ FPUSH(R_F32((u32)(0x96f57cu)));
    /* 0071015d: fld dword ptr [0x96f578] */ FPUSH(R_F32((u32)(0x96f578u)));
    /* 00710163: lea edi, [esp] */ r_edi = (u32)(r_esp);
    /* 00710166: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00710168: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0071016b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071016d: fadd dword ptr [esp] */ ST(0) = ST(0) + R_F32((u32)(r_esp));
    /* 00710170: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00710173: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00710177: mov ecx, esi */ r_ecx = r_esi;
    /* 00710179: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0071017d: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 00710181: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00710185: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0071018d: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00710195: mov dword ptr [esp + 0x18], 0x3f160000 */ W32((u32)(r_esp+0x18u), 0x3f160000u);
    /* 0071019d: mov dword ptr [esp + 0x1c], 0x3ed60000 */ W32((u32)(r_esp+0x1cu), 0x3ed60000u);
    /* 007101a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007101a6: call 0x71bbb4 */ r_esp -= 4; W32(r_esp, 0x7101abu); f_0071bbb4();
    /* 007101ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007101ac: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 007101b0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007101b3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 007101b7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7101bcu); f_0082b440();
    /* 007101bc: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7101c1u); f_004ac444();
    /* 007101c1: lea edx, [esi + 0x10] */ r_edx = (u32)(r_esi+0x10u);
    /* 007101c4: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 007101c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007101c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007101c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007101ca: call 0x712914 */ r_esp -= 4; W32(r_esp, 0x7101cfu); f_00712914();
    /* 007101cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007101d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007101d4: je 0x7101f2 */ if (fZ) goto L_007101f2;
L_007101d6:; BB(0x007101d6);
    /* 007101d6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007101d8: call 0x712964 */ r_esp -= 4; W32(r_esp, 0x7101ddu); f_00712964();
    /* 007101dd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 007101e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007101e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007101e3: call 0x7129a8 */ r_esp -= 4; W32(r_esp, 0x7101e8u); f_007129a8();
    /* 007101e8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007101ea: call 0x712bc0 */ r_esp -= 4; W32(r_esp, 0x7101efu); f_00712bc0();
    /* 007101ef: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007101f2:; BB(0x007101f2);
    /* 007101f2: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007101f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007101f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007101f7: ret 4 */ FN_RET(0x00710114); r_esp += 8; return;
}

void f_007101fc(void) /* sub_7101FC */
{
    FN_ENTER(0x007101fc);
    /* 007101fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007101fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007101fe: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710201: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00710203: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00710207: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00710209: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x71020eu); f_00712480();
    /* 0071020e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710210: je 0x71027d */ if (fZ) goto L_0071027d;
L_00710212:; BB(0x00710212);
    /* 00710212: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710215: je 0x71023b */ if (fZ) goto L_0071023b;
L_00710217:; BB(0x00710217);
    /* 00710217: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071021a: jne 0x710229 */ if (!fZ) goto L_00710229;
L_0071021c:; BB(0x0071021c);
    /* 0071021c: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0071021f: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00710222: mov eax, 2 */ r_eax = 0x2u;
    /* 00710227: jmp 0x710242 */ goto L_00710242;
L_00710229:; BB(0x00710229);
    /* 00710229: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071022c: jne 0x71027d */ if (!fZ) goto L_0071027d;
L_0071022e:; BB(0x0071022e);
    /* 0071022e: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 00710231: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 00710234: mov eax, 1 */ r_eax = 0x1u;
    /* 00710239: jmp 0x710242 */ goto L_00710242;
L_0071023b:; BB(0x0071023b);
    /* 0071023b: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 0071023e: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00710240: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00710242:; BB(0x00710242);
    /* 00710242: fld dword ptr [0x96f568] */ FPUSH(R_F32((u32)(0x96f568u)));
    /* 00710248: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 0071024b: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0071024e: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 00710251: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00710253: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00710255: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 00710258: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 0071025b: fld dword ptr [edx + 0x14] */ FPUSH(R_F32((u32)(r_edx+0x14u)));
    /* 0071025e: movsx ebp, word ptr [ebp + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebp+0x20u));
    /* 00710262: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00710264: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710266: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00710269: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071026b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0071026f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00710272: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710273: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710274: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00710275: call 0x71c3e8 */ r_esp -= 4; W32(r_esp, 0x71027au); f_0071c3e8();
    /* 0071027a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0071027d:; BB(0x0071027d);
    /* 0071027d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710280: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710281: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00710282: ret 4 */ FN_RET(0x007101fc); r_esp += 8; return;
}

void f_00710288(void) /* sub_710288 */
{
    FN_ENTER(0x00710288);
    /* 00710288: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00710289: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071028a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071028b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071028c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00710290: movzx edi, word ptr [esp + 0x1c] */ r_edi = (u32)R16((u32)(r_esp+0x1cu));
    /* 00710295: movzx esi, word ptr [esp + 0x20] */ r_esi = (u32)R16((u32)(r_esp+0x20u));
    /* 0071029a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071029c: je 0x7104a2 */ if (fZ) goto L_007104a2;
L_007102a2:; BB(0x007102a2);
    /* 007102a2: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102a5: je 0x710488 */ if (fZ) goto L_00710488;
L_007102ab:; BB(0x007102ab);
    /* 007102ab: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102ae: je 0x710464 */ if (fZ) goto L_00710464;
L_007102b4:; BB(0x007102b4);
    /* 007102b4: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102b7: je 0x71031f */ if (fZ) goto L_0071031f;
L_007102b9:; BB(0x007102b9);
    /* 007102b9: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102bc: jne 0x7102df */ if (!fZ) goto L_007102df;
L_007102be:; BB(0x007102be);
    /* 007102be: fld dword ptr [esi*8 + 0x9f1600] */ FPUSH(R_F32((u32)(r_esi*8+0x9f1600u)));
    /* 007102c5: mov eax, dword ptr [esi*8 + 0x9f1600] */ r_eax = R32((u32)(r_esi*8+0x9f1600u));
    /* 007102cc: mov dword ptr [edx + 0x34], 5 */ W32((u32)(r_edx+0x34u), 0x5u);
    /* 007102d3: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 007102d6: fld dword ptr [esi*8 + 0x9f1604] */ FPUSH(R_F32((u32)(r_esi*8+0x9f1604u)));
    /* 007102dd: jmp 0x71034c */ goto L_0071034c;
L_007102df:; BB(0x007102df);
    /* 007102df: cmp edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102e2: jne 0x710317 */ if (!fZ) goto L_00710317;
L_007102e4:; BB(0x007102e4);
    /* 007102e4: cmp esi, 7 */ {  u32 a = r_esi; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102e7: je 0x71043a */ if (fZ) goto L_0071043a;
L_007102ed:; BB(0x007102ed);
    /* 007102ed: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007102f0: je 0x71043a */ if (fZ) goto L_0071043a;
L_007102f6:; BB(0x007102f6);
    /* 007102f6: mov dword ptr [edx + 0x34], 6 */ W32((u32)(r_edx+0x34u), 0x6u);
L_007102fd:; BB(0x007102fd);
    /* 007102fd: fld dword ptr [esi*8 + 0x9f1420] */ FPUSH(R_F32((u32)(r_esi*8+0x9f1420u)));
    /* 00710304: mov eax, dword ptr [esi*8 + 0x9f1420] */ r_eax = R32((u32)(r_esi*8+0x9f1420u));
    /* 0071030b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0071030e: fld dword ptr [esi*8 + 0x9f1424] */ FPUSH(R_F32((u32)(r_esi*8+0x9f1424u)));
    /* 00710315: jmp 0x71034c */ goto L_0071034c;
L_00710317:; BB(0x00710317);
    /* 00710317: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0071031a: fld dword ptr [edx + 0x20] */ FPUSH(R_F32((u32)(r_edx+0x20u)));
    /* 0071031d: jmp 0x71034c */ goto L_0071034c;
L_0071031f:; BB(0x0071031f);
    /* 0071031f: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00710322: jl 0x71032d */ if ((fS!=fO)) goto L_0071032d;
L_00710324:; BB(0x00710324);
    /* 00710324: mov dword ptr [edx + 0x34], 7 */ W32((u32)(r_edx+0x34u), 0x7u);
    /* 0071032b: jmp 0x710334 */ goto L_00710334;
L_0071032d:; BB(0x0071032d);
    /* 0071032d: mov dword ptr [edx + 0x34], 6 */ W32((u32)(r_edx+0x34u), 0x6u);
L_00710334:; BB(0x00710334);
    /* 00710334: fld dword ptr [esi*8 + 0x9f1380] */ FPUSH(R_F32((u32)(r_esi*8+0x9f1380u)));
    /* 0071033b: mov eax, dword ptr [esi*8 + 0x9f1380] */ r_eax = R32((u32)(r_esi*8+0x9f1380u));
    /* 00710342: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00710345: fld dword ptr [esi*8 + 0x9f1384] */ FPUSH(R_F32((u32)(r_esi*8+0x9f1384u)));
L_0071034c:; BB(0x0071034c);
    /* 0071034c: fld dword ptr [0x96f55c] */ FPUSH(R_F32((u32)(0x96f55cu)));
    /* 00710352: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00710354: fld dword ptr [0x96f558] */ FPUSH(R_F32((u32)(0x96f558u)));
    /* 0071035a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071035c: fld dword ptr [0x96f554] */ FPUSH(R_F32((u32)(0x96f554u)));
    /* 00710362: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00710364: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00710368: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0071036a: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071036c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071036e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710370: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00710373: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710375: fstp dword ptr [edx + 0x20] */ W_F32((u32)(r_edx+0x20u), ST(0)); FPOP();
    /* 00710378: fstp dword ptr [edx + 0x24] */ W_F32((u32)(r_edx+0x24u), ST(0)); FPOP();
    /* 0071037b: fstp dword ptr [edx + 0x28] */ W_F32((u32)(r_edx+0x28u), ST(0)); FPOP();
    /* 0071037e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710380: je 0x710435 */ if (fZ) goto L_00710435;
L_00710386:; BB(0x00710386);
    /* 00710386: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071038a: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0071038f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x710394u); f_0068d5a8();
    /* 00710394: mov ebp, eax */ r_ebp = r_eax;
    /* 00710396: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710399: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071039b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071039d: call 0x6893f0 */ r_esp -= 4; W32(r_esp, 0x7103a2u); f_006893f0();
    /* 007103a2: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007103a4: je 0x710435 */ if (fZ) goto L_00710435;
L_007103aa:; BB(0x007103aa);
    /* 007103aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007103ac: je 0x710435 */ if (fZ) goto L_00710435;
L_007103b2:; BB(0x007103b2);
    /* 007103b2: mov edx, 4 */ r_edx = 0x4u;
L_007103b7:; BB(0x007103b7);
    /* 007103b7: movzx ecx, byte ptr [eax + edx*4 + 4] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x4u));
    /* 007103bc: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007103be: jne 0x7103cd */ if (!fZ) goto L_007103cd;
L_007103c0:; BB(0x007103c0);
    /* 007103c0: movzx ecx, byte ptr [eax + edx*4 + 5] */ r_ecx = (u32)R8((u32)(r_eax+r_edx*4+0x5u));
    /* 007103c5: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007103c7: je 0x71045c */ if (fZ) goto L_0071045c;
L_007103cd:; BB(0x007103cd);
    /* 007103cd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007103d0: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007103d3: jle 0x7103b7 */ if ((fZ||fS!=fO)) goto L_007103b7;
L_007103d5:; BB(0x007103d5);
    /* 007103d5: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007103d8: je 0x710446 */ if (fZ) goto L_00710446;
L_007103da:; BB(0x007103da);
    /* 007103da: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007103de: fld dword ptr [0x96f550] */ FPUSH(R_F32((u32)(0x96f550u)));
    /* 007103e4: fld dword ptr [0x96f550] */ FPUSH(R_F32((u32)(0x96f550u)));
    /* 007103ea: fld dword ptr [0x96f554] */ FPUSH(R_F32((u32)(0x96f554u)));
    /* 007103f0: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 007103f4: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007103f9: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 007103fd: fld dword ptr [ebx*8 + 0x9f1280] */ FPUSH(R_F32((u32)(r_ebx*8+0x9f1280u)));
    /* 00710404: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00710406: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00710408: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071040a: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 0071040c: mov edx, dword ptr [ebx*8 + 0x9f1280] */ r_edx = R32((u32)(r_ebx*8+0x9f1280u));
    /* 00710413: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 00710416: fld dword ptr [ebx*8 + 0x9f1284] */ FPUSH(R_F32((u32)(r_ebx*8+0x9f1284u)));
    /* 0071041d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071041f: fstp dword ptr [ecx + 0x1c] */ W_F32((u32)(r_ecx+0x1cu), ST(0)); FPOP();
    /* 00710422: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00710424: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 00710427: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00710429: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0071042b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071042d: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0071042f: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 00710432: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
L_00710435:; BB(0x00710435);
    /* 00710435: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710436: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710437: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00710438: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710439: ret  */ FN_RET(0x00710288); r_esp += 4; return;
L_0071043a:; BB(0x0071043a);
    /* 0071043a: mov dword ptr [edx + 0x34], 7 */ W32((u32)(r_edx+0x34u), 0x7u);
    /* 00710441: jmp 0x7102fd */ goto L_007102fd;
L_00710446:; BB(0x00710446);
    /* 00710446: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0071044a: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0071044e: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710453: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00710457: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710458: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710459: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071045a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071045b: ret  */ FN_RET(0x00710288); r_esp += 4; return;
L_0071045c:; BB(0x0071045c);
    /* 0071045c: lea ebx, [edx - 4] */ r_ebx = (u32)(r_edx+0xfffffffcu);
    /* 0071045f: jmp 0x7103d5 */ goto L_007103d5;
L_00710464:; BB(0x00710464);
    /* 00710464: mov dword ptr [edx + 0x34], 5 */ W32((u32)(r_edx+0x34u), 0x5u);
    /* 0071046b: fld dword ptr [esi*8 + 0x9f12e0] */ FPUSH(R_F32((u32)(r_esi*8+0x9f12e0u)));
    /* 00710472: mov eax, dword ptr [esi*8 + 0x9f12e0] */ r_eax = R32((u32)(r_esi*8+0x9f12e0u));
    /* 00710479: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0071047c: fld dword ptr [esi*8 + 0x9f12e4] */ FPUSH(R_F32((u32)(r_esi*8+0x9f12e4u)));
    /* 00710483: jmp 0x71034c */ goto L_0071034c;
L_00710488:; BB(0x00710488);
    /* 00710488: fld dword ptr [esi*8 + 0x9f15e8] */ FPUSH(R_F32((u32)(r_esi*8+0x9f15e8u)));
    /* 0071048f: fld dword ptr [esi*8 + 0x9f15ec] */ FPUSH(R_F32((u32)(r_esi*8+0x9f15ecu)));
    /* 00710496: mov dword ptr [edx + 0x34], 6 */ W32((u32)(r_edx+0x34u), 0x6u);
    /* 0071049d: jmp 0x71034c */ goto L_0071034c;
L_007104a2:; BB(0x007104a2);
    /* 007104a2: fld dword ptr [0x96f564] */ FPUSH(R_F32((u32)(0x96f564u)));
    /* 007104a8: fld dword ptr [0x96f560] */ FPUSH(R_F32((u32)(0x96f560u)));
    /* 007104ae: mov dword ptr [edx + 0x34], 7 */ W32((u32)(r_edx+0x34u), 0x7u);
    /* 007104b5: jmp 0x71034c */ goto L_0071034c;
}

void f_007104bc(void) /* sub_7104BC */
{
    FN_ENTER(0x007104bc);
    /* 007104bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007104bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007104be: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007104c0: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 007104c2: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7104c7u); f_0073ec50();
    /* 007104c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007104c8: movsx edi, word ptr [esp + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0xcu));
    /* 007104cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007104ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007104cf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007104d1: push 0x9f15d4 */ { u32 v = 0x9f15d4u; r_esp -= 4; W32(r_esp, v); }
    /* 007104d6: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7104dbu); f_00710d30();
    /* 007104db: mov dword ptr [ebx], 0xb3f0f0 */ W32((u32)(r_ebx), 0xb3f0f0u);
    /* 007104e1: mov edx, dword ptr [0x9f15d0] */ r_edx = R32((u32)(0x9f15d0u));
    /* 007104e7: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 007104ea: mov word ptr [ebx + 0x20], di */ W16((u32)(r_ebx+0x20u), (u16)r_edi);
    /* 007104ee: mov dword ptr [ebx + 0x60], 0x3f19999a */ W32((u32)(r_ebx+0x60u), 0x3f19999au);
    /* 007104f5: mov eax, ebx */ r_eax = r_ebx;
    /* 007104f7: mov dword ptr [ebx + 0x64], 0x3f19999a */ W32((u32)(r_ebx+0x64u), 0x3f19999au);
    /* 007104fe: mov dword ptr [ebx + 0x58], 0xbf800000 */ W32((u32)(r_ebx+0x58u), 0xbf800000u);
    /* 00710505: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710506: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710507: ret 4 */ FN_RET(0x007104bc); r_esp += 8; return;
}

void f_0071050c(void) /* sub_71050C */
{
    FN_ENTER(0x0071050c);
    /* 0071050c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071050d: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710510: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00710512: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00710516: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710517: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71051cu); f_0068d5a8();
    /* 0071051c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071051d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071051f: je 0x710649 */ if (fZ) goto L_00710649;
L_00710525:; BB(0x00710525);
    /* 00710525: mov ecx, eax */ r_ecx = r_eax;
    /* 00710527: call 0x68aa24 */ r_esp -= 4; W32(r_esp, 0x71052cu); f_0068aa24();
    /* 0071052c: mov ecx, eax */ r_ecx = r_eax;
    /* 0071052e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710530: je 0x710649 */ if (fZ) goto L_00710649;
L_00710536:; BB(0x00710536);
    /* 00710536: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00710539: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071053c: jne 0x710545 */ if (!fZ) goto L_00710545;
L_0071053e:; BB(0x0071053e);
    /* 0071053e: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
L_00710545:; BB(0x00710545);
    /* 00710545: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00710549: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 0071054d: mov dword ptr [esp + 0x1c], esi */ W32((u32)(r_esp+0x1cu), r_esi);
    /* 00710551: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00710555: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00710559: mov eax, 4 */ r_eax = 0x4u;
    /* 0071055e: mov ebx, eax */ r_ebx = r_eax;
L_00710560:; BB(0x00710560);
    /* 00710560: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00710564: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00710566: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710568: jne 0x71056f */ if (!fZ) goto L_0071056f;
L_0071056a:; BB(0x0071056a);
    /* 0071056a: lea edx, [edx + 4] */ r_edx = (u32)(r_edx+0x4u);
    /* 0071056d: jmp 0x710572 */ goto L_00710572;
L_0071056f:; BB(0x0071056f);
    /* 0071056f: lea edx, [edx + 0x3c] */ r_edx = (u32)(r_edx+0x3cu);
L_00710572:; BB(0x00710572);
    /* 00710572: movzx edx, byte ptr [edx + ebx*4] */ r_edx = (u32)R8((u32)(r_edx+r_ebx*4));
    /* 00710576: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0071057a: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0071057d: jne 0x710588 */ if (!fZ) goto L_00710588;
L_0071057f:; BB(0x0071057f);
    /* 0071057f: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00710583: lea edx, [edx + 4] */ r_edx = (u32)(r_edx+0x4u);
    /* 00710586: jmp 0x71058f */ goto L_0071058f;
L_00710588:; BB(0x00710588);
    /* 00710588: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0071058c: lea edx, [edx + 0x3c] */ r_edx = (u32)(r_edx+0x3cu);
L_0071058f:; BB(0x0071058f);
    /* 0071058f: movzx edi, byte ptr [edx + eax*2 + 1] */ r_edi = (u32)R8((u32)(r_edx+r_eax*2+0x1u));
    /* 00710594: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00710598: movsx ebp, word ptr [edx + 0x20] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0071059c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071059d: lea esi, [ebx - 4] */ r_esi = (u32)(r_ebx+0xfffffffcu);
    /* 007105a0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7105a5u); f_0068d5a8();
    /* 007105a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007105a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007105a8: je 0x710614 */ if (fZ) goto L_00710614;
L_007105aa:; BB(0x007105aa);
    /* 007105aa: movzx ecx, byte ptr [esi + 0x96f510] */ r_ecx = (u32)R8((u32)(r_esi+0x96f510u));
    /* 007105b1: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 007105b5: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 007105b8: mov ebp, dword ptr [edx + ecx*4] */ r_ebp = R32((u32)(r_edx+r_ecx*4));
    /* 007105bb: mov ecx, eax */ r_ecx = r_eax;
    /* 007105bd: movzx edx, byte ptr [esi + 0x96f504] */ r_edx = (u32)R8((u32)(r_esi+0x96f504u));
    /* 007105c4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007105c5: call 0x68ce58 */ r_esp -= 4; W32(r_esp, 0x7105cau); f_0068ce58();
    /* 007105ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007105cc: je 0x7105d7 */ if (fZ) goto L_007105d7;
L_007105ce:; BB(0x007105ce);
    /* 007105ce: mov dword ptr [ebp + 0x2c], 0xffffffff */ W32((u32)(r_ebp+0x2cu), 0xffffffffu);
    /* 007105d5: jmp 0x7105de */ goto L_007105de;
L_007105d7:; BB(0x007105d7);
    /* 007105d7: mov dword ptr [ebp + 0x2c], 0xff404040 */ W32((u32)(r_ebp+0x2cu), 0xff404040u);
L_007105de:; BB(0x007105de);
    /* 007105de: movzx edx, byte ptr [esi + 0x96f4f8] */ r_edx = (u32)R8((u32)(r_esi+0x96f4f8u));
    /* 007105e5: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 007105e9: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 007105ed: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007105f0: movsx esi, word ptr [esi + 0x20] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 007105f4: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007105f7: mov word ptr [esp + 0xc], di */ W16((u32)(r_esp+0xcu), (u16)r_edi);
    /* 007105fc: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 00710600: mov edx, ebp */ r_edx = r_ebp;
    /* 00710602: call 0x70fde5 */ r_esp -= 4; W32(r_esp, 0x710607u); f_0070fde5();
    /* 00710607: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0071060b: mov eax, ebp */ r_eax = r_ebp;
    /* 0071060d: mov ecx, edi */ r_ecx = r_edi;
    /* 0071060f: call 0x70ff56 */ r_esp -= 4; W32(r_esp, 0x710614u); f_0070ff56();
L_00710614:; BB(0x00710614);
    /* 00710614: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00710617: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071061a: jle 0x710560 */ if ((fZ||fS!=fO)) goto L_00710560;
L_00710620:; BB(0x00710620);
    /* 00710620: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00710624: mov esi, dword ptr [esp + 0x1c] */ r_esi = R32((u32)(r_esp+0x1cu));
    /* 00710628: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 0071062c: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00710630: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710632: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x710637u); f_00710db4();
    /* 00710637: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710639: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x71063eu); f_00710ee4();
    /* 0071063e: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 00710641: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710642: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710644: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x710649u); f_0072a5ec();
L_00710649:; BB(0x00710649);
    /* 00710649: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071064c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071064d: ret  */ FN_RET(0x0071050c); r_esp += 4; return;
}

void f_00710650(void) /* sub_710650 */
{
    FN_ENTER(0x00710650);
    /* 00710650: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00710651: mov esi, ecx */ r_esi = r_ecx;
    /* 00710653: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 00710656: mov ecx, esi */ r_ecx = r_esi;
    /* 00710658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710659: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x71065eu); f_00712658();
    /* 0071065e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071065f: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00710662: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00710663: mov ecx, esi */ r_ecx = r_esi;
    /* 00710665: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71066au); f_0072a648();
    /* 0071066a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071066b: ret  */ FN_RET(0x00710650); r_esp += 4; return;
}

void f_0071066c(void)
{
    FN_ENTER(0x0071066c);
    /* 0071066c: mov eax, dword ptr [0x9f1280] */ r_eax = R32((u32)(0x9f1280u));
    /* 00710671: mov edx, dword ptr [0x9f1284] */ r_edx = R32((u32)(0x9f1284u));
    /* 00710677: mov ecx, dword ptr [0x9f1288] */ r_ecx = R32((u32)(0x9f1288u));
    /* 0071067d: mov dword ptr [0x9f0c0c], eax */ W32((u32)(0x9f0c0cu), r_eax);
    /* 00710682: mov eax, dword ptr [0x9f128c] */ r_eax = R32((u32)(0x9f128cu));
    /* 00710687: mov dword ptr [0xa983b4], 0x47742400 */ W32((u32)(0xa983b4u), 0x47742400u);
    /* 00710691: mov dword ptr [0xa983b8], 0x3f800000 */ W32((u32)(0xa983b8u), 0x3f800000u);
    /* 0071069b: mov dword ptr [0x9f0c10], edx */ W32((u32)(0x9f0c10u), r_edx);
    /* 007106a1: mov dword ptr [0x9f0c6c], ecx */ W32((u32)(0x9f0c6cu), r_ecx);
    /* 007106a7: mov dword ptr [0xa983bc], 0x41000000 */ W32((u32)(0xa983bcu), 0x41000000u);
    /* 007106b1: mov dword ptr [0xa983c0], 0x3fc00000 */ W32((u32)(0xa983c0u), 0x3fc00000u);
    /* 007106bb: mov dword ptr [0x9f0c70], eax */ W32((u32)(0x9f0c70u), r_eax);
    /* 007106c0: mov eax, dword ptr [0x9f1290] */ r_eax = R32((u32)(0x9f1290u));
    /* 007106c5: mov dword ptr [0x9f0ccc], eax */ W32((u32)(0x9f0cccu), r_eax);
    /* 007106ca: mov eax, dword ptr [0x9f1294] */ r_eax = R32((u32)(0x9f1294u));
    /* 007106cf: mov dword ptr [0x9f0cd0], eax */ W32((u32)(0x9f0cd0u), r_eax);
    /* 007106d4: mov eax, dword ptr [0x9f1298] */ r_eax = R32((u32)(0x9f1298u));
    /* 007106d9: mov dword ptr [0x9f0d2c], eax */ W32((u32)(0x9f0d2cu), r_eax);
    /* 007106de: mov eax, dword ptr [0x9f129c] */ r_eax = R32((u32)(0x9f129cu));
    /* 007106e3: mov dword ptr [0x9f0d30], eax */ W32((u32)(0x9f0d30u), r_eax);
    /* 007106e8: mov eax, dword ptr [0x9f12a0] */ r_eax = R32((u32)(0x9f12a0u));
    /* 007106ed: mov dword ptr [0x9f0d8c], eax */ W32((u32)(0x9f0d8cu), r_eax);
    /* 007106f2: mov eax, dword ptr [0x9f12a4] */ r_eax = R32((u32)(0x9f12a4u));
    /* 007106f7: mov dword ptr [0x9f0d90], eax */ W32((u32)(0x9f0d90u), r_eax);
    /* 007106fc: mov eax, dword ptr [0x9f12a8] */ r_eax = R32((u32)(0x9f12a8u));
    /* 00710701: mov dword ptr [0x9f0dec], eax */ W32((u32)(0x9f0decu), r_eax);
    /* 00710706: mov eax, dword ptr [0x9f12ac] */ r_eax = R32((u32)(0x9f12acu));
    /* 0071070b: mov dword ptr [0x9f0df0], eax */ W32((u32)(0x9f0df0u), r_eax);
    /* 00710710: mov eax, dword ptr [0x9f12b0] */ r_eax = R32((u32)(0x9f12b0u));
    /* 00710715: mov dword ptr [0x9f0e4c], eax */ W32((u32)(0x9f0e4cu), r_eax);
    /* 0071071a: mov eax, dword ptr [0x9f12b4] */ r_eax = R32((u32)(0x9f12b4u));
    /* 0071071f: mov dword ptr [0x9f0e50], eax */ W32((u32)(0x9f0e50u), r_eax);
    /* 00710724: mov eax, dword ptr [0x9f12b8] */ r_eax = R32((u32)(0x9f12b8u));
    /* 00710729: mov dword ptr [0x9f0eac], eax */ W32((u32)(0x9f0eacu), r_eax);
    /* 0071072e: mov eax, dword ptr [0x9f12bc] */ r_eax = R32((u32)(0x9f12bcu));
    /* 00710733: mov dword ptr [0x9f0eb0], eax */ W32((u32)(0x9f0eb0u), r_eax);
    /* 00710738: mov eax, dword ptr [0x9f12c0] */ r_eax = R32((u32)(0x9f12c0u));
    /* 0071073d: mov dword ptr [0x9f0f0c], eax */ W32((u32)(0x9f0f0cu), r_eax);
    /* 00710742: mov eax, dword ptr [0x9f12c4] */ r_eax = R32((u32)(0x9f12c4u));
    /* 00710747: mov dword ptr [0x9f0f10], eax */ W32((u32)(0x9f0f10u), r_eax);
    /* 0071074c: mov eax, dword ptr [0x9f12c8] */ r_eax = R32((u32)(0x9f12c8u));
    /* 00710751: mov dword ptr [0x9f0f6c], eax */ W32((u32)(0x9f0f6cu), r_eax);
    /* 00710756: mov eax, dword ptr [0x9f12cc] */ r_eax = R32((u32)(0x9f12ccu));
    /* 0071075b: mov dword ptr [0x9f0f70], eax */ W32((u32)(0x9f0f70u), r_eax);
    /* 00710760: ret  */ FN_RET(0x0071066c); r_esp += 4; return;
}

void f_00710764(void) /* sub_710764 */
{
    FN_ENTER(0x00710764);
    /* 00710764: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710765: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00710767: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710769: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x71076eu); f_00710788();
    /* 0071076e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00710772: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710774: jne 0x71077a */ if (!fZ) goto L_0071077a;
L_00710776:; BB(0x00710776);
    /* 00710776: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710777: ret 4 */ FN_RET(0x00710764); r_esp += 8; return;
L_0071077a:; BB(0x0071077a);
    /* 0071077a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071077b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x710780u); f_005c2f74();
    /* 00710780: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710781: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710782: ret 4 */ FN_RET(0x00710764); r_esp += 8; return;
}

void f_00710788(void) /* sub_710788 */
{
    FN_ENTER(0x00710788);
    /* 00710788: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710789: mov ebp, esp */ r_ebp = r_esp;
    /* 0071078b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0071078d: push 0x8f03e8 */ { u32 v = 0x8f03e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00710792: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00710798: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710799: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007107a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007107a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007107a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007107a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007107ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007107af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007107b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007107b5: mov dword ptr [ecx], 0xb3f128 */ W32((u32)(r_ecx), 0xb3f128u);
    /* 007107bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007107c2: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7107c7u); f_00710c28();
    /* 007107c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007107ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007107d1: mov esp, ebp */ r_esp = r_ebp;
    /* 007107d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007107d4: ret  */ FN_RET(0x00710788); r_esp += 4; return;
}

void f_007107d8(void) /* sub_7107D8 */
{
    FN_ENTER(0x007107d8);
    /* 007107d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007107d9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007107dc: mov edi, ecx */ r_edi = r_ecx;
    /* 007107de: mov edx, dword ptr [edi + 0x50] */ r_edx = R32((u32)(r_edi+0x50u));
    /* 007107e1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007107e3: je 0x710855 */ if (fZ) goto L_00710855;
L_007107e5:; BB(0x007107e5);
    /* 007107e5: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 007107e8: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 007107eb: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 007107ee: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 007107f1: fld dword ptr [edi + 0x44] */ FPUSH(R_F32((u32)(r_edi+0x44u)));
    /* 007107f4: fld dword ptr [edi + 0x34] */ FPUSH(R_F32((u32)(r_edi+0x34u)));
    /* 007107f7: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 007107fa: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007107fc: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 007107fe: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710800: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00710802: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710804: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00710806: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00710809: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0071080c: mov eax, edx */ r_eax = r_edx;
    /* 0071080e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00710811: fadd dword ptr [eax*4 + 0x96f5e8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96f5e8u));
    /* 00710818: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 0071081a: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 0071081c: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 0071081e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00710820: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 00710824: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00710826: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 00710828: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071082b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071082d: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00710830: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00710832: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710834: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 00710837: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00710839: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0071083b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071083d: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0071083f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710841: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00710843: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00710845: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 00710848: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071084a: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 0071084d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00710850: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 00710853: jmp 0x710866 */ goto L_00710866;
L_00710855:; BB(0x00710855);
    /* 00710855: fld dword ptr [edi + 0x38] */ FPUSH(R_F32((u32)(r_edi+0x38u)));
    /* 00710858: fsub dword ptr [edi + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x48u));
    /* 0071085b: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0071085f: mov ecx, edi */ r_ecx = r_edi;
    /* 00710861: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x710866u); f_00710f64();
L_00710866:; BB(0x00710866);
    /* 00710866: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0071086a: fmul dword ptr [0x96f60c] */ ST(0) = ST(0) * R_F32((u32)(0x96f60cu));
    /* 00710870: fadd dword ptr [edi + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x74u));
    /* 00710873: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 00710876: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710879: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071087a: ret  */ FN_RET(0x007107d8); r_esp += 4; return;
}

void f_0071082a(void)
{
    FN_ENTER(0x0071082a);
    /* 0071082a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0071082b: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071082d: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 00710830: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00710832: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710834: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
    /* 00710837: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00710839: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0071083b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071083d: fdivp st(3) */ ST(3) = ST(3) / ST(0); FPOP();
    /* 0071083f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710841: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00710843: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00710845: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 00710848: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071084a: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 0071084d: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00710850: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 00710853: jmp 0x710866 */ goto L_00710866;
L_00710866:; BB(0x00710866);
    /* 00710866: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 0071086a: fmul dword ptr [0x96f60c] */ ST(0) = ST(0) * R_F32((u32)(0x96f60cu));
    /* 00710870: fadd dword ptr [edi + 0x74] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x74u));
    /* 00710873: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 00710876: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710879: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071087a: ret  */ FN_RET(0x0071082a); r_esp += 4; return;
}

void f_0071087c(void) /* sub_71087C */
{
    FN_ENTER(0x0071087c);
    /* 0071087c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071087f: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00710882: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710884: je 0x7108be */ if (fZ) goto L_007108be;
L_00710886:; BB(0x00710886);
    /* 00710886: fld dword ptr [0x96f604] */ FPUSH(R_F32((u32)(0x96f604u)));
    /* 0071088c: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0071088f: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00710892: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00710896: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0071089d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071089f: je 0x7108af */ if (fZ) goto L_007108af;
L_007108a1:; BB(0x007108a1);
    /* 007108a1: fld dword ptr [0x96f600] */ FPUSH(R_F32((u32)(0x96f600u)));
    /* 007108a7: fadd dword ptr [esp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x4u));
    /* 007108ab: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
L_007108af:; BB(0x007108af);
    /* 007108af: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 007108b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007108b3: add ecx, 0x70 */ {  u32 a = r_ecx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007108b6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007108b7: mov ecx, eax */ r_ecx = r_eax;
    /* 007108b9: call 0x73f8a4 */ r_esp -= 4; W32(r_esp, 0x7108beu); f_0073f8a4();
L_007108be:; BB(0x007108be);
    /* 007108be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007108c1: ret  */ FN_RET(0x0071087c); r_esp += 4; return;
}

void f_007108c4(void) /* sub_7108C4 */
{
    FN_ENTER(0x007108c4);
    /* 007108c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007108c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007108c6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007108c8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 007108cc: movsx eax, word ptr [esp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x10u));
    /* 007108d1: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007108d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007108d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007108d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007108d9: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7108deu); f_00710d30();
    /* 007108de: mov dword ptr [ebx], 0xb3f128 */ W32((u32)(r_ebx), 0xb3f128u);
    /* 007108e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007108e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007108e7: call 0x710918 */ r_esp -= 4; W32(r_esp, 0x7108ecu); f_00710918();
    /* 007108ec: mov eax, ebx */ r_eax = r_ebx;
    /* 007108ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007108ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007108f0: ret 0xc */ FN_RET(0x007108c4); r_esp += 16; return;
}

void f_007108f4(void) /* sub_7108F4 */
{
    FN_ENTER(0x007108f4);
    /* 007108f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007108f5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007108f7: lea eax, [ebp + 0x68] */ r_eax = (u32)(r_ebp+0x68u);
    /* 007108fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007108fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007108fd: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x710902u); f_00712658();
    /* 00710902: fld dword ptr [eax + 0x10] */ FPUSH(R_F32((u32)(r_eax+0x10u)));
    /* 00710905: fsub dword ptr [ebp + 0x70] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x70u));
    /* 00710908: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 0071090b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071090d: fstp dword ptr [eax + 0x10] */ W_F32((u32)(r_eax+0x10u), ST(0)); FPOP();
    /* 00710910: fsub dword ptr [ebp + 0x74] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x74u));
    /* 00710913: fstp dword ptr [eax + 0x14] */ W_F32((u32)(r_eax+0x14u), ST(0)); FPOP();
    /* 00710916: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710917: ret  */ FN_RET(0x007108f4); r_esp += 4; return;
}

void f_00710918(void) /* sub_710918 */
{
    FN_ENTER(0x00710918);
    /* 00710918: mov eax, dword ptr [0x9f1660] */ r_eax = R32((u32)(0x9f1660u));
    /* 0071091d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00710920: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710922: mov dword ptr [ecx + 0x60], edx */ W32((u32)(r_ecx+0x60u), r_edx);
    /* 00710925: mov dword ptr [ecx + 0x70], 0 */ W32((u32)(r_ecx+0x70u), 0x0u);
    /* 0071092c: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 0071092f: mov dword ptr [ecx + 0x80], edx */ W32((u32)(r_ecx+0x80u), r_edx);
    /* 00710935: mov dword ptr [ecx + 0x74], 0 */ W32((u32)(r_ecx+0x74u), 0x0u);
    /* 0071093c: mov dword ptr [ecx + 0x68], 0x3f800000 */ W32((u32)(r_ecx+0x68u), 0x3f800000u);
    /* 00710943: mov dword ptr [ecx + 0x6c], 0x3f800000 */ W32((u32)(r_ecx+0x6cu), 0x3f800000u);
    /* 0071094a: mov dword ptr [ecx + 0x78], 0 */ W32((u32)(r_ecx+0x78u), 0x0u);
    /* 00710951: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 00710958: ret 4 */ FN_RET(0x00710918); r_esp += 8; return;
}

void f_0071095c(void) /* sub_71095C */
{
    FN_ENTER(0x0071095c);
    /* 0071095c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071095d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071095f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710961: call 0x710980 */ r_esp -= 4; W32(r_esp, 0x710966u); f_00710980();
    /* 00710966: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071096a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071096c: jne 0x710972 */ if (!fZ) goto L_00710972;
L_0071096e:; BB(0x0071096e);
    /* 0071096e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071096f: ret 4 */ FN_RET(0x0071095c); r_esp += 8; return;
L_00710972:; BB(0x00710972);
    /* 00710972: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710973: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x710978u); f_005c2f74();
    /* 00710978: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710979: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071097a: ret 4 */ FN_RET(0x0071095c); r_esp += 8; return;
}

void f_00710980(void) /* sub_710980 */
{
    FN_ENTER(0x00710980);
    /* 00710980: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710981: mov ebp, esp */ r_ebp = r_esp;
    /* 00710983: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00710985: push 0x8f0404 */ { u32 v = 0x8f0404u; r_esp -= 4; W32(r_esp, v); }
    /* 0071098a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00710990: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710991: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00710998: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071099b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071099e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007109a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007109a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007109a7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007109aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007109ad: mov dword ptr [ecx], 0xb3f1b0 */ W32((u32)(r_ecx), 0xb3f1b0u);
    /* 007109b3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007109ba: call 0x73f4b8 */ r_esp -= 4; W32(r_esp, 0x7109bfu); f_0073f4b8();
    /* 007109bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007109c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007109c9: mov esp, ebp */ r_esp = r_ebp;
    /* 007109cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007109cc: ret  */ FN_RET(0x00710980); r_esp += 4; return;
}

void f_007109d0(void) /* sub_7109D0 */
{
    FN_ENTER(0x007109d0);
    /* 007109d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007109d1: mov ebp, esp */ r_ebp = r_esp;
    /* 007109d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007109d5: push 0x8f042c */ { u32 v = 0x8f042cu; r_esp -= 4; W32(r_esp, v); }
    /* 007109da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007109e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007109e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007109e8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007109eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007109ee: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007109f1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007109f4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007109f7: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007109f9: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00710a00: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x710a05u); f_005caba4();
    /* 00710a05: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00710a08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710a0b: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00710a0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710a10: je 0x710a8b */ if (fZ) goto L_00710a8b;
L_00710a12:; BB(0x00710a12);
    /* 00710a12: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00710a19: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00710a20: mov ecx, eax */ r_ecx = r_eax;
    /* 00710a22: call 0x710a94 */ r_esp -= 4; W32(r_esp, 0x710a27u); f_00710a94();
    /* 00710a27: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00710a2e:; BB(0x00710a2e);
    /* 00710a2e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00710a35: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00710a38: call 0x71280c */ r_esp -= 4; W32(r_esp, 0x710a3du); f_0071280c();
    /* 00710a3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00710a40: call 0x710acc */ r_esp -= 4; W32(r_esp, 0x710a45u); f_00710acc();
    /* 00710a45: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00710a48: call 0x73f508 */ r_esp -= 4; W32(r_esp, 0x710a4du); f_0073f508();
    /* 00710a4d: mov ebx, eax */ r_ebx = r_eax;
    /* 00710a4f: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00710a52: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x710a57u); f_007ac344();
    /* 00710a57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710a58: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00710a5b: fild dword ptr [ebp - 0x28] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffd8u)));
    /* 00710a5e: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00710a61: fadd dword ptr [eax*4 + 0x96f618] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96f618u));
    /* 00710a68: fmul dword ptr [0x96f62c] */ ST(0) = ST(0) * R_F32((u32)(0x96f62cu));
    /* 00710a6e: fadd dword ptr [0x96f630] */ ST(0) = ST(0) + R_F32((u32)(0x96f630u));
    /* 00710a74: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00710a77: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00710a7a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00710a7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00710a80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00710a87: mov esp, ebp */ r_esp = r_ebp;
    /* 00710a89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710a8a: ret  */ FN_RET(0x007109d0); r_esp += 4; return;
L_00710a8b:; BB(0x00710a8b);
    /* 00710a8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00710a8d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00710a90: jmp 0x710a2e */ goto L_00710a2e;
}

void f_00710a94(void) /* sub_710A94 */
{
    FN_ENTER(0x00710a94);
    /* 00710a94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00710a95: mov esi, ecx */ r_esi = r_ecx;
    /* 00710a97: mov ecx, esi */ r_ecx = r_esi;
    /* 00710a99: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00710a9b: call 0x73f510 */ r_esp -= 4; W32(r_esp, 0x710aa0u); f_0073f510();
    /* 00710aa0: mov dword ptr [esi], 0xb3f1b0 */ W32((u32)(r_esi), 0xb3f1b0u);
    /* 00710aa6: mov eax, dword ptr [0x9f1664] */ r_eax = R32((u32)(0x9f1664u));
    /* 00710aab: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00710aae: push 0x27 */ { u32 v = 0x27u; r_esp -= 4; W32(r_esp, v); }
    /* 00710ab0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x710ab5u); f_0073ec50();
    /* 00710ab5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00710ab7: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00710aba: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00710abd: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 00710ac0: mov eax, esi */ r_eax = r_esi;
    /* 00710ac2: mov dword ptr [esi + 0x60], 0 */ W32((u32)(r_esi+0x60u), 0x0u);
    /* 00710ac9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710aca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00710acb: ret  */ FN_RET(0x00710a94); r_esp += 4; return;
}

void f_00710acc(void) /* sub_710ACC */
{
    FN_ENTER(0x00710acc);
    /* 00710acc: push dword ptr [0xa114ac] */ { u32 v = R32((u32)(0xa114acu)); r_esp -= 4; W32(r_esp, v); }
    /* 00710ad2: push dword ptr [0xaafc94] */ { u32 v = R32((u32)(0xaafc94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00710ad8: call 0x710ae0 */ r_esp -= 4; W32(r_esp, 0x710addu); f_00710ae0();
    /* 00710add: ret  */ FN_RET(0x00710acc); r_esp += 4; return;
}

void f_00710ae0(void) /* sub_710AE0 */
{
    FN_ENTER(0x00710ae0);
    /* 00710ae0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710ae1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710ae2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00710ae4: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00710ae8: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x710aedu); f_00816d30();
    /* 00710aed: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00710aef: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x710af4u); f_007930dc();
    /* 00710af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710af5: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x710afau); f_00816cb8();
    /* 00710afa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710afd: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x710b02u); f_00816994();
    /* 00710b02: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00710b04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710b05: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x710b0au); f_00816684();
    /* 00710b0a: push 0x96f638 */ { u32 v = 0x96f638u; r_esp -= 4; W32(r_esp, v); }
    /* 00710b0f: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x710b14u); f_00816cb8();
    /* 00710b14: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00710b16: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00710b1a: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x710b1fu); f_00816684();
    /* 00710b1f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710b22: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00710b27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00710b29: call 0x73f65c */ r_esp -= 4; W32(r_esp, 0x710b2eu); f_0073f65c();
    /* 00710b2e: mov dword ptr [0xa983d0], ebx */ W32((u32)(0xa983d0u), r_ebx);
    /* 00710b34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710b35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710b36: ret 8 */ FN_RET(0x00710ae0); r_esp += 12; return;
}

void f_00710b3c(void) /* sub_710B3C */
{
    FN_ENTER(0x00710b3c);
    /* 00710b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 00710b3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00710b41: push 0x8f0454 */ { u32 v = 0x8f0454u; r_esp -= 4; W32(r_esp, v); }
    /* 00710b46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00710b4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710b4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00710b54: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710b57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00710b5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00710b5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00710b60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00710b63: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00710b65: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00710b6c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x710b71u); f_005caba4();
    /* 00710b71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710b72: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00710b75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710b77: je 0x710bfe */ if (fZ) goto L_00710bfe;
L_00710b7d:; BB(0x00710b7d);
    /* 00710b7d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00710b84: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00710b8b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00710b8e: call 0x710a94 */ r_esp -= 4; W32(r_esp, 0x710b93u); f_00710a94();
    /* 00710b93: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00710b96: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00710b9d:; BB(0x00710b9d);
    /* 00710b9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00710ba4: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00710ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710ba8: mov ecx, esi */ r_ecx = r_esi;
    /* 00710baa: call 0x73f65c */ r_esp -= 4; W32(r_esp, 0x710bafu); f_0073f65c();
    /* 00710baf: mov ecx, esi */ r_ecx = r_esi;
    /* 00710bb1: call 0x71280c */ r_esp -= 4; W32(r_esp, 0x710bb6u); f_0071280c();
    /* 00710bb6: mov ecx, esi */ r_ecx = r_esi;
    /* 00710bb8: call 0x73f508 */ r_esp -= 4; W32(r_esp, 0x710bbdu); f_0073f508();
    /* 00710bbd: mov ebx, eax */ r_ebx = r_eax;
    /* 00710bbf: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00710bc2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00710bc3: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x710bc8u); f_007ac344();
    /* 00710bc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710bc9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00710bcc: fild dword ptr [ebp - 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffdcu)));
    /* 00710bcf: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00710bd2: fadd dword ptr [eax*4 + 0x96f610] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96f610u));
    /* 00710bd9: fmul dword ptr [0x96f620] */ ST(0) = ST(0) * R_F32((u32)(0x96f620u));
    /* 00710bdf: fadd dword ptr [0x96f624] */ ST(0) = ST(0) + R_F32((u32)(0x96f624u));
    /* 00710be5: mov eax, esi */ r_eax = r_esi;
    /* 00710be7: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00710bea: fstp dword ptr [ebx + 8] */ W_F32((u32)(r_ebx+0x8u), ST(0)); FPOP();
    /* 00710bed: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00710bf0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00710bf3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00710bfa: mov esp, ebp */ r_esp = r_ebp;
    /* 00710bfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710bfd: ret  */ FN_RET(0x00710b3c); r_esp += 4; return;
L_00710bfe:; BB(0x00710bfe);
    /* 00710bfe: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00710c00: jmp 0x710b9d */ goto L_00710b9d;
}

void f_00710c04(void) /* sub_710C04 */
{
    FN_ENTER(0x00710c04);
    /* 00710c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710c05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00710c07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710c09: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x710c0eu); f_00710c28();
    /* 00710c0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00710c12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710c14: jne 0x710c1a */ if (!fZ) goto L_00710c1a;
L_00710c16:; BB(0x00710c16);
    /* 00710c16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710c17: ret 4 */ FN_RET(0x00710c04); r_esp += 8; return;
L_00710c1a:; BB(0x00710c1a);
    /* 00710c1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710c1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x710c20u); f_005c2f74();
    /* 00710c20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710c21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710c22: ret 4 */ FN_RET(0x00710c04); r_esp += 8; return;
}

void f_00710c28(void) /* sub_710C28 */
{
    FN_ENTER(0x00710c28);
    /* 00710c28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710c29: mov ebp, esp */ r_ebp = r_esp;
    /* 00710c2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00710c2d: push 0x8f0470 */ { u32 v = 0x8f0470u; r_esp -= 4; W32(r_esp, v); }
    /* 00710c32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00710c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710c39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00710c40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710c43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00710c46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00710c49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00710c4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00710c4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00710c52: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00710c59: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00710c5c: mov dword ptr [eax], 0xb3f210 */ W32((u32)(r_eax), 0xb3f210u);
    /* 00710c62: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00710c65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710c66: call 0x72a590 */ r_esp -= 4; W32(r_esp, 0x710c6bu); f_0072a590();
    /* 00710c6b: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00710c6e: call 0x73ec88 */ r_esp -= 4; W32(r_esp, 0x710c73u); f_0073ec88();
    /* 00710c73: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710c76: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00710c7d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00710c80: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x710c85u); f_008171e8();
    /* 00710c85: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00710c88: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00710c8f: mov esp, ebp */ r_esp = r_ebp;
    /* 00710c91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710c92: ret  */ FN_RET(0x00710c28); r_esp += 4; return;
}

void f_00710c94(void) /* sub_710C94 */
{
    FN_ENTER(0x00710c94);
    /* 00710c94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710c95: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00710c97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710c99: call 0x710cb8 */ r_esp -= 4; W32(r_esp, 0x710c9eu); f_00710cb8();
    /* 00710c9e: fcom dword ptr [0x96f76c] */ fx_compare(ST(0), R_F32((u32)(0x96f76cu))); 
    /* 00710ca4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00710ca6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00710ca7: jae 0x710cab */ if (!fC) goto L_00710cab;
L_00710ca9:; BB(0x00710ca9);
    /* 00710ca9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710caa: ret  */ FN_RET(0x00710c94); r_esp += 4; return;
L_00710cab:; BB(0x00710cab);
    /* 00710cab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00710cad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00710caf: call 0x710ce4 */ r_esp -= 4; W32(r_esp, 0x710cb4u); f_00710ce4();
    /* 00710cb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00710cb5: ret  */ FN_RET(0x00710c94); r_esp += 4; return;
}

void f_00710cb8(void) /* sub_710CB8 */
{
    FN_ENTER(0x00710cb8);
    /* 00710cb8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710cbb: movsx eax, word ptr [ecx + 0x22] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x22u));
    /* 00710cbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710cc1: je 0x710cd9 */ if (fZ) goto L_00710cd9;
L_00710cc3:; BB(0x00710cc3);
    /* 00710cc3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00710cc6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00710cc9: fdiv dword ptr [0x96f764] */ ST(0) = ST(0) / R_F32((u32)(0x96f764u));
    /* 00710ccf: fadd dword ptr [0x96f768] */ ST(0) = ST(0) + R_F32((u32)(0x96f768u));
    /* 00710cd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710cd8: ret  */ FN_RET(0x00710cb8); r_esp += 4; return;
L_00710cd9:; BB(0x00710cd9);
    /* 00710cd9: fld dword ptr [0x96f768] */ FPUSH(R_F32((u32)(0x96f768u)));
    /* 00710cdf: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710ce2: ret  */ FN_RET(0x00710cb8); r_esp += 4; return;
}

void f_00710ce4(void) /* sub_710CE4 */
{
    FN_ENTER(0x00710ce4);
    /* 00710ce4: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00710ce7: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710cec: jne 0x710d0c */ if (!fZ) goto L_00710d0c;
L_00710cee:; BB(0x00710cee);
    /* 00710cee: fild dword ptr [ecx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x5cu)));
    /* 00710cf1: fld dword ptr [0x96f760] */ FPUSH(R_F32((u32)(0x96f760u)));
    /* 00710cf7: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00710cf9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00710cfb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00710cfc: ja 0x710d09 */ if ((!fC&&!fZ)) goto L_00710d09;
L_00710cfe:; BB(0x00710cfe);
    /* 00710cfe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00710d00: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00710d02: fld dword ptr [0x96f75c] */ FPUSH(R_F32((u32)(0x96f75cu)));
    /* 00710d08: ret  */ FN_RET(0x00710ce4); r_esp += 4; return;
L_00710d09:; BB(0x00710d09);
    /* 00710d09: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00710d0b: ret  */ FN_RET(0x00710ce4); r_esp += 4; return;
L_00710d0c:; BB(0x00710d0c);
    /* 00710d0c: fld dword ptr [0x96f75c] */ FPUSH(R_F32((u32)(0x96f75cu)));
    /* 00710d12: ret  */ FN_RET(0x00710ce4); r_esp += 4; return;
}

void f_00710d14(void) /* sub_710D14 */
{
    FN_ENTER(0x00710d14);
    /* 00710d14: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00710d1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00710d1c: je 0x710d2d */ if (fZ) goto L_00710d2d;
L_00710d1e:; BB(0x00710d1e);
    /* 00710d1e: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x710d23u); f_00829de0();
    /* 00710d23: mov dword ptr [0xa983d8], 0 */ W32((u32)(0xa983d8u), 0x0u);
L_00710d2d:; BB(0x00710d2d);
    /* 00710d2d: ret  */ FN_RET(0x00710d14); r_esp += 4; return;
}

void f_00710d30(void) /* sub_710D30 */
{
    FN_ENTER(0x00710d30);
    /* 00710d30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710d31: mov ebp, esp */ r_ebp = r_esp;
    /* 00710d33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00710d35: push 0x8f048c */ { u32 v = 0x8f048cu; r_esp -= 4; W32(r_esp, v); }
    /* 00710d3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00710d40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710d41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00710d48: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710d4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00710d4e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00710d51: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00710d54: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00710d57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00710d5a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00710d5d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00710d60: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00710d63: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 00710d67: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00710d6a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710d6b: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00710d6e: call 0x719930 */ r_esp -= 4; W32(r_esp, 0x710d73u); f_00719930();
    /* 00710d73: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710d74: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00710d77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710d78: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x710d7du); f_008193cc();
    /* 00710d7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00710d84: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00710d87: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00710d8a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00710d8d: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00710d90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710d91: mov dword ptr [ecx], 0xb3f210 */ W32((u32)(r_ecx), 0xb3f210u);
    /* 00710d97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00710d98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710d99: call 0x712c44 */ r_esp -= 4; W32(r_esp, 0x710d9eu); f_00712c44();
    /* 00710d9e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00710da1: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00710da4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00710da7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00710dae: mov esp, ebp */ r_esp = r_ebp;
    /* 00710db0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00710db1: ret 0xc */ FN_RET(0x00710d30); r_esp += 16; return;
}

void f_00710db4(void) /* sub_710DB4 */
{
    FN_ENTER(0x00710db4);
    /* 00710db4: call 0x710dbc */ r_esp -= 4; W32(r_esp, 0x710db9u); f_00710dbc();
    /* 00710db9: ret  */ FN_RET(0x00710db4); r_esp += 4; return;
}

void f_00710dbc(void) /* sub_710DBC */
{
    FN_ENTER(0x00710dbc);
    /* 00710dbc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00710dbd: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710dc0: mov edi, ecx */ r_edi = r_ecx;
    /* 00710dc2: mov eax, dword ptr [edi + 0x5c] */ r_eax = R32((u32)(r_edi+0x5cu));
    /* 00710dc5: cmp eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00710dca: jge 0x710de1 */ if ((fS==fO)) goto L_00710de1;
L_00710dcc:; BB(0x00710dcc);
    /* 00710dcc: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00710dd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710dd1: call 0x7be1d0 */ r_esp -= 4; W32(r_esp, 0x710dd6u); f_007be1d0();
    /* 00710dd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00710dd7: mov edx, dword ptr [edi + 0x5c] */ r_edx = R32((u32)(r_edi+0x5cu));
    /* 00710dda: lea eax, [eax + edx + 1] */ r_eax = (u32)(r_eax+r_edx+0x1u);
    /* 00710dde: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
L_00710de1:; BB(0x00710de1);
    /* 00710de1: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00710de4: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710de7: jne 0x710e0e */ if (!fZ) goto L_00710e0e;
L_00710de9:; BB(0x00710de9);
    /* 00710de9: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710dec: jne 0x710df3 */ if (!fZ) goto L_00710df3;
L_00710dee:; BB(0x00710dee);
    /* 00710dee: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710df1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710df2: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
L_00710df3:; BB(0x00710df3);
    /* 00710df3: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710df6: jne 0x710ede */ if (!fZ) goto L_00710ede;
L_00710dfc:; BB(0x00710dfc);
    /* 00710dfc: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00710e00: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00710e05: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00710e09: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710e0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710e0d: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
L_00710e0e:; BB(0x00710e0e);
    /* 00710e0e: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710e11: je 0x710e59 */ if (fZ) goto L_00710e59;
L_00710e13:; BB(0x00710e13);
    /* 00710e13: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00710e16: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00710e19: fcomp dword ptr [0x96f754] */ fx_compare(ST(0), R_F32((u32)(0x96f754u))); FPOP();
    /* 00710e1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00710e21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00710e22: jb 0x710e54 */ if (fC) goto L_00710e54;
L_00710e24:; BB(0x00710e24);
    /* 00710e24: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710e27: je 0x710e4e */ if (fZ) goto L_00710e4e;
L_00710e29:; BB(0x00710e29);
    /* 00710e29: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710e2c: jne 0x710e43 */ if (!fZ) goto L_00710e43;
L_00710e2e:; BB(0x00710e2e);
    /* 00710e2e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00710e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710e31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710e32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710e33: push 0x573 */ { u32 v = 0x573u; r_esp -= 4; W32(r_esp, v); }
    /* 00710e38: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x710e3du); f_00814298();
    /* 00710e3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710e40: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
L_00710e43:; BB(0x00710e43);
    /* 00710e43: and ecx, 0xfffffffa */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00710e46: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 00710e49: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710e4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710e4d: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
L_00710e4e:; BB(0x00710e4e);
    /* 00710e4e: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00710e51: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
L_00710e54:; BB(0x00710e54);
    /* 00710e54: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710e57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710e58: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
L_00710e59:; BB(0x00710e59);
    /* 00710e59: movsx edx, word ptr [edi + 0x22] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x22u));
    /* 00710e5d: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00710e60: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00710e63: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00710e67: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00710e6b: fcomp dword ptr [0x96f758] */ fx_compare(ST(0), R_F32((u32)(0x96f758u))); FPOP();
    /* 00710e71: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00710e73: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00710e74: jb 0x710eda */ if (fC) goto L_00710eda;
L_00710e76:; BB(0x00710e76);
    /* 00710e76: test cl, 0x10 */ {  u32 a = (u8)r_ecx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710e79: je 0x710e88 */ if (fZ) goto L_00710e88;
L_00710e7b:; BB(0x00710e7b);
    /* 00710e7b: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00710e7f: or eax, 0xffff0011 */ {  u32 a = r_eax; u32 b = 0xffff0011u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00710e84: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
L_00710e88:; BB(0x00710e88);
    /* 00710e88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00710e8a: mov word ptr [edi + 0x22], ax */ W16((u32)(r_edi+0x22u), (u16)r_eax);
    /* 00710e8e: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710e91: je 0x710ec2 */ if (fZ) goto L_00710ec2;
L_00710e93:; BB(0x00710e93);
    /* 00710e93: test cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00710e96: jne 0x710ead */ if (!fZ) goto L_00710ead;
L_00710e98:; BB(0x00710e98);
    /* 00710e98: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00710e9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710e9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00710e9d: push 0x572 */ { u32 v = 0x572u; r_esp -= 4; W32(r_esp, v); }
    /* 00710ea2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x710ea7u); f_00814298();
    /* 00710ea7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00710eaa: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
L_00710ead:; BB(0x00710ead);
    /* 00710ead: mov dword ptr [edi + 0x5c], 0 */ W32((u32)(r_edi+0x5cu), 0x0u);
    /* 00710eb4: and ecx, 0xfffffffb */ {  u32 a = r_ecx; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00710eb7: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00710eba: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 00710ebd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710ec0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710ec1: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
L_00710ec2:; BB(0x00710ec2);
    /* 00710ec2: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00710ec6: and ecx, 0xfffffffd */ {  u32 a = r_ecx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00710ec9: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 00710ecc: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00710ed1: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00710ed5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710ed8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710ed9: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
L_00710eda:; BB(0x00710eda);
    /* 00710eda: mov word ptr [edi + 0x22], dx */ W16((u32)(r_edi+0x22u), (u16)r_edx);
L_00710ede:; BB(0x00710ede);
    /* 00710ede: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710ee1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00710ee2: ret  */ FN_RET(0x00710dbc); r_esp += 4; return;
}

void f_00710ee4(void) /* sub_710EE4 */
{
    FN_ENTER(0x00710ee4);
    /* 00710ee4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710ee7: mov edx, dword ptr [ecx + 0x50] */ r_edx = R32((u32)(r_ecx+0x50u));
    /* 00710eea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00710eec: je 0x710f58 */ if (fZ) goto L_00710f58;
L_00710eee:; BB(0x00710eee);
    /* 00710eee: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00710ef1: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00710ef4: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 00710ef7: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 00710efa: fld dword ptr [ecx + 0x48] */ FPUSH(R_F32((u32)(r_ecx+0x48u)));
    /* 00710efd: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 00710f00: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00710f03: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00710f05: fsub st(6) */ ST(0) = ST(0) - ST(6);
    /* 00710f07: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710f09: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00710f0b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710f0d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00710f0f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00710f12: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00710f15: mov eax, edx */ r_eax = r_edx;
    /* 00710f17: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00710f1a: fadd dword ptr [eax*4 + 0x96f640] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96f640u));
    /* 00710f21: fdiv st(4), st(0) */ ST(4) = ST(4) / ST(0);
    /* 00710f23: fdiv st(2), st(0) */ ST(2) = ST(2) / ST(0);
    /* 00710f25: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00710f27: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00710f29: faddp st(7) */ ST(7) = ST(7) + ST(0); FPOP();
    /* 00710f2b: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 00710f2e: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 00710f30: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 00710f33: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710f35: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00710f37: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00710f39: fstp dword ptr [ecx + 0x44] */ W_F32((u32)(r_ecx+0x44u), ST(0)); FPOP();
    /* 00710f3c: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00710f3e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710f40: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 00710f43: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00710f45: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00710f47: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 00710f49: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00710f4b: fstp dword ptr [ecx + 0x4c] */ W_F32((u32)(r_ecx+0x4cu), ST(0)); FPOP();
    /* 00710f4e: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00710f51: mov dword ptr [ecx + 0x50], edx */ W32((u32)(r_ecx+0x50u), r_edx);
    /* 00710f54: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710f57: ret  */ FN_RET(0x00710ee4); r_esp += 4; return;
L_00710f58:; BB(0x00710f58);
    /* 00710f58: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x710f5du); f_00710f64();
    /* 00710f5d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00710f60: ret  */ FN_RET(0x00710ee4); r_esp += 4; return;
}

void f_00710f64(void) /* sub_710F64 */
{
    FN_ENTER(0x00710f64);
    /* 00710f64: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00710f67: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 00710f6a: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 00710f6d: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 00710f70: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 00710f73: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 00710f76: mov eax, dword ptr [ecx + 0x3c] */ r_eax = R32((u32)(r_ecx+0x3cu));
    /* 00710f79: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 00710f7c: ret  */ FN_RET(0x00710f64); r_esp += 4; return;
}

void f_00710f80(void) /* sub_710F80 */
{
    FN_ENTER(0x00710f80);
    /* 00710f80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00710f81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00710f82: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00710f83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00710f84: sub esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00710f8a: mov edi, ecx */ r_edi = r_ecx;
    /* 00710f8c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00710f91: mov esi, dword ptr [esp + 0xa4] */ r_esi = R32((u32)(r_esp+0xa4u));
    /* 00710f98: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x710f9du); f_0082bb30();
    /* 00710f9d: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00710fa3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x710fa8u); f_00829cc8();
    /* 00710fa8: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00710fab: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00710fb0: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x710fb5u); f_0082bb60();
    /* 00710fb5: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00710fb8: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00710fbb: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00710fbf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00710fc4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00710fc8: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00710fcc: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00710fd0: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00710fd3: fld dword ptr [0x96f748] */ FPUSH(R_F32((u32)(0x96f748u)));
    /* 00710fd9: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00710fdd: mov edx, ebx */ r_edx = r_ebx;
    /* 00710fdf: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00710fe2: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00710fe4: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00710fe7: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00710fea: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00710fec: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00710ff0: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00710ff4: fcom dword ptr [0x96f750] */ fx_compare(ST(0), R_F32((u32)(0x96f750u))); 
    /* 00710ffa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00710ffc: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711000: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711001: jae 0x71100f */ if (!fC) goto L_0071100f;
L_00711003:; BB(0x00711003);
    /* 00711003: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711007: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00711009: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0071100d: jmp 0x711019 */ goto L_00711019;
L_0071100f:; BB(0x0071100f);
    /* 0071100f: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 00711015: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
L_00711019:; BB(0x00711019);
    /* 00711019: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071101d: fld dword ptr [0x96f740] */ FPUSH(R_F32((u32)(0x96f740u)));
    /* 00711023: fld dword ptr [0x96f73c] */ FPUSH(R_F32((u32)(0x96f73cu)));
    /* 00711029: fdiv dword ptr [esi + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x38u));
    /* 0071102c: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0071102f: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00711032: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 00711035: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 00711038: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071103a: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 0071103e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711040: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00711042: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711044: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00711046: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00711048: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0071104c: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0071104f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711051: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00711055: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711058: fmulp st(7) */ ST(7) = ST(7) * ST(0); FPOP();
    /* 0071105a: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711060: fcom st(7) */ fx_compare(ST(0), ST(7)); 
    /* 00711062: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711064: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711066: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 00711068: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071106a: fdiv st(6), st(0) */ ST(6) = ST(6) / ST(0);
    /* 0071106c: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0071106e: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00711072: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711074: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 00711076: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711078: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0071107a: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 0071107d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071107f: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 00711081: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711083: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 00711087: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711088: jae 0x71108c */ if (!fC) goto L_0071108c;
L_0071108a:; BB(0x0071108a);
    /* 0071108a: fst st(4) */ ST(4) = ST(0);
L_0071108c:; BB(0x0071108c);
    /* 0071108c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071108e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711090: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 00711092: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711094: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00711098: mov dword ptr [esp + 0x50], 0 */ W32((u32)(r_esp+0x50u), 0x0u);
    /* 007110a0: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007110a2: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 007110a4: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 007110a6: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 007110aa: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007110ac: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007110ae: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007110b2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007110b4: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 007110b6: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 007110b9: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 007110bb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007110bd: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 007110bf: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007110c1: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 007110c3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 007110c5: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007110c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007110cb: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007110cd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007110cf: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007110d3: mov dword ptr [esp + 0x4c], 0 */ W32((u32)(r_esp+0x4cu), 0x0u);
    /* 007110db: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007110dc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007110df: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 007110e3: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7110e8u); f_0082b440();
    /* 007110e8: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007110ec: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 007110ef: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007110f1: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007110f3: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007110f5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007110f7: fsubr dword ptr [0x96f738] */ ST(0) = R_F32((u32)(0x96f738u)) - ST(0);
    /* 007110fd: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 00711103: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711106: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00711109: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071110b: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071110f: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711111: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00711113: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711115: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00711119: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0071111b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071111d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0071111f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711121: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711123: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00711125: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711127: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0071112b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071112d: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00711131: mov dword ptr [esp + 0x54], 0x3ec00000 */ W32((u32)(r_esp+0x54u), 0x3ec00000u);
    /* 00711139: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071113a: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071113e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711141: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00711145: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71114au); f_0082b440();
    /* 0071114a: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711150: fld dword ptr [0x96f750] */ FPUSH(R_F32((u32)(0x96f750u)));
    /* 00711156: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 0071115c: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071115e: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00711161: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711164: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00711166: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 0071116a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071116c: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00711170: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711172: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00711174: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711177: fsubr st(4), st(0) */ ST(4) = ST(0) - ST(4);
    /* 00711179: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071117b: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0071117d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071117f: fcomp st(4) */ fx_compare(ST(0), ST(4)); FPOP();
    /* 00711181: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711183: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711185: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00711187: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00711189: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0071118b: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071118f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711190: mov dword ptr [esp + 0x4c], 0x3e000000 */ W32((u32)(r_esp+0x4cu), 0x3e000000u);
    /* 00711198: mov dword ptr [esp + 0x54], 0x3e800000 */ W32((u32)(r_esp+0x54u), 0x3e800000u);
    /* 007111a0: ja 0x71199d */ if ((!fC&&!fZ)) goto L_0071199d;
L_007111a6:; BB(0x007111a6);
    /* 007111a6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007111a8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007111aa: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 007111ac: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 007111b0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007111b2: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007111b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_007111b8:; BB(0x007111b8);
    /* 007111b8: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007111bc: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007111be: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007111c0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007111c1: jae 0x7111e5 */ if (!fC) goto L_007111e5;
L_007111c3:; BB(0x007111c3);
    /* 007111c3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007111c5: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007111c9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007111cb: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 007111d1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007111d3: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007111d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007111d9: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 007111df: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007111e3: jmp 0x7111eb */ goto L_007111eb;
L_007111e5:; BB(0x007111e5);
    /* 007111e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007111e7: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_007111eb:; BB(0x007111eb);
    /* 007111eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007111ec: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007111f0: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007111f3: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 007111f7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7111fcu); f_0082b440();
    /* 007111fc: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711202: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00711206: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711208: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0071120c: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 00711212: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711214: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711218: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071121a: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071121c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071121e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711220: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00711224: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711225: jb 0x71122b */ if (fC) goto L_0071122b;
L_00711227:; BB(0x00711227);
    /* 00711227: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711229: jmp 0x7111b8 */ goto L_007111b8;
L_0071122b:; BB(0x0071122b);
    /* 0071122b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071122d: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711230: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711232: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00711236: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711239: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071123b: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071123f: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
L_00711242:; BB(0x00711242);
    /* 00711242: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711244: fmul dword ptr [0x96f748] */ ST(0) = ST(0) * R_F32((u32)(0x96f748u));
    /* 0071124a: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0071124e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711252: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00711255: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00711257: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00711259: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071125b: fsubr dword ptr [0x96f738] */ ST(0) = R_F32((u32)(0x96f738u)) - ST(0);
    /* 00711261: fld dword ptr [0x96f740] */ FPUSH(R_F32((u32)(0x96f740u)));
    /* 00711267: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 00711269: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071126b: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0071126f: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00711272: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711274: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 00711278: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071127a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071127c: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 0071127f: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 00711281: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711283: fmul dword ptr [esi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x2cu));
    /* 00711286: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711288: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071128a: fmul dword ptr [esi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x2cu));
    /* 0071128d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071128f: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00711291: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00711295: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00711299: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 0071129b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071129d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071129f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007112a1: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007112a5: fld dword ptr [0x96f73c] */ FPUSH(R_F32((u32)(0x96f73cu)));
    /* 007112ab: fdiv dword ptr [esi + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x38u));
    /* 007112ae: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 007112b2: mov dword ptr [esp + 0x58], 0x3ec00000 */ W32((u32)(r_esp+0x58u), 0x3ec00000u);
    /* 007112ba: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007112bc: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 007112be: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 007112c0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 007112c2: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 007112c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007112c5: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 007112c9: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007112cb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007112cd: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007112d1: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 007112d3: jb 0x7112d7 */ if (fC) goto L_007112d7;
L_007112d5:; BB(0x007112d5);
    /* 007112d5: fst st(3) */ ST(3) = ST(0);
L_007112d7:; BB(0x007112d7);
    /* 007112d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007112d9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007112dd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007112df: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 007112e1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007112e3: fst dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0));
    /* 007112e7: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007112e9: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007112ed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007112ef: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 007112f3: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007112f5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007112f7: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007112f9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007112fb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007112fd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007112ff: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711301: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00711305: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711306: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711309: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0071130d: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711312u); f_0082b440();
    /* 00711312: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 00711316: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711319: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071131b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0071131d: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0071131f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711321: fsubr dword ptr [0x96f738] */ ST(0) = R_F32((u32)(0x96f738u)) - ST(0);
    /* 00711327: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 0071132d: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711330: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00711333: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711335: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711339: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071133b: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 0071133d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071133f: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00711343: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 00711345: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711347: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00711349: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071134b: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0071134d: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 0071134f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711351: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 00711355: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711357: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071135b: mov dword ptr [esp + 0x54], 0x3ec00000 */ W32((u32)(r_esp+0x54u), 0x3ec00000u);
    /* 00711363: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711364: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711368: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071136b: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 0071136f: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711374u); f_0082b440();
    /* 00711374: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 0071137a: fld dword ptr [0x96f750] */ FPUSH(R_F32((u32)(0x96f750u)));
    /* 00711380: mov edx, 0x3e000000 */ r_edx = 0x3e000000u;
    /* 00711385: mov ebx, 0x3e800000 */ r_ebx = 0x3e800000u;
    /* 0071138a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071138c: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 0071138f: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 00711392: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711395: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711397: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00711399: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071139b: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 0071139d: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071139f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007113a1: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 007113a3: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007113a5: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 007113ab: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007113ad: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007113af: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007113b1: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007113b3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007113b5: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 007113b9: mov dword ptr [esp + 0x4c], 0x3e000000 */ W32((u32)(r_esp+0x4cu), 0x3e000000u);
    /* 007113c1: mov dword ptr [esp + 0x54], 0x3e800000 */ W32((u32)(r_esp+0x54u), 0x3e800000u);
    /* 007113c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007113ca: ja 0x7119ac */ if ((!fC&&!fZ)) goto L_007119ac;
L_007113d0:; BB(0x007113d0);
    /* 007113d0: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 007113d2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007113d4: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_007113d8:; BB(0x007113d8);
    /* 007113d8: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007113dc: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 007113de: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007113e0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007113e1: jae 0x711405 */ if (!fC) goto L_00711405;
L_007113e3:; BB(0x007113e3);
    /* 007113e3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007113e5: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007113e9: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007113eb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007113ed: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007113f1: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 007113f7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007113f9: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 007113ff: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00711403: jmp 0x71140b */ goto L_0071140b;
L_00711405:; BB(0x00711405);
    /* 00711405: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711407: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0071140b:; BB(0x0071140b);
    /* 0071140b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071140c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711410: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711413: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00711417: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71141cu); f_0082b440();
    /* 0071141c: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711422: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00711426: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711428: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0071142c: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 00711432: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711434: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711438: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071143a: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071143c: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071143e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711440: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 00711444: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711445: jb 0x71144b */ if (fC) goto L_0071144b;
L_00711447:; BB(0x00711447);
    /* 00711447: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711449: jmp 0x7113d8 */ goto L_007113d8;
L_0071144b:; BB(0x0071144b);
    /* 0071144b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071144d: fld dword ptr [0x96f750] */ FPUSH(R_F32((u32)(0x96f750u)));
    /* 00711453: mov edx, 0x3e000000 */ r_edx = 0x3e000000u;
    /* 00711458: mov ebx, 0x3e800000 */ r_ebx = 0x3e800000u;
L_0071145d:; BB(0x0071145d);
    /* 0071145d: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00711461: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00711463: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 00711466: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 00711469: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0071146c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071146e: fcom st(4) */ fx_compare(ST(0), ST(4)); 
    /* 00711470: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711472: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 00711476: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711478: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0071147a: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0071147c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0071147e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711480: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 00711482: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711484: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00711486: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711488: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 0071148c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071148d: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00711491: mov dword ptr [esp + 0x58], ebx */ W32((u32)(r_esp+0x58u), r_ebx);
    /* 00711495: jb 0x7119b7 */ if (fC) goto L_007119b7;
L_0071149b:; BB(0x0071149b);
    /* 0071149b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0071149d: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 007114a1: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 007114a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_007114a7:; BB(0x007114a7);
    /* 007114a7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007114ab: fcomp dword ptr [esp + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x34u))); FPOP();
    /* 007114af: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007114b1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007114b2: jae 0x7114d3 */ if (!fC) goto L_007114d3;
L_007114b4:; BB(0x007114b4);
    /* 007114b4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007114b8: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 007114be: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007114c0: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 007114c6: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 007114c9: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 007114cb: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 007114cf: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_007114d3:; BB(0x007114d3);
    /* 007114d3: fadd dword ptr [esp + 0x2c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x2cu));
    /* 007114d7: fld dword ptr [0x96f73c] */ FPUSH(R_F32((u32)(0x96f73cu)));
    /* 007114dd: fdiv dword ptr [esi + 0x38] */ ST(0) = ST(0) / R_F32((u32)(r_esi+0x38u));
    /* 007114e0: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 007114e3: fmul dword ptr [0x96f748] */ ST(0) = ST(0) * R_F32((u32)(0x96f748u));
    /* 007114e9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007114ed: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 007114f0: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 007114f3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007114f5: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 007114f7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007114f9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 007114fb: fstp dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0)); FPOP();
    /* 007114ff: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00711501: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 00711503: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711505: fst dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0));
    /* 00711509: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071150b: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 0071150d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071150f: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00711511: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711513: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 00711515: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711516: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 0071151a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071151c: fxch st(7) */ { long double t = ST(0); ST(0) = ST(7); ST(7) = t; }
    /* 0071151e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00711522: fld dword ptr [0x96f740] */ FPUSH(R_F32((u32)(0x96f740u)));
    /* 00711528: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0071152a: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0071152e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711530: jb 0x711534 */ if (fC) goto L_00711534;
L_00711532:; BB(0x00711532);
    /* 00711532: fst st(5) */ ST(5) = ST(0);
L_00711534:; BB(0x00711534);
    /* 00711534: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00711536: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711538: fdivr st(4) */ ST(0) = ST(4) / ST(0);
    /* 0071153a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071153c: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 00711540: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00711542: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00711546: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711548: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0071154a: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0071154c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071154e: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00711550: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711552: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00711554: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711556: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 0071155a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071155b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0071155e: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00711562: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x711567u); f_0082b440();
    /* 00711567: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071156b: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071156e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00711570: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711572: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711574: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711576: fsubr dword ptr [0x96f738] */ ST(0) = R_F32((u32)(0x96f738u)) - ST(0);
    /* 0071157c: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 00711582: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 00711585: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 00711588: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0071158a: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 0071158e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00711590: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00711592: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711594: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00711598: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 0071159a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071159c: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0071159e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007115a0: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 007115a2: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 007115a4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 007115a6: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 007115aa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007115ac: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007115b0: mov dword ptr [esp + 0x54], 0x3ec00000 */ W32((u32)(r_esp+0x54u), 0x3ec00000u);
    /* 007115b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007115b9: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 007115bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007115c0: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 007115c4: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x7115c9u); f_0082b440();
    /* 007115c9: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 007115cf: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 007115d1: fld dword ptr [esi + 0x28] */ FPUSH(R_F32((u32)(r_esi+0x28u)));
    /* 007115d4: fld dword ptr [esi + 0x20] */ FPUSH(R_F32((u32)(r_esi+0x20u)));
    /* 007115d7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 007115d9: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 007115dd: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007115df: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 007115e2: fsub dword ptr [0x96f750] */ ST(0) = ST(0) - R_F32((u32)(0x96f750u));
    /* 007115e8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 007115ea: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007115ec: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 007115ee: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007115f0: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007115f2: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 007115f8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007115fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007115fc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007115fe: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711602: mov dword ptr [esp + 0x4c], 0x3e000000 */ W32((u32)(r_esp+0x4cu), 0x3e000000u);
    /* 0071160a: mov dword ptr [esp + 0x54], 0x3e800000 */ W32((u32)(r_esp+0x54u), 0x3e800000u);
    /* 00711612: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711613: ja 0x7119c4 */ if ((!fC&&!fZ)) goto L_007119c4;
L_00711619:; BB(0x00711619);
    /* 00711619: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0071161b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071161f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711621: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711625: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00711627:; BB(0x00711627);
    /* 00711627: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071162b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0071162d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071162f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711630: jae 0x711654 */ if (!fC) goto L_00711654;
L_00711632:; BB(0x00711632);
    /* 00711632: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711634: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00711638: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0071163a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071163c: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 00711640: fld dword ptr [0x96f74c] */ FPUSH(R_F32((u32)(0x96f74cu)));
    /* 00711646: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711648: fdiv dword ptr [0x96f740] */ ST(0) = ST(0) / R_F32((u32)(0x96f740u));
    /* 0071164e: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00711652: jmp 0x71165a */ goto L_0071165a;
L_00711654:; BB(0x00711654);
    /* 00711654: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711656: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
L_0071165a:; BB(0x0071165a);
    /* 0071165a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071165b: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 0071165f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711662: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 00711666: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x71166bu); f_0082b440();
    /* 0071166b: fld dword ptr [0x96f7e8] */ FPUSH(R_F32((u32)(0x96f7e8u)));
    /* 00711671: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 00711675: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00711677: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0071167b: fld dword ptr [0x96f744] */ FPUSH(R_F32((u32)(0x96f744u)));
    /* 00711681: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00711683: fst dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0));
    /* 00711687: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711689: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071168b: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0071168d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071168f: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00711693: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711694: jb 0x71169a */ if (fC) goto L_0071169a;
L_00711696:; BB(0x00711696);
    /* 00711696: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00711698: jmp 0x711627 */ goto L_00711627;
L_0071169a:; BB(0x0071169a);
    /* 0071169a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071169c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071169e: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
L_007116a2:; BB(0x007116a2);
    /* 007116a2: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 007116a6: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 007116aa: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 007116ae: fsub dword ptr [esp + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x34u));
    /* 007116b2: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 007116b4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007116b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007116b8: fst dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0));
    /* 007116bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007116be: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007116c2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007116c3: jae 0x7114a7 */ if (!fC) goto L_007114a7;
L_007116c9:; BB(0x007116c9);
    /* 007116c9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007116cb: fstp st(0) */ ST(0) = ST(0); FPOP();
L_007116cd:; BB(0x007116cd);
    /* 007116cd: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7116d2u); f_004ac444();
    /* 007116d2: movzx eax, word ptr [0xa983e0] */ r_eax = (u32)R16((u32)(0xa983e0u));
    /* 007116d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007116db: jl 0x7116e6 */ if ((fS!=fO)) goto L_007116e6;
L_007116dd:; BB(0x007116dd);
    /* 007116dd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007116e0: jle 0x711990 */ if ((fZ||fS!=fO)) goto L_00711990;
L_007116e6:; BB(0x007116e6);
    /* 007116e6: fld dword ptr [0x96f7bc] */ FPUSH(R_F32((u32)(0x96f7bcu)));
    /* 007116ec: fadd dword ptr [edi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x44u));
    /* 007116ef: fdiv dword ptr [0x96f7b8] */ ST(0) = ST(0) / R_F32((u32)(0x96f7b8u));
    /* 007116f5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007116f6: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007116f9: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x7116feu); f_0083c230();
    /* 007116fe: fld dword ptr [edi + 0x4c] */ FPUSH(R_F32((u32)(r_edi+0x4cu)));
    /* 00711701: fsub dword ptr [0x96f728] */ ST(0) = ST(0) - R_F32((u32)(0x96f728u));
    /* 00711707: fdiv dword ptr [0x96f7b8] */ ST(0) = ST(0) / R_F32((u32)(0x96f7b8u));
    /* 0071170d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071170f: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00711712: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00711716: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0071171b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071171f: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00711723: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00711727: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0071172a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0071172e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071172f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00711732: call 0x83c230 */ r_esp -= 4; W32(r_esp, 0x711737u); f_0083c230();
    /* 00711737: fld dword ptr [0x96f724] */ FPUSH(R_F32((u32)(0x96f724u)));
    /* 0071173d: fsub dword ptr [edi + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x40u));
    /* 00711740: movsx edx, word ptr [0xa983dc] */ r_edx = (u32)(i32)(i16)R16((u32)(0xa983dcu));
    /* 00711747: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711749: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0071174c: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00711750: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00711755: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00711759: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0071175d: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00711761: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00711764: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00711768: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0071176c: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00711770: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00711774: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00711778: fmul dword ptr [0x96f720] */ ST(0) = ST(0) * R_F32((u32)(0x96f720u));
    /* 0071177e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711780: fmul dword ptr [0x96f7b4] */ ST(0) = ST(0) * R_F32((u32)(0x96f7b4u));
    /* 00711786: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00711788: fcom dword ptr [0x96f744] */ fx_compare(ST(0), R_F32((u32)(0x96f744u))); 
    /* 0071178e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00711790: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00711794: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711795: jbe 0x711990 */ if ((fC||fZ)) goto L_00711990;
L_0071179b:; BB(0x0071179b);
    /* 0071179b: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 0071179e: fsub dword ptr [0x96f728] */ ST(0) = ST(0) - R_F32((u32)(0x96f728u));
    /* 007117a4: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007117a8: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007117ac: fmul dword ptr [0x96f73c] */ ST(0) = ST(0) * R_F32((u32)(0x96f73cu));
    /* 007117b2: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 007117b6: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 007117b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007117ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007117bb: jae 0x711990 */ if (!fC) goto L_00711990;
L_007117c1:; BB(0x007117c1);
    /* 007117c1: fld dword ptr [0x96f71c] */ FPUSH(R_F32((u32)(0x96f71cu)));
    /* 007117c7: fmul dword ptr [esi + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x2cu));
    /* 007117ca: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007117cd: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007117d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007117d6: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007117da: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007117de: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 007117e2: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007117e5: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007117e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007117ea: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7117efu); f_0061cdb0();
    /* 007117ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007117f0: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x7117f5u); f_007a902c();
    /* 007117f5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 007117f7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007117f9: jle 0x711986 */ if ((fZ||fS!=fO)) goto L_00711986;
L_007117ff:; BB(0x007117ff);
    /* 007117ff: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
L_00711803:; BB(0x00711803);
    /* 00711803: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711807: fcomp dword ptr [0x96f744] */ fx_compare(ST(0), R_F32((u32)(0x96f744u))); FPOP();
    /* 0071180d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071180f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00711810: jbe 0x71196d */ if ((fC||fZ)) goto L_0071196d;
L_00711816:; BB(0x00711816);
    /* 00711816: fld dword ptr [0x96f728] */ FPUSH(R_F32((u32)(0x96f728u)));
    /* 0071181c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00711820: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711824: fld dword ptr [edx + 0x48] */ FPUSH(R_F32((u32)(r_edx+0x48u)));
    /* 00711827: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00711829: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0071182b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071182d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071182e: jbe 0x7119cd */ if ((fC||fZ)) goto L_007119cd;
L_00711834:; BB(0x00711834);
    /* 00711834: mov dword ptr [esp + 0x64], 0 */ W32((u32)(r_esp+0x64u), 0x0u);
    /* 0071183c: lea edi, [esp + 0x6c] */ r_edi = (u32)(r_esp+0x6cu);
    /* 00711840: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00711844: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00711847: mov dword ptr [esp + 0x68], 3 */ W32((u32)(r_esp+0x68u), 0x3u);
    /* 0071184f: lea edx, [esp + 0x84] */ r_edx = (u32)(r_esp+0x84u);
    /* 00711856: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 0071185a: mov eax, 0x282828 */ r_eax = 0x282828u;
    /* 0071185f: fld dword ptr [esi + 8] */ FPUSH(R_F32((u32)(r_esi+0x8u)));
    /* 00711862: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00711864: fdivr dword ptr [esp + 0x34] */ ST(0) = R_F32((u32)(r_esp+0x34u)) / ST(0);
    /* 00711868: fld dword ptr [0x96f718] */ FPUSH(R_F32((u32)(0x96f718u)));
    /* 0071186e: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 00711875: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 0071187c: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 00711880: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00711883: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00711885: fcom dword ptr [0x96f748] */ fx_compare(ST(0), R_F32((u32)(0x96f748u))); 
    /* 0071188b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071188d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071188e: jbe 0x7118c2 */ if ((fC||fZ)) goto L_007118c2;
L_00711890:; BB(0x00711890);
    /* 00711890: fld dword ptr [0x96f714] */ FPUSH(R_F32((u32)(0x96f714u)));
    /* 00711896: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00711898: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0071189a: fmul dword ptr [0x96f710] */ ST(0) = ST(0) * R_F32((u32)(0x96f710u));
    /* 007118a0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007118a3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007118a7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007118ac: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007118b0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007118b4: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007118b8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007118bb: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 007118c0: jmp 0x7118e6 */ goto L_007118e6;
L_007118c2:; BB(0x007118c2);
    /* 007118c2: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 007118c4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007118c6: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 007118c9: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 007118cd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007118d2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 007118d6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 007118da: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 007118de: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 007118e1: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
L_007118e6:; BB(0x007118e6);
    /* 007118e6: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 007118ea: fld dword ptr [0x96f7bc] */ FPUSH(R_F32((u32)(0x96f7bcu)));
    /* 007118f0: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 007118f4: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 007118f8: fmul dword ptr [0x96f7b8] */ ST(0) = ST(0) * R_F32((u32)(0x96f7b8u));
    /* 007118fe: shl eax, 0x18 */ { u32 c = (24u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00711901: mov ecx, esi */ r_ecx = r_esi;
    /* 00711903: or dword ptr [edx + 4], eax */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00711906: lea eax, [esp + 0x6c] */ r_eax = (u32)(r_esp+0x6cu);
    /* 0071190a: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0071190c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0071190e: fst dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0));
    /* 00711912: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 00711916: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00711918: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0071191a: fadd dword ptr [esi + 8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x8u));
    /* 0071191d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0071191f: fstp dword ptr [esp + 0x74] */ W_F32((u32)(r_esp+0x74u), ST(0)); FPOP();
    /* 00711923: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 00711927: fld dword ptr [esi + 4] */ FPUSH(R_F32((u32)(r_esi+0x4u)));
    /* 0071192a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0071192c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0071192e: fst dword ptr [esp + 0x70] */ W_F32((u32)(r_esp+0x70u), ST(0));
    /* 00711932: fst dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0));
    /* 00711936: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 0071193d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071193e: call 0x71bd34 */ r_esp -= 4; W32(r_esp, 0x711943u); f_0071bd34();
    /* 00711943: lea eax, [esp + 0x74] */ r_eax = (u32)(r_esp+0x74u);
    /* 00711947: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00711948: mov ecx, esi */ r_ecx = r_esi;
    /* 0071194a: call 0x71bd34 */ r_esp -= 4; W32(r_esp, 0x71194fu); f_0071bd34();
    /* 0071194f: lea eax, [esp + 0x7c] */ r_eax = (u32)(r_esp+0x7cu);
    /* 00711953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00711954: mov ecx, esi */ r_ecx = r_esi;
    /* 00711956: call 0x71bd34 */ r_esp -= 4; W32(r_esp, 0x71195bu); f_0071bd34();
    /* 0071195b: lea eax, [esp + 0x5c] */ r_eax = (u32)(r_esp+0x5cu);
    /* 0071195f: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00711961: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00711962: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00711964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00711965: call 0x82b558 */ r_esp -= 4; W32(r_esp, 0x71196au); f_0082b558();
    /* 0071196a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0071196d:; BB(0x0071196d);
    /* 0071196d: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00711971: fsub dword ptr [0x96f714] */ ST(0) = ST(0) - R_F32((u32)(0x96f714u));
    /* 00711977: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0071197b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0071197e: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00711980: jl 0x711803 */ if ((fS!=fO)) goto L_00711803;
L_00711986:; BB(0x00711986);
    /* 00711986: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x71198bu); f_007a9044();
    /* 0071198b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x711990u); f_0061cdb0();
L_00711990:; BB(0x00711990);
    /* 00711990: add esp, 0x90 */ {  u32 a = r_esp; u32 b = 0x90u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00711996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00711997: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00711998: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00711999: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071199a: ret 4 */ FN_RET(0x00710f80); r_esp += 8; return;
L_0071199d:; BB(0x0071199d);
    /* 0071199d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0071199f: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 007119a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007119a3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 007119a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007119a7: jmp 0x711242 */ goto L_00711242;
L_007119ac:; BB(0x007119ac);
    /* 007119ac: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119ae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119b0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007119b2: jmp 0x71145d */ goto L_0071145d;
L_007119b7:; BB(0x007119b7);
    /* 007119b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119b9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 007119bb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119bd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119bf: jmp 0x7116cd */ goto L_007116cd;
L_007119c4:; BB(0x007119c4);
    /* 007119c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119c8: jmp 0x7116a2 */ goto L_007116a2;
L_007119cd:; BB(0x007119cd);
    /* 007119cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007119cf: jmp 0x71196d */ goto L_0071196d;
}

