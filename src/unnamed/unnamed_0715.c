#include "protos.h"

void f_00715178(void) /* sub_715178 */
{
    FN_ENTER(0x00715178);
    /* 00715178: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071517b: movzx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)R16((u32)(r_ecx+0x8cu));
    /* 00715182: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00715184: jne 0x7151ca */ if (!fZ) goto L_007151ca;
L_00715186:; BB(0x00715186);
    /* 00715186: fld dword ptr [0x96fca0] */ FPUSH(R_F32((u32)(0x96fca0u)));
L_0071518c:; BB(0x0071518c);
    /* 0071518c: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 0071518f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715191: jne 0x71519a */ if (!fZ) goto L_0071519a;
L_00715193:; BB(0x00715193);
    /* 00715193: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 00715196: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00715199: ret  */ FN_RET(0x00715178); r_esp += 4; return;
L_0071519a:; BB(0x0071519a);
    /* 0071519a: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 0071519d: fsub dword ptr [ecx + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x4cu));
    /* 007151a0: fmul dword ptr [0x96fc9c] */ ST(0) = ST(0) * R_F32((u32)(0x96fc9cu));
    /* 007151a6: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 007151a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007151ab: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 007151ad: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 007151af: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 007151b2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007151b5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007151b8: fadd dword ptr [eax*4 + 0x96fc80] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x96fc80u));
    /* 007151bf: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 007151c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007151c3: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 007151c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007151c9: ret  */ FN_RET(0x00715178); r_esp += 4; return;
L_007151ca:; BB(0x007151ca);
    /* 007151ca: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 007151d1: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007151d4: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007151d7: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 007151da: jmp 0x71518c */ goto L_0071518c;
}

void f_007151dc(void) /* sub_7151DC */
{
    FN_ENTER(0x007151dc);
    /* 007151dc: movzx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)R16((u32)(r_ecx+0x8cu));
    /* 007151e3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007151e5: je 0x7151e8 */ if (fZ) goto L_007151e8;
L_007151e7:; BB(0x007151e7);
    /* 007151e7: ret  */ FN_RET(0x007151dc); r_esp += 4; return;
L_007151e8:; BB(0x007151e8);
    /* 007151e8: fld dword ptr [0x96fc98] */ FPUSH(R_F32((u32)(0x96fc98u)));
    /* 007151ee: movsx edx, word ptr [ecx + 0x88] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x88u));
    /* 007151f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007151fa: mov word ptr [ecx + 0x8c], ax */ W16((u32)(r_ecx+0x8cu), (u16)r_eax);
    /* 00715201: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 00715204: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00715207: fadd dword ptr [eax + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x14u));
    /* 0071520a: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 0071520d: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071520f: je 0x71521e */ if (fZ) goto L_0071521e;
L_00715211:; BB(0x00715211);
    /* 00715211: fld dword ptr [0x96fc94] */ FPUSH(R_F32((u32)(0x96fc94u)));
    /* 00715217: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00715219: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 0071521c: jmp 0x715221 */ goto L_00715221;
L_0071521e:; BB(0x0071521e);
    /* 0071521e: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
L_00715221:; BB(0x00715221);
    /* 00715221: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 00715228: ret  */ FN_RET(0x007151dc); r_esp += 4; return;
}

void f_0071522c(void) /* sub_71522C */
{
    FN_ENTER(0x0071522c);
    /* 0071522c: movzx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)R16((u32)(r_ecx+0x8cu));
    /* 00715233: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715235: jne 0x71523a */ if (!fZ) goto L_0071523a;
L_00715237:; BB(0x00715237);
    /* 00715237: ret 4 */ FN_RET(0x0071522c); r_esp += 8; return;
L_0071523a:; BB(0x0071523a);
    /* 0071523a: mov dword ptr [ecx + 0x50], 3 */ W32((u32)(r_ecx+0x50u), 0x3u);
    /* 00715241: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715246: mov word ptr [ecx + 0x8c], ax */ W16((u32)(r_ecx+0x8cu), (u16)r_eax);
    /* 0071524d: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00715251: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 00715254: ret 4 */ FN_RET(0x0071522c); r_esp += 8; return;
}

void f_00715258(void) /* sub_715258 */
{
    FN_ENTER(0x00715258);
    /* 00715258: mov dword ptr [0xa98434], 0x3f800000 */ W32((u32)(0xa98434u), 0x3f800000u);
    /* 00715262: mov dword ptr [0xa98438], 0x41000000 */ W32((u32)(0xa98438u), 0x41000000u);
    /* 0071526c: mov dword ptr [0xa9843c], 0x3fc00000 */ W32((u32)(0xa9843cu), 0x3fc00000u);
    /* 00715276: ret  */ FN_RET(0x00715258); r_esp += 4; return;
}

void f_00715278(void) /* sub_715278 */
{
    FN_ENTER(0x00715278);
    /* 00715278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00715279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071527a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071527b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0071527d: mov ebp, eax */ r_ebp = r_eax;
L_0071527f:; BB(0x0071527f);
    /* 0071527f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715280: call 0x71993c */ r_esp -= 4; W32(r_esp, 0x715285u); f_0071993c();
    /* 00715285: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00715286: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00715289: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071528b: je 0x7152a0 */ if (fZ) goto L_007152a0;
L_0071528d:; BB(0x0071528d);
    /* 0071528d: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00715290: and ecx, 0xfffffbff */ {  u32 a = r_ecx; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00715296: mov dword ptr [edx + 0x2c], ecx */ W32((u32)(r_edx+0x2cu), r_ecx);
    /* 00715299: mov edx, dword ptr [edx + 0x10] */ r_edx = R32((u32)(r_edx+0x10u));
    /* 0071529c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071529e: jne 0x71528d */ if (!fZ) goto L_0071528d;
L_007152a0:; BB(0x007152a0);
    /* 007152a0: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007152a3: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007152a6: jl 0x71527f */ if ((fS!=fO)) goto L_0071527f;
L_007152a8:; BB(0x007152a8);
    /* 007152a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007152aa: mov ebp, eax */ r_ebp = r_eax;
L_007152ac:; BB(0x007152ac);
    /* 007152ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007152ad: call 0x71993c */ r_esp -= 4; W32(r_esp, 0x7152b2u); f_0071993c();
    /* 007152b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007152b3: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 007152b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007152b8: je 0x71533b */ if (fZ) goto L_0071533b;
L_007152be:; BB(0x007152be);
    /* 007152be: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 007152c1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007152c3: je 0x71533b */ if (fZ) goto L_0071533b;
L_007152c5:; BB(0x007152c5);
    /* 007152c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007152c6: mov ecx, esi */ r_ecx = r_esi;
    /* 007152c8: call 0x712364 */ r_esp -= 4; W32(r_esp, 0x7152cdu); f_00712364();
    /* 007152cd: mov edx, eax */ r_edx = r_eax;
    /* 007152cf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007152d1: je 0x715331 */ if (fZ) goto L_00715331;
L_007152d3:; BB(0x007152d3);
    /* 007152d3: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 007152d6: test ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007152dc: je 0x7152ec */ if (fZ) goto L_007152ec;
L_007152de:; BB(0x007152de);
    /* 007152de: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 007152e1: or edi, 0x400 */ {  u32 a = r_edi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007152e7: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
    /* 007152ea: jmp 0x715321 */ goto L_00715321;
L_007152ec:; BB(0x007152ec);
    /* 007152ec: mov edi, dword ptr [edx + 0x2c] */ r_edi = R32((u32)(r_edx+0x2cu));
    /* 007152ef: test edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007152f5: je 0x715302 */ if (fZ) goto L_00715302;
L_007152f7:; BB(0x007152f7);
    /* 007152f7: or ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007152fd: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00715300: jmp 0x715321 */ goto L_00715321;
L_00715302:; BB(0x00715302);
    /* 00715302: fld dword ptr [esi + 0x58] */ FPUSH(R_F32((u32)(r_esi+0x58u)));
    /* 00715305: fcomp dword ptr [edx + 0x58] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x58u))); FPOP();
    /* 00715308: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0071530a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0071530b: jbe 0x715318 */ if ((fC||fZ)) goto L_00715318;
L_0071530d:; BB(0x0071530d);
    /* 0071530d: or ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00715313: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00715316: jmp 0x715321 */ goto L_00715321;
L_00715318:; BB(0x00715318);
    /* 00715318: or edi, 0x400 */ {  u32 a = r_edi; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0071531e: mov dword ptr [edx + 0x2c], edi */ W32((u32)(r_edx+0x2cu), r_edi);
L_00715321:; BB(0x00715321);
    /* 00715321: push dword ptr [edx + 0x10] */ { u32 v = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715324: mov ecx, esi */ r_ecx = r_esi;
    /* 00715326: call 0x712364 */ r_esp -= 4; W32(r_esp, 0x71532bu); f_00712364();
    /* 0071532b: mov edx, eax */ r_edx = r_eax;
    /* 0071532d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071532f: jne 0x7152d3 */ if (!fZ) goto L_007152d3;
L_00715331:; BB(0x00715331);
    /* 00715331: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00715334: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00715337: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715339: jne 0x7152c5 */ if (!fZ) goto L_007152c5;
L_0071533b:; BB(0x0071533b);
    /* 0071533b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0071533e: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00715341: jl 0x7152ac */ if ((fS!=fO)) goto L_007152ac;
L_00715347:; BB(0x00715347);
    /* 00715347: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715348: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00715349: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071534a: ret  */ FN_RET(0x00715278); r_esp += 4; return;
}

void f_0071534c(void) /* sub_71534C */
{
    FN_ENTER(0x0071534c);
    /* 0071534c: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715350: call 0x71993c */ r_esp -= 4; W32(r_esp, 0x715355u); f_0071993c();
    /* 00715355: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00715356: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715359: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071535d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715361: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00715365: call 0x712498 */ r_esp -= 4; W32(r_esp, 0x71536au); f_00712498();
    /* 0071536a: ret  */ FN_RET(0x0071534c); r_esp += 4; return;
}

void f_0071536c(void) /* sub_71536C */
{
    FN_ENTER(0x0071536c);
    /* 0071536c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071536d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0071536f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00715371: call 0x715390 */ r_esp -= 4; W32(r_esp, 0x715376u); f_00715390();
    /* 00715376: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071537a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071537c: jne 0x715382 */ if (!fZ) goto L_00715382;
L_0071537e:; BB(0x0071537e);
    /* 0071537e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071537f: ret 4 */ FN_RET(0x0071536c); r_esp += 8; return;
L_00715382:; BB(0x00715382);
    /* 00715382: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00715383: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x715388u); f_005c2f74();
    /* 00715388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00715389: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071538a: ret 4 */ FN_RET(0x0071536c); r_esp += 8; return;
}

void f_00715390(void) /* sub_715390 */
{
    FN_ENTER(0x00715390);
    /* 00715390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715391: mov ebp, esp */ r_ebp = r_esp;
    /* 00715393: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715395: push 0x8f06fc */ { u32 v = 0x8f06fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0071539a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007153a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007153a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007153a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007153ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007153ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007153b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007153b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007153b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007153ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007153bd: mov dword ptr [ecx], 0xb3f630 */ W32((u32)(r_ecx), 0xb3f630u);
    /* 007153c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007153ca: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7153cfu); f_00710c28();
    /* 007153cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007153d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007153d9: mov esp, ebp */ r_esp = r_ebp;
    /* 007153db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007153dc: ret  */ FN_RET(0x00715390); r_esp += 4; return;
}

void f_007153e0(void) /* sub_7153E0 */
{
    FN_ENTER(0x007153e0);
    /* 007153e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007153e1: mov ebp, esp */ r_ebp = r_esp;
    /* 007153e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007153e5: push 0x8f0724 */ { u32 v = 0x8f0724u; r_esp -= 4; W32(r_esp, v); }
    /* 007153ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007153f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007153f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007153f8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007153fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007153fe: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00715401: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00715404: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00715407: mov eax, dword ptr [0xa9c0ec] */ r_eax = R32((u32)(0xa9c0ecu));
    /* 0071540c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0071540f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715411: jne 0x715423 */ if (!fZ) goto L_00715423;
L_00715413:; BB(0x00715413);
    /* 00715413: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715415: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715418: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071541f: mov esp, ebp */ r_esp = r_ebp;
    /* 00715421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715422: ret  */ FN_RET(0x007153e0); r_esp += 4; return;
L_00715423:; BB(0x00715423);
    /* 00715423: mov ecx, eax */ r_ecx = r_eax;
    /* 00715425: call 0x781f44 */ r_esp -= 4; W32(r_esp, 0x71542au); f_00781f44();
    /* 0071542a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071542c: je 0x71543c */ if (fZ) goto L_0071543c;
L_0071542e:; BB(0x0071542e);
    /* 0071542e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715434: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715437: call 0x78185c */ r_esp -= 4; W32(r_esp, 0x71543cu); f_0078185c();
L_0071543c:; BB(0x0071543c);
    /* 0071543c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00715443: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00715445: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71544au); f_005caba4();
    /* 0071544a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071544d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00715450: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00715453: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715455: je 0x71548c */ if (fZ) goto L_0071548c;
L_00715457:; BB(0x00715457);
    /* 00715457: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0071545e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00715465: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715468: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071546b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071546c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071546f: call 0x715494 */ r_esp -= 4; W32(r_esp, 0x715474u); f_00715494();
    /* 00715474: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0071547b:; BB(0x0071547b);
    /* 0071547b: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071547e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715481: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00715488: mov esp, ebp */ r_esp = r_ebp;
    /* 0071548a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071548b: ret  */ FN_RET(0x007153e0); r_esp += 4; return;
L_0071548c:; BB(0x0071548c);
    /* 0071548c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071548e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00715491: jmp 0x71547b */ goto L_0071547b;
}

void f_00715494(void) /* sub_715494 */
{
    FN_ENTER(0x00715494);
    /* 00715494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715495: mov ebp, esp */ r_ebp = r_esp;
    /* 00715497: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715499: push 0x8f0740 */ { u32 v = 0x8f0740u; r_esp -= 4; W32(r_esp, v); }
    /* 0071549e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007154a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007154a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007154ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007154af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007154b2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007154b5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007154b8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007154bb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007154be: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007154c1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 007154c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007154c7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007154c9: push 0x9f1f70 */ { u32 v = 0x9f1f70u; r_esp -= 4; W32(r_esp, v); }
    /* 007154ce: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7154d3u); f_00710d30();
    /* 007154d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007154da: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007154dd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007154e0: mov dword ptr [eax], 0xb3f630 */ W32((u32)(r_eax), 0xb3f630u);
    /* 007154e6: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007154e9: mov ecx, dword ptr [0x9f1f6c] */ r_ecx = R32((u32)(0x9f1f6cu));
    /* 007154ef: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 007154f2: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007154f5: call 0x715518 */ r_esp -= 4; W32(r_esp, 0x7154fau); f_00715518();
    /* 007154fa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007154fd: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00715500: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715503: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071550a: mov esp, ebp */ r_esp = r_ebp;
    /* 0071550c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071550d: ret 8 */ FN_RET(0x00715494); r_esp += 12; return;
}

void f_00715518(void) /* sub_715518 */
{
    FN_ENTER(0x00715518);
    /* 00715518: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00715519: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0071551a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071551b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0071551c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071551f: mov ebx, edx */ r_ebx = r_edx;
    /* 00715521: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00715524: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 00715527: mov ebp, dword ptr [edx + 8] */ r_ebp = R32((u32)(r_edx+0x8u));
    /* 0071552a: mov esi, dword ptr [edx + 4] */ r_esi = R32((u32)(r_edx+0x4u));
    /* 0071552d: mov edi, dword ptr [edx + 0x18] */ r_edi = R32((u32)(r_edx+0x18u));
    /* 00715530: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00715532: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00715536: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 00715539: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0071553d: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00715540: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00715543: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 00715548: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 0071554b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071554c: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x715551u); f_0072db60();
    /* 00715551: movsx edx, byte ptr [ebx + 0x105] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x105u));
    /* 00715558: mov eax, 8 */ r_eax = 0x8u;
    /* 0071555d: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00715560: jle 0x715564 */ if ((fZ||fS!=fO)) goto L_00715564;
L_00715562:; BB(0x00715562);
    /* 00715562: mov edx, eax */ r_edx = r_eax;
L_00715564:; BB(0x00715564);
    /* 00715564: push dword ptr [edx*4 + 0x9f1e60] */ { u32 v = R32((u32)(r_edx*4+0x9f1e60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071556b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 0071556f: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x715574u); f_0072db50();
    /* 00715574: movsx edx, byte ptr [ebx + 0x107] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x107u));
    /* 0071557b: mov eax, 0xc */ r_eax = 0xcu;
    /* 00715580: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00715583: jle 0x715587 */ if ((fZ||fS!=fO)) goto L_00715587;
L_00715585:; BB(0x00715585);
    /* 00715585: mov edx, eax */ r_edx = r_eax;
L_00715587:; BB(0x00715587);
    /* 00715587: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00715588: call 0x793078 */ r_esp -= 4; W32(r_esp, 0x71558du); f_00793078();
    /* 0071558d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071558e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071558f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00715591: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x715596u); f_0072db50();
    /* 00715596: movsx ebp, byte ptr [ebx + 0x106] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ebx+0x106u));
    /* 0071559d: mov eax, 0xa */ r_eax = 0xau;
    /* 007155a2: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007155a5: jle 0x7155a9 */ if ((fZ||fS!=fO)) goto L_007155a9;
L_007155a7:; BB(0x007155a7);
    /* 007155a7: mov ebp, eax */ r_ebp = r_eax;
L_007155a9:; BB(0x007155a9);
    /* 007155a9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007155aa: call 0x7930c8 */ r_esp -= 4; W32(r_esp, 0x7155afu); f_007930c8();
    /* 007155af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007155b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007155b1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007155b5: call 0x72db50 */ r_esp -= 4; W32(r_esp, 0x7155bau); f_0072db50();
    /* 007155ba: movzx eax, byte ptr [ebx + 0x104] */ r_eax = (u32)R8((u32)(r_ebx+0x104u));
    /* 007155c1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007155c3: je 0x7155d4 */ if (fZ) goto L_007155d4;
L_007155c5:; BB(0x007155c5);
    /* 007155c5: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007155c9: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007155ce: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 007155d2: jmp 0x7155e7 */ goto L_007155e7;
L_007155d4:; BB(0x007155d4);
    /* 007155d4: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 007155d6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007155d8: jne 0x715611 */ if (!fZ) goto L_00715611;
L_007155da:; BB(0x007155da);
    /* 007155da: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 007155de: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007155e3: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
L_007155e7:; BB(0x007155e7);
    /* 007155e7: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 007155ec: lea eax, [ebx + 0x34] */ r_eax = (u32)(r_ebx+0x34u);
    /* 007155ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007155f0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007155f4: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7155f9u); f_0072db60();
    /* 007155f9: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 007155fe: add ebx, 0x54 */ {  u32 a = r_ebx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00715601: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00715602: mov ecx, edi */ r_ecx = r_edi;
    /* 00715604: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x715609u); f_0072db60();
    /* 00715609: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071560c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071560d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071560e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071560f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00715610: ret  */ FN_RET(0x00715518); r_esp += 4; return;
L_00715611:; BB(0x00715611);
    /* 00715611: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x715616u); f_00816d30();
    /* 00715616: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715617: call 0x815f24 */ r_esp -= 4; W32(r_esp, 0x71561cu); f_00815f24();
    /* 0071561c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071561d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0071561f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00715624: mov ecx, esi */ r_ecx = r_esi;
    /* 00715626: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x71562bu); f_0072db60();
    /* 0071562b: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00715630: mov ecx, esi */ r_ecx = r_esi;
    /* 00715632: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x715637u); f_0072ddf4();
    /* 00715637: fld dword ptr [0x96fca8] */ FPUSH(R_F32((u32)(0x96fca8u)));
    /* 0071563d: fsub dword ptr [esi + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x10u));
    /* 00715640: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 00715644: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00715647: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0071564c: mov word ptr [esi + 4], ax */ W16((u32)(r_esi+0x4u), (u16)r_eax);
    /* 00715650: jmp 0x7155e7 */ goto L_007155e7;
}

void f_00715654(void) /* sub_715654 */
{
    FN_ENTER(0x00715654);
    /* 00715654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715655: mov ebp, esp */ r_ebp = r_esp;
    /* 00715657: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715659: push 0x8f0768 */ { u32 v = 0x8f0768u; r_esp -= 4; W32(r_esp, v); }
    /* 0071565e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715665: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071566c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071566f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00715672: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00715675: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00715678: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0071567b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071567e: call 0x781dd4 */ r_esp -= 4; W32(r_esp, 0x715683u); f_00781dd4();
    /* 00715683: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00715686: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00715689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071568b: je 0x7156dc */ if (fZ) goto L_007156dc;
L_0071568d:; BB(0x0071568d);
    /* 0071568d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00715694: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00715696: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x71569bu); f_005caba4();
    /* 0071569b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071569c: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0071569f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007156a1: je 0x7156d8 */ if (fZ) goto L_007156d8;
L_007156a3:; BB(0x007156a3);
    /* 007156a3: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007156aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007156b1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007156b4: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007156b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007156b8: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007156bb: call 0x715494 */ r_esp -= 4; W32(r_esp, 0x7156c0u); f_00715494();
    /* 007156c0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007156c3: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007156ca:; BB(0x007156ca);
    /* 007156ca: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007156cd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007156d4: mov esp, ebp */ r_esp = r_ebp;
    /* 007156d6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007156d7: ret  */ FN_RET(0x00715654); r_esp += 4; return;
L_007156d8:; BB(0x007156d8);
    /* 007156d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007156da: jmp 0x7156ca */ goto L_007156ca;
L_007156dc:; BB(0x007156dc);
    /* 007156dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007156de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007156e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007156e8: mov esp, ebp */ r_esp = r_ebp;
    /* 007156ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007156eb: ret  */ FN_RET(0x00715654); r_esp += 4; return;
}

void f_007156ec(void) /* sub_7156EC */
{
    FN_ENTER(0x007156ec);
    /* 007156ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007156ed: mov ebp, esp */ r_ebp = r_esp;
    /* 007156ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007156f1: push 0x8f0790 */ { u32 v = 0x8f0790u; r_esp -= 4; W32(r_esp, v); }
    /* 007156f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007156fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007156fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715704: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715707: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071570a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0071570d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00715710: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00715713: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00715716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00715718: jl 0x715783 */ if ((fS!=fO)) goto L_00715783;
L_0071571a:; BB(0x0071571a);
    /* 0071571a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00715721: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 00715723: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 00715726: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00715728: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071572a: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0071572d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071572f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00715731: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00715733: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00715735: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00715737: add edx, dword ptr [ebp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071573a: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0071573d: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x715742u); f_005caba4();
    /* 00715742: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00715743: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00715746: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715748: je 0x71577f */ if (fZ) goto L_0071577f;
L_0071574a:; BB(0x0071574a);
    /* 0071574a: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00715751: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00715758: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071575b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071575e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071575f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715762: call 0x715494 */ r_esp -= 4; W32(r_esp, 0x715767u); f_00715494();
    /* 00715767: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071576a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00715771:; BB(0x00715771);
    /* 00715771: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715774: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071577b: mov esp, ebp */ r_esp = r_ebp;
    /* 0071577d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071577e: ret  */ FN_RET(0x007156ec); r_esp += 4; return;
L_0071577f:; BB(0x0071577f);
    /* 0071577f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715781: jmp 0x715771 */ goto L_00715771;
L_00715783:; BB(0x00715783);
    /* 00715783: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715785: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715788: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071578f: mov esp, ebp */ r_esp = r_ebp;
    /* 00715791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715792: ret  */ FN_RET(0x007156ec); r_esp += 4; return;
}

void f_00715794(void) /* sub_715794 */
{
    FN_ENTER(0x00715794);
    /* 00715794: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715797: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0071579b: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0071579e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157a0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157a2: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007157a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157ac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007157ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157b0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157b2: add edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007157b6: je 0x7157c2 */ if (fZ) goto L_007157c2;
L_007157b8:; BB(0x007157b8);
    /* 007157b8: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007157bb: mov eax, ecx */ r_eax = r_ecx;
    /* 007157bd: call 0x715518 */ r_esp -= 4; W32(r_esp, 0x7157c2u); f_00715518();
L_007157c2:; BB(0x007157c2);
    /* 007157c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007157c5: ret 8 */ FN_RET(0x00715794); r_esp += 12; return;
}

void f_007157c8(void) /* sub_7157C8 */
{
    FN_ENTER(0x007157c8);
    /* 007157c8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007157cb: mov eax, ecx */ r_eax = r_ecx;
    /* 007157cd: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007157d1: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007157d4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007157d6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007157d8: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 007157db: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157dd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157df: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157e1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157e3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007157e5: add edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007157e9: je 0x7157f3 */ if (fZ) goto L_007157f3;
L_007157eb:; BB(0x007157eb);
    /* 007157eb: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007157ee: call 0x715518 */ r_esp -= 4; W32(r_esp, 0x7157f3u); f_00715518();
L_007157f3:; BB(0x007157f3);
    /* 007157f3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007157f6: ret 8 */ FN_RET(0x007157c8); r_esp += 12; return;
}

void f_007157fc(void) /* sub_7157FC */
{
    FN_ENTER(0x007157fc);
    /* 007157fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007157fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007157ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00715801: call 0x715820 */ r_esp -= 4; W32(r_esp, 0x715806u); f_00715820();
    /* 00715806: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071580a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071580c: jne 0x715812 */ if (!fZ) goto L_00715812;
L_0071580e:; BB(0x0071580e);
    /* 0071580e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071580f: ret 4 */ FN_RET(0x007157fc); r_esp += 8; return;
L_00715812:; BB(0x00715812);
    /* 00715812: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00715813: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x715818u); f_005c2f74();
    /* 00715818: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00715819: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071581a: ret 4 */ FN_RET(0x007157fc); r_esp += 8; return;
}

void f_00715820(void) /* sub_715820 */
{
    FN_ENTER(0x00715820);
    /* 00715820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715821: mov ebp, esp */ r_ebp = r_esp;
    /* 00715823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715825: push 0x8f07ac */ { u32 v = 0x8f07acu; r_esp -= 4; W32(r_esp, v); }
    /* 0071582a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715831: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715838: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071583b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071583e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00715841: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00715844: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00715847: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071584a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071584d: mov dword ptr [ecx], 0xb3f690 */ W32((u32)(r_ecx), 0xb3f690u);
    /* 00715853: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071585a: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x71585fu); f_00710c28();
    /* 0071585f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715862: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00715869: mov esp, ebp */ r_esp = r_ebp;
    /* 0071586b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071586c: ret  */ FN_RET(0x00715820); r_esp += 4; return;
}

void f_00715870(void) /* sub_715870 */
{
    FN_ENTER(0x00715870);
    /* 00715870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715871: mov ebp, esp */ r_ebp = r_esp;
    /* 00715873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715875: push 0x8f07c8 */ { u32 v = 0x8f07c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0071587a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715881: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715888: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071588b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071588e: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00715891: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00715894: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00715897: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0071589a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0071589d: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 007158a0: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 007158a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007158a6: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 007158a9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 007158ac: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007158af: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007158b2: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007158b5: call 0x73ec70 */ r_esp -= 4; W32(r_esp, 0x7158bau); f_0073ec70();
    /* 007158ba: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 007158bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007158be: movsx edx, bx */ r_edx = (u32)(i32)(i16)(u16)r_ebx;
    /* 007158c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007158c2: push 0x9f1fdc */ { u32 v = 0x9f1fdcu; r_esp -= 4; W32(r_esp, v); }
    /* 007158c7: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x7158ccu); f_00710d30();
    /* 007158cc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007158d3: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 007158d6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007158d9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007158dc: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007158df: mov dword ptr [ecx + 0x60], eax */ W32((u32)(r_ecx+0x60u), r_eax);
    /* 007158e2: mov dword ptr [ecx], 0xb3f690 */ W32((u32)(r_ecx), 0xb3f690u);
    /* 007158e8: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 007158ea: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 007158ec: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 007158ef: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007158f2: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 007158f5: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 007158f8: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 007158fb: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 007158fe: fmul dword ptr [0x96fdf4] */ ST(0) = ST(0) * R_F32((u32)(0x96fdf4u));
    /* 00715904: mov dword ptr [ecx + 0x68], esi */ W32((u32)(r_ecx+0x68u), r_esi);
    /* 00715907: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 0071590a: mov dword ptr [ecx + 0x70], edi */ W32((u32)(r_ecx+0x70u), r_edi);
    /* 0071590d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0071590f: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 00715912: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00715914: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00715916: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00715919: fadd dword ptr [eax + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x44u));
    /* 0071591c: fstp dword ptr [ecx + 0x34] */ W_F32((u32)(r_ecx+0x34u), ST(0)); FPOP();
    /* 0071591f: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x715924u); f_00710f64();
    /* 00715924: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00715927: mov edx, edi */ r_edx = r_edi;
    /* 00715929: mov ebx, dword ptr [ecx + 0x28] */ r_ebx = R32((u32)(r_ecx+0x28u));
    /* 0071592c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0071592e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00715931: call 0x715960 */ r_esp -= 4; W32(r_esp, 0x715936u); f_00715960();
    /* 00715936: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00715939: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0071593c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071593f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00715942: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00715945: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715948: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071594f: mov esp, ebp */ r_esp = r_ebp;
    /* 00715951: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715952: ret 0x14 */ FN_RET(0x00715870); r_esp += 24; return;
}

void f_00715958(void) /* sub_715958 */
{
    FN_ENTER(0x00715958);
    /* 00715958: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0071595c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00715960: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715963: je 0x71599e */ if (fZ) goto L_0071599e;
L_00715965:; BB(0x00715965);
    /* 00715965: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 00715969: and ecx, 0xfffd */ {  u32 a = r_ecx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0071596f: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00715973: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00715976: jge 0x715981 */ if ((fS==fO)) goto L_00715981;
L_00715978:; BB(0x00715978);
    /* 00715978: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 0071597f: jmp 0x715988 */ goto L_00715988;
L_00715981:; BB(0x00715981);
    /* 00715981: mov dword ptr [eax + 0x34], 2 */ W32((u32)(r_eax+0x34u), 0x2u);
L_00715988:; BB(0x00715988);
    /* 00715988: push dword ptr [edx*8 + 0x96fd24] */ { u32 v = R32((u32)(r_edx*8+0x96fd24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071598f: mov ecx, eax */ r_ecx = r_eax;
    /* 00715991: push dword ptr [edx*8 + 0x96fd20] */ { u32 v = R32((u32)(r_edx*8+0x96fd20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715998: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x71599du); f_0072e7e4();
    /* 0071599d: ret  */ FN_RET(0x00715958); r_esp += 4; return;
L_0071599e:; BB(0x0071599e);
    /* 0071599e: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007159a2: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007159a8: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 007159ac: ret  */ FN_RET(0x00715958); r_esp += 4; return;
}

void f_0071595e(void)
{
    FN_ENTER(0x0071595e);
    /* 0071595e: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00715960: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715963: je 0x71599e */ if (fZ) goto L_0071599e;
L_00715965:; BB(0x00715965);
    /* 00715965: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 00715969: and ecx, 0xfffd */ {  u32 a = r_ecx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0071596f: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00715973: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00715976: jge 0x715981 */ if ((fS==fO)) goto L_00715981;
L_00715978:; BB(0x00715978);
    /* 00715978: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 0071597f: jmp 0x715988 */ goto L_00715988;
L_00715981:; BB(0x00715981);
    /* 00715981: mov dword ptr [eax + 0x34], 2 */ W32((u32)(r_eax+0x34u), 0x2u);
L_00715988:; BB(0x00715988);
    /* 00715988: push dword ptr [edx*8 + 0x96fd24] */ { u32 v = R32((u32)(r_edx*8+0x96fd24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071598f: mov ecx, eax */ r_ecx = r_eax;
    /* 00715991: push dword ptr [edx*8 + 0x96fd20] */ { u32 v = R32((u32)(r_edx*8+0x96fd20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715998: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x71599du); f_0072e7e4();
    /* 0071599d: ret  */ FN_RET(0x0071595e); r_esp += 4; return;
L_0071599e:; BB(0x0071599e);
    /* 0071599e: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007159a2: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007159a8: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 007159ac: ret  */ FN_RET(0x0071595e); r_esp += 4; return;
}

void f_00715960(void) /* sub_715960 */
{
    FN_ENTER(0x00715960);
    /* 00715960: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715963: je 0x71599e */ if (fZ) goto L_0071599e;
L_00715965:; BB(0x00715965);
    /* 00715965: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 00715969: and ecx, 0xfffd */ {  u32 a = r_ecx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0071596f: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 00715973: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00715976: jge 0x715981 */ if ((fS==fO)) goto L_00715981;
L_00715978:; BB(0x00715978);
    /* 00715978: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
    /* 0071597f: jmp 0x715988 */ goto L_00715988;
L_00715981:; BB(0x00715981);
    /* 00715981: mov dword ptr [eax + 0x34], 2 */ W32((u32)(r_eax+0x34u), 0x2u);
L_00715988:; BB(0x00715988);
    /* 00715988: push dword ptr [edx*8 + 0x96fd24] */ { u32 v = R32((u32)(r_edx*8+0x96fd24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071598f: mov ecx, eax */ r_ecx = r_eax;
    /* 00715991: push dword ptr [edx*8 + 0x96fd20] */ { u32 v = R32((u32)(r_edx*8+0x96fd20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715998: call 0x72e7e4 */ r_esp -= 4; W32(r_esp, 0x71599du); f_0072e7e4();
    /* 0071599d: ret  */ FN_RET(0x00715960); r_esp += 4; return;
L_0071599e:; BB(0x0071599e);
    /* 0071599e: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007159a2: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007159a8: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 007159ac: ret  */ FN_RET(0x00715960); r_esp += 4; return;
}

void f_007159b0(void) /* sub_7159B0 */
{
    FN_ENTER(0x007159b0);
    /* 007159b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007159b1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007159b3: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 007159b6: fld dword ptr [eax + 0x44] */ FPUSH(R_F32((u32)(r_eax+0x44u)));
    /* 007159b9: fadd dword ptr [ebp + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x68u));
    /* 007159bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007159be: fst dword ptr [ebp + 0x34] */ W_F32((u32)(r_ebp+0x34u), ST(0));
    /* 007159c1: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 007159c4: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7159c9u); f_00710db4();
    /* 007159c9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007159cb: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x7159d0u); f_00710ee4();
    /* 007159d0: lea eax, [ebp + 0x24] */ r_eax = (u32)(r_ebp+0x24u);
    /* 007159d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007159d4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007159d6: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7159dbu); f_0072a5ec();
    /* 007159db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007159dc: ret  */ FN_RET(0x007159b0); r_esp += 4; return;
}

void f_007159e0(void) /* sub_7159E0 */
{
    FN_ENTER(0x007159e0);
    /* 007159e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007159e1: mov esi, ecx */ r_esi = r_ecx;
    /* 007159e3: mov ecx, esi */ r_ecx = r_esi;
    /* 007159e5: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7159eau); f_00712644();
    /* 007159ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007159eb: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 007159ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007159ef: mov ecx, esi */ r_ecx = r_esi;
    /* 007159f1: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7159f6u); f_0072a648();
    /* 007159f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007159f7: ret  */ FN_RET(0x007159e0); r_esp += 4; return;
}

void f_007159f8(void) /* sub_7159F8 */
{
    FN_ENTER(0x007159f8);
    /* 007159f8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007159fb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007159ff: cmp edx, dword ptr [ecx + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715a02: jne 0x715a0a */ if (!fZ) goto L_00715a0a;
L_00715a04:; BB(0x00715a04);
    /* 00715a04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00715a07: ret 4 */ FN_RET(0x007159f8); r_esp += 8; return;
L_00715a0a:; BB(0x00715a0a);
    /* 00715a0a: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 00715a0d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00715a10: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00715a13: fmul dword ptr [0x96fdf0] */ ST(0) = ST(0) * R_F32((u32)(0x96fdf0u));
    /* 00715a19: mov dword ptr [ecx + 0x6c], edx */ W32((u32)(r_ecx+0x6cu), r_edx);
    /* 00715a1c: fld dword ptr [eax + 0x40] */ FPUSH(R_F32((u32)(r_eax+0x40u)));
    /* 00715a1f: fadd dword ptr [ecx + 0x64] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x64u));
    /* 00715a22: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00715a24: mov dword ptr [ecx + 0x50], 0xf */ W32((u32)(r_ecx+0x50u), 0xfu);
    /* 00715a2b: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00715a2e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00715a31: ret 4 */ FN_RET(0x007159f8); r_esp += 8; return;
}

void f_00715a07(void)
{
    FN_ENTER(0x00715a07);
    /* 00715a07: ret 4 */ FN_RET(0x00715a07); r_esp += 8; return;
}

void f_00715a34(void) /* sub_715A34 */
{
    FN_ENTER(0x00715a34);
    /* 00715a34: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715a37: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00715a3b: cmp edx, dword ptr [ecx + 0x70] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x70u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715a3e: jne 0x715a46 */ if (!fZ) goto L_00715a46;
L_00715a40:; BB(0x00715a40);
    /* 00715a40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00715a43: ret 4 */ FN_RET(0x00715a34); r_esp += 8; return;
L_00715a46:; BB(0x00715a46);
    /* 00715a46: mov dword ptr [ecx + 0x70], edx */ W32((u32)(r_ecx+0x70u), r_edx);
    /* 00715a49: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 00715a4c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00715a4e: call 0x715960 */ r_esp -= 4; W32(r_esp, 0x715a53u); f_00715960();
    /* 00715a53: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00715a56: ret 4 */ FN_RET(0x00715a34); r_esp += 8; return;
}

void f_00715a5c(void) /* sub_715A5C */
{
    FN_ENTER(0x00715a5c);
    /* 00715a5c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00715a60: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 00715a63: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00715a66: ja 0x715ab4 */ if ((!fC&&!fZ)) goto L_00715ab4;
L_00715a68:; BB(0x00715a68);
    /* 00715a68: mov eax, dword ptr [edx*4 + 0x96fd98] */ r_eax = R32((u32)(r_edx*4+0x96fd98u));
    /* 00715a6f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00715ab4:; BB(0x00715ab4);
    /* 00715ab4: mov eax, 0xe */ r_eax = 0xeu;
    /* 00715ab9: ret  */ FN_RET(0x00715a5c); r_esp += 4; return;
}

void f_00715a71(void)
{
    FN_ENTER(0x00715a71);
    /* 00715a71: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715a73: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a71); r_esp += 4; return;
}

void f_00715a75(void)
{
    FN_ENTER(0x00715a75);
    /* 00715a75: mov eax, 5 */ r_eax = 0x5u;
    /* 00715a7a: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a75); r_esp += 4; return;
}

void f_00715a7c(void)
{
    FN_ENTER(0x00715a7c);
    /* 00715a7c: mov eax, 4 */ r_eax = 0x4u;
    /* 00715a81: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a7c); r_esp += 4; return;
}

void f_00715a83(void)
{
    FN_ENTER(0x00715a83);
    /* 00715a83: mov eax, 3 */ r_eax = 0x3u;
    /* 00715a88: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a83); r_esp += 4; return;
}

void f_00715a8a(void)
{
    FN_ENTER(0x00715a8a);
    /* 00715a8a: mov eax, 9 */ r_eax = 0x9u;
    /* 00715a8f: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a8a); r_esp += 4; return;
}

void f_00715a91(void)
{
    FN_ENTER(0x00715a91);
    /* 00715a91: mov eax, 7 */ r_eax = 0x7u;
    /* 00715a96: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a91); r_esp += 4; return;
}

void f_00715a98(void)
{
    FN_ENTER(0x00715a98);
    /* 00715a98: mov eax, 8 */ r_eax = 0x8u;
    /* 00715a9d: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a98); r_esp += 4; return;
}

void f_00715a9f(void)
{
    FN_ENTER(0x00715a9f);
    /* 00715a9f: mov eax, 6 */ r_eax = 0x6u;
    /* 00715aa4: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715a9f); r_esp += 4; return;
}

void f_00715aa6(void)
{
    FN_ENTER(0x00715aa6);
    /* 00715aa6: mov eax, 1 */ r_eax = 0x1u;
    /* 00715aab: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715aa6); r_esp += 4; return;
}

void f_00715aad(void)
{
    FN_ENTER(0x00715aad);
    /* 00715aad: mov eax, 2 */ r_eax = 0x2u;
    /* 00715ab2: jmp 0x715ab9 */ goto L_00715ab9;
L_00715ab9:; BB(0x00715ab9);
    /* 00715ab9: ret  */ FN_RET(0x00715aad); r_esp += 4; return;
}

void f_00715ab4(void)
{
    FN_ENTER(0x00715ab4);
    /* 00715ab4: mov eax, 0xe */ r_eax = 0xeu;
    /* 00715ab9: ret  */ FN_RET(0x00715ab4); r_esp += 4; return;
}

void f_00715abc(void) /* sub_715ABC */
{
    FN_ENTER(0x00715abc);
    /* 00715abc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00715ac0: lea eax, [edx + 0xa] */ r_eax = (u32)(r_edx+0xau);
    /* 00715ac3: ret  */ FN_RET(0x00715abc); r_esp += 4; return;
}

void f_00715ac4(void) /* sub_715AC4 */
{
    FN_ENTER(0x00715ac4);
    /* 00715ac4: mov dword ptr [0xa98448], 0x3f800000 */ W32((u32)(0xa98448u), 0x3f800000u);
    /* 00715ace: mov dword ptr [0xa9844c], 0x41000000 */ W32((u32)(0xa9844cu), 0x41000000u);
    /* 00715ad8: mov dword ptr [0xa98450], 0x3fc00000 */ W32((u32)(0xa98450u), 0x3fc00000u);
    /* 00715ae2: ret  */ FN_RET(0x00715ac4); r_esp += 4; return;
}

void f_00715ae4(void) /* sub_715AE4 */
{
    FN_ENTER(0x00715ae4);
    /* 00715ae4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00715ae5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00715ae7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00715ae9: call 0x715b08 */ r_esp -= 4; W32(r_esp, 0x715aeeu); f_00715b08();
    /* 00715aee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00715af2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715af4: jne 0x715afa */ if (!fZ) goto L_00715afa;
L_00715af6:; BB(0x00715af6);
    /* 00715af6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00715af7: ret 4 */ FN_RET(0x00715ae4); r_esp += 8; return;
L_00715afa:; BB(0x00715afa);
    /* 00715afa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00715afb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x715b00u); f_005c2f74();
    /* 00715b00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00715b01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00715b02: ret 4 */ FN_RET(0x00715ae4); r_esp += 8; return;
}

void f_00715b08(void) /* sub_715B08 */
{
    FN_ENTER(0x00715b08);
    /* 00715b08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715b09: mov ebp, esp */ r_ebp = r_esp;
    /* 00715b0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715b0d: push 0x8f07e4 */ { u32 v = 0x8f07e4u; r_esp -= 4; W32(r_esp, v); }
    /* 00715b12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715b19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715b20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715b23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00715b26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00715b29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00715b2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00715b2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00715b32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00715b35: mov dword ptr [ecx], 0xb3f718 */ W32((u32)(r_ecx), 0xb3f718u);
    /* 00715b3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00715b42: call 0x73a2ec */ r_esp -= 4; W32(r_esp, 0x715b47u); f_0073a2ec();
    /* 00715b47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715b4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00715b51: mov esp, ebp */ r_esp = r_ebp;
    /* 00715b53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715b54: ret  */ FN_RET(0x00715b08); r_esp += 4; return;
}

void f_00715b58(void) /* sub_715B58 */
{
    FN_ENTER(0x00715b58);
    /* 00715b58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715b59: mov ebp, esp */ r_ebp = r_esp;
    /* 00715b5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715b5d: push 0x8f080c */ { u32 v = 0x8f080cu; r_esp -= 4; W32(r_esp, v); }
    /* 00715b62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715b69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715b70: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715b73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00715b76: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00715b79: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00715b7c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00715b7f: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 00715b84: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00715b87: jg 0x715b99 */ if ((!fZ&&fS==fO)) goto L_00715b99;
L_00715b89:; BB(0x00715b89);
    /* 00715b89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715b8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715b8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00715b95: mov esp, ebp */ r_esp = r_ebp;
    /* 00715b97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715b98: ret  */ FN_RET(0x00715b58); r_esp += 4; return;
L_00715b99:; BB(0x00715b99);
    /* 00715b99: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00715ba0: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 00715ba2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x715ba7u); f_005caba4();
    /* 00715ba7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00715baa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00715bad: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00715bb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715bb2: je 0x715c00 */ if (fZ) goto L_00715c00;
L_00715bb4:; BB(0x00715bb4);
    /* 00715bb4: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00715bbb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00715bc2: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00715bc4: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x715bc9u); f_0073ec50();
    /* 00715bc9: mov ebx, eax */ r_ebx = r_eax;
    /* 00715bcb: push 0x131 */ { u32 v = 0x131u; r_esp -= 4; W32(r_esp, v); }
    /* 00715bd0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x715bd5u); f_0079317c();
    /* 00715bd5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00715bd8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715bdc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715bdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00715be0: call 0x715c08 */ r_esp -= 4; W32(r_esp, 0x715be5u); f_00715c08();
    /* 00715be5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00715bec:; BB(0x00715bec);
    /* 00715bec: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715bef: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00715bf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715bf5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00715bfc: mov esp, ebp */ r_esp = r_ebp;
    /* 00715bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715bff: ret  */ FN_RET(0x00715b58); r_esp += 4; return;
L_00715c00:; BB(0x00715c00);
    /* 00715c00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00715c02: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00715c05: jmp 0x715bec */ goto L_00715bec;
}

void f_00715c08(void) /* sub_715C08 */
{
    FN_ENTER(0x00715c08);
    /* 00715c08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715c09: mov ebp, esp */ r_ebp = r_esp;
    /* 00715c0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715c0d: push 0x8f0828 */ { u32 v = 0x8f0828u; r_esp -= 4; W32(r_esp, v); }
    /* 00715c12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715c18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715c19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715c20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715c23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00715c26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00715c29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00715c2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00715c2f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715c32: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00715c35: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00715c38: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00715c3b: call 0x73a3cc */ r_esp -= 4; W32(r_esp, 0x715c40u); f_0073a3cc();
    /* 00715c40: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00715c47: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00715c4a: mov dword ptr [ecx], 0xb3f718 */ W32((u32)(r_ecx), 0xb3f718u);
    /* 00715c50: mov eax, dword ptr [0x9f1ff0] */ r_eax = R32((u32)(0x9f1ff0u));
    /* 00715c55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00715c57: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00715c5a: call 0x73a54c */ r_esp -= 4; W32(r_esp, 0x715c5fu); f_0073a54c();
    /* 00715c5f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00715c62: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00715c65: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00715c6c: mov esp, ebp */ r_esp = r_ebp;
    /* 00715c6e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00715c6f: ret 0xc */ FN_RET(0x00715c08); r_esp += 16; return;
}

void f_00715c80(void) /* sub_715C80 */
{
    FN_ENTER(0x00715c80);
    /* 00715c80: mov dword ptr [0xa98458], 0x3f800000 */ W32((u32)(0xa98458u), 0x3f800000u);
    /* 00715c8a: mov dword ptr [0xa9845c], 0x41000000 */ W32((u32)(0xa9845cu), 0x41000000u);
    /* 00715c94: mov dword ptr [0xa98460], 0x3fc00000 */ W32((u32)(0xa98460u), 0x3fc00000u);
    /* 00715c9e: ret  */ FN_RET(0x00715c80); r_esp += 4; return;
}

void f_00715ca0(void) /* sub_715CA0 */
{
    FN_ENTER(0x00715ca0);
    /* 00715ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00715ca1: mov ebp, esp */ r_ebp = r_esp;
    /* 00715ca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00715ca5: push 0x8f0844 */ { u32 v = 0x8f0844u; r_esp -= 4; W32(r_esp, v); }
    /* 00715caa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00715cb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00715cb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00715cb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00715cbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00715cbe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00715cc1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00715cc4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00715cc7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00715cca: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00715ccd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00715cd4: mov eax, ecx */ r_eax = r_ecx;
    /* 00715cd6: mov dword ptr [eax], 0xb3f8b0 */ W32((u32)(r_eax), 0xb3f8b0u);
    /* 00715cdc: mov esi, 3 */ r_esi = 0x3u;
L_00715ce1:; BB(0x00715ce1);
    /* 00715ce1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715ce4: mov ecx, dword ptr [eax + esi*4 + 0x90] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x90u));
    /* 00715ceb: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00715cee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715cf0: je 0x715d05 */ if (fZ) goto L_00715d05;
L_00715cf2:; BB(0x00715cf2);
    /* 00715cf2: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715cf7u); f_007127b0();
    /* 00715cf7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715cfa: mov dword ptr [eax + ebx*2 + 0x90], 0 */ W32((u32)(r_eax+r_ebx*2+0x90u), 0x0u);
L_00715d05:; BB(0x00715d05);
    /* 00715d05: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00715d08: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00715d0a: jge 0x715ce1 */ if ((fS==fO)) goto L_00715ce1;
L_00715d0c:; BB(0x00715d0c);
    /* 00715d0c: mov ecx, dword ptr [eax + 0x44] */ r_ecx = R32((u32)(r_eax+0x44u));
    /* 00715d0f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715d11: je 0x715d22 */ if (fZ) goto L_00715d22;
L_00715d13:; BB(0x00715d13);
    /* 00715d13: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715d18u); f_007127b0();
    /* 00715d18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d1b: mov dword ptr [eax + 0x44], 0 */ W32((u32)(r_eax+0x44u), 0x0u);
L_00715d22:; BB(0x00715d22);
    /* 00715d22: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00715d25: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715d27: je 0x715d38 */ if (fZ) goto L_00715d38;
L_00715d29:; BB(0x00715d29);
    /* 00715d29: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715d2eu); f_007127b0();
    /* 00715d2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d31: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_00715d38:; BB(0x00715d38);
    /* 00715d38: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 00715d3b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715d3d: je 0x715d4e */ if (fZ) goto L_00715d4e;
L_00715d3f:; BB(0x00715d3f);
    /* 00715d3f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715d44u); f_007127b0();
    /* 00715d44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d47: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_00715d4e:; BB(0x00715d4e);
    /* 00715d4e: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 00715d51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715d53: je 0x715d6c */ if (fZ) goto L_00715d6c;
L_00715d55:; BB(0x00715d55);
    /* 00715d55: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715d59: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715d5e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715d62: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d65: mov dword ptr [edx + 0x40], 0 */ W32((u32)(r_edx+0x40u), 0x0u);
L_00715d6c:; BB(0x00715d6c);
    /* 00715d6c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d6f: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00715d72: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715d74: je 0x715d8d */ if (fZ) goto L_00715d8d;
L_00715d76:; BB(0x00715d76);
    /* 00715d76: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715d7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715d7f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715d83: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d86: mov dword ptr [edx + 0x3c], 0 */ W32((u32)(r_edx+0x3cu), 0x0u);
L_00715d8d:; BB(0x00715d8d);
    /* 00715d8d: mov esi, 2 */ r_esi = 0x2u;
L_00715d92:; BB(0x00715d92);
    /* 00715d92: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715d95: mov ecx, dword ptr [eax + esi*4 + 0x84] */ r_ecx = R32((u32)(r_eax+r_esi*4+0x84u));
    /* 00715d9c: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00715d9f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715da1: je 0x715db6 */ if (fZ) goto L_00715db6;
L_00715da3:; BB(0x00715da3);
    /* 00715da3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715da8u); f_007127b0();
    /* 00715da8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715dab: mov dword ptr [eax + ebx*2 + 0x84], 0 */ W32((u32)(r_eax+r_ebx*2+0x84u), 0x0u);
L_00715db6:; BB(0x00715db6);
    /* 00715db6: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00715db9: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00715dbb: jge 0x715d92 */ if ((fS==fO)) goto L_00715d92;
L_00715dbd:; BB(0x00715dbd);
    /* 00715dbd: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 00715dc3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715dc5: je 0x715de1 */ if (fZ) goto L_00715de1;
L_00715dc7:; BB(0x00715dc7);
    /* 00715dc7: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715dcb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715dd0: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715dd4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715dd7: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
L_00715de1:; BB(0x00715de1);
    /* 00715de1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715de4: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 00715de7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715de9: je 0x715e02 */ if (fZ) goto L_00715e02;
L_00715deb:; BB(0x00715deb);
    /* 00715deb: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715def: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715df4: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715df8: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715dfb: mov dword ptr [edx + 0x7c], 0 */ W32((u32)(r_edx+0x7cu), 0x0u);
L_00715e02:; BB(0x00715e02);
    /* 00715e02: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e05: mov edx, dword ptr [eax + 0x78] */ r_edx = R32((u32)(r_eax+0x78u));
    /* 00715e08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715e0a: je 0x715e23 */ if (fZ) goto L_00715e23;
L_00715e0c:; BB(0x00715e0c);
    /* 00715e0c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715e10: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715e15: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715e19: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e1c: mov dword ptr [edx + 0x78], 0 */ W32((u32)(r_edx+0x78u), 0x0u);
L_00715e23:; BB(0x00715e23);
    /* 00715e23: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e26: mov edx, dword ptr [eax + 0x74] */ r_edx = R32((u32)(r_eax+0x74u));
    /* 00715e29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715e2b: je 0x715e44 */ if (fZ) goto L_00715e44;
L_00715e2d:; BB(0x00715e2d);
    /* 00715e2d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715e31: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715e36: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715e3a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e3d: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
L_00715e44:; BB(0x00715e44);
    /* 00715e44: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e47: mov edx, dword ptr [eax + 0x70] */ r_edx = R32((u32)(r_eax+0x70u));
    /* 00715e4a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715e4c: je 0x715e65 */ if (fZ) goto L_00715e65;
L_00715e4e:; BB(0x00715e4e);
    /* 00715e4e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715e52: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715e57: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715e5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e5e: mov dword ptr [edx + 0x70], 0 */ W32((u32)(r_edx+0x70u), 0x0u);
L_00715e65:; BB(0x00715e65);
    /* 00715e65: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e68: mov edx, dword ptr [eax + 0x6c] */ r_edx = R32((u32)(r_eax+0x6cu));
    /* 00715e6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715e6d: je 0x715e86 */ if (fZ) goto L_00715e86;
L_00715e6f:; BB(0x00715e6f);
    /* 00715e6f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715e73: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715e78: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715e7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e7f: mov dword ptr [edx + 0x6c], 0 */ W32((u32)(r_edx+0x6cu), 0x0u);
L_00715e86:; BB(0x00715e86);
    /* 00715e86: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715e89: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 00715e8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715e8e: je 0x715ea7 */ if (fZ) goto L_00715ea7;
L_00715e90:; BB(0x00715e90);
    /* 00715e90: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715e94: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715e99: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715e9d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715ea0: mov dword ptr [edx + 0x68], 0 */ W32((u32)(r_edx+0x68u), 0x0u);
L_00715ea7:; BB(0x00715ea7);
    /* 00715ea7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715eaa: mov edx, dword ptr [eax + 0x64] */ r_edx = R32((u32)(r_eax+0x64u));
    /* 00715ead: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715eaf: je 0x715ec8 */ if (fZ) goto L_00715ec8;
L_00715eb1:; BB(0x00715eb1);
    /* 00715eb1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715eb5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715eba: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715ebe: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715ec1: mov dword ptr [edx + 0x64], 0 */ W32((u32)(r_edx+0x64u), 0x0u);
L_00715ec8:; BB(0x00715ec8);
    /* 00715ec8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715ecb: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00715ece: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715ed0: je 0x715ee9 */ if (fZ) goto L_00715ee9;
L_00715ed2:; BB(0x00715ed2);
    /* 00715ed2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715ed6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715edb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715edf: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715ee2: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
L_00715ee9:; BB(0x00715ee9);
    /* 00715ee9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715eec: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 00715eef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715ef1: je 0x715f0a */ if (fZ) goto L_00715f0a;
L_00715ef3:; BB(0x00715ef3);
    /* 00715ef3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715ef7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715efc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715f00: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f03: mov dword ptr [edx + 0x5c], 0 */ W32((u32)(r_edx+0x5cu), 0x0u);
L_00715f0a:; BB(0x00715f0a);
    /* 00715f0a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f0d: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00715f10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715f12: je 0x715f2b */ if (fZ) goto L_00715f2b;
L_00715f14:; BB(0x00715f14);
    /* 00715f14: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715f18: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715f1d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715f21: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f24: mov dword ptr [edx + 0x58], 0 */ W32((u32)(r_edx+0x58u), 0x0u);
L_00715f2b:; BB(0x00715f2b);
    /* 00715f2b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f2e: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00715f31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715f33: je 0x715f4c */ if (fZ) goto L_00715f4c;
L_00715f35:; BB(0x00715f35);
    /* 00715f35: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715f39: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715f3e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715f42: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f45: mov dword ptr [edx + 0x54], 0 */ W32((u32)(r_edx+0x54u), 0x0u);
L_00715f4c:; BB(0x00715f4c);
    /* 00715f4c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f4f: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00715f52: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715f54: je 0x715f6d */ if (fZ) goto L_00715f6d;
L_00715f56:; BB(0x00715f56);
    /* 00715f56: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715f5a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715f5f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715f63: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f66: mov dword ptr [edx + 0x38], 0 */ W32((u32)(r_edx+0x38u), 0x0u);
L_00715f6d:; BB(0x00715f6d);
    /* 00715f6d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f70: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00715f73: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715f75: je 0x715f86 */ if (fZ) goto L_00715f86;
L_00715f77:; BB(0x00715f77);
    /* 00715f77: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715f7cu); f_007127b0();
    /* 00715f7c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715f7f: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_00715f86:; BB(0x00715f86);
    /* 00715f86: cmp eax, dword ptr [0xa98478] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa98478u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715f8c: jne 0x715f98 */ if (!fZ) goto L_00715f98;
L_00715f8e:; BB(0x00715f8e);
    /* 00715f8e: mov dword ptr [0xa98478], 0 */ W32((u32)(0xa98478u), 0x0u);
L_00715f98:; BB(0x00715f98);
    /* 00715f98: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00715f9b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715f9d: je 0x715fb6 */ if (fZ) goto L_00715fb6;
L_00715f9f:; BB(0x00715f9f);
    /* 00715f9f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715fa3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715fa8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715fac: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715faf: mov dword ptr [edx + 0x4c], 0 */ W32((u32)(r_edx+0x4cu), 0x0u);
L_00715fb6:; BB(0x00715fb6);
    /* 00715fb6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715fb9: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 00715fbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715fbe: je 0x715fd7 */ if (fZ) goto L_00715fd7;
L_00715fc0:; BB(0x00715fc0);
    /* 00715fc0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00715fc4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00715fc9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00715fcd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00715fd0: mov dword ptr [edx + 0x50], 0 */ W32((u32)(r_edx+0x50u), 0x0u);
L_00715fd7:; BB(0x00715fd7);
    /* 00715fd7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715fda: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 00715fdd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00715fdf: je 0x715ff0 */ if (fZ) goto L_00715ff0;
L_00715fe1:; BB(0x00715fe1);
    /* 00715fe1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x715fe6u); f_007127b0();
    /* 00715fe6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00715fe9: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_00715ff0:; BB(0x00715ff0);
    /* 00715ff0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00715ff7: mov ecx, eax */ r_ecx = r_eax;
    /* 00715ff9: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x715ffeu); f_008171e8();
    /* 00715ffe: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00716001: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00716003: jne 0x71601e */ if (!fZ) goto L_0071601e;
L_00716005:; BB(0x00716005);
    /* 00716005: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00716008: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0071600b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0071600e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00716011: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00716018: mov esp, ebp */ r_esp = r_ebp;
    /* 0071601a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071601b: ret 4 */ FN_RET(0x00715ca0); r_esp += 8; return;
L_0071601e:; BB(0x0071601e);
    /* 0071601e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00716021: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00716022: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x716027u); f_005c2f74();
    /* 00716027: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00716028: jmp 0x716005 */ goto L_00716005;
}

