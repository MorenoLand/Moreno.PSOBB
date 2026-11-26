#include "protos.h"

void f_007350c4(void) /* sub_7350C4 */
{
    FN_ENTER(0x007350c4);
    /* 007350c4: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007350cb: or eax, 0xffff4000 */ {  u32 a = r_eax; u32 b = 0xffff4000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007350d0: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 007350d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007350d9: mov dword ptr [ecx + 0x94], 0x41200000 */ W32((u32)(r_ecx+0x94u), 0x41200000u);
    /* 007350e3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007350e4: mov word ptr [ecx + 0x8c], dx */ W16((u32)(r_ecx+0x8cu), (u16)r_edx);
    /* 007350eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007350ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007350ed: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007350f2: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7350f7u); f_00814298();
    /* 007350f7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007350fa: ret  */ FN_RET(0x007350c4); r_esp += 4; return;
}

void f_007350fc(void) /* sub_7350FC */
{
    FN_ENTER(0x007350fc);
    /* 007350fc: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00735103: or eax, 0xffff2000 */ {  u32 a = r_eax; u32 b = 0xffff2000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735108: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 0073510f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00735111: mov dword ptr [ecx + 0x94], 0xc1200000 */ W32((u32)(r_ecx+0x94u), 0xc1200000u);
    /* 0073511b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073511c: mov word ptr [ecx + 0x8c], dx */ W16((u32)(r_ecx+0x8cu), (u16)r_edx);
    /* 00735123: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00735124: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00735125: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073512a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x73512fu); f_00814298();
    /* 0073512f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735132: ret  */ FN_RET(0x007350fc); r_esp += 4; return;
}

void f_00735134(void) /* sub_735134 */
{
    FN_ENTER(0x00735134);
    /* 00735134: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00735135: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00735137: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
    /* 0073513e: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00735140: je 0x735144 */ if (fZ) goto L_00735144;
L_00735142:; BB(0x00735142);
    /* 00735142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735143: ret  */ FN_RET(0x00735134); r_esp += 4; return;
L_00735144:; BB(0x00735144);
    /* 00735144: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00735146: je 0x73514a */ if (fZ) goto L_0073514a;
L_00735148:; BB(0x00735148);
    /* 00735148: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735149: ret  */ FN_RET(0x00735134); r_esp += 4; return;
L_0073514a:; BB(0x0073514a);
    /* 0073514a: test eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073514f: jne 0x73516a */ if (!fZ) goto L_0073516a;
L_00735151:; BB(0x00735151);
    /* 00735151: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00735153: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735155: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735156: push 0x585 */ { u32 v = 0x585u; r_esp -= 4; W32(r_esp, v); }
    /* 0073515b: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x735160u); f_00814298();
    /* 00735160: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00735163: movzx eax, word ptr [ebx + 0x84] */ r_eax = (u32)R16((u32)(r_ebx+0x84u));
L_0073516a:; BB(0x0073516a);
    /* 0073516a: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073516f: mov word ptr [ebx + 0x84], ax */ W16((u32)(r_ebx+0x84u), (u16)r_eax);
    /* 00735176: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735177: ret  */ FN_RET(0x00735134); r_esp += 4; return;
}

void f_00735178(void) /* sub_735178 */
{
    FN_ENTER(0x00735178);
    /* 00735178: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00735179: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073517b: movzx eax, word ptr [ebp + 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0x84u));
    /* 00735182: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00735184: je 0x735188 */ if (fZ) goto L_00735188;
L_00735186:; BB(0x00735186);
    /* 00735186: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735187: ret  */ FN_RET(0x00735178); r_esp += 4; return;
L_00735188:; BB(0x00735188);
    /* 00735188: movsx ecx, word ptr [ebp + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x8cu));
    /* 0073518f: mov edx, dword ptr [ebp + 0x98] */ r_edx = R32((u32)(r_ebp+0x98u));
    /* 00735195: mov edx, dword ptr [edx + ecx*8] */ r_edx = R32((u32)(r_edx+r_ecx*8));
    /* 00735198: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073519b: je 0x7351b6 */ if (fZ) goto L_007351b6;
L_0073519d:; BB(0x0073519d);
    /* 0073519d: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007351a0: jne 0x7351b4 */ if (!fZ) goto L_007351b4;
L_007351a2:; BB(0x007351a2);
    /* 007351a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007351a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007351a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007351a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007351a7: push 0x575 */ { u32 v = 0x575u; r_esp -= 4; W32(r_esp, v); }
    /* 007351ac: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7351b1u); f_00814298();
    /* 007351b1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_007351b4:; BB(0x007351b4);
    /* 007351b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007351b5: ret  */ FN_RET(0x00735178); r_esp += 4; return;
L_007351b6:; BB(0x007351b6);
    /* 007351b6: test dl, 0x20 */ {  u32 a = (u8)r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007351b9: jne 0x7351d4 */ if (!fZ) goto L_007351d4;
L_007351bb:; BB(0x007351bb);
    /* 007351bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007351bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007351be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007351bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007351c0: push 0x570 */ { u32 v = 0x570u; r_esp -= 4; W32(r_esp, v); }
    /* 007351c5: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x7351cau); f_00814298();
    /* 007351ca: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007351cd: movzx eax, word ptr [ebp + 0x84] */ r_eax = (u32)R16((u32)(r_ebp+0x84u));
L_007351d4:; BB(0x007351d4);
    /* 007351d4: mov ecx, dword ptr [ebp + 0x60] */ r_ecx = R32((u32)(r_ebp+0x60u));
    /* 007351d7: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007351dc: mov word ptr [ebp + 0x84], ax */ W16((u32)(r_ebp+0x84u), (u16)r_eax);
    /* 007351e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007351e5: je 0x7351ee */ if (fZ) goto L_007351ee;
L_007351e7:; BB(0x007351e7);
    /* 007351e7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007351e9: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7351eeu); f_00760acc();
L_007351ee:; BB(0x007351ee);
    /* 007351ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007351ef: ret  */ FN_RET(0x00735178); r_esp += 4; return;
}

void f_007351f0(void) /* sub_7351F0 */
{
    FN_ENTER(0x007351f0);
    /* 007351f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007351f1: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007351f4: mov edi, ecx */ r_edi = r_ecx;
    /* 007351f6: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 007351fd: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007351ff: jne 0x735247 */ if (!fZ) goto L_00735247;
L_00735201:; BB(0x00735201);
    /* 00735201: fld dword ptr [0x9714a8] */ FPUSH(R_F32((u32)(0x9714a8u)));
L_00735207:; BB(0x00735207);
    /* 00735207: mov eax, dword ptr [edi + 0x50] */ r_eax = R32((u32)(r_edi+0x50u));
    /* 0073520a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073520c: jne 0x735216 */ if (!fZ) goto L_00735216;
L_0073520e:; BB(0x0073520e);
    /* 0073520e: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 00735211: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735214: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735215: ret  */ FN_RET(0x007351f0); r_esp += 4; return;
L_00735216:; BB(0x00735216);
    /* 00735216: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00735219: fsub dword ptr [edi + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_edi+0x4cu));
    /* 0073521c: fmul dword ptr [0x9714a4] */ ST(0) = ST(0) * R_F32((u32)(0x9714a4u));
    /* 00735222: fld dword ptr [edi + 0x74] */ FPUSH(R_F32((u32)(r_edi+0x74u)));
    /* 00735225: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00735227: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00735229: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0073522b: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0073522e: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00735231: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00735234: fadd dword ptr [eax*4 + 0x971398] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x971398u));
    /* 0073523b: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0073523d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0073523f: fstp dword ptr [edi + 0x74] */ W_F32((u32)(r_edi+0x74u), ST(0)); FPOP();
    /* 00735242: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735245: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735246: ret  */ FN_RET(0x007351f0); r_esp += 4; return;
L_00735247:; BB(0x00735247);
    /* 00735247: mov ecx, edi */ r_ecx = r_edi;
    /* 00735249: call 0x735254 */ r_esp -= 4; W32(r_esp, 0x73524eu); f_00735254();
    /* 0073524e: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 00735251: jmp 0x735207 */ goto L_00735207;
}

void f_00735254(void) /* sub_735254 */
{
    FN_ENTER(0x00735254);
    /* 00735254: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 0073525b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0073525d: jl 0x735268 */ if ((fS!=fO)) goto L_00735268;
L_0073525f:; BB(0x0073525f);
    /* 0073525f: cmp ax, word ptr [ecx + 0x8a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ecx+0x8au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; fC = (a < b); }
    /* 00735266: jl 0x73526b */ if ((fS!=fO)) goto L_0073526b;
L_00735268:; BB(0x00735268);
    /* 00735268: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073526a: ret  */ FN_RET(0x00735254); r_esp += 4; return;
L_0073526b:; BB(0x0073526b);
    /* 0073526b: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0073526e: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 00735271: ret  */ FN_RET(0x00735254); r_esp += 4; return;
}

void f_00735274(void) /* sub_735274 */
{
    FN_ENTER(0x00735274);
    /* 00735274: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735277: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 0073527a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073527c: je 0x7352cb */ if (fZ) goto L_007352cb;
L_0073527e:; BB(0x0073527e);
    /* 0073527e: mov eax, dword ptr [ecx + 0x50] */ r_eax = R32((u32)(r_ecx+0x50u));
    /* 00735281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00735283: ja 0x7352cb */ if ((!fC&&!fZ)) goto L_007352cb;
L_00735285:; BB(0x00735285);
    /* 00735285: fld dword ptr [0x97149c] */ FPUSH(R_F32((u32)(0x97149cu)));
    /* 0073528b: fadd dword ptr [ecx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4cu));
    /* 0073528e: fmul dword ptr [0x971498] */ ST(0) = ST(0) * R_F32((u32)(0x971498u));
    /* 00735294: movsx eax, word ptr [ecx + 0x8c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 0073529b: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0073529e: mov eax, dword ptr [ecx + 0x60] */ r_eax = R32((u32)(r_ecx+0x60u));
    /* 007352a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007352a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007352a5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 007352a8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007352ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007352ad: fadd dword ptr [0x9714a0] */ ST(0) = ST(0) + R_F32((u32)(0x9714a0u));
    /* 007352b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007352b5: je 0x7352bd */ if (fZ) goto L_007352bd;
L_007352b7:; BB(0x007352b7);
    /* 007352b7: fadd dword ptr [0x971494] */ ST(0) = ST(0) + R_F32((u32)(0x971494u));
L_007352bd:; BB(0x007352bd);
    /* 007352bd: fld dword ptr [ecx + 0x74] */ FPUSH(R_F32((u32)(r_ecx+0x74u)));
    /* 007352c0: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 007352c2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 007352c4: fstp dword ptr [ecx + 0x74] */ W_F32((u32)(r_ecx+0x74u), ST(0)); FPOP();
    /* 007352c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007352ca: ret  */ FN_RET(0x00735274); r_esp += 4; return;
L_007352cb:; BB(0x007352cb);
    /* 007352cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007352ce: ret  */ FN_RET(0x00735274); r_esp += 4; return;
}

void f_007352d0(void) /* sub_7352D0 */
{
    FN_ENTER(0x007352d0);
    /* 007352d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007352d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007352d2: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007352d5: mov esi, ecx */ r_esi = r_ecx;
    /* 007352d7: mov ecx, esi */ r_ecx = r_esi;
    /* 007352d9: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x7352deu); f_007108f4();
    /* 007352de: mov edi, eax */ r_edi = r_eax;
    /* 007352e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007352e1: mov ecx, esi */ r_ecx = r_esi;
    /* 007352e3: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7352e8u); f_00710f80();
    /* 007352e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007352e9: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 007352ec: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007352ed: mov ecx, esi */ r_ecx = r_esi;
    /* 007352ef: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7352f4u); f_0072a648();
    /* 007352f4: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007352fb: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735301: jne 0x735313 */ if (!fZ) goto L_00735313;
L_00735303:; BB(0x00735303);
    /* 00735303: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00735304: mov ecx, esi */ r_ecx = r_esi;
    /* 00735306: call 0x7353e8 */ r_esp -= 4; W32(r_esp, 0x73530bu); f_007353e8();
    /* 0073530b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073530c: mov ecx, esi */ r_ecx = r_esi;
    /* 0073530e: call 0x735428 */ r_esp -= 4; W32(r_esp, 0x735313u); f_00735428();
L_00735313:; BB(0x00735313);
    /* 00735313: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00735316: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735318: je 0x735320 */ if (fZ) goto L_00735320;
L_0073531a:; BB(0x0073531a);
    /* 0073531a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073531b: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x735320u); f_00761390();
L_00735320:; BB(0x00735320);
    /* 00735320: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 00735323: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735325: je 0x735331 */ if (fZ) goto L_00735331;
L_00735327:; BB(0x00735327);
    /* 00735327: lea edx, [esi + 0x70] */ r_edx = (u32)(r_esi+0x70u);
    /* 0073532a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073532b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0073532c: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x735331u); f_0073f694();
L_00735331:; BB(0x00735331);
    /* 00735331: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00735338: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073533e: jne 0x735346 */ if (!fZ) goto L_00735346;
L_00735340:; BB(0x00735340);
    /* 00735340: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735343: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00735344: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735345: ret  */ FN_RET(0x007352d0); r_esp += 4; return;
L_00735346:; BB(0x00735346);
    /* 00735346: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0073534b: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x735350u); f_0082bb30();
    /* 00735350: mov ecx, dword ptr [0xa983d8] */ r_ecx = R32((u32)(0xa983d8u));
    /* 00735356: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x73535bu); f_00829cc8();
    /* 0073535b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073535d: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00735362: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x735367u); f_0082bb60();
    /* 00735367: fld dword ptr [0x971488] */ FPUSH(R_F32((u32)(0x971488u)));
    /* 0073536d: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 00735370: fld dword ptr [0x97148c] */ FPUSH(R_F32((u32)(0x97148cu)));
    /* 00735376: fadd dword ptr [esi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44u));
    /* 00735379: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 0073537c: mov edx, dword ptr [esi + 0x94] */ r_edx = R32((u32)(r_esi+0x94u));
    /* 00735382: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00735384: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00735388: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 0073538c: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0073538f: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00735397: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0073539b: call 0x73e8cc */ r_esp -= 4; W32(r_esp, 0x7353a0u); f_0073e8cc();
    /* 007353a0: fld dword ptr [0x971484] */ FPUSH(R_F32((u32)(0x971484u)));
    /* 007353a6: fadd dword ptr [esi + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x40u));
    /* 007353a9: fadd dword ptr [esi + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x48u));
    /* 007353ac: fld dword ptr [0x97148c] */ FPUSH(R_F32((u32)(0x97148cu)));
    /* 007353b2: fadd dword ptr [esi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x44u));
    /* 007353b5: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 007353b8: mov eax, dword ptr [esi + 0x94] */ r_eax = R32((u32)(r_esi+0x94u));
    /* 007353be: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007353c0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 007353c4: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 007353c8: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 007353cb: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 007353d3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007353d7: call 0x73e844 */ r_esp -= 4; W32(r_esp, 0x7353dcu); f_0073e844();
    /* 007353dc: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x7353e1u); f_004ac444();
    /* 007353e1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007353e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007353e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007353e6: ret  */ FN_RET(0x007352d0); r_esp += 4; return;
}

void f_007353e8(void) /* sub_7353E8 */
{
    FN_ENTER(0x007353e8);
    /* 007353e8: movsx edx, word ptr [ecx + 0x8c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8cu));
    /* 007353ef: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007353f2: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007353f5: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 007353f9: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007353fc: jne 0x735401 */ if (!fZ) goto L_00735401;
L_007353fe:; BB(0x007353fe);
    /* 007353fe: ret 4 */ FN_RET(0x007353e8); r_esp += 8; return;
L_00735401:; BB(0x00735401);
    /* 00735401: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00735408: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073540b: je 0x735414 */ if (fZ) goto L_00735414;
L_0073540d:; BB(0x0073540d);
    /* 0073540d: mov edx, 1 */ r_edx = 0x1u;
    /* 00735412: jmp 0x735416 */ goto L_00735416;
L_00735414:; BB(0x00735414);
    /* 00735414: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00735416:; BB(0x00735416);
    /* 00735416: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00735417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735418: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073541c: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x735421u); f_007120ec();
    /* 00735421: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735424: ret 4 */ FN_RET(0x007353e8); r_esp += 8; return;
}

void f_00735428(void) /* sub_735428 */
{
    FN_ENTER(0x00735428);
    /* 00735428: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0073542d: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073542f: jne 0x73545d */ if (!fZ) goto L_0073545d;
L_00735431:; BB(0x00735431);
    /* 00735431: movsx edx, word ptr [ecx + 0x8e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8eu));
    /* 00735438: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073543a: jl 0x73545d */ if ((fS!=fO)) goto L_0073545d;
L_0073543c:; BB(0x0073543c);
    /* 0073543c: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 0073543f: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00735442: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00735446: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00735449: jne 0x73544e */ if (!fZ) goto L_0073544e;
L_0073544b:; BB(0x0073544b);
    /* 0073544b: ret 4 */ FN_RET(0x00735428); r_esp += 8; return;
L_0073544e:; BB(0x0073544e);
    /* 0073544e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00735450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735451: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00735455: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x73545au); f_007120ec();
    /* 0073545a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0073545d:; BB(0x0073545d);
    /* 0073545d: ret 4 */ FN_RET(0x00735428); r_esp += 8; return;
}

void f_00735460(void) /* sub_735460 */
{
    FN_ENTER(0x00735460);
    /* 00735460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00735461: mov ebp, esp */ r_ebp = r_esp;
    /* 00735463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00735465: push 0x8f18d8 */ { u32 v = 0x8f18d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0073546a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00735470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735471: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00735478: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073547b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073547e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00735481: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00735484: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00735487: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00735489: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073548c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073548f: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x735494u); f_007354fc();
    /* 00735494: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00735497: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0073549e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007354a0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7354a5u); f_008581c5();
    /* 007354a5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007354a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007354ab: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007354ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007354b0: je 0x7354f3 */ if (fZ) goto L_007354f3;
L_007354b2:; BB(0x007354b2);
    /* 007354b2: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007354b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007354c0: mov ecx, eax */ r_ecx = r_eax;
    /* 007354c2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007354c4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007354c7: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x7354ccu); f_00761320();
    /* 007354cc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007354d3:; BB(0x007354d3);
    /* 007354d3: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 007354d6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007354d9: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007354dc: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007354df: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007354e2: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 007354e5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007354e8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007354ef: mov esp, ebp */ r_esp = r_ebp;
    /* 007354f1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007354f2: ret  */ FN_RET(0x00735460); r_esp += 4; return;
L_007354f3:; BB(0x007354f3);
    /* 007354f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007354f5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007354f8: jmp 0x7354d3 */ goto L_007354d3;
}

void f_007354fc(void) /* sub_7354FC */
{
    FN_ENTER(0x007354fc);
    /* 007354fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007354fd: mov ebp, esp */ r_ebp = r_esp;
    /* 007354ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00735501: push 0x8f190e */ { u32 v = 0x8f190eu; r_esp -= 4; W32(r_esp, v); }
    /* 00735506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073550c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073550d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00735514: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073551a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073551d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00735520: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00735523: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00735526: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 0073552d: mov dword ptr [0x9f30ec], eax */ W32((u32)(0x9f30ecu), r_eax);
    /* 00735532: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00735537: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x73553cu); f_005caba4();
    /* 0073553c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073553f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00735542: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00735545: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735547: je 0x735663 */ if (fZ) goto L_00735663;
L_0073554d:; BB(0x0073554d);
    /* 0073554d: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00735554: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073555b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073555e: mov ecx, eax */ r_ecx = r_eax;
    /* 00735560: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00735564: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00735567: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735568: push 0x9f310c */ { u32 v = 0x9f310cu; r_esp -= 4; W32(r_esp, v); }
    /* 0073556d: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x735572u); f_007108c4();
    /* 00735572: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00735579: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0073557c: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0073557f: movsx ecx, word ptr [ebp + 0x10] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00735583: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00735585: mov word ptr [esi + 0x86], dx */ W16((u32)(r_esi+0x86u), (u16)r_edx);
    /* 0073558c: mov word ptr [esi + 0x88], dx */ W16((u32)(r_esi+0x88u), (u16)r_edx);
    /* 00735593: mov dword ptr [esi], 0xb40a38 */ W32((u32)(r_esi), 0xb40a38u);
    /* 00735599: mov eax, dword ptr [0x9f30e4] */ r_eax = R32((u32)(0x9f30e4u));
    /* 0073559e: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 007355a1: mov word ptr [esi + 0x8a], di */ W16((u32)(r_esi+0x8au), (u16)r_edi);
    /* 007355a8: mov word ptr [esi + 0x8c], dx */ W16((u32)(r_esi+0x8cu), (u16)r_edx);
    /* 007355af: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007355b6: mov word ptr [esi + 0x20], cx */ W16((u32)(r_esi+0x20u), (u16)r_ecx);
    /* 007355ba: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 007355bf: mov word ptr [esi + 0x8e], bx */ W16((u32)(r_esi+0x8eu), (u16)r_ebx);
    /* 007355c6: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007355c9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007355cb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007355cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007355ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7355d3u); f_008581c5();
    /* 007355d3: mov edx, eax */ r_edx = r_eax;
    /* 007355d5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007355d8: mov ecx, esi */ r_ecx = r_esi;
    /* 007355da: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 007355dd: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 007355e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007355e5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007355e7: jbe 0x735634 */ if ((fC||fZ)) goto L_00735634;
L_007355e9:; BB(0x007355e9);
    /* 007355e9: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 007355ec: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007355ef: jb 0x735620 */ if (fC) goto L_00735620;
L_007355f1:; BB(0x007355f1);
    /* 007355f1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 007355f4: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_007355f7:; BB(0x007355f7);
    /* 007355f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007355f9: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 007355fb: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 007355fe: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00735601: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00735604: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00735607: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 0073560a: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 0073560d: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00735610: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00735613: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00735616: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735619: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073561c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0073561e: jbe 0x7355f7 */ if ((fC||fZ)) goto L_007355f7;
L_00735620:; BB(0x00735620);
    /* 00735620: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00735623: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00735625: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00735627: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 0073562a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073562d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735630: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00735632: jb 0x735620 */ if (fC) goto L_00735620;
L_00735634:; BB(0x00735634);
    /* 00735634: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00735637: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 00735641: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00735643: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00735646: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00735649: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
L_0073564c:; BB(0x0073564c);
    /* 0073564c: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0073564f: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735652: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00735655: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00735658: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0073565f: mov esp, ebp */ r_esp = r_ebp;
    /* 00735661: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735662: ret  */ FN_RET(0x007354fc); r_esp += 4; return;
L_00735663:; BB(0x00735663);
    /* 00735663: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00735665: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00735668: jmp 0x73564c */ goto L_0073564c;
}

void f_0073566c(void) /* sub_73566C */
{
    FN_ENTER(0x0073566c);
    /* 0073566c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073566d: mov ebp, esp */ r_ebp = r_esp;
    /* 0073566f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00735671: push 0x8f1934 */ { u32 v = 0x8f1934u; r_esp -= 4; W32(r_esp, v); }
    /* 00735676: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0073567c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073567d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00735684: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735687: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0073568a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0073568d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00735690: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00735693: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00735696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735697: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0073569a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073569d: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x7356a2u); f_007354fc();
    /* 007356a2: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007356a5: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007356ac: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007356ae: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7356b3u); f_008581c5();
    /* 007356b3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007356b6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007356b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007356bb: je 0x735701 */ if (fZ) goto L_00735701;
L_007356bd:; BB(0x007356bd);
    /* 007356bd: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007356c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007356cb: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007356ce: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007356d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007356d2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007356d5: call 0x761320 */ r_esp -= 4; W32(r_esp, 0x7356dau); f_00761320();
    /* 007356da: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007356dd: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007356e4:; BB(0x007356e4);
    /* 007356e4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007356e7: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 007356ea: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 007356ed: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007356f0: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 007356f3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007356f6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007356fd: mov esp, ebp */ r_esp = r_ebp;
    /* 007356ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735700: ret  */ FN_RET(0x0073566c); r_esp += 4; return;
L_00735701:; BB(0x00735701);
    /* 00735701: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00735703: jmp 0x7356e4 */ goto L_007356e4;
}

void f_00735708(void) /* sub_735708 */
{
    FN_ENTER(0x00735708);
    /* 00735708: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00735709: mov ebp, esp */ r_ebp = r_esp;
    /* 0073570b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0073570d: push 0x8f196a */ { u32 v = 0x8f196au; r_esp -= 4; W32(r_esp, v); }
    /* 00735712: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00735718: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735719: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00735720: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735723: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00735726: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00735729: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0073572c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0073572f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00735732: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00735739: mov dword ptr [0x9f30ec], eax */ W32((u32)(0x9f30ecu), r_eax);
    /* 0073573e: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00735743: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x735748u); f_005caba4();
    /* 00735748: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0073574b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073574e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00735751: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735753: je 0x73586d */ if (fZ) goto L_0073586d;
L_00735759:; BB(0x00735759);
    /* 00735759: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00735760: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00735767: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073576a: mov ecx, eax */ r_ecx = r_eax;
    /* 0073576c: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0073576f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00735771: push 0x9f310c */ { u32 v = 0x9f310cu; r_esp -= 4; W32(r_esp, v); }
    /* 00735776: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x73577bu); f_007108c4();
    /* 0073577b: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00735782: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00735785: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00735788: mov dword ptr [esi], 0xb40a38 */ W32((u32)(r_esi), 0xb40a38u);
    /* 0073578e: mov eax, dword ptr [0x9f30e4] */ r_eax = R32((u32)(0x9f30e4u));
    /* 00735793: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00735796: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00735798: mov word ptr [esi + 0x86], dx */ W16((u32)(r_esi+0x86u), (u16)r_edx);
    /* 0073579f: mov word ptr [esi + 0x88], dx */ W16((u32)(r_esi+0x88u), (u16)r_edx);
    /* 007357a6: mov word ptr [esi + 0x8a], di */ W16((u32)(r_esi+0x8au), (u16)r_edi);
    /* 007357ad: mov word ptr [esi + 0x8c], dx */ W16((u32)(r_esi+0x8cu), (u16)r_edx);
    /* 007357b4: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007357bb: mov ecx, 4 */ r_ecx = 0x4u;
    /* 007357c0: mov word ptr [esi + 0x20], cx */ W16((u32)(r_esi+0x20u), (u16)r_ecx);
    /* 007357c4: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 007357c9: mov word ptr [esi + 0x8e], bx */ W16((u32)(r_esi+0x8eu), (u16)r_ebx);
    /* 007357d0: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007357d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007357d5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007357d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007357d8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7357ddu); f_008581c5();
    /* 007357dd: mov edx, eax */ r_edx = r_eax;
    /* 007357df: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007357e2: mov ecx, esi */ r_ecx = r_esi;
    /* 007357e4: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 007357e7: mov dword ptr [ecx + 0x98], edx */ W32((u32)(r_ecx+0x98u), r_edx);
    /* 007357ed: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007357ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007357f1: jbe 0x73583e */ if ((fC||fZ)) goto L_0073583e;
L_007357f3:; BB(0x007357f3);
    /* 007357f3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 007357f6: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007357f9: jb 0x73582a */ if (fC) goto L_0073582a;
L_007357fb:; BB(0x007357fb);
    /* 007357fb: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 007357fe: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_00735801:; BB(0x00735801);
    /* 00735801: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00735803: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00735805: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00735808: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 0073580b: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 0073580e: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00735811: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00735814: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00735817: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 0073581a: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 0073581d: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00735820: add edx, 0x28 */ {  u32 a = r_edx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735823: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00735826: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00735828: jbe 0x735801 */ if ((fC||fZ)) goto L_00735801;
L_0073582a:; BB(0x0073582a);
    /* 0073582a: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0073582d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073582f: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00735831: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00735834: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00735837: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073583a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0073583c: jb 0x73582a */ if (fC) goto L_0073582a;
L_0073583e:; BB(0x0073583e);
    /* 0073583e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00735841: mov dword ptr [eax + 0x94], 0 */ W32((u32)(r_eax+0x94u), 0x0u);
    /* 0073584b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073584d: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00735850: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00735853: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
L_00735856:; BB(0x00735856);
    /* 00735856: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00735859: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073585c: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0073585f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00735862: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00735869: mov esp, ebp */ r_esp = r_ebp;
    /* 0073586b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073586c: ret  */ FN_RET(0x00735708); r_esp += 4; return;
L_0073586d:; BB(0x0073586d);
    /* 0073586d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073586f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00735872: jmp 0x735856 */ goto L_00735856;
}

void f_00735874(void) /* _iswdigit */
{
    FN_ENTER(0x00735874);
    /* 00735874: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00735876: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073587a: call 0x735884 */ r_esp -= 4; W32(r_esp, 0x73587fu); f_00735884();
    /* 0073587f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735882: ret  */ FN_RET(0x00735874); r_esp += 4; return;
}

void f_00735884(void) /* sub_735884 */
{
    FN_ENTER(0x00735884);
    /* 00735884: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00735885: mov ebx, esp */ r_ebx = r_esp;
    /* 00735887: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0073588a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073588b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0073588c: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0073588f: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00735893: mov ebp, esp */ r_ebp = r_esp;
    /* 00735895: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00735897: push 0x8f19a4 */ { u32 v = 0x8f19a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073589c: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007358a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007358a3: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007358aa: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007358ad: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007358b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007358b3: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 007358b6: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 007358b9: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 007358be: mov dword ptr [0x9f30ec], 2 */ W32((u32)(0x9f30ecu), 0x2u);
    /* 007358c8: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 007358cf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7358d4u); f_005caba4();
    /* 007358d4: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007358d7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007358da: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 007358dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007358df: je 0x735c86 */ if (fZ) goto L_00735c86;
L_007358e5:; BB(0x007358e5);
    /* 007358e5: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 007358ec: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007358f3: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007358f6: mov ecx, eax */ r_ecx = r_eax;
    /* 007358f8: movsx eax, word ptr [ebx + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 007358fc: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 007358ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735900: push 0x9f310c */ { u32 v = 0x9f310cu; r_esp -= 4; W32(r_esp, v); }
    /* 00735905: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x73590au); f_007108c4();
    /* 0073590a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00735911: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735914: movsx edi, word ptr [ebx + 0xc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 00735918: mov dword ptr [eax], 0xb40a38 */ W32((u32)(r_eax), 0xb40a38u);
    /* 0073591e: mov edx, dword ptr [0x9f30e4] */ r_edx = R32((u32)(0x9f30e4u));
    /* 00735924: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00735926: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00735929: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0073592b: mov word ptr [eax + 0x86], si */ W16((u32)(r_eax+0x86u), (u16)r_esi);
    /* 00735932: mov word ptr [eax + 0x88], si */ W16((u32)(r_eax+0x88u), (u16)r_esi);
    /* 00735939: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0073593e: mov word ptr [eax + 0x8a], cx */ W16((u32)(r_eax+0x8au), (u16)r_ecx);
    /* 00735945: mov word ptr [eax + 0x8c], si */ W16((u32)(r_eax+0x8cu), (u16)r_esi);
    /* 0073594c: mov word ptr [eax + 0x84], si */ W16((u32)(r_eax+0x84u), (u16)r_esi);
    /* 00735953: mov word ptr [eax + 0x20], di */ W16((u32)(r_eax+0x20u), (u16)r_edi);
    /* 00735957: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0073595c: mov word ptr [eax + 0x8e], dx */ W16((u32)(r_eax+0x8eu), (u16)r_edx);
    /* 00735963: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x735968u); f_008581c5();
    /* 00735968: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00735969: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0073596c: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
    /* 00735972: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00735974: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00735976: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00735979: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0073597c: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 0073597f: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00735982: mov dword ptr [edx + 0x60], ecx */ W32((u32)(r_edx+0x60u), r_ecx);
    /* 00735985: mov dword ptr [edx + 0x64], ecx */ W32((u32)(r_edx+0x64u), r_ecx);
    /* 00735988: mov dword ptr [edx + 0x94], 0 */ W32((u32)(r_edx+0x94u), 0x0u);
L_00735992:; BB(0x00735992);
    /* 00735992: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00735999: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 0073599b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7359a0u); f_0079317c();
    /* 007359a0: mov edx, eax */ r_edx = r_eax;
    /* 007359a2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007359a5: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007359a8: movsx esi, word ptr [ecx + 0x86] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x86u));
    /* 007359af: cmp si, word ptr [ecx + 0x8a] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_ecx+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 007359b6: mov edi, 6 */ r_edi = 0x6u;
    /* 007359bb: jge 0x735a68 */ if ((fS==fO)) goto L_00735a68;
L_007359c1:; BB(0x007359c1);
    /* 007359c1: mov eax, ecx */ r_eax = r_ecx;
    /* 007359c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007359c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007359c6: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007359c9: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 007359cc: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 007359d2: mov dword ptr [ecx + 0x24], 0xffffffff */ W32((u32)(r_ecx+0x24u), 0xffffffffu);
    /* 007359d9: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 007359dc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 007359df: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 007359e2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007359e4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007359e6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007359e9: fild dword ptr [ebp - 0x48] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffb8u)));
    /* 007359ec: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 007359ef: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7359f4u); f_0072db60();
    /* 007359f4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007359f7: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 007359fb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007359fe: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00735a02: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735a05: movsx ecx, word ptr [edx + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x86u));
    /* 00735a0c: cmp cx, word ptr [edx + 0x88] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edx+0x88u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00735a13: jne 0x735a1c */ if (!fZ) goto L_00735a1c;
L_00735a15:; BB(0x00735a15);
    /* 00735a15: mov edi, 4 */ r_edi = 0x4u;
    /* 00735a1a: jmp 0x735a28 */ goto L_00735a28;
L_00735a1c:; BB(0x00735a1c);
    /* 00735a1c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00735a1f: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735a24: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
L_00735a28:; BB(0x00735a28);
    /* 00735a28: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735a2b: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00735a32: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735a38: je 0x735a42 */ if (fZ) goto L_00735a42;
L_00735a3a:; BB(0x00735a3a);
    /* 00735a3a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00735a3d: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x735a42u); f_0072e0e4();
L_00735a42:; BB(0x00735a42);
    /* 00735a42: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00735a47: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00735a4a: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x735a4fu); f_0072ddf4();
    /* 00735a4f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00735a52: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735a55: mov dword ptr [eax + esi*8 + 4], 0 */ W32((u32)(r_eax+r_esi*8+0x4u), 0x0u);
    /* 00735a5d: mov dword ptr [eax + esi*8], edi */ W32((u32)(r_eax+r_esi*8), r_edi);
    /* 00735a60: add word ptr [edx + 0x86], 1 */ { u32 ad = (u32)(r_edx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_00735a68:; BB(0x00735a68);
    /* 00735a68: push 0x6f */ { u32 v = 0x6fu; r_esp -= 4; W32(r_esp, v); }
    /* 00735a6a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x735a6fu); f_0079317c();
    /* 00735a6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00735a70: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735a73: movsx edx, word ptr [ecx + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x86u));
    /* 00735a7a: movsx ecx, word ptr [ecx + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
    /* 00735a81: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00735a84: mov esi, 6 */ r_esi = 0x6u;
    /* 00735a89: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00735a8b: jge 0x735b41 */ if ((fS==fO)) goto L_00735b41;
L_00735a91:; BB(0x00735a91);
    /* 00735a91: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735a94: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00735a97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00735a99: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 00735a9c: mov ecx, dword ptr [ecx + edi*4] */ r_ecx = R32((u32)(r_ecx+r_edi*4));
    /* 00735a9f: mov edx, dword ptr [edx + 0x98] */ r_edx = R32((u32)(r_edx+0x98u));
    /* 00735aa5: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00735aa8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735aa9: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 00735aac: mov dword ptr [ecx + 0x24], 0xffffffff */ W32((u32)(r_ecx+0x24u), 0xffffffffu);
    /* 00735ab3: lea edx, [edi + edi*4] */ r_edx = (u32)(r_edi+r_edi*4);
    /* 00735ab6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735ab8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735aba: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 00735abd: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 00735ac0: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00735ac3: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735ac8u); f_0072db60();
    /* 00735ac8: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00735acb: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735ace: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00735ad2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735ad5: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
    /* 00735ad9: movsx ecx, word ptr [edi + 0x86] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735ae0: cmp cx, word ptr [edi + 0x88] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_edi+0x88u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00735ae7: jne 0x735af0 */ if (!fZ) goto L_00735af0;
L_00735ae9:; BB(0x00735ae9);
    /* 00735ae9: mov esi, 4 */ r_esi = 0x4u;
    /* 00735aee: jmp 0x735af9 */ goto L_00735af9;
L_00735af0:; BB(0x00735af0);
    /* 00735af0: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735af5: mov word ptr [edx + 4], ax */ W16((u32)(r_edx+0x4u), (u16)r_eax);
L_00735af9:; BB(0x00735af9);
    /* 00735af9: mov eax, edi */ r_eax = r_edi;
    /* 00735afb: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00735b02: test edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735b08: je 0x735b12 */ if (fZ) goto L_00735b12;
L_00735b0a:; BB(0x00735b0a);
    /* 00735b0a: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00735b0d: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x735b12u); f_0072e0e4();
L_00735b12:; BB(0x00735b12);
    /* 00735b12: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00735b17: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00735b1a: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x735b1fu); f_0072ddf4();
    /* 00735b1f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00735b22: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00735b25: mov ecx, edi */ r_ecx = r_edi;
    /* 00735b27: mov dword ptr [eax + edx*8], esi */ W32((u32)(r_eax+r_edx*8), r_esi);
    /* 00735b2a: mov dword ptr [eax + edx*8 + 4], 1 */ W32((u32)(r_eax+r_edx*8+0x4u), 0x1u);
    /* 00735b32: add word ptr [ecx + 0x86], 1 */ { u32 ad = (u32)(r_ecx+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00735b3a: movsx ecx, word ptr [ecx + 0x8a] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ecx+0x8au));
L_00735b41:; BB(0x00735b41);
    /* 00735b41: fld dword ptr [0x971478] */ FPUSH(R_F32((u32)(0x971478u)));
    /* 00735b47: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00735b49: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00735b4b: jbe 0x735b86 */ if ((fC||fZ)) goto L_00735b86;
L_00735b4d:; BB(0x00735b4d);
    /* 00735b4d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735b50: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 00735b53: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
L_00735b56:; BB(0x00735b56);
    /* 00735b56: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00735b59: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00735b5c: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 00735b5f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735b61: je 0x735b7f */ if (fZ) goto L_00735b7f;
L_00735b63:; BB(0x00735b63);
    /* 00735b63: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00735b66: fcom qword ptr [0x971390] */ fx_compare(ST(0), R_F64((u32)(0x971390u))); 
    /* 00735b6c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00735b6e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00735b6f: ja 0x735b75 */ if ((!fC&&!fZ)) goto L_00735b75;
L_00735b71:; BB(0x00735b71);
    /* 00735b71: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00735b73: jmp 0x735b7f */ goto L_00735b7f;
L_00735b75:; BB(0x00735b75);
    /* 00735b75: fld dword ptr [0x971470] */ FPUSH(R_F32((u32)(0x971470u)));
    /* 00735b7b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00735b7d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_00735b7f:; BB(0x00735b7f);
    /* 00735b7f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735b82: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00735b84: jb 0x735b56 */ if (fC) goto L_00735b56;
L_00735b86:; BB(0x00735b86);
    /* 00735b86: fadd dword ptr [0x97146c] */ ST(0) = ST(0) + R_F32((u32)(0x97146cu));
    /* 00735b8c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735b8f: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00735b92: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00735b95: je 0x735b9d */ if (fZ) goto L_00735b9d;
L_00735b97:; BB(0x00735b97);
    /* 00735b97: fadd dword ptr [0x971470] */ ST(0) = ST(0) + R_F32((u32)(0x971470u));
L_00735b9d:; BB(0x00735b9d);
    /* 00735b9d: mov ecx, eax */ r_ecx = r_eax;
    /* 00735b9f: fld dword ptr [0x971464] */ FPUSH(R_F32((u32)(0x971464u)));
    /* 00735ba5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00735ba7: fst dword ptr [ecx + 0x90] */ W_F32((u32)(r_ecx+0x90u), ST(0));
    /* 00735bad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00735baf: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 00735bb2: mov dword ptr [ecx + 0x38], 0x42d00000 */ W32((u32)(r_ecx+0x38u), 0x42d00000u);
    /* 00735bb9: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x735bbeu); f_00710f64();
    /* 00735bbe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735bc1: fld dword ptr [0x971460] */ FPUSH(R_F32((u32)(0x971460u)));
    /* 00735bc7: fld dword ptr [eax + 0x38] */ FPUSH(R_F32((u32)(r_eax+0x38u)));
    /* 00735bca: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00735bcc: fmul dword ptr [0x971458] */ ST(0) = ST(0) * R_F32((u32)(0x971458u));
    /* 00735bd2: fadd dword ptr [0x97145c] */ ST(0) = ST(0) + R_F32((u32)(0x97145cu));
    /* 00735bd8: movsx eax, word ptr [eax + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
    /* 00735bdf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00735be1: fstp dword ptr [ebp - 0x20] */ W_F32((u32)(r_ebp+0xffffffe0u), ST(0)); FPOP();
    /* 00735be4: fstp dword ptr [ebp - 0x24] */ W_F32((u32)(r_ebp+0xffffffdcu), ST(0)); FPOP();
    /* 00735be7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00735be9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00735beb: jbe 0x735c4c */ if ((fC||fZ)) goto L_00735c4c;
L_00735bed:; BB(0x00735bed);
    /* 00735bed: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735bf0: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00735bf3: mov esi, dword ptr [edx + edi*4] */ r_esi = R32((u32)(r_edx+r_edi*4));
    /* 00735bf6: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00735bf9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735bfb: je 0x735c45 */ if (fZ) goto L_00735c45;
L_00735bfd:; BB(0x00735bfd);
    /* 00735bfd: fld dword ptr [ebp - 0x20] */ FPUSH(R_F32((u32)(r_ebp+0xffffffe0u)));
    /* 00735c00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00735c01: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00735c04: mov ecx, esi */ r_ecx = r_esi;
    /* 00735c06: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x735c0bu); f_0072ddf4();
    /* 00735c0b: fld dword ptr [esi + 0x14] */ FPUSH(R_F32((u32)(r_esi+0x14u)));
    /* 00735c0e: fcomp dword ptr [0x971454] */ fx_compare(ST(0), R_F32((u32)(0x971454u))); FPOP();
    /* 00735c14: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00735c16: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00735c17: jbe 0x735c2c */ if ((fC||fZ)) goto L_00735c2c;
L_00735c19:; BB(0x00735c19);
    /* 00735c19: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735c1c: mov dword ptr [esi + 8], 0 */ W32((u32)(r_esi+0x8u), 0x0u);
    /* 00735c23: movsx eax, word ptr [eax + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
    /* 00735c2a: jmp 0x735c45 */ goto L_00735c45;
L_00735c2c:; BB(0x00735c2c);
    /* 00735c2c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735c2f: fld dword ptr [esi + 0x10] */ FPUSH(R_F32((u32)(r_esi+0x10u)));
    /* 00735c32: fmul dword ptr [0x971450] */ ST(0) = ST(0) * R_F32((u32)(0x971450u));
    /* 00735c38: fadd dword ptr [ebp - 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffdcu));
    /* 00735c3b: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 00735c3e: movsx eax, word ptr [eax + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x8au));
L_00735c45:; BB(0x00735c45);
    /* 00735c45: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00735c48: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00735c4a: jb 0x735bed */ if (fC) goto L_00735bed;
L_00735c4c:; BB(0x00735c4c);
    /* 00735c4c: push 0x47436e00 */ { u32 v = 0x47436e00u; r_esp -= 4; W32(r_esp, v); }
    /* 00735c51: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735c54: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00735c5b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735c60: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 00735c67: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x735c6cu); f_00712624();
    /* 00735c6c: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00735c6f: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00735c72: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00735c75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00735c78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00735c7f: mov esp, ebp */ r_esp = r_ebp;
    /* 00735c81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735c82: mov esp, ebx */ r_esp = r_ebx;
    /* 00735c84: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735c85: ret  */ FN_RET(0x00735884); r_esp += 4; return;
L_00735c86:; BB(0x00735c86);
    /* 00735c86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00735c88: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00735c8b: jmp 0x735992 */ goto L_00735992;
}

void f_00735c90(void) /* sub_735C90 */
{
    FN_ENTER(0x00735c90);
    /* 00735c90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00735c91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00735c92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00735c93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00735c94: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735c97: mov edi, ecx */ r_edi = r_ecx;
    /* 00735c99: movsx ebp, word ptr [edi + 0x86] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735ca0: cmp bp, word ptr [edi + 0x8a] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_edi+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00735ca7: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00735cab: jl 0x735cb9 */ if ((fS!=fO)) goto L_00735cb9;
L_00735cad:; BB(0x00735cad);
    /* 00735cad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00735caf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735cb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735cb3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735cb4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00735cb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735cb6: ret 0xc */ FN_RET(0x00735c90); r_esp += 16; return;
L_00735cb9:; BB(0x00735cb9);
    /* 00735cb9: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 00735cbc: mov ebx, dword ptr [ebx + ebp*4] */ r_ebx = R32((u32)(r_ebx+r_ebp*4));
    /* 00735cbf: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 00735cc5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00735cc9: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 00735ccd: mov dword ptr [ebx + 0x24], 0xffffffff */ W32((u32)(r_ebx+0x24u), 0xffffffffu);
    /* 00735cd4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735cd6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735cd8: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735cde: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00735ce1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00735ce4: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 00735ce7: je 0x735cf9 */ if (fZ) goto L_00735cf9;
L_00735ce9:; BB(0x00735ce9);
    /* 00735ce9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00735ceb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00735cef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735cf0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735cf2: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735cf7u); f_0072db60();
    /* 00735cf7: jmp 0x735d07 */ goto L_00735d07;
L_00735cf9:; BB(0x00735cf9);
    /* 00735cf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00735cfb: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00735cff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735d00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735d02: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735d07u); f_0072db60();
L_00735d07:; BB(0x00735d07);
    /* 00735d07: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735d0d: je 0x735d1c */ if (fZ) goto L_00735d1c;
L_00735d0f:; BB(0x00735d0f);
    /* 00735d0f: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735d13: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735d18: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735d1c:; BB(0x00735d1c);
    /* 00735d1c: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735d22: je 0x735d31 */ if (fZ) goto L_00735d31;
L_00735d24:; BB(0x00735d24);
    /* 00735d24: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735d28: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735d2d: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735d31:; BB(0x00735d31);
    /* 00735d31: test esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735d37: je 0x735d46 */ if (fZ) goto L_00735d46;
L_00735d39:; BB(0x00735d39);
    /* 00735d39: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735d3d: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735d42: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735d46:; BB(0x00735d46);
    /* 00735d46: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735d4c: je 0x735d70 */ if (fZ) goto L_00735d70;
L_00735d4e:; BB(0x00735d4e);
    /* 00735d4e: movsx eax, word ptr [edi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735d55: cmp ax, word ptr [edi + 0x88] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x88u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00735d5c: jne 0x735d63 */ if (!fZ) goto L_00735d63;
L_00735d5e:; BB(0x00735d5e);
    /* 00735d5e: and esi, 0xfffffffd */ {  u32 a = r_esi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00735d61: jmp 0x735d70 */ goto L_00735d70;
L_00735d63:; BB(0x00735d63);
    /* 00735d63: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735d67: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735d6c: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735d70:; BB(0x00735d70);
    /* 00735d70: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00735d77: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735d7c: je 0x735d85 */ if (fZ) goto L_00735d85;
L_00735d7e:; BB(0x00735d7e);
    /* 00735d7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735d80: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x735d85u); f_0072e0e4();
L_00735d85:; BB(0x00735d85);
    /* 00735d85: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00735d8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735d8c: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x735d91u); f_0072ddf4();
    /* 00735d91: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00735d95: mov dword ptr [eax + ebp*8], esi */ W32((u32)(r_eax+r_ebp*8), r_esi);
    /* 00735d98: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00735d9c: mov dword ptr [eax + ebp*8 + 4], esi */ W32((u32)(r_eax+r_ebp*8+0x4u), r_esi);
    /* 00735da0: add word ptr [edi + 0x86], 1 */ { u32 ad = (u32)(r_edi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00735da8: mov eax, 1 */ r_eax = 0x1u;
    /* 00735dad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735db0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735db1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735db2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00735db3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735db4: ret 0xc */ FN_RET(0x00735c90); r_esp += 16; return;
}

void f_00735db8(void) /* sub_735DB8 */
{
    FN_ENTER(0x00735db8);
    /* 00735db8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00735db9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00735dba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00735dbb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00735dbc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735dbf: mov edi, ecx */ r_edi = r_ecx;
    /* 00735dc1: movsx ebp, word ptr [edi + 0x86] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735dc8: cmp bp, word ptr [edi + 0x8a] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_edi+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00735dcf: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00735dd3: jl 0x735de1 */ if ((fS!=fO)) goto L_00735de1;
L_00735dd5:; BB(0x00735dd5);
    /* 00735dd5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00735dd7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735dda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735ddb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735ddc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00735ddd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735dde: ret 0x10 */ FN_RET(0x00735db8); r_esp += 20; return;
L_00735de1:; BB(0x00735de1);
    /* 00735de1: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 00735de4: mov ebx, dword ptr [ebx + ebp*4] */ r_ebx = R32((u32)(r_ebx+r_ebp*4));
    /* 00735de7: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 00735ded: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00735df1: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 00735df5: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 00735df9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735dfb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735dfd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00735e00: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00735e03: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00735e06: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 00735e09: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735e0f: je 0x735e21 */ if (fZ) goto L_00735e21;
L_00735e11:; BB(0x00735e11);
    /* 00735e11: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00735e13: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00735e17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735e18: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735e1a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735e1fu); f_0072db60();
    /* 00735e1f: jmp 0x735e2f */ goto L_00735e2f;
L_00735e21:; BB(0x00735e21);
    /* 00735e21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00735e23: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00735e27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735e28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735e2a: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735e2fu); f_0072db60();
L_00735e2f:; BB(0x00735e2f);
    /* 00735e2f: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735e35: je 0x735e44 */ if (fZ) goto L_00735e44;
L_00735e37:; BB(0x00735e37);
    /* 00735e37: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735e3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735e40: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735e44:; BB(0x00735e44);
    /* 00735e44: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735e4a: je 0x735e59 */ if (fZ) goto L_00735e59;
L_00735e4c:; BB(0x00735e4c);
    /* 00735e4c: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735e50: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735e55: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735e59:; BB(0x00735e59);
    /* 00735e59: test esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735e5f: je 0x735e6e */ if (fZ) goto L_00735e6e;
L_00735e61:; BB(0x00735e61);
    /* 00735e61: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735e65: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735e6a: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735e6e:; BB(0x00735e6e);
    /* 00735e6e: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735e74: je 0x735e98 */ if (fZ) goto L_00735e98;
L_00735e76:; BB(0x00735e76);
    /* 00735e76: movsx eax, word ptr [edi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735e7d: cmp ax, word ptr [edi + 0x88] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x88u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00735e84: jne 0x735e8b */ if (!fZ) goto L_00735e8b;
L_00735e86:; BB(0x00735e86);
    /* 00735e86: and esi, 0xfffffffd */ {  u32 a = r_esi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00735e89: jmp 0x735e98 */ goto L_00735e98;
L_00735e8b:; BB(0x00735e8b);
    /* 00735e8b: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735e8f: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735e94: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735e98:; BB(0x00735e98);
    /* 00735e98: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00735e9f: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735ea4: je 0x735ead */ if (fZ) goto L_00735ead;
L_00735ea6:; BB(0x00735ea6);
    /* 00735ea6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735ea8: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x735eadu); f_0072e0e4();
L_00735ead:; BB(0x00735ead);
    /* 00735ead: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00735eb2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735eb4: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x735eb9u); f_0072ddf4();
    /* 00735eb9: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00735ebd: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00735ec1: mov dword ptr [eax + ebp*8], esi */ W32((u32)(r_eax+r_ebp*8), r_esi);
    /* 00735ec4: mov dword ptr [eax + ebp*8 + 4], edx */ W32((u32)(r_eax+r_ebp*8+0x4u), r_edx);
    /* 00735ec8: add word ptr [edi + 0x86], 1 */ { u32 ad = (u32)(r_edi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00735ed0: mov eax, 1 */ r_eax = 0x1u;
    /* 00735ed5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735ed8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735ed9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735eda: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00735edb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735edc: ret 0x10 */ FN_RET(0x00735db8); r_esp += 20; return;
}

void f_00735ee0(void) /* sub_735EE0 */
{
    FN_ENTER(0x00735ee0);
    /* 00735ee0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00735ee1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00735ee2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00735ee3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00735ee4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00735ee7: mov edi, ecx */ r_edi = r_ecx;
    /* 00735ee9: movsx ebp, word ptr [edi + 0x86] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735ef0: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00735ef4: or esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00735ef7: cmp bp, word ptr [edi + 0x8a] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_edi+0x8au)); u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 00735efe: jl 0x735f0c */ if ((fS!=fO)) goto L_00735f0c;
L_00735f00:; BB(0x00735f00);
    /* 00735f00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00735f02: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00735f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00735f06: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00735f07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00735f08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00735f09: ret 0xc */ FN_RET(0x00735ee0); r_esp += 16; return;
L_00735f0c:; BB(0x00735f0c);
    /* 00735f0c: mov ebx, dword ptr [edi + 0x28] */ r_ebx = R32((u32)(r_edi+0x28u));
    /* 00735f0f: mov ebx, dword ptr [ebx + ebp*4] */ r_ebx = R32((u32)(r_ebx+r_ebp*4));
    /* 00735f12: mov eax, dword ptr [edi + 0x98] */ r_eax = R32((u32)(r_edi+0x98u));
    /* 00735f18: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00735f1c: lea edx, [ebp + ebp*4] */ r_edx = (u32)(r_ebp+r_ebp*4);
    /* 00735f20: mov dword ptr [ebx + 0x24], 0xff909090 */ W32((u32)(r_ebx+0x24u), 0xff909090u);
    /* 00735f27: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735f29: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00735f2b: test esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735f31: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00735f34: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00735f37: fstp dword ptr [ebx + 0xc] */ W_F32((u32)(r_ebx+0xcu), ST(0)); FPOP();
    /* 00735f3a: je 0x735f4c */ if (fZ) goto L_00735f4c;
L_00735f3c:; BB(0x00735f3c);
    /* 00735f3c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00735f3e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00735f42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735f43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735f45: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735f4au); f_0072db60();
    /* 00735f4a: jmp 0x735f5a */ goto L_00735f5a;
L_00735f4c:; BB(0x00735f4c);
    /* 00735f4c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00735f4e: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00735f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735f53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735f55: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x735f5au); f_0072db60();
L_00735f5a:; BB(0x00735f5a);
    /* 00735f5a: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735f60: je 0x735f6f */ if (fZ) goto L_00735f6f;
L_00735f62:; BB(0x00735f62);
    /* 00735f62: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735f66: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735f6b: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735f6f:; BB(0x00735f6f);
    /* 00735f6f: test esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735f75: je 0x735f84 */ if (fZ) goto L_00735f84;
L_00735f77:; BB(0x00735f77);
    /* 00735f77: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735f7b: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735f80: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735f84:; BB(0x00735f84);
    /* 00735f84: test esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735f8a: je 0x735f99 */ if (fZ) goto L_00735f99;
L_00735f8c:; BB(0x00735f8c);
    /* 00735f8c: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735f90: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735f95: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735f99:; BB(0x00735f99);
    /* 00735f99: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735f9f: je 0x735fc3 */ if (fZ) goto L_00735fc3;
L_00735fa1:; BB(0x00735fa1);
    /* 00735fa1: movsx eax, word ptr [edi + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x86u));
    /* 00735fa8: cmp ax, word ptr [edi + 0x88] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edi+0x88u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00735faf: jne 0x735fb6 */ if (!fZ) goto L_00735fb6;
L_00735fb1:; BB(0x00735fb1);
    /* 00735fb1: and esi, 0xfffffffd */ {  u32 a = r_esi; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00735fb4: jmp 0x735fc3 */ goto L_00735fc3;
L_00735fb6:; BB(0x00735fb6);
    /* 00735fb6: movzx eax, word ptr [ebx + 4] */ r_eax = (u32)R16((u32)(r_ebx+0x4u));
    /* 00735fba: or eax, 0xffff0008 */ {  u32 a = r_eax; u32 b = 0xffff0008u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00735fbf: mov word ptr [ebx + 4], ax */ W16((u32)(r_ebx+0x4u), (u16)r_eax);
L_00735fc3:; BB(0x00735fc3);
    /* 00735fc3: movzx eax, word ptr [edi + 0x84] */ r_eax = (u32)R16((u32)(r_edi+0x84u));
    /* 00735fca: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735fcf: je 0x735fd8 */ if (fZ) goto L_00735fd8;
L_00735fd1:; BB(0x00735fd1);
    /* 00735fd1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735fd3: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x735fd8u); f_0072e0e4();
L_00735fd8:; BB(0x00735fd8);
    /* 00735fd8: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 00735fdd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00735fdf: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x735fe4u); f_0072ddf4();
    /* 00735fe4: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00735fe8: mov dword ptr [eax + ebp*8], esi */ W32((u32)(r_eax+r_ebp*8), r_esi);
    /* 00735feb: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00735fef: mov dword ptr [eax + ebp*8 + 4], esi */ W32((u32)(r_eax+r_ebp*8+0x4u), r_esi);
    /* 00735ff3: add word ptr [edi + 0x86], 1 */ { u32 ad = (u32)(r_edi+0x86u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00735ffb: mov eax, 1 */ r_eax = 0x1u;
    /* 00736000: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00736003: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00736004: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00736005: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00736006: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00736007: ret 0xc */ FN_RET(0x00735ee0); r_esp += 16; return;
}

