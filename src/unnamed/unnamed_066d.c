#include "protos.h"

void f_0066d020(void)
{
    FN_ENTER(0x0066d020);
    /* 0066d020: or al, 0x5e */ {  u32 a = (u8)r_eax; u32 b = 0x5eu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d022: ret  */ FN_RET(0x0066d020); r_esp += 4; return;
}

void f_0066d024(void) /* sub_66D024 */
{
    FN_ENTER(0x0066d024);
    /* 0066d024: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d025: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066d027: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066d029: call 0x669bd8 */ r_esp -= 4; W32(r_esp, 0x66d02eu); f_00669bd8();
    /* 0066d02e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066d030: call 0x66cfe0 */ r_esp -= 4; W32(r_esp, 0x66d035u); f_0066cfe0();
    /* 0066d035: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d036: ret  */ FN_RET(0x0066d024); r_esp += 4; return;
}

void f_0066d038(void) /* sub_66D038 */
{
    FN_ENTER(0x0066d038);
    /* 0066d038: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d039: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066d03b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066d03d: call 0x66d05c */ r_esp -= 4; W32(r_esp, 0x66d042u); f_0066d05c();
    /* 0066d042: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066d046: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d048: jne 0x66d04e */ if (!fZ) goto L_0066d04e;
L_0066d04a:; BB(0x0066d04a);
    /* 0066d04a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d04b: ret 4 */ FN_RET(0x0066d038); r_esp += 8; return;
L_0066d04e:; BB(0x0066d04e);
    /* 0066d04e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d04f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66d054u); f_005c2f74();
    /* 0066d054: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d055: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d056: ret 4 */ FN_RET(0x0066d038); r_esp += 8; return;
}

void f_0066d05c(void) /* sub_66D05C */
{
    FN_ENTER(0x0066d05c);
    /* 0066d05c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d05d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d05f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d061: push 0x8e8d74 */ { u32 v = 0x8e8d74u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d066: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d06c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d06d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066d074: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d077: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066d07a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066d07d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066d080: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066d083: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066d086: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d089: mov dword ptr [ecx], 0xb35740 */ W32((u32)(r_ecx), 0xb35740u);
    /* 0066d08f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d096: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66d09bu); f_0066873c();
    /* 0066d09b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d09e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d0a5: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d0a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d0a8: ret  */ FN_RET(0x0066d05c); r_esp += 4; return;
}

void f_0066d0ac(void) /* sub_66D0AC */
{
    FN_ENTER(0x0066d0ac);
    /* 0066d0ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066d0af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066d0b1: call 0x66d0d0 */ r_esp -= 4; W32(r_esp, 0x66d0b6u); f_0066d0d0();
    /* 0066d0b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066d0ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d0bc: jne 0x66d0c2 */ if (!fZ) goto L_0066d0c2;
L_0066d0be:; BB(0x0066d0be);
    /* 0066d0be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d0bf: ret 4 */ FN_RET(0x0066d0ac); r_esp += 8; return;
L_0066d0c2:; BB(0x0066d0c2);
    /* 0066d0c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66d0c8u); f_005c2f74();
    /* 0066d0c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d0c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d0ca: ret 4 */ FN_RET(0x0066d0ac); r_esp += 8; return;
}

void f_0066d0d0(void) /* sub_66D0D0 */
{
    FN_ENTER(0x0066d0d0);
    /* 0066d0d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0d1: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d0d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0d5: push 0x8e8d90 */ { u32 v = 0x8e8d90u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d0e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d0e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066d0e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d0eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066d0ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066d0f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066d0f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066d0f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066d0fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d0fd: mov dword ptr [ecx], 0xb356e0 */ W32((u32)(r_ecx), 0xb356e0u);
    /* 0066d103: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066d10a: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66d10fu); f_0066873c();
    /* 0066d10f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d112: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d119: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d11b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d11c: ret  */ FN_RET(0x0066d0d0); r_esp += 4; return;
}

void f_0066d120(void) /* sub_66D120 */
{
    FN_ENTER(0x0066d120);
    /* 0066d120: mov ecx, dword ptr [0xa8fd24] */ r_ecx = R32((u32)(0xa8fd24u));
    /* 0066d126: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d128: je 0x66d13c */ if (fZ) goto L_0066d13c;
L_0066d12a:; BB(0x0066d12a);
    /* 0066d12a: je 0x66d132 */ if (fZ) goto L_0066d132;
L_0066d12c:; BB(0x0066d12c);
    /* 0066d12c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d12e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066d130: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x66d132u); call_ind(t); }
L_0066d132:; BB(0x0066d132);
    /* 0066d132: mov dword ptr [0xa8fd24], 0 */ W32((u32)(0xa8fd24u), 0x0u);
L_0066d13c:; BB(0x0066d13c);
    /* 0066d13c: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d142: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d144: je 0x66d159 */ if (fZ) goto L_0066d159;
L_0066d146:; BB(0x0066d146);
    /* 0066d146: je 0x66d14f */ if (fZ) goto L_0066d14f;
L_0066d148:; BB(0x0066d148);
    /* 0066d148: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d14a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x66d14fu); f_004066a8();
L_0066d14f:; BB(0x0066d14f);
    /* 0066d14f: mov dword ptr [0xa8fd5c], 0 */ W32((u32)(0xa8fd5cu), 0x0u);
L_0066d159:; BB(0x0066d159);
    /* 0066d159: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d15b: mov dword ptr [0xa8fd58], eax */ W32((u32)(0xa8fd58u), r_eax);
    /* 0066d160: mov dword ptr [0xa8fd54], eax */ W32((u32)(0xa8fd54u), r_eax);
    /* 0066d165: mov dword ptr [0xa8fd3c], eax */ W32((u32)(0xa8fd3cu), r_eax);
    /* 0066d16a: mov dword ptr [0xa8fd40], eax */ W32((u32)(0xa8fd40u), r_eax);
    /* 0066d16f: mov dword ptr [0xa8fd44], eax */ W32((u32)(0xa8fd44u), r_eax);
    /* 0066d174: mov dword ptr [0xa8fd48], eax */ W32((u32)(0xa8fd48u), r_eax);
    /* 0066d179: mov dword ptr [0xa8fd4c], eax */ W32((u32)(0xa8fd4cu), r_eax);
    /* 0066d17e: mov dword ptr [0xa8fd50], eax */ W32((u32)(0xa8fd50u), r_eax);
    /* 0066d183: ret  */ FN_RET(0x0066d120); r_esp += 4; return;
}

void f_0066d184(void) /* sub_66D184 */
{
    FN_ENTER(0x0066d184);
    /* 0066d184: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d185: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066d189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d18b: jne 0x66d1c2 */ if (!fZ) goto L_0066d1c2;
L_0066d18d:; BB(0x0066d18d);
    /* 0066d18d: mov edx, dword ptr [0xa8fd30] */ r_edx = R32((u32)(0xa8fd30u));
    /* 0066d193: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d195: jl 0x66d1c7 */ if ((fS!=fO)) goto L_0066d1c7;
L_0066d197:; BB(0x0066d197);
    /* 0066d197: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0066d19a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d19c: mov ebx, eax */ r_ebx = r_eax;
    /* 0066d19e: jmp 0x66d1a6 */ goto L_0066d1a6;
L_0066d1a0:; BB(0x0066d1a0);
    /* 0066d1a0: mov edx, dword ptr [0xa8fd30] */ r_edx = R32((u32)(0xa8fd30u));
L_0066d1a6:; BB(0x0066d1a6);
    /* 0066d1a6: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066d1a9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d1aa: push dword ptr [ebx + 0xa8fd3c] */ { u32 v = R32((u32)(r_ebx+0xa8fd3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d1b0: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x66d1b5u); f_0081a588();
    /* 0066d1b5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d1b8: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066d1bb: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066d1be: jl 0x66d1a0 */ if ((fS!=fO)) goto L_0066d1a0;
L_0066d1c0:; BB(0x0066d1c0);
    /* 0066d1c0: jmp 0x66d203 */ goto L_0066d203;
L_0066d1c2:; BB(0x0066d1c2);
    /* 0066d1c2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066d1c5: je 0x66d1ce */ if (fZ) goto L_0066d1ce;
L_0066d1c7:; BB(0x0066d1c7);
    /* 0066d1c7: mov eax, 1 */ r_eax = 0x1u;
    /* 0066d1cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d1cd: ret  */ FN_RET(0x0066d184); r_esp += 4; return;
L_0066d1ce:; BB(0x0066d1ce);
    /* 0066d1ce: mov edx, dword ptr [0xa8fd2c] */ r_edx = R32((u32)(0xa8fd2cu));
    /* 0066d1d4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d1d6: jl 0x66d1c7 */ if ((fS!=fO)) goto L_0066d1c7;
L_0066d1d8:; BB(0x0066d1d8);
    /* 0066d1d8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0066d1db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d1dd: mov ebx, eax */ r_ebx = r_eax;
    /* 0066d1df: jmp 0x66d1e7 */ goto L_0066d1e7;
L_0066d1e1:; BB(0x0066d1e1);
    /* 0066d1e1: mov edx, dword ptr [0xa8fd2c] */ r_edx = R32((u32)(0xa8fd2cu));
L_0066d1e7:; BB(0x0066d1e7);
    /* 0066d1e7: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066d1ea: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d1eb: push dword ptr [ebx + 0xa8fd3c] */ { u32 v = R32((u32)(r_ebx+0xa8fd3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d1f1: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x66d1f6u); f_0081a588();
    /* 0066d1f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d1f9: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066d1fc: cmp ebx, 0x18 */ {  u32 a = r_ebx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066d1ff: jl 0x66d1e1 */ if ((fS!=fO)) goto L_0066d1e1;
L_0066d201:; BB(0x0066d201);
    /* 0066d201: jmp 0x66d208 */ goto L_0066d208;
L_0066d203:; BB(0x0066d203);
    /* 0066d203: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0066d206: jmp 0x66d1c7 */ goto L_0066d1c7;
L_0066d208:; BB(0x0066d208);
    /* 0066d208: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0066d20b: jmp 0x66d1c7 */ goto L_0066d1c7;
}

void f_0066d210(void) /* sub_66D210 */
{
    FN_ENTER(0x0066d210);
    /* 0066d210: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66d215u); f_00835068();
    /* 0066d215: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d219: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d21f: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66d224u); f_005b8610();
    /* 0066d224: mov ecx, eax */ r_ecx = r_eax;
    /* 0066d226: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x66d22bu); f_00835090();
    /* 0066d22b: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66d230u); f_00835078();
    /* 0066d230: ret  */ FN_RET(0x0066d210); r_esp += 4; return;
}

void f_0066d234(void) /* sub_66D234 */
{
    FN_ENTER(0x0066d234);
    /* 0066d234: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d237: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66d23cu); f_00835068();
    /* 0066d23c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d240: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d246: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66d24bu); f_005b8610();
    /* 0066d24b: mov edx, dword ptr [0xa8fd58] */ r_edx = R32((u32)(0xa8fd58u));
    /* 0066d251: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d252: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0066d256: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0066d25a: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 0066d25e: mov ecx, eax */ r_ecx = r_eax;
    /* 0066d260: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066d263: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x66d268u); f_00835574();
    /* 0066d268: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66d26du); f_00835078();
    /* 0066d26d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066d270: ret  */ FN_RET(0x0066d234); r_esp += 4; return;
}

void f_0066d274(void) /* sub_66D274 */
{
    FN_ENTER(0x0066d274);
    /* 0066d274: mov edx, dword ptr [0xa8fd58] */ r_edx = R32((u32)(0xa8fd58u));
    /* 0066d27a: fild dword ptr [edx + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+0x4u)));
    /* 0066d27d: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0066d280: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0066d283: fadd dword ptr [ecx*4 + 0x939dc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx*4+0x939dc8u));
    /* 0066d28a: ret  */ FN_RET(0x0066d274); r_esp += 4; return;
}

void f_0066d28c(void) /* sub_66D28C */
{
    FN_ENTER(0x0066d28c);
    /* 0066d28c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d28f: fld dword ptr [0x939df8] */ FPUSH(R_F32((u32)(0x939df8u)));
    /* 0066d295: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 0066d29b: mov edx, dword ptr [0xa8fd58] */ r_edx = R32((u32)(0xa8fd58u));
    /* 0066d2a1: fst dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0));
    /* 0066d2a7: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066d2aa: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066d2ad: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066d2b0: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066d2b3: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066d2b6: fadd dword ptr [eax*4 + 0x939dc0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939dc0u));
    /* 0066d2bd: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066d2bf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066d2c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066d2c2: jae 0x66d2ce */ if (!fC) goto L_0066d2ce;
L_0066d2c4:; BB(0x0066d2c4);
    /* 0066d2c4: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
L_0066d2ce:; BB(0x0066d2ce);
    /* 0066d2ce: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x66d2d3u); f_006698e0();
    /* 0066d2d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066d2d6: ret  */ FN_RET(0x0066d28c); r_esp += 4; return;
}

void f_0066d2d8(void) /* sub_66D2D8 */
{
    FN_ENTER(0x0066d2d8);
    /* 0066d2d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2d9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2da: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d2dd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066d2df: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2e4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066d2e6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0066d2e8: push 0x44098000 */ { u32 v = 0x44098000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d2ed: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66d2f0u); call_ind(t); }
    /* 0066d2f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d2f2: jne 0x66d2fa */ if (!fZ) goto L_0066d2fa;
L_0066d2f4:; BB(0x0066d2f4);
    /* 0066d2f4: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066d2f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d2f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066d2f9: ret  */ FN_RET(0x0066d2d8); r_esp += 4; return;
L_0066d2fa:; BB(0x0066d2fa);
    /* 0066d2fa: call 0x66d458 */ r_esp -= 4; W32(r_esp, 0x66d2ffu); f_0066d458();
    /* 0066d2ff: mov esi, eax */ r_esi = r_eax;
    /* 0066d301: mov edx, dword ptr [ebx + 0x8c] */ r_edx = R32((u32)(r_ebx+0x8cu));
    /* 0066d307: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d309: jne 0x66d344 */ if (!fZ) goto L_0066d344;
L_0066d30b:; BB(0x0066d30b);
    /* 0066d30b: mov edx, dword ptr [0xa8fd30] */ r_edx = R32((u32)(0xa8fd30u));
    /* 0066d311: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066d313: jl 0x66d382 */ if ((fS!=fO)) goto L_0066d382;
L_0066d315:; BB(0x0066d315);
    /* 0066d315: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0066d319: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d31b: mov ebp, eax */ r_ebp = r_eax;
    /* 0066d31d: jmp 0x66d325 */ goto L_0066d325;
L_0066d31f:; BB(0x0066d31f);
    /* 0066d31f: mov edx, dword ptr [0xa8fd30] */ r_edx = R32((u32)(0xa8fd30u));
L_0066d325:; BB(0x0066d325);
    /* 0066d325: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066d328: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d329: push dword ptr [ebp + 0xa8fd3c] */ { u32 v = R32((u32)(r_ebp+0xa8fd3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d32f: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x66d334u); f_0081a588();
    /* 0066d334: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d337: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066d33a: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066d33d: jl 0x66d31f */ if ((fS!=fO)) goto L_0066d31f;
L_0066d33f:; BB(0x0066d33f);
    /* 0066d33f: jmp 0x66d444 */ goto L_0066d444;
L_0066d344:; BB(0x0066d344);
    /* 0066d344: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d347: jne 0x66d382 */ if (!fZ) goto L_0066d382;
L_0066d349:; BB(0x0066d349);
    /* 0066d349: mov edx, dword ptr [0xa8fd2c] */ r_edx = R32((u32)(0xa8fd2cu));
    /* 0066d34f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066d351: jl 0x66d382 */ if ((fS!=fO)) goto L_0066d382;
L_0066d353:; BB(0x0066d353);
    /* 0066d353: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0066d357: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d359: mov ebp, eax */ r_ebp = r_eax;
    /* 0066d35b: jmp 0x66d363 */ goto L_0066d363;
L_0066d35d:; BB(0x0066d35d);
    /* 0066d35d: mov edx, dword ptr [0xa8fd2c] */ r_edx = R32((u32)(0xa8fd2cu));
L_0066d363:; BB(0x0066d363);
    /* 0066d363: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066d366: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d367: push dword ptr [ebp + 0xa8fd3c] */ { u32 v = R32((u32)(r_ebp+0xa8fd3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d36d: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x66d372u); f_0081a588();
    /* 0066d372: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d375: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0066d378: cmp ebp, 0x18 */ {  u32 a = r_ebp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066d37b: jl 0x66d35d */ if ((fS!=fO)) goto L_0066d35d;
L_0066d37d:; BB(0x0066d37d);
    /* 0066d37d: jmp 0x66d44d */ goto L_0066d44d;
L_0066d382:; BB(0x0066d382);
    /* 0066d382: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d384: je 0x66d392 */ if (fZ) goto L_0066d392;
L_0066d386:; BB(0x0066d386);
    /* 0066d386: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066d388: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x66d38du); f_00835f78();
    /* 0066d38d: call 0x66d490 */ r_esp -= 4; W32(r_esp, 0x66d392u); f_0066d490();
L_0066d392:; BB(0x0066d392);
    /* 0066d392: call 0x66d4a8 */ r_esp -= 4; W32(r_esp, 0x66d397u); f_0066d4a8();
    /* 0066d397: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66d39cu); f_0082d7b0();
    /* 0066d39c: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 0066d39f: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66d3a4u); f_0082d838();
    /* 0066d3a4: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0066d3a7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066d3a9: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66d3aeu); f_0082d8bc();
    /* 0066d3ae: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66d3b3u); f_00835068();
    /* 0066d3b3: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d3b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d3bb: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66d3c0u); f_005b8610();
    /* 0066d3c0: mov ecx, eax */ r_ecx = r_eax;
    /* 0066d3c2: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x66d3c7u); f_00835090();
    /* 0066d3c7: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66d3ccu); f_00835078();
    /* 0066d3cc: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66d3d1u); f_0082dbac();
    /* 0066d3d1: fld dword ptr [ebx + 0xc8] */ FPUSH(R_F32((u32)(r_ebx+0xc8u)));
    /* 0066d3d7: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 0066d3da: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 0066d3de: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066d3e3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066d3e7: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0066d3eb: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066d3ef: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0066d3f2: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0066d3f6: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66d3fbu); f_00835068();
    /* 0066d3fb: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d401: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d403: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66d408u); f_005b8610();
    /* 0066d408: mov edx, dword ptr [0xa8fd58] */ r_edx = R32((u32)(0xa8fd58u));
    /* 0066d40e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d40f: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0066d413: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 0066d417: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066d41a: mov ecx, eax */ r_ecx = r_eax;
    /* 0066d41c: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x66d421u); f_00835574();
    /* 0066d421: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66d426u); f_00835078();
    /* 0066d426: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66d42bu); f_0082dab0();
    /* 0066d42b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66d430u); f_0082da80();
    /* 0066d430: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d432: je 0x66d43e */ if (fZ) goto L_0066d43e;
L_0066d434:; BB(0x0066d434);
    /* 0066d434: call 0x66d4b4 */ r_esp -= 4; W32(r_esp, 0x66d439u); f_0066d4b4();
    /* 0066d439: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x66d43eu); f_0083603c();
L_0066d43e:; BB(0x0066d43e);
    /* 0066d43e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066d441: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066d442: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066d443: ret  */ FN_RET(0x0066d2d8); r_esp += 4; return;
L_0066d444:; BB(0x0066d444);
    /* 0066d444: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0066d448: jmp 0x66d382 */ goto L_0066d382;
L_0066d44d:; BB(0x0066d44d);
    /* 0066d44d: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0066d451: jmp 0x66d382 */ goto L_0066d382;
}

void f_0066d458(void) /* sub_66D458 */
{
    FN_ENTER(0x0066d458);
    /* 0066d458: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 0066d45d: cmp eax, dword ptr [0xa8fd34] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa8fd34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d463: je 0x66d48c */ if (fZ) goto L_0066d48c;
L_0066d465:; BB(0x0066d465);
    /* 0066d465: mov dword ptr [0xa8fd34], eax */ W32((u32)(0xa8fd34u), r_eax);
    /* 0066d46a: mov eax, dword ptr [0xa8fd28] */ r_eax = R32((u32)(0xa8fd28u));
    /* 0066d46f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066d471: jl 0x66d48c */ if ((fS!=fO)) goto L_0066d48c;
L_0066d473:; BB(0x0066d473);
    /* 0066d473: mov ecx, dword ptr [0xa8fd24] */ r_ecx = R32((u32)(0xa8fd24u));
    /* 0066d479: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d47b: je 0x66d486 */ if (fZ) goto L_0066d486;
L_0066d47d:; BB(0x0066d47d);
    /* 0066d47d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d47f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d481: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066d483: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x66d486u); call_ind(t); }
L_0066d486:; BB(0x0066d486);
    /* 0066d486: mov eax, 1 */ r_eax = 0x1u;
    /* 0066d48b: ret  */ FN_RET(0x0066d458); r_esp += 4; return;
L_0066d48c:; BB(0x0066d48c);
    /* 0066d48c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d48e: ret  */ FN_RET(0x0066d458); r_esp += 4; return;
}

void f_0066d490(void) /* sub_66D490 */
{
    FN_ENTER(0x0066d490);
    /* 0066d490: mov ecx, dword ptr [0xa8fd24] */ r_ecx = R32((u32)(0xa8fd24u));
    /* 0066d496: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d498: je 0x66d4a5 */ if (fZ) goto L_0066d4a5;
L_0066d49a:; BB(0x0066d49a);
    /* 0066d49a: push dword ptr [0xa8fd28] */ { u32 v = R32((u32)(0xa8fd28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d4a0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066d4a2: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x66d4a5u); call_ind(t); }
L_0066d4a5:; BB(0x0066d4a5);
    /* 0066d4a5: ret  */ FN_RET(0x0066d490); r_esp += 4; return;
}

void f_0066d4a8(void) /* sub_66D4A8 */
{
    FN_ENTER(0x0066d4a8);
    /* 0066d4a8: mov ecx, dword ptr [0xa8fd54] */ r_ecx = R32((u32)(0xa8fd54u));
    /* 0066d4ae: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x66d4b3u); f_00829cc8();
    /* 0066d4b3: ret  */ FN_RET(0x0066d4a8); r_esp += 4; return;
}

void f_0066d4b4(void) /* sub_66D4B4 */
{
    FN_ENTER(0x0066d4b4);
    /* 0066d4b4: mov ecx, dword ptr [0xa8fd24] */ r_ecx = R32((u32)(0xa8fd24u));
    /* 0066d4ba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d4bc: je 0x66d4c3 */ if (fZ) goto L_0066d4c3;
L_0066d4be:; BB(0x0066d4be);
    /* 0066d4be: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0066d4c0: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x66d4c3u); call_ind(t); }
L_0066d4c3:; BB(0x0066d4c3);
    /* 0066d4c3: ret  */ FN_RET(0x0066d4b4); r_esp += 4; return;
}

void f_0066d4c4(void)
{
    FN_ENTER(0x0066d4c4);
    /* 0066d4c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d4c5: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d4c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d4c9: push 0x8e8db8 */ { u32 v = 0x8e8db8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d4ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d4d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d4d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066d4dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d4df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066d4e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066d4e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066d4e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066d4eb: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d4f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066d4f7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66d4fcu); f_005caba4();
    /* 0066d4fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d4fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066d500: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d502: je 0x66d53b */ if (fZ) goto L_0066d53b;
L_0066d504:; BB(0x0066d504);
    /* 0066d504: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066d50b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d512: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d515: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d51b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d51e: call 0x66d540 */ r_esp -= 4; W32(r_esp, 0x66d523u); f_0066d540();
    /* 0066d523: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d526: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066d52d:; BB(0x0066d52d);
    /* 0066d52d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d530: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d537: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d539: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d53a: ret  */ FN_RET(0x0066d4c4); r_esp += 4; return;
L_0066d53b:; BB(0x0066d53b);
    /* 0066d53b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d53d: jmp 0x66d52d */ goto L_0066d52d;
}

void f_0066d540(void) /* sub_66D540 */
{
    FN_ENTER(0x0066d540);
    /* 0066d540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d541: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d545: push 0x8e8dee */ { u32 v = 0x8e8deeu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d54a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d551: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066d558: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d55b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066d55e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066d561: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066d564: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066d567: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d56a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d56d: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0066d570: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66d575u); f_0066982c();
    /* 0066d575: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d57c: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d57f: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0066d585: mov dword ptr [ebx], 0xb35740 */ W32((u32)(r_ebx), 0xb35740u);
    /* 0066d58b: mov ecx, dword ptr [0x9c964c] */ r_ecx = R32((u32)(0x9c964cu));
    /* 0066d591: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0066d59b: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0066d59e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d59f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066d5a0: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d5a2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066d5a4: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066d5a7: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d5a9: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066d5ab: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0066d5ae: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0066d5b1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066d5b4: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x66d5b9u); f_0082e900();
    /* 0066d5b9: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d5bc: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0066d5bf: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0066d5c3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066d5c8: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066d5cb: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0066d5ce: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066d5d1: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0066d5d4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d5d7: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 0066d5dd: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x66d5e2u); f_0078b1c4();
    /* 0066d5e2: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d5e5: jne 0x66d5fb */ if (!fZ) goto L_0066d5fb;
L_0066d5e7:; BB(0x0066d5e7);
    /* 0066d5e7: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d5ea: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0066d5f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d5f3: je 0x66d68e */ if (fZ) goto L_0066d68e;
L_0066d5f9:; BB(0x0066d5f9);
    /* 0066d5f9: jmp 0x66d5fe */ goto L_0066d5fe;
L_0066d5fb:; BB(0x0066d5fb);
    /* 0066d5fb: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
L_0066d5fe:; BB(0x0066d5fe);
    /* 0066d5fe: mov dword ptr [ecx + 0xac], 0x41700000 */ W32((u32)(r_ecx+0xacu), 0x41700000u);
    /* 0066d608: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66d60du); f_006dc358();
    /* 0066d60d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066d610: je 0x66d632 */ if (fZ) goto L_0066d632;
L_0066d612:; BB(0x0066d612);
    /* 0066d612: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d615: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
L_0066d61f:; BB(0x0066d61f);
    /* 0066d61f: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d622: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d625: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d62c: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d62e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d62f: ret 8 */ FN_RET(0x0066d540); r_esp += 12; return;
L_0066d632:; BB(0x0066d632);
    /* 0066d632: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0066d639: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d63e: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66d643u); f_008581c5();
    /* 0066d643: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066d646: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d649: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066d64c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d64e: je 0x66d687 */ if (fZ) goto L_0066d687;
L_0066d650:; BB(0x0066d650);
    /* 0066d650: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0066d657: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066d65e: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d663: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d666: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066d669: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066d66c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d66d: call 0x640fb4 */ r_esp -= 4; W32(r_esp, 0x66d672u); f_00640fb4();
    /* 0066d672: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0066d679:; BB(0x0066d679);
    /* 0066d679: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d67c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066d67f: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0066d685: jmp 0x66d61f */ goto L_0066d61f;
L_0066d687:; BB(0x0066d687);
    /* 0066d687: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d689: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066d68c: jmp 0x66d679 */ goto L_0066d679;
L_0066d68e:; BB(0x0066d68e);
    /* 0066d68e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d691: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066d695: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d69b: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0066d69f: mov eax, ecx */ r_eax = r_ecx;
    /* 0066d6a1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d6a4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d6ab: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d6ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d6ae: ret 8 */ FN_RET(0x0066d540); r_esp += 12; return;
}

void f_0066d6b4(void) /* sub_66D6B4 */
{
    FN_ENTER(0x0066d6b4);
    /* 0066d6b4: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d6b7: fld dword ptr [0x939df8] */ FPUSH(R_F32((u32)(0x939df8u)));
    /* 0066d6bd: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 0066d6c3: mov edx, dword ptr [0xa8fd58] */ r_edx = R32((u32)(0xa8fd58u));
    /* 0066d6c9: fst dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0));
    /* 0066d6cf: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066d6d2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066d6d5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0066d6d8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 0066d6db: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066d6de: fadd dword ptr [eax*4 + 0x939db8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939db8u));
    /* 0066d6e5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066d6e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066d6e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066d6ea: jae 0x66d6f6 */ if (!fC) goto L_0066d6f6;
L_0066d6ec:; BB(0x0066d6ec);
    /* 0066d6ec: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
L_0066d6f6:; BB(0x0066d6f6);
    /* 0066d6f6: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x66d6fbu); f_006698e0();
    /* 0066d6fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066d6fe: ret  */ FN_RET(0x0066d6b4); r_esp += 4; return;
}

void f_0066d700(void) /* sub_66D700 */
{
    FN_ENTER(0x0066d700);
    /* 0066d700: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d701: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d702: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d703: mov esi, ecx */ r_esi = r_ecx;
    /* 0066d705: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d70a: mov ecx, esi */ r_ecx = r_esi;
    /* 0066d70c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066d70e: push 0x44098000 */ { u32 v = 0x44098000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d713: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x66d716u); call_ind(t); }
    /* 0066d716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d718: jne 0x66d71e */ if (!fZ) goto L_0066d71e;
L_0066d71a:; BB(0x0066d71a);
    /* 0066d71a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d71b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d71c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066d71d: ret  */ FN_RET(0x0066d700); r_esp += 4; return;
L_0066d71e:; BB(0x0066d71e);
    /* 0066d71e: call 0x66d458 */ r_esp -= 4; W32(r_esp, 0x66d723u); f_0066d458();
    /* 0066d723: mov ebp, eax */ r_ebp = r_eax;
    /* 0066d725: mov edx, dword ptr [esi + 0x8c] */ r_edx = R32((u32)(r_esi+0x8cu));
    /* 0066d72b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d72d: jne 0x66d767 */ if (!fZ) goto L_0066d767;
L_0066d72f:; BB(0x0066d72f);
    /* 0066d72f: mov edx, dword ptr [0xa8fd30] */ r_edx = R32((u32)(0xa8fd30u));
    /* 0066d735: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066d737: jl 0x66d7a4 */ if ((fS!=fO)) goto L_0066d7a4;
L_0066d739:; BB(0x0066d739);
    /* 0066d739: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066d73c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d73e: mov edi, eax */ r_edi = r_eax;
    /* 0066d740: jmp 0x66d748 */ goto L_0066d748;
L_0066d742:; BB(0x0066d742);
    /* 0066d742: mov edx, dword ptr [0xa8fd30] */ r_edx = R32((u32)(0xa8fd30u));
L_0066d748:; BB(0x0066d748);
    /* 0066d748: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066d74b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d74c: push dword ptr [edi + 0xa8fd3c] */ { u32 v = R32((u32)(r_edi+0xa8fd3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d752: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x66d757u); f_0081a588();
    /* 0066d757: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d75a: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066d75d: cmp edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066d760: jl 0x66d742 */ if ((fS!=fO)) goto L_0066d742;
L_0066d762:; BB(0x0066d762);
    /* 0066d762: jmp 0x66d82f */ goto L_0066d82f;
L_0066d767:; BB(0x0066d767);
    /* 0066d767: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d76a: jne 0x66d7a4 */ if (!fZ) goto L_0066d7a4;
L_0066d76c:; BB(0x0066d76c);
    /* 0066d76c: mov edx, dword ptr [0xa8fd2c] */ r_edx = R32((u32)(0xa8fd2cu));
    /* 0066d772: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0066d774: jl 0x66d7a4 */ if ((fS!=fO)) goto L_0066d7a4;
L_0066d776:; BB(0x0066d776);
    /* 0066d776: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0066d779: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d77b: mov edi, eax */ r_edi = r_eax;
    /* 0066d77d: jmp 0x66d785 */ goto L_0066d785;
L_0066d77f:; BB(0x0066d77f);
    /* 0066d77f: mov edx, dword ptr [0xa8fd2c] */ r_edx = R32((u32)(0xa8fd2cu));
L_0066d785:; BB(0x0066d785);
    /* 0066d785: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0066d788: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066d789: push dword ptr [edi + 0xa8fd3c] */ { u32 v = R32((u32)(r_edi+0xa8fd3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d78f: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x66d794u); f_0081a588();
    /* 0066d794: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d797: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0066d79a: cmp edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066d79d: jl 0x66d77f */ if ((fS!=fO)) goto L_0066d77f;
L_0066d79f:; BB(0x0066d79f);
    /* 0066d79f: jmp 0x66d837 */ goto L_0066d837;
L_0066d7a4:; BB(0x0066d7a4);
    /* 0066d7a4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d7a6: je 0x66d7b4 */ if (fZ) goto L_0066d7b4;
L_0066d7a8:; BB(0x0066d7a8);
    /* 0066d7a8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066d7aa: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x66d7afu); f_00835f78();
    /* 0066d7af: call 0x66d490 */ r_esp -= 4; W32(r_esp, 0x66d7b4u); f_0066d490();
L_0066d7b4:; BB(0x0066d7b4);
    /* 0066d7b4: call 0x66d4a8 */ r_esp -= 4; W32(r_esp, 0x66d7b9u); f_0066d4a8();
    /* 0066d7b9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x66d7beu); f_0082d7b0();
    /* 0066d7be: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0066d7c1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x66d7c6u); f_0082d838();
    /* 0066d7c6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 0066d7c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066d7cb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x66d7d0u); f_0082d8bc();
    /* 0066d7d0: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x66d7d5u); f_00835068();
    /* 0066d7d5: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d7db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d7dd: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66d7e2u); f_005b8610();
    /* 0066d7e2: mov ecx, eax */ r_ecx = r_eax;
    /* 0066d7e4: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x66d7e9u); f_00835090();
    /* 0066d7e9: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x66d7eeu); f_0082dbac();
    /* 0066d7ee: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066d7f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d7f6: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66d7fbu); f_005b8610();
    /* 0066d7fb: push dword ptr [esi + 0xc8] */ { u32 v = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d801: mov edx, dword ptr [0xa8fd58] */ r_edx = R32((u32)(0xa8fd58u));
    /* 0066d807: mov ecx, eax */ r_ecx = r_eax;
    /* 0066d809: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x66d80eu); f_00835574();
    /* 0066d80e: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x66d813u); f_0082dab0();
    /* 0066d813: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x66d818u); f_00835078();
    /* 0066d818: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66d81du); f_0082da80();
    /* 0066d81d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d81f: je 0x66d82b */ if (fZ) goto L_0066d82b;
L_0066d821:; BB(0x0066d821);
    /* 0066d821: call 0x66d4b4 */ r_esp -= 4; W32(r_esp, 0x66d826u); f_0066d4b4();
    /* 0066d826: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x66d82bu); f_0083603c();
L_0066d82b:; BB(0x0066d82b);
    /* 0066d82b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d82c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d82d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066d82e: ret  */ FN_RET(0x0066d700); r_esp += 4; return;
L_0066d82f:; BB(0x0066d82f);
    /* 0066d82f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066d832: jmp 0x66d7a4 */ goto L_0066d7a4;
L_0066d837:; BB(0x0066d837);
    /* 0066d837: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066d83a: jmp 0x66d7a4 */ goto L_0066d7a4;
}

void f_0066d840(void)
{
    FN_ENTER(0x0066d840);
    /* 0066d840: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d841: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d843: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d845: push 0x8e8e14 */ { u32 v = 0x8e8e14u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d84a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d851: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066d858: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d85b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066d85e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066d861: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066d864: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066d867: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d86c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066d873: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x66d878u); f_005caba4();
    /* 0066d878: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066d879: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066d87c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d87e: je 0x66d8b7 */ if (fZ) goto L_0066d8b7;
L_0066d880:; BB(0x0066d880);
    /* 0066d880: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066d887: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d88e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d891: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d897: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d89a: call 0x66d8bc */ r_esp -= 4; W32(r_esp, 0x66d89fu); f_0066d8bc();
    /* 0066d89f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066d8a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066d8a9:; BB(0x0066d8a9);
    /* 0066d8a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d8ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d8b3: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d8b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d8b6: ret  */ FN_RET(0x0066d840); r_esp += 4; return;
L_0066d8b7:; BB(0x0066d8b7);
    /* 0066d8b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d8b9: jmp 0x66d8a9 */ goto L_0066d8a9;
}

void f_0066d8bc(void) /* sub_66D8BC */
{
    FN_ENTER(0x0066d8bc);
    /* 0066d8bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066d8bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0066d8bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066d8c1: push 0x8e8e4a */ { u32 v = 0x8e8e4au; r_esp -= 4; W32(r_esp, v); }
    /* 0066d8c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066d8cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066d8cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066d8d4: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066d8d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066d8da: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0066d8dd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0066d8e0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0066d8e3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d8e6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066d8e9: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0066d8ec: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66d8f1u); f_0066982c();
    /* 0066d8f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066d8f8: mov ebx, dword ptr [ebp - 0x44] */ r_ebx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d8fb: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 0066d901: mov dword ptr [ebx], 0xb356e0 */ W32((u32)(r_ebx), 0xb356e0u);
    /* 0066d907: mov ecx, dword ptr [0x9c9650] */ r_ecx = R32((u32)(0x9c9650u));
    /* 0066d90d: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0066d917: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0066d91a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066d91b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066d91c: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d91e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066d920: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066d923: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066d925: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066d927: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0066d92a: fild dword ptr [ebp - 0x40] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc0u)));
    /* 0066d92d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0066d930: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x66d935u); f_0082e900();
    /* 0066d935: mov edx, dword ptr [ebp - 0x44] */ r_edx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d938: fnstcw word ptr [ebp - 0x38] */ W16((u32)(r_ebp+0xffffffc8u), fcw);
    /* 0066d93b: movzx eax, word ptr [ebp - 0x38] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc8u));
    /* 0066d93f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066d944: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0066d947: fldcw word ptr [ebp - 0x30] */ fcw = R16((u32)(r_ebp+0xffffffd0u));
    /* 0066d94a: fistp dword ptr [ebp - 0x28] */ W32((u32)(r_ebp+0xffffffd8u), (u32)fx_int32(ST(0))); FPOP();
    /* 0066d94d: fldcw word ptr [ebp - 0x38] */ fcw = R16((u32)(r_ebp+0xffffffc8u));
    /* 0066d950: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0066d953: mov dword ptr [edx + 0x8c], eax */ W32((u32)(r_edx+0x8cu), r_eax);
    /* 0066d959: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x66d95eu); f_0078b1c4();
    /* 0066d95e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d961: jne 0x66d993 */ if (!fZ) goto L_0066d993;
L_0066d963:; BB(0x0066d963);
    /* 0066d963: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d966: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 0066d96c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d96e: jne 0x66d996 */ if (!fZ) goto L_0066d996;
L_0066d970:; BB(0x0066d970);
    /* 0066d970: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d973: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066d977: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066d97d: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 0066d981: mov eax, ecx */ r_eax = r_ecx;
    /* 0066d983: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d986: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d98d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d98f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d990: ret 8 */ FN_RET(0x0066d8bc); r_esp += 12; return;
L_0066d993:; BB(0x0066d993);
    /* 0066d993: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
L_0066d996:; BB(0x0066d996);
    /* 0066d996: mov dword ptr [ecx + 0xac], 0x41700000 */ W32((u32)(r_ecx+0xacu), 0x41700000u);
    /* 0066d9a0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x66d9a5u); f_006dc358();
    /* 0066d9a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066d9a8: je 0x66d9ca */ if (fZ) goto L_0066d9ca;
L_0066d9aa:; BB(0x0066d9aa);
    /* 0066d9aa: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d9ad: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
L_0066d9b7:; BB(0x0066d9b7);
    /* 0066d9b7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066d9ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066d9bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066d9c4: mov esp, ebp */ r_esp = r_ebp;
    /* 0066d9c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066d9c7: ret 8 */ FN_RET(0x0066d8bc); r_esp += 12; return;
L_0066d9ca:; BB(0x0066d9ca);
    /* 0066d9ca: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 0066d9d1: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d9d6: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66d9dbu); f_008581c5();
    /* 0066d9db: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066d9de: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066d9e1: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0066d9e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066d9e6: je 0x66da1f */ if (fZ) goto L_0066da1f;
L_0066d9e8:; BB(0x0066d9e8);
    /* 0066d9e8: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0066d9ef: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0066d9f6: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0066d9fb: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066d9fe: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066da01: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066da04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066da05: call 0x640fb4 */ r_esp -= 4; W32(r_esp, 0x66da0au); f_00640fb4();
    /* 0066da0a: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_0066da11:; BB(0x0066da11);
    /* 0066da11: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 0066da14: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066da17: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0066da1d: jmp 0x66d9b7 */ goto L_0066d9b7;
L_0066da1f:; BB(0x0066da1f);
    /* 0066da1f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066da21: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0066da24: jmp 0x66da11 */ goto L_0066da11;
}

void f_0066da28(void) /* sub_66DA28 */
{
    FN_ENTER(0x0066da28);
    /* 0066da28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066da29: mov edi, ecx */ r_edi = r_ecx;
    /* 0066da2b: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0066da31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da33: je 0x66da5b */ if (fZ) goto L_0066da5b;
L_0066da35:; BB(0x0066da35);
    /* 0066da35: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0066da3c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066da3e: je 0x66da5b */ if (fZ) goto L_0066da5b;
L_0066da40:; BB(0x0066da40);
    /* 0066da40: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x66da45u); f_007365f4();
    /* 0066da45: mov edx, dword ptr [eax*4 + 0x9c9660] */ r_edx = R32((u32)(r_eax*4+0x9c9660u));
    /* 0066da4c: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 0066da52: mov eax, 1 */ r_eax = 0x1u;
    /* 0066da57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066da58: ret 4 */ FN_RET(0x0066da28); r_esp += 8; return;
L_0066da5b:; BB(0x0066da5b);
    /* 0066da5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da5d: je 0x66da7a */ if (fZ) goto L_0066da7a;
L_0066da5f:; BB(0x0066da5f);
    /* 0066da5f: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x66da64u); f_00791b48();
    /* 0066da64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da66: je 0x66da7a */ if (fZ) goto L_0066da7a;
L_0066da68:; BB(0x0066da68);
    /* 0066da68: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0066da6e: movsx edx, word ptr [eax + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 0066da75: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da78: je 0x66da80 */ if (fZ) goto L_0066da80;
L_0066da7a:; BB(0x0066da7a);
    /* 0066da7a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066da7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066da7d: ret 4 */ FN_RET(0x0066da28); r_esp += 8; return;
L_0066da80:; BB(0x0066da80);
    /* 0066da80: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x66da85u); f_00791b48();
    /* 0066da85: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0066da87: mov ecx, eax */ r_ecx = r_eax;
    /* 0066da89: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x66da8eu); f_0078fd68();
    /* 0066da8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066da90: je 0x66da7a */ if (fZ) goto L_0066da7a;
L_0066da92:; BB(0x0066da92);
    /* 0066da92: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 0066da98: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x66da9du); f_007365f4();
    /* 0066da9d: mov edx, dword ptr [eax*4 + 0x9c9660] */ r_edx = R32((u32)(r_eax*4+0x9c9660u));
    /* 0066daa4: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 0066daaa: mov eax, 1 */ r_eax = 0x1u;
    /* 0066daaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0066dab0: ret 4 */ FN_RET(0x0066da28); r_esp += 8; return;
}

void f_0066dab4(void) /* sub_66DAB4 */
{
    FN_ENTER(0x0066dab4);
    /* 0066dab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066dab5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066dab6: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066dab8: mov eax, dword ptr [ebp + 0xb0] */ r_eax = R32((u32)(r_ebp+0xb0u));
    /* 0066dabe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066dac0: je 0x66dac7 */ if (fZ) goto L_0066dac7;
L_0066dac2:; BB(0x0066dac2);
    /* 0066dac2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066dac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066dac4: ret 4 */ FN_RET(0x0066dab4); r_esp += 8; return;
L_0066dac7:; BB(0x0066dac7);
    /* 0066dac7: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dac9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x66daceu); f_0073ec50();
    /* 0066dace: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0066dad2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dad3: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dad6: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x66dadbu); f_007354fc();
    /* 0066dadb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066dade: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 0066dae1: mov dword ptr [ebp + 0xb0], eax */ W32((u32)(r_ebp+0xb0u), r_eax);
    /* 0066dae7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066dae9: mov ebx, eax */ r_ebx = r_eax;
L_0066daeb:; BB(0x0066daeb);
    /* 0066daeb: push dword ptr [ebx*4 + 0x9c9654] */ { u32 v = R32((u32)(r_ebx*4+0x9c9654u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066daf2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0066daf4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x66daf9u); f_00792fe8();
    /* 0066daf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066dafc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dafd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0066daff: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066db05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066db06: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x66db0bu); f_00735c90();
    /* 0066db0b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066db0e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066db11: jl 0x66daeb */ if ((fS!=fO)) goto L_0066daeb;
L_0066db13:; BB(0x0066db13);
    /* 0066db13: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0066db16: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066db1c: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66db21u); f_0073608c();
    /* 0066db21: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066db27: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66db2cu); f_00736458();
    /* 0066db2c: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066db32: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066db39: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066db3e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066db45: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066db4b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066db52: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066db57: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066db5e: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66db63u); f_00717d68();
    /* 0066db63: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0066db67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db69: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0066db70: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66db75u); f_00791748();
    /* 0066db75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066db76: jmp 0x66dac2 */ goto L_0066dac2;
}

void f_0066daf4(void)
{
    FN_ENTER(0x0066daf4);
    goto L_0066daf4;
L_0066dac2:; BB(0x0066dac2);
    /* 0066dac2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066dac3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066dac4: ret 4 */ FN_RET(0x0066daf4); r_esp += 8; return;
L_0066daeb:; BB(0x0066daeb);
    /* 0066daeb: push dword ptr [ebx*4 + 0x9c9654] */ { u32 v = R32((u32)(r_ebx*4+0x9c9654u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066daf2: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
L_0066daf4:; BB(0x0066daf4);
    /* 0066daf4: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x66daf9u); f_00792fe8();
    /* 0066daf9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066dafc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dafd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0066daff: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066db05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066db06: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x66db0bu); f_00735c90();
    /* 0066db0b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0066db0e: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066db11: jl 0x66daeb */ if ((fS!=fO)) goto L_0066daeb;
L_0066db13:; BB(0x0066db13);
    /* 0066db13: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0066db16: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066db1c: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66db21u); f_0073608c();
    /* 0066db21: mov ecx, dword ptr [ebp + 0xb0] */ r_ecx = R32((u32)(r_ebp+0xb0u));
    /* 0066db27: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66db2cu); f_00736458();
    /* 0066db2c: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066db32: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066db39: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066db3e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066db45: mov edx, dword ptr [ebp + 0xb0] */ r_edx = R32((u32)(r_ebp+0xb0u));
    /* 0066db4b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066db52: or eax, 0xffff0200 */ {  u32 a = r_eax; u32 b = 0xffff0200u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066db57: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066db5e: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66db63u); f_00717d68();
    /* 0066db63: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0066db67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db69: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 0066db70: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66db75u); f_00791748();
    /* 0066db75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066db76: jmp 0x66dac2 */ goto L_0066dac2;
}

void f_0066db7c(void) /* sub_66DB7C */
{
    FN_ENTER(0x0066db7c);
    /* 0066db7c: call 0x668638 */ r_esp -= 4; W32(r_esp, 0x66db81u); f_00668638();
    /* 0066db81: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66db86u); f_00717d48();
    /* 0066db86: ret  */ FN_RET(0x0066db7c); r_esp += 4; return;
}

void f_0066db88(void) /* sub_66DB88 */
{
    FN_ENTER(0x0066db88);
    /* 0066db88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066db89: mov ebp, esp */ r_ebp = r_esp;
    /* 0066db8b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066db8d: push 0x8e8e70 */ { u32 v = 0x8e8e70u; r_esp -= 4; W32(r_esp, v); }
    /* 0066db92: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066db98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066db99: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066dba0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066dba3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066dba6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066dba9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066dbac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066dbaf: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbb4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0066dbbb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x66dbc0u); f_008581c5();
    /* 0066dbc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066dbc1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0066dbc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dbc6: je 0x66dd21 */ if (fZ) goto L_0066dd21;
L_0066dbcc:; BB(0x0066dbcc);
    /* 0066dbcc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0066dbd3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0066dbda: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066dbdd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066dbdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbe1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbe2: push 0x9c963c */ { u32 v = 0x9c963cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbe7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dbe9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x66dbeeu); f_005b7a84();
    /* 0066dbee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066dbf1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0066dbf8:; BB(0x0066dbf8);
    /* 0066dbf8: mov dword ptr [0xa8fd5c], ecx */ W32((u32)(0xa8fd5cu), r_ecx);
    /* 0066dbfe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066dc05: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dc07: je 0x66dc14 */ if (fZ) goto L_0066dc14;
L_0066dc09:; BB(0x0066dc09);
    /* 0066dc09: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x66dc0eu); f_005b90d0();
    /* 0066dc0e: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
L_0066dc14:; BB(0x0066dc14);
    /* 0066dc14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc16: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x66dc1bu); f_005b8638();
    /* 0066dc1b: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066dc21: mov dword ptr [0xa8fd58], eax */ W32((u32)(0xa8fd58u), r_eax);
    /* 0066dc26: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc28: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x66dc2du); f_005b8624();
    /* 0066dc2d: mov ecx, dword ptr [0xa8fd5c] */ r_ecx = R32((u32)(0xa8fd5cu));
    /* 0066dc33: mov dword ptr [0xa8fd54], eax */ W32((u32)(0xa8fd54u), r_eax);
    /* 0066dc38: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc3a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66dc3fu); f_005b8610();
    /* 0066dc3f: mov ebx, eax */ r_ebx = r_eax;
    /* 0066dc41: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 0066dc44: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0066dc47: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0066dc4a: mov edi, dword ptr [ecx + 0x30] */ r_edi = R32((u32)(r_ecx+0x30u));
    /* 0066dc4d: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 0066dc50: mov dword ptr [0xa8fd3c], edx */ W32((u32)(0xa8fd3cu), r_edx);
    /* 0066dc56: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 0066dc59: mov dword ptr [0xa8fd40], esi */ W32((u32)(0xa8fd40u), r_esi);
    /* 0066dc5f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0066dc62: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0066dc65: mov dword ptr [0xa8fd34], 0 */ W32((u32)(0xa8fd34u), 0x0u);
    /* 0066dc6f: mov dword ptr [0xa8fd44], edx */ W32((u32)(0xa8fd44u), r_edx);
    /* 0066dc75: push 0x939e68 */ { u32 v = 0x939e68u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dc7a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0066dc7d: push dword ptr [0xa8fd54] */ { u32 v = R32((u32)(0xa8fd54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066dc83: mov dword ptr [0xa8fd48], edx */ W32((u32)(0xa8fd48u), r_edx);
    /* 0066dc89: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0066dc8c: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0066dc8f: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0066dc92: mov dword ptr [0xa8fd4c], edx */ W32((u32)(0xa8fd4cu), r_edx);
    /* 0066dc98: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0066dc9b: mov dword ptr [0xa8fd50], edx */ W32((u32)(0xa8fd50u), r_edx);
    /* 0066dca1: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 0066dca4: mov edx, dword ptr [edx + 0x30] */ r_edx = R32((u32)(r_edx+0x30u));
    /* 0066dca7: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0066dcaa: mov dword ptr [0xa8fd38], edx */ W32((u32)(0xa8fd38u), r_edx);
    /* 0066dcb0: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x66dcb5u); f_0081a630();
    /* 0066dcb5: push 0x939e78 */ { u32 v = 0x939e78u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcba: push dword ptr [0xa8fd54] */ { u32 v = R32((u32)(0xa8fd54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066dcc0: mov dword ptr [0xa8fd30], eax */ W32((u32)(0xa8fd30u), r_eax);
    /* 0066dcc5: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x66dccau); f_0081a630();
    /* 0066dcca: push 0x939e88 */ { u32 v = 0x939e88u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dccf: push dword ptr [0xa8fd54] */ { u32 v = R32((u32)(0xa8fd54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066dcd5: mov dword ptr [0xa8fd2c], eax */ W32((u32)(0xa8fd2cu), r_eax);
    /* 0066dcda: call 0x81a630 */ r_esp -= 4; W32(r_esp, 0x66dcdfu); f_0081a630();
    /* 0066dcdf: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 0066dce2: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 0066dce5: mov ebx, dword ptr [ecx + 0x30] */ r_ebx = R32((u32)(r_ecx+0x30u));
    /* 0066dce8: mov dword ptr [0xa8fd28], eax */ W32((u32)(0xa8fd28u), r_eax);
    /* 0066dced: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcee: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066dcf1: mov dword ptr [0xa8fd24], 0 */ W32((u32)(0xa8fd24u), 0x0u);
    /* 0066dcfb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066dcfd: call 0x66f3d4 */ r_esp -= 4; W32(r_esp, 0x66dd02u); f_0066f3d4();
    /* 0066dd02: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066dd05: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0066dd08: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0066dd0b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066dd0e: mov dword ptr [0xa8fd24], eax */ W32((u32)(0xa8fd24u), r_eax);
    /* 0066dd13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066dd16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066dd1d: mov esp, ebp */ r_esp = r_ebp;
    /* 0066dd1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066dd20: ret  */ FN_RET(0x0066db88); r_esp += 4; return;
L_0066dd21:; BB(0x0066dd21);
    /* 0066dd21: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0066dd23: jmp 0x66dbf8 */ goto L_0066dbf8;
}

void f_0066dd28(void) /* sub_66DD28 */
{
    FN_ENTER(0x0066dd28);
    /* 0066dd28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066dd2b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066dd2d: call 0x66dd4c */ r_esp -= 4; W32(r_esp, 0x66dd32u); f_0066dd4c();
    /* 0066dd32: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0066dd36: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066dd38: jne 0x66dd3e */ if (!fZ) goto L_0066dd3e;
L_0066dd3a:; BB(0x0066dd3a);
    /* 0066dd3a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066dd3b: ret 4 */ FN_RET(0x0066dd28); r_esp += 8; return;
L_0066dd3e:; BB(0x0066dd3e);
    /* 0066dd3e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd3f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x66dd44u); f_005c2f74();
    /* 0066dd44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066dd45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066dd46: ret 4 */ FN_RET(0x0066dd28); r_esp += 8; return;
}

void f_0066dd4c(void) /* sub_66DD4C */
{
    FN_ENTER(0x0066dd4c);
    /* 0066dd4c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd4d: mov ebp, esp */ r_ebp = r_esp;
    /* 0066dd4f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd51: push 0x8e8e8c */ { u32 v = 0x8e8e8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd56: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0066dd5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd5d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0066dd64: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066dd67: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0066dd6a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0066dd6d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0066dd70: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0066dd73: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0066dd76: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0066dd79: mov dword ptr [ecx], 0xb35800 */ W32((u32)(r_ecx), 0xb35800u);
    /* 0066dd7f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0066dd86: call 0x66873c */ r_esp -= 4; W32(r_esp, 0x66dd8bu); f_0066873c();
    /* 0066dd8b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066dd8e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0066dd95: mov esp, ebp */ r_esp = r_ebp;
    /* 0066dd97: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066dd98: ret  */ FN_RET(0x0066dd4c); r_esp += 4; return;
}

void f_0066dd9c(void) /* sub_66DD9C */
{
    FN_ENTER(0x0066dd9c);
    /* 0066dd9c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dd9d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0066dd9f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066dda3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066dda7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0066dda9: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x66ddaeu); f_0066982c();
    /* 0066ddae: mov dword ptr [ebx], 0xb35800 */ W32((u32)(r_ebx), 0xb35800u);
    /* 0066ddb4: mov edx, dword ptr [0x9c968c] */ r_edx = R32((u32)(0x9c968cu));
    /* 0066ddba: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 0066ddbd: mov edx, dword ptr [0xa8fd68] */ r_edx = R32((u32)(0xa8fd68u));
    /* 0066ddc3: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 0066ddcd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066ddcf: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 0066ddd5: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 0066dddf: mov dword ptr [ebx + 0xd4], eax */ W32((u32)(r_ebx+0xd4u), r_eax);
    /* 0066dde5: mov dword ptr [ebx + 0xd8], eax */ W32((u32)(r_ebx+0xd8u), r_eax);
    /* 0066ddeb: mov edx, dword ptr [edx + 0x430] */ r_edx = R32((u32)(r_edx+0x430u));
    /* 0066ddf1: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 0066ddf4: mov dword ptr [ebx + 0xdc], edx */ W32((u32)(r_ebx+0xdcu), r_edx);
    /* 0066ddfa: mov edx, dword ptr [ebx + 0x88] */ r_edx = R32((u32)(r_ebx+0x88u));
    /* 0066de00: mov dword ptr [ebx + 0xe0], eax */ W32((u32)(r_ebx+0xe0u), r_eax);
    /* 0066de06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066de08: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066de0a: jg 0x66de0e */ if ((!fZ&&fS==fO)) goto L_0066de0e;
L_0066de0c:; BB(0x0066de0c);
    /* 0066de0c: mov edx, eax */ r_edx = r_eax;
L_0066de0e:; BB(0x0066de0e);
    /* 0066de0e: mov eax, 1 */ r_eax = 0x1u;
    /* 0066de13: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066de16: jl 0x66de1a */ if ((fS!=fO)) goto L_0066de1a;
L_0066de18:; BB(0x0066de18);
    /* 0066de18: mov edx, eax */ r_edx = r_eax;
L_0066de1a:; BB(0x0066de1a);
    /* 0066de1a: mov dword ptr [ebx + 0x88], edx */ W32((u32)(r_ebx+0x88u), r_edx);
    /* 0066de20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066de22: jne 0x66de30 */ if (!fZ) goto L_0066de30;
L_0066de24:; BB(0x0066de24);
    /* 0066de24: mov dword ptr [ebx + 0xd0], 1 */ W32((u32)(r_ebx+0xd0u), 0x1u);
    /* 0066de2e: jmp 0x66de4b */ goto L_0066de4b;
L_0066de30:; BB(0x0066de30);
    /* 0066de30: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0066de33: jne 0x66de41 */ if (!fZ) goto L_0066de41;
L_0066de35:; BB(0x0066de35);
    /* 0066de35: mov dword ptr [ebx + 0xd0], 0 */ W32((u32)(r_ebx+0xd0u), 0x0u);
    /* 0066de3f: jmp 0x66de4b */ goto L_0066de4b;
L_0066de41:; BB(0x0066de41);
    /* 0066de41: mov dword ptr [ebx + 0xd0], 1 */ W32((u32)(r_ebx+0xd0u), 0x1u);
L_0066de4b:; BB(0x0066de4b);
    /* 0066de4b: mov eax, ebx */ r_eax = r_ebx;
    /* 0066de4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066de4e: ret 8 */ FN_RET(0x0066dd9c); r_esp += 12; return;
}

void f_0066de54(void) /* sub_66DE54 */
{
    FN_ENTER(0x0066de54);
    /* 0066de54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066de55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066de56: sub esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066de59: mov esi, ecx */ r_esi = r_ecx;
    /* 0066de5b: fld dword ptr [0x939eb0] */ FPUSH(R_F32((u32)(0x939eb0u)));
    /* 0066de61: fadd dword ptr [esi + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xccu));
    /* 0066de67: mov edx, dword ptr [esi + 0xdc] */ r_edx = R32((u32)(r_esi+0xdcu));
    /* 0066de6d: fst dword ptr [esi + 0xcc] */ W_F32((u32)(r_esi+0xccu), ST(0));
    /* 0066de73: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0066de76: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0066de79: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 0066de7d: fild dword ptr [esp + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x48u)));
    /* 0066de81: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0066de84: fadd dword ptr [eax*4 + 0x939ea0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x939ea0u));
    /* 0066de8b: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 0066de8d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0066de8f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0066de90: jae 0x66de9c */ if (!fC) goto L_0066de9c;
L_0066de92:; BB(0x0066de92);
    /* 0066de92: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
L_0066de9c:; BB(0x0066de9c);
    /* 0066de9c: fld dword ptr [0x939eb4] */ FPUSH(R_F32((u32)(0x939eb4u)));
    /* 0066dea2: fadd dword ptr [esi + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0xc8u));
    /* 0066dea8: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 0066deaf: fstp dword ptr [esi + 0xc8] */ W_F32((u32)(r_esi+0xc8u), ST(0)); FPOP();
    /* 0066deb5: mov ecx, esi */ r_ecx = r_esi;
    /* 0066deb7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066deb8: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066debe: call 0x669a58 */ r_esp -= 4; W32(r_esp, 0x66dec3u); f_00669a58();
    /* 0066dec3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dec5: je 0x66df6a */ if (fZ) goto L_0066df6a;
L_0066decb:; BB(0x0066decb);
    /* 0066decb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066decd: mov ecx, esi */ r_ecx = r_esi;
    /* 0066decf: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x66ded2u); call_ind(t); }
    /* 0066ded2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066ded4: je 0x66df74 */ if (fZ) goto L_0066df74;
L_0066deda:; BB(0x0066deda);
    /* 0066deda: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066dee0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dee2: je 0x66dfdf */ if (fZ) goto L_0066dfdf;
L_0066dee8:; BB(0x0066dee8);
    /* 0066dee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066deea: je 0x66df8a */ if (fZ) goto L_0066df8a;
L_0066def0:; BB(0x0066def0);
    /* 0066def0: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 0066def7: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066def9: je 0x66df12 */ if (fZ) goto L_0066df12;
L_0066defb:; BB(0x0066defb);
    /* 0066defb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066defd: mov dword ptr [esi + 0xbc], 1 */ W32((u32)(r_esi+0xbcu), 0x1u);
    /* 0066df07: mov ecx, esi */ r_ecx = r_esi;
    /* 0066df09: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x66df0cu); call_ind(t); }
    /* 0066df0c: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066df0f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066df10: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066df11: ret  */ FN_RET(0x0066de54); r_esp += 4; return;
L_0066df12:; BB(0x0066df12);
    /* 0066df12: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0066df14: je 0x66df4d */ if (fZ) goto L_0066df4d;
L_0066df16:; BB(0x0066df16);
    /* 0066df16: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x66df1bu); f_007365f4();
    /* 0066df1b: mov ebx, eax */ r_ebx = r_eax;
    /* 0066df1d: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0066df23: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066df25: je 0x66df44 */ if (fZ) goto L_0066df44;
L_0066df27:; BB(0x0066df27);
    /* 0066df27: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0066df2b: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066df31: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0066df35: mov dword ptr [esi + 0xb0], 0 */ W32((u32)(r_esi+0xb0u), 0x0u);
    /* 0066df3f: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66df44u); f_00717d48();
L_0066df44:; BB(0x0066df44);
    /* 0066df44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066df45: call 0x79f500 */ r_esp -= 4; W32(r_esp, 0x66df4au); f_0079f500();
    /* 0066df4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066df4b: jmp 0x66df8a */ goto L_0066df8a;
L_0066df4d:; BB(0x0066df4d);
    /* 0066df4d: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x66df52u); f_00791b48();
    /* 0066df52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066df54: je 0x66df8a */ if (fZ) goto L_0066df8a;
L_0066df56:; BB(0x0066df56);
    /* 0066df56: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0066df5c: movsx edx, word ptr [eax + 0x86] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 0066df63: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066df66: jne 0x66df8a */ if (!fZ) goto L_0066df8a;
L_0066df68:; BB(0x0066df68);
    /* 0066df68: jmp 0x66df90 */ goto L_0066df90;
L_0066df6a:; BB(0x0066df6a);
    /* 0066df6a: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
L_0066df74:; BB(0x0066df74);
    /* 0066df74: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0066df7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066df7c: je 0x66df8a */ if (fZ) goto L_0066df8a;
L_0066df7e:; BB(0x0066df7e);
    /* 0066df7e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0066df80: mov ecx, esi */ r_ecx = r_esi;
    /* 0066df82: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x66df85u); call_ind(t); }
    /* 0066df85: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66df8au); f_00717d48();
L_0066df8a:; BB(0x0066df8a);
    /* 0066df8a: add esp, 0x54 */ {  u32 a = r_esp; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066df8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066df8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066df8f: ret  */ FN_RET(0x0066de54); r_esp += 4; return;
L_0066df90:; BB(0x0066df90);
    /* 0066df90: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x66df95u); f_00791b48();
    /* 0066df95: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0066df97: mov ecx, eax */ r_ecx = r_eax;
    /* 0066df99: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x66df9eu); f_0078fd68();
    /* 0066df9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dfa0: je 0x66df8a */ if (fZ) goto L_0066df8a;
L_0066dfa2:; BB(0x0066dfa2);
    /* 0066dfa2: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066dfa8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x66dfadu); f_007365f4();
    /* 0066dfad: mov ebx, eax */ r_ebx = r_eax;
    /* 0066dfaf: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 0066dfb5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dfb7: je 0x66dfd6 */ if (fZ) goto L_0066dfd6;
L_0066dfb9:; BB(0x0066dfb9);
    /* 0066dfb9: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0066dfbd: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0066dfc3: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 0066dfc7: mov dword ptr [esi + 0xb0], 0 */ W32((u32)(r_esi+0xb0u), 0x0u);
    /* 0066dfd1: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x66dfd6u); f_00717d48();
L_0066dfd6:; BB(0x0066dfd6);
    /* 0066dfd6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066dfd7: call 0x79f500 */ r_esp -= 4; W32(r_esp, 0x66dfdcu); f_0079f500();
    /* 0066dfdc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066dfdd: jmp 0x66df8a */ goto L_0066df8a;
L_0066dfdf:; BB(0x0066dfdf);
    /* 0066dfdf: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0066dfe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066dfe6: jne 0x66dee8 */ if (!fZ) goto L_0066dee8;
L_0066dfec:; BB(0x0066dfec);
    /* 0066dfec: mov dword ptr [esp], 0x43e10000 */ W32((u32)(r_esp), 0x43e10000u);
    /* 0066dff3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0066dff6: mov dword ptr [esp + 4], 0x42c80000 */ W32((u32)(r_esp+0x4u), 0x42c80000u);
    /* 0066dffe: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0066e000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e001: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x66e006u); f_00735708();
    /* 0066e006: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e009: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 0066e00d: mov dword ptr [esi + 0xb0], eax */ W32((u32)(r_esi+0xb0u), r_eax);
    /* 0066e013: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0066e015:; BB(0x0066e015);
    /* 0066e015: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066e017: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0066e01b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0066e01f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0066e023: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0066e027: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0066e02b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0066e02f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0066e033: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 0066e037: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 0066e03b: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0066e03f: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0066e043: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 0066e047: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0066e04b: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0066e04f: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 0066e053: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 0066e057: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e059: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x66e05eu); f_00793168();
    /* 0066e05e: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0066e062: lea edi, [ebx + 1] */ r_edi = (u32)(r_ebx+0x1u);
    /* 0066e065: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066e066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e067: push 0x939ee0 */ { u32 v = 0x939ee0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e06c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e06d: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x66e072u); f_00857e29();
    /* 0066e072: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066e075: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0066e079: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066e07a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e07c: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066e082: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066e083: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x66e088u); f_00735c90();
    /* 0066e088: mov ebx, edi */ r_ebx = r_edi;
    /* 0066e08a: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0066e08d: jl 0x66e015 */ if ((fS!=fO)) goto L_0066e015;
L_0066e08f:; BB(0x0066e08f);
    /* 0066e08f: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
    /* 0066e093: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066e099: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66e09eu); f_0073608c();
    /* 0066e09e: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066e0a4: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x66e0a9u); f_00736458();
    /* 0066e0a9: mov edx, dword ptr [esi + 0xb0] */ r_edx = R32((u32)(r_esi+0xb0u));
    /* 0066e0af: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0066e0b6: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066e0bb: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0066e0c2: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x66e0c7u); f_00717d68();
    /* 0066e0c7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0066e0c9: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x66e0ceu); f_00791748();
    /* 0066e0ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066e0cf: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066e0d5: jmp 0x66dee8 */ goto L_0066dee8;
}

