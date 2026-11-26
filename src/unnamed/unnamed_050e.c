#include "protos.h"

void f_0050e618(void) /* sub_50E618 */
{
    FN_ENTER(0x0050e618);
    /* 0050e618: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e619: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e61c: mov edi, ecx */ r_edi = r_ecx;
    /* 0050e61e: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0050e621: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 0050e628: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e62b: jne 0x50e652 */ if (!fZ) goto L_0050e652;
L_0050e62d:; BB(0x0050e62d);
    /* 0050e62d: fld dword ptr [edi + 0x5c] */ FPUSH(R_F32((u32)(r_edi+0x5cu)));
    /* 0050e630: fcomp dword ptr [0x92041c] */ fx_compare(ST(0), R_F32((u32)(0x92041cu))); FPOP();
    /* 0050e636: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e638: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e639: jb 0x50e64d */ if (fC) goto L_0050e64d;
L_0050e63b:; BB(0x0050e63b);
    /* 0050e63b: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0050e63f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e644: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0050e648: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e64b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e64c: ret  */ FN_RET(0x0050e618); r_esp += 4; return;
L_0050e64d:; BB(0x0050e64d);
    /* 0050e64d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e650: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e651: ret  */ FN_RET(0x0050e618); r_esp += 4; return;
L_0050e652:; BB(0x0050e652);
    /* 0050e652: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0050e655: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0050e658: fsub dword ptr [edi + 0x34] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x34u));
    /* 0050e65b: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 0050e65e: fsub dword ptr [edi + 0x38] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x38u));
    /* 0050e661: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 0050e664: fsub dword ptr [edi + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x3cu));
    /* 0050e667: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e669: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0050e66c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0050e670: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0050e674: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x50e679u); f_0082def4();
    /* 0050e679: fcomp dword ptr [0x920420] */ fx_compare(ST(0), R_F32((u32)(0x920420u))); FPOP();
    /* 0050e67f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050e681: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050e682: jne 0x50e62d */ if (!fZ) goto L_0050e62d;
L_0050e684:; BB(0x0050e684);
    /* 0050e684: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 0050e688: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e68d: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 0050e691: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e694: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e695: ret  */ FN_RET(0x0050e618); r_esp += 4; return;
}

void f_0050e698(void) /* sub_50E698 */
{
    FN_ENTER(0x0050e698);
    /* 0050e698: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e699: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e69a: sub esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050e6a0: mov edi, ecx */ r_edi = r_ecx;
    /* 0050e6a2: mov ecx, edi */ r_ecx = r_edi;
    /* 0050e6a4: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x50e6a9u); f_008173b4();
    /* 0050e6a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e6ab: je 0x50e89e */ if (fZ) goto L_0050e89e;
L_0050e6b1:; BB(0x0050e6b1);
    /* 0050e6b1: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0050e6b4: movzx eax, byte ptr [eax + 0x88] */ r_eax = (u32)R8((u32)(r_eax+0x88u));
    /* 0050e6bb: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e6bd: je 0x50e7e0 */ if (fZ) goto L_0050e7e0;
L_0050e6c3:; BB(0x0050e6c3);
    /* 0050e6c3: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e6c7: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0050e6ca: mov edx, dword ptr [edi + 0x74] */ r_edx = R32((u32)(r_edi+0x74u));
    /* 0050e6cd: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e6cf: je 0x50e6fd */ if (fZ) goto L_0050e6fd;
L_0050e6d1:; BB(0x0050e6d1);
    /* 0050e6d1: fld dword ptr [edi + 0x80] */ FPUSH(R_F32((u32)(r_edi+0x80u)));
    /* 0050e6d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050e6d9: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 0050e6dc: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 0050e6e2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e6e4: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 0050e6e8: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 0050e6eb: fadd dword ptr [edi + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x84u));
    /* 0050e6f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e6f3: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 0050e6f7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 0050e6fb: jmp 0x50e711 */ goto L_0050e711;
L_0050e6fd:; BB(0x0050e6fd);
    /* 0050e6fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050e6ff: mov eax, dword ptr [edi + 0x78] */ r_eax = R32((u32)(r_edi+0x78u));
    /* 0050e702: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0050e706: mov edx, dword ptr [edi + 0x7c] */ r_edx = R32((u32)(r_edi+0x7cu));
    /* 0050e709: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0050e70d: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
L_0050e711:; BB(0x0050e711);
    /* 0050e711: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 0050e715: fadd dword ptr [edi + 0x118] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x118u));
    /* 0050e71b: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 0050e71f: fadd dword ptr [edi + 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x11cu));
    /* 0050e725: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 0050e729: fadd dword ptr [edi + 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x120u));
    /* 0050e72f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e731: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0050e735: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 0050e739: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 0050e73d: lea ecx, [edi + 0x118] */ r_ecx = (u32)(r_edi+0x118u);
    /* 0050e743: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x50e748u); f_0083173c();
    /* 0050e748: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0050e74c: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0050e750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e751: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0050e755: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e757: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x50e75cu); f_0082f09c();
    /* 0050e75c: lea eax, [esp + 0x44] */ r_eax = (u32)(r_esp+0x44u);
    /* 0050e760: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e761: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 0050e765: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e767: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x50e76cu); f_0082f09c();
    /* 0050e76c: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0050e770: fsub dword ptr [esp + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x3cu));
    /* 0050e774: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 0050e778: fsub dword ptr [esp + 0x40] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x40u));
    /* 0050e77c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e77e: fst dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0));
    /* 0050e782: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e784: fst dword ptr [esp + 0x48] */ W_F32((u32)(r_esp+0x48u), ST(0));
    /* 0050e788: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e78a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 0050e78c: fmul qword ptr [0x9203a8] */ ST(0) = ST(0) * R_F64((u32)(0x9203a8u));
    /* 0050e792: fdiv qword ptr [0x9203a0] */ ST(0) = ST(0) / R_F64((u32)(0x9203a0u));
    /* 0050e798: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 0050e79b: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0050e79f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e7a1: fnstcw word ptr [esp + 0x64] */ W16((u32)(r_esp+0x64u), fcw);
    /* 0050e7a5: movzx eax, word ptr [esp + 0x64] */ r_eax = (u32)R16((u32)(r_esp+0x64u));
    /* 0050e7aa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e7af: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 0050e7b3: fldcw word ptr [esp + 0x6c] */ fcw = R16((u32)(r_esp+0x6cu));
    /* 0050e7b7: fistp dword ptr [esp + 0x74] */ W32((u32)(r_esp+0x74u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050e7bb: fldcw word ptr [esp + 0x64] */ fcw = R16((u32)(r_esp+0x64u));
    /* 0050e7bf: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 0050e7c3: mov word ptr [edi + 0x9a], ax */ W16((u32)(r_edi+0x9au), (u16)r_eax);
    /* 0050e7ca: fld dword ptr [edx + 0x64] */ FPUSH(R_F32((u32)(r_edx+0x64u)));
    /* 0050e7cd: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050e7cf: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e7d3: fst dword ptr [edi + 0x8c] */ W_F32((u32)(r_edi+0x8cu), ST(0));
    /* 0050e7d9: fld dword ptr [edx + 0x68] */ FPUSH(R_F32((u32)(r_edx+0x68u)));
    /* 0050e7dc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050e7de: jmp 0x50e7f4 */ goto L_0050e7f4;
L_0050e7e0:; BB(0x0050e7e0);
    /* 0050e7e0: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e7e2: jne 0x50ea93 */ if (!fZ) goto L_0050ea93;
L_0050e7e8:; BB(0x0050e7e8);
    /* 0050e7e8: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0050e7eb: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0050e7ee: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e7f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0050e7f4:; BB(0x0050e7f4);
    /* 0050e7f4: fmul dword ptr [edi + 0xa8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xa8u));
    /* 0050e7fa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e7fc: fmul dword ptr [edi + 0xac] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xacu));
    /* 0050e802: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050e804: fstp dword ptr [edi + 0x8c] */ W_F32((u32)(r_edi+0x8cu), ST(0)); FPOP();
    /* 0050e80a: fstp dword ptr [edi + 0x90] */ W_F32((u32)(r_edi+0x90u), ST(0)); FPOP();
    /* 0050e810: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e815: jne 0x50e8b7 */ if (!fZ) goto L_0050e8b7;
L_0050e81b:; BB(0x0050e81b);
    /* 0050e81b: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e820: jne 0x50e8a7 */ if (!fZ) goto L_0050e8a7;
L_0050e826:; BB(0x0050e826);
    /* 0050e826: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e82b: je 0x50e85e */ if (fZ) goto L_0050e85e;
L_0050e82d:; BB(0x0050e82d);
    /* 0050e82d: movzx ebp, word ptr [edi + 0x1c] */ r_ebp = (u32)R16((u32)(r_edi+0x1cu));
    /* 0050e831: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0050e834: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 0050e83b: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e83e: je 0x50e843 */ if (fZ) goto L_0050e843;
L_0050e840:; BB(0x0050e840);
    /* 0050e840: add ebp, 0x36 */ {  u32 a = r_ebp; u32 b = 0x36u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_0050e843:; BB(0x0050e843);
    /* 0050e843: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x50e848u); f_007a93d8();
    /* 0050e848: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e849: mov ecx, edi */ r_ecx = r_edi;
    /* 0050e84b: call 0x50864c */ r_esp -= 4; W32(r_esp, 0x50e850u); f_0050864c();
    /* 0050e850: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x50e855u); f_007a9318();
    /* 0050e855: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e85b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e85c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e85d: ret  */ FN_RET(0x0050e698); r_esp += 4; return;
L_0050e85e:; BB(0x0050e85e);
    /* 0050e85e: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0050e861: movzx edx, byte ptr [eax + 0x88] */ r_edx = (u32)R8((u32)(r_eax+0x88u));
    /* 0050e868: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050e86b: je 0x50e88a */ if (fZ) goto L_0050e88a;
L_0050e86d:; BB(0x0050e86d);
    /* 0050e86d: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0050e871: mov ecx, dword ptr [eax*4 + 0xaaeef8] */ r_ecx = R32((u32)(r_eax*4+0xaaeef8u));
    /* 0050e878: add edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e87b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e87c: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x50e881u); f_00801090();
    /* 0050e881: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e887: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e888: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e889: ret  */ FN_RET(0x0050e698); r_esp += 4; return;
L_0050e88a:; BB(0x0050e88a);
    /* 0050e88a: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 0050e88e: mov ecx, dword ptr [eax*4 + 0xaaee20] */ r_ecx = R32((u32)(r_eax*4+0xaaee20u));
    /* 0050e895: add edi, 0x70 */ {  u32 a = r_edi; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050e898: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050e899: call 0x801090 */ r_esp -= 4; W32(r_esp, 0x50e89eu); f_00801090();
L_0050e89e:; BB(0x0050e89e);
    /* 0050e89e: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e8a4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e8a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e8a6: ret  */ FN_RET(0x0050e698); r_esp += 4; return;
L_0050e8a7:; BB(0x0050e8a7);
    /* 0050e8a7: mov ecx, edi */ r_ecx = r_edi;
    /* 0050e8a9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50e8aeu); f_0061cdb0();
    /* 0050e8ae: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050e8b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050e8b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050e8b6: ret  */ FN_RET(0x0050e698); r_esp += 4; return;
L_0050e8b7:; BB(0x0050e8b7);
    /* 0050e8b7: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x50e8bcu); f_00505a20();
    /* 0050e8bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8be: jne 0x50e8cb */ if (!fZ) goto L_0050e8cb;
L_0050e8c0:; BB(0x0050e8c0);
    /* 0050e8c0: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e8c4: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8c9: jne 0x50e89e */ if (!fZ) goto L_0050e89e;
L_0050e8cb:; BB(0x0050e8cb);
    /* 0050e8cb: mov eax, dword ptr [edi + 0x108] */ r_eax = R32((u32)(r_edi+0x108u));
    /* 0050e8d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8d3: je 0x50e89e */ if (fZ) goto L_0050e89e;
L_0050e8d5:; BB(0x0050e8d5);
    /* 0050e8d5: mov eax, dword ptr [edi + 0x104] */ r_eax = R32((u32)(r_edi+0x104u));
    /* 0050e8db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e8dd: je 0x50e89e */ if (fZ) goto L_0050e89e;
L_0050e8df:; BB(0x0050e8df);
    /* 0050e8df: mov eax, dword ptr [0x920370] */ r_eax = R32((u32)(0x920370u));
    /* 0050e8e4: mov edx, dword ptr [0x920374] */ r_edx = R32((u32)(0x920374u));
    /* 0050e8ea: mov ebp, dword ptr [0x920378] */ r_ebp = R32((u32)(0x920378u));
    /* 0050e8f0: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 0050e8f3: fadd dword ptr [edi + 0x80] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x80u));
    /* 0050e8f9: fld dword ptr [edi + 0x78] */ FPUSH(R_F32((u32)(r_edi+0x78u)));
    /* 0050e8fc: fadd dword ptr [edi + 0x84] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x84u));
    /* 0050e902: fld dword ptr [edi + 0x7c] */ FPUSH(R_F32((u32)(r_edi+0x7cu)));
    /* 0050e905: fadd dword ptr [edi + 0x88] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x88u));
    /* 0050e90b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050e90d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0050e911: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 0050e915: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 0050e919: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 0050e91d: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 0050e921: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 0050e925: lea edx, [esp + 0x58] */ r_edx = (u32)(r_esp+0x58u);
    /* 0050e929: lea eax, [esp + 0x60] */ r_eax = (u32)(r_esp+0x60u);
    /* 0050e92d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e92e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050e92f: lea ebp, [edi + 0x118] */ r_ebp = (u32)(r_edi+0x118u);
    /* 0050e935: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050e936: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x50e93bu); f_007a8d98();
    /* 0050e93b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050e93e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x50e943u); f_0082d7b0();
    /* 0050e943: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 0050e947: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x50e94cu); f_0082d838();
    /* 0050e94c: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 0050e952: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e953: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e954: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050e957: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x50e95cu); f_0082fa0c();
    /* 0050e95c: mov edx, dword ptr [esp + 0x60] */ r_edx = R32((u32)(r_esp+0x60u));
    /* 0050e960: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e962: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x50e967u); f_00830c04();
    /* 0050e967: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0050e96b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e96d: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50e972u); f_0082e9e4();
    /* 0050e972: movzx edx, word ptr [edi + 0x24] */ r_edx = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e976: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e97c: je 0x50e99a */ if (fZ) goto L_0050e99a;
L_0050e97e:; BB(0x0050e97e);
    /* 0050e97e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050e983: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e985: je 0x50e9b7 */ if (fZ) goto L_0050e9b7;
L_0050e987:; BB(0x0050e987);
    /* 0050e987: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 0050e98d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e98f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50e994u); f_0082d8bc();
    /* 0050e994: movzx edx, word ptr [edi + 0x24] */ r_edx = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e998: jmp 0x50e9b7 */ goto L_0050e9b7;
L_0050e99a:; BB(0x0050e99a);
    /* 0050e99a: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0050e99e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e9a0: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50e9a5u); f_0082d8bc();
    /* 0050e9a5: movsx edx, word ptr [edi + 0x9a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x9au));
    /* 0050e9ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050e9ae: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50e9b3u); f_0082d8bc();
    /* 0050e9b3: movzx edx, word ptr [edi + 0x24] */ r_edx = (u32)R16((u32)(r_edi+0x24u));
L_0050e9b7:; BB(0x0050e9b7);
    /* 0050e9b7: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e9bd: jne 0x50ea83 */ if (!fZ) goto L_0050ea83;
L_0050e9c3:; BB(0x0050e9c3);
    /* 0050e9c3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x50e9c8u); f_0082dbac();
    /* 0050e9c8: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050e9cc: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e9d1: jne 0x50ea79 */ if (!fZ) goto L_0050ea79;
L_0050e9d7:; BB(0x0050e9d7);
    /* 0050e9d7: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0050e9dc: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 0050e9e1: mov ecx, edi */ r_ecx = r_edi;
    /* 0050e9e3: or eax, 0x8021 */ {  u32 a = r_eax; u32 b = 0x8021u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050e9e8: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0050e9ed: call 0x508a30 */ r_esp -= 4; W32(r_esp, 0x50e9f2u); f_00508a30();
    /* 0050e9f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050e9f4: je 0x50ea01 */ if (fZ) goto L_0050ea01;
L_0050e9f6:; BB(0x0050e9f6);
    /* 0050e9f6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0050e9f8: mov ecx, edi */ r_ecx = r_edi;
    /* 0050e9fa: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x50e9ffu); f_00508958();
    /* 0050e9ff: jmp 0x50ea0a */ goto L_0050ea0a;
L_0050ea01:; BB(0x0050ea01);
    /* 0050ea01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea03: mov ecx, edi */ r_ecx = r_edi;
    /* 0050ea05: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x50ea0au); f_00508958();
L_0050ea0a:; BB(0x0050ea0a);
    /* 0050ea0a: mov ecx, dword ptr [edi + 0x108] */ r_ecx = R32((u32)(r_edi+0x108u));
    /* 0050ea10: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x50ea15u); f_00829cc8();
    /* 0050ea15: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea17: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x50ea1cu); f_007a94a0();
    /* 0050ea1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ea1d: mov edx, dword ptr [edi + 0x10c] */ r_edx = R32((u32)(r_edi+0x10cu));
    /* 0050ea23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea25: je 0x50ea6c */ if (fZ) goto L_0050ea6c;
L_0050ea27:; BB(0x0050ea27);
    /* 0050ea27: push dword ptr [edi + 0x110] */ { u32 v = R32((u32)(r_edi+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ea2d: mov ecx, dword ptr [edi + 0x104] */ r_ecx = R32((u32)(r_edi+0x104u));
    /* 0050ea33: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x50ea38u); f_0083bd00();
L_0050ea38:; BB(0x0050ea38);
    /* 0050ea38: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050ea3c: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea41: jne 0x50ea65 */ if (!fZ) goto L_0050ea65;
L_0050ea43:; BB(0x0050ea43);
    /* 0050ea43: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0050ea48: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0050ea4d:; BB(0x0050ea4d);
    /* 0050ea4d: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x50ea52u); f_007a94b0();
    /* 0050ea52: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x50ea57u); f_0082dab0();
    /* 0050ea57: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50ea5cu); f_0082da80();
    /* 0050ea5c: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050ea62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ea63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050ea64: ret  */ FN_RET(0x0050e698); r_esp += 4; return;
L_0050ea65:; BB(0x0050ea65);
    /* 0050ea65: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x50ea6au); f_005022a0();
    /* 0050ea6a: jmp 0x50ea4d */ goto L_0050ea4d;
L_0050ea6c:; BB(0x0050ea6c);
    /* 0050ea6c: mov ecx, dword ptr [edi + 0x104] */ r_ecx = R32((u32)(r_edi+0x104u));
    /* 0050ea72: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x50ea77u); f_00831758();
    /* 0050ea77: jmp 0x50ea38 */ goto L_0050ea38;
L_0050ea79:; BB(0x0050ea79);
    /* 0050ea79: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea7b: call 0x501fb8 */ r_esp -= 4; W32(r_esp, 0x50ea80u); f_00501fb8();
    /* 0050ea80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ea81: jmp 0x50ea0a */ goto L_0050ea0a;
L_0050ea83:; BB(0x0050ea83);
    /* 0050ea83: push 0x3faa3d71 */ { u32 v = 0x3faa3d71u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea88: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x50ea8du); f_0061cdb0();
    /* 0050ea8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ea8e: jmp 0x50e9c3 */ goto L_0050e9c3;
L_0050ea93:; BB(0x0050ea93);
    /* 0050ea93: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0050ea9a: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050ea9f: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0050eaa7: mov dword ptr [esp + 8], 0xbf800000 */ W32((u32)(r_esp+0x8u), 0xbf800000u);
    /* 0050eaaf: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0050eab7: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 0050eabf: mov dword ptr [esp + 0x14], 0xbf800000 */ W32((u32)(r_esp+0x14u), 0xbf800000u);
    /* 0050eac7: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 0050eacf: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 0050ead7: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 0050eadf: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50eae4u); f_0082d990();
    /* 0050eae4: mov edx, dword ptr [edi + 0xa0] */ r_edx = R32((u32)(r_edi+0xa0u));
    /* 0050eaea: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050eaec: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50eaf1u); f_0082d8bc();
    /* 0050eaf1: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 0050eaf5: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 0050eaf9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eafa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eafb: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50eb00u); f_0083a610();
    /* 0050eb00: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eb03: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50eb08u); f_0082da80();
    /* 0050eb08: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050eb0d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50eb12u); f_0082d990();
    /* 0050eb12: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050eb17: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 0050eb1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050eb1f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50eb24u); f_0082d8bc();
    /* 0050eb24: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0050eb27: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0050eb2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb2c: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50eb31u); f_0083a610();
    /* 0050eb31: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eb34: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50eb39u); f_0082da80();
    /* 0050eb39: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050eb3e: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x50eb43u); f_0082d990();
    /* 0050eb43: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 0050eb48: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 0050eb4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050eb50: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50eb55u); f_0082d8bc();
    /* 0050eb55: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0050eb59: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0050eb5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050eb5f: call 0x83a610 */ r_esp -= 4; W32(r_esp, 0x50eb64u); f_0083a610();
    /* 0050eb64: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eb67: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50eb6cu); f_0082da80();
    /* 0050eb6c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0050eb70: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0050eb73: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x50eb78u); f_0082f9e0();
    /* 0050eb78: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0050eb7c: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 0050eb80: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0050eb84: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x50eb89u); f_0082f9e0();
    /* 0050eb89: fld dword ptr [esp + 0x7c] */ FPUSH(R_F32((u32)(r_esp+0x7cu)));
    /* 0050eb8d: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050eb91: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050eb93: fabs  */ ST(0) = fabsl(ST(0));
    /* 0050eb95: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050eb97: fabs  */ ST(0) = fabsl(ST(0));
    /* 0050eb99: fstp dword ptr [esp + 0x7c] */ W_F32((u32)(r_esp+0x7cu), ST(0)); FPOP();
    /* 0050eb9d: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050eb9f: je 0x50ebae */ if (fZ) goto L_0050ebae;
L_0050eba1:; BB(0x0050eba1);
    /* 0050eba1: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0050eba4: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0050eba7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050eba9: jmp 0x50e7f4 */ goto L_0050e7f4;
L_0050ebae:; BB(0x0050ebae);
    /* 0050ebae: fld dword ptr [edi + 0x2c] */ FPUSH(R_F32((u32)(r_edi+0x2cu)));
    /* 0050ebb1: fmul dword ptr [esp + 0x7c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x7cu));
    /* 0050ebb5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ebb7: je 0x50ebc5 */ if (fZ) goto L_0050ebc5;
L_0050ebb9:; BB(0x0050ebb9);
    /* 0050ebb9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0050ebbb: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0050ebbe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050ebc0: jmp 0x50e7f4 */ goto L_0050e7f4;
L_0050ebc5:; BB(0x0050ebc5);
    /* 0050ebc5: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 0050ebc8: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050ebca: jmp 0x50e7f4 */ goto L_0050e7f4;
}

void f_0050ea00(void)
{
    FN_ENTER(0x0050ea00);
    /* 0050ea00: or dword ptr [edx], ebp */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0050ea03: mov ecx, edi */ r_ecx = r_edi;
    /* 0050ea05: call 0x508958 */ r_esp -= 4; W32(r_esp, 0x50ea0au); f_00508958();
    /* 0050ea0a: mov ecx, dword ptr [edi + 0x108] */ r_ecx = R32((u32)(r_edi+0x108u));
    /* 0050ea10: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x50ea15u); f_00829cc8();
    /* 0050ea15: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ea17: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x50ea1cu); f_007a94a0();
    /* 0050ea1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ea1d: mov edx, dword ptr [edi + 0x10c] */ r_edx = R32((u32)(r_edi+0x10cu));
    /* 0050ea23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea25: je 0x50ea6c */ if (fZ) goto L_0050ea6c;
L_0050ea27:; BB(0x0050ea27);
    /* 0050ea27: push dword ptr [edi + 0x110] */ { u32 v = R32((u32)(r_edi+0x110u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ea2d: mov ecx, dword ptr [edi + 0x104] */ r_ecx = R32((u32)(r_edi+0x104u));
    /* 0050ea33: call 0x83bd00 */ r_esp -= 4; W32(r_esp, 0x50ea38u); f_0083bd00();
L_0050ea38:; BB(0x0050ea38);
    /* 0050ea38: movzx eax, word ptr [edi + 0x24] */ r_eax = (u32)R16((u32)(r_edi+0x24u));
    /* 0050ea3c: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ea41: jne 0x50ea65 */ if (!fZ) goto L_0050ea65;
L_0050ea43:; BB(0x0050ea43);
    /* 0050ea43: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 0050ea48: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
L_0050ea4d:; BB(0x0050ea4d);
    /* 0050ea4d: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x50ea52u); f_007a94b0();
    /* 0050ea52: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x50ea57u); f_0082dab0();
    /* 0050ea57: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x50ea5cu); f_0082da80();
    /* 0050ea5c: add esp, 0x80 */ {  u32 a = r_esp; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050ea62: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ea63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050ea64: ret  */ FN_RET(0x0050ea00); r_esp += 4; return;
L_0050ea65:; BB(0x0050ea65);
    /* 0050ea65: call 0x5022a0 */ r_esp -= 4; W32(r_esp, 0x50ea6au); f_005022a0();
    /* 0050ea6a: jmp 0x50ea4d */ goto L_0050ea4d;
L_0050ea6c:; BB(0x0050ea6c);
    /* 0050ea6c: mov ecx, dword ptr [edi + 0x104] */ r_ecx = R32((u32)(r_edi+0x104u));
    /* 0050ea72: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x50ea77u); f_00831758();
    /* 0050ea77: jmp 0x50ea38 */ goto L_0050ea38;
}

void f_0050ebd0(void) /* sub_50EBD0 */
{
    FN_ENTER(0x0050ebd0);
    /* 0050ebd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ebd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebd5: push 0x8d4018 */ { u32 v = 0x8d4018u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050ebe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebe1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050ebe8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ebeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050ebee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050ebf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050ebf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050ebf7: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ebfc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050ec03: call 0x508424 */ r_esp -= 4; W32(r_esp, 0x50ec08u); f_00508424();
    /* 0050ec08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ec09: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050ec0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ec0e: je 0x50ec47 */ if (fZ) goto L_0050ec47;
L_0050ec10:; BB(0x0050ec10);
    /* 0050ec10: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0050ec17: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050ec1e: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ec21: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ec24: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ec27: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050ec2a: call 0x50ec4c */ r_esp -= 4; W32(r_esp, 0x50ec2fu); f_0050ec4c();
    /* 0050ec2f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050ec32: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0050ec39:; BB(0x0050ec39);
    /* 0050ec39: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ec3c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050ec43: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ec45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ec46: ret  */ FN_RET(0x0050ebd0); r_esp += 4; return;
L_0050ec47:; BB(0x0050ec47);
    /* 0050ec47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ec49: jmp 0x50ec39 */ goto L_0050ec39;
}

void f_0050ec4c(void) /* sub_50EC4C */
{
    FN_ENTER(0x0050ec4c);
    /* 0050ec4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ec4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec51: push 0x8d4034 */ { u32 v = 0x8d4034u; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050ec5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050ec64: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ec67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050ec6a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0050ec6d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050ec70: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050ec73: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0050ec76: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050ec79: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0050ec7c: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0050ec7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ec80: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0050ec83: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0050ec86: call 0x508460 */ r_esp -= 4; W32(r_esp, 0x50ec8bu); f_00508460();
    /* 0050ec8b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050ec92: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ec95: mov dword ptr [eax], 0xaff4a8 */ W32((u32)(r_eax), 0xaff4a8u);
    /* 0050ec9b: mov dword ptr [eax + 0x118], 0 */ W32((u32)(r_eax+0x118u), 0x0u);
    /* 0050eca5: mov dword ptr [eax + 0x11c], 0 */ W32((u32)(r_eax+0x11cu), 0x0u);
    /* 0050ecaf: mov dword ptr [eax + 0x120], 0 */ W32((u32)(r_eax+0x120u), 0x0u);
    /* 0050ecb9: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ecbeu); f_008587a5();
    /* 0050ecbe: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ecc1: mov ecx, dword ptr [ebp - 0x50] */ r_ecx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ecc4: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0050ecc7: fild dword ptr [ebp - 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb4u)));
    /* 0050ecca: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ecd0: fadd dword ptr [0x920410] */ ST(0) = ST(0) + R_F32((u32)(0x920410u));
    /* 0050ecd6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ecd9: fmul dword ptr [eax + 0x18] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x18u));
    /* 0050ecdc: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 0050ecde: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 0050ece1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ece6u); f_008587a5();
    /* 0050ece6: mov edx, eax */ r_edx = r_eax;
    /* 0050ece8: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050eceb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ecee: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0050ecf1: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ecf4: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ecfa: fadd dword ptr [0x920410] */ ST(0) = ST(0) + R_F32((u32)(0x920410u));
    /* 0050ed00: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ed03: fmul dword ptr [ecx + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x20u));
    /* 0050ed06: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 0050ed09: fstp dword ptr [eax + 0x7c] */ W_F32((u32)(r_eax+0x7cu), ST(0)); FPOP();
    /* 0050ed0c: movzx ebx, byte ptr [ecx + 0x88] */ r_ebx = (u32)R8((u32)(r_ecx+0x88u));
    /* 0050ed13: test bl, 2 */ {  u32 a = (u8)r_ebx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050ed16: je 0x50ed28 */ if (fZ) goto L_0050ed28;
L_0050ed18:; BB(0x0050ed18);
    /* 0050ed18: mov edx, ecx */ r_edx = r_ecx;
    /* 0050ed1a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ed1d: fld dword ptr [edx + 0x1c] */ FPUSH(R_F32((u32)(r_edx+0x1cu)));
    /* 0050ed20: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0050ed23: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
    /* 0050ed26: jmp 0x50ed53 */ goto L_0050ed53;
L_0050ed28:; BB(0x0050ed28);
    /* 0050ed28: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ed2du); f_008587a5();
    /* 0050ed2d: mov edx, eax */ r_edx = r_eax;
    /* 0050ed2f: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ed32: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0050ed35: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0050ed38: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ed3b: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ed41: fadd dword ptr [0x920410] */ ST(0) = ST(0) + R_F32((u32)(0x920410u));
    /* 0050ed47: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0050ed4a: fmul dword ptr [edx + 0x1c] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x1cu));
    /* 0050ed4d: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 0050ed50: fstp dword ptr [eax + 0x78] */ W_F32((u32)(r_eax+0x78u), ST(0)); FPOP();
L_0050ed53:; BB(0x0050ed53);
    /* 0050ed53: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050ed55: mov esi, edx */ r_esi = r_edx;
    /* 0050ed57: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0050ed59: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0050ed5c: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 0050ed5f: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0050ed62: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0050ed65: movzx edi, byte ptr [esi + 0x88] */ r_edi = (u32)R8((u32)(r_esi+0x88u));
    /* 0050ed6c: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050ed72: je 0x50ed79 */ if (fZ) goto L_0050ed79;
L_0050ed74:; BB(0x0050ed74);
    /* 0050ed74: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0050ed77: jmp 0x50ed7c */ goto L_0050ed7c;
L_0050ed79:; BB(0x0050ed79);
    /* 0050ed79: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
L_0050ed7c:; BB(0x0050ed7c);
    /* 0050ed7c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ed81u); f_008587a5();
    /* 0050ed81: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ed84: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050ed87: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ed8a: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ed90: mov eax, esi */ r_eax = r_esi;
    /* 0050ed92: fmul dword ptr [eax + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x28u));
    /* 0050ed95: fadd dword ptr [eax + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x24u));
    /* 0050ed98: fst dword ptr [edx + 0x2c] */ W_F32((u32)(r_edx+0x2cu), ST(0));
    /* 0050ed9b: fstp dword ptr [edx + 0x30] */ W_F32((u32)(r_edx+0x30u), ST(0)); FPOP();
    /* 0050ed9e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50eda3u); f_008587a5();
    /* 0050eda3: mov edx, esi */ r_edx = r_esi;
    /* 0050eda5: fild dword ptr [edx + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x48u)));
    /* 0050eda8: fild dword ptr [edx + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4cu)));
    /* 0050edab: movzx ecx, byte ptr [edx + 0x88] */ r_ecx = (u32)R8((u32)(r_edx+0x88u));
    /* 0050edb2: fld dword ptr [0x920408] */ FPUSH(R_F32((u32)(0x920408u)));
    /* 0050edb8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050edbb: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050edbe: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050edc4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0050edc6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050edc8: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0050edca: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050edcc: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0050edcf: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050edd3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050edd8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050eddb: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0050edde: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050ede1: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0050ede4: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ede7: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0050edea: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0050eded: je 0x50ee07 */ if (fZ) goto L_0050ee07;
L_0050edef:; BB(0x0050edef);
    /* 0050edef: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0050edf3: mov ecx, dword ptr [edx*4 + 0xaaee20] */ r_ecx = R32((u32)(r_edx*4+0xaaee20u));
    /* 0050edfa: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 0050edfd: fild dword ptr [ebx + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0xcu)));
    /* 0050ee00: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050ee02: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
    /* 0050ee05: jmp 0x50ee12 */ goto L_0050ee12;
L_0050ee07:; BB(0x0050ee07);
    /* 0050ee07: mov dword ptr [ebp - 0x44], ebx */ W32((u32)(r_ebp+0xffffffbcu), r_ebx);
    /* 0050ee0a: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ee0d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0050ee0f: fstp dword ptr [eax + 0x60] */ W_F32((u32)(r_eax+0x60u), ST(0)); FPOP();
L_0050ee12:; BB(0x0050ee12);
    /* 0050ee12: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ee17u); f_008587a5();
    /* 0050ee17: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ee1a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050ee1d: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ee20: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ee26: mov eax, esi */ r_eax = r_esi;
    /* 0050ee28: fmul dword ptr [eax + 0x38] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x38u));
    /* 0050ee2b: fadd dword ptr [eax + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x30u));
    /* 0050ee2e: fstp dword ptr [edx + 0x40] */ W_F32((u32)(r_edx+0x40u), ST(0)); FPOP();
    /* 0050ee31: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ee36u); f_008587a5();
    /* 0050ee36: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ee39: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050ee3c: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ee3f: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ee45: mov eax, esi */ r_eax = r_esi;
    /* 0050ee47: fmul dword ptr [eax + 0x3c] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3cu));
    /* 0050ee4a: fadd dword ptr [eax + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x34u));
    /* 0050ee4d: fstp dword ptr [edx + 0x44] */ W_F32((u32)(r_edx+0x44u), ST(0)); FPOP();
    /* 0050ee50: mov dword ptr [edx + 0x48], 0 */ W32((u32)(r_edx+0x48u), 0x0u);
    /* 0050ee57: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ee5cu); f_008587a5();
    /* 0050ee5c: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ee5f: fld dword ptr [0x920404] */ FPUSH(R_F32((u32)(0x920404u)));
    /* 0050ee65: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050ee68: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ee6b: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ee71: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050ee73: add edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050ee76: fmul dword ptr [0x920400] */ ST(0) = ST(0) * R_F32((u32)(0x920400u));
    /* 0050ee7c: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0050ee7e: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0050ee81: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050ee85: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050ee8a: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050ee8d: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0050ee90: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050ee93: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0050ee96: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0050ee99: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee9a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050ee9c: call 0x7829f4 */ r_esp -= 4; W32(r_esp, 0x50eea1u); f_007829f4();
    /* 0050eea1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050eea4: fld dword ptr [0x920414] */ FPUSH(R_F32((u32)(0x920414u)));
    /* 0050eeaa: mov edx, esi */ r_edx = r_esi;
    /* 0050eeac: fcom dword ptr [edx + 0x54] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x54u))); 
    /* 0050eeaf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050eeb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050eeb2: je 0x50ef50 */ if (fZ) goto L_0050ef50;
L_0050eeb8:; BB(0x0050eeb8);
    /* 0050eeb8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050eeba: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50eebfu); f_008587a5();
    /* 0050eebf: fld dword ptr [0x920404] */ FPUSH(R_F32((u32)(0x920404u)));
    /* 0050eec5: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050eec8: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050eecb: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050eece: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050eed4: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050eed6: fmul dword ptr [0x920400] */ ST(0) = ST(0) * R_F32((u32)(0x920400u));
    /* 0050eedc: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0050eede: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0050eee1: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 0050eee5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050eeea: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0050eeed: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0050eef0: fistp dword ptr [ebp - 0x2c] */ W32((u32)(r_ebp+0xffffffd4u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050eef3: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 0050eef6: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0050eef9: mov word ptr [edx + 0x9a], ax */ W16((u32)(r_edx+0x9au), (u16)r_eax);
    /* 0050ef00: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50ef05u); f_008587a5();
    /* 0050ef05: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ef08: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0050ef0b: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0050ef0e: fdiv dword ptr [0x92040c] */ ST(0) = ST(0) / R_F32((u32)(0x92040cu));
    /* 0050ef14: fadd dword ptr [0x920410] */ ST(0) = ST(0) + R_F32((u32)(0x920410u));
    /* 0050ef1a: fstp dword ptr [ebx + 0x6c] */ W_F32((u32)(r_ebx+0x6cu), ST(0)); FPOP();
L_0050ef1d:; BB(0x0050ef1d);
    /* 0050ef1d: movzx eax, word ptr [ebx + 0x24] */ r_eax = (u32)R16((u32)(r_ebx+0x24u));
    /* 0050ef21: test eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050ef26: jne 0x50ef43 */ if (!fZ) goto L_0050ef43;
L_0050ef28:; BB(0x0050ef28);
    /* 0050ef28: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0050ef2b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050ef2e: mov eax, ebx */ r_eax = r_ebx;
    /* 0050ef30: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0050ef33: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050ef36: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050ef3d: mov esp, ebp */ r_esp = r_ebp;
    /* 0050ef3f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050ef40: ret 0xc */ FN_RET(0x0050ec4c); r_esp += 16; return;
L_0050ef43:; BB(0x0050ef43);
    /* 0050ef43: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef45: call 0x505918 */ r_esp -= 4; W32(r_esp, 0x50ef4au); f_00505918();
    /* 0050ef4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050ef4b: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ef4e: jmp 0x50ef28 */ goto L_0050ef28;
L_0050ef50:; BB(0x0050ef50);
    /* 0050ef50: fcom dword ptr [edx + 0x34] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x34u))); 
    /* 0050ef53: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050ef55: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050ef56: jne 0x50eeb8 */ if (!fZ) goto L_0050eeb8;
L_0050ef5c:; BB(0x0050ef5c);
    /* 0050ef5c: fcom dword ptr [edx + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x30u))); 
    /* 0050ef5f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050ef61: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050ef62: jne 0x50eeb8 */ if (!fZ) goto L_0050eeb8;
L_0050ef68:; BB(0x0050ef68);
    /* 0050ef68: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050ef6a: mov ebx, dword ptr [ebp - 0x50] */ r_ebx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0050ef6d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050ef6f: mov word ptr [ebx + 0x9a], dx */ W16((u32)(r_ebx+0x9au), (u16)r_edx);
    /* 0050ef76: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050ef78: mov dword ptr [ebx + 0x6c], ecx */ W32((u32)(r_ebx+0x6cu), r_ecx);
    /* 0050ef7b: jmp 0x50ef1d */ goto L_0050ef1d;
}

void f_0050ef80(void) /* sub_50EF80 */
{
    FN_ENTER(0x0050ef80);
    /* 0050ef80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef81: mov ebp, esp */ r_ebp = r_esp;
    /* 0050ef83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef85: push 0x8d405c */ { u32 v = 0x8d405cu; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050ef90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050ef91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0050ef98: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050ef9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050ef9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050efa1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050efa4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050efa7: push 0x124 */ { u32 v = 0x124u; r_esp -= 4; W32(r_esp, v); }
    /* 0050efac: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050efb3: call 0x508424 */ r_esp -= 4; W32(r_esp, 0x50efb8u); f_00508424();
    /* 0050efb8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050efb9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050efbc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050efbe: je 0x50f004 */ if (fZ) goto L_0050f004;
L_0050efc0:; BB(0x0050efc0);
    /* 0050efc0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0050efc7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050efce: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0050efd2: movzx edx, word ptr [ebp + 0x18] */ r_edx = (u32)R16((u32)(r_ebp+0x18u));
    /* 0050efd6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050efd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050efda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050efdb: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050efde: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050efe1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0050efe4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050efe7: call 0x50f008 */ r_esp -= 4; W32(r_esp, 0x50efecu); f_0050f008();
    /* 0050efec: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050efef: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0050eff6:; BB(0x0050eff6);
    /* 0050eff6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050eff9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050f000: mov esp, ebp */ r_esp = r_ebp;
    /* 0050f002: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050f003: ret  */ FN_RET(0x0050ef80); r_esp += 4; return;
L_0050f004:; BB(0x0050f004);
    /* 0050f004: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050f006: jmp 0x50eff6 */ goto L_0050eff6;
}

