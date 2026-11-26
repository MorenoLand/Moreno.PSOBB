#include "protos.h"

void f_0085cd1d(void) /* __ms_p5_test_fdiv */
{
    FN_ENTER(0x0085cd1d);
    /* 0085cd1d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd1e: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cd20: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085cd23: fld qword ptr [0x998188] */ FPUSH(R_F64((u32)(0x998188u)));
    /* 0085cd29: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0085cd2c: fld qword ptr [0x998180] */ FPUSH(R_F64((u32)(0x998180u)));
    /* 0085cd32: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0085cd35: fld qword ptr [ebp - 0x10] */ FPUSH(R_F64((u32)(r_ebp+0xfffffff0u)));
    /* 0085cd38: fdiv qword ptr [ebp - 8] */ ST(0) = ST(0) / R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0085cd3b: fmul qword ptr [ebp - 8] */ ST(0) = ST(0) * R_F64((u32)(r_ebp+0xfffffff8u));
    /* 0085cd3e: fsubr qword ptr [ebp - 0x10] */ ST(0) = R_F64((u32)(r_ebp+0xfffffff0u)) - ST(0);
    /* 0085cd41: fstp qword ptr [ebp - 0x18] */ W_F64((u32)(r_ebp+0xffffffe8u), ST(0)); FPOP();
    /* 0085cd44: fld qword ptr [ebp - 0x18] */ FPUSH(R_F64((u32)(r_ebp+0xffffffe8u)));
    /* 0085cd47: fcomp qword ptr [0x998178] */ fx_compare(ST(0), R_F64((u32)(0x998178u))); FPOP();
    /* 0085cd4d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0085cd4f: test ah, 0x41 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x41u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cd52: jne 0x85cd59 */ if (!fZ) goto L_0085cd59;
L_0085cd54:; BB(0x0085cd54);
    /* 0085cd54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085cd56: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085cd57: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085cd58: ret  */ FN_RET(0x0085cd1d); r_esp += 4; return;
L_0085cd59:; BB(0x0085cd59);
    /* 0085cd59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085cd5b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085cd5c: ret  */ FN_RET(0x0085cd1d); r_esp += 4; return;
}

void f_0085cd5d(void) /* __ms_p5_mp_test_fdiv */
{
    FN_ENTER(0x0085cd5d);
    /* 0085cd5d: push 0x9981ac */ { u32 v = 0x9981acu; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd62: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x85cd68u); call_ind(t); }
    /* 0085cd68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cd6a: je 0x85cd81 */ if (fZ) goto L_0085cd81;
L_0085cd6c:; BB(0x0085cd6c);
    /* 0085cd6c: push 0x998190 */ { u32 v = 0x998190u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd72: call dword ptr [0x8f812c] */ { u32 t = R32((u32)(0x8f812cu)); r_esp -= 4; W32(r_esp, 0x85cd78u); call_ind(t); }
    /* 0085cd78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cd7a: je 0x85cd81 */ if (fZ) goto L_0085cd81;
L_0085cd7c:; BB(0x0085cd7c);
    /* 0085cd7c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd7e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85cd80u); call_ind(t); }
    /* 0085cd80: ret  */ FN_RET(0x0085cd5d); r_esp += 4; return;
L_0085cd81:; BB(0x0085cd81);
    /* 0085cd81: jmp 0x85cd1d */ f_0085cd1d(); return;
}

