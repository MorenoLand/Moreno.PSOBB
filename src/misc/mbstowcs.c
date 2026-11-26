#include "protos.h"

void f_00857e9d(void) /* ___mbstowcs_mt */
{
    FN_ENTER(0x00857e9d);
    /* 00857e9d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00857e9e: mov ebp, esp */ r_ebp = r_esp;
    /* 00857ea0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00857ea1: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00857ea4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857ea5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857ea6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00857ea8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00857eaa: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857eac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00857ead: je 0x857f69 */ if (fZ) goto L_00857f69;
L_00857eb3:; BB(0x00857eb3);
    /* 00857eb3: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00857eb6: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857eb8: je 0x857f93 */ if (fZ) goto L_00857f93;
L_00857ebe:; BB(0x00857ebe);
    /* 00857ebe: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00857ec1: cmp dword ptr [edi + 0x14], esi */ {  u32 a = R32((u32)(r_edi+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857ec4: jne 0x857eef */ if (!fZ) goto L_00857eef;
L_00857ec6:; BB(0x00857ec6);
    /* 00857ec6: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857ec8: jbe 0x857f93 */ if ((fC||fZ)) goto L_00857f93;
L_00857ece:; BB(0x00857ece);
    /* 00857ece: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00857ed1: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00857ed3: movzx si, byte ptr [ecx] */ r_esi = (r_esi & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 00857ed7: mov word ptr [edx], si */ W16((u32)(r_edx), (u16)r_esi);
    /* 00857eda: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00857edd: je 0x857f93 */ if (fZ) goto L_00857f93;
L_00857ee3:; BB(0x00857ee3);
    /* 00857ee3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00857ee4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857ee5: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00857ee6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00857ee8: jb 0x857ece */ if (fC) goto L_00857ece;
L_00857eea:; BB(0x00857eea);
    /* 00857eea: jmp 0x857f93 */ goto L_00857f93;
L_00857eef:; BB(0x00857eef);
    /* 00857eef: mov esi, dword ptr [0x8f81c8] */ r_esi = R32((u32)(0x8f81c8u));
    /* 00857ef5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857ef6: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00857ef9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00857efa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00857efc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857efd: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00857eff: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f02: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x857f04u); call_ind(t); }
    /* 00857f04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00857f06: jne 0x857f92 */ if (!fZ) goto L_00857f92;
L_00857f0c:; BB(0x00857f0c);
    /* 00857f0c: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x857f12u); call_ind(t); }
    /* 00857f12: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857f15: je 0x857f27 */ if (fZ) goto L_00857f27;
L_00857f17:; BB(0x00857f17);
    /* 00857f17: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x857f1cu); f_00859dd6();
    /* 00857f1c: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
    /* 00857f22: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857f25: jmp 0x857f93 */ goto L_00857f93;
L_00857f27:; BB(0x00857f27);
    /* 00857f27: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00857f2a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00857f2d: mov eax, ebx */ r_eax = r_ebx;
L_00857f2f:; BB(0x00857f2f);
    /* 00857f2f: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00857f31: dec dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00857f34: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00857f36: je 0x857f52 */ if (fZ) goto L_00857f52;
L_00857f38:; BB(0x00857f38);
    /* 00857f38: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 00857f3b: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00857f3e: test byte ptr [edx + ecx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_edx+r_ecx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00857f43: je 0x857f4b */ if (fZ) goto L_00857f4b;
L_00857f45:; BB(0x00857f45);
    /* 00857f45: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00857f46: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00857f49: je 0x857f17 */ if (fZ) goto L_00857f17;
L_00857f4b:; BB(0x00857f4b);
    /* 00857f4b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00857f4c: cmp dword ptr [ebp - 4], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857f50: jne 0x857f2f */ if (!fZ) goto L_00857f2f;
L_00857f52:; BB(0x00857f52);
    /* 00857f52: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f55: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00857f57: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00857f5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00857f5c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00857f5e: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f61: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x857f63u); call_ind(t); }
    /* 00857f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00857f65: jne 0x857f93 */ if (!fZ) goto L_00857f93;
L_00857f67:; BB(0x00857f67);
    /* 00857f67: jmp 0x857f17 */ goto L_00857f17;
L_00857f69:; BB(0x00857f69);
    /* 00857f69: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00857f6c: cmp dword ptr [eax + 0x14], esi */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00857f6f: jne 0x857f7c */ if (!fZ) goto L_00857f7c;
L_00857f71:; BB(0x00857f71);
    /* 00857f71: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f74: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x857f79u); f_0085d760();
    /* 00857f79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00857f7a: jmp 0x857f93 */ goto L_00857f93;
L_00857f7c:; BB(0x00857f7c);
    /* 00857f7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857f7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00857f7e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00857f80: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f83: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00857f85: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00857f88: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x857f8eu); call_ind(t); }
    /* 00857f8e: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00857f90: je 0x857f17 */ if (fZ) goto L_00857f17;
L_00857f92:; BB(0x00857f92);
    /* 00857f92: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
L_00857f93:; BB(0x00857f93);
    /* 00857f93: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00857f94: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00857f95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00857f96: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00857f97: ret  */ FN_RET(0x00857e9d); r_esp += 4; return;
}

