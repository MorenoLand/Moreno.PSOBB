#include "protos.h"

void f_0044d00c(void) /* sub_44D00C */
{
    FN_ENTER(0x0044d00c);
    /* 0044d00c: mov eax, dword ptr [0xa44d64] */ r_eax = R32((u32)(0xa44d64u));
    /* 0044d011: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d013: je 0x44d02b */ if (fZ) goto L_0044d02b;
L_0044d015:; BB(0x0044d015);
    /* 0044d015: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0044d01b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d01e: je 0x44d02b */ if (fZ) goto L_0044d02b;
L_0044d020:; BB(0x0044d020);
    /* 0044d020: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044d023: je 0x44d02e */ if (fZ) goto L_0044d02e;
L_0044d025:; BB(0x0044d025);
    /* 0044d025: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d02a: ret  */ FN_RET(0x0044d00c); r_esp += 4; return;
L_0044d02b:; BB(0x0044d02b);
    /* 0044d02b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d02d: ret  */ FN_RET(0x0044d00c); r_esp += 4; return;
L_0044d02e:; BB(0x0044d02e);
    /* 0044d02e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d030: ret  */ FN_RET(0x0044d00c); r_esp += 4; return;
}

void f_0044d034(void) /* sub_44D034 */
{
    FN_ENTER(0x0044d034);
    /* 0044d034: mov eax, dword ptr [0xa44d60] */ r_eax = R32((u32)(0xa44d60u));
    /* 0044d039: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d03b: je 0x44d053 */ if (fZ) goto L_0044d053;
L_0044d03d:; BB(0x0044d03d);
    /* 0044d03d: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0044d043: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d046: je 0x44d053 */ if (fZ) goto L_0044d053;
L_0044d048:; BB(0x0044d048);
    /* 0044d048: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044d04b: je 0x44d056 */ if (fZ) goto L_0044d056;
L_0044d04d:; BB(0x0044d04d);
    /* 0044d04d: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d052: ret  */ FN_RET(0x0044d034); r_esp += 4; return;
L_0044d053:; BB(0x0044d053);
    /* 0044d053: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d055: ret  */ FN_RET(0x0044d034); r_esp += 4; return;
L_0044d056:; BB(0x0044d056);
    /* 0044d056: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d058: ret  */ FN_RET(0x0044d034); r_esp += 4; return;
}

void f_0044d05c(void) /* sub_44D05C */
{
    FN_ENTER(0x0044d05c);
    /* 0044d05c: mov eax, dword ptr [0xa44d5c] */ r_eax = R32((u32)(0xa44d5cu));
    /* 0044d061: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d063: je 0x44d07b */ if (fZ) goto L_0044d07b;
L_0044d065:; BB(0x0044d065);
    /* 0044d065: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0044d06b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d06e: je 0x44d07b */ if (fZ) goto L_0044d07b;
L_0044d070:; BB(0x0044d070);
    /* 0044d070: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044d073: je 0x44d07e */ if (fZ) goto L_0044d07e;
L_0044d075:; BB(0x0044d075);
    /* 0044d075: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d07a: ret  */ FN_RET(0x0044d05c); r_esp += 4; return;
L_0044d07b:; BB(0x0044d07b);
    /* 0044d07b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d07d: ret  */ FN_RET(0x0044d05c); r_esp += 4; return;
L_0044d07e:; BB(0x0044d07e);
    /* 0044d07e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d080: ret  */ FN_RET(0x0044d05c); r_esp += 4; return;
}

void f_0044d084(void) /* sub_44D084 */
{
    FN_ENTER(0x0044d084);
    /* 0044d084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d085: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d086: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d087: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d08a: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044d08f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0044d091: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044d093: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d095: jle 0x44d0da */ if ((fZ||fS!=fO)) goto L_0044d0da;
L_0044d097:; BB(0x0044d097);
    /* 0044d097: mov edi, edx */ r_edi = r_edx;
L_0044d099:; BB(0x0044d099);
    /* 0044d099: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 0044d0a0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d0a2: je 0x44d0cf */ if (fZ) goto L_0044d0cf;
L_0044d0a4:; BB(0x0044d0a4);
    /* 0044d0a4: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0044d0a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d0a9: call 0x453ab8 */ r_esp -= 4; W32(r_esp, 0x44d0aeu); f_00453ab8();
    /* 0044d0ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044d0af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d0b1: jne 0x44d0ba */ if (!fZ) goto L_0044d0ba;
L_0044d0b3:; BB(0x0044d0b3);
    /* 0044d0b3: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044d0b8: jmp 0x44d0cf */ goto L_0044d0cf;
L_0044d0ba:; BB(0x0044d0ba);
    /* 0044d0ba: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0044d0be: mov word ptr [esp + ebx*2], ax */ W16((u32)(r_esp+r_ebx*2), (u16)r_eax);
    /* 0044d0c2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044d0c5: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d0c8: jge 0x44d0d6 */ if ((fS==fO)) goto L_0044d0d6;
L_0044d0ca:; BB(0x0044d0ca);
    /* 0044d0ca: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0044d0cf:; BB(0x0044d0cf);
    /* 0044d0cf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044d0d2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d0d4: jl 0x44d099 */ if ((fS!=fO)) goto L_0044d099;
L_0044d0d6:; BB(0x0044d0d6);
    /* 0044d0d6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d0d8: jne 0x44d0e6 */ if (!fZ) goto L_0044d0e6;
L_0044d0da:; BB(0x0044d0da);
    /* 0044d0da: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0044d0df: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d0e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d0e3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d0e4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044d0e5: ret  */ FN_RET(0x0044d084); r_esp += 4; return;
L_0044d0e6:; BB(0x0044d0e6);
    /* 0044d0e6: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x44d0ebu); f_008587a5();
    /* 0044d0eb: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0044d0ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0044d0f3: fadd dword ptr [0x8fea8c] */ ST(0) = ST(0) + R_F32((u32)(0x8fea8cu));
    /* 0044d0f9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0044d0fd: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 0044d101: fdiv dword ptr [0x8fea88] */ ST(0) = ST(0) / R_F32((u32)(0x8fea88u));
    /* 0044d107: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044d109: fnstcw word ptr [esp + 0x18] */ W16((u32)(r_esp+0x18u), fcw);
    /* 0044d10d: movzx eax, word ptr [esp + 0x18] */ r_eax = (u32)R16((u32)(r_esp+0x18u));
    /* 0044d112: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044d117: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0044d11b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0044d11f: fistp dword ptr [esp + 0x28] */ W32((u32)(r_esp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044d123: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0044d127: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 0044d12b: movzx eax, word ptr [esp + edx*2] */ r_eax = (u32)R16((u32)(r_esp+r_edx*2));
    /* 0044d12f: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d132: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d133: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d134: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044d135: ret  */ FN_RET(0x0044d084); r_esp += 4; return;
}

void f_0044d138(void) /* sub_44D138 */
{
    FN_ENTER(0x0044d138);
    /* 0044d138: mov edx, dword ptr [0xa44d4c] */ r_edx = R32((u32)(0xa44d4cu));
    /* 0044d13e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d140: mov eax, 0 */ r_eax = 0x0u;
    /* 0044d145: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0044d148: ret  */ FN_RET(0x0044d138); r_esp += 4; return;
}

void f_0044d14c(void) /* sub_44D14C */
{
    FN_ENTER(0x0044d14c);
    /* 0044d14c: mov eax, dword ptr [0xa44d4c] */ r_eax = R32((u32)(0xa44d4cu));
    /* 0044d151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d153: je 0x44d17a */ if (fZ) goto L_0044d17a;
L_0044d155:; BB(0x0044d155);
    /* 0044d155: mov edx, dword ptr [eax + 0x384] */ r_edx = R32((u32)(r_eax+0x384u));
    /* 0044d15b: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0044d160: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d162: jne 0x44d16f */ if (!fZ) goto L_0044d16f;
L_0044d164:; BB(0x0044d164);
    /* 0044d164: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044d167: jl 0x44d17a */ if ((fS!=fO)) goto L_0044d17a;
L_0044d169:; BB(0x0044d169);
    /* 0044d169: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d16e: ret  */ FN_RET(0x0044d14c); r_esp += 4; return;
L_0044d16f:; BB(0x0044d16f);
    /* 0044d16f: cmp edx, 0xe */ {  u32 a = r_edx; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044d172: jl 0x44d17a */ if ((fS!=fO)) goto L_0044d17a;
L_0044d174:; BB(0x0044d174);
    /* 0044d174: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d179: ret  */ FN_RET(0x0044d14c); r_esp += 4; return;
L_0044d17a:; BB(0x0044d17a);
    /* 0044d17a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d17c: ret  */ FN_RET(0x0044d14c); r_esp += 4; return;
}

void f_0044d180(void) /* sub_44D180 */
{
    FN_ENTER(0x0044d180);
    /* 0044d180: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d183: mov edx, ecx */ r_edx = r_ecx;
    /* 0044d185: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0044d188: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d18b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0044d18e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0044d190: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044d192: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d194: jle 0x44d1ca */ if ((fZ||fS!=fO)) goto L_0044d1ca;
L_0044d196:; BB(0x0044d196);
    /* 0044d196: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 0044d19a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044d19c: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0044d19f: mov esi, edx */ r_esi = r_edx;
L_0044d1a1:; BB(0x0044d1a1);
    /* 0044d1a1: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 0044d1a4: mov ecx, dword ptr [edx + ebx*4] */ r_ecx = R32((u32)(r_edx+r_ebx*4));
    /* 0044d1a7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d1a9: je 0x44d1bc */ if (fZ) goto L_0044d1bc;
L_0044d1ab:; BB(0x0044d1ab);
    /* 0044d1ab: movsx edx, word ptr [esi + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8u));
    /* 0044d1af: movsx eax, word ptr [esi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0xcu));
    /* 0044d1b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d1b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d1b5: call 0x52ddac */ r_esp -= 4; W32(r_esp, 0x44d1bau); f_0052ddac();
    /* 0044d1ba: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
L_0044d1bc:; BB(0x0044d1bc);
    /* 0044d1bc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044d1bf: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d1c1: jl 0x44d1a1 */ if ((fS!=fO)) goto L_0044d1a1;
L_0044d1c3:; BB(0x0044d1c3);
    /* 0044d1c3: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0044d1c7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_0044d1ca:; BB(0x0044d1ca);
    /* 0044d1ca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d1cd: ret  */ FN_RET(0x0044d180); r_esp += 4; return;
}

void f_0044d268(void) /* sub_44D268 */
{
    FN_ENTER(0x0044d268);
    /* 0044d268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d269: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d26b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044d26d: push 0x8ced20 */ { u32 v = 0x8ced20u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044d278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044d280: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044d286: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0044d289: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0044d28c: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 0044d28f: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0044d292: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0044d295: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0044d29a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0044d29d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d29f: je 0x44d2ac */ if (fZ) goto L_0044d2ac;
L_0044d2a1:; BB(0x0044d2a1);
    /* 0044d2a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0044d2a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d2a6: je 0x44d2ac */ if (fZ) goto L_0044d2ac;
L_0044d2a8:; BB(0x0044d2a8);
    /* 0044d2a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d2aa: jg 0x44d2bc */ if ((!fZ&&fS==fO)) goto L_0044d2bc;
L_0044d2ac:; BB(0x0044d2ac);
    /* 0044d2ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d2af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044d2b6: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d2b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d2b9: ret 8 */ FN_RET(0x0044d268); r_esp += 12; return;
L_0044d2bc:; BB(0x0044d2bc);
    /* 0044d2bc: mov eax, ecx */ r_eax = r_ecx;
    /* 0044d2be: mov dword ptr [eax + 0x10], 0 */ W32((u32)(r_eax+0x10u), 0x0u);
    /* 0044d2c5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0044d2c7: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0044d2ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d2cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d2cd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x44d2d2u); f_008581c5();
    /* 0044d2d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044d2d3: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d2d6: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 0044d2d9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044d2db: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 0044d2de: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 0044d2e1: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 0044d2e3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044d2e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d2e7: jle 0x44d301 */ if ((fZ||fS!=fO)) goto L_0044d301;
L_0044d2e9:; BB(0x0044d2e9);
    /* 0044d2e9: mov dword ptr [eax + edx*4], 0 */ W32((u32)(r_eax+r_edx*4), 0x0u);
    /* 0044d2f0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d2f3: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0044d2f5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d2f8: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d2fa: jge 0x44d301 */ if ((fS==fO)) goto L_0044d301;
L_0044d2fc:; BB(0x0044d2fc);
    /* 0044d2fc: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 0044d2ff: jmp 0x44d2e9 */ goto L_0044d2e9;
L_0044d301:; BB(0x0044d301);
    /* 0044d301: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d303: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044d306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d308: jle 0x44d3ac */ if ((fZ||fS!=fO)) goto L_0044d3ac;
L_0044d30e:; BB(0x0044d30e);
    /* 0044d30e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d311: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0044d314: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044d317: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0044d31a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d31c: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 0044d31f: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044d321: push dword ptr [ebx + esi] */ { u32 v = R32((u32)(r_ebx+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0044d324: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0044d327: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x44d32cu); f_005b8610();
    /* 0044d32c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0044d32f: mov edx, ebx */ r_edx = r_ebx;
    /* 0044d331: push dword ptr [edx + ecx + 4] */ { u32 v = R32((u32)(r_edx+r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044d335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d336: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x44d33bu); f_0078e934();
    /* 0044d33b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044d33e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0044d345: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d347: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x44d34cu); f_008581c5();
    /* 0044d34c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044d34f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d352: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0044d355: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d357: je 0x44d3c5 */ if (fZ) goto L_0044d3c5;
L_0044d359:; BB(0x0044d359);
    /* 0044d359: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0044d360: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d367: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0044d36a: mov eax, ebx */ r_eax = r_ebx;
    /* 0044d36c: push dword ptr [eax + edx + 8] */ { u32 v = R32((u32)(r_eax+r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044d370: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044d373: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044d376: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d377: call 0x52d584 */ r_esp -= 4; W32(r_esp, 0x44d37cu); f_0052d584();
    /* 0044d37c: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_0044d383:; BB(0x0044d383);
    /* 0044d383: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d386: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0044d389: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0044d38c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 0044d38f: mov dword ptr [ecx + ebx*4], edx */ W32((u32)(r_ecx+r_ebx*4), r_edx);
    /* 0044d392: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044d399: mov eax, ebx */ r_eax = r_ebx;
    /* 0044d39b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044d39e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d3a1: cmp eax, dword ptr [edx] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0044d3a3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0044d3a6: jl 0x44d30e */ if ((fS!=fO)) goto L_0044d30e;
L_0044d3ac:; BB(0x0044d3ac);
    /* 0044d3ac: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0044d3af: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0044d3b2: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0044d3b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d3b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044d3bf: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d3c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d3c2: ret 8 */ FN_RET(0x0044d268); r_esp += 12; return;
L_0044d3c5:; BB(0x0044d3c5);
    /* 0044d3c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d3c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0044d3ca: jmp 0x44d383 */ goto L_0044d383;
}

void f_0044d3cc(void) /* sub_44D3CC */
{
    FN_ENTER(0x0044d3cc);
    /* 0044d3cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0044d3cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3d1: push 0x8ced48 */ { u32 v = 0x8ced48u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044d3dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044d3e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d3e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044d3ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044d3ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0044d3f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044d3f3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d3f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0044d3ff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x44d404u); f_008581c5();
    /* 0044d404: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044d405: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044d408: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d40a: je 0x44d473 */ if (fZ) goto L_0044d473;
L_0044d40c:; BB(0x0044d40c);
    /* 0044d40c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044d413: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044d41a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d41d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d41f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d420: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d421: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d422: push 0x9a5900 */ { u32 v = 0x9a5900u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d427: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d429: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x44d42eu); f_005b7a84();
    /* 0044d42e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044d431: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0044d438:; BB(0x0044d438);
    /* 0044d438: mov dword ptr [0xa44d58], eax */ W32((u32)(0xa44d58u), r_eax);
    /* 0044d43d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044d444: mov eax, dword ptr [0xa44d58] */ r_eax = R32((u32)(0xa44d58u));
    /* 0044d449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d44b: jne 0x44d45b */ if (!fZ) goto L_0044d45b;
L_0044d44d:; BB(0x0044d44d);
    /* 0044d44d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d450: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044d457: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d459: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d45a: ret  */ FN_RET(0x0044d3cc); r_esp += 4; return;
L_0044d45b:; BB(0x0044d45b);
    /* 0044d45b: call 0x461594 */ r_esp -= 4; W32(r_esp, 0x44d460u); f_00461594();
    /* 0044d460: call 0x67afcc */ r_esp -= 4; W32(r_esp, 0x44d465u); f_0067afcc();
    /* 0044d465: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044d468: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044d46f: mov esp, ebp */ r_esp = r_ebp;
    /* 0044d471: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d472: ret  */ FN_RET(0x0044d3cc); r_esp += 4; return;
L_0044d473:; BB(0x0044d473);
    /* 0044d473: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044d475: jmp 0x44d438 */ goto L_0044d438;
}

void f_0044d478(void) /* sub_44D478 */
{
    FN_ENTER(0x0044d478);
    /* 0044d478: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d479: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044d47b: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x44d480u); f_004f7c84();
    /* 0044d480: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d482: jne 0x44d48d */ if (!fZ) goto L_0044d48d;
L_0044d484:; BB(0x0044d484);
    /* 0044d484: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d486: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044d488: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d48du); f_0044cf3c();
L_0044d48d:; BB(0x0044d48d);
    /* 0044d48d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d48e: ret  */ FN_RET(0x0044d478); r_esp += 4; return;
}

void f_0044d490(void) /* sub_44D490 */
{
    FN_ENTER(0x0044d490);
    /* 0044d490: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d491: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d492: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d495: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044d497: movzx eax, byte ptr [0xa44d80] */ r_eax = (u32)R8((u32)(0xa44d80u));
    /* 0044d49e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0044d4a0: jne 0x44d4b6 */ if (!fZ) goto L_0044d4b6;
L_0044d4a2:; BB(0x0044d4a2);
    /* 0044d4a2: mov dword ptr [0xa44d84], 0x44610000 */ W32((u32)(0xa44d84u), 0x44610000u);
    /* 0044d4ac: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044d4b1: mov byte ptr [0xa44d80], al */ W8((u32)(0xa44d80u), (u8)r_eax);
L_0044d4b6:; BB(0x0044d4b6);
    /* 0044d4b6: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 0044d4bb: mov dword ptr [esp], 0xc61a1000 */ W32((u32)(r_esp), 0xc61a1000u);
    /* 0044d4c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044d4c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d4c6: mov dword ptr [esp + 8], 0xc3700000 */ W32((u32)(r_esp+0x8u), 0xc3700000u);
    /* 0044d4ce: jle 0x44d507 */ if ((fZ||fS!=fO)) goto L_0044d507;
L_0044d4d0:; BB(0x0044d4d0);
    /* 0044d4d0: mov edi, edx */ r_edi = r_edx;
L_0044d4d2:; BB(0x0044d4d2);
    /* 0044d4d2: mov edx, dword ptr [edi*4 + 0xaad720] */ r_edx = R32((u32)(r_edi*4+0xaad720u));
    /* 0044d4d9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d4db: je 0x44d500 */ if (fZ) goto L_0044d500;
L_0044d4dd:; BB(0x0044d4dd);
    /* 0044d4dd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044d4e0: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d4e6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d4e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d4e8: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x44d4edu); f_007a9180();
    /* 0044d4ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d4f0: fcomp dword ptr [0xa44d84] */ fx_compare(ST(0), R_F32((u32)(0xa44d84u))); FPOP();
    /* 0044d4f6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044d4f8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044d4f9: jbe 0x44d521 */ if ((fC||fZ)) goto L_0044d521;
L_0044d4fb:; BB(0x0044d4fb);
    /* 0044d4fb: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
L_0044d500:; BB(0x0044d500);
    /* 0044d500: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0044d503: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d505: jl 0x44d4d2 */ if ((fS!=fO)) goto L_0044d4d2;
L_0044d507:; BB(0x0044d507);
    /* 0044d507: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044d509: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x44d50eu); f_006dc358();
    /* 0044d50e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d510: je 0x44d52a */ if (fZ) goto L_0044d52a;
L_0044d512:; BB(0x0044d512);
    /* 0044d512: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d514: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044d516: call 0x44bf18 */ r_esp -= 4; W32(r_esp, 0x44d51bu); f_0044bf18();
    /* 0044d51b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d51e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d51f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044d520: ret  */ FN_RET(0x0044d490); r_esp += 4; return;
L_0044d521:; BB(0x0044d521);
    /* 0044d521: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d523: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044d525: call 0x44bf18 */ r_esp -= 4; W32(r_esp, 0x44d52au); f_0044bf18();
L_0044d52a:; BB(0x0044d52a);
    /* 0044d52a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d52d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d52e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044d52f: ret  */ FN_RET(0x0044d490); r_esp += 4; return;
}

void f_0044d530(void) /* sub_44D530 */
{
    FN_ENTER(0x0044d530);
    /* 0044d530: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d531: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d534: mov edi, ecx */ r_edi = r_ecx;
    /* 0044d536: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 0044d53c: mov eax, dword ptr [0xa44da8] */ r_eax = R32((u32)(0xa44da8u));
    /* 0044d541: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d543: jg 0x44d58d */ if ((!fZ&&fS==fO)) goto L_0044d58d;
L_0044d545:; BB(0x0044d545);
    /* 0044d545: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d548: jge 0x44d5ba */ if ((fS==fO)) goto L_0044d5ba;
L_0044d54a:; BB(0x0044d54a);
    /* 0044d54a: fld dword ptr [0x8ff544] */ FPUSH(R_F32((u32)(0x8ff544u)));
    /* 0044d550: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d553: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0044d556: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044d559: fdiv dword ptr [0x8ff540] */ ST(0) = ST(0) / R_F32((u32)(0x8ff540u));
    /* 0044d55f: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d562: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0044d564: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044d566: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044d568: mov ecx, edi */ r_ecx = r_edi;
    /* 0044d56a: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044d571: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044d572: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044d574: jbe 0x44d578 */ if ((fC||fZ)) goto L_0044d578;
L_0044d576:; BB(0x0044d576);
    /* 0044d576: fst st(1) */ ST(1) = ST(0);
L_0044d578:; BB(0x0044d578);
    /* 0044d578: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044d57a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0044d57c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044d580: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44d585u); f_0044c1e4();
    /* 0044d585: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
    /* 0044d58b: jmp 0x44d5ba */ goto L_0044d5ba;
L_0044d58d:; BB(0x0044d58d);
    /* 0044d58d: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0044d58f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0044d593: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0044d597: fdiv dword ptr [0x8ff53c] */ ST(0) = ST(0) / R_F32((u32)(0x8ff53cu));
    /* 0044d59d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d5a0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0044d5a2: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044d5a6: mov ecx, edi */ r_ecx = r_edi;
    /* 0044d5a8: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044d5af: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44d5b4u); f_0044c1e4();
    /* 0044d5b4: mov edx, dword ptr [edi + 0x388] */ r_edx = R32((u32)(r_edi+0x388u));
L_0044d5ba:; BB(0x0044d5ba);
    /* 0044d5ba: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044d5bd: mov dword ptr [edi + 0x388], edx */ W32((u32)(r_edi+0x388u), r_edx);
    /* 0044d5c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d5c5: jl 0x44d5cc */ if ((fS!=fO)) goto L_0044d5cc;
L_0044d5c7:; BB(0x0044d5c7);
    /* 0044d5c7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d5ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044d5cb: ret  */ FN_RET(0x0044d530); r_esp += 4; return;
L_0044d5cc:; BB(0x0044d5cc);
    /* 0044d5cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d5ce: mov ecx, edi */ r_ecx = r_edi;
    /* 0044d5d0: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d5d5u); f_0044cf3c();
    /* 0044d5d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d5d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044d5d9: ret  */ FN_RET(0x0044d530); r_esp += 4; return;
}

void f_0044d5dc(void) /* sub_44D5DC */
{
    FN_ENTER(0x0044d5dc);
    /* 0044d5dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d5dd: mov esi, ecx */ r_esi = r_ecx;
    /* 0044d5df: fild dword ptr [esi + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x388u)));
    /* 0044d5e5: fdiv dword ptr [0x8ff538] */ ST(0) = ST(0) / R_F32((u32)(0x8ff538u));
    /* 0044d5eb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0044d5ed: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d5f0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0044d5f2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044d5f4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044d5f6: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044d5fa: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044d601: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d603: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44d608u); f_0044c1e4();
    /* 0044d608: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0044d60e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d611: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0044d617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d619: jle 0x44d61d */ if ((fZ||fS!=fO)) goto L_0044d61d;
L_0044d61b:; BB(0x0044d61b);
    /* 0044d61b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d61c: ret  */ FN_RET(0x0044d5dc); r_esp += 4; return;
L_0044d61d:; BB(0x0044d61d);
    /* 0044d61d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d61f: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d621: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d626u); f_0044cf3c();
    /* 0044d626: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d627: ret  */ FN_RET(0x0044d5dc); r_esp += 4; return;
}

void f_0044d628(void)
{
    FN_ENTER(0x0044d628);
    /* 0044d628: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d629: mov esi, ecx */ r_esi = r_ecx;
    /* 0044d62b: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d62d: call 0x44c63c */ r_esp -= 4; W32(r_esp, 0x44d632u); f_0044c63c();
    /* 0044d632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d634: jne 0x44d643 */ if (!fZ) goto L_0044d643;
L_0044d636:; BB(0x0044d636);
    /* 0044d636: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d638: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x44d63du); f_006dc358();
    /* 0044d63d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d63f: jne 0x44d643 */ if (!fZ) goto L_0044d643;
L_0044d641:; BB(0x0044d641);
    /* 0044d641: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d642: ret  */ FN_RET(0x0044d628); r_esp += 4; return;
L_0044d643:; BB(0x0044d643);
    /* 0044d643: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d645: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d647: call 0x44bf18 */ r_esp -= 4; W32(r_esp, 0x44d64cu); f_0044bf18();
    /* 0044d64c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d64d: ret  */ FN_RET(0x0044d628); r_esp += 4; return;
}

void f_0044d650(void)
{
    FN_ENTER(0x0044d650);
    /* 0044d650: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d652: push -0x18 */ { u32 v = 0xffffffe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d654: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d656: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d657: push 0x367 */ { u32 v = 0x367u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d65c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44d661u); f_008144b0();
    /* 0044d661: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d664: ret  */ FN_RET(0x0044d650); r_esp += 4; return;
}

void f_0044d668(void) /* sub_44D668 */
{
    FN_ENTER(0x0044d668);
    /* 0044d668: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d669: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d66c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044d66e: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044d674: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d677: jge 0x44d6a5 */ if ((fS==fO)) goto L_0044d6a5;
L_0044d679:; BB(0x0044d679);
    /* 0044d679: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044d67b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d67e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044d681: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044d684: fdiv dword ptr [0x8ff534] */ ST(0) = ST(0) / R_F32((u32)(0x8ff534u));
    /* 0044d68a: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d68d: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044d691: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044d698: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044d69a: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44d69fu); f_0044c1e4();
    /* 0044d69f: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
L_0044d6a5:; BB(0x0044d6a5);
    /* 0044d6a5: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d6a8: je 0x44d724 */ if (fZ) goto L_0044d724;
L_0044d6aa:; BB(0x0044d6aa);
    /* 0044d6aa: cmp eax, 0xb9 */ {  u32 a = r_eax; u32 b = 0xb9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d6af: je 0x44d6fd */ if (fZ) goto L_0044d6fd;
L_0044d6b1:; BB(0x0044d6b1);
    /* 0044d6b1: cmp eax, 0x145 */ {  u32 a = r_eax; u32 b = 0x145u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d6b6: jle 0x44d6ef */ if ((fZ||fS!=fO)) goto L_0044d6ef;
L_0044d6b8:; BB(0x0044d6b8);
    /* 0044d6b8: mov edx, dword ptr [ebx + 0x39c] */ r_edx = R32((u32)(r_ebx+0x39cu));
    /* 0044d6be: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d6c0: je 0x44d6d9 */ if (fZ) goto L_0044d6d9;
L_0044d6c2:; BB(0x0044d6c2);
    /* 0044d6c2: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044d6c6: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044d6cb: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044d6cf: mov dword ptr [ebx + 0x39c], 0 */ W32((u32)(r_ebx+0x39cu), 0x0u);
L_0044d6d9:; BB(0x0044d6d9);
    /* 0044d6d9: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6db: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x44d6e0u); f_006bb100();
    /* 0044d6e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044d6e1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d6e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044d6e5: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d6eau); f_0044cf3c();
    /* 0044d6ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d6ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d6ee: ret  */ FN_RET(0x0044d668); r_esp += 4; return;
L_0044d6ef:; BB(0x0044d6ef);
    /* 0044d6ef: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d6f2: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0044d6f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d6fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d6fc: ret  */ FN_RET(0x0044d668); r_esp += 4; return;
L_0044d6fd:; BB(0x0044d6fd);
    /* 0044d6fd: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 0044d703: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d705: je 0x44d711 */ if (fZ) goto L_0044d711;
L_0044d707:; BB(0x0044d707);
    /* 0044d707: mov dword ptr [eax + 0x90], 2 */ W32((u32)(r_eax+0x90u), 0x2u);
L_0044d711:; BB(0x0044d711);
    /* 0044d711: push 0x8ff5f8 */ { u32 v = 0x8ff5f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d716: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x44d71bu); f_00814afc();
    /* 0044d71b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044d71c: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044d722: jmp 0x44d6b1 */ goto L_0044d6b1;
L_0044d724:; BB(0x0044d724);
    /* 0044d724: mov eax, dword ptr [ebx + 0x39c] */ r_eax = R32((u32)(r_ebx+0x39cu));
    /* 0044d72a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d72c: je 0x44d738 */ if (fZ) goto L_0044d738;
L_0044d72e:; BB(0x0044d72e);
    /* 0044d72e: mov dword ptr [eax + 0x90], 1 */ W32((u32)(r_eax+0x90u), 0x1u);
L_0044d738:; BB(0x0044d738);
    /* 0044d738: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d739: call 0x44ec14 */ r_esp -= 4; W32(r_esp, 0x44d73eu); f_0044ec14();
    /* 0044d73e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044d73f: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044d745: jmp 0x44d6aa */ goto L_0044d6aa;
}

void f_0044d74c(void)
{
    FN_ENTER(0x0044d74c);
    /* 0044d74c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d74d: mov esi, ecx */ r_esi = r_ecx;
    /* 0044d74f: mov eax, dword ptr [0xa44d64] */ r_eax = R32((u32)(0xa44d64u));
    /* 0044d754: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d756: je 0x44d775 */ if (fZ) goto L_0044d775;
L_0044d758:; BB(0x0044d758);
    /* 0044d758: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0044d75e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d761: je 0x44d775 */ if (fZ) goto L_0044d775;
L_0044d763:; BB(0x0044d763);
    /* 0044d763: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d766: je 0x44d775 */ if (fZ) goto L_0044d775;
L_0044d768:; BB(0x0044d768);
    /* 0044d768: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d76a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x44d76fu); f_006dc358();
    /* 0044d76f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d771: jne 0x44d775 */ if (!fZ) goto L_0044d775;
L_0044d773:; BB(0x0044d773);
    /* 0044d773: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d774: ret  */ FN_RET(0x0044d74c); r_esp += 4; return;
L_0044d775:; BB(0x0044d775);
    /* 0044d775: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d777: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d779: call 0x44bf18 */ r_esp -= 4; W32(r_esp, 0x44d77eu); f_0044bf18();
    /* 0044d77e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d77f: ret  */ FN_RET(0x0044d74c); r_esp += 4; return;
}

void f_0044d780(void)
{
    FN_ENTER(0x0044d780);
    /* 0044d780: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0044d786: sub eax, dword ptr [ecx + 0x394] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x394u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044d78c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d78e: jle 0x44d7a4 */ if ((fZ||fS!=fO)) goto L_0044d7a4;
L_0044d790:; BB(0x0044d790);
    /* 0044d790: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d792: push -0x20 */ { u32 v = 0xffffffe0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d794: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d796: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d797: push 0x367 */ { u32 v = 0x367u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d79c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x44d7a1u); f_008144b0();
    /* 0044d7a1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0044d7a4:; BB(0x0044d7a4);
    /* 0044d7a4: ret  */ FN_RET(0x0044d780); r_esp += 4; return;
}

void f_0044d7a8(void) /* sub_44D7A8 */
{
    FN_ENTER(0x0044d7a8);
    /* 0044d7a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d7a9: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d7ac: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044d7ae: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 0044d7b4: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d7b7: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0044d7bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d7bf: jl 0x44d7c6 */ if ((fS!=fO)) goto L_0044d7c6;
L_0044d7c1:; BB(0x0044d7c1);
    /* 0044d7c1: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d7c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d7c5: ret  */ FN_RET(0x0044d7a8); r_esp += 4; return;
L_0044d7c6:; BB(0x0044d7c6);
    /* 0044d7c6: movzx eax, word ptr [0xa44ce2] */ r_eax = (u32)R16((u32)(0xa44ce2u));
    /* 0044d7cd: movzx edx, word ptr [0xa44ce4] */ r_edx = (u32)R16((u32)(0xa44ce4u));
    /* 0044d7d4: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0044d7d7: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 0044d7dc: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 0044d7e3: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 0044d7e8: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0044d7ed: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 0044d7f4: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0044d7f9: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 0044d800: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0044d805: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 0044d80a: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044d80e: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 0044d813: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044d817: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 0044d81c: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044d820: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 0044d825: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0044d829: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 0044d82e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0044d832: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 0044d837: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0044d83b: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 0044d840: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0044d844: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 0044d849: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0044d84d: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 0044d852: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0044d856: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 0044d85b: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0044d85f: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 0044d864: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0044d868: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 0044d86f: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 0044d874: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 0044d87b: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 0044d880: mov eax, 1 */ r_eax = 0x1u;
    /* 0044d885: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 0044d88a: movzx eax, word ptr [ebp + 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0x2cu));
    /* 0044d88e: add eax, 0x1ff */ {  u32 a = r_eax; u32 b = 0x1ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d893: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 0044d898: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0044d89c: add eax, 0x1ff */ {  u32 a = r_eax; u32 b = 0x1ffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d8a1: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0044d8a6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0044d8a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8aa: call 0x459820 */ r_esp -= 4; W32(r_esp, 0x44d8afu); f_00459820();
    /* 0044d8af: mov dword ptr [0xa44d60], eax */ W32((u32)(0xa44d60u), r_eax);
    /* 0044d8b4: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8b6: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x44d8bbu); f_006bb100();
    /* 0044d8bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d8be: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044d8c2: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d8c7u); f_0044cf3c();
    /* 0044d8c7: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d8ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044d8cb: ret  */ FN_RET(0x0044d7a8); r_esp += 4; return;
}

void f_0044d8cc(void)
{
    FN_ENTER(0x0044d8cc);
    /* 0044d8cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8cd: mov esi, ecx */ r_esi = r_ecx;
    /* 0044d8cf: mov eax, dword ptr [0xa44d60] */ r_eax = R32((u32)(0xa44d60u));
    /* 0044d8d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d8d6: je 0x44d8f5 */ if (fZ) goto L_0044d8f5;
L_0044d8d8:; BB(0x0044d8d8);
    /* 0044d8d8: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0044d8de: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d8e1: je 0x44d8f5 */ if (fZ) goto L_0044d8f5;
L_0044d8e3:; BB(0x0044d8e3);
    /* 0044d8e3: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d8e6: je 0x44d8f5 */ if (fZ) goto L_0044d8f5;
L_0044d8e8:; BB(0x0044d8e8);
    /* 0044d8e8: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d8ea: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x44d8efu); f_006dc358();
    /* 0044d8ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d8f1: jne 0x44d8f5 */ if (!fZ) goto L_0044d8f5;
L_0044d8f3:; BB(0x0044d8f3);
    /* 0044d8f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d8f4: ret  */ FN_RET(0x0044d8cc); r_esp += 4; return;
L_0044d8f5:; BB(0x0044d8f5);
    /* 0044d8f5: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0044d8f7: mov ecx, esi */ r_ecx = r_esi;
    /* 0044d8f9: call 0x44bf18 */ r_esp -= 4; W32(r_esp, 0x44d8feu); f_0044bf18();
    /* 0044d8fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044d8ff: ret  */ FN_RET(0x0044d8cc); r_esp += 4; return;
}

void f_0044d900(void)
{
    FN_ENTER(0x0044d900);
    /* 0044d900: mov eax, dword ptr [ecx + 0x388] */ r_eax = R32((u32)(r_ecx+0x388u));
    /* 0044d906: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d909: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0044d90f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044d911: jge 0x44d92b */ if ((fS==fO)) goto L_0044d92b;
L_0044d913:; BB(0x0044d913);
    /* 0044d913: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 0044d918: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d91a: jne 0x44d924 */ if (!fZ) goto L_0044d924;
L_0044d91c:; BB(0x0044d91c);
    /* 0044d91c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0044d91e: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d923u); f_0044cf3c();
    /* 0044d923: ret  */ FN_RET(0x0044d900); r_esp += 4; return;
L_0044d924:; BB(0x0044d924);
    /* 0044d924: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0044d926: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d92bu); f_0044cf3c();
L_0044d92b:; BB(0x0044d92b);
    /* 0044d92b: ret  */ FN_RET(0x0044d900); r_esp += 4; return;
}

void f_0044d92c(void) /* sub_44D92C */
{
    FN_ENTER(0x0044d92c);
    /* 0044d92c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044d92d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044d930: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044d932: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x44d937u); f_0044bd78();
    /* 0044d937: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d939: je 0x44d987 */ if (fZ) goto L_0044d987;
L_0044d93b:; BB(0x0044d93b);
    /* 0044d93b: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044d941: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044d944: jge 0x44d98d */ if ((fS==fO)) goto L_0044d98d;
L_0044d946:; BB(0x0044d946);
    /* 0044d946: fld dword ptr [0x8ff52c] */ FPUSH(R_F32((u32)(0x8ff52cu)));
    /* 0044d94c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044d94e: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d951: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044d954: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044d957: fdiv dword ptr [0x8ff530] */ ST(0) = ST(0) / R_F32((u32)(0x8ff530u));
    /* 0044d95d: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d960: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044d962: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044d964: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044d966: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044d967: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044d96e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044d970: jbe 0x44d974 */ if ((fC||fZ)) goto L_0044d974;
L_0044d972:; BB(0x0044d972);
    /* 0044d972: fst st(1) */ ST(1) = ST(0);
L_0044d974:; BB(0x0044d974);
    /* 0044d974: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044d976: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044d97a: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44d97fu); f_0044c1e4();
    /* 0044d97f: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044d985: jmp 0x44d98d */ goto L_0044d98d;
L_0044d987:; BB(0x0044d987);
    /* 0044d987: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
L_0044d98d:; BB(0x0044d98d);
    /* 0044d98d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044d990: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0044d996: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044d998: jl 0x44d99f */ if ((fS!=fO)) goto L_0044d99f;
L_0044d99a:; BB(0x0044d99a);
    /* 0044d99a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d99d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d99e: ret  */ FN_RET(0x0044d92c); r_esp += 4; return;
L_0044d99f:; BB(0x0044d99f);
    /* 0044d99f: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x44d9a4u); f_0044bd78();
    /* 0044d9a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044d9a6: je 0x44d9b6 */ if (fZ) goto L_0044d9b6;
L_0044d9a8:; BB(0x0044d9a8);
    /* 0044d9a8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044d9ac: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44d9b1u); f_0044cf3c();
    /* 0044d9b1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d9b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d9b5: ret  */ FN_RET(0x0044d92c); r_esp += 4; return;
L_0044d9b6:; BB(0x0044d9b6);
    /* 0044d9b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044d9b8: call 0x44c230 */ r_esp -= 4; W32(r_esp, 0x44d9bdu); f_0044c230();
    /* 0044d9bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044d9c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044d9c1: ret  */ FN_RET(0x0044d92c); r_esp += 4; return;
}

void f_0044d9c4(void) /* sub_44D9C4 */
{
    FN_ENTER(0x0044d9c4);
    /* 0044d9c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044d9c5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044d9c7: fild dword ptr [ebp + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x388u)));
    /* 0044d9cd: fild dword ptr [0xa44dac] */ FPUSH((long double)(i32)R32((u32)(0xa44dacu)));
    /* 0044d9d3: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044d9d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044d9d8: fchs  */ ST(0) = -ST(0);
    /* 0044d9da: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044d9dc: fadd dword ptr [0x8ff528] */ ST(0) = ST(0) + R_F32((u32)(0x8ff528u));
    /* 0044d9e2: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0044d9e4: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044d9eb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0044d9ed: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044d9ef: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044d9f1: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044d9f5: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44d9fau); f_0044c1e4();
    /* 0044d9fa: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 0044da00: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044da03: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0044da09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044da0b: jle 0x44da0f */ if ((fZ||fS!=fO)) goto L_0044da0f;
L_0044da0d:; BB(0x0044da0d);
    /* 0044da0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044da0e: ret  */ FN_RET(0x0044d9c4); r_esp += 4; return;
L_0044da0f:; BB(0x0044da0f);
    /* 0044da0f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0044da11: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044da13: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44da18u); f_0044cf3c();
    /* 0044da18: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044da19: ret  */ FN_RET(0x0044d9c4); r_esp += 4; return;
}

void f_0044da1c(void) /* sub_44DA1C */
{
    FN_ENTER(0x0044da1c);
    /* 0044da1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044da1d: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044da20: mov esi, ecx */ r_esi = r_ecx;
    /* 0044da22: fild dword ptr [esi + 0x388] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x388u)));
    /* 0044da28: fild dword ptr [0xa44db0] */ FPUSH((long double)(i32)R32((u32)(0xa44db0u)));
    /* 0044da2e: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 0044da30: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0044da32: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0044da34: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044da37: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0044da39: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0044da3b: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044da3f: mov ecx, esi */ r_ecx = r_esi;
    /* 0044da41: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044da48: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44da4du); f_0044c1e4();
    /* 0044da4d: mov eax, dword ptr [esi + 0x388] */ r_eax = R32((u32)(r_esi+0x388u));
    /* 0044da53: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044da56: mov dword ptr [esi + 0x388], eax */ W32((u32)(r_esi+0x388u), r_eax);
    /* 0044da5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044da5e: jle 0x44da65 */ if ((fZ||fS!=fO)) goto L_0044da65;
L_0044da60:; BB(0x0044da60);
    /* 0044da60: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044da63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044da64: ret  */ FN_RET(0x0044da1c); r_esp += 4; return;
L_0044da65:; BB(0x0044da65);
    /* 0044da65: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0044da67: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x44da6cu); f_006bb100();
    /* 0044da6c: movzx eax, word ptr [0xa44ce2] */ r_eax = (u32)R16((u32)(0xa44ce2u));
    /* 0044da73: movzx edx, word ptr [0xa44ce4] */ r_edx = (u32)R16((u32)(0xa44ce4u));
    /* 0044da7a: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0044da7e: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 0044da83: movzx eax, word ptr [0xa44cea] */ r_eax = (u32)R16((u32)(0xa44ceau));
    /* 0044da8a: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 0044da8f: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 0044da94: movzx eax, word ptr [0xa44cec] */ r_eax = (u32)R16((u32)(0xa44cecu));
    /* 0044da9b: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 0044daa0: movzx eax, word ptr [0xa44cee] */ r_eax = (u32)R16((u32)(0xa44ceeu));
    /* 0044daa7: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 0044daac: mov eax, dword ptr [0xa44cf0] */ r_eax = R32((u32)(0xa44cf0u));
    /* 0044dab1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0044dab5: mov eax, dword ptr [0xa44cf4] */ r_eax = R32((u32)(0xa44cf4u));
    /* 0044daba: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0044dabe: mov eax, dword ptr [0xa44cf8] */ r_eax = R32((u32)(0xa44cf8u));
    /* 0044dac3: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0044dac7: mov eax, dword ptr [0xa44cfc] */ r_eax = R32((u32)(0xa44cfcu));
    /* 0044dacc: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0044dad0: mov eax, dword ptr [0xa44d00] */ r_eax = R32((u32)(0xa44d00u));
    /* 0044dad5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0044dad9: mov eax, dword ptr [0xa44d04] */ r_eax = R32((u32)(0xa44d04u));
    /* 0044dade: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0044dae2: mov eax, dword ptr [0xa44d08] */ r_eax = R32((u32)(0xa44d08u));
    /* 0044dae7: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0044daeb: mov eax, dword ptr [0xa44d0c] */ r_eax = R32((u32)(0xa44d0cu));
    /* 0044daf0: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0044daf4: mov eax, dword ptr [0xa44d10] */ r_eax = R32((u32)(0xa44d10u));
    /* 0044daf9: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0044dafd: mov eax, dword ptr [0xa44d14] */ r_eax = R32((u32)(0xa44d14u));
    /* 0044db02: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0044db06: mov eax, dword ptr [0xa44d18] */ r_eax = R32((u32)(0xa44d18u));
    /* 0044db0b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0044db0f: movzx eax, word ptr [0xa44d1c] */ r_eax = (u32)R16((u32)(0xa44d1cu));
    /* 0044db16: mov word ptr [esp + 0x44], ax */ W16((u32)(r_esp+0x44u), (u16)r_eax);
    /* 0044db1b: movzx eax, word ptr [0xa44d1e] */ r_eax = (u32)R16((u32)(0xa44d1eu));
    /* 0044db22: mov word ptr [esp + 0x46], ax */ W16((u32)(r_esp+0x46u), (u16)r_eax);
    /* 0044db27: mov eax, 2 */ r_eax = 0x2u;
    /* 0044db2c: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 0044db31: movzx eax, word ptr [esi + 0x2c] */ r_eax = (u32)R16((u32)(r_esi+0x2cu));
    /* 0044db35: add eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044db3a: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 0044db3f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 0044db43: add eax, 0x1fe */ {  u32 a = r_eax; u32 b = 0x1feu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044db48: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 0044db4d: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0044db51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044db52: call 0x45e4f0 */ r_esp -= 4; W32(r_esp, 0x44db57u); f_0045e4f0();
    /* 0044db57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044db5a: mov dword ptr [0xa44d5c], eax */ W32((u32)(0xa44d5cu), r_eax);
    /* 0044db5f: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0044db61: mov ecx, esi */ r_ecx = r_esi;
    /* 0044db63: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44db68u); f_0044cf3c();
    /* 0044db68: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044db6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044db6c: ret  */ FN_RET(0x0044da1c); r_esp += 4; return;
}

void f_0044db70(void)
{
    FN_ENTER(0x0044db70);
    /* 0044db70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044db71: mov esi, ecx */ r_esi = r_ecx;
    /* 0044db73: mov eax, dword ptr [0xa44d5c] */ r_eax = R32((u32)(0xa44d5cu));
    /* 0044db78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db7a: je 0x44db99 */ if (fZ) goto L_0044db99;
L_0044db7c:; BB(0x0044db7c);
    /* 0044db7c: mov eax, dword ptr [eax + 0x37c] */ r_eax = R32((u32)(r_eax+0x37cu));
    /* 0044db82: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db85: je 0x44db99 */ if (fZ) goto L_0044db99;
L_0044db87:; BB(0x0044db87);
    /* 0044db87: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044db8a: je 0x44db99 */ if (fZ) goto L_0044db99;
L_0044db8c:; BB(0x0044db8c);
    /* 0044db8c: mov ecx, esi */ r_ecx = r_esi;
    /* 0044db8e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x44db93u); f_006dc358();
    /* 0044db93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044db95: jne 0x44db99 */ if (!fZ) goto L_0044db99;
L_0044db97:; BB(0x0044db97);
    /* 0044db97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044db98: ret  */ FN_RET(0x0044db70); r_esp += 4; return;
L_0044db99:; BB(0x0044db99);
    /* 0044db99: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0044db9b: mov ecx, esi */ r_ecx = r_esi;
    /* 0044db9d: call 0x44bf18 */ r_esp -= 4; W32(r_esp, 0x44dba2u); f_0044bf18();
    /* 0044dba2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044dba3: ret  */ FN_RET(0x0044db70); r_esp += 4; return;
}

void f_0044dba4(void) /* sub_44DBA4 */
{
    FN_ENTER(0x0044dba4);
    /* 0044dba4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dba5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044dba8: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044dbaa: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x44dbafu); f_0044bd78();
    /* 0044dbaf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dbb1: je 0x44dbff */ if (fZ) goto L_0044dbff;
L_0044dbb3:; BB(0x0044dbb3);
    /* 0044dbb3: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044dbb9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dbbc: jge 0x44dc05 */ if ((fS==fO)) goto L_0044dc05;
L_0044dbbe:; BB(0x0044dbbe);
    /* 0044dbbe: fld dword ptr [0x8ff520] */ FPUSH(R_F32((u32)(0x8ff520u)));
    /* 0044dbc4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0044dbc6: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dbc9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044dbcc: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044dbcf: fdiv dword ptr [0x8ff524] */ ST(0) = ST(0) / R_F32((u32)(0x8ff524u));
    /* 0044dbd5: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dbd8: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044dbda: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044dbdc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044dbde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044dbdf: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044dbe6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044dbe8: jbe 0x44dbec */ if ((fC||fZ)) goto L_0044dbec;
L_0044dbea:; BB(0x0044dbea);
    /* 0044dbea: fst st(1) */ ST(1) = ST(0);
L_0044dbec:; BB(0x0044dbec);
    /* 0044dbec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044dbee: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044dbf2: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44dbf7u); f_0044c1e4();
    /* 0044dbf7: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
    /* 0044dbfd: jmp 0x44dc05 */ goto L_0044dc05;
L_0044dbff:; BB(0x0044dbff);
    /* 0044dbff: mov eax, dword ptr [ebx + 0x388] */ r_eax = R32((u32)(r_ebx+0x388u));
L_0044dc05:; BB(0x0044dc05);
    /* 0044dc05: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dc08: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0044dc0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044dc10: jl 0x44dc17 */ if ((fS!=fO)) goto L_0044dc17;
L_0044dc12:; BB(0x0044dc12);
    /* 0044dc12: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044dc15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044dc16: ret  */ FN_RET(0x0044dba4); r_esp += 4; return;
L_0044dc17:; BB(0x0044dc17);
    /* 0044dc17: call 0x44bd78 */ r_esp -= 4; W32(r_esp, 0x44dc1cu); f_0044bd78();
    /* 0044dc1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dc1e: je 0x44dc2e */ if (fZ) goto L_0044dc2e;
L_0044dc20:; BB(0x0044dc20);
    /* 0044dc20: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc22: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044dc24: call 0x44cf3c */ r_esp -= 4; W32(r_esp, 0x44dc29u); f_0044cf3c();
    /* 0044dc29: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044dc2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044dc2d: ret  */ FN_RET(0x0044dba4); r_esp += 4; return;
L_0044dc2e:; BB(0x0044dc2e);
    /* 0044dc2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044dc30: call 0x44c230 */ r_esp -= 4; W32(r_esp, 0x44dc35u); f_0044c230();
    /* 0044dc35: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044dc38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044dc39: ret  */ FN_RET(0x0044dba4); r_esp += 4; return;
}

void f_0044dc3c(void) /* sub_44DC3C */
{
    FN_ENTER(0x0044dc3c);
    /* 0044dc3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044dc3d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044dc40: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044dc42: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
    /* 0044dc48: cmp eax, 0x1bc */ {  u32 a = r_eax; u32 b = 0x1bcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044dc4d: jle 0x44dc8e */ if ((fZ||fS!=fO)) goto L_0044dc8e;
L_0044dc4f:; BB(0x0044dc4f);
    /* 0044dc4f: fld dword ptr [0x8ff518] */ FPUSH(R_F32((u32)(0x8ff518u)));
    /* 0044dc55: add eax, 0xfffffe44 */ {  u32 a = r_eax; u32 b = 0xfffffe44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dc5a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044dc5d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044dc60: fdiv dword ptr [0x8ff51c] */ ST(0) = ST(0) / R_F32((u32)(0x8ff51cu));
    /* 0044dc66: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044dc69: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0044dc6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0044dc6d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044dc6f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0044dc70: mov dword ptr [esp], 0xffffff */ W32((u32)(r_esp), 0xffffffu);
    /* 0044dc77: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0044dc79: jbe 0x44dc7d */ if ((fC||fZ)) goto L_0044dc7d;
L_0044dc7b:; BB(0x0044dc7b);
    /* 0044dc7b: fst st(1) */ ST(1) = ST(0);
L_0044dc7d:; BB(0x0044dc7d);
    /* 0044dc7d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0044dc7f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0044dc83: call 0x44c1e4 */ r_esp -= 4; W32(r_esp, 0x44dc88u); f_0044c1e4();
    /* 0044dc88: mov eax, dword ptr [ebp + 0x388] */ r_eax = R32((u32)(r_ebp+0x388u));
L_0044dc8e:; BB(0x0044dc8e);
    /* 0044dc8e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044dc91: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
    /* 0044dc97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0044dc99: jl 0x44dca0 */ if ((fS!=fO)) goto L_0044dca0;
L_0044dc9b:; BB(0x0044dc9b);
    /* 0044dc9b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044dc9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044dc9f: ret  */ FN_RET(0x0044dc3c); r_esp += 4; return;
L_0044dca0:; BB(0x0044dca0);
    /* 0044dca0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044dca2: call 0x44c1a4 */ r_esp -= 4; W32(r_esp, 0x44dca7u); f_0044c1a4();
    /* 0044dca7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044dca9: call 0x44c230 */ r_esp -= 4; W32(r_esp, 0x44dcaeu); f_0044c230();
    /* 0044dcae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044dcb1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044dcb2: ret  */ FN_RET(0x0044dc3c); r_esp += 4; return;
}

void f_0044dcb4(void) /* sub_44DCB4 */
{
    FN_ENTER(0x0044dcb4);
    /* 0044dcb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044dcb5: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044dcb8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0044dcba: mov eax, 0x7c */ r_eax = 0x7cu;
    /* 0044dcbf: mov edx, 0xaa */ r_edx = 0xaau;
    /* 0044dcc4: mov dword ptr [0xa44db4], 0xc2f00000 */ W32((u32)(0xa44db4u), 0xc2f00000u);
    /* 0044dcce: mov dword ptr [0xa44dc4], edi */ W32((u32)(0xa44dc4u), r_edi);
    /* 0044dcd4: mov ecx, 0xb4 */ r_ecx = 0xb4u;
    /* 0044dcd9: mov dword ptr [0xa44db8], 0 */ W32((u32)(0xa44db8u), 0x0u);
    /* 0044dce3: mov dword ptr [0xa44dcc], eax */ W32((u32)(0xa44dccu), r_eax);
    /* 0044dce8: mov dword ptr [0xa44dd8], eax */ W32((u32)(0xa44dd8u), r_eax);
    /* 0044dced: mov dword ptr [0xa44dbc], 0 */ W32((u32)(0xa44dbcu), 0x0u);
    /* 0044dcf7: mov eax, 0x90 */ r_eax = 0x90u;
    /* 0044dcfc: mov dword ptr [0xa44dc0], 0xc2f00000 */ W32((u32)(0xa44dc0u), 0xc2f00000u);
    /* 0044dd06: mov dword ptr [0xa44de0], eax */ W32((u32)(0xa44de0u), r_eax);
    /* 0044dd0b: mov dword ptr [0xa44de4], edx */ W32((u32)(0xa44de4u), r_edx);
    /* 0044dd11: mov dword ptr [0xa44dc8], 0x2c */ W32((u32)(0xa44dc8u), 0x2cu);
    /* 0044dd1b: mov dword ptr [0xa44dd0], 0x46 */ W32((u32)(0xa44dd0u), 0x46u);
    /* 0044dd25: mov dword ptr [0xa44de8], ecx */ W32((u32)(0xa44de8u), r_ecx);
    /* 0044dd2b: mov dword ptr [0xa44dfc], edi */ W32((u32)(0xa44dfcu), r_edi);
    /* 0044dd31: mov dword ptr [0xa44dd4], 0x82 */ W32((u32)(0xa44dd4u), 0x82u);
    /* 0044dd3b: mov dword ptr [0xa44ddc], 0x88 */ W32((u32)(0xa44ddcu), 0x88u);
    /* 0044dd45: mov dword ptr [0xa44e00], eax */ W32((u32)(0xa44e00u), r_eax);
    /* 0044dd4a: mov eax, 0x28 */ r_eax = 0x28u;
    /* 0044dd4f: mov dword ptr [0xa44dec], 0xe6 */ W32((u32)(0xa44decu), 0xe6u);
    /* 0044dd59: mov dword ptr [0xa44e04], ecx */ W32((u32)(0xa44e04u), r_ecx);
    /* 0044dd5f: mov dword ptr [0xa44e18], edi */ W32((u32)(0xa44e18u), r_edi);
    /* 0044dd65: mov dword ptr [0xa44df0], 0xf0 */ W32((u32)(0xa44df0u), 0xf0u);
    /* 0044dd6f: mov dword ptr [0xa44df4], 0x104 */ W32((u32)(0xa44df4u), 0x104u);
    /* 0044dd79: mov dword ptr [0xa44e1c], edi */ W32((u32)(0xa44e1cu), r_edi);
    /* 0044dd7f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0044dd82: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0044dd85: fadd dword ptr [0x8ff510] */ ST(0) = ST(0) + R_F32((u32)(0x8ff510u));
    /* 0044dd8b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0044dd8f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0044dd94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044dd99: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0044dd9d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0044dda1: fistp dword ptr [0xa44e28] */ W32((u32)(0xa44e28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044dda7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0044ddab: mov dword ptr [0xa44e40], edi */ W32((u32)(0xa44e40u), r_edi);
    /* 0044ddb1: mov dword ptr [0xa44df8], 0x12c */ W32((u32)(0xa44df8u), 0x12cu);
    /* 0044ddbb: mov dword ptr [0xa44e5c], edx */ W32((u32)(0xa44e5cu), r_edx);
    /* 0044ddc1: mov dword ptr [0xa44e08], 0xdc */ W32((u32)(0xa44e08u), 0xdcu);
    /* 0044ddcb: mov dword ptr [0xa44e64], edi */ W32((u32)(0xa44e64u), r_edi);
    /* 0044ddd1: mov dword ptr [0xa44e0c], 0xc8 */ W32((u32)(0xa44e0cu), 0xc8u);
    /* 0044dddb: mov dword ptr [0xa44e74], ecx */ W32((u32)(0xa44e74u), r_ecx);
    /* 0044dde1: mov dword ptr [0xa44e10], 0xf0 */ W32((u32)(0xa44e10u), 0xf0u);
    /* 0044ddeb: mov dword ptr [0xa44e84], ecx */ W32((u32)(0xa44e84u), r_ecx);
    /* 0044ddf1: mov dword ptr [0xa44e14], 0x118 */ W32((u32)(0xa44e14u), 0x118u);
    /* 0044ddfb: mov dword ptr [0xa44e8c], edi */ W32((u32)(0xa44e8cu), r_edi);
    /* 0044de01: mov dword ptr [0xa44e20], 5 */ W32((u32)(0xa44e20u), 0x5u);
    /* 0044de0b: mov dword ptr [0xa44e24], 0x28 */ W32((u32)(0xa44e24u), 0x28u);
    /* 0044de15: mov dword ptr [0xa44e2c], 0x5a */ W32((u32)(0xa44e2cu), 0x5au);
    /* 0044de1f: mov dword ptr [0xa44e30], 0x86 */ W32((u32)(0xa44e30u), 0x86u);
    /* 0044de29: mov dword ptr [0xa44e34], 0x8b */ W32((u32)(0xa44e34u), 0x8bu);
    /* 0044de33: mov dword ptr [0xa44e38], 0x8c */ W32((u32)(0xa44e38u), 0x8cu);
    /* 0044de3d: mov dword ptr [0xa44e3c], 0xc1200000 */ W32((u32)(0xa44e3cu), 0xc1200000u);
    /* 0044de47: mov dword ptr [0xa44e44], 0x3c */ W32((u32)(0xa44e44u), 0x3cu);
    /* 0044de51: mov dword ptr [0xa44e48], 0x44 */ W32((u32)(0xa44e48u), 0x44u);
    /* 0044de5b: mov dword ptr [0xa44e4c], 0x48 */ W32((u32)(0xa44e4cu), 0x48u);
    /* 0044de65: mov dword ptr [0xa44e50], 0x44 */ W32((u32)(0xa44e50u), 0x44u);
    /* 0044de6f: mov dword ptr [0xa44e54], 0x4c */ W32((u32)(0xa44e54u), 0x4cu);
    /* 0044de79: mov dword ptr [0xa44e58], 0x72 */ W32((u32)(0xa44e58u), 0x72u);
    /* 0044de83: mov dword ptr [0xa44e60], 0xf0 */ W32((u32)(0xa44e60u), 0xf0u);
    /* 0044de8d: mov dword ptr [0xa44e68], 0x8c */ W32((u32)(0xa44e68u), 0x8cu);
    /* 0044de97: mov dword ptr [0xa44e6c], 0xa0 */ W32((u32)(0xa44e6cu), 0xa0u);
    /* 0044dea1: mov dword ptr [0xa44e70], 0xf0 */ W32((u32)(0xa44e70u), 0xf0u);
    /* 0044deab: mov dword ptr [0xa44e78], 0xa0 */ W32((u32)(0xa44e78u), 0xa0u);
    /* 0044deb5: mov dword ptr [0xa44e7c], 0x104 */ W32((u32)(0xa44e7cu), 0x104u);
    /* 0044debf: mov dword ptr [0xa44e80], 0x104 */ W32((u32)(0xa44e80u), 0x104u);
    /* 0044dec9: mov dword ptr [0xa44e88], 0x12c */ W32((u32)(0xa44e88u), 0x12cu);
    /* 0044ded3: mov dword ptr [0xa44e90], 0x78 */ W32((u32)(0xa44e90u), 0x78u);
    /* 0044dedd: mov dword ptr [0xa44e94], 0x3f800000 */ W32((u32)(0xa44e94u), 0x3f800000u);
    /* 0044dee7: mov dword ptr [0xa44e98], 0x41000000 */ W32((u32)(0xa44e98u), 0x41000000u);
    /* 0044def1: mov dword ptr [0xa44e9c], 0x3fc00000 */ W32((u32)(0xa44e9cu), 0x3fc00000u);
    /* 0044defb: mov dword ptr [0xa44ea0], 0x469c4000 */ W32((u32)(0xa44ea0u), 0x469c4000u);
    /* 0044df05: mov dword ptr [0xa44ea4], 0 */ W32((u32)(0xa44ea4u), 0x0u);
    /* 0044df0f: mov dword ptr [0xa44ea8], 0xc2c80000 */ W32((u32)(0xa44ea8u), 0xc2c80000u);
    /* 0044df19: mov dword ptr [0xa44eac], 0x78 */ W32((u32)(0xa44eacu), 0x78u);
    /* 0044df23: mov dword ptr [0xa44da8], 0x71 */ W32((u32)(0xa44da8u), 0x71u);
    /* 0044df2d: mov dword ptr [0xa44eb0], 0x12c */ W32((u32)(0xa44eb0u), 0x12cu);
    /* 0044df37: mov dword ptr [0xa44eb4], 0x118 */ W32((u32)(0xa44eb4u), 0x118u);
    /* 0044df41: mov dword ptr [0xa44eb8], 0x8e */ W32((u32)(0xa44eb8u), 0x8eu);
    /* 0044df4b: mov dword ptr [0xa44dac], 0x72 */ W32((u32)(0xa44dacu), 0x72u);
    /* 0044df55: mov dword ptr [0xa44db0], 0x7e */ W32((u32)(0xa44db0u), 0x7eu);
    /* 0044df5f: mov dword ptr [0xa44ebc], 0x12e */ W32((u32)(0xa44ebcu), 0x12eu);
    /* 0044df69: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044df6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044df6d: ret  */ FN_RET(0x0044dcb4); r_esp += 4; return;
}

void f_0044df70(void)
{
    FN_ENTER(0x0044df70);
    /* 0044df70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044df71: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0044df73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0044df75: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44df7au); f_0048dc3c();
    /* 0044df7a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044df7b: call 0x67ab80 */ r_esp -= 4; W32(r_esp, 0x44df80u); f_0067ab80();
    /* 0044df80: mov dword ptr [ebp + 0x388], 0x1c6 */ W32((u32)(r_ebp+0x388u), 0x1c6u);
    /* 0044df8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044df8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044df8c: ret  */ FN_RET(0x0044df70); r_esp += 4; return;
}

void f_0044df90(void) /* sub_44DF90 */
{
    FN_ENTER(0x0044df90);
    /* 0044df90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044df91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044df92: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044df93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044df94: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044df97: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044df99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044df9b: call 0x48dc3c */ r_esp -= 4; W32(r_esp, 0x44dfa0u); f_0048dc3c();
    /* 0044dfa0: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x44dfa5u); f_00815434();
    /* 0044dfa5: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfa7: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x44dfacu); f_006bb100();
    /* 0044dfac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044dfad: call 0x453f24 */ r_esp -= 4; W32(r_esp, 0x44dfb2u); f_00453f24();
    /* 0044dfb2: mov eax, dword ptr [0xa44d5c] */ r_eax = R32((u32)(0xa44d5cu));
    /* 0044dfb7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dfb9: je 0x44e075 */ if (fZ) goto L_0044e075;
L_0044dfbf:; BB(0x0044dfbf);
    /* 0044dfbf: push dword ptr [eax + 0x60] */ { u32 v = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044dfc2: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 0044dfc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044dfc7: call 0x450fc4 */ r_esp -= 4; W32(r_esp, 0x44dfccu); f_00450fc4();
    /* 0044dfcc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0044dfcf:; BB(0x0044dfcf);
    /* 0044dfcf: mov edi, dword ptr [0xa44d5c] */ r_edi = R32((u32)(0xa44d5cu));
    /* 0044dfd5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044dfd7: je 0x44e062 */ if (fZ) goto L_0044e062;
L_0044dfdd:; BB(0x0044dfdd);
    /* 0044dfdd: movzx ebp, word ptr [edi + 0x2da] */ r_ebp = (u32)R16((u32)(r_edi+0x2dau));
    /* 0044dfe4: mov word ptr [ebx + 0x2da], bp */ W16((u32)(r_ebx+0x2dau), (u16)r_ebp);
    /* 0044dfeb: movzx esi, word ptr [edi + 0x2d8] */ r_esi = (u32)R16((u32)(r_edi+0x2d8u));
    /* 0044dff2: mov word ptr [ebx + 0x2d8], si */ W16((u32)(r_ebx+0x2d8u), (u16)r_esi);
    /* 0044dff9: movzx eax, word ptr [edi + 0xfc] */ r_eax = (u32)R16((u32)(r_edi+0xfcu));
    /* 0044e000: mov ebp, dword ptr [0xa44d5c] */ r_ebp = R32((u32)(0xa44d5cu));
    /* 0044e006: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 0044e00a: movzx edx, word ptr [edi + 0xfe] */ r_edx = (u32)R16((u32)(r_edi+0xfeu));
    /* 0044e011: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0044e016: movzx ecx, word ptr [edi + 0x100] */ r_ecx = (u32)R16((u32)(r_edi+0x100u));
    /* 0044e01d: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 0044e022: movzx esi, word ptr [edi + 0x102] */ r_esi = (u32)R16((u32)(r_edi+0x102u));
    /* 0044e029: movzx edi, word ptr [ebp + 8] */ r_edi = (u32)R16((u32)(r_ebp+0x8u));
    /* 0044e02d: mov dword ptr [0xa44d5c], 0 */ W32((u32)(0xa44d5cu), 0x0u);
    /* 0044e037: mov word ptr [esp + 6], si */ W16((u32)(r_esp+0x6u), (u16)r_esi);
    /* 0044e03c: or edi, 0xffff0001 */ {  u32 a = r_edi; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0044e042: mov word ptr [ebp + 8], di */ W16((u32)(r_ebp+0x8u), (u16)r_edi);
    /* 0044e046: mov word ptr [ebx + 0xfc], ax */ W16((u32)(r_ebx+0xfcu), (u16)r_eax);
    /* 0044e04d: mov word ptr [ebx + 0xfe], dx */ W16((u32)(r_ebx+0xfeu), (u16)r_edx);
    /* 0044e054: mov word ptr [ebx + 0x100], cx */ W16((u32)(r_ebx+0x100u), (u16)r_ecx);
    /* 0044e05b: mov word ptr [ebx + 0x102], si */ W16((u32)(r_ebx+0x102u), (u16)r_esi);
L_0044e062:; BB(0x0044e062);
    /* 0044e062: mov eax, dword ptr [0xa44ebc] */ r_eax = R32((u32)(0xa44ebcu));
    /* 0044e067: mov dword ptr [ebx + 0x388], eax */ W32((u32)(r_ebx+0x388u), r_eax);
    /* 0044e06d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044e070: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044e071: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044e072: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044e073: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044e074: ret  */ FN_RET(0x0044df90); r_esp += 4; return;
L_0044e075:; BB(0x0044e075);
    /* 0044e075: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e077: push 0xa44d88 */ { u32 v = 0xa44d88u; r_esp -= 4; W32(r_esp, v); }
    /* 0044e07c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044e07d: call 0x450fc4 */ r_esp -= 4; W32(r_esp, 0x44e082u); f_00450fc4();
    /* 0044e082: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044e085: jmp 0x44dfcf */ goto L_0044dfcf;
}

