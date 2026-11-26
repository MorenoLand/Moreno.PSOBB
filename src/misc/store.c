#include "protos.h"

void f_0086571b(void) /* __store_str */
{
    FN_ENTER(0x0086571b);
    /* 0086571b: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086571e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086571f: mov esi, edx */ r_esi = r_edx;
    /* 00865721: je 0x865739 */ if (fZ) goto L_00865739;
L_00865723:; BB(0x00865723);
    /* 00865723: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00865724:; BB(0x00865724);
    /* 00865724: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00865726: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00865728: je 0x865738 */ if (fZ) goto L_00865738;
L_0086572a:; BB(0x0086572a);
    /* 0086572a: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0086572c: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0086572e: inc dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865730: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00865731: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865733: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00865736: jne 0x865724 */ if (!fZ) goto L_00865724;
L_00865738:; BB(0x00865738);
    /* 00865738: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_00865739:; BB(0x00865739);
    /* 00865739: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086573a: ret  */ FN_RET(0x0086571b); r_esp += 4; return;
}

void f_0086573b(void) /* __store_num */
{
    FN_ENTER(0x0086573b);
    /* 0086573b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086573c: mov ebp, esp */ r_ebp = r_esp;
    /* 0086573e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086573f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865740: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865741: mov esi, edx */ r_esi = r_edx;
    /* 00865743: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00865745: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865748: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0086574b: je 0x865782 */ if (fZ) goto L_00865782;
L_0086574d:; BB(0x0086574d);
    /* 0086574d: cmp dword ptr [ecx], 1 */ {  u32 a = R32((u32)(r_ecx)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865750: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 00865752: jbe 0x86576d */ if ((fC||fZ)) goto L_0086576d;
L_00865754:; BB(0x00865754);
    /* 00865754: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00865756: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00865757: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00865758: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00865758, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00865758, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086575a: add dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086575d: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0086575f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00865760: dec dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865762: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00865764: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00865766: jle 0x86576d */ if ((fZ||fS!=fO)) goto L_0086576d;
L_00865768:; BB(0x00865768);
    /* 00865768: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086576b: ja 0x865754 */ if ((!fC&&!fZ)) goto L_00865754;
L_0086576d:; BB(0x0086576d);
    /* 0086576d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0086576f: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 00865771: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00865772:; BB(0x00865772);
    /* 00865772: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865774: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00865776: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00865778: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00865779: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0086577b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086577c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086577e: jb 0x865772 */ if (fC) goto L_00865772;
L_00865780:; BB(0x00865780);
    /* 00865780: jmp 0x8657b0 */ goto L_008657b0;
L_00865782:; BB(0x00865782);
    /* 00865782: cmp esi, dword ptr [ecx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00865784: jae 0x8657ae */ if (!fC) goto L_008657ae;
L_00865786:; BB(0x00865786);
    /* 00865786: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00865787: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 0086578a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086578c: je 0x8657a5 */ if (fZ) goto L_008657a5;
L_0086578e:; BB(0x0086578e);
    /* 0086578e: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00865790: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00865791: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00865792: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00865792, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00865792, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00865794: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 00865796: add dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00865799: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086579c: mov byte ptr [esi + ebx], dl */ W8((u32)(r_esi+r_ebx), (u8)r_edx);
    /* 0086579f: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008657a0: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008657a3: jne 0x86578e */ if (!fZ) goto L_0086578e;
L_008657a5:; BB(0x008657a5);
    /* 008657a5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008657a8: add dword ptr [edi], eax */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008657aa: sub dword ptr [ecx], eax */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008657ac: jmp 0x8657b0 */ goto L_008657b0;
L_008657ae:; BB(0x008657ae);
    /* 008657ae: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_008657b0:; BB(0x008657b0);
    /* 008657b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008657b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008657b2: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008657b3: ret  */ FN_RET(0x0086573b); r_esp += 4; return;
}

void f_00865a1a(void) /* __store_winword */
{
    FN_ENTER(0x00865a1a);
    /* 00865a1a: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00865a1c: push 0x9993c0 */ { u32 v = 0x9993c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00865a21: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x865a26u); f_0085e5ac();
    /* 00865a26: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00865a29: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00865a2b: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865a2d: je 0x865a45 */ if (fZ) goto L_00865a45;
L_00865a2f:; BB(0x00865a2f);
    /* 00865a2f: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00865a30: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865a33: je 0x865a3d */ if (fZ) goto L_00865a3d;
L_00865a35:; BB(0x00865a35);
    /* 00865a35: mov eax, dword ptr [eax + 0xa8] */ r_eax = R32((u32)(r_eax+0xa8u));
    /* 00865a3b: jmp 0x865a4e */ goto L_00865a4e;
L_00865a3d:; BB(0x00865a3d);
    /* 00865a3d: mov eax, dword ptr [eax + 0xa4] */ r_eax = R32((u32)(r_eax+0xa4u));
    /* 00865a43: jmp 0x865a4e */ goto L_00865a4e;
L_00865a45:; BB(0x00865a45);
    /* 00865a45: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865a48: mov eax, dword ptr [eax + 0xa0] */ r_eax = R32((u32)(r_eax+0xa0u));
L_00865a4e:; BB(0x00865a4e);
    /* 00865a4e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00865a51: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 00865a54: cmp dword ptr [ecx + 0xb0], 1 */ {  u32 a = R32((u32)(r_ecx+0xb0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865a5b: je 0x865b77 */ if (fZ) goto L_00865b77;
L_00865a61:; BB(0x00865a61);
    /* 00865a61: cmp dword ptr [ebp + 0xc], 2 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865a65: mov eax, dword ptr [0x8f8298] */ r_eax = R32((u32)(0x8f8298u));
    /* 00865a6a: jne 0x865a71 */ if (!fZ) goto L_00865a71;
L_00865a6c:; BB(0x00865a6c);
    /* 00865a6c: mov eax, dword ptr [0x8f8294] */ r_eax = R32((u32)(0x8f8294u));
L_00865a71:; BB(0x00865a71);
    /* 00865a71: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00865a74: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 00865a77: mov dx, word ptr [ebx + 0x14] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x14u))) & 0xffffu);
    /* 00865a7b: add dx, 0x76c */ {  u32 a = (u16)r_edx; u32 b = 0x76cu; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00865a80: mov word ptr [ebp - 0x48], dx */ W16((u32)(r_ebp+0xffffffb8u), (u16)r_edx);
    /* 00865a84: mov dx, word ptr [ebx + 0x10] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x10u))) & 0xffffu);
    /* 00865a88: inc dx */ { u32 x = (u16)r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00865a8a: mov word ptr [ebp - 0x46], dx */ W16((u32)(r_ebp+0xffffffbau), (u16)r_edx);
    /* 00865a8e: mov dx, word ptr [ebx + 0xc] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0xcu))) & 0xffffu);
    /* 00865a92: mov word ptr [ebp - 0x42], dx */ W16((u32)(r_ebp+0xffffffbeu), (u16)r_edx);
    /* 00865a96: mov dx, word ptr [ebx + 8] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x8u))) & 0xffffu);
    /* 00865a9a: mov word ptr [ebp - 0x40], dx */ W16((u32)(r_ebp+0xffffffc0u), (u16)r_edx);
    /* 00865a9e: mov dx, word ptr [ebx + 4] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx+0x4u))) & 0xffffu);
    /* 00865aa2: mov word ptr [ebp - 0x3e], dx */ W16((u32)(r_ebp+0xffffffc2u), (u16)r_edx);
    /* 00865aa6: mov dx, word ptr [ebx] */ r_edx = (r_edx & 0xffff0000u) | ((R16((u32)(r_ebx))) & 0xffffu);
    /* 00865aa9: mov word ptr [ebp - 0x3c], dx */ W16((u32)(r_ebp+0xffffffc4u), (u16)r_edx);
    /* 00865aad: mov word ptr [ebp - 0x3a], si */ W16((u32)(r_ebp+0xffffffc6u), (u16)r_esi);
    /* 00865ab1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865ab2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865ab3: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865ab6: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 00865ab9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00865aba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865abb: push dword ptr [ecx + 0xac] */ { u32 v = R32((u32)(r_ecx+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865ac1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x865ac3u); call_ind(t); }
    /* 00865ac3: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00865ac6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865ac8: je 0x865b7a */ if (fZ) goto L_00865b7a;
L_00865ace:; BB(0x00865ace);
    /* 00865ace: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00865ad1: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00865ad4: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865ad7: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00865ada: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x865adfu); f_00858020();
    /* 00865adf: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00865ae2: mov edi, esp */ r_edi = r_esp;
    /* 00865ae4: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00865ae7: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00865aeb: jmp 0x865b04 */ goto L_00865b04;
L_00865b04:; BB(0x00865b04);
    /* 00865b04: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b06: jne 0x865b1e */ if (!fZ) goto L_00865b1e;
L_00865b08:; BB(0x00865b08);
    /* 00865b08: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b0b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x865b10u); f_00859c55();
    /* 00865b10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865b11: mov edi, eax */ r_edi = r_eax;
    /* 00865b13: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b15: je 0x865b7a */ if (fZ) goto L_00865b7a;
L_00865b17:; BB(0x00865b17);
    /* 00865b17: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
L_00865b1e:; BB(0x00865b1e);
    /* 00865b1e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00865b21: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865b25: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b28: lea eax, [ebp - 0x48] */ r_eax = (u32)(r_ebp+0xffffffb8u);
    /* 00865b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00865b2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00865b2d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865b30: push dword ptr [eax + 0xac] */ { u32 v = R32((u32)(r_eax+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865b36: call dword ptr [ebp - 0x30] */ { u32 t = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, 0x865b39u); call_ind(t); }
    /* 00865b39: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865b3a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865b3c: jle 0x865b5e */ if ((fZ||fS!=fO)) goto L_00865b5e;
L_00865b3e:; BB(0x00865b3e);
    /* 00865b3e: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 00865b41: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
L_00865b44:; BB(0x00865b44);
    /* 00865b44: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865b47: jbe 0x865b5e */ if ((fC||fZ)) goto L_00865b5e;
L_00865b49:; BB(0x00865b49);
    /* 00865b49: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00865b4b: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00865b4e: mov bl, byte ptr [ebx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 00865b50: mov byte ptr [edx], bl */ W8((u32)(r_edx), (u8)r_ebx);
    /* 00865b52: inc dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865b54: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865b57: dec dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865b59: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00865b5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00865b5c: jg 0x865b44 */ if ((!fZ&&fS==fO)) goto L_00865b44;
L_00865b5e:; BB(0x00865b5e);
    /* 00865b5e: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b62: je 0x865b6b */ if (fZ) goto L_00865b6b;
L_00865b64:; BB(0x00865b64);
    /* 00865b64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00865b65: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x865b6au); f_00858882();
    /* 00865b6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00865b6b:; BB(0x00865b6b);
    /* 00865b6b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00865b6d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00865b6e:; BB(0x00865b6e);
    /* 00865b6e: lea esp, [ebp - 0x54] */ r_esp = (u32)(r_ebp+0xffffffacu);
    /* 00865b71: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x865b76u); f_0085e5e7();
    /* 00865b76: ret  */ FN_RET(0x00865a1a); r_esp += 4; return;
L_00865b77:; BB(0x00865b77);
    /* 00865b77: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
L_00865b7a:; BB(0x00865b7a);
    /* 00865b7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865b7d: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865b7f: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865b81: je 0x865b6b */ if (fZ) goto L_00865b6b;
L_00865b83:; BB(0x00865b83);
    /* 00865b83: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 00865b86: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 00865b89: jmp 0x865b8e */ goto L_00865b8e;
L_00865b8b:; BB(0x00865b8b);
    /* 00865b8b: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
L_00865b8e:; BB(0x00865b8e);
    /* 00865b8e: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865b91: je 0x865b6b */ if (fZ) goto L_00865b6b;
L_00865b93:; BB(0x00865b93);
    /* 00865b93: mov byte ptr [ebp - 0x19], 0 */ W8((u32)(r_ebp+0xffffffe7u), 0x0u);
    /* 00865b97: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00865b99: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00865b9c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00865b9f:; BB(0x00865b9f);
    /* 00865b9f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865ba0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00865ba1: cmp byte ptr [eax], cl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865ba3: je 0x865b9f */ if (fZ) goto L_00865b9f;
L_00865ba5:; BB(0x00865ba5);
    /* 00865ba5: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00865ba8: movsx ecx, cl */ r_ecx = (u32)(i32)(i8)(u8)r_ecx;
    /* 00865bab: cmp ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865bae: jg 0x865d0a */ if ((!fZ&&fS==fO)) goto L_00865d0a;
L_00865bb4:; BB(0x00865bb4);
    /* 00865bb4: je 0x865cd6 */ if (fZ) goto L_00865cd6;
L_00865bba:; BB(0x00865bba);
    /* 00865bba: cmp ecx, 0x27 */ {  u32 a = r_ecx; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bbd: je 0x865c65 */ if (fZ) goto L_00865c65;
L_00865bc3:; BB(0x00865bc3);
    /* 00865bc3: cmp ecx, 0x41 */ {  u32 a = r_ecx; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bc6: je 0x865bdb */ if (fZ) goto L_00865bdb;
L_00865bc8:; BB(0x00865bc8);
    /* 00865bc8: cmp ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bcb: je 0x865c28 */ if (fZ) goto L_00865c28;
L_00865bcd:; BB(0x00865bcd);
    /* 00865bcd: cmp ecx, 0x4d */ {  u32 a = r_ecx; u32 b = 0x4du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bd0: je 0x865bf4 */ if (fZ) goto L_00865bf4;
L_00865bd2:; BB(0x00865bd2);
    /* 00865bd2: cmp ecx, 0x61 */ {  u32 a = r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bd5: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865bdb:; BB(0x00865bdb);
    /* 00865bdb: push 0x9993b4 */ { u32 v = 0x9993b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00865be0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865be3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865be4: call 0x862400 */ r_esp -= 4; W32(r_esp, 0x865be9u); f_00862400();
    /* 00865be9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865bea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865beb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865bed: jne 0x865c45 */ if (!fZ) goto L_00865c45;
L_00865bef:; BB(0x00865bef);
    /* 00865bef: add ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00865bf2: jmp 0x865c59 */ goto L_00865c59;
L_00865bf4:; BB(0x00865bf4);
    /* 00865bf4: mov ecx, edx */ r_ecx = r_edx;
    /* 00865bf6: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865bf7: je 0x865c18 */ if (fZ) goto L_00865c18;
L_00865bf9:; BB(0x00865bf9);
    /* 00865bf9: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865bfa: je 0x865c1f */ if (fZ) goto L_00865c1f;
L_00865bfc:; BB(0x00865bfc);
    /* 00865bfc: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865bfd: je 0x865c0f */ if (fZ) goto L_00865c0f;
L_00865bff:; BB(0x00865bff);
    /* 00865bff: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865c00: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865c06:; BB(0x00865c06);
    /* 00865c06: mov byte ptr [ebp - 0x19], 0x42 */ W8((u32)(r_ebp+0xffffffe7u), 0x42u);
    /* 00865c0a: jmp 0x865e32 */ goto L_00865e32;
L_00865c0f:; BB(0x00865c0f);
    /* 00865c0f: mov byte ptr [ebp - 0x19], 0x62 */ W8((u32)(r_ebp+0xffffffe7u), 0x62u);
    /* 00865c13: jmp 0x865e32 */ goto L_00865e32;
L_00865c18:; BB(0x00865c18);
    /* 00865c18: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865c1f:; BB(0x00865c1f);
    /* 00865c1f: mov byte ptr [ebp - 0x19], 0x6d */ W8((u32)(r_ebp+0xffffffe7u), 0x6du);
    /* 00865c23: jmp 0x865e32 */ goto L_00865e32;
L_00865c28:; BB(0x00865c28);
    /* 00865c28: mov ecx, edx */ r_ecx = r_edx;
    /* 00865c2a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865c2b: je 0x865c35 */ if (fZ) goto L_00865c35;
L_00865c2d:; BB(0x00865c2d);
    /* 00865c2d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865c2e: je 0x865c3c */ if (fZ) goto L_00865c3c;
L_00865c30:; BB(0x00865c30);
    /* 00865c30: jmp 0x865e32 */ goto L_00865e32;
L_00865c35:; BB(0x00865c35);
    /* 00865c35: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865c3c:; BB(0x00865c3c);
    /* 00865c3c: mov byte ptr [ebp - 0x19], 0x48 */ W8((u32)(r_ebp+0xffffffe7u), 0x48u);
    /* 00865c40: jmp 0x865e32 */ goto L_00865e32;
L_00865c45:; BB(0x00865c45);
    /* 00865c45: push 0x9993b0 */ { u32 v = 0x9993b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00865c4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00865c4b: call 0x862400 */ r_esp -= 4; W32(r_esp, 0x865c50u); f_00862400();
    /* 00865c50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865c51: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00865c52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865c54: jne 0x865c5c */ if (!fZ) goto L_00865c5c;
L_00865c56:; BB(0x00865c56);
    /* 00865c56: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00865c59:; BB(0x00865c59);
    /* 00865c59: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
L_00865c5c:; BB(0x00865c5c);
    /* 00865c5c: mov byte ptr [ebp - 0x19], 0x70 */ W8((u32)(r_ebp+0xffffffe7u), 0x70u);
    /* 00865c60: jmp 0x865e32 */ goto L_00865e32;
L_00865c65:; BB(0x00865c65);
    /* 00865c65: add dword ptr [ebp - 0x20], edx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865c68: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865c6b: je 0x865e92 */ if (fZ) goto L_00865e92;
L_00865c71:; BB(0x00865c71);
    /* 00865c71: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865c74: jmp 0x865cc3 */ goto L_00865cc3;
L_00865c76:; BB(0x00865c76);
    /* 00865c76: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00865c78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865c7a: je 0x865e92 */ if (fZ) goto L_00865e92;
L_00865c80:; BB(0x00865c80);
    /* 00865c80: cmp al, 0x27 */ {  u32 a = (u8)r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865c82: je 0x865cce */ if (fZ) goto L_00865cce;
L_00865c84:; BB(0x00865c84);
    /* 00865c84: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00865c87: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865c8a: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865c8d: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865c92: je 0x865cb2 */ if (fZ) goto L_00865cb2;
L_00865c94:; BB(0x00865c94);
    /* 00865c94: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865c97: jbe 0x865cb2 */ if ((fC||fZ)) goto L_00865cb2;
L_00865c99:; BB(0x00865c99);
    /* 00865c99: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865c9c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865c9d: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865ca0: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865ca6:; BB(0x00865ca6);
    /* 00865ca6: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865ca8: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00865caa: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cac: mov eax, ecx */ r_eax = r_ecx;
    /* 00865cae: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cb0: jmp 0x865cb5 */ goto L_00865cb5;
L_00865cb2:; BB(0x00865cb2);
    /* 00865cb2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00865cb5:; BB(0x00865cb5);
    /* 00865cb5: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865cb7: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865cb9: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00865cbb: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cbd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865cbe: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00865cc1: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865cc3:; BB(0x00865cc3);
    /* 00865cc3: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865cc5: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865cc7: jne 0x865c76 */ if (!fZ) goto L_00865c76;
L_00865cc9:; BB(0x00865cc9);
    /* 00865cc9: jmp 0x865e92 */ goto L_00865e92;
L_00865cce:; BB(0x00865cce);
    /* 00865cce: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865cd1: jmp 0x865e92 */ goto L_00865e92;
L_00865cd6:; BB(0x00865cd6);
    /* 00865cd6: mov ecx, edx */ r_ecx = r_edx;
    /* 00865cd8: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865cd9: je 0x865cfa */ if (fZ) goto L_00865cfa;
L_00865cdb:; BB(0x00865cdb);
    /* 00865cdb: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865cdc: je 0x865d01 */ if (fZ) goto L_00865d01;
L_00865cde:; BB(0x00865cde);
    /* 00865cde: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865cdf: je 0x865cf1 */ if (fZ) goto L_00865cf1;
L_00865ce1:; BB(0x00865ce1);
    /* 00865ce1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865ce2: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865ce8:; BB(0x00865ce8);
    /* 00865ce8: mov byte ptr [ebp - 0x19], 0x41 */ W8((u32)(r_ebp+0xffffffe7u), 0x41u);
    /* 00865cec: jmp 0x865e32 */ goto L_00865e32;
L_00865cf1:; BB(0x00865cf1);
    /* 00865cf1: mov byte ptr [ebp - 0x19], 0x61 */ W8((u32)(r_ebp+0xffffffe7u), 0x61u);
    /* 00865cf5: jmp 0x865e32 */ goto L_00865e32;
L_00865cfa:; BB(0x00865cfa);
    /* 00865cfa: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865d01:; BB(0x00865d01);
    /* 00865d01: mov byte ptr [ebp - 0x19], 0x64 */ W8((u32)(r_ebp+0xffffffe7u), 0x64u);
    /* 00865d05: jmp 0x865e32 */ goto L_00865e32;
L_00865d0a:; BB(0x00865d0a);
    /* 00865d0a: sub ecx, 0x68 */ {  u32 a = r_ecx; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d0d: je 0x865e1d */ if (fZ) goto L_00865e1d;
L_00865d13:; BB(0x00865d13);
    /* 00865d13: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d16: je 0x865e06 */ if (fZ) goto L_00865e06;
L_00865d1c:; BB(0x00865d1c);
    /* 00865d1c: sub ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d1f: je 0x865def */ if (fZ) goto L_00865def;
L_00865d25:; BB(0x00865d25);
    /* 00865d25: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d26: je 0x865d51 */ if (fZ) goto L_00865d51;
L_00865d28:; BB(0x00865d28);
    /* 00865d28: sub ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d2b: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865d31:; BB(0x00865d31);
    /* 00865d31: mov ecx, edx */ r_ecx = r_edx;
    /* 00865d33: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00865d34: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d35: je 0x865d48 */ if (fZ) goto L_00865d48;
L_00865d37:; BB(0x00865d37);
    /* 00865d37: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00865d38: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865d39: jne 0x865e32 */ if (!fZ) goto L_00865e32;
L_00865d3f:; BB(0x00865d3f);
    /* 00865d3f: mov byte ptr [ebp - 0x19], 0x59 */ W8((u32)(r_ebp+0xffffffe7u), 0x59u);
    /* 00865d43: jmp 0x865e32 */ goto L_00865e32;
L_00865d48:; BB(0x00865d48);
    /* 00865d48: mov byte ptr [ebp - 0x19], 0x79 */ W8((u32)(r_ebp+0xffffffe7u), 0x79u);
    /* 00865d4c: jmp 0x865e32 */ goto L_00865e32;
L_00865d51:; BB(0x00865d51);
    /* 00865d51: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00865d54: cmp dword ptr [ebx + 8], 0xb */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00865d58: jg 0x865d62 */ if ((!fZ&&fS==fO)) goto L_00865d62;
L_00865d5a:; BB(0x00865d5a);
    /* 00865d5a: mov eax, dword ptr [eax + 0x98] */ r_eax = R32((u32)(r_eax+0x98u));
    /* 00865d60: jmp 0x865d68 */ goto L_00865d68;
L_00865d62:; BB(0x00865d62);
    /* 00865d62: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
L_00865d68:; BB(0x00865d68);
    /* 00865d68: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865d6b: jne 0x865dde */ if (!fZ) goto L_00865dde;
L_00865d6d:; BB(0x00865d6d);
    /* 00865d6d: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865d70: jbe 0x865dde */ if ((fC||fZ)) goto L_00865dde;
L_00865d72:; BB(0x00865d72);
    /* 00865d72: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865d74: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00865d77: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865d7a: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865d7d: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865d82: je 0x865d9b */ if (fZ) goto L_00865d9b;
L_00865d84:; BB(0x00865d84);
    /* 00865d84: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865d87: jbe 0x865d9b */ if ((fC||fZ)) goto L_00865d9b;
L_00865d89:; BB(0x00865d89);
    /* 00865d89: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865d8a: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865d8d: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865d93:; BB(0x00865d93);
    /* 00865d93: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865d95: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00865d97: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865d99: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865d9b:; BB(0x00865d9b);
    /* 00865d9b: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865d9d: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865d9f: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 00865da1: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865da3: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00865da5: jmp 0x865de4 */ goto L_00865de4;
L_00865da7:; BB(0x00865da7);
    /* 00865da7: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865daa: jbe 0x865de4 */ if ((fC||fZ)) goto L_00865de4;
L_00865dac:; BB(0x00865dac);
    /* 00865dac: movzx edx, cl */ r_edx = (u32)(u8)r_ecx;
    /* 00865daf: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865db2: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865db5: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865dba: je 0x865dd3 */ if (fZ) goto L_00865dd3;
L_00865dbc:; BB(0x00865dbc);
    /* 00865dbc: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865dbf: jbe 0x865dd3 */ if ((fC||fZ)) goto L_00865dd3;
L_00865dc1:; BB(0x00865dc1);
    /* 00865dc1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865dc2: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865dc5: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865dcb:; BB(0x00865dcb);
    /* 00865dcb: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865dcd: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
    /* 00865dcf: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865dd1: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865dd3:; BB(0x00865dd3);
    /* 00865dd3: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00865dd5: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865dd7: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00865dd9: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865ddb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00865ddc: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865dde:; BB(0x00865dde);
    /* 00865dde: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865de0: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865de2: jne 0x865da7 */ if (!fZ) goto L_00865da7;
L_00865de4:; BB(0x00865de4);
    /* 00865de4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00865de7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00865dea: jmp 0x865e92 */ goto L_00865e92;
L_00865def:; BB(0x00865def);
    /* 00865def: mov ecx, edx */ r_ecx = r_edx;
    /* 00865df1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865df2: je 0x865df9 */ if (fZ) goto L_00865df9;
L_00865df4:; BB(0x00865df4);
    /* 00865df4: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865df5: je 0x865e00 */ if (fZ) goto L_00865e00;
L_00865df7:; BB(0x00865df7);
    /* 00865df7: jmp 0x865e32 */ goto L_00865e32;
L_00865df9:; BB(0x00865df9);
    /* 00865df9: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865e00:; BB(0x00865e00);
    /* 00865e00: mov byte ptr [ebp - 0x19], 0x53 */ W8((u32)(r_ebp+0xffffffe7u), 0x53u);
    /* 00865e04: jmp 0x865e32 */ goto L_00865e32;
L_00865e06:; BB(0x00865e06);
    /* 00865e06: mov ecx, edx */ r_ecx = r_edx;
    /* 00865e08: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e09: je 0x865e10 */ if (fZ) goto L_00865e10;
L_00865e0b:; BB(0x00865e0b);
    /* 00865e0b: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e0c: je 0x865e17 */ if (fZ) goto L_00865e17;
L_00865e0e:; BB(0x00865e0e);
    /* 00865e0e: jmp 0x865e32 */ goto L_00865e32;
L_00865e10:; BB(0x00865e10);
    /* 00865e10: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865e17:; BB(0x00865e17);
    /* 00865e17: mov byte ptr [ebp - 0x19], 0x4d */ W8((u32)(r_ebp+0xffffffe7u), 0x4du);
    /* 00865e1b: jmp 0x865e32 */ goto L_00865e32;
L_00865e1d:; BB(0x00865e1d);
    /* 00865e1d: mov ecx, edx */ r_ecx = r_edx;
    /* 00865e1f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e20: je 0x865e27 */ if (fZ) goto L_00865e27;
L_00865e22:; BB(0x00865e22);
    /* 00865e22: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00865e23: je 0x865e2e */ if (fZ) goto L_00865e2e;
L_00865e25:; BB(0x00865e25);
    /* 00865e25: jmp 0x865e32 */ goto L_00865e32;
L_00865e27:; BB(0x00865e27);
    /* 00865e27: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
L_00865e2e:; BB(0x00865e2e);
    /* 00865e2e: mov byte ptr [ebp - 0x19], 0x49 */ W8((u32)(r_ebp+0xffffffe7u), 0x49u);
L_00865e32:; BB(0x00865e32);
    /* 00865e32: mov al, byte ptr [ebp - 0x19] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffe7u))) & 0xffu);
    /* 00865e35: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865e37: je 0x865e5c */ if (fZ) goto L_00865e5c;
L_00865e39:; BB(0x00865e39);
    /* 00865e39: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e3c: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e3f: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e42: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00865e45: mov ebx, edi */ r_ebx = r_edi;
    /* 00865e47: mov ecx, esi */ r_ecx = r_esi;
    /* 00865e49: call 0x8657b4 */ r_esp -= 4; W32(r_esp, 0x865e4eu); f_008657b4();
    /* 00865e4e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00865e51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00865e53: jne 0x865de4 */ if (!fZ) goto L_00865de4;
L_00865e55:; BB(0x00865e55);
    /* 00865e55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00865e57: jmp 0x865b6e */ goto L_00865b6e;
L_00865e5c:; BB(0x00865e5c);
    /* 00865e5c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865e5f: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00865e61: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 00865e64: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00865e67: mov ebx, dword ptr [ebx + 0x48] */ r_ebx = R32((u32)(r_ebx+0x48u));
    /* 00865e6a: test byte ptr [ebx + edx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_ebx+r_edx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865e6f: je 0x865e84 */ if (fZ) goto L_00865e84;
L_00865e71:; BB(0x00865e71);
    /* 00865e71: cmp dword ptr [edi], 1 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00865e74: jbe 0x865e84 */ if ((fC||fZ)) goto L_00865e84;
L_00865e76:; BB(0x00865e76);
    /* 00865e76: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865e77: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00865e7a: je 0x865e55 */ if (fZ) goto L_00865e55;
L_00865e7c:; BB(0x00865e7c);
    /* 00865e7c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00865e7e: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 00865e80: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865e82: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865e84:; BB(0x00865e84);
    /* 00865e84: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00865e86: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00865e88: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00865e8a: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00865e8c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00865e8d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00865e90: dec dword ptr [edi] */ { u32 ad = (u32)(r_edi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00865e92:; BB(0x00865e92);
    /* 00865e92: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00865e95: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00865e97: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00865e99: jne 0x865b8b */ if (!fZ) goto L_00865b8b;
L_00865e9f:; BB(0x00865e9f);
    /* 00865e9f: jmp 0x865b6b */ goto L_00865b6b;
}

