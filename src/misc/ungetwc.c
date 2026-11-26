#include "protos.h"

void f_00868b19(void) /* __ungetwc_lk */
{
    FN_ENTER(0x00868b19);
    /* 00868b19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00868b1a: mov ebp, esp */ r_ebp = r_esp;
    /* 00868b1c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00868b1f: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00868b24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868b25: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00868b28: cmp bx, 0xffff */ {  u32 a = (u16)r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00868b2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868b2e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00868b31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00868b32: je 0x868ba6 */ if (fZ) goto L_00868ba6;
L_00868b34:; BB(0x00868b34);
    /* 00868b34: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00868b37: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00868b3a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868b3c: jne 0x868b46 */ if (!fZ) goto L_00868b46;
L_00868b3e:; BB(0x00868b3e);
    /* 00868b3e: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 00868b40: jns 0x868ba6 */ if (!fS) goto L_00868ba6;
L_00868b42:; BB(0x00868b42);
    /* 00868b42: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868b44: jne 0x868ba6 */ if (!fZ) goto L_00868ba6;
L_00868b46:; BB(0x00868b46);
    /* 00868b46: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00868b48: cmp dword ptr [esi + 8], edi */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868b4b: jne 0x868b54 */ if (!fZ) goto L_00868b54;
L_00868b4d:; BB(0x00868b4d);
    /* 00868b4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00868b4e: call 0x866e51 */ r_esp -= 4; W32(r_esp, 0x868b53u); f_00866e51();
    /* 00868b53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00868b54:; BB(0x00868b54);
    /* 00868b54: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00868b57: and ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00868b5a: jne 0x868be5 */ if (!fZ) goto L_00868be5;
L_00868b60:; BB(0x00868b60);
    /* 00868b60: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00868b63: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868b66: je 0x868b7f */ if (fZ) goto L_00868b7f;
L_00868b68:; BB(0x00868b68);
    /* 00868b68: mov edx, eax */ r_edx = r_eax;
    /* 00868b6a: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00868b6d: mov edx, dword ptr [edx*4 + 0xaf0a80] */ r_edx = R32((u32)(r_edx*4+0xaf0a80u));
    /* 00868b74: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868b77: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00868b7a: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 00868b7d: jmp 0x868b84 */ goto L_00868b84;
L_00868b7f:; BB(0x00868b7f);
    /* 00868b7f: mov eax, 0xa24120 */ r_eax = 0xa24120u;
L_00868b84:; BB(0x00868b84);
    /* 00868b84: test byte ptr [eax + 4], 0x80 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00868b88: je 0x868be5 */ if (fZ) goto L_00868be5;
L_00868b8a:; BB(0x00868b8a);
    /* 00868b8a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00868b8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00868b8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00868b8f: call 0x85ad71 */ r_esp -= 4; W32(r_esp, 0x868b94u); f_0085ad71();
    /* 00868b94: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868b97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868b98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00868b99: jne 0x868bb7 */ if (!fZ) goto L_00868bb7;
L_00868b9b:; BB(0x00868b9b);
    /* 00868b9b: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x868ba0u); f_00859dd6();
    /* 00868ba0: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
L_00868ba6:; BB(0x00868ba6);
    /* 00868ba6: or ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a | b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
L_00868baa:; BB(0x00868baa);
    /* 00868baa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00868bad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00868bae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00868baf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00868bb0: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x868bb5u); f_0085e419();
    /* 00868bb5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00868bb6: ret  */ FN_RET(0x00868b19); r_esp += 4; return;
L_00868bb7:; BB(0x00868bb7);
    /* 00868bb7: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00868bba: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00868bbc: cmp dword ptr [esi], ecx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00868bbe: jae 0x868bcc */ if (!fC) goto L_00868bcc;
L_00868bc0:; BB(0x00868bc0);
    /* 00868bc0: cmp dword ptr [esi + 4], edi */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868bc3: jne 0x868ba6 */ if (!fZ) goto L_00868ba6;
L_00868bc5:; BB(0x00868bc5);
    /* 00868bc5: cmp eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00868bc8: jg 0x868ba6 */ if ((!fZ&&fS==fO)) goto L_00868ba6;
L_00868bca:; BB(0x00868bca);
    /* 00868bca: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
L_00868bcc:; BB(0x00868bcc);
    /* 00868bcc: lea ecx, [eax - 1] */ r_ecx = (u32)(r_eax+0xffffffffu);
    /* 00868bcf: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00868bd1: jl 0x868be0 */ if ((fS!=fO)) goto L_00868be0;
L_00868bd3:; BB(0x00868bd3);
    /* 00868bd3: dec dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00868bd5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); }
    /* 00868bd6: mov dl, byte ptr [ebp + ecx - 0xb] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ebp+r_ecx+0xfffffff5u))) & 0xffu);
    /* 00868bda: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00868bdc: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 00868bde: jns 0x868bd3 */ if (!fS) goto L_00868bd3;
L_00868be0:; BB(0x00868be0);
    /* 00868be0: add dword ptr [esi + 4], eax */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00868be3: jmp 0x868c18 */ goto L_00868c18;
L_00868be5:; BB(0x00868be5);
    /* 00868be5: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00868be8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868beb: cmp dword ptr [esi], eax */ {  u32 a = R32((u32)(r_esi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00868bed: jae 0x868bfc */ if (!fC) goto L_00868bfc;
L_00868bef:; BB(0x00868bef);
    /* 00868bef: cmp dword ptr [esi + 4], edi */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868bf2: jne 0x868ba6 */ if (!fZ) goto L_00868ba6;
L_00868bf4:; BB(0x00868bf4);
    /* 00868bf4: cmp dword ptr [esi + 0x18], 2 */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00868bf8: jb 0x868ba6 */ if (fC) goto L_00868ba6;
L_00868bfa:; BB(0x00868bfa);
    /* 00868bfa: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_00868bfc:; BB(0x00868bfc);
    /* 00868bfc: add dword ptr [esi], -2 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00868bff: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00868c01: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00868c03: je 0x868c11 */ if (fZ) goto L_00868c11;
L_00868c05:; BB(0x00868c05);
    /* 00868c05: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00868c08: je 0x868c14 */ if (fZ) goto L_00868c14;
L_00868c0a:; BB(0x00868c0a);
    /* 00868c0a: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00868c0d: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00868c0f: jmp 0x868ba6 */ goto L_00868ba6;
L_00868c11:; BB(0x00868c11);
    /* 00868c11: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
L_00868c14:; BB(0x00868c14);
    /* 00868c14: add dword ptr [esi + 4], 2 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00868c18:; BB(0x00868c18);
    /* 00868c18: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00868c1b: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00868c1e: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00868c21: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00868c24: mov ax, bx */ r_eax = (r_eax & 0xffff0000u) | (((u16)r_ebx) & 0xffffu);
    /* 00868c27: jmp 0x868baa */ goto L_00868baa;
}

