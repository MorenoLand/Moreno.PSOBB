#include "protos.h"

void f_008caaa0(void) /* __fileno */
{
    FN_ENTER(0x008caaa0);
    /* 008caaa0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008caaa4: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 008caaa7: ret  */ FN_RET(0x008caaa0); r_esp += 4; return;
}

void f_008caaa8(void) /* __filelength */
{
    FN_ENTER(0x008caaa8);
    /* 008caaa8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008caaaa: push 0x9a00d0 */ { u32 v = 0x9a00d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008caaaf: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8caab4u); f_0085e5ac();
    /* 008caab4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008caab7: cmp ebx, dword ptr [0xaf0a60] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008caabd: jae 0x8cab60 */ if (!fC) goto L_008cab60;
L_008caac3:; BB(0x008caac3);
    /* 008caac3: mov eax, ebx */ r_eax = r_ebx;
    /* 008caac5: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008caac8: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 008caacf: mov eax, ebx */ r_eax = r_ebx;
    /* 008caad1: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008caad4: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008caad7: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008caada: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008caadc: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008caae1: je 0x8cab60 */ if (fZ) goto L_008cab60;
L_008caae3:; BB(0x008caae3);
    /* 008caae3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008caae4: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x8caae9u); f_00863b11();
    /* 008caae9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008caaea: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008caaee: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008caaf0: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008caaf5: je 0x8cab30 */ if (fZ) goto L_008cab30;
L_008caaf7:; BB(0x008caaf7);
    /* 008caaf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008caaf9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008caafb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008caafc: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x8cab01u); f_0086485b();
    /* 008cab01: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cab04: mov esi, eax */ r_esi = r_eax;
    /* 008cab06: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 008cab09: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cab0c: je 0x8cab43 */ if (fZ) goto L_008cab43;
L_008cab0e:; BB(0x008cab0e);
    /* 008cab0e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008cab10: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cab12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cab13: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x8cab18u); f_0086485b();
    /* 008cab18: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cab1b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008cab1e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cab20: je 0x8cab47 */ if (fZ) goto L_008cab47;
L_008cab22:; BB(0x008cab22);
    /* 008cab22: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cab24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cab25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cab26: call 0x86485b */ r_esp -= 4; W32(r_esp, 0x8cab2bu); f_0086485b();
    /* 008cab2b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cab2e: jmp 0x8cab47 */ goto L_008cab47;
L_008cab30:; BB(0x008cab30);
    /* 008cab30: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8cab35u); f_00859dd6();
    /* 008cab35: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008cab3b: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8cab40u); f_00859ddf();
    /* 008cab40: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008cab43:; BB(0x008cab43);
    /* 008cab43: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008cab47:; BB(0x008cab47);
    /* 008cab47: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008cab4b: call 0x8cab58 */ r_esp -= 4; W32(r_esp, 0x8cab50u); f_008cab58();
    /* 008cab50: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008cab53: jmp 0x8cab76 */ goto L_008cab76;
L_008cab60:; BB(0x008cab60);
    /* 008cab60: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8cab65u); f_00859dd6();
    /* 008cab65: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008cab6b: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8cab70u); f_00859ddf();
    /* 008cab70: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008cab73: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008cab76:; BB(0x008cab76);
    /* 008cab76: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8cab7bu); f_0085e5e7();
    /* 008cab7b: ret  */ FN_RET(0x008caaa8); r_esp += 4; return;
}

void f_008cab55(void)
{
    FN_ENTER(0x008cab55);
    /* 008cab55: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008cab58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cab59: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8cab5eu); f_00863bb1();
    /* 008cab5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cab5f: ret  */ FN_RET(0x008cab55); r_esp += 4; return;
}

void f_008cab58(void)
{
    FN_ENTER(0x008cab58);
    /* 008cab58: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cab59: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8cab5eu); f_00863bb1();
    /* 008cab5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cab5f: ret  */ FN_RET(0x008cab58); r_esp += 4; return;
}

void f_008cab7c(void) /* __strupr */
{
    FN_ENTER(0x008cab7c);
    /* 008cab7c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008cab7e: push 0x9a00e0 */ { u32 v = 0x9a00e0u; r_esp -= 4; W32(r_esp, v); }
    /* 008cab83: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8cab88u); f_0085e5ac();
    /* 008cab88: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008cab8a: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 008cab8d: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8cab92u); f_0085c583();
    /* 008cab92: mov esi, dword ptr [eax + 0x64] */ r_esi = R32((u32)(r_eax+0x64u));
    /* 008cab95: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008cab98: cmp esi, dword ptr [0xa23cec] */ {  u32 a = r_esi; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cab9e: je 0x8cabaa */ if (fZ) goto L_008cabaa;
L_008caba0:; BB(0x008caba0);
    /* 008caba0: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x8caba5u); f_0085daca();
    /* 008caba5: mov esi, eax */ r_esi = r_eax;
    /* 008caba7: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
L_008cabaa:; BB(0x008cabaa);
    /* 008cabaa: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008cabad: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cabaf: jne 0x8cabd9 */ if (!fZ) goto L_008cabd9;
L_008cabb1:; BB(0x008cabb1);
    /* 008cabb1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008cabb4: mov edx, eax */ r_edx = r_eax;
    /* 008cabb6: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cabb8: je 0x8cac87 */ if (fZ) goto L_008cac87;
L_008cabbe:; BB(0x008cabbe);
    /* 008cabbe: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008cabc0: cmp cl, 0x61 */ {  u32 a = (u8)r_ecx; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 008cabc3: jl 0x8cabcf */ if ((fS!=fO)) goto L_008cabcf;
L_008cabc5:; BB(0x008cabc5);
    /* 008cabc5: cmp cl, 0x7a */ {  u32 a = (u8)r_ecx; u32 b = 0x7au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 008cabc8: jg 0x8cabcf */ if ((!fZ&&fS==fO)) goto L_008cabcf;
L_008cabca:; BB(0x008cabca);
    /* 008cabca: sub cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008cabcd: mov byte ptr [edx], cl */ W8((u32)(r_edx), (u8)r_ecx);
L_008cabcf:; BB(0x008cabcf);
    /* 008cabcf: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008cabd0: cmp byte ptr [edx], bl */ {  u32 a = R8((u32)(r_edx)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008cabd2: jne 0x8cabbe */ if (!fZ) goto L_008cabbe;
L_008cabd4:; BB(0x008cabd4);
    /* 008cabd4: jmp 0x8cac87 */ goto L_008cac87;
L_008cabd9:; BB(0x008cabd9);
    /* 008cabd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008cabdb: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cabde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cabdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cabe0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008cabe2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cabe5: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 008cabea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cabeb: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x8cabf0u); f_00860103();
    /* 008cabf0: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cabf3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008cabf6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cabf8: je 0x8cac84 */ if (fZ) goto L_008cac84;
L_008cabfe:; BB(0x008cabfe);
    /* 008cabfe: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 008cac01: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cac04: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008cac07: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8cac0cu); f_00858020();
    /* 008cac0c: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 008cac0f: mov edi, esp */ r_edi = r_esp;
    /* 008cac11: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 008cac14: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008cac18: jmp 0x8cac31 */ goto L_008cac31;
L_008cac31:; BB(0x008cac31);
    /* 008cac31: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac33: jne 0x8cac4b */ if (!fZ) goto L_008cac4b;
L_008cac35:; BB(0x008cac35);
    /* 008cac35: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac38: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8cac3du); f_00859c55();
    /* 008cac3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cac3e: mov edi, eax */ r_edi = r_eax;
    /* 008cac40: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 008cac47: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac49: je 0x8cac78 */ if (fZ) goto L_008cac78;
L_008cac4b:; BB(0x008cac4b);
    /* 008cac4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008cac4d: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac50: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cac54: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008cac56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac59: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 008cac5e: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac61: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x8cac66u); f_00860103();
    /* 008cac66: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cac69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac6b: je 0x8cac78 */ if (fZ) goto L_008cac78;
L_008cac6d:; BB(0x008cac6d);
    /* 008cac6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cac6e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac71: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x8cac76u); f_0085e2f0();
    /* 008cac76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cac77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cac78:; BB(0x008cac78);
    /* 008cac78: cmp dword ptr [ebp - 0x24], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac7b: je 0x8cac84 */ if (fZ) goto L_008cac84;
L_008cac7d:; BB(0x008cac7d);
    /* 008cac7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cac7e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8cac83u); f_00858882();
    /* 008cac83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cac84:; BB(0x008cac84);
    /* 008cac84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_008cac87:; BB(0x008cac87);
    /* 008cac87: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 008cac8a: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8cac8fu); f_0085e5e7();
    /* 008cac8f: ret  */ FN_RET(0x008cab7c); r_esp += 4; return;
}

void f_008cac1a(void)
{
    FN_ENTER(0x008cac1a);
    /* 008cac1a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008cac1c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008cac1d: ret  */ FN_RET(0x008cac1a); r_esp += 4; return;
}

void f_008cac1e(void)
{
    FN_ENTER(0x008cac1e);
    /* 008cac1e: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 008cac21: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x8cac26u); f_00865365();
    /* 008cac26: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008cac28: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008cac2a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008cac2e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008cac31: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac33: jne 0x8cac4b */ if (!fZ) goto L_008cac4b;
L_008cac35:; BB(0x008cac35);
    /* 008cac35: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac38: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8cac3du); f_00859c55();
    /* 008cac3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cac3e: mov edi, eax */ r_edi = r_eax;
    /* 008cac40: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 008cac47: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac49: je 0x8cac78 */ if (fZ) goto L_008cac78;
L_008cac4b:; BB(0x008cac4b);
    /* 008cac4b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008cac4d: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac50: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cac54: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008cac56: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac59: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 008cac5e: push dword ptr [esi + 0x14] */ { u32 v = R32((u32)(r_esi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac61: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x8cac66u); f_00860103();
    /* 008cac66: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cac69: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac6b: je 0x8cac78 */ if (fZ) goto L_008cac78;
L_008cac6d:; BB(0x008cac6d);
    /* 008cac6d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cac6e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008cac71: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x8cac76u); f_0085e2f0();
    /* 008cac76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008cac77: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cac78:; BB(0x008cac78);
    /* 008cac78: cmp dword ptr [ebp - 0x24], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cac7b: je 0x8cac84 */ if (fZ) goto L_008cac84;
L_008cac7d:; BB(0x008cac7d);
    /* 008cac7d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cac7e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8cac83u); f_00858882();
    /* 008cac83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008cac84:; BB(0x008cac84);
    /* 008cac84: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008cac87: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 008cac8a: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8cac8fu); f_0085e5e7();
    /* 008cac8f: ret  */ FN_RET(0x008cac1e); r_esp += 4; return;
}

void f_008cac90(void) /* __allshr */
{
    FN_ENTER(0x008cac90);
    /* 008cac90: cmp cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffu;  fA = (((a ^ b ^ r) & 0x10u) != 0); fC = (a < b); }
    /* 008cac93: jae 0x8cacab */ if (!fC) goto L_008cacab;
L_008cac95:; BB(0x008cac95);
    /* 008cac95: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008cac98: jae 0x8caca0 */ if (!fC) goto L_008caca0;
L_008cac9a:; BB(0x008cac9a);
    /* 008cac9a: shrd eax, edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 b = r_edx; u32 r = a; if (c) { r = (a >> c) | (b << (32 - c)); fC = (a >> (c - 1)) & 1; r_eax = r; fZ = (r == 0); fS = r >> 31; fP = !__builtin_parity(r & 0xffu); fO = ((r ^ a) >> 31) & 1; } }
    /* 008cac9d: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008cac9f: ret  */ FN_RET(0x008cac90); r_esp += 4; return;
L_008caca0:; BB(0x008caca0);
    /* 008caca0: mov eax, edx */ r_eax = r_edx;
    /* 008caca2: sar edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008caca5: and cl, 0x1f */ {  u32 a = (u8)r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008caca8: sar eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008cacaa: ret  */ FN_RET(0x008cac90); r_esp += 4; return;
L_008cacab:; BB(0x008cacab);
    /* 008cacab: sar edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008cacae: mov eax, edx */ r_eax = r_edx;
    /* 008cacb0: ret  */ FN_RET(0x008cac90); r_esp += 4; return;
}

void f_008cacc0(void) /* _memchr */
{
    FN_ENTER(0x008cacc0);
    /* 008cacc0: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 008cacc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cacc5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cacc7: je 0x8cad1b */ if (fZ) goto L_008cad1b;
L_008cacc9:; BB(0x008cacc9);
    /* 008cacc9: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008caccd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008caccf: mov bl, byte ptr [esp + 0xc] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_esp+0xcu))) & 0xffu);
    /* 008cacd3: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cacd9: je 0x8cacf1 */ if (fZ) goto L_008cacf1;
L_008cacdb:; BB(0x008cacdb);
    /* 008cacdb: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008cacdd: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008cace0: xor cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cace2: je 0x8cad56 */ if (fZ) goto L_008cad56;
L_008cace4:; BB(0x008cace4);
    /* 008cace4: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008cace7: je 0x8cad1b */ if (fZ) goto L_008cad1b;
L_008cace9:; BB(0x008cace9);
    /* 008cace9: test edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cacef: jne 0x8cacdb */ if (!fZ) goto L_008cacdb;
L_008cacf1:; BB(0x008cacf1);
    /* 008cacf1: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008cacf4: jb 0x8cad08 */ if (fC) goto L_008cad08;
L_008cacf6:; BB(0x008cacf6);
    /* 008cacf6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cacf7: mov edi, ebx */ r_edi = r_ebx;
    /* 008cacf9: shl ebx, 8 */ { u32 c = (8u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008cacfc: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008cacfe: mov edi, ebx */ r_edi = r_ebx;
    /* 008cad00: shl ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008cad03: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008cad05: jmp 0x8cad22 */ goto L_008cad22;
L_008cad07:; BB(0x008cad07);
    /* 008cad07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008cad08:; BB(0x008cad08);
    /* 008cad08: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008cad0b: je 0x8cad1b */ if (fZ) goto L_008cad1b;
L_008cad0d:; BB(0x008cad0d);
    /* 008cad0d: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 008cad0f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008cad12: xor cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cad14: je 0x8cad56 */ if (fZ) goto L_008cad56;
L_008cad16:; BB(0x008cad16);
    /* 008cad16: sub eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008cad19: jne 0x8cad0d */ if (!fZ) goto L_008cad0d;
L_008cad1b:; BB(0x008cad1b);
    /* 008cad1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cad1c: ret  */ FN_RET(0x008cacc0); r_esp += 4; return;
L_008cad1d:; BB(0x008cad1d);
    /* 008cad1d: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008cad20: jb 0x8cad07 */ if (fC) goto L_008cad07;
L_008cad22:; BB(0x008cad22);
    /* 008cad22: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 008cad24: xor ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008cad26: mov edi, 0x7efefeff */ r_edi = 0x7efefeffu;
    /* 008cad2b: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008cad2d: xor ecx, 0xffffffff */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008cad30: xor ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008cad32: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008cad35: and ecx, 0x81010100 */ {  u32 a = r_ecx; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008cad3b: je 0x8cad1d */ if (fZ) goto L_008cad1d;
L_008cad3d:; BB(0x008cad3d);
    /* 008cad3d: mov ecx, dword ptr [edx - 4] */ r_ecx = R32((u32)(r_edx+0xfffffffcu));
    /* 008cad40: xor cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cad42: je 0x8cad67 */ if (fZ) goto L_008cad67;
L_008cad44:; BB(0x008cad44);
    /* 008cad44: xor ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cad46: je 0x8cad61 */ if (fZ) goto L_008cad61;
L_008cad48:; BB(0x008cad48);
    /* 008cad48: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008cad4b: xor cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cad4d: je 0x8cad5b */ if (fZ) goto L_008cad5b;
L_008cad4f:; BB(0x008cad4f);
    /* 008cad4f: xor ch, bl */ {  u32 a = (u8)(r_ecx>>8); u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ecx = (r_ecx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008cad51: je 0x8cad55 */ if (fZ) goto L_008cad55;
L_008cad53:; BB(0x008cad53);
    /* 008cad53: jmp 0x8cad1d */ goto L_008cad1d;
L_008cad55:; BB(0x008cad55);
    /* 008cad55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_008cad56:; BB(0x008cad56);
    /* 008cad56: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 008cad59: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cad5a: ret  */ FN_RET(0x008cacc0); r_esp += 4; return;
L_008cad5b:; BB(0x008cad5b);
    /* 008cad5b: lea eax, [edx - 2] */ r_eax = (u32)(r_edx+0xfffffffeu);
    /* 008cad5e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cad5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cad60: ret  */ FN_RET(0x008cacc0); r_esp += 4; return;
L_008cad61:; BB(0x008cad61);
    /* 008cad61: lea eax, [edx - 3] */ r_eax = (u32)(r_edx+0xfffffffdu);
    /* 008cad64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cad65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cad66: ret  */ FN_RET(0x008cacc0); r_esp += 4; return;
L_008cad67:; BB(0x008cad67);
    /* 008cad67: lea eax, [edx - 4] */ r_eax = (u32)(r_edx+0xfffffffcu);
    /* 008cad6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cad6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008cad6c: ret  */ FN_RET(0x008cacc0); r_esp += 4; return;
}

void f_008cad70(void) /* _shortsort */
{
    FN_ENTER(0x008cad70);
    /* 008cad70: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008cad74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cad75: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 008cad79: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cad7a: mov edi, eax */ r_edi = r_eax;
    /* 008cad7c: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008cad7e: jbe 0x8cadda */ if ((fC||fZ)) goto L_008cadda;
L_008cad80:; BB(0x008cad80);
    /* 008cad80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cad81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008cad82:; BB(0x008cad82);
    /* 008cad82: lea esi, [ecx + ebp] */ r_esi = (u32)(r_ecx+r_ebp);
    /* 008cad85: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cad87: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008cad89: ja 0x8cada9 */ if ((!fC&&!fZ)) goto L_008cada9;
L_008cad8b:; BB(0x008cad8b);
    /* 008cad8b: jmp 0x8cad90 */ goto L_008cad90;
L_008cad90:; BB(0x008cad90);
    /* 008cad90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cad91: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cad92: call dword ptr [esp + 0x24] */ { u32 t = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, 0x8cad96u); call_ind(t); }
    /* 008cad96: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cad99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008cad9b: jle 0x8cad9f */ if ((fZ||fS!=fO)) goto L_008cad9f;
L_008cad9d:; BB(0x008cad9d);
    /* 008cad9d: mov ebx, esi */ r_ebx = r_esi;
L_008cad9f:; BB(0x008cad9f);
    /* 008cad9f: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cada1: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cada3: jbe 0x8cad90 */ if ((fC||fZ)) goto L_008cad90;
L_008cada5:; BB(0x008cada5);
    /* 008cada5: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
L_008cada9:; BB(0x008cada9);
    /* 008cada9: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cadab: mov eax, edi */ r_eax = r_edi;
    /* 008cadad: je 0x8cadd2 */ if (fZ) goto L_008cadd2;
L_008cadaf:; BB(0x008cadaf);
    /* 008cadaf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cadb1: je 0x8cadd2 */ if (fZ) goto L_008cadd2;
L_008cadb3:; BB(0x008cadb3);
    /* 008cadb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008cadb5: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008cadb7: mov esi, ebp */ r_esi = r_ebp;
    /* 008cadb9: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_008cadc0:; BB(0x008cadc0);
    /* 008cadc0: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008cadc2: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008cadc5: mov byte ptr [ecx + eax], bl */ W8((u32)(r_ecx+r_eax), (u8)r_ebx);
    /* 008cadc8: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008cadca: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cadcb: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008cadcc: jne 0x8cadc0 */ if (!fZ) goto L_008cadc0;
L_008cadce:; BB(0x008cadce);
    /* 008cadce: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
L_008cadd2:; BB(0x008cadd2);
    /* 008cadd2: sub edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008cadd4: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008cadd6: ja 0x8cad82 */ if ((!fC&&!fZ)) goto L_008cad82;
L_008cadd8:; BB(0x008cadd8);
    /* 008cadd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008cadd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008cadda:; BB(0x008cadda);
    /* 008cadda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008caddb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008caddc: ret  */ FN_RET(0x008cad70); r_esp += 4; return;
}

void f_008cade0(void) /* _qsort */
{
    FN_ENTER(0x008cade0);
    /* 008cade0: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008cade4: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008cadea: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008caded: jb 0x8cb05c */ if (fC) goto L_008cb05c;
L_008cadf3:; BB(0x008cadf3);
    /* 008cadf3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cadf4: mov ebp, dword ptr [esp + 0x110] */ r_ebp = R32((u32)(r_esp+0x110u));
    /* 008cadfb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cadfd: je 0x8cb05b */ if (fZ) goto L_008cb05b;
L_008cae03:; BB(0x008cae03);
    /* 008cae03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cae04: mov ebx, dword ptr [esp + 0x10c] */ r_ebx = R32((u32)(r_esp+0x10cu));
    /* 008cae0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cae0c: lea esi, [eax - 1] */ r_esi = (u32)(r_eax+0xffffffffu);
    /* 008cae0f: imul esi, ebp */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_ebp; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008cae12: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cae14: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 008cae1c: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 008cae20: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 008cae24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008cae25:; BB(0x008cae25);
    /* 008cae25: mov eax, esi */ r_eax = r_esi;
    /* 008cae27: sub eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008cae29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008cae2b: div ebp */ { u32 d = r_ebp; if (!d) UNSUP(0x008cae2b, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008cae2b, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008cae2d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cae2e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cae31: ja 0x8cae6f */ if ((!fC&&!fZ)) goto L_008cae6f;
L_008cae33:; BB(0x008cae33);
    /* 008cae33: mov eax, dword ptr [esp + 0x120] */ r_eax = R32((u32)(r_esp+0x120u));
    /* 008cae3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008cae3b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008cae3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cae3d: mov eax, esi */ r_eax = r_esi;
    /* 008cae3f: call 0x8cad70 */ r_esp -= 4; W32(r_esp, 0x8cae44u); f_008cad70();
    /* 008cae44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008cae47:; BB(0x008cae47);
    /* 008cae47: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 008cae4b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008cae4c: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 008cae50: js 0x8cb058 */ if (fS) goto L_008cb058;
L_008cae56:; BB(0x008cae56);
    /* 008cae56: mov edx, dword ptr [esp + eax*4 + 0x20] */ r_edx = R32((u32)(r_esp+r_eax*4+0x20u));
    /* 008cae5a: mov eax, dword ptr [esp + eax*4 + 0x98] */ r_eax = R32((u32)(r_esp+r_eax*4+0x98u));
    /* 008cae61: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 008cae65: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008cae69: mov ebx, edx */ r_ebx = r_edx;
    /* 008cae6b: mov esi, eax */ r_esi = r_eax;
    /* 008cae6d: jmp 0x8cae25 */ goto L_008cae25;
L_008cae6f:; BB(0x008cae6f);
    /* 008cae6f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008cae71: imul eax, ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008cae74: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cae76: mov edi, eax */ r_edi = r_eax;
    /* 008cae78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cae79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008cae7a: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8cae81u); call_ind(t); }
    /* 008cae81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cae84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008cae86: jle 0x8caeaa */ if ((fZ||fS!=fO)) goto L_008caeaa;
L_008cae88:; BB(0x008cae88);
    /* 008cae88: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cae8a: mov eax, edi */ r_eax = r_edi;
    /* 008cae8c: je 0x8caeaa */ if (fZ) goto L_008caeaa;
L_008cae8e:; BB(0x008cae8e);
    /* 008cae8e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008cae90: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008cae92: mov esi, ebp */ r_esi = r_ebp;
L_008cae94:; BB(0x008cae94);
    /* 008cae94: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008cae96: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008cae99: mov byte ptr [ecx + eax], bl */ W8((u32)(r_ecx+r_eax), (u8)r_ebx);
    /* 008cae9c: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008cae9e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008cae9f: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008caea0: jne 0x8cae94 */ if (!fZ) goto L_008cae94;
L_008caea2:; BB(0x008caea2);
    /* 008caea2: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008caea6: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_008caeaa:; BB(0x008caeaa);
    /* 008caeaa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008caeab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008caeac: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8caeb3u); call_ind(t); }
    /* 008caeb3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008caeb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008caeb8: jle 0x8caedc */ if ((fZ||fS!=fO)) goto L_008caedc;
L_008caeba:; BB(0x008caeba);
    /* 008caeba: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008caebc: mov eax, esi */ r_eax = r_esi;
    /* 008caebe: je 0x8caedc */ if (fZ) goto L_008caedc;
L_008caec0:; BB(0x008caec0);
    /* 008caec0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008caec2: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008caec4: mov esi, ebp */ r_esi = r_ebp;
L_008caec6:; BB(0x008caec6);
    /* 008caec6: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008caec8: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008caecb: mov byte ptr [ecx + eax], bl */ W8((u32)(r_ecx+r_eax), (u8)r_ebx);
    /* 008caece: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008caed0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008caed1: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008caed2: jne 0x8caec6 */ if (!fZ) goto L_008caec6;
L_008caed4:; BB(0x008caed4);
    /* 008caed4: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008caed8: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
L_008caedc:; BB(0x008caedc);
    /* 008caedc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008caedd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008caede: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8caee5u); call_ind(t); }
    /* 008caee5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008caee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008caeea: jle 0x8caf0a */ if ((fZ||fS!=fO)) goto L_008caf0a;
L_008caeec:; BB(0x008caeec);
    /* 008caeec: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008caeee: mov eax, esi */ r_eax = r_esi;
    /* 008caef0: je 0x8caf0a */ if (fZ) goto L_008caf0a;
L_008caef2:; BB(0x008caef2);
    /* 008caef2: mov ecx, edi */ r_ecx = r_edi;
    /* 008caef4: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008caef6: mov esi, ebp */ r_esi = r_ebp;
L_008caef8:; BB(0x008caef8);
    /* 008caef8: mov bl, byte ptr [eax] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008caefa: mov dl, byte ptr [ecx + eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx+r_eax))) & 0xffu);
    /* 008caefd: mov byte ptr [ecx + eax], bl */ W8((u32)(r_ecx+r_eax), (u8)r_ebx);
    /* 008caf00: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008caf02: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008caf03: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008caf04: jne 0x8caef8 */ if (!fZ) goto L_008caef8;
L_008caf06:; BB(0x008caf06);
    /* 008caf06: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_008caf0a:; BB(0x008caf0a);
    /* 008caf0a: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 008caf0e: mov edi, edi */ r_edi = r_edi;
L_008caf10:; BB(0x008caf10);
    /* 008caf10: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008caf12: jbe 0x8caf30 */ if ((fC||fZ)) goto L_008caf30;
L_008caf14:; BB(0x008caf14);
    /* 008caf14: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008caf16: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008caf18: jae 0x8caf30 */ if (!fC) goto L_008caf30;
L_008caf1a:; BB(0x008caf1a);
    /* 008caf1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008caf1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008caf1c: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8caf23u); call_ind(t); }
    /* 008caf23: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008caf26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008caf28: jle 0x8caf14 */ if ((fZ||fS!=fO)) goto L_008caf14;
L_008caf2a:; BB(0x008caf2a);
    /* 008caf2a: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008caf2c: ja 0x8caf50 */ if ((!fC&&!fZ)) goto L_008caf50;
L_008caf2e:; BB(0x008caf2e);
    /* 008caf2e: mov edi, edi */ r_edi = r_edi;
L_008caf30:; BB(0x008caf30);
    /* 008caf30: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 008caf34: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008caf36: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008caf38: ja 0x8caf50 */ if ((!fC&&!fZ)) goto L_008caf50;
L_008caf3a:; BB(0x008caf3a);
    /* 008caf3a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008caf3b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008caf3c: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8caf43u); call_ind(t); }
    /* 008caf43: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008caf46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008caf48: jle 0x8caf30 */ if ((fZ||fS!=fO)) goto L_008caf30;
L_008caf4a:; BB(0x008caf4a);
    /* 008caf4a: lea ebx, [ebx] */ r_ebx = (u32)(r_ebx);
L_008caf50:; BB(0x008caf50);
    /* 008caf50: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008caf52: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008caf54: jbe 0x8caf66 */ if ((fC||fZ)) goto L_008caf66;
L_008caf56:; BB(0x008caf56);
    /* 008caf56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008caf57: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008caf58: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8caf5fu); call_ind(t); }
    /* 008caf5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008caf62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008caf64: jg 0x8caf50 */ if ((!fZ&&fS==fO)) goto L_008caf50;
L_008caf66:; BB(0x008caf66);
    /* 008caf66: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008caf68: ja 0x8cafac */ if ((!fC&&!fZ)) goto L_008cafac;
L_008caf6a:; BB(0x008caf6a);
    /* 008caf6a: mov eax, esi */ r_eax = r_esi;
    /* 008caf6c: je 0x8caf9d */ if (fZ) goto L_008caf9d;
L_008caf6e:; BB(0x008caf6e);
    /* 008caf6e: mov ecx, dword ptr [esp + 0x11c] */ r_ecx = R32((u32)(r_esp+0x11cu));
    /* 008caf75: mov ebp, ebx */ r_ebp = r_ebx;
    /* 008caf77: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008caf79: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008caf7d: lea ecx, [ecx] */ r_ecx = (u32)(r_ecx);
L_008caf80:; BB(0x008caf80);
    /* 008caf80: mov cl, byte ptr [eax + ebp] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+r_ebp))) & 0xffu);
    /* 008caf83: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008caf85: mov byte ptr [eax + ebp], dl */ W8((u32)(r_eax+r_ebp), (u8)r_edx);
    /* 008caf88: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 008caf8a: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 008caf8e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008caf8f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008caf90: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 008caf94: jne 0x8caf80 */ if (!fZ) goto L_008caf80;
L_008caf96:; BB(0x008caf96);
    /* 008caf96: mov ebp, dword ptr [esp + 0x11c] */ r_ebp = R32((u32)(r_esp+0x11cu));
L_008caf9d:; BB(0x008caf9d);
    /* 008caf9d: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008caf9f: jne 0x8caf10 */ if (!fZ) goto L_008caf10;
L_008cafa5:; BB(0x008cafa5);
    /* 008cafa5: mov edi, ebx */ r_edi = r_ebx;
    /* 008cafa7: jmp 0x8caf10 */ goto L_008caf10;
L_008cafac:; BB(0x008cafac);
    /* 008cafac: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008cafae: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cafb0: jae 0x8cafd0 */ if (!fC) goto L_008cafd0;
L_008cafb2:; BB(0x008cafb2);
    /* 008cafb2: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008cafb4: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cafb6: jbe 0x8cafd0 */ if ((fC||fZ)) goto L_008cafd0;
L_008cafb8:; BB(0x008cafb8);
    /* 008cafb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cafb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cafba: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8cafc1u); call_ind(t); }
    /* 008cafc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cafc4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cafc6: je 0x8cafb2 */ if (fZ) goto L_008cafb2;
L_008cafc8:; BB(0x008cafc8);
    /* 008cafc8: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cafca: jb 0x8cafea */ if (fC) goto L_008cafea;
L_008cafcc:; BB(0x008cafcc);
    /* 008cafcc: lea esp, [esp] */ r_esp = (u32)(r_esp);
L_008cafd0:; BB(0x008cafd0);
    /* 008cafd0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008cafd4: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008cafd6: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008cafd8: jbe 0x8cafee */ if ((fC||fZ)) goto L_008cafee;
L_008cafda:; BB(0x008cafda);
    /* 008cafda: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008cafdb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008cafdc: call dword ptr [esp + 0x128] */ { u32 t = R32((u32)(r_esp+0x128u)); r_esp -= 4; W32(r_esp, 0x8cafe3u); call_ind(t); }
    /* 008cafe3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008cafe6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008cafe8: je 0x8cafd0 */ if (fZ) goto L_008cafd0;
L_008cafea:; BB(0x008cafea);
    /* 008cafea: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
L_008cafee:; BB(0x008cafee);
    /* 008cafee: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 008caff2: mov ecx, edx */ r_ecx = r_edx;
    /* 008caff4: mov edi, esi */ r_edi = r_esi;
    /* 008caff6: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008caff8: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008caffa: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008caffc: jl 0x8cb02b */ if ((fS!=fO)) goto L_008cb02b;
L_008caffe:; BB(0x008caffe);
    /* 008caffe: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cb000: jae 0x8cb016 */ if (!fC) goto L_008cb016;
L_008cb002:; BB(0x008cb002);
    /* 008cb002: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008cb006: mov dword ptr [esp + ecx*4 + 0x20], eax */ W32((u32)(r_esp+r_ecx*4+0x20u), r_eax);
    /* 008cb00a: mov dword ptr [esp + ecx*4 + 0x98], esi */ W32((u32)(r_esp+r_ecx*4+0x98u), r_esi);
    /* 008cb011: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb012: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_008cb016:; BB(0x008cb016);
    /* 008cb016: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cb018: jae 0x8cae47 */ if (!fC) goto L_008cae47;
L_008cb01e:; BB(0x008cb01e);
    /* 008cb01e: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 008cb022: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 008cb026: jmp 0x8cae25 */ goto L_008cae25;
L_008cb02b:; BB(0x008cb02b);
    /* 008cb02b: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cb02d: jae 0x8cb043 */ if (!fC) goto L_008cb043;
L_008cb02f:; BB(0x008cb02f);
    /* 008cb02f: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008cb033: mov dword ptr [esp + ecx*4 + 0x20], ebx */ W32((u32)(r_esp+r_ecx*4+0x20u), r_ebx);
    /* 008cb037: mov dword ptr [esp + ecx*4 + 0x98], edx */ W32((u32)(r_esp+r_ecx*4+0x98u), r_edx);
    /* 008cb03e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008cb03f: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_008cb043:; BB(0x008cb043);
    /* 008cb043: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008cb045: jae 0x8cae47 */ if (!fC) goto L_008cae47;
L_008cb04b:; BB(0x008cb04b);
    /* 008cb04b: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 008cb04f: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 008cb053: jmp 0x8cae25 */ goto L_008cae25;
L_008cb058:; BB(0x008cb058);
    /* 008cb058: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008cb059: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008cb05a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008cb05b:; BB(0x008cb05b);
    /* 008cb05b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_008cb05c:; BB(0x008cb05c);
    /* 008cb05c: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008cb062: ret  */ FN_RET(0x008cade0); r_esp += 4; return;
}

