#include "protos.h"

void f_007740e1(void)
{
    FN_ENTER(0x007740e1);
    /* 007740e1: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 007740e7: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007740eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007740ed: je 0x7740fa */ if (fZ) goto L_007740fa;
L_007740ef:; BB(0x007740ef);
    /* 007740ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007740f1: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007740f5: jmp 0x774e15 */ goto L_00774e15;
L_007740fa:; BB(0x007740fa);
    /* 007740fa: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007740fd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007740ff: call dword ptr [edx + 0xc4] */ { u32 t = R32((u32)(r_edx+0xc4u)); r_esp -= 4; W32(r_esp, 0x774105u); call_ind(t); }
    /* 00774105: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774107: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077410b: jmp 0x774e08 */ goto L_00774e08;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x007740e1); r_esp += 28; return;
}

void f_00774110(void)
{
    FN_ENTER(0x00774110);
    /* 00774110: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774116: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0077411a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077411c: je 0x774129 */ if (fZ) goto L_00774129;
L_0077411e:; BB(0x0077411e);
    /* 0077411e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774120: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774124: jmp 0x774e15 */ goto L_00774e15;
L_00774129:; BB(0x00774129);
    /* 00774129: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077412c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077412e: call dword ptr [edx + 0xc0] */ { u32 t = R32((u32)(r_edx+0xc0u)); r_esp -= 4; W32(r_esp, 0x774134u); call_ind(t); }
    /* 00774134: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774136: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077413a: jmp 0x774e08 */ goto L_00774e08;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774110); r_esp += 28; return;
}

void f_0077413f(void)
{
    FN_ENTER(0x0077413f);
    /* 0077413f: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774145: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774149: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077414b: je 0x774158 */ if (fZ) goto L_00774158;
L_0077414d:; BB(0x0077414d);
    /* 0077414d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077414f: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774153: jmp 0x774e15 */ goto L_00774e15;
L_00774158:; BB(0x00774158);
    /* 00774158: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077415b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077415d: call dword ptr [edx + 0xbc] */ { u32 t = R32((u32)(r_edx+0xbcu)); r_esp -= 4; W32(r_esp, 0x774163u); call_ind(t); }
    /* 00774163: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774165: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774169: jmp 0x774e08 */ goto L_00774e08;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x0077413f); r_esp += 28; return;
}

void f_0077416e(void)
{
    FN_ENTER(0x0077416e);
    /* 0077416e: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774174: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774178: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077417a: je 0x774187 */ if (fZ) goto L_00774187;
L_0077417c:; BB(0x0077417c);
    /* 0077417c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077417e: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774182: jmp 0x774e15 */ goto L_00774e15;
L_00774187:; BB(0x00774187);
    /* 00774187: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077418a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077418c: call dword ptr [edx + 0xb8] */ { u32 t = R32((u32)(r_edx+0xb8u)); r_esp -= 4; W32(r_esp, 0x774192u); call_ind(t); }
    /* 00774192: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774194: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774198: jmp 0x774e08 */ goto L_00774e08;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x0077416e); r_esp += 28; return;
}

void f_0077419d(void)
{
    FN_ENTER(0x0077419d);
    /* 0077419d: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 007741a3: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007741a6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007741aa: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007741b0: jne 0x7741bd */ if (!fZ) goto L_007741bd;
L_007741b2:; BB(0x007741b2);
    /* 007741b2: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007741b5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007741b7: call dword ptr [edx + 0x128] */ { u32 t = R32((u32)(r_edx+0x128u)); r_esp -= 4; W32(r_esp, 0x7741bdu); call_ind(t); }
L_007741bd:; BB(0x007741bd);
    /* 007741bd: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007741c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007741c3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007741c6: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007741ca: call dword ptr [edx + 0xd8] */ { u32 t = R32((u32)(r_edx+0xd8u)); r_esp -= 4; W32(r_esp, 0x7741d0u); call_ind(t); }
    /* 007741d0: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007741d4: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007741da: jg 0x774209 */ if ((!fZ&&fS==fO)) goto L_00774209;
L_007741dc:; BB(0x007741dc);
    /* 007741dc: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007741e2: jg 0x7741ef */ if ((!fZ&&fS==fO)) goto L_007741ef;
L_007741e4:; BB(0x007741e4);
    /* 007741e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007741e6: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007741ea: jmp 0x774e04 */ goto L_00774e04;
L_007741ef:; BB(0x007741ef);
    /* 007741ef: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007741f3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007741f6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007741f8: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x7741feu); call_ind(t); }
    /* 007741fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774200: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774204: jmp 0x774e04 */ goto L_00774e04;
L_00774209:; BB(0x00774209);
    /* 00774209: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077420b: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077420f: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x0077419d); r_esp += 28; return;
}

void f_00774214(void)
{
    FN_ENTER(0x00774214);
    /* 00774214: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 0077421a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077421d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774221: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774227: jne 0x774234 */ if (!fZ) goto L_00774234;
L_00774229:; BB(0x00774229);
    /* 00774229: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077422c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077422e: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x774234u); call_ind(t); }
L_00774234:; BB(0x00774234);
    /* 00774234: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00774238: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077423a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077423d: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00774241: call dword ptr [edx + 0xd4] */ { u32 t = R32((u32)(r_edx+0xd4u)); r_esp -= 4; W32(r_esp, 0x774247u); call_ind(t); }
    /* 00774247: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 0077424b: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774251: jg 0x774280 */ if ((!fZ&&fS==fO)) goto L_00774280;
L_00774253:; BB(0x00774253);
    /* 00774253: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774259: jg 0x774266 */ if ((!fZ&&fS==fO)) goto L_00774266;
L_0077425b:; BB(0x0077425b);
    /* 0077425b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077425d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774261: jmp 0x774e04 */ goto L_00774e04;
L_00774266:; BB(0x00774266);
    /* 00774266: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077426a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077426d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077426f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774275u); call_ind(t); }
    /* 00774275: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774277: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077427b: jmp 0x774e04 */ goto L_00774e04;
L_00774280:; BB(0x00774280);
    /* 00774280: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774282: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774286: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774214); r_esp += 28; return;
}

void f_0077428b(void)
{
    FN_ENTER(0x0077428b);
    /* 0077428b: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774291: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774294: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774298: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077429e: jne 0x7742ab */ if (!fZ) goto L_007742ab;
L_007742a0:; BB(0x007742a0);
    /* 007742a0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007742a3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007742a5: call dword ptr [edx + 0x124] */ { u32 t = R32((u32)(r_edx+0x124u)); r_esp -= 4; W32(r_esp, 0x7742abu); call_ind(t); }
L_007742ab:; BB(0x007742ab);
    /* 007742ab: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007742af: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007742b1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007742b4: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 007742b8: call dword ptr [edx + 0xd8] */ { u32 t = R32((u32)(r_edx+0xd8u)); r_esp -= 4; W32(r_esp, 0x7742beu); call_ind(t); }
    /* 007742be: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 007742c2: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007742c8: jg 0x7742f7 */ if ((!fZ&&fS==fO)) goto L_007742f7;
L_007742ca:; BB(0x007742ca);
    /* 007742ca: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007742d0: jg 0x7742dd */ if ((!fZ&&fS==fO)) goto L_007742dd;
L_007742d2:; BB(0x007742d2);
    /* 007742d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007742d4: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007742d8: jmp 0x774e04 */ goto L_00774e04;
L_007742dd:; BB(0x007742dd);
    /* 007742dd: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007742e1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007742e4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007742e6: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x7742ecu); call_ind(t); }
    /* 007742ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007742ee: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007742f2: jmp 0x774e04 */ goto L_00774e04;
L_007742f7:; BB(0x007742f7);
    /* 007742f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007742f9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007742fd: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x0077428b); r_esp += 28; return;
}

void f_00774302(void)
{
    FN_ENTER(0x00774302);
    /* 00774302: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774308: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077430b: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0077430f: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774315: jne 0x774322 */ if (!fZ) goto L_00774322;
L_00774317:; BB(0x00774317);
    /* 00774317: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077431a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077431c: call dword ptr [edx + 0x11c] */ { u32 t = R32((u32)(r_edx+0x11cu)); r_esp -= 4; W32(r_esp, 0x774322u); call_ind(t); }
L_00774322:; BB(0x00774322);
    /* 00774322: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00774326: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774328: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077432b: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0077432f: call dword ptr [edx + 0xd4] */ { u32 t = R32((u32)(r_edx+0xd4u)); r_esp -= 4; W32(r_esp, 0x774335u); call_ind(t); }
    /* 00774335: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00774339: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077433f: jg 0x77436e */ if ((!fZ&&fS==fO)) goto L_0077436e;
L_00774341:; BB(0x00774341);
    /* 00774341: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774347: jg 0x774354 */ if ((!fZ&&fS==fO)) goto L_00774354;
L_00774349:; BB(0x00774349);
    /* 00774349: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0077434b: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077434f: jmp 0x774e04 */ goto L_00774e04;
L_00774354:; BB(0x00774354);
    /* 00774354: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00774358: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077435b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077435d: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774363u); call_ind(t); }
    /* 00774363: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774365: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774369: jmp 0x774e04 */ goto L_00774e04;
L_0077436e:; BB(0x0077436e);
    /* 0077436e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774370: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774374: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774302); r_esp += 28; return;
}

void f_00774379(void)
{
    FN_ENTER(0x00774379);
    /* 00774379: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 0077437f: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774382: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774386: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774388: call dword ptr [edx + 0x108] */ { u32 t = R32((u32)(r_edx+0x108u)); r_esp -= 4; W32(r_esp, 0x77438eu); call_ind(t); }
    /* 0077438e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774390: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774394: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774379); r_esp += 28; return;
}

void f_00774399(void)
{
    FN_ENTER(0x00774399);
    /* 00774399: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 0077439f: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007743a6: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007743aa: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007743ad: jne 0x7743c5 */ if (!fZ) goto L_007743c5;
L_007743af:; BB(0x007743af);
    /* 007743af: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007743b2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007743b4: call dword ptr [edx + 0xd0] */ { u32 t = R32((u32)(r_edx+0xd0u)); r_esp -= 4; W32(r_esp, 0x7743bau); call_ind(t); }
    /* 007743ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007743bc: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007743c0: jmp 0x774e04 */ goto L_00774e04;
L_007743c5:; BB(0x007743c5);
    /* 007743c5: push dword ptr [esp + 0x78] */ { u32 v = R32((u32)(r_esp+0x78u)); r_esp -= 4; W32(r_esp, v); }
    /* 007743c9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007743cc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007743ce: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x7743d4u); call_ind(t); }
    /* 007743d4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007743d6: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007743da: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774399); r_esp += 28; return;
}

void f_007743df(void)
{
    FN_ENTER(0x007743df);
    /* 007743df: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007743e3: fmul dword ptr [0x978278] */ ST(0) = ST(0) * R_F32((u32)(0x978278u));
    /* 007743e9: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 007743ed: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 007743f1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007743f3: je 0x77441e */ if (fZ) goto L_0077441e;
L_007743f5:; BB(0x007743f5);
    /* 007743f5: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 007743f9: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007743fd: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774402: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774407: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077440b: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077440f: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774413: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774417: movsx edi, word ptr [esp + 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x30u));
    /* 0077441c: jmp 0x774454 */ goto L_00774454;
L_0077441e:; BB(0x0077441e);
    /* 0077441e: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 00774422: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774426: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0077442b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774430: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774434: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774438: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077443c: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774440: movsx edi, word ptr [esp + 0x30] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esp+0x30u));
    /* 00774445: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774446: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774448: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x77444du); f_007773d4();
    /* 0077444d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077444f: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x774454u); f_00775270();
L_00774454:; BB(0x00774454);
    /* 00774454: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774457: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077445d: jne 0x774487 */ if (!fZ) goto L_00774487;
L_0077445f:; BB(0x0077445f);
    /* 0077445f: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774466: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774469: je 0x774487 */ if (fZ) goto L_00774487;
L_0077446b:; BB(0x0077446b);
    /* 0077446b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077446f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774470: push 0x8fe828 */ { u32 v = 0x8fe828u; r_esp -= 4; W32(r_esp, v); }
    /* 00774475: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774477: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00774479: push 0xff00ff00 */ { u32 v = 0xff00ff00u; r_esp -= 4; W32(r_esp, v); }
    /* 0077447e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077447f: call 0x78a944 */ r_esp -= 4; W32(r_esp, 0x774484u); f_0078a944();
    /* 00774484: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00774487:; BB(0x00774487);
    /* 00774487: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 0077448d: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774491: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774493: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774497: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x007743df); r_esp += 28; return;
}

void f_0077449c(void)
{
    FN_ENTER(0x0077449c);
    /* 0077449c: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077449f: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007744a5: je 0x7744e2 */ if (fZ) goto L_007744e2;
L_007744a7:; BB(0x007744a7);
    /* 007744a7: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 007744ae: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007744b1: jne 0x7744e2 */ if (!fZ) goto L_007744e2;
L_007744b3:; BB(0x007744b3);
    /* 007744b3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007744b7: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007744bb: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007744c0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007744c5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007744c9: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007744cd: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007744d1: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007744d5: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007744d9: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007744dd: jmp 0x774e04 */ goto L_00774e04;
L_007744e2:; BB(0x007744e2);
    /* 007744e2: call 0x807db8 */ r_esp -= 4; W32(r_esp, 0x7744e7u); f_00807db8();
    /* 007744e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007744e9: je 0x77450f */ if (fZ) goto L_0077450f;
L_007744eb:; BB(0x007744eb);
    /* 007744eb: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 007744f1: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007744f4: je 0x774f8a */ if (fZ) goto L_00774f8a;
L_007744fa:; BB(0x007744fa);
    /* 007744fa: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774500: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774504: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774506: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077450a: jmp 0x774e04 */ goto L_00774e04;
L_0077450f:; BB(0x0077450f);
    /* 0077450f: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774512: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774518: jne 0x774525 */ if (!fZ) goto L_00774525;
L_0077451a:; BB(0x0077451a);
    /* 0077451a: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077451e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077451f: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x774524u); f_0050325c();
    /* 00774524: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00774525:; BB(0x00774525);
    /* 00774525: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 0077452b: movsx edi, word ptr [ebp + 0x2fc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2fcu));
    /* 00774532: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00774536: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 0077453a: fsubr dword ptr [esp + 0x14] */ ST(0) = R_F32((u32)(r_esp+0x14u)) - ST(0);
    /* 0077453e: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774541: fmul dword ptr [0x97826c] */ ST(0) = ST(0) * R_F32((u32)(0x97826cu));
    /* 00774547: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0077454b: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00774551: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774553: jne 0x7745e7 */ if (!fZ) goto L_007745e7;
L_00774559:; BB(0x00774559);
    /* 00774559: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 0077455d: fcomp dword ptr [esp + 0x4c] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x4cu))); FPOP();
    /* 00774561: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774563: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774564: jb 0x774595 */ if (fC) goto L_00774595;
L_00774566:; BB(0x00774566);
    /* 00774566: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0077456a: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0077456e: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774573: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774578: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077457c: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774580: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774584: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774588: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0077458c: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774590: jmp 0x774e08 */ goto L_00774e08;
L_00774595:; BB(0x00774595);
    /* 00774595: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774597: mov word ptr [ebp + 0x334], dx */ W16((u32)(r_ebp+0x334u), (u16)r_edx);
    /* 0077459e: lea esi, [ebp + 0x334] */ r_esi = (u32)(r_ebp+0x334u);
    /* 007745a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007745a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007745a7: call 0x770b74 */ r_esp -= 4; W32(r_esp, 0x7745acu); f_00770b74();
    /* 007745ac: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007745b0: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 007745b3: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007745b7: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007745bc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007745c1: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007745c5: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007745c9: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007745cd: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007745d1: or edx, 0xa00 */ {  u32 a = r_edx; u32 b = 0xa00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007745d7: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 007745db: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 007745df: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 007745e2: jmp 0x774e08 */ goto L_00774e08;
L_007745e7:; BB(0x007745e7);
    /* 007745e7: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007745eb: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007745ef: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007745f4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007745f9: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007745fd: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774601: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774605: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774609: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0077460d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774611: jmp 0x774e15 */ goto L_00774e15;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x0077449c); r_esp += 28; return;
L_00774f8a:; BB(0x00774f8a);
    /* 00774f8a: movzx edx, word ptr [ebp + 0x2d8] */ r_edx = (u32)R16((u32)(r_ebp+0x2d8u));
    /* 00774f91: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774f97: jge 0x77450f */ if ((fS==fO)) goto L_0077450f;
L_00774f9d:; BB(0x00774f9d);
    /* 00774f9d: jmp 0x7744fa */ goto L_007744fa;
}

void f_00774616(void)
{
    FN_ENTER(0x00774616);
    /* 00774616: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774619: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077461f: je 0x77465c */ if (fZ) goto L_0077465c;
L_00774621:; BB(0x00774621);
    /* 00774621: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774628: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077462b: jne 0x77465c */ if (!fZ) goto L_0077465c;
L_0077462d:; BB(0x0077462d);
    /* 0077462d: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774631: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774635: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0077463a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077463f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774643: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774647: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077464b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0077464f: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774653: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774657: jmp 0x774e04 */ goto L_00774e04;
L_0077465c:; BB(0x0077465c);
    /* 0077465c: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774660: movsx edi, word ptr [ebp + 0x2fe] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2feu));
    /* 00774667: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00774669: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0077466c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077466e: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00774672: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00774676: fmul dword ptr [0x978270] */ ST(0) = ST(0) * R_F32((u32)(0x978270u));
    /* 0077467c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0077467e: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774682: je 0x7746b0 */ if (fZ) goto L_007746b0;
L_00774684:; BB(0x00774684);
    /* 00774684: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774688: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0077468c: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774691: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774696: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077469a: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077469e: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007746a2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007746a6: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 007746aa: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 007746ae: jmp 0x7746fa */ goto L_007746fa;
L_007746b0:; BB(0x007746b0);
    /* 007746b0: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007746b4: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007746b8: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007746bd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007746c2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007746c6: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007746ca: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007746ce: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007746d2: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 007746d6: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007746da: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 007746dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007746de: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007746e0: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x7746e5u); f_00777414();
    /* 007746e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007746e7: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x7746ecu); f_00775270();
    /* 007746ec: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 007746ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007746f1: jle 0x774fa2 */ if ((fZ||fS!=fO)) goto L_00774fa2;
L_007746f7:; BB(0x007746f7);
    /* 007746f7: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_007746fa:; BB(0x007746fa);
    /* 007746fa: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774700: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00774703: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774704: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00774708: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0077470b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077470d: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x774712u); f_0077529c();
    /* 00774712: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00774718: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 0077471b: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077471e: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774724: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 0077472a: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_00774730:; BB(0x00774730);
    /* 00774730: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774734: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774735: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x77473au); f_0050325c();
    /* 0077473a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0077473b: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077473f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774740: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774742: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x774747u); f_007752dc();
    /* 00774747: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 0077474b: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0077474f: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774752: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774753: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00774756: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x77475bu); f_0077535c();
    /* 0077475b: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774616); r_esp += 28; return;
L_00774fa2:; BB(0x00774fa2);
    /* 00774fa2: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774fa5: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774fab: jmp 0x7746fa */ goto L_007746fa;
}

void f_00774760(void)
{
    FN_ENTER(0x00774760);
    /* 00774760: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774763: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774769: je 0x7747a6 */ if (fZ) goto L_007747a6;
L_0077476b:; BB(0x0077476b);
    /* 0077476b: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774772: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774775: jne 0x7747a6 */ if (!fZ) goto L_007747a6;
L_00774777:; BB(0x00774777);
    /* 00774777: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 0077477b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0077477f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774784: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774789: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0077478d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774791: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774795: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774799: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0077479d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 007747a1: jmp 0x774e04 */ goto L_00774e04;
L_007747a6:; BB(0x007747a6);
    /* 007747a6: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007747aa: movsx edi, word ptr [ebp + 0x2f8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f8u));
    /* 007747b1: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 007747b3: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007747b6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007747b8: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 007747bc: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 007747c0: fmul dword ptr [0x978270] */ ST(0) = ST(0) * R_F32((u32)(0x978270u));
    /* 007747c6: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007747c8: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007747cc: je 0x7747fa */ if (fZ) goto L_007747fa;
L_007747ce:; BB(0x007747ce);
    /* 007747ce: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007747d2: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007747d6: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007747db: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007747e0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007747e4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007747e8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007747ec: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007747f0: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 007747f4: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 007747f8: jmp 0x774844 */ goto L_00774844;
L_007747fa:; BB(0x007747fa);
    /* 007747fa: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007747fe: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774802: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774807: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0077480c: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774810: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774814: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774818: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0077481c: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774820: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774824: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774827: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774828: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077482a: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x77482fu); f_00777414();
    /* 0077482f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774831: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x774836u); f_00775270();
    /* 00774836: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00774839: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0077483b: jle 0x774fbf */ if ((fZ||fS!=fO)) goto L_00774fbf;
L_00774841:; BB(0x00774841);
    /* 00774841: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00774844:; BB(0x00774844);
    /* 00774844: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077484a: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 0077484d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077484e: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00774852: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774855: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774857: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x77485cu); f_0077529c();
    /* 0077485c: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00774862: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774869: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0077486c: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00774872: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774875: je 0x774886 */ if (fZ) goto L_00774886;
L_00774877:; BB(0x00774877);
    /* 00774877: mov eax, ebx */ r_eax = r_ebx;
    /* 00774879: call 0x77524c */ r_esp -= 4; W32(r_esp, 0x77487eu); f_0077524c();
    /* 0077487e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774880: je 0x774916 */ if (fZ) goto L_00774916;
L_00774886:; BB(0x00774886);
    /* 00774886: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 0077488a: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774890: jl 0x77489e */ if ((fS!=fO)) goto L_0077489e;
L_00774892:; BB(0x00774892);
    /* 00774892: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00774896: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0077489c: jl 0x7748c7 */ if ((fS!=fO)) goto L_007748c7;
L_0077489e:; BB(0x0077489e);
    /* 0077489e: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 007748a4: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007748a7: je 0x774fb0 */ if (fZ) goto L_00774fb0;
L_007748ad:; BB(0x007748ad);
    /* 007748ad: fld dword ptr [0x978260] */ FPUSH(R_F32((u32)(0x978260u)));
    /* 007748b3: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_007748b7:; BB(0x007748b7);
    /* 007748b7: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 007748bb: fmul dword ptr [0x978274] */ ST(0) = ST(0) * R_F32((u32)(0x978274u));
    /* 007748c1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007748c5: jmp 0x7748fb */ goto L_007748fb;
L_007748c7:; BB(0x007748c7);
    /* 007748c7: movsx edx, word ptr [ebp + 0x2f8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f8u));
    /* 007748ce: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 007748d2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 007748d6: fdiv dword ptr [0x978264] */ ST(0) = ST(0) / R_F32((u32)(0x978264u));
    /* 007748dc: fadd dword ptr [0x978268] */ ST(0) = ST(0) + R_F32((u32)(0x978268u));
    /* 007748e2: fcom dword ptr [0x97827c] */ fx_compare(ST(0), R_F32((u32)(0x97827cu))); 
    /* 007748e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007748ea: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 007748ee: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007748ef: jae 0x7748fb */ if (!fC) goto L_007748fb;
L_007748f1:; BB(0x007748f1);
    /* 007748f1: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 007748f7: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_007748fb:; BB(0x007748fb);
    /* 007748fb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007748fd: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x774902u); f_007751b0();
    /* 00774902: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 00774906: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774908: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774909: jae 0x774916 */ if (!fC) goto L_00774916;
L_0077490b:; BB(0x0077490b);
    /* 0077490b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0077490e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774910: call dword ptr [edx + 0xcc] */ { u32 t = R32((u32)(r_edx+0xccu)); r_esp -= 4; W32(r_esp, 0x774916u); call_ind(t); }
L_00774916:; BB(0x00774916);
    /* 00774916: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0077491a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0077491b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077491d: call 0x775204 */ r_esp -= 4; W32(r_esp, 0x774922u); f_00775204();
    /* 00774922: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774925: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077492b: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_00774931:; BB(0x00774931);
    /* 00774931: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774935: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00774939: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 0077493c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0077493d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0077493f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00774940: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x774945u); f_0077535c();
    /* 00774945: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774760); r_esp += 28; return;
L_00774fb0:; BB(0x00774fb0);
    /* 00774fb0: fld dword ptr [0x97825c] */ FPUSH(R_F32((u32)(0x97825cu)));
    /* 00774fb6: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00774fba: jmp 0x7748b7 */ goto L_007748b7;
L_00774fbf:; BB(0x00774fbf);
    /* 00774fbf: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774fc2: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774fc8: jmp 0x774844 */ goto L_00774844;
}

void f_0077494a(void)
{
    FN_ENTER(0x0077494a);
    /* 0077494a: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0077494d: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774953: je 0x774990 */ if (fZ) goto L_00774990;
L_00774955:; BB(0x00774955);
    /* 00774955: movsx eax, word ptr [ebp + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 0077495c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0077495f: jne 0x774990 */ if (!fZ) goto L_00774990;
L_00774961:; BB(0x00774961);
    /* 00774961: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774965: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774969: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0077496e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774973: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774977: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 0077497b: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 0077497f: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774983: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774987: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 0077498b: jmp 0x774e04 */ goto L_00774e04;
L_00774990:; BB(0x00774990);
    /* 00774990: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774994: movsx eax, word ptr [ebp + 0x2fa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x2fau));
    /* 0077499b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0077499d: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007749a0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007749a2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 007749a6: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 007749aa: fmul dword ptr [0x978270] */ ST(0) = ST(0) * R_F32((u32)(0x978270u));
    /* 007749b0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 007749b2: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 007749b6: je 0x7749e4 */ if (fZ) goto L_007749e4;
L_007749b8:; BB(0x007749b8);
    /* 007749b8: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007749bc: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007749c0: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007749c5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007749ca: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007749ce: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007749d2: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 007749d6: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 007749da: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 007749de: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 007749e2: jmp 0x774a2e */ goto L_00774a2e;
L_007749e4:; BB(0x007749e4);
    /* 007749e4: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 007749e8: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 007749ec: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 007749f1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007749f6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 007749fa: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 007749fe: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774a02: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774a06: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774a0a: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774a0e: movsx edx, dx */ r_edx = (u32)(i32)(i16)(u16)r_edx;
    /* 00774a11: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774a12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774a14: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x774a19u); f_00777414();
    /* 00774a19: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774a1b: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x774a20u); f_00775270();
    /* 00774a20: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00774a23: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00774a25: jle 0x774fef */ if ((fZ||fS!=fO)) goto L_00774fef;
L_00774a2b:; BB(0x00774a2b);
    /* 00774a2b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00774a2e:; BB(0x00774a2e);
    /* 00774a2e: fld dword ptr [0x978258] */ FPUSH(R_F32((u32)(0x978258u)));
    /* 00774a34: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 00774a38: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774a3e: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00774a40: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774a42: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774a48: fld dword ptr [0x97825c] */ FPUSH(R_F32((u32)(0x97825cu)));
    /* 00774a4e: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00774a51: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00774a57: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774a5a: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00774a60: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00774a64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774a65: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774a67: jbe 0x774a6b */ if ((fC||fZ)) goto L_00774a6b;
L_00774a69:; BB(0x00774a69);
    /* 00774a69: fst st(2) */ ST(2) = ST(0);
L_00774a6b:; BB(0x00774a6b);
    /* 00774a6b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774a6d: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00774a6f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00774a71: fadd dword ptr [0x978254] */ ST(0) = ST(0) + R_F32((u32)(0x978254u));
    /* 00774a77: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00774a79: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774a7b: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00774a7f: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774a85: jl 0x774a9b */ if ((fS!=fO)) goto L_00774a9b;
L_00774a87:; BB(0x00774a87);
    /* 00774a87: cmp edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774a8d: jge 0x774a9b */ if ((fS==fO)) goto L_00774a9b;
L_00774a8f:; BB(0x00774a8f);
    /* 00774a8f: movzx edx, word ptr [ebp + 0x1c] */ r_edx = (u32)R16((u32)(r_ebp+0x1cu));
    /* 00774a93: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00774a99: jl 0x774ad7 */ if ((fS!=fO)) goto L_00774ad7;
L_00774a9b:; BB(0x00774a9b);
    /* 00774a9b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774a9d: mov edx, dword ptr [0xa9cd68] */ r_edx = R32((u32)(0xa9cd68u));
    /* 00774aa3: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774aa6: je 0x774fcd */ if (fZ) goto L_00774fcd;
L_00774aac:; BB(0x00774aac);
    /* 00774aac: fld dword ptr [0x978244] */ FPUSH(R_F32((u32)(0x978244u)));
    /* 00774ab2: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00774ab6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00774ab8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774aba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774abb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774abd: jbe 0x774ac1 */ if ((fC||fZ)) goto L_00774ac1;
L_00774abf:; BB(0x00774abf);
    /* 00774abf: fst st(1) */ ST(1) = ST(0);
L_00774ac1:; BB(0x00774ac1);
    /* 00774ac1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774ac3: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00774ac7:; BB(0x00774ac7);
    /* 00774ac7: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00774acb: fmul dword ptr [0x978274] */ ST(0) = ST(0) * R_F32((u32)(0x978274u));
    /* 00774ad1: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00774ad5: jmp 0x774b0b */ goto L_00774b0b;
L_00774ad7:; BB(0x00774ad7);
    /* 00774ad7: movsx edx, word ptr [ebp + 0x2fa] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x2fau));
    /* 00774ade: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 00774ae2: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00774ae6: fdiv dword ptr [0x978264] */ ST(0) = ST(0) / R_F32((u32)(0x978264u));
    /* 00774aec: fadd dword ptr [0x978268] */ ST(0) = ST(0) + R_F32((u32)(0x978268u));
    /* 00774af2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00774af4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00774af6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00774af8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774afa: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00774afe: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774aff: jae 0x774b0b */ if (!fC) goto L_00774b0b;
L_00774b01:; BB(0x00774b01);
    /* 00774b01: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774b07: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
L_00774b0b:; BB(0x00774b0b);
    /* 00774b0b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774b0d: call 0x7751b0 */ r_esp -= 4; W32(r_esp, 0x774b12u); f_007751b0();
    /* 00774b12: fcomp dword ptr [esp + 0x40] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x40u))); FPOP();
    /* 00774b16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774b18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774b19: jae 0x774b3e */ if (!fC) goto L_00774b3e;
L_00774b1b:; BB(0x00774b1b);
    /* 00774b1b: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774b22: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774b25: je 0x774b32 */ if (fZ) goto L_00774b32;
L_00774b27:; BB(0x00774b27);
    /* 00774b27: mov eax, ebx */ r_eax = r_ebx;
    /* 00774b29: call 0x77524c */ r_esp -= 4; W32(r_esp, 0x774b2eu); f_0077524c();
    /* 00774b2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774b30: je 0x774b3e */ if (fZ) goto L_00774b3e;
L_00774b32:; BB(0x00774b32);
    /* 00774b32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774b33: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774b36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774b38: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x774b3eu); call_ind(t); }
L_00774b3e:; BB(0x00774b3e);
    /* 00774b3e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774b41: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774b47: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_00774b4d:; BB(0x00774b4d);
    /* 00774b4d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774b51: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774b52: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x774b57u); f_0050325c();
    /* 00774b57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00774b58: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774b5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774b5d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774b5f: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x774b64u); f_007752dc();
    /* 00774b64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774b68: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00774b6c: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774b6f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774b70: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774b72: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00774b73: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x774b78u); f_0077535c();
    /* 00774b78: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x0077494a); r_esp += 28; return;
L_00774fcd:; BB(0x00774fcd);
    /* 00774fcd: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00774fd1: fcomp dword ptr [0x978248] */ fx_compare(ST(0), R_F32((u32)(0x978248u))); FPOP();
    /* 00774fd7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00774fd9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00774fda: jbe 0x774aac */ if ((fC||fZ)) goto L_00774aac;
L_00774fe0:; BB(0x00774fe0);
    /* 00774fe0: fld dword ptr [0x978250] */ FPUSH(R_F32((u32)(0x978250u)));
    /* 00774fe6: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 00774fea: jmp 0x774ac7 */ goto L_00774ac7;
L_00774fef:; BB(0x00774fef);
    /* 00774fef: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774ff2: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774ff8: jmp 0x774a2e */ goto L_00774a2e;
}

void f_00774b7d(void)
{
    FN_ENTER(0x00774b7d);
    /* 00774b7d: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00774b80: test edx, 0x10000000 */ {  u32 a = r_edx; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774b86: je 0x774bc3 */ if (fZ) goto L_00774bc3;
L_00774b88:; BB(0x00774b88);
    /* 00774b88: movsx edi, word ptr [ebp + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774b8f: cmp edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774b92: jne 0x774bc3 */ if (!fZ) goto L_00774bc3;
L_00774b94:; BB(0x00774b94);
    /* 00774b94: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774b98: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774b9c: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774ba1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774ba6: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774baa: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774bae: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774bb2: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774bb6: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774bba: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774bbe: jmp 0x774e04 */ goto L_00774e04;
L_00774bc3:; BB(0x00774bc3);
    /* 00774bc3: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774bc7: movsx edi, word ptr [ebp + 0x2f6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+0x2f6u));
    /* 00774bce: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00774bd0: add edi, 0x64 */ {  u32 a = r_edi; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00774bd3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774bd5: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 00774bd9: fild dword ptr [esp + 0x38] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x38u)));
    /* 00774bdd: fmul dword ptr [0x978270] */ ST(0) = ST(0) * R_F32((u32)(0x978270u));
    /* 00774be3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00774be5: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774be9: je 0x774c17 */ if (fZ) goto L_00774c17;
L_00774beb:; BB(0x00774beb);
    /* 00774beb: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774bef: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774bf3: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774bf8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774bfd: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774c01: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774c05: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774c09: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774c0d: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00774c11: mov dword ptr [esp + 0x48], edi */ W32((u32)(r_esp+0x48u), r_edi);
    /* 00774c15: jmp 0x774c61 */ goto L_00774c61;
L_00774c17:; BB(0x00774c17);
    /* 00774c17: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774c1b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774c1f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774c24: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774c29: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774c2d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774c31: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774c35: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774c39: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774c3d: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774c41: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774c44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774c45: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774c47: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x774c4cu); f_00777414();
    /* 00774c4c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774c4e: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x774c53u); f_00775270();
    /* 00774c53: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00774c56: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00774c58: jle 0x774ffd */ if ((fZ||fS!=fO)) goto L_00774ffd;
L_00774c5e:; BB(0x00774c5e);
    /* 00774c5e: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
L_00774c61:; BB(0x00774c61);
    /* 00774c61: or edx, 0x200 */ {  u32 a = r_edx; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774c67: mov dword ptr [ebp + 0x30], edx */ W32((u32)(r_ebp+0x30u), r_edx);
    /* 00774c6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774c6b: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00774c6f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774c72: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774c74: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x774c79u); f_0077529c();
    /* 00774c79: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00774c7f: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00774c82: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774c85: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774c8b: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00774c91: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_00774c97:; BB(0x00774c97);
    /* 00774c97: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774c9b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774c9c: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x774ca1u); f_0050325c();
    /* 00774ca1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00774ca2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774ca6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774ca7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774ca9: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x774caeu); f_007752dc();
    /* 00774cae: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774cb2: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00774cb6: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774cb9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774cba: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00774cbd: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x774cc2u); f_0077535c();
    /* 00774cc2: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774b7d); r_esp += 28; return;
L_00774ffd:; BB(0x00774ffd);
    /* 00774ffd: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00775000: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00775006: jmp 0x774c61 */ goto L_00774c61;
}

void f_00774cc7(void)
{
    FN_ENTER(0x00774cc7);
    /* 00774cc7: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00774cca: test edi, 0x10000000 */ {  u32 a = r_edi; u32 b = 0x10000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774cd0: je 0x774d0d */ if (fZ) goto L_00774d0d;
L_00774cd2:; BB(0x00774cd2);
    /* 00774cd2: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774cd9: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774cdc: jne 0x774d0d */ if (!fZ) goto L_00774d0d;
L_00774cde:; BB(0x00774cde);
    /* 00774cde: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774ce2: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774ce6: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774ceb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774cf0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774cf4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774cf8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774cfc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774d00: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774d04: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774d08: jmp 0x774e04 */ goto L_00774e04;
L_00774d0d:; BB(0x00774d0d);
    /* 00774d0d: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774d11: fmul dword ptr [0x978250] */ ST(0) = ST(0) * R_F32((u32)(0x978250u));
    /* 00774d17: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774d1b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774d1d: je 0x774d4b */ if (fZ) goto L_00774d4b;
L_00774d1f:; BB(0x00774d1f);
    /* 00774d1f: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774d23: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774d27: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774d2c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774d31: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774d35: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774d39: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774d3d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774d41: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774d45: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774d49: jmp 0x774d95 */ goto L_00774d95;
L_00774d4b:; BB(0x00774d4b);
    /* 00774d4b: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774d4f: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774d53: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774d58: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774d5d: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774d61: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774d65: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774d69: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774d6d: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774d71: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774d75: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774d78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774d79: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774d7b: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x774d80u); f_00777414();
    /* 00774d80: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774d82: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x774d87u); f_00775270();
    /* 00774d87: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00774d8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00774d8c: jle 0x77500b */ if ((fZ||fS!=fO)) goto L_0077500b;
L_00774d92:; BB(0x00774d92);
    /* 00774d92: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
L_00774d95:; BB(0x00774d95);
    /* 00774d95: or edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00774d9b: mov dword ptr [ebp + 0x30], edi */ W32((u32)(r_ebp+0x30u), r_edi);
    /* 00774d9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774d9f: fld dword ptr [esp + 0x50] */ FPUSH(R_F32((u32)(r_esp+0x50u)));
    /* 00774da3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774da6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774da8: call 0x77529c */ r_esp -= 4; W32(r_esp, 0x774dadu); f_0077529c();
    /* 00774dad: mov edx, dword ptr [ebp + 0x2e0] */ r_edx = R32((u32)(r_ebp+0x2e0u));
    /* 00774db3: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00774db6: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00774db9: test edi, 0x2000000 */ {  u32 a = r_edi; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774dbf: mov dword ptr [ebp + 0x2e0], edx */ W32((u32)(r_ebp+0x2e0u), r_edx);
    /* 00774dc5: jne 0x774e04 */ if (!fZ) goto L_00774e04;
L_00774dc7:; BB(0x00774dc7);
    /* 00774dc7: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774dcb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774dcc: call 0x50325c */ r_esp -= 4; W32(r_esp, 0x774dd1u); f_0050325c();
    /* 00774dd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00774dd2: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00774dd6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774dd7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774dd9: call 0x7752dc */ r_esp -= 4; W32(r_esp, 0x774ddeu); f_007752dc();
    /* 00774dde: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774de2: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 00774de6: movsx edi, dx */ r_edi = (u32)(i32)(i16)(u16)r_edx;
    /* 00774de9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774dea: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774dec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00774ded: call 0x77535c */ r_esp -= 4; W32(r_esp, 0x774df2u); f_0077535c();
    /* 00774df2: jmp 0x774e04 */ goto L_00774e04;
L_00774e04:; BB(0x00774e04);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774cc7); r_esp += 28; return;
L_0077500b:; BB(0x0077500b);
    /* 0077500b: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 0077500e: or edi, 0x800 */ {  u32 a = r_edi; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00775014: jmp 0x774d95 */ goto L_00774d95;
}

void f_00774df4(void)
{
    FN_ENTER(0x00774df4);
    /* 00774df4: fld dword ptr [0x97827c] */ FPUSH(R_F32((u32)(0x97827cu)));
    /* 00774dfa: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 00774dfe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00774e00: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 00774e04: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e06: jne 0x774e15 */ if (!fZ) goto L_00774e15;
L_00774e08:; BB(0x00774e08);
    /* 00774e08: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00774e0a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e0f: call dword ptr [edx + 0x130] */ { u32 t = R32((u32)(r_edx+0x130u)); r_esp -= 4; W32(r_esp, 0x774e15u); call_ind(t); }
L_00774e15:; BB(0x00774e15);
    /* 00774e15: movsx edx, word ptr [ebp + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x32cu));
    /* 00774e1c: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00774e1f: jne 0x774e64 */ if (!fZ) goto L_00774e64;
L_00774e21:; BB(0x00774e21);
    /* 00774e21: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e25: fmul dword ptr [0x97824c] */ ST(0) = ST(0) * R_F32((u32)(0x97824cu));
    /* 00774e2b: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00774e2f: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 00774e34: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00774e39: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00774e3d: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00774e41: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 00774e45: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00774e49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e4b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00774e4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e50: call 0x69b4f0 */ r_esp -= 4; W32(r_esp, 0x774e55u); f_0069b4f0();
    /* 00774e55: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00774e58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00774e59: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00774e5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e5e: call dword ptr [edx + 0x134] */ { u32 t = R32((u32)(r_edx+0x134u)); r_esp -= 4; W32(r_esp, 0x774e64u); call_ind(t); }
L_00774e64:; BB(0x00774e64);
    /* 00774e64: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00774e68: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e69: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00774e6a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00774e6c: call 0x773ab0 */ r_esp -= 4; W32(r_esp, 0x774e71u); f_00773ab0();
    /* 00774e71: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00774e75: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00774e78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00774e79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00774e7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00774e7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00774e7c: ret 0x18 */ FN_RET(0x00774df4); r_esp += 28; return;
}

