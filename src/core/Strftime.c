#include "protos.h"

void f_00865ea4(void) /* __Strftime_mt */
{
    FN_ENTER(0x00865ea4);
    /* 00865ea4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00865ea5: mov ebp, esp */ r_ebp = r_esp;
    /* 00865ea7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00865ea8: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865eab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865ead: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865eae: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00865eb1: jne 0x865eb6 */ if (!fZ) goto L_00865eb6;
L_00865eb3:; BB(0x00865eb3);
    /* 00865eb3: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
L_00865eb6:; BB(0x00865eb6);
    /* 00865eb6: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00865eb9: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00865ebc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865ebe: je 0x865f66 */ if (fZ) goto L_00865f66;
L_00865ec4:; BB(0x00865ec4);
    /* 00865ec4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00865ec6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865ec7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865ec8: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00865ecb: jbe 0x865f53 */ if ((fC||fZ)) goto L_00865f53;
L_00865ed1:; BB(0x00865ed1);
    /* 00865ed1: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
L_00865ed4:; BB(0x00865ed4);
    /* 00865ed4: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00865ed6: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865ed8: je 0x865f3f */ if (fZ) goto L_00865f3f;
L_00865eda:; BB(0x00865eda);
    /* 00865eda: cmp al, 0x25 */ {  u32 a = (u8)r_eax; u32 b = 0x25u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865edc: je 0x865f12 */ if (fZ) goto L_00865f12;
L_00865ede:; BB(0x00865ede);
    /* 00865ede: mov edx, dword ptr [edi + 0x48] */ r_edx = R32((u32)(r_edi+0x48u));
    /* 00865ee1: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 00865ee4: test byte ptr [edx + ecx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_edx+r_ecx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865ee9: je 0x865f02 */ if (fZ) goto L_00865f02;
L_00865eeb:; BB(0x00865eeb);
    /* 00865eeb: cmp dword ptr [ebp + 0x1c], 1 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865eef: jbe 0x865f02 */ if ((fC||fZ)) goto L_00865f02;
L_00865ef1:; BB(0x00865ef1);
    /* 00865ef1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00865ef2: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865ef5: je 0x865f53 */ if (fZ) goto L_00865f53;
L_00865ef7:; BB(0x00865ef7);
    /* 00865ef7: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00865efa: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00865efc: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865eff: dec dword ptr [ebp + 0x1c] */ { u32 ad = (u32)(r_ebp+0x1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865f02:; BB(0x00865f02);
    /* 00865f02: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00865f04: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00865f07: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00865f09: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865f0c: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00865f0d: dec dword ptr [ebp + 0x1c] */ { u32 ad = (u32)(r_ebp+0x1cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865f10: jmp 0x865f39 */ goto L_00865f39;
L_00865f12:; BB(0x00865f12);
    /* 00865f12: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00865f13: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00865f15: cmp byte ptr [esi], 0x23 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x23u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865f18: jne 0x865f1c */ if (!fZ) goto L_00865f1c;
L_00865f1a:; BB(0x00865f1a);
    /* 00865f1a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865f1b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00865f1c:; BB(0x00865f1c);
    /* 00865f1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865f1d: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865f20: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00865f22: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865f25: lea ebx, [ebp + 0x1c] */ r_ebx = (u32)(r_ebp+0x1cu);
    /* 00865f28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865f29: lea ecx, [ebp + 0xc] */ r_ecx = (u32)(r_ebp+0xcu);
    /* 00865f2c: call 0x8657b4 */ r_esp -= 4; W32(r_esp, 0x865f31u); f_008657b4();
    /* 00865f31: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00865f34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865f36: je 0x865f53 */ if (fZ) goto L_00865f53;
L_00865f38:; BB(0x00865f38);
    /* 00865f38: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00865f39:; BB(0x00865f39);
    /* 00865f39: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865f3d: ja 0x865ed4 */ if ((!fC&&!fZ)) goto L_00865ed4;
L_00865f3f:; BB(0x00865f3f);
    /* 00865f3f: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865f43: jbe 0x865f57 */ if ((fC||fZ)) goto L_00865f57;
L_00865f45:; BB(0x00865f45);
    /* 00865f45: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00865f48: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00865f4b: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00865f4e: sub eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00865f51: jmp 0x865f64 */ goto L_00865f64;
L_00865f53:; BB(0x00865f53);
    /* 00865f53: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00865f57:; BB(0x00865f57);
    /* 00865f57: jne 0x865f5c */ if (!fZ) goto L_00865f5c;
L_00865f59:; BB(0x00865f59);
    /* 00865f59: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865f5c:; BB(0x00865f5c);
    /* 00865f5c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00865f5f: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00865f62: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00865f64:; BB(0x00865f64);
    /* 00865f64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00865f65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00865f66:; BB(0x00865f66);
    /* 00865f66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00865f67: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00865f68: ret  */ FN_RET(0x00865ea4); r_esp += 4; return;
}

