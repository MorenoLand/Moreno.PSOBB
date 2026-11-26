#include "protos.h"

void f_00861667(void) /* ___mbspbrk_mt */
{
    FN_ENTER(0x00861667);
    /* 00861667: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00861668: mov ebp, esp */ r_ebp = r_esp;
    /* 0086166a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086166b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086166c: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0086166f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00861671: cmp dword ptr [esi + 8], ebx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861674: jne 0x861685 */ if (!fZ) goto L_00861685;
L_00861676:; BB(0x00861676);
    /* 00861676: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861679: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086167c: call 0x868890 */ r_esp -= 4; W32(r_esp, 0x861681u); f_00868890();
    /* 00861681: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861682: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861683: jmp 0x8616df */ goto L_008616df;
L_00861685:; BB(0x00861685);
    /* 00861685: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00861688: cmp byte ptr [ecx], bl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086168a: je 0x8616d7 */ if (fZ) goto L_008616d7;
L_0086168c:; BB(0x0086168c);
    /* 0086168c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0086168d:; BB(0x0086168d);
    /* 0086168d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00861690: jmp 0x8616ba */ goto L_008616ba;
L_00861692:; BB(0x00861692);
    /* 00861692: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00861694: movzx edi, dl */ r_edi = (u32)(u8)r_edx;
    /* 00861697: test byte ptr [edi + esi + 0x1d], 4 */ {  u32 a = R8((u32)(r_edi+r_esi+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086169c: je 0x8616b5 */ if (fZ) goto L_008616b5;
L_0086169e:; BB(0x0086169e);
    /* 0086169e: cmp dl, byte ptr [ecx] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616a0: jne 0x8616aa */ if (!fZ) goto L_008616aa;
L_008616a2:; BB(0x008616a2);
    /* 008616a2: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 008616a5: cmp dl, byte ptr [ecx + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_ecx+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616a8: je 0x8616be */ if (fZ) goto L_008616be;
L_008616aa:; BB(0x008616aa);
    /* 008616aa: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 008616ad: cmp byte ptr [edx], bl */ {  u32 a = R8((u32)(r_edx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616af: je 0x8616be */ if (fZ) goto L_008616be;
L_008616b1:; BB(0x008616b1);
    /* 008616b1: mov eax, edx */ r_eax = r_edx;
    /* 008616b3: jmp 0x8616b9 */ goto L_008616b9;
L_008616b5:; BB(0x008616b5);
    /* 008616b5: cmp dl, byte ptr [ecx] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_ecx)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616b7: je 0x8616be */ if (fZ) goto L_008616be;
L_008616b9:; BB(0x008616b9);
    /* 008616b9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008616ba:; BB(0x008616ba);
    /* 008616ba: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616bc: jne 0x861692 */ if (!fZ) goto L_00861692;
L_008616be:; BB(0x008616be);
    /* 008616be: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616c0: jne 0x8616d6 */ if (!fZ) goto L_008616d6;
L_008616c2:; BB(0x008616c2);
    /* 008616c2: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 008616c5: test byte ptr [eax + esi + 0x1d], 4 */ {  u32 a = R8((u32)(r_eax+r_esi+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008616ca: je 0x8616d1 */ if (fZ) goto L_008616d1;
L_008616cc:; BB(0x008616cc);
    /* 008616cc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008616cd: cmp byte ptr [ecx], bl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616cf: je 0x8616d6 */ if (fZ) goto L_008616d6;
L_008616d1:; BB(0x008616d1);
    /* 008616d1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008616d2: cmp byte ptr [ecx], bl */ {  u32 a = R8((u32)(r_ecx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008616d4: jne 0x86168d */ if (!fZ) goto L_0086168d;
L_008616d6:; BB(0x008616d6);
    /* 008616d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008616d7:; BB(0x008616d7);
    /* 008616d7: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008616d9: neg al */ { u32 x = (u8)r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (a < b); fC = (b != 0); }
    /* 008616db: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008616dd: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008616df:; BB(0x008616df);
    /* 008616df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008616e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008616e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008616e2: ret  */ FN_RET(0x00861667); r_esp += 4; return;
}

