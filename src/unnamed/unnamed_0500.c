#include "protos.h"

void f_00500000(void)
{
    FN_ENTER(0x00500000);
    /* 00500000: nop  */ ;
    /* 00500001: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500003: add byte ptr [ebp - 0x797600be], cl */ { u32 ad = (u32)(r_ebp+0x8689ff42u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500009: nop  */ ;
    /* 0050000a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0050000c: add byte ptr [ebp - 0x7cfa812e], al */ { u32 ad = (u32)(r_ebp+0x83057ed2u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00500012: les ebp, ptr [eax] */ UNSUP(0x00500012, "les ebp, ptr [eax]");
    /* 00500014: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00500015: ret  */ FN_RET(0x00500000); r_esp += 4; return;
}

void f_00500020(void)
{
    FN_ENTER(0x00500020);
    /* 00500020: and al, 0xd8 */ {  u32 a = (u8)r_eax; u32 b = 0xd8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500022: xor eax, 0x91ee4c */ {  u32 a = r_eax; u32 b = 0x91ee4cu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00500027: fmul dword ptr [0x91ee50] */ ST(0) = ST(0) * R_F32((u32)(0x91ee50u));
    /* 0050002d: mov ecx, esi */ r_ecx = r_esi;
    /* 0050002f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00500033: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500038: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050003d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00500041: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500045: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500049: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050004d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500020); r_esp += 4; return;
}

void f_00500048(void)
{
    FN_ENTER(0x00500048);
    /* 00500048: sbb cl, bl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b - c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050004a: insb byte ptr es:[edi], dx */ UNSUP(0x0050004a, "insb byte ptr es:[edi], dx");
    /* 0050004b: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050004d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500048); r_esp += 4; return;
}

void f_00500049(void)
{
    FN_ENTER(0x00500049);
    /* 00500049: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050004d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500049); r_esp += 4; return;
}

void f_0050004d(void)
{
    FN_ENTER(0x0050004d);
    /* 0050004d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x0050004d); r_esp += 4; return;
}

void f_0050004e(void)
{
    FN_ENTER(0x0050004e);
    /* 0050004e: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050004f: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x0050004e); r_esp += 4; return;
}

void f_0050004f(void)
{
    FN_ENTER(0x0050004f);
    /* 0050004f: and al, 0x18 */ {  u32 a = (u8)r_eax; u32 b = 0x18u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500051: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x0050004f); r_esp += 4; return;
}

void f_00500050(void)
{
    FN_ENTER(0x00500050);
    /* 00500050: sbb byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a - b - c) & 0xffu; W8(ad, r);  }
    /* 00500053: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00500054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500056: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500058: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00500059: xchg dword ptr [0x8486db00], esi */ { u32 x = R32((u32)(0x8486db00u)); u32 y = r_esi; W32((u32)(0x8486db00u), y); r_esi = x; }
    /* 0050005f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500061: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500063: xchg byte ptr [eax - 0x77000000], cl */ { u32 x = R8((u32)(r_eax+0x89000000u)); u32 y = (u8)r_ecx; W8((u32)(r_eax+0x89000000u), y); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 00500069: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050006a: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500050); r_esp += 4; return;
}

void f_00500052(void)
{
    FN_ENTER(0x00500052);
    /* 00500052: call 0x5000a0 */ r_esp -= 4; W32(r_esp, 0x500057u); f_005000a0();
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500052); r_esp += 4; return;
}

void f_00500053(void)
{
    FN_ENTER(0x00500053);
    /* 00500053: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00500054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500056: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500058: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00500059: xchg dword ptr [0x8486db00], esi */ { u32 x = R32((u32)(0x8486db00u)); u32 y = r_esi; W32((u32)(0x8486db00u), y); r_esi = x; }
    /* 0050005f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500061: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500063: xchg byte ptr [eax - 0x77000000], cl */ { u32 x = R8((u32)(r_eax+0x89000000u)); u32 y = (u8)r_ecx; W8((u32)(r_eax+0x89000000u), y); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 00500069: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050006a: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500053); r_esp += 4; return;
}

void f_00500054(void)
{
    FN_ENTER(0x00500054);
    /* 00500054: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500056: add al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500058: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00500059: xchg dword ptr [0x8486db00], esi */ { u32 x = R32((u32)(0x8486db00u)); u32 y = r_esi; W32((u32)(0x8486db00u), y); r_esi = x; }
    /* 0050005f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500061: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500063: xchg byte ptr [eax - 0x77000000], cl */ { u32 x = R8((u32)(r_eax+0x89000000u)); u32 y = (u8)r_ecx; W8((u32)(r_eax+0x89000000u), y); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 00500069: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050006a: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500054); r_esp += 4; return;
}

void f_00500055(void)
{
    FN_ENTER(0x00500055);
    /* 00500055: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500057: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x50005cu); f_008587a5();
    /* 0050005c: fild dword ptr [esi + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x84u)));
    /* 00500062: fild dword ptr [esi + 0x88] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x88u)));
    /* 00500068: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x00500055); r_esp += 4; return;
}

void f_0050005f(void)
{
    FN_ENTER(0x0050005f);
    /* 0050005f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00500061: add bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500063: xchg byte ptr [eax - 0x77000000], cl */ { u32 x = R8((u32)(r_eax+0x89000000u)); u32 y = (u8)r_ecx; W8((u32)(r_eax+0x89000000u), y); r_ecx = (r_ecx & 0xffffff00u) | ((x) & 0xffu); }
    /* 00500069: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0050006a: and al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050006c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00500070: fdiv dword ptr [0x91ee4c] */ ST(0) = ST(0) / R_F32((u32)(0x91ee4cu));
    /* 00500076: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500078: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0050007a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0050007e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00500083: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500088: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x0050005f); r_esp += 4; return;
}

void f_0050008a(void)
{
    FN_ENTER(0x0050008a);
    /* 0050008a: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0050008c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00500090: fistp dword ptr [esi + 0x90] */ W32((u32)(r_esi+0x90u), (u32)fx_int32(ST(0))); FPOP();
    /* 00500096: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050009a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x0050008a); r_esp += 4; return;
}

void f_0050009d(void)
{
    FN_ENTER(0x0050009d);
    /* 0050009d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050009e: ret  */ FN_RET(0x0050009d); r_esp += 4; return;
}

void f_005000a0(void) /* sub_5000A0 */
{
    FN_ENTER(0x005000a0);
    /* 005000a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005000a1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005000a4: mov esi, ecx */ r_esi = r_ecx;
    /* 005000a6: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005000aa: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5000afu); f_0082dcbc();
    /* 005000af: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005000b3: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 005000b6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005000b8: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 005000bb: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 005000bf: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005000c3: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5000c8u); f_0082ddd8();
    /* 005000c8: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 005000cb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005000cd: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005000d1: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5000d6u); f_008587a5();
    /* 005000d6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005000da: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 005000de: fdiv dword ptr [0x91ee48] */ ST(0) = ST(0) / R_F32((u32)(0x91ee48u));
    /* 005000e4: fmul dword ptr [0x91ee40] */ ST(0) = ST(0) * R_F32((u32)(0x91ee40u));
    /* 005000ea: fadd dword ptr [0x91ee44] */ ST(0) = ST(0) + R_F32((u32)(0x91ee44u));
    /* 005000f0: fmul dword ptr [esi + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x70u));
    /* 005000f3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005000f6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005000fa: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005000fe: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00500102: call 0x500110 */ r_esp -= 4; W32(r_esp, 0x500107u); f_00500110();
    /* 00500107: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050010a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050010b: ret 4 */ FN_RET(0x005000a0); r_esp += 8; return;
}

void f_005000e9(void)
{
    FN_ENTER(0x005000e9);
    /* 005000e9: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 005000eb: add eax, 0x91ee44 */ {  u32 a = r_eax; u32 b = 0x91ee44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005000f0: fmul dword ptr [esi + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x70u));
    /* 005000f3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 005000f6: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005000fa: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005000fe: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00500102: call 0x500110 */ r_esp -= 4; W32(r_esp, 0x500107u); f_00500110();
    /* 00500107: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050010a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050010b: ret 4 */ FN_RET(0x005000e9); r_esp += 8; return;
}

void f_00500110(void) /* sub_500110 */
{
    FN_ENTER(0x00500110);
    /* 00500110: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500111: mov ebp, esp */ r_ebp = r_esp;
    /* 00500113: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00500115: push 0x8d34fc */ { u32 v = 0x8d34fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050011a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00500120: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500121: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00500128: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050012b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050012e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00500131: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00500134: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00500137: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00500139: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00500140: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x500145u); f_005caba4();
    /* 00500145: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500146: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00500149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050014b: je 0x500184 */ if (fZ) goto L_00500184;
L_0050014d:; BB(0x0050014d);
    /* 0050014d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00500154: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050015b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050015e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00500161: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00500164: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500167: call 0x500188 */ r_esp -= 4; W32(r_esp, 0x50016cu); f_00500188();
    /* 0050016c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050016f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00500176:; BB(0x00500176);
    /* 00500176: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00500179: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00500180: mov esp, ebp */ r_esp = r_ebp;
    /* 00500182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500183: ret  */ FN_RET(0x00500110); r_esp += 4; return;
L_00500184:; BB(0x00500184);
    /* 00500184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500186: jmp 0x500176 */ goto L_00500176;
}

void f_00500142(void)
{
    FN_ENTER(0x00500142);
    /* 00500142: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00500143: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00500145: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500146: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00500149: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050014b: je 0x500184 */ if (fZ) goto L_00500184;
L_0050014d:; BB(0x0050014d);
    /* 0050014d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00500154: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050015b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050015e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00500161: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00500164: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500167: call 0x500188 */ r_esp -= 4; W32(r_esp, 0x50016cu); f_00500188();
    /* 0050016c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050016f: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00500176:; BB(0x00500176);
    /* 00500176: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00500179: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00500180: mov esp, ebp */ r_esp = r_ebp;
    /* 00500182: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500183: ret  */ FN_RET(0x00500142); r_esp += 4; return;
L_00500184:; BB(0x00500184);
    /* 00500184: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500186: jmp 0x500176 */ goto L_00500176;
}

void f_00500188(void) /* sub_500188 */
{
    FN_ENTER(0x00500188);
    /* 00500188: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00500189: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050018a: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050018d: mov esi, ecx */ r_esi = r_ecx;
    /* 0050018f: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00500193: push dword ptr [esp + 0x2c] */ { u32 v = R32((u32)(r_esp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00500197: mov ecx, esi */ r_ecx = r_esi;
    /* 00500199: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x50019eu); f_008193cc();
    /* 0050019e: mov dword ptr [esi], 0xafe480 */ W32((u32)(r_esi), 0xafe480u);
    /* 005001a4: mov eax, dword ptr [0x9b9360] */ r_eax = R32((u32)(0x9b9360u));
    /* 005001a9: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 005001ac: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5001b1u); f_008587a5();
    /* 005001b1: mov byte ptr [esi + 0x1d], 0 */ W8((u32)(r_esi+0x1du), 0x0u);
    /* 005001b5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005001b8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005001bb: fdiv dword ptr [0x91ee38] */ ST(0) = ST(0) / R_F32((u32)(0x91ee38u));
    /* 005001c1: fmul dword ptr [0x91ee3c] */ ST(0) = ST(0) * R_F32((u32)(0x91ee3cu));
    /* 005001c7: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005001cb: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005001d0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005001d5: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005001d9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005001dd: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005001e1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005001e5: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005001e9: mov byte ptr [esi + 0x1c], dl */ W8((u32)(r_esi+0x1cu), (u8)r_edx);
    /* 005001ec: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005001ef: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 005001f2: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005001f5: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 005001f8: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005001fb: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005001ff: mov dword ptr [esi + 0x28], ebp */ W32((u32)(r_esi+0x28u), r_ebp);
    /* 00500202: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 00500205: mov eax, esi */ r_eax = r_esi;
    /* 00500207: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050020a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050020b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050020c: ret 0xc */ FN_RET(0x00500188); r_esp += 16; return;
}

void f_00500210(void) /* sub_500210 */
{
    FN_ENTER(0x00500210);
    /* 00500210: mov dword ptr [0xa72808], 0x42800000 */ W32((u32)(0xa72808u), 0x42800000u);
    /* 0050021a: mov dword ptr [0xa7280c], 0xc0400000 */ W32((u32)(0xa7280cu), 0xc0400000u);
    /* 00500224: mov dword ptr [0xa72810], 0xc1c00000 */ W32((u32)(0xa72810u), 0xc1c00000u);
    /* 0050022e: ret  */ FN_RET(0x00500210); r_esp += 4; return;
}

void f_00500230(void) /* sub_500230 */
{
    FN_ENTER(0x00500230);
    /* 00500230: push 0x91ee80 */ { u32 v = 0x91ee80u; r_esp -= 4; W32(r_esp, v); }
    /* 00500235: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x50023au); f_008009dc();
    /* 0050023a: mov dword ptr [0xa72814], eax */ W32((u32)(0xa72814u), r_eax);
    /* 0050023f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500240: ret  */ FN_RET(0x00500230); r_esp += 4; return;
}

void f_00500244(void) /* sub_500244 */
{
    FN_ENTER(0x00500244);
    /* 00500244: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500245: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00500247: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00500249: call 0x500268 */ r_esp -= 4; W32(r_esp, 0x50024eu); f_00500268();
    /* 0050024e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00500252: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500254: jne 0x50025a */ if (!fZ) goto L_0050025a;
L_00500256:; BB(0x00500256);
    /* 00500256: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500257: ret 4 */ FN_RET(0x00500244); r_esp += 8; return;
L_0050025a:; BB(0x0050025a);
    /* 0050025a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050025b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x500260u); f_005c2f74();
    /* 00500260: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500261: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500262: ret 4 */ FN_RET(0x00500244); r_esp += 8; return;
}

void f_00500268(void) /* sub_500268 */
{
    FN_ENTER(0x00500268);
    /* 00500268: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500269: mov ebp, esp */ r_ebp = r_esp;
    /* 0050026b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050026d: push 0x8d3518 */ { u32 v = 0x8d3518u; r_esp -= 4; W32(r_esp, v); }
    /* 00500272: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00500278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500279: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00500280: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00500283: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00500286: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00500289: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050028c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050028f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00500292: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500295: mov dword ptr [ecx], 0xafe538 */ W32((u32)(r_ecx), 0xafe538u);
    /* 0050029b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005002a2: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x5002a7u); f_007ba1f0();
    /* 005002a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005002aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005002b1: mov esp, ebp */ r_esp = r_ebp;
    /* 005002b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005002b4: ret  */ FN_RET(0x00500268); r_esp += 4; return;
}

void f_005002b8(void) /* sub_5002B8 */
{
    FN_ENTER(0x005002b8);
    /* 005002b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005002b9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005002ba: sub esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005002c0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005002c2: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 005002c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005002c9: je 0x500812 */ if (fZ) goto L_00500812;
L_005002cf:; BB(0x005002cf);
    /* 005002cf: call 0x7a902c */ r_esp -= 4; W32(r_esp, 0x5002d4u); f_007a902c();
    /* 005002d4: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 005002d7: fcom dword ptr [0x91eeec] */ fx_compare(ST(0), R_F32((u32)(0x91eeecu))); 
    /* 005002dd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005002df: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005002e0: jb 0x500304 */ if (fC) goto L_00500304;
L_005002e2:; BB(0x005002e2);
    /* 005002e2: fld dword ptr [0x91eee8] */ FPUSH(R_F32((u32)(0x91eee8u)));
    /* 005002e8: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 005002ea: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 005002ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005002ed: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005002f0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005002f2: call 0x50081c */ r_esp -= 4; W32(r_esp, 0x5002f7u); f_0050081c();
    /* 005002f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005002f9: je 0x500306 */ if (fZ) goto L_00500306;
L_005002fb:; BB(0x005002fb);
    /* 005002fb: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00500301: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500302: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00500303: ret  */ FN_RET(0x005002b8); r_esp += 4; return;
L_00500304:; BB(0x00500304);
    /* 00500304: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00500306:; BB(0x00500306);
    /* 00500306: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x50030bu); f_0082dbac();
    /* 0050030b: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00500310: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00500314: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 00500317: fsub dword ptr [eax + 0x178] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x178u));
    /* 0050031d: fld dword ptr [ebx + 0x3c] */ FPUSH(R_F32((u32)(r_ebx+0x3cu)));
    /* 00500320: fsub dword ptr [eax + 0x17c] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x17cu));
    /* 00500326: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 00500329: fsub dword ptr [eax + 0x180] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x180u));
    /* 0050032f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00500331: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 00500335: fstp dword ptr [esp + 0x38] */ W_F32((u32)(r_esp+0x38u), ST(0)); FPOP();
    /* 00500339: fstp dword ptr [esp + 0x3c] */ W_F32((u32)(r_esp+0x3cu), ST(0)); FPOP();
    /* 0050033d: call 0x82def4 */ r_esp -= 4; W32(r_esp, 0x500342u); f_0082def4();
    /* 00500342: fcomp dword ptr [0x91eeec] */ fx_compare(ST(0), R_F32((u32)(0x91eeecu))); FPOP();
    /* 00500348: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050034a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050034b: je 0x500358 */ if (fZ) goto L_00500358;
L_0050034d:; BB(0x0050034d);
    /* 0050034d: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00500351: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x500356u); f_0082df08();
    /* 00500356: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00500358:; BB(0x00500358);
    /* 00500358: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 0050035d: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x500362u); f_0082d990();
    /* 00500362: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00500367: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 0050036d: mov dword ptr [esp + 0x40], 0 */ W32((u32)(r_esp+0x40u), 0x0u);
    /* 00500375: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00500377: mov dword ptr [esp + 0x44], 0 */ W32((u32)(r_esp+0x44u), 0x0u);
    /* 0050037f: mov dword ptr [esp + 0x48], 0xbf800000 */ W32((u32)(r_esp+0x48u), 0xbf800000u);
    /* 00500387: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x50038cu); f_0082d8bc();
    /* 0050038c: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00500391: mov edx, dword ptr [eax + 0x190] */ r_edx = R32((u32)(r_eax+0x190u));
    /* 00500397: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00500399: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x50039eu); f_0082e9e4();
    /* 0050039e: lea eax, [esp + 0x4c] */ r_eax = (u32)(r_esp+0x4cu);
    /* 005003a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005003a3: lea edx, [esp + 0x44] */ r_edx = (u32)(r_esp+0x44u);
    /* 005003a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005003a9: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5003aeu); f_0082eab8();
    /* 005003ae: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5003b3u); f_0082da80();
    /* 005003b3: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 005003b7: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 005003bb: call 0x82f9e0 */ r_esp -= 4; W32(r_esp, 0x5003c0u); f_0082f9e0();
    /* 005003c0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005003c4: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005003c8: fcomp dword ptr [0x91eeec] */ fx_compare(ST(0), R_F32((u32)(0x91eeecu))); FPOP();
    /* 005003ce: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005003d0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005003d1: jbe 0x50080d */ if ((fC||fZ)) goto L_0050080d;
L_005003d7:; BB(0x005003d7);
    /* 005003d7: lea eax, [esp + 0x58] */ r_eax = (u32)(r_esp+0x58u);
    /* 005003db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005003dc: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 005003df: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005003e1: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x5003e6u); f_0082f09c();
    /* 005003e6: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x5003ebu); f_0082f4d8();
    /* 005003eb: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 005003ef: fdiv dword ptr [0xacc0e8] */ ST(0) = ST(0) / R_F32((u32)(0xacc0e8u));
    /* 005003f5: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 005003f9: fdiv dword ptr [0xacc0ec] */ ST(0) = ST(0) / R_F32((u32)(0xacc0ecu));
    /* 005003ff: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00500403: fcomp dword ptr [0x91eee4] */ fx_compare(ST(0), R_F32((u32)(0x91eee4u))); FPOP();
    /* 00500409: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050040b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050040d: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 00500411: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00500415: fst dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0));
    /* 00500419: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 0050041d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050041e: ja 0x500442 */ if ((!fC&&!fZ)) goto L_00500442;
L_00500420:; BB(0x00500420);
    /* 00500420: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00500424: fcomp dword ptr [0x91eec4] */ fx_compare(ST(0), R_F32((u32)(0x91eec4u))); FPOP();
    /* 0050042a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050042c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0050042d: ja 0x50055f */ if ((!fC&&!fZ)) goto L_0050055f;
L_00500433:; BB(0x00500433);
    /* 00500433: fld dword ptr [0x91eeec] */ FPUSH(R_F32((u32)(0x91eeecu)));
    /* 00500439: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 0050043d: jmp 0x500573 */ goto L_00500573;
L_00500442:; BB(0x00500442);
    /* 00500442: fld dword ptr [0x91eee0] */ FPUSH(R_F32((u32)(0x91eee0u)));
    /* 00500448: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 0050044c: fmul dword ptr [0x91eedc] */ ST(0) = ST(0) * R_F32((u32)(0x91eedcu));
    /* 00500452: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00500454: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00500459: fld dword ptr [0x91eed8] */ FPUSH(R_F32((u32)(0x91eed8u)));
    /* 0050045f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00500461: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500463: fmul dword ptr [0x91eed0] */ ST(0) = ST(0) * R_F32((u32)(0x91eed0u));
    /* 00500469: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0050046b: fmul dword ptr [0x91eed4] */ ST(0) = ST(0) * R_F32((u32)(0x91eed4u));
    /* 00500471: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500473: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 00500477: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0050047a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0050047e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500483: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00500487: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0050048b: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050048f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00500492: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 00500496: shl esi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00500499: or esi, 0xff0000 */ {  u32 a = r_esi; u32 b = 0xff0000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0050049f: or esi, 0xff00 */ {  u32 a = r_esi; u32 b = 0xff00u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005004a5: or esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 005004ab: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x5004b0u); f_0082bb30();
    /* 005004b0: mov ecx, dword ptr [0xa1041c] */ r_ecx = R32((u32)(0xa1041cu));
    /* 005004b6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5004bbu); f_00829cc8();
    /* 005004bb: mov ecx, dword ptr [0xa10420] */ r_ecx = R32((u32)(0xa10420u));
    /* 005004c1: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005004c6: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x5004cbu); f_0082bb60();
    /* 005004cb: fld dword ptr [0xa1042c] */ FPUSH(R_F32((u32)(0xa1042cu)));
    /* 005004d1: fld dword ptr [0xa10430] */ FPUSH(R_F32((u32)(0xa10430u)));
    /* 005004d7: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 005004db: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005004df: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005004e3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005004e5: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 005004e7: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 005004e9: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005004eb: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005004ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005004f1: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005004f3: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 005004f7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 005004f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005004fb: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 005004ff: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00500503: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500505: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 00500507: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00500509: fstp dword ptr [esp + 0x6c] */ W_F32((u32)(r_esp+0x6cu), ST(0)); FPOP();
    /* 0050050d: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0050050f: fstp dword ptr [esp + 0x64] */ W_F32((u32)(r_esp+0x64u), ST(0)); FPOP();
    /* 00500513: mov dword ptr [esp + 0x70], 0 */ W32((u32)(r_esp+0x70u), 0x0u);
    /* 0050051b: mov dword ptr [esp + 0x74], 0 */ W32((u32)(r_esp+0x74u), 0x0u);
    /* 00500523: mov ecx, esi */ r_ecx = r_esi;
    /* 00500525: mov dword ptr [esp + 0x78], 0x3f800000 */ W32((u32)(r_esp+0x78u), 0x3f800000u);
    /* 0050052d: mov dword ptr [esp + 0x7c], 0x3f800000 */ W32((u32)(r_esp+0x7cu), 0x3f800000u);
    /* 00500535: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x50053au); f_0082b438();
    /* 0050053a: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 0050053f: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 00500543: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x500548u); f_0082b440();
    /* 00500548: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x50054du); f_004ac444();
    /* 0050054d: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 00500551: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 00500555: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500557: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0050055b: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_0050055f:; BB(0x0050055f);
    /* 0050055f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00500563: fadd dword ptr [0x91eec0] */ ST(0) = ST(0) + R_F32((u32)(0x91eec0u));
    /* 00500569: fmul dword ptr [0x91eebc] */ ST(0) = ST(0) * R_F32((u32)(0x91eebcu));
    /* 0050056f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_00500573:; BB(0x00500573);
    /* 00500573: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00500577: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0050057b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0050057d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050057f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00500584: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500586: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0050058a: fsubr dword ptr [0x91eeb8] */ ST(0) = R_F32((u32)(0x91eeb8u)) - ST(0);
    /* 00500590: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00500594: fsubr dword ptr [0x91eeb4] */ ST(0) = R_F32((u32)(0x91eeb4u)) - ST(0);
    /* 0050059a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050059c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 005005a0: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005005a4: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 005005a8: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x5005adu); f_0082bb30();
    /* 005005ad: mov ecx, dword ptr [0xa1032c] */ r_ecx = R32((u32)(0xa1032cu));
    /* 005005b3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5005b8u); f_00829cc8();
    /* 005005b8: mov ecx, dword ptr [0xa10330] */ r_ecx = R32((u32)(0xa10330u));
    /* 005005be: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005005c3: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x5005c8u); f_0082bb60();
    /* 005005c8: fld dword ptr [0xa1033c] */ FPUSH(R_F32((u32)(0xa1033cu)));
    /* 005005ce: fld dword ptr [0xa10340] */ FPUSH(R_F32((u32)(0xa10340u)));
    /* 005005d4: fld dword ptr [0x91eeb0] */ FPUSH(R_F32((u32)(0x91eeb0u)));
    /* 005005da: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005005de: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 005005e2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005005e4: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 005005e6: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 005005e8: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 005005ec: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005005ee: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 005005f0: fstp dword ptr [esp + 0x88] */ W_F32((u32)(r_esp+0x88u), ST(0)); FPOP();
    /* 005005f7: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 005005f9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005005fb: fstp dword ptr [esp + 0x80] */ W_F32((u32)(r_esp+0x80u), ST(0)); FPOP();
    /* 00500602: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00500606: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500608: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 0050060a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050060c: fstp dword ptr [esp + 0x8c] */ W_F32((u32)(r_esp+0x8cu), ST(0)); FPOP();
    /* 00500613: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 00500615: fstp dword ptr [esp + 0x84] */ W_F32((u32)(r_esp+0x84u), ST(0)); FPOP();
    /* 0050061c: mov dword ptr [esp + 0x90], 0 */ W32((u32)(r_esp+0x90u), 0x0u);
    /* 00500627: mov dword ptr [esp + 0x94], 0 */ W32((u32)(r_esp+0x94u), 0x0u);
    /* 00500632: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00500637: mov dword ptr [esp + 0x98], 0x3f800000 */ W32((u32)(r_esp+0x98u), 0x3f800000u);
    /* 00500642: mov dword ptr [esp + 0x9c], 0x3f800000 */ W32((u32)(r_esp+0x9cu), 0x3f800000u);
    /* 0050064d: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x500652u); f_0082b438();
    /* 00500652: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00500657: lea ecx, [esp + 0x84] */ r_ecx = (u32)(r_esp+0x84u);
    /* 0050065e: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x500663u); f_0082b440();
    /* 00500663: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x500668u); f_004ac444();
    /* 00500668: mov eax, dword ptr [ebx + 0x90] */ r_eax = R32((u32)(r_ebx+0x90u));
    /* 0050066e: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00500672: mov esi, 1 */ r_esi = 0x1u;
    /* 00500677: mov edi, eax */ r_edi = r_eax;
L_00500679:; BB(0x00500679);
    /* 00500679: fld dword ptr [0x91eeac] */ FPUSH(R_F32((u32)(0x91eeacu)));
    /* 0050067f: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 00500683: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00500685: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500687: fmul dword ptr [edi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0xcu));
    /* 0050068a: fadd dword ptr [0x91eecc] */ ST(0) = ST(0) + R_F32((u32)(0x91eeccu));
    /* 00500690: fld dword ptr [0x91eeec] */ FPUSH(R_F32((u32)(0x91eeecu)));
    /* 00500696: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500698: fmul dword ptr [edi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x8u));
    /* 0050069b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0050069d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0050069f: and ebx, 0xffffff */ {  u32 a = r_ebx; u32 b = 0xffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005006a5: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 005006a9: fld dword ptr [edi + 0x10] */ FPUSH(R_F32((u32)(r_edi+0x10u)));
    /* 005006ac: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 005006ae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005006b0: fmul dword ptr [0x91eed4] */ ST(0) = ST(0) * R_F32((u32)(0x91eed4u));
    /* 005006b6: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 005006b9: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 005006bb: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 005006bf: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005006c1: fadd dword ptr [esp + 0x58] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x58u));
    /* 005006c5: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005006c7: fadd dword ptr [esp + 0x5c] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x5cu));
    /* 005006cb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 005006cd: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 005006d1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 005006d3: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 005006d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005006d8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005006dd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005006df: jae 0x5006e3 */ if (!fC) goto L_005006e3;
L_005006e1:; BB(0x005006e1);
    /* 005006e1: fst st(1) */ ST(1) = ST(0);
L_005006e3:; BB(0x005006e3);
    /* 005006e3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005006e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005006e7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005006ea: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005006ee: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005006f3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005006f7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005006fb: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 005006ff: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00500702: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00500706: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 0050070a: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050070d: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0050070f: or ebx, 0xff0000 */ {  u32 a = r_ebx; u32 b = 0xff0000u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00500715: or ebx, 0xff00 */ {  u32 a = r_ebx; u32 b = 0xff00u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0050071b: or ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00500721: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x500726u); f_0082bb30();
    /* 00500726: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00500728: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0050072b: mov ecx, dword ptr [edx*8 + 0xa1032c] */ r_ecx = R32((u32)(r_edx*8+0xa1032cu));
    /* 00500732: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x500737u); f_00829cc8();
    /* 00500737: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00500739: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 0050073c: mov ecx, dword ptr [edx*8 + 0xa10330] */ r_ecx = R32((u32)(r_edx*8+0xa10330u));
    /* 00500743: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00500748: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x50074du); f_0082bb60();
    /* 0050074d: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 00500751: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 00500753: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00500757: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 0050075b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0050075d: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00500761: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 00500765: mov dword ptr [esp + 0xb0], 0 */ W32((u32)(r_esp+0xb0u), 0x0u);
    /* 00500770: lea edx, [edx + edx*4] */ r_edx = (u32)(r_edx+r_edx*4);
    /* 00500773: fld dword ptr [edx*8 + 0xa1033c] */ FPUSH(R_F32((u32)(r_edx*8+0xa1033cu)));
    /* 0050077a: fld dword ptr [edx*8 + 0xa10340] */ FPUSH(R_F32((u32)(r_edx*8+0xa10340u)));
    /* 00500781: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00500783: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00500785: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 00500787: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500789: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0050078b: fsub st(5) */ ST(0) = ST(0) - ST(5);
    /* 0050078d: fstp dword ptr [esp + 0xa0] */ W_F32((u32)(r_esp+0xa0u), ST(0)); FPOP();
    /* 00500794: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00500796: faddp st(3) */ ST(3) = ST(3) + ST(0); FPOP();
    /* 00500798: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050079a: fstp dword ptr [esp + 0xa8] */ W_F32((u32)(r_esp+0xa8u), ST(0)); FPOP();
    /* 005007a1: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 005007a3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005007a5: fstp dword ptr [esp + 0xa4] */ W_F32((u32)(r_esp+0xa4u), ST(0)); FPOP();
    /* 005007ac: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005007ae: fstp dword ptr [esp + 0xac] */ W_F32((u32)(r_esp+0xacu), ST(0)); FPOP();
    /* 005007b5: mov dword ptr [esp + 0xb4], 0 */ W32((u32)(r_esp+0xb4u), 0x0u);
    /* 005007c0: mov dword ptr [esp + 0xb8], 0x3f800000 */ W32((u32)(r_esp+0xb8u), 0x3f800000u);
    /* 005007cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005007cd: mov dword ptr [esp + 0xbc], 0x3f800000 */ W32((u32)(r_esp+0xbcu), 0x3f800000u);
    /* 005007d8: call 0x82b438 */ r_esp -= 4; W32(r_esp, 0x5007ddu); f_0082b438();
    /* 005007dd: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005007e2: lea ecx, [esp + 0xa4] */ r_ecx = (u32)(r_esp+0xa4u);
    /* 005007e9: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x5007eeu); f_0082b440();
    /* 005007ee: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x5007f3u); f_004ac444();
    /* 005007f3: add edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005007f6: mov edx, esi */ r_edx = r_esi;
    /* 005007f8: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005007fb: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005007fe: jl 0x500679 */ if ((fS!=fO)) goto L_00500679;
L_00500804:; BB(0x00500804);
    /* 00500804: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00500808: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x50080du); f_0082f500();
L_0050080d:; BB(0x0050080d);
    /* 0050080d: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x500812u); f_0082dab0();
L_00500812:; BB(0x00500812);
    /* 00500812: add esp, 0xc0 */ {  u32 a = r_esp; u32 b = 0xc0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00500818: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500819: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050081a: ret  */ FN_RET(0x005002b8); r_esp += 4; return;
}

void f_0050081c(void) /* sub_50081C */
{
    FN_ENTER(0x0050081c);
    /* 0050081c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050081d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0050081f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00500825: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x50082au); f_0068d5a8();
    /* 0050082a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050082b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050082d: je 0x500848 */ if (fZ) goto L_00500848;
L_0050082f:; BB(0x0050082f);
    /* 0050082f: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00500832: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00500835: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500837: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x50083cu); f_007a9180();
    /* 0050083c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0050083f: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 00500843: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00500845: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00500846: jae 0x50084e */ if (!fC) goto L_0050084e;
L_00500848:; BB(0x00500848);
    /* 00500848: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050084a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0050084b: ret 4 */ FN_RET(0x0050081c); r_esp += 8; return;
L_0050084e:; BB(0x0050084e);
    /* 0050084e: mov eax, 1 */ r_eax = 0x1u;
    /* 00500853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500854: ret 4 */ FN_RET(0x0050081c); r_esp += 8; return;
}

void f_00500858(void)
{
    FN_ENTER(0x00500858);
    /* 00500858: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500859: mov ebp, esp */ r_ebp = r_esp;
    /* 0050085b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050085d: push 0x8d3540 */ { u32 v = 0x8d3540u; r_esp -= 4; W32(r_esp, v); }
    /* 00500862: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00500868: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500869: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00500870: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00500873: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00500876: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00500879: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050087c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050087f: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00500884: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050088b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x500890u); f_005caba4();
    /* 00500890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500891: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00500894: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500896: je 0x5008cf */ if (fZ) goto L_005008cf;
L_00500898:; BB(0x00500898);
    /* 00500898: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0050089f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005008a6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005008a9: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 005008af: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005008b2: call 0x5008d4 */ r_esp -= 4; W32(r_esp, 0x5008b7u); f_005008d4();
    /* 005008b7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005008ba: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005008c1:; BB(0x005008c1);
    /* 005008c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005008c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005008cb: mov esp, ebp */ r_esp = r_ebp;
    /* 005008cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005008ce: ret  */ FN_RET(0x00500858); r_esp += 4; return;
L_005008cf:; BB(0x005008cf);
    /* 005008cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005008d1: jmp 0x5008c1 */ goto L_005008c1;
}

void f_005008d4(void) /* sub_5008D4 */
{
    FN_ENTER(0x005008d4);
    /* 005008d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005008d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005008d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005008d9: push 0x8d355c */ { u32 v = 0x8d355cu; r_esp -= 4; W32(r_esp, v); }
    /* 005008de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005008e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005008e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005008ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005008ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005008f2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005008f5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005008f8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005008fb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005008fe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00500901: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00500904: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00500907: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x50090cu); f_007ba278();
    /* 0050090c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00500913: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00500916: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00500919: mov dword ptr [ecx], 0xafe538 */ W32((u32)(r_ecx), 0xafe538u);
    /* 0050091f: mov eax, dword ptr [0x9b9470] */ r_eax = R32((u32)(0x9b9470u));
    /* 00500924: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00500925: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00500928: call dword ptr [0xafe54c] */ { u32 t = R32((u32)(0xafe54cu)); r_esp -= 4; W32(r_esp, 0x50092eu); call_ind(t); }
    /* 0050092e: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00500931: mov dword ptr [eax + 0x90], 0x9b9380 */ W32((u32)(r_eax+0x90u), 0x9b9380u);
    /* 0050093b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050093e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00500945: mov esp, ebp */ r_esp = r_ebp;
    /* 00500947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500948: ret 8 */ FN_RET(0x005008d4); r_esp += 12; return;
}

void f_0050094c(void) /* sub_50094C */
{
    FN_ENTER(0x0050094c);
    /* 0050094c: mov dword ptr [0xa72820], 0x3f800000 */ W32((u32)(0xa72820u), 0x3f800000u);
    /* 00500956: mov dword ptr [0xa72824], 0x41000000 */ W32((u32)(0xa72824u), 0x41000000u);
    /* 00500960: mov dword ptr [0xa72828], 0x3fc00000 */ W32((u32)(0xa72828u), 0x3fc00000u);
    /* 0050096a: ret  */ FN_RET(0x0050094c); r_esp += 4; return;
}

void f_0050096c(void) /* sub_50096C */
{
    FN_ENTER(0x0050096c);
    /* 0050096c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050096d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050096f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00500971: call 0x800cf0 */ r_esp -= 4; W32(r_esp, 0x500976u); f_00800cf0();
    /* 00500976: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050097a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050097c: jne 0x500982 */ if (!fZ) goto L_00500982;
L_0050097e:; BB(0x0050097e);
    /* 0050097e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050097f: ret 4 */ FN_RET(0x0050096c); r_esp += 8; return;
L_00500982:; BB(0x00500982);
    /* 00500982: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500983: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x500988u); f_00857e98();
    /* 00500988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500989: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050098a: ret 4 */ FN_RET(0x0050096c); r_esp += 8; return;
}

void f_00500990(void) /* sub_500990 */
{
    FN_ENTER(0x00500990);
    /* 00500990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500991: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00500993: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00500995: call 0x5009b4 */ r_esp -= 4; W32(r_esp, 0x50099au); f_005009b4();
    /* 0050099a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050099e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005009a0: jne 0x5009a6 */ if (!fZ) goto L_005009a6;
L_005009a2:; BB(0x005009a2);
    /* 005009a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005009a3: ret 4 */ FN_RET(0x00500990); r_esp += 8; return;
L_005009a6:; BB(0x005009a6);
    /* 005009a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005009a7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5009acu); f_005c2f74();
    /* 005009ac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005009ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005009ae: ret 4 */ FN_RET(0x00500990); r_esp += 8; return;
}

void f_005009b4(void) /* sub_5009B4 */
{
    FN_ENTER(0x005009b4);
    /* 005009b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005009b5: mov ebp, esp */ r_ebp = r_esp;
    /* 005009b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005009b9: push 0x8d3578 */ { u32 v = 0x8d3578u; r_esp -= 4; W32(r_esp, v); }
    /* 005009be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005009c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005009c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005009cc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005009cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005009d2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005009d5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005009d8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005009db: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005009de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005009e5: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005009e8: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 005009eb: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 005009ee: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005009f0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005009f2: mov dword ptr [ebx], 0xafe5c0 */ W32((u32)(r_ebx), 0xafe5c0u);
    /* 005009f8: mov edx, dword ptr [0xaafca4] */ r_edx = R32((u32)(0xaafca4u));
    /* 005009fe: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 00500a01: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00500a03: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00500a06: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500a08: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500a0b: mov dword ptr [edi + edx + 8], esi */ W32((u32)(r_edi+r_edx+0x8u), r_esi);
    /* 00500a0f: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00500a12: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 00500a14: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500a16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500a18: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00500a1b: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00500a1d: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00500a20: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500a23: mov dword ptr [ebx + esi + 4], edx */ W32((u32)(r_ebx+r_esi+0x4u), r_edx);
    /* 00500a27: mov edx, dword ptr [ecx + 0x20] */ r_edx = R32((u32)(r_ecx+0x20u));
    /* 00500a2a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500a2c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500a2e: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00500a31: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00500a33: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00500a35: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00500a38: mov dword ptr [edx + ebx], eax */ W32((u32)(r_edx+r_ebx), r_eax);
    /* 00500a3b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500a3e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00500a41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500a43: je 0x500a4f */ if (fZ) goto L_00500a4f;
L_00500a45:; BB(0x00500a45);
    /* 00500a45: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00500a47: call 0x50096c */ r_esp -= 4; W32(r_esp, 0x500a4cu); f_0050096c();
    /* 00500a4c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00500a4f:; BB(0x00500a4f);
    /* 00500a4f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00500a56: mov ecx, eax */ r_ecx = r_eax;
    /* 00500a58: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x500a5du); f_008171e8();
    /* 00500a5d: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00500a60: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00500a63: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00500a66: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00500a69: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00500a70: mov esp, ebp */ r_esp = r_ebp;
    /* 00500a72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500a73: ret  */ FN_RET(0x005009b4); r_esp += 4; return;
}

void f_00500a74(void) /* sub_500A74 */
{
    FN_ENTER(0x00500a74);
    /* 00500a74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500a75: mov ebp, esp */ r_ebp = r_esp;
    /* 00500a77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00500a79: push 0x8d35ae */ { u32 v = 0x8d35aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00500a7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00500a84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500a85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00500a8c: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00500a8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00500a92: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00500a95: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00500a98: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00500a9b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00500a9e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00500aa1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00500aa4: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00500aa7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00500aaa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00500aad: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00500ab0: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00500ab3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x500ab8u); f_008193cc();
    /* 00500ab8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00500abf: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500ac2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00500ac5: mov dword ptr [ecx], 0xafe5c0 */ W32((u32)(r_ecx), 0xafe5c0u);
    /* 00500acb: mov eax, dword ptr [0x9b9480] */ r_eax = R32((u32)(0x9b9480u));
    /* 00500ad0: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00500ad7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00500ada: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00500add: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 00500adf: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x500ae4u); f_008581c5();
    /* 00500ae4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00500ae7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00500aea: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00500aed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500aef: je 0x500baf */ if (fZ) goto L_00500baf;
L_00500af5:; BB(0x00500af5);
    /* 00500af5: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00500afc: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00500b03: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500b06: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00500b09: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00500b0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500b0d: call 0x800cc8 */ r_esp -= 4; W32(r_esp, 0x500b12u); f_00800cc8();
    /* 00500b12: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00500b19:; BB(0x00500b19);
    /* 00500b19: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500b1c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00500b1f: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00500b22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00500b29: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00500b2c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500b2f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00500b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500b33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00500b34: call 0x800d0c */ r_esp -= 4; W32(r_esp, 0x500b39u); f_00800d0c();
    /* 00500b39: mov edi, dword ptr [0xaafca4] */ r_edi = R32((u32)(0xaafca4u));
    /* 00500b3f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500b42: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00500b45: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 00500b48: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00500b4a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00500b4c: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00500b4f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00500b51: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00500b54: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00500b56: mov ebx, dword ptr [ebx + eax + 8] */ r_ebx = R32((u32)(r_ebx+r_eax+0x8u));
    /* 00500b5a: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00500b5d: mov dword ptr [edx + 0x34], ebx */ W32((u32)(r_edx+0x34u), r_ebx);
    /* 00500b60: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00500b62: mov ebx, dword ptr [ebx + eax + 4] */ r_ebx = R32((u32)(r_ebx+r_eax+0x4u));
    /* 00500b66: mov dword ptr [edx + 0x30], ebx */ W32((u32)(r_edx+0x30u), r_ebx);
    /* 00500b69: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00500b6b: mov ebx, dword ptr [ebx + eax] */ r_ebx = R32((u32)(r_ebx+r_eax));
    /* 00500b6e: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 00500b71: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 00500b74: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00500b76: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 00500b79: mov dword ptr [ebx + eax + 8], edx */ W32((u32)(r_ebx+r_eax+0x8u), r_edx);
    /* 00500b7d: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500b80: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 00500b83: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00500b85: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00500b88: mov dword ptr [ebx + eax + 4], edx */ W32((u32)(r_ebx+r_eax+0x4u), r_edx);
    /* 00500b8c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500b8f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00500b92: mov edx, dword ptr [edx + 0x24] */ r_edx = R32((u32)(r_edx+0x24u));
    /* 00500b95: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00500b97: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00500b99: mov dword ptr [ecx + eax], edx */ W32((u32)(r_ecx+r_eax), r_edx);
    /* 00500b9c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00500b9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00500ba2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00500ba9: mov esp, ebp */ r_esp = r_ebp;
    /* 00500bab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500bac: ret 0x10 */ FN_RET(0x00500a74); r_esp += 20; return;
L_00500baf:; BB(0x00500baf);
    /* 00500baf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00500bb1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00500bb4: jmp 0x500b19 */ goto L_00500b19;
}

void f_00500bbc(void) /* sub_500BBC */
{
    FN_ENTER(0x00500bbc);
    /* 00500bbc: mov ecx, dword ptr [ecx + 0x1c] */ r_ecx = R32((u32)(r_ecx+0x1cu));
    /* 00500bbf: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00500bc1: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x500bc4u); call_ind(t); }
    /* 00500bc4: ret  */ FN_RET(0x00500bbc); r_esp += 4; return;
}

void f_00500bc8(void) /* sub_500BC8 */
{
    FN_ENTER(0x00500bc8);
    /* 00500bc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500bc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00500bcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00500bcd: call 0x500bec */ r_esp -= 4; W32(r_esp, 0x500bd2u); f_00500bec();
    /* 00500bd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00500bd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500bd8: jne 0x500bde */ if (!fZ) goto L_00500bde;
L_00500bda:; BB(0x00500bda);
    /* 00500bda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500bdb: ret 4 */ FN_RET(0x00500bc8); r_esp += 8; return;
L_00500bde:; BB(0x00500bde);
    /* 00500bde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500bdf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x500be4u); f_005c2f74();
    /* 00500be4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500be5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500be6: ret 4 */ FN_RET(0x00500bc8); r_esp += 8; return;
}

void f_00500bec(void) /* sub_500BEC */
{
    FN_ENTER(0x00500bec);
    /* 00500bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500bed: mov ebp, esp */ r_ebp = r_esp;
    /* 00500bef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00500bf1: push 0x8d35c8 */ { u32 v = 0x8d35c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00500bf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00500bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500bfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00500c04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00500c07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00500c0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00500c0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00500c10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00500c13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00500c16: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00500c1d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00500c20: mov eax, dword ptr [ecx + 0x358] */ r_eax = R32((u32)(r_ecx+0x358u));
    /* 00500c26: mov dword ptr [ecx], 0xafe680 */ W32((u32)(r_ecx), 0xafe680u);
    /* 00500c2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500c2e: je 0x500c3a */ if (fZ) goto L_00500c3a;
L_00500c30:; BB(0x00500c30);
    /* 00500c30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500c31: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x500c36u); f_005cdcc0();
    /* 00500c36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500c37: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_00500c3a:; BB(0x00500c3a);
    /* 00500c3a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00500c41: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x500c46u); f_00770660();
    /* 00500c46: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00500c49: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00500c50: mov esp, ebp */ r_esp = r_ebp;
    /* 00500c52: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500c53: ret  */ FN_RET(0x00500bec); r_esp += 4; return;
}

void f_00500c54(void) /* sub_500C54 */
{
    FN_ENTER(0x00500c54);
    /* 00500c54: fld dword ptr [0x91ef2c] */ FPUSH(R_F32((u32)(0x91ef2cu)));
    /* 00500c5a: ret 0x18 */ FN_RET(0x00500c54); r_esp += 28; return;
}

void f_00500c60(void) /* sub_500C60 */
{
    FN_ENTER(0x00500c60);
    /* 00500c60: fld dword ptr [0x91ef28] */ FPUSH(R_F32((u32)(0x91ef28u)));
    /* 00500c66: ret 8 */ FN_RET(0x00500c60); r_esp += 12; return;
}

void f_00500c6c(void) /* sub_500C6C */
{
    FN_ENTER(0x00500c6c);
    /* 00500c6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500c6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00500c6f: mov ecx, dword ptr [ebx + 0x360] */ r_ecx = R32((u32)(r_ebx+0x360u));
    /* 00500c75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500c77: je 0x500c9f */ if (fZ) goto L_00500c9f;
L_00500c79:; BB(0x00500c79);
    /* 00500c79: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x500c7eu); f_008173b4();
    /* 00500c7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500c80: je 0x500c9f */ if (fZ) goto L_00500c9f;
L_00500c82:; BB(0x00500c82);
    /* 00500c82: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00500c87: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00500c8c: mov ecx, dword ptr [ebx + 0x360] */ r_ecx = R32((u32)(r_ebx+0x360u));
    /* 00500c92: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00500c94: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x500c97u); call_ind(t); }
    /* 00500c97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500c99: je 0x500d3e */ if (fZ) goto L_00500d3e;
L_00500c9f:; BB(0x00500c9f);
    /* 00500c9f: mov ecx, dword ptr [0xa72838] */ r_ecx = R32((u32)(0xa72838u));
    /* 00500ca5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00500ca7: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x500cacu); f_005b8624();
    /* 00500cac: mov ecx, eax */ r_ecx = r_eax;
    /* 00500cae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x500cb3u); f_00829cc8();
    /* 00500cb3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x500cb8u); f_0082d7b0();
    /* 00500cb8: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00500cbb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x500cc0u); f_0082d838();
    /* 00500cc0: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00500cc3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00500cc5: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x500ccau); f_0082d8bc();
    /* 00500cca: lea ecx, [ebx + 0x68] */ r_ecx = (u32)(r_ebx+0x68u);
    /* 00500ccd: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x500cd2u); f_00831290();
    /* 00500cd2: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 00500cd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00500cda: jl 0x500d39 */ if ((fS!=fO)) goto L_00500d39;
L_00500cdc:; BB(0x00500cdc);
    /* 00500cdc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00500cdf: jle 0x500d31 */ if ((fZ||fS!=fO)) goto L_00500d31;
L_00500ce1:; BB(0x00500ce1);
    /* 00500ce1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500ce4: jne 0x500d39 */ if (!fZ) goto L_00500d39;
L_00500ce6:; BB(0x00500ce6);
    /* 00500ce6: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00500ceb: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00500cf0: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00500cf3: lea edx, [ebx + 0x348] */ r_edx = (u32)(r_ebx+0x348u);
    /* 00500cf9: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00500cfe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00500cff: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x500d04u); f_0082d710();
    /* 00500d04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500d05: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00500d08: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x500d0du); f_00831758();
    /* 00500d0d: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00500d12: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00500d17: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00500d1a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00500d1f: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x500d24u); f_0082d710();
    /* 00500d24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500d25: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00500d2a: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00500d2f: jmp 0x500d39 */ goto L_00500d39;
L_00500d31:; BB(0x00500d31);
    /* 00500d31: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 00500d34: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x500d39u); f_00831758();
L_00500d39:; BB(0x00500d39);
    /* 00500d39: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x500d3eu); f_0082da80();
L_00500d3e:; BB(0x00500d3e);
    /* 00500d3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500d3f: ret  */ FN_RET(0x00500c6c); r_esp += 4; return;
}

void f_00500d40(void) /* sub_500D40 */
{
    FN_ENTER(0x00500d40);
    /* 00500d40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00500d41: mov edi, ecx */ r_edi = r_ecx;
    /* 00500d43: movzx eax, word ptr [edi + 0x364] */ r_eax = (u32)R16((u32)(r_edi+0x364u));
    /* 00500d4a: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500d4f: je 0x500d58 */ if (fZ) goto L_00500d58;
L_00500d51:; BB(0x00500d51);
    /* 00500d51: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00500d56: jl 0x500d66 */ if ((fS!=fO)) goto L_00500d66;
L_00500d58:; BB(0x00500d58);
    /* 00500d58: mov dword ptr [edi + 0x360], 0 */ W32((u32)(r_edi+0x360u), 0x0u);
    /* 00500d62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00500d64: jmp 0x500d73 */ goto L_00500d73;
L_00500d66:; BB(0x00500d66);
    /* 00500d66: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500d67: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x500d6cu); f_007b4d18();
    /* 00500d6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00500d6d: mov dword ptr [edi + 0x360], eax */ W32((u32)(r_edi+0x360u), r_eax);
L_00500d73:; BB(0x00500d73);
    /* 00500d73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500d75: je 0x500db6 */ if (fZ) goto L_00500db6;
L_00500d77:; BB(0x00500d77);
    /* 00500d77: mov ecx, eax */ r_ecx = r_eax;
    /* 00500d79: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x500d7eu); f_008173b4();
    /* 00500d7e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500d80: je 0x500db6 */ if (fZ) goto L_00500db6;
L_00500d82:; BB(0x00500d82);
    /* 00500d82: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 00500d88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500d8a: je 0x500dc5 */ if (fZ) goto L_00500dc5;
L_00500d8c:; BB(0x00500d8c);
    /* 00500d8c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500d8f: je 0x500dad */ if (fZ) goto L_00500dad;
L_00500d91:; BB(0x00500d91);
    /* 00500d91: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500d94: jne 0x500d9f */ if (!fZ) goto L_00500d9f;
L_00500d96:; BB(0x00500d96);
    /* 00500d96: mov ecx, edi */ r_ecx = r_edi;
    /* 00500d98: call 0x500dd0 */ r_esp -= 4; W32(r_esp, 0x500d9du); f_00500dd0();
    /* 00500d9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00500d9e: ret  */ FN_RET(0x00500d40); r_esp += 4; return;
L_00500d9f:; BB(0x00500d9f);
    /* 00500d9f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00500da2: jne 0x500db4 */ if (!fZ) goto L_00500db4;
L_00500da4:; BB(0x00500da4);
    /* 00500da4: mov ecx, edi */ r_ecx = r_edi;
    /* 00500da6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x500dabu); f_0073d160();
    /* 00500dab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00500dac: ret  */ FN_RET(0x00500d40); r_esp += 4; return;
L_00500dad:; BB(0x00500dad);
    /* 00500dad: mov ecx, edi */ r_ecx = r_edi;
    /* 00500daf: call 0x500e08 */ r_esp -= 4; W32(r_esp, 0x500db4u); f_00500e08();
L_00500db4:; BB(0x00500db4);
    /* 00500db4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00500db5: ret  */ FN_RET(0x00500d40); r_esp += 4; return;
L_00500db6:; BB(0x00500db6);
    /* 00500db6: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00500dba: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500dbf: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00500dc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00500dc4: ret  */ FN_RET(0x00500d40); r_esp += 4; return;
L_00500dc5:; BB(0x00500dc5);
    /* 00500dc5: mov ecx, edi */ r_ecx = r_edi;
    /* 00500dc7: call 0x500ef4 */ r_esp -= 4; W32(r_esp, 0x500dccu); f_00500ef4();
    /* 00500dcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00500dcd: ret  */ FN_RET(0x00500d40); r_esp += 4; return;
}

void f_00500dd0(void) /* sub_500DD0 */
{
    FN_ENTER(0x00500dd0);
    /* 00500dd0: fld dword ptr [0x91ef1c] */ FPUSH(R_F32((u32)(0x91ef1cu)));
    /* 00500dd6: fadd dword ptr [ecx + 0x348] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x348u));
    /* 00500ddc: fcom dword ptr [0x91ef18] */ fx_compare(ST(0), R_F32((u32)(0x91ef18u))); 
    /* 00500de2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00500de4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00500de5: ja 0x500dff */ if ((!fC&&!fZ)) goto L_00500dff;
L_00500de7:; BB(0x00500de7);
    /* 00500de7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00500de9: mov dword ptr [ecx + 0x33c], 3 */ W32((u32)(r_ecx+0x33cu), 0x3u);
    /* 00500df3: mov eax, 0xbf800000 */ r_eax = 0xbf800000u;
    /* 00500df8: mov dword ptr [ecx + 0x348], eax */ W32((u32)(r_ecx+0x348u), r_eax);
    /* 00500dfe: ret  */ FN_RET(0x00500dd0); r_esp += 4; return;
L_00500dff:; BB(0x00500dff);
    /* 00500dff: fstp dword ptr [ecx + 0x348] */ W_F32((u32)(r_ecx+0x348u), ST(0)); FPOP();
    /* 00500e05: ret  */ FN_RET(0x00500dd0); r_esp += 4; return;
}

void f_00500e08(void) /* sub_500E08 */
{
    FN_ENTER(0x00500e08);
    /* 00500e08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00500e09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00500e0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500e0b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00500e0c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00500e0e: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 00500e11: mov edx, dword ptr [ebx + 0x360] */ r_edx = R32((u32)(r_ebx+0x360u));
    /* 00500e17: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00500e1a: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00500e1d: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00500e20: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500e25: jne 0x500e2f */ if (!fZ) goto L_00500e2f;
L_00500e27:; BB(0x00500e27);
    /* 00500e27: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500e29: jne 0x500eef */ if (!fZ) goto L_00500eef;
L_00500e2f:; BB(0x00500e2f);
    /* 00500e2f: mov dword ptr [ebx + 0x33c], 2 */ W32((u32)(r_ebx+0x33cu), 0x2u);
    /* 00500e39: push 0x153 */ { u32 v = 0x153u; r_esp -= 4; W32(r_esp, v); }
    /* 00500e3e: lea eax, [ebx + 0x368] */ r_eax = (u32)(r_ebx+0x368u);
    /* 00500e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500e45: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x500e4au); f_0050b510();
    /* 00500e4a: mov ebp, eax */ r_ebp = r_eax;
    /* 00500e4c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00500e4f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500e51: je 0x500e88 */ if (fZ) goto L_00500e88;
L_00500e53:; BB(0x00500e53);
    /* 00500e53: mov ecx, dword ptr [0xa96684] */ r_ecx = R32((u32)(0xa96684u));
    /* 00500e59: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00500e5b: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x500e60u); f_005b8610();
    /* 00500e60: mov edx, dword ptr [0xa96680] */ r_edx = R32((u32)(0xa96680u));
    /* 00500e66: movzx esi, word ptr [ebp + 0x2c] */ r_esi = (u32)R16((u32)(r_ebp+0x2cu));
    /* 00500e6a: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 00500e71: mov dword ptr [ebp + 0x50], eax */ W32((u32)(r_ebp+0x50u), r_eax);
    /* 00500e74: mov dword ptr [ebp + 0x60], 0x3f800000 */ W32((u32)(r_ebp+0x60u), 0x3f800000u);
    /* 00500e7b: mov dword ptr [ebp + 0x54], edx */ W32((u32)(r_ebp+0x54u), r_edx);
    /* 00500e7e: or esi, 0xffff0200 */ {  u32 a = r_esi; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00500e84: mov word ptr [ebp + 0x2c], si */ W16((u32)(r_ebp+0x2cu), (u16)r_esi);
L_00500e88:; BB(0x00500e88);
    /* 00500e88: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 00500e8a: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 00500e8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500e8e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x500e93u); f_0050b510();
    /* 00500e93: mov edi, eax */ r_edi = r_eax;
    /* 00500e95: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00500e98: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500e9a: je 0x500ee5 */ if (fZ) goto L_00500ee5;
L_00500e9c:; BB(0x00500e9c);
    /* 00500e9c: mov ecx, dword ptr [0xa72838] */ r_ecx = R32((u32)(0xa72838u));
    /* 00500ea2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00500ea4: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x500ea9u); f_005b8610();
    /* 00500ea9: mov esi, eax */ r_esi = r_eax;
    /* 00500eab: mov ecx, dword ptr [0xa72838] */ r_ecx = R32((u32)(0xa72838u));
    /* 00500eb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00500eb3: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x500eb8u); f_005b8624();
    /* 00500eb8: mov ebp, eax */ r_ebp = r_eax;
    /* 00500eba: mov ecx, dword ptr [0xa72838] */ r_ecx = R32((u32)(0xa72838u));
    /* 00500ec0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00500ec2: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x500ec7u); f_005b8638();
    /* 00500ec7: movzx edx, word ptr [edi + 0x2c] */ r_edx = (u32)R16((u32)(r_edi+0x2cu));
    /* 00500ecb: mov dword ptr [edi + 0x60], 0x3f800000 */ W32((u32)(r_edi+0x60u), 0x3f800000u);
    /* 00500ed2: mov dword ptr [edi + 0x50], esi */ W32((u32)(r_edi+0x50u), r_esi);
    /* 00500ed5: mov dword ptr [edi + 0x54], ebp */ W32((u32)(r_edi+0x54u), r_ebp);
    /* 00500ed8: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 00500edb: or edx, 0xffff0200 */ {  u32 a = r_edx; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500ee1: mov word ptr [edi + 0x2c], dx */ W16((u32)(r_edi+0x2cu), (u16)r_edx);
L_00500ee5:; BB(0x00500ee5);
    /* 00500ee5: mov dword ptr [ebx + 0xc0], 0 */ W32((u32)(r_ebx+0xc0u), 0x0u);
L_00500eef:; BB(0x00500eef);
    /* 00500eef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00500ef0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500ef1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00500ef2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00500ef3: ret  */ FN_RET(0x00500e08); r_esp += 4; return;
}

void f_00500ef4(void) /* sub_500EF4 */
{
    FN_ENTER(0x00500ef4);
    /* 00500ef4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500ef5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00500ef8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00500efa: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00500efd: add edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500f03: fld dword ptr [0x91ef0c] */ FPUSH(R_F32((u32)(0x91ef0cu)));
    /* 00500f09: fadd dword ptr [ebp + 0x70] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x70u));
    /* 00500f0c: fcom dword ptr [ebp + 0x340] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x340u))); 
    /* 00500f12: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00500f14: fst dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0));
    /* 00500f17: fst dword ptr [ebp + 0x6c] */ W_F32((u32)(r_ebp+0x6cu), ST(0));
    /* 00500f1a: fst dword ptr [ebp + 0x68] */ W_F32((u32)(r_ebp+0x68u), ST(0));
    /* 00500f1d: mov dword ptr [ebp + 0x60], edx */ W32((u32)(r_ebp+0x60u), r_edx);
    /* 00500f20: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00500f21: jbe 0x500f2d */ if ((fC||fZ)) goto L_00500f2d;
L_00500f23:; BB(0x00500f23);
    /* 00500f23: mov dword ptr [ebp + 0x33c], 1 */ W32((u32)(r_ebp+0x33cu), 0x1u);
L_00500f2d:; BB(0x00500f2d);
    /* 00500f2d: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 00500f32: mov ecx, dword ptr [ebp + 0x344] */ r_ecx = R32((u32)(r_ebp+0x344u));
    /* 00500f38: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00500f3b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00500f3d: mov dword ptr [ebp + 0x344], ecx */ W32((u32)(r_ebp+0x344u), r_ecx);
    /* 00500f43: mov eax, ecx */ r_eax = r_ecx;
    /* 00500f45: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00500f48: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00500f4a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00500f4d: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00500f4f: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00500f51: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00500f53: je 0x500f5c */ if (fZ) goto L_00500f5c;
L_00500f55:; BB(0x00500f55);
    /* 00500f55: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00500f57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00500f5a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500f5b: ret  */ FN_RET(0x00500ef4); r_esp += 4; return;
L_00500f5c:; BB(0x00500f5c);
    /* 00500f5c: fld dword ptr [0x91ef04] */ FPUSH(R_F32((u32)(0x91ef04u)));
    /* 00500f62: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00500f64: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00500f68: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00500f6d: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00500f74: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00500f7c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x500f81u); f_0082d990();
    /* 00500f81: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 00500f84: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00500f86: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00500f88: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x500f8du); f_0082d8bc();
    /* 00500f8d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00500f90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500f91: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00500f95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00500f97: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x500f9cu); f_0082eab8();
    /* 00500f9c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x500fa1u); f_0082da80();
    /* 00500fa1: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00500fa4: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00500fa7: mov edx, ebp */ r_edx = r_ebp;
    /* 00500fa9: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x500faeu); f_0082ebac();
    /* 00500fae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00500fb1: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00500fb3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00500fb5: push 0x12d */ { u32 v = 0x12du; r_esp -= 4; W32(r_esp, v); }
    /* 00500fba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500fbb: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x500fc0u); f_0050a984();
    /* 00500fc0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00500fc3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00500fc6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00500fc7: ret  */ FN_RET(0x00500ef4); r_esp += 4; return;
}

void f_00500fc8(void) /* sub_500FC8 */
{
    FN_ENTER(0x00500fc8);
    /* 00500fc8: mov ecx, dword ptr [0xa72838] */ r_ecx = R32((u32)(0xa72838u));
    /* 00500fce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00500fd0: je 0x500fe5 */ if (fZ) goto L_00500fe5;
L_00500fd2:; BB(0x00500fd2);
    /* 00500fd2: je 0x500fdb */ if (fZ) goto L_00500fdb;
L_00500fd4:; BB(0x00500fd4);
    /* 00500fd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00500fd6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x500fdbu); f_004066a8();
L_00500fdb:; BB(0x00500fdb);
    /* 00500fdb: mov dword ptr [0xa72838], 0 */ W32((u32)(0xa72838u), 0x0u);
L_00500fe5:; BB(0x00500fe5);
    /* 00500fe5: ret  */ FN_RET(0x00500fc8); r_esp += 4; return;
}

void f_00500fe8(void) /* sub_500FE8 */
{
    FN_ENTER(0x00500fe8);
    /* 00500fe8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00500fe9: mov ebp, esp */ r_ebp = r_esp;
    /* 00500feb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00500fed: push 0x8d35f0 */ { u32 v = 0x8d35f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00500ff2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00500ff8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00500ff9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00501000: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501003: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00501006: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00501009: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0050100c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0050100f: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x501014u); f_00807d60();
    /* 00501014: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501016: je 0x501057 */ if (fZ) goto L_00501057;
L_00501018:; BB(0x00501018);
    /* 00501018: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050101f: push 0x374 */ { u32 v = 0x374u; r_esp -= 4; W32(r_esp, v); }
    /* 00501024: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x501029u); f_005caba4();
    /* 00501029: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050102a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0050102d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050102f: je 0x501057 */ if (fZ) goto L_00501057;
L_00501031:; BB(0x00501031);
    /* 00501031: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00501038: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0050103f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501042: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00501045: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501048: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050104b: call 0x501068 */ r_esp -= 4; W32(r_esp, 0x501050u); f_00501068();
    /* 00501050: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00501057:; BB(0x00501057);
    /* 00501057: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050105a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00501061: mov esp, ebp */ r_esp = r_ebp;
    /* 00501063: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501064: ret  */ FN_RET(0x00500fe8); r_esp += 4; return;
}

