#include "protos.h"

void f_00867cd0(void) /* _strcspn */
{
    FN_ENTER(0x00867cd0);
    /* 00867cd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867cd1: mov ebp, esp */ r_ebp = r_esp;
    /* 00867cd3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867cd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00867cd6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cd7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cdc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cdd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867cde: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00867ce1: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_00867ce4:; BB(0x00867ce4);
    /* 00867ce4: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00867ce6: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00867ce8: je 0x867cf3 */ if (fZ) goto L_00867cf3;
L_00867cea:; BB(0x00867cea);
    /* 00867cea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00867ced: bts dword ptr [esp], eax */ { u32 bo = r_eax; u32 ad = (u32)(r_esp) + (u32)(((i32)bo >> 5) * 4); u32 bit = bo & 31; u32 v = R32(ad); fC = (v >> bit) & 1; v |= 1u << bit; W32(ad, v); }
    /* 00867cf1: jmp 0x867ce4 */ goto L_00867ce4;
L_00867cf3:; BB(0x00867cf3);
    /* 00867cf3: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00867cf6: or ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00867cf9: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_00867cfc:; BB(0x00867cfc);
    /* 00867cfc: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00867cff: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00867d01: or al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 00867d03: je 0x867d0e */ if (fZ) goto L_00867d0e;
L_00867d05:; BB(0x00867d05);
    /* 00867d05: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00867d08: bt dword ptr [esp], eax */ { u32 bo = r_eax; u32 ad = (u32)(r_esp) + (u32)(((i32)bo >> 5) * 4); u32 bit = bo & 31; u32 v = R32(ad); fC = (v >> bit) & 1;   }
    /* 00867d0c: jae 0x867cfc */ if (!fC) goto L_00867cfc;
L_00867d0e:; BB(0x00867d0e);
    /* 00867d0e: mov eax, ecx */ r_eax = r_ecx;
    /* 00867d10: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00867d13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867d14: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00867d15: ret  */ FN_RET(0x00867cd0); r_esp += 4; return;
}

void f_00867d16(void) /* _TranslateName */
{
    FN_ENTER(0x00867d16);
    /* 00867d16: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867d17: mov ebp, esp */ r_ebp = r_esp;
    /* 00867d19: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00867d1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867d1c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00867d1e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867d1f: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867d22: jl 0x867d6a */ if ((fS!=fO)) goto L_00867d6a;
L_00867d24:; BB(0x00867d24);
    /* 00867d24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867d25: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00867d26:; BB(0x00867d26);
    /* 00867d26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867d28: je 0x867d68 */ if (fZ) goto L_00867d68;
L_00867d2a:; BB(0x00867d2a);
    /* 00867d2a: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00867d2d: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867d2f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00867d30: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00867d32: mov esi, eax */ r_esi = r_eax;
    /* 00867d34: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00867d37: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00867d39: lea edi, [eax + esi*8] */ r_edi = (u32)(r_eax+r_esi*8);
    /* 00867d3c: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00867d3e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00867d41: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00867d43: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x867d48u); f_008599e3();
    /* 00867d48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00867d4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867d4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867d4c: jne 0x867d58 */ if (!fZ) goto L_00867d58;
L_00867d4e:; BB(0x00867d4e);
    /* 00867d4e: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00867d51: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00867d54: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 00867d56: jmp 0x867d63 */ goto L_00867d63;
L_00867d58:; BB(0x00867d58);
    /* 00867d58: jge 0x867d60 */ if ((fS==fO)) goto L_00867d60;
L_00867d5a:; BB(0x00867d5a);
    /* 00867d5a: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00867d5b: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00867d5e: jmp 0x867d63 */ goto L_00867d63;
L_00867d60:; BB(0x00867d60);
    /* 00867d60: lea ebx, [esi + 1] */ r_ebx = (u32)(r_esi+0x1u);
L_00867d63:; BB(0x00867d63);
    /* 00867d63: cmp ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867d66: jle 0x867d26 */ if ((fZ||fS!=fO)) goto L_00867d26;
L_00867d68:; BB(0x00867d68);
    /* 00867d68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00867d69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00867d6a:; BB(0x00867d6a);
    /* 00867d6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00867d6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00867d6e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00867d71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00867d72: mov eax, ecx */ r_eax = r_ecx;
    /* 00867d74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00867d75: ret  */ FN_RET(0x00867d16); r_esp += 4; return;
}

void f_00867d76(void) /* _GetLcidFromDefault */
{
    FN_ENTER(0x00867d76);
    /* 00867d76: or word ptr [0xae7e70], 0x104 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R16(ad); u32 b = 0x104u; u32 r = (a | b) & 0xffffu; W16(ad, r);  }
    /* 00867d7f: call dword ptr [0x8f82b8] */ { u32 t = R32((u32)(0x8f82b8u)); r_esp -= 4; W32(r_esp, 0x867d85u); call_ind(t); }
    /* 00867d85: mov dword ptr [0xae7e78], eax */ W32((u32)(0xae7e78u), r_eax);
    /* 00867d8a: mov dword ptr [0xae7e74], eax */ W32((u32)(0xae7e74u), r_eax);
    /* 00867d8f: ret  */ FN_RET(0x00867d76); r_esp += 4; return;
}

void f_00867d90(void) /* _ProcessCodePage */
{
    FN_ENTER(0x00867d90);
    /* 00867d90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867d91: mov ebp, esp */ r_ebp = r_esp;
    /* 00867d93: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00867d96: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00867d9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867d9c: mov esi, ecx */ r_esi = r_ecx;
    /* 00867d9e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867da0: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00867da3: je 0x867dd6 */ if (fZ) goto L_00867dd6;
L_00867da5:; BB(0x00867da5);
    /* 00867da5: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867da8: je 0x867dd6 */ if (fZ) goto L_00867dd6;
L_00867daa:; BB(0x00867daa);
    /* 00867daa: push 0x99a210 */ { u32 v = 0x99a210u; r_esp -= 4; W32(r_esp, v); }
    /* 00867daf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867db0: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x867db5u); f_00864570();
    /* 00867db5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867db7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867db8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867db9: je 0x867dd6 */ if (fZ) goto L_00867dd6;
L_00867dbb:; BB(0x00867dbb);
    /* 00867dbb: push 0x99a20c */ { u32 v = 0x99a20cu; r_esp -= 4; W32(r_esp, v); }
    /* 00867dc0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867dc1: call 0x864570 */ r_esp -= 4; W32(r_esp, 0x867dc6u); f_00864570();
    /* 00867dc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867dc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867dc9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867dca: jne 0x867df4 */ if (!fZ) goto L_00867df4;
L_00867dcc:; BB(0x00867dcc);
    /* 00867dcc: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00867dce: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00867dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867dd2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00867dd4: jmp 0x867de1 */ goto L_00867de1;
L_00867dd6:; BB(0x00867dd6);
    /* 00867dd6: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00867dd8: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00867ddb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867ddc: push 0x1004 */ { u32 v = 0x1004u; r_esp -= 4; W32(r_esp, v); }
L_00867de1:; BB(0x00867de1);
    /* 00867de1: push dword ptr [0xae7e78] */ { u32 v = R32((u32)(0xae7e78u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867de7: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x867dedu); call_ind(t); }
    /* 00867ded: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867def: je 0x867dfb */ if (fZ) goto L_00867dfb;
L_00867df1:; BB(0x00867df1);
    /* 00867df1: lea esi, [ebp - 0xc] */ r_esi = (u32)(r_ebp+0xfffffff4u);
L_00867df4:; BB(0x00867df4);
    /* 00867df4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867df5: call 0x85a072 */ r_esp -= 4; W32(r_esp, 0x867dfau); f_0085a072();
    /* 00867dfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00867dfb:; BB(0x00867dfb);
    /* 00867dfb: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00867dfe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867dff: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x867e04u); f_0085e419();
    /* 00867e04: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00867e05: ret  */ FN_RET(0x00867d90); r_esp += 4; return;
}

void f_00867e06(void) /* _TestDefaultCountry */
{
    FN_ENTER(0x00867e06);
    /* 00867e06: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00867e08:; BB(0x00867e08);
    /* 00867e08: mov cx, word ptr [esp + 4] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_esp+0x4u))) & 0xffffu);
    /* 00867e0d: cmp cx, word ptr [eax + 0x999a2c] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_eax+0x999a2cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00867e14: je 0x867e21 */ if (fZ) goto L_00867e21;
L_00867e16:; BB(0x00867e16);
    /* 00867e16: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867e17: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867e18: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00867e1b: jb 0x867e08 */ if (fC) goto L_00867e08;
L_00867e1d:; BB(0x00867e1d);
    /* 00867e1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00867e1f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00867e20: ret  */ FN_RET(0x00867e06); r_esp += 4; return;
L_00867e21:; BB(0x00867e21);
    /* 00867e21: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00867e23: ret  */ FN_RET(0x00867e06); r_esp += 4; return;
}

void f_00867e24(void) /* _crtGetLocaleInfoA@16 */
{
    FN_ENTER(0x00867e24);
    /* 00867e24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867e25: mov ebp, esp */ r_ebp = r_esp;
    /* 00867e27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867e28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867e29: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00867e2a: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 00867e2c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00867e2e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00867e2f:; BB(0x00867e2f);
    /* 00867e2f: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00867e32: lea eax, [edi + esi] */ r_eax = (u32)(r_edi+r_esi);
    /* 00867e35: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00867e36: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00867e38: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00867e3a: mov ecx, eax */ r_ecx = r_eax;
    /* 00867e3c: imul ecx, ecx, 0x2c */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)0x2cu; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867e3f: mov ecx, dword ptr [ecx + 0x999410] */ r_ecx = R32((u32)(r_ecx+0x999410u));
    /* 00867e45: cmp dword ptr [ebp + 8], ecx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00867e48: je 0x867e6f */ if (fZ) goto L_00867e6f;
L_00867e4a:; BB(0x00867e4a);
    /* 00867e4a: jae 0x867e51 */ if (!fC) goto L_00867e51;
L_00867e4c:; BB(0x00867e4c);
    /* 00867e4c: lea edi, [eax - 1] */ r_edi = (u32)(r_eax+0xffffffffu);
    /* 00867e4f: jmp 0x867e54 */ goto L_00867e54;
L_00867e51:; BB(0x00867e51);
    /* 00867e51: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
L_00867e54:; BB(0x00867e54);
    /* 00867e54: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867e56: jle 0x867e2f */ if ((fZ||fS!=fO)) goto L_00867e2f;
L_00867e58:; BB(0x00867e58);
    /* 00867e58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867e59: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867e5c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867e5f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867e62: call dword ptr [0x8f82bc] */ { u32 t = R32((u32)(0x8f82bcu)); r_esp -= 4; W32(r_esp, 0x867e68u); call_ind(t); }
L_00867e68:; BB(0x00867e68);
    /* 00867e68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00867e69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867e6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00867e6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00867e6c: ret 0x10 */ FN_RET(0x00867e24); r_esp += 20; return;
L_00867e6f:; BB(0x00867e6f);
    /* 00867e6f: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00867e72: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e73: je 0x867ed0 */ if (fZ) goto L_00867ed0;
L_00867e75:; BB(0x00867e75);
    /* 00867e75: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00867e76: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e77: je 0x867ec6 */ if (fZ) goto L_00867ec6;
L_00867e79:; BB(0x00867e79);
    /* 00867e79: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e7c: je 0x867ebc */ if (fZ) goto L_00867ebc;
L_00867e7e:; BB(0x00867e7e);
    /* 00867e7e: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e81: je 0x867eb2 */ if (fZ) goto L_00867eb2;
L_00867e83:; BB(0x00867e83);
    /* 00867e83: sub ecx, 0xff6 */ {  u32 a = r_ecx; u32 b = 0xff6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e89: je 0x867ea7 */ if (fZ) goto L_00867ea7;
L_00867e8b:; BB(0x00867e8b);
    /* 00867e8b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e8c: je 0x867e9c */ if (fZ) goto L_00867e9c;
L_00867e8e:; BB(0x00867e8e);
    /* 00867e8e: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00867e8f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00867e90: jne 0x867e58 */ if (!fZ) goto L_00867e58;
L_00867e92:; BB(0x00867e92);
    /* 00867e92: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867e95: add eax, 0x999434 */ {  u32 a = r_eax; u32 b = 0x999434u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867e9a: jmp 0x867ed8 */ goto L_00867ed8;
L_00867e9c:; BB(0x00867e9c);
    /* 00867e9c: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867e9f: mov eax, dword ptr [eax + 0x999424] */ r_eax = R32((u32)(r_eax+0x999424u));
    /* 00867ea5: jmp 0x867ed8 */ goto L_00867ed8;
L_00867ea7:; BB(0x00867ea7);
    /* 00867ea7: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867eaa: mov eax, dword ptr [eax + 0x99941c] */ r_eax = R32((u32)(r_eax+0x99941cu));
    /* 00867eb0: jmp 0x867ed8 */ goto L_00867ed8;
L_00867eb2:; BB(0x00867eb2);
    /* 00867eb2: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867eb5: add eax, 0x99942c */ {  u32 a = r_eax; u32 b = 0x99942cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867eba: jmp 0x867ed8 */ goto L_00867ed8;
L_00867ebc:; BB(0x00867ebc);
    /* 00867ebc: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867ebf: add eax, 0x999428 */ {  u32 a = r_eax; u32 b = 0x999428u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867ec4: jmp 0x867ed8 */ goto L_00867ed8;
L_00867ec6:; BB(0x00867ec6);
    /* 00867ec6: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867ec9: add eax, 0x999420 */ {  u32 a = r_eax; u32 b = 0x999420u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867ece: jmp 0x867ed8 */ goto L_00867ed8;
L_00867ed0:; BB(0x00867ed0);
    /* 00867ed0: imul eax, eax, 0x2c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x2cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00867ed3: add eax, 0x999414 */ {  u32 a = r_eax; u32 b = 0x999414u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00867ed8:; BB(0x00867ed8);
    /* 00867ed8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867eda: je 0x867e58 */ if (fZ) goto L_00867e58;
L_00867ee0:; BB(0x00867ee0);
    /* 00867ee0: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867ee3: jl 0x867e58 */ if ((fS!=fO)) goto L_00867e58;
L_00867ee9:; BB(0x00867ee9);
    /* 00867ee9: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00867eec: lea ecx, [ebx - 1] */ r_ecx = (u32)(r_ebx+0xffffffffu);
    /* 00867eef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00867ef0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867ef1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867ef2: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x867ef7u); f_00858900();
    /* 00867ef7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00867ef9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fC = (r < a); }
    /* 00867efc: mov byte ptr [esi + ebx - 1], 0 */ W8((u32)(r_esi+r_ebx+0xffffffffu), 0x0u);
    /* 00867f01: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00867f02: jmp 0x867e68 */ goto L_00867e68;
}

void f_00867f07(void) /* _LcidFromHexString */
{
    FN_ENTER(0x00867f07);
    /* 00867f07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00867f09: jmp 0x867f35 */ goto L_00867f35;
L_00867f0b:; BB(0x00867f0b);
    /* 00867f0b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00867f0c: cmp cl, 0x61 */ {  u32 a = (u8)r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867f0f: jl 0x867f1b */ if ((fS!=fO)) goto L_00867f1b;
L_00867f11:; BB(0x00867f11);
    /* 00867f11: cmp cl, 0x66 */ {  u32 a = (u8)r_ecx; u32 b = 0x66u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867f14: jg 0x867f1b */ if ((!fZ&&fS==fO)) goto L_00867f1b;
L_00867f16:; BB(0x00867f16);
    /* 00867f16: add cl, 0xd9 */ {  u32 a = (u8)r_ecx; u32 b = 0xd9u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00867f19: jmp 0x867f28 */ goto L_00867f28;
L_00867f1b:; BB(0x00867f1b);
    /* 00867f1b: cmp cl, 0x41 */ {  u32 a = (u8)r_ecx; u32 b = 0x41u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867f1e: jl 0x867f28 */ if ((fS!=fO)) goto L_00867f28;
L_00867f20:; BB(0x00867f20);
    /* 00867f20: cmp cl, 0x46 */ {  u32 a = (u8)r_ecx; u32 b = 0x46u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867f23: jg 0x867f28 */ if ((!fZ&&fS==fO)) goto L_00867f28;
L_00867f25:; BB(0x00867f25);
    /* 00867f25: add cl, 0xf9 */ {  u32 a = (u8)r_ecx; u32 b = 0xf9u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_00867f28:; BB(0x00867f28);
    /* 00867f28: add eax, 0xffffffd */ {  u32 a = r_eax; u32 b = 0xffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867f2d: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 00867f30: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00867f33: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00867f35:; BB(0x00867f35);
    /* 00867f35: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00867f37: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00867f39: jne 0x867f0b */ if (!fZ) goto L_00867f0b;
L_00867f3b:; BB(0x00867f3b);
    /* 00867f3b: ret  */ FN_RET(0x00867f07); r_esp += 4; return;
}

void f_00867f3c(void) /* _GetPrimaryLen */
{
    FN_ENTER(0x00867f3c);
    /* 00867f3c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00867f3e:; BB(0x00867f3e);
    /* 00867f3e: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00867f40: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00867f41: cmp cl, 0x41 */ {  u32 a = (u8)r_ecx; u32 b = 0x41u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867f44: jl 0x867f4b */ if ((fS!=fO)) goto L_00867f4b;
L_00867f46:; BB(0x00867f46);
    /* 00867f46: cmp cl, 0x5a */ {  u32 a = (u8)r_ecx; u32 b = 0x5au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867f49: jle 0x867f55 */ if ((fZ||fS!=fO)) goto L_00867f55;
L_00867f4b:; BB(0x00867f4b);
    /* 00867f4b: cmp cl, 0x61 */ {  u32 a = (u8)r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00867f4e: jl 0x867f58 */ if ((fS!=fO)) goto L_00867f58;
L_00867f50:; BB(0x00867f50);
    /* 00867f50: cmp cl, 0x7a */ {  u32 a = (u8)r_ecx; u32 b = 0x7au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00867f53: jg 0x867f58 */ if ((!fZ&&fS==fO)) goto L_00867f58;
L_00867f55:; BB(0x00867f55);
    /* 00867f55: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867f56: jmp 0x867f3e */ goto L_00867f3e;
L_00867f58:; BB(0x00867f58);
    /* 00867f58: ret  */ FN_RET(0x00867f3c); r_esp += 4; return;
}

void f_00867f59(void) /* _CountryEnumProc@4 */
{
    FN_ENTER(0x00867f59);
    /* 00867f59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867f5a: mov ebp, esp */ r_ebp = r_esp;
    /* 00867f5c: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00867f5f: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00867f64: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00867f67: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867f68: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00867f6b: call 0x867f07 */ r_esp -= 4; W32(r_esp, 0x867f70u); f_00867f07();
    /* 00867f70: mov esi, eax */ r_esi = r_eax;
    /* 00867f72: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00867f74: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 00867f77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867f78: mov eax, dword ptr [0xae7e80] */ r_eax = R32((u32)(0xae7e80u));
    /* 00867f7d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00867f7f: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00867f81: and eax, 0xfffff005 */ {  u32 a = r_eax; u32 b = 0xfffff005u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00867f86: add eax, 0x1002 */ {  u32 a = r_eax; u32 b = 0x1002u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867f8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867f8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867f8d: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x867f93u); call_ind(t); }
    /* 00867f93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867f95: jne 0x867fa0 */ if (!fZ) goto L_00867fa0;
L_00867f97:; BB(0x00867f97);
    /* 00867f97: and dword ptr [0xae7e70], eax */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00867f9d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867f9e: jmp 0x867fe0 */ goto L_00867fe0;
L_00867fa0:; BB(0x00867fa0);
    /* 00867fa0: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 00867fa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867fa4: push dword ptr [0xae7e84] */ { u32 v = R32((u32)(0xae7e84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867faa: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x867fafu); f_008599e3();
    /* 00867faf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867fb2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867fb3: jne 0x867fd3 */ if (!fZ) goto L_00867fd3;
L_00867fb5:; BB(0x00867fb5);
    /* 00867fb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867fb6: call 0x867e06 */ r_esp -= 4; W32(r_esp, 0x867fbbu); f_00867e06();
    /* 00867fbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867fbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867fbe: je 0x867fd3 */ if (fZ) goto L_00867fd3;
L_00867fc0:; BB(0x00867fc0);
    /* 00867fc0: or dword ptr [0xae7e70], 4 */ { u32 ad = (u32)(0xae7e70u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00867fc7: mov dword ptr [0xae7e78], esi */ W32((u32)(0xae7e78u), r_esi);
    /* 00867fcd: mov dword ptr [0xae7e74], esi */ W32((u32)(0xae7e74u), r_esi);
L_00867fd3:; BB(0x00867fd3);
    /* 00867fd3: mov eax, dword ptr [0xae7e70] */ r_eax = R32((u32)(0xae7e70u));
    /* 00867fd8: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00867fdb: not eax */ r_eax = ~r_eax;
    /* 00867fdd: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00867fe0:; BB(0x00867fe0);
    /* 00867fe0: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00867fe3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867fe4: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x867fe9u); f_0085e419();
    /* 00867fe9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00867fea: ret 4 */ FN_RET(0x00867f59); r_esp += 8; return;
}

void f_00867fed(void) /* _TestDefaultLanguage */
{
    FN_ENTER(0x00867fed);
    /* 00867fed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867fee: mov ebp, esp */ r_ebp = r_esp;
    /* 00867ff0: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00867ff3: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00867ff8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00867ffb: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00867ffd: lea eax, [ebp - 0x7c] */ r_eax = (u32)(r_ebp+0xffffff84u);
    /* 00868000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868001: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00868004: and eax, 0x3ff */ {  u32 a = r_eax; u32 b = 0x3ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868009: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086800b: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00868010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868011: call dword ptr [0xae7e90] */ { u32 t = R32((u32)(0xae7e90u)); r_esp -= 4; W32(r_esp, 0x868017u); call_ind(t); }
    /* 00868017: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868019: je 0x86804d */ if (fZ) goto L_0086804d;
L_0086801b:; BB(0x0086801b);
    /* 0086801b: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 0086801e: call 0x867f07 */ r_esp -= 4; W32(r_esp, 0x868023u); f_00867f07();
    /* 00868023: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868026: je 0x868051 */ if (fZ) goto L_00868051;
L_00868028:; BB(0x00868028);
    /* 00868028: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086802c: je 0x868051 */ if (fZ) goto L_00868051;
L_0086802e:; BB(0x0086802e);
    /* 0086802e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086802f: push dword ptr [0xae7e8c] */ { u32 v = R32((u32)(0xae7e8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00868035: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86803au); f_0085d760();
    /* 0086803a: mov edx, dword ptr [0xae7e8c] */ r_edx = R32((u32)(0xae7e8cu));
    /* 00868040: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868041: mov esi, eax */ r_esi = r_eax;
    /* 00868043: call 0x867f3c */ r_esp -= 4; W32(r_esp, 0x868048u); f_00867f3c();
    /* 00868048: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086804a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086804b: jne 0x868051 */ if (!fZ) goto L_00868051;
L_0086804d:; BB(0x0086804d);
    /* 0086804d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086804f: jmp 0x868054 */ goto L_00868054;
L_00868051:; BB(0x00868051);
    /* 00868051: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00868053: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00868054:; BB(0x00868054);
    /* 00868054: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00868057: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86805cu); f_0085e419();
    /* 0086805c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086805d: ret  */ FN_RET(0x00867fed); r_esp += 4; return;
}

