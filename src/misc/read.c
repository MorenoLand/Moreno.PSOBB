#include "protos.h"

void f_00861a75(void) /* __read_lk */
{
    FN_ENTER(0x00861a75);
    /* 00861a75: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00861a76: mov ebp, esp */ r_ebp = r_esp;
    /* 00861a78: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00861a7b: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00861a7f: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861a83: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861a84: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00861a87: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861a88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861a89: mov edx, ebx */ r_edx = r_ebx;
    /* 00861a8b: je 0x861c49 */ if (fZ) goto L_00861c49;
L_00861a91:; BB(0x00861a91);
    /* 00861a91: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00861a94: mov ecx, eax */ r_ecx = r_eax;
    /* 00861a96: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00861a99: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00861a9c: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 00861a9f: lea edi, [ecx*4 + 0xaf0a80] */ r_edi = (u32)(r_ecx*4+0xaf0a80u);
    /* 00861aa6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861aa8: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00861aab: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861aad: mov cl, byte ptr [eax + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x4u))) & 0xffu);
    /* 00861ab0: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861ab3: jne 0x861c49 */ if (!fZ) goto L_00861c49;
L_00861ab9:; BB(0x00861ab9);
    /* 00861ab9: test cl, 0x48 */ {  u32 a = (u8)r_ecx; u32 b = 0x48u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861abc: je 0x861ae0 */ if (fZ) goto L_00861ae0;
L_00861abe:; BB(0x00861abe);
    /* 00861abe: cmp byte ptr [eax + 5], 0xa */ {  u32 a = R8((u32)(r_eax+0x5u)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861ac2: je 0x861ae0 */ if (fZ) goto L_00861ae0;
L_00861ac4:; BB(0x00861ac4);
    /* 00861ac4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861ac6: mov al, byte ptr [eax + esi + 5] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax+r_esi+0x5u))) & 0xffu);
    /* 00861aca: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00861acd: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 00861acf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861ad1: lea edx, [ebx + 1] */ r_edx = (u32)(r_ebx+0x1u);
    /* 00861ad4: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00861adb: mov byte ptr [eax + esi + 5], 0xa */ W8((u32)(r_eax+r_esi+0x5u), 0xau);
L_00861ae0:; BB(0x00861ae0);
    /* 00861ae0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861ae2: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00861ae5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861ae6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861ae9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861aeb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00861aec: push dword ptr [eax + esi] */ { u32 v = R32((u32)(r_eax+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00861aef: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x861af5u); call_ind(t); }
    /* 00861af5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861af7: jne 0x861b32 */ if (!fZ) goto L_00861b32;
L_00861af9:; BB(0x00861af9);
    /* 00861af9: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x861affu); call_ind(t); }
    /* 00861aff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00861b01: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861b02: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861b04: jne 0x861b1a */ if (!fZ) goto L_00861b1a;
L_00861b06:; BB(0x00861b06);
    /* 00861b06: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x861b0bu); f_00859dd6();
    /* 00861b0b: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00861b11: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x861b16u); f_00859ddf();
    /* 00861b16: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00861b18: jmp 0x861b2a */ goto L_00861b2a;
L_00861b1a:; BB(0x00861b1a);
    /* 00861b1a: cmp eax, 0x6d */ {  u32 a = r_eax; u32 b = 0x6du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861b1d: je 0x861c49 */ if (fZ) goto L_00861c49;
L_00861b23:; BB(0x00861b23);
    /* 00861b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861b24: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x861b29u); f_00859de8();
    /* 00861b29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00861b2a:; BB(0x00861b2a);
    /* 00861b2a: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00861b2d: jmp 0x861c4b */ goto L_00861c4b;
L_00861b32:; BB(0x00861b32);
    /* 00861b32: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00861b35: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00861b37: add dword ptr [ebp - 8], eax */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00861b3a: test byte ptr [ecx + esi + 4], 0x80 */ {  u32 a = R8((u32)(r_ecx+r_esi+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00861b3f: je 0x861c44 */ if (fZ) goto L_00861c44;
L_00861b45:; BB(0x00861b45);
    /* 00861b45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861b47: je 0x861b59 */ if (fZ) goto L_00861b59;
L_00861b49:; BB(0x00861b49);
    /* 00861b49: cmp byte ptr [ebx], 0xa */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861b4c: jne 0x861b59 */ if (!fZ) goto L_00861b59;
L_00861b4e:; BB(0x00861b4e);
    /* 00861b4e: mov eax, ecx */ r_eax = r_ecx;
    /* 00861b50: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 00861b54: or byte ptr [eax], 4 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00861b57: jmp 0x861b62 */ goto L_00861b62;
L_00861b59:; BB(0x00861b59);
    /* 00861b59: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861b5b: lea eax, [eax + esi + 4] */ r_eax = (u32)(r_eax+r_esi+0x4u);
    /* 00861b5f: and byte ptr [eax], 0xfb */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0xfbu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
L_00861b62:; BB(0x00861b62);
    /* 00861b62: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00861b65: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00861b68: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00861b6a: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00861b6c: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00861b6f: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00861b72: jae 0x861c3e */ if (!fC) goto L_00861c3e;
L_00861b78:; BB(0x00861b78);
    /* 00861b78: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00861b7b: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00861b7d: cmp al, 0x1a */ {  u32 a = (u8)r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861b7f: je 0x861c2e */ if (fZ) goto L_00861c2e;
L_00861b85:; BB(0x00861b85);
    /* 00861b85: cmp al, 0xd */ {  u32 a = (u8)r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861b87: je 0x861b94 */ if (fZ) goto L_00861b94;
L_00861b89:; BB(0x00861b89);
    /* 00861b89: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 00861b8b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00861b8c: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00861b8f: jmp 0x861c20 */ goto L_00861c20;
L_00861b94:; BB(0x00861b94);
    /* 00861b94: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00861b95: cmp dword ptr [ebp + 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00861b98: jae 0x861bae */ if (!fC) goto L_00861bae;
L_00861b9a:; BB(0x00861b9a);
    /* 00861b9a: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00861b9d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861b9e: cmp byte ptr [eax], 0xa */ {  u32 a = R8((u32)(r_eax)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861ba1: jne 0x861ba9 */ if (!fZ) goto L_00861ba9;
L_00861ba3:; BB(0x00861ba3);
    /* 00861ba3: add dword ptr [ebp + 0x10], 2 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00861ba7: jmp 0x861c02 */ goto L_00861c02;
L_00861ba9:; BB(0x00861ba9);
    /* 00861ba9: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00861bac: jmp 0x861c1c */ goto L_00861c1c;
L_00861bae:; BB(0x00861bae);
    /* 00861bae: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00861bb1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861bb3: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00861bb6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861bb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00861bb9: lea eax, [ebp - 1] */ r_eax = (u32)(r_ebp+0xffffffffu);
    /* 00861bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861bbd: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861bbf: push dword ptr [eax + esi] */ { u32 v = R32((u32)(r_eax+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00861bc2: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x861bc8u); call_ind(t); }
    /* 00861bc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861bca: jne 0x861bd6 */ if (!fZ) goto L_00861bd6;
L_00861bcc:; BB(0x00861bcc);
    /* 00861bcc: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x861bd2u); call_ind(t); }
    /* 00861bd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861bd4: jne 0x861c1c */ if (!fZ) goto L_00861c1c;
L_00861bd6:; BB(0x00861bd6);
    /* 00861bd6: cmp dword ptr [ebp - 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861bda: je 0x861c1c */ if (fZ) goto L_00861c1c;
L_00861bdc:; BB(0x00861bdc);
    /* 00861bdc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861bde: test byte ptr [eax + esi + 4], 0x48 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x48u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861be3: je 0x861bf7 */ if (fZ) goto L_00861bf7;
L_00861be5:; BB(0x00861be5);
    /* 00861be5: mov al, byte ptr [ebp - 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffffu))) & 0xffu);
    /* 00861be8: cmp al, 0xa */ {  u32 a = (u8)r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861bea: je 0x861c02 */ if (fZ) goto L_00861c02;
L_00861bec:; BB(0x00861bec);
    /* 00861bec: mov byte ptr [ebx], 0xd */ W8((u32)(r_ebx), 0xdu);
    /* 00861bef: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00861bf1: mov byte ptr [ecx + esi + 5], al */ W8((u32)(r_ecx+r_esi+0x5u), (u8)r_eax);
    /* 00861bf5: jmp 0x861c1f */ goto L_00861c1f;
L_00861bf7:; BB(0x00861bf7);
    /* 00861bf7: cmp ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861bfa: jne 0x861c07 */ if (!fZ) goto L_00861c07;
L_00861bfc:; BB(0x00861bfc);
    /* 00861bfc: cmp byte ptr [ebp - 1], 0xa */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861c00: jne 0x861c07 */ if (!fZ) goto L_00861c07;
L_00861c02:; BB(0x00861c02);
    /* 00861c02: mov byte ptr [ebx], 0xa */ W8((u32)(r_ebx), 0xau);
    /* 00861c05: jmp 0x861c1f */ goto L_00861c1f;
L_00861c07:; BB(0x00861c07);
    /* 00861c07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00861c09: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00861c0b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861c0e: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x861c13u); f_0086485b();
    /* 00861c13: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00861c16: cmp byte ptr [ebp - 1], 0xa */ {  u32 a = R8((u32)(r_ebp+0xffffffffu)); u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861c1a: je 0x861c20 */ if (fZ) goto L_00861c20;
L_00861c1c:; BB(0x00861c1c);
    /* 00861c1c: mov byte ptr [ebx], 0xd */ W8((u32)(r_ebx), 0xdu);
L_00861c1f:; BB(0x00861c1f);
    /* 00861c1f: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00861c20:; BB(0x00861c20);
    /* 00861c20: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00861c23: cmp dword ptr [ebp + 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00861c26: jb 0x861b78 */ if (fC) goto L_00861b78;
L_00861c2c:; BB(0x00861c2c);
    /* 00861c2c: jmp 0x861c3e */ goto L_00861c3e;
L_00861c2e:; BB(0x00861c2e);
    /* 00861c2e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861c30: test byte ptr [eax + esi + 4], 0x40 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861c35: jne 0x861c3e */ if (!fZ) goto L_00861c3e;
L_00861c37:; BB(0x00861c37);
    /* 00861c37: lea esi, [eax + esi + 4] */ r_esi = (u32)(r_eax+r_esi+0x4u);
    /* 00861c3b: or byte ptr [esi], 2 */ { u32 ad = (u32)(r_esi);  u32 a = R8(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_00861c3e:; BB(0x00861c3e);
    /* 00861c3e: sub ebx, dword ptr [ebp + 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861c41: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
L_00861c44:; BB(0x00861c44);
    /* 00861c44: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00861c47: jmp 0x861c4b */ goto L_00861c4b;
L_00861c49:; BB(0x00861c49);
    /* 00861c49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00861c4b:; BB(0x00861c4b);
    /* 00861c4b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861c4c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861c4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00861c4e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861c4f: ret  */ FN_RET(0x00861a75); r_esp += 4; return;
}

