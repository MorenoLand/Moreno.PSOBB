#include "protos.h"

void f_0086753c(void) /* ___init_time */
{
    FN_ENTER(0x0086753c);
    /* 0086753c: cmp dword ptr [0xae7ea8], 0 */ {  u32 a = R32((u32)(0xae7ea8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867543: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867544: je 0x867586 */ if (fZ) goto L_00867586;
L_00867546:; BB(0x00867546);
    /* 00867546: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0086754b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086754d: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x867552u); f_008587c7();
    /* 00867552: mov esi, eax */ r_esi = r_eax;
    /* 00867554: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867556: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867557: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867558: jne 0x86755f */ if (!fZ) goto L_0086755f;
L_0086755a:; BB(0x0086755a);
    /* 0086755a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086755c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086755d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086755e: ret  */ FN_RET(0x0086753c); r_esp += 4; return;
L_0086755f:; BB(0x0086755f);
    /* 0086755f: call 0x867045 */ r_esp -= 4; W32(r_esp, 0x867564u); f_00867045();
    /* 00867564: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867566: je 0x867578 */ if (fZ) goto L_00867578;
L_00867568:; BB(0x00867568);
    /* 00867568: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867569: call 0x8673ac */ r_esp -= 4; W32(r_esp, 0x86756eu); f_008673ac();
    /* 0086756e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086756f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867574u); f_00858882();
    /* 00867574: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867575: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867576: jmp 0x86755a */ goto L_0086755a;
L_00867578:; BB(0x00867578);
    /* 00867578: mov dword ptr [0xa242d0], esi */ W32((u32)(0xa242d0u), r_esi);
    /* 0086757e: mov dword ptr [0xae7e68], esi */ W32((u32)(0xae7e68u), r_esi);
    /* 00867584: jmp 0x867597 */ goto L_00867597;
L_00867586:; BB(0x00867586);
    /* 00867586: and dword ptr [0xae7e68], 0 */ { u32 ad = (u32)(0xae7e68u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086758d: mov dword ptr [0xa242d0], 0xa242d8 */ W32((u32)(0xa242d0u), 0xa242d8u);
L_00867597:; BB(0x00867597);
    /* 00867597: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00867599: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086759a: ret  */ FN_RET(0x0086753c); r_esp += 4; return;
}

void f_008675fa(void) /* ___init_numeric */
{
    FN_ENTER(0x008675fa);
    /* 008675fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008675fb: mov ebp, esp */ r_ebp = r_esp;
    /* 008675fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008675fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008675ff: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867600: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867601: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00867603: cmp dword ptr [0xae7ea4], esi */ {  u32 a = R32((u32)(0xae7ea4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867609: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086760a: jne 0x86765b */ if (!fZ) goto L_0086765b;
L_0086760c:; BB(0x0086760c);
    /* 0086760c: cmp dword ptr [0xae7ea0], esi */ {  u32 a = R32((u32)(0xae7ea0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867612: jne 0x86765b */ if (!fZ) goto L_0086765b;
L_00867614:; BB(0x00867614);
    /* 00867614: mov eax, dword ptr [0xaf082c] */ r_eax = R32((u32)(0xaf082cu));
    /* 00867619: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086761b: je 0x86763f */ if (fZ) goto L_0086763f;
L_0086761d:; BB(0x0086761d);
    /* 0086761d: cmp dword ptr [eax], esi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086761f: jne 0x86763f */ if (!fZ) goto L_0086763f;
L_00867621:; BB(0x00867621);
    /* 00867621: mov ecx, dword ptr [0xa23cec] */ r_ecx = R32((u32)(0xa23cecu));
    /* 00867627: cmp eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086762a: je 0x86763f */ if (fZ) goto L_0086763f;
L_0086762c:; BB(0x0086762c);
    /* 0086762c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086762d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867632u); f_00858882();
    /* 00867632: push dword ptr [0xae7e6c] */ { u32 v = R32((u32)(0xae7e6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867638: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86763du); f_00858882();
    /* 0086763d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086763e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086763f:; BB(0x0086763f);
    /* 0086763f: mov dword ptr [0xaf0830], esi */ W32((u32)(0xaf0830u), r_esi);
    /* 00867645: mov dword ptr [0xaf082c], esi */ W32((u32)(0xaf082cu), r_esi);
    /* 0086764b: mov ebx, 0xa244c4 */ r_ebx = 0xa244c4u;
    /* 00867650: mov dword ptr [0xae7e6c], esi */ W32((u32)(0xae7e6cu), r_esi);
    /* 00867656: jmp 0x8677a7 */ goto L_008677a7;
L_0086765b:; BB(0x0086765b);
    /* 0086765b: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0086765d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086765f: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x867664u); f_008587c7();
    /* 00867664: mov ebx, eax */ r_ebx = r_eax;
    /* 00867666: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867669: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086766a: je 0x867691 */ if (fZ) goto L_00867691;
L_0086766c:; BB(0x0086766c);
    /* 0086766c: mov esi, dword ptr [0xa244f4] */ r_esi = R32((u32)(0xa244f4u));
    /* 00867672: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00867674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867675: mov edi, ebx */ r_edi = r_ebx;
    /* 00867677: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00867679: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086767b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x867680u); f_00859c55();
    /* 00867680: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00867682: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867684: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867685: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 00867688: jne 0x867699 */ if (!fZ) goto L_00867699;
L_0086768a:; BB(0x0086768a);
    /* 0086768a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086768b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867690u); f_00858882();
    /* 00867690: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00867691:; BB(0x00867691);
    /* 00867691: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00867693: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00867694: jmp 0x8677c2 */ goto L_008677c2;
L_00867699:; BB(0x00867699);
    /* 00867699: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0086769b: cmp dword ptr [0xae7ea4], esi */ {  u32 a = R32((u32)(0xae7ea4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008676a1: je 0x867750 */ if (fZ) goto L_00867750;
L_008676a7:; BB(0x008676a7);
    /* 008676a7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008676a9: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8676aeu); f_00859c55();
    /* 008676ae: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008676b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008676b1: mov dword ptr [0xaf0830], eax */ W32((u32)(0xaf0830u), r_eax);
    /* 008676b6: jne 0x8676bd */ if (!fZ) goto L_008676bd;
L_008676b8:; BB(0x008676b8);
    /* 008676b8: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008676ba: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008676bb: jmp 0x867705 */ goto L_00867705;
L_008676bd:; BB(0x008676bd);
    /* 008676bd: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008676bf: movzx esi, word ptr [0xae7ed2] */ r_esi = (u32)R16((u32)(0xae7ed2u));
    /* 008676c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008676c7: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 008676c9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008676ca: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008676cc: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8676d1u); f_0086a17d();
    /* 008676d1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008676d4: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 008676d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008676d8: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008676da: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008676db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008676dd: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8676e2u); f_0086a17d();
    /* 008676e2: or dword ptr [ebp - 4], eax */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008676e5: lea edi, [ebx + 8] */ r_edi = (u32)(r_ebx+0x8u);
    /* 008676e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008676e9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008676eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008676ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008676ee: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8676f3u); f_0086a17d();
    /* 008676f3: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008676f6: or eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008676f9: je 0x86771c */ if (fZ) goto L_0086771c;
L_008676fb:; BB(0x008676fb);
    /* 008676fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008676fc: call 0x86759b */ r_esp -= 4; W32(r_esp, 0x867701u); f_0086759b();
    /* 00867701: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867702: or esi, 0xffffffff */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_00867705:; BB(0x00867705);
    /* 00867705: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867706: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86770bu); f_00858882();
    /* 0086770b: push dword ptr [ebp - 8] */ { u32 v = R32((u32)(r_ebp+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086770e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867713u); f_00858882();
    /* 00867713: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867714: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867715: mov eax, esi */ r_eax = r_esi;
    /* 00867717: jmp 0x8677c2 */ goto L_008677c2;
L_0086771c:; BB(0x0086771c);
    /* 0086771c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0086771e: jmp 0x867732 */ goto L_00867732;
L_00867720:; BB(0x00867720);
    /* 00867720: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00867722: cmp cl, 0x30 */ {  u32 a = (u8)r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867725: jl 0x867739 */ if ((fS!=fO)) goto L_00867739;
L_00867727:; BB(0x00867727);
    /* 00867727: cmp cl, 0x39 */ {  u32 a = (u8)r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 0086772a: jg 0x867739 */ if ((!fZ&&fS==fO)) goto L_00867739;
L_0086772c:; BB(0x0086772c);
    /* 0086772c: sub cl, 0x30 */ {  u32 a = (u8)r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086772f: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_00867731:; BB(0x00867731);
    /* 00867731: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00867732:; BB(0x00867732);
    /* 00867732: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867735: jne 0x867720 */ if (!fZ) goto L_00867720;
L_00867737:; BB(0x00867737);
    /* 00867737: jmp 0x86776d */ goto L_0086776d;
L_00867739:; BB(0x00867739);
    /* 00867739: cmp cl, 0x3b */ {  u32 a = (u8)r_ecx; u32 b = 0x3bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086773c: jne 0x867731 */ if (!fZ) goto L_00867731;
L_0086773e:; BB(0x0086773e);
    /* 0086773e: mov esi, eax */ r_esi = r_eax;
L_00867740:; BB(0x00867740);
    /* 00867740: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 00867743: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00867745: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 00867747: mov esi, edi */ r_esi = r_edi;
    /* 00867749: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086774c: jne 0x867740 */ if (!fZ) goto L_00867740;
L_0086774e:; BB(0x0086774e);
    /* 0086774e: jmp 0x867732 */ goto L_00867732;
L_00867750:; BB(0x00867750);
    /* 00867750: mov eax, dword ptr [0xa244c4] */ r_eax = R32((u32)(0xa244c4u));
    /* 00867755: mov dword ptr [0xaf0830], esi */ W32((u32)(0xaf0830u), r_esi);
    /* 0086775b: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 0086775d: mov eax, dword ptr [0xa244c8] */ r_eax = R32((u32)(0xa244c8u));
    /* 00867762: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00867765: mov eax, dword ptr [0xa244cc] */ r_eax = R32((u32)(0xa244ccu));
    /* 0086776a: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
L_0086776d:; BB(0x0086776d);
    /* 0086776d: mov eax, dword ptr [0xaf082c] */ r_eax = R32((u32)(0xaf082cu));
    /* 00867772: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867774: je 0x867799 */ if (fZ) goto L_00867799;
L_00867776:; BB(0x00867776);
    /* 00867776: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867779: jne 0x867799 */ if (!fZ) goto L_00867799;
L_0086777b:; BB(0x0086777b);
    /* 0086777b: mov ecx, dword ptr [0xa23cec] */ r_ecx = R32((u32)(0xa23cecu));
    /* 00867781: cmp eax, dword ptr [ecx + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867784: je 0x867799 */ if (fZ) goto L_00867799;
L_00867786:; BB(0x00867786);
    /* 00867786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867787: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86778cu); f_00858882();
    /* 0086778c: push dword ptr [0xae7e6c] */ { u32 v = R32((u32)(0xae7e6cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867792: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867797u); f_00858882();
    /* 00867797: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00867799:; BB(0x00867799);
    /* 00867799: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086779c: mov dword ptr [0xaf082c], eax */ W32((u32)(0xaf082cu), r_eax);
    /* 008677a1: mov dword ptr [0xae7e6c], ebx */ W32((u32)(0xae7e6cu), r_ebx);
L_008677a7:; BB(0x008677a7);
    /* 008677a7: mov dword ptr [0xa244f4], ebx */ W32((u32)(0xa244f4u), r_ebx);
    /* 008677ad: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008677af: mov al, byte ptr [eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 008677b1: mov byte ptr [0xa23f94], al */ W8((u32)(0xa23f94u), (u8)r_eax);
    /* 008677b6: mov dword ptr [0xa23f98], 1 */ W32((u32)(0xa23f98u), 0x1u);
    /* 008677c0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008677c2:; BB(0x008677c2);
    /* 008677c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008677c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008677c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008677c5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008677c6: ret  */ FN_RET(0x008675fa); r_esp += 4; return;
}

void f_008678a0(void) /* ___init_monetary */
{
    FN_ENTER(0x008678a0);
    /* 008678a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008678a1: mov ebp, esp */ r_ebp = r_esp;
    /* 008678a3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008678a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008678a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008678a6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008678a8: cmp dword ptr [0xae7ea0], esi */ {  u32 a = R32((u32)(0xae7ea0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008678ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008678af: jne 0x8678da */ if (!fZ) goto L_008678da;
L_008678b1:; BB(0x008678b1);
    /* 008678b1: cmp dword ptr [0xae7ea4], esi */ {  u32 a = R32((u32)(0xae7ea4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008678b7: jne 0x8678da */ if (!fZ) goto L_008678da;
L_008678b9:; BB(0x008678b9);
    /* 008678b9: mov dword ptr [0xaf0828], esi */ W32((u32)(0xaf0828u), r_esi);
    /* 008678bf: mov dword ptr [0xaf082c], esi */ W32((u32)(0xaf082cu), r_esi);
    /* 008678c5: mov dword ptr [0xa244f4], 0xa244c4 */ W32((u32)(0xa244f4u), 0xa244c4u);
    /* 008678cf: mov dword ptr [0xae7e6c], esi */ W32((u32)(0xae7e6cu), r_esi);
    /* 008678d5: jmp 0x867ad8 */ goto L_00867ad8;
L_008678da:; BB(0x008678da);
    /* 008678da: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 008678dc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008678de: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8678e3u); f_008587c7();
    /* 008678e3: mov ebx, eax */ r_ebx = r_eax;
    /* 008678e5: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008678e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008678e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008678e9: je 0x867a58 */ if (fZ) goto L_00867a58;
L_008678ef:; BB(0x008678ef);
    /* 008678ef: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008678f1: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8678f6u); f_00859c55();
    /* 008678f6: mov edi, eax */ r_edi = r_eax;
    /* 008678f8: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008678fa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008678fb: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 008678fe: jne 0x86790c */ if (!fZ) goto L_0086790c;
L_00867900:; BB(0x00867900);
    /* 00867900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867901: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867906u); f_00858882();
L_00867906:; BB(0x00867906);
    /* 00867906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867907: jmp 0x867a58 */ goto L_00867a58;
L_0086790c:; BB(0x0086790c);
    /* 0086790c: mov dword ptr [edi], esi */ W32((u32)(r_edi), r_esi);
    /* 0086790e: cmp dword ptr [0xae7ea0], esi */ {  u32 a = R32((u32)(0xae7ea0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867914: je 0x867a92 */ if (fZ) goto L_00867a92;
L_0086791a:; BB(0x0086791a);
    /* 0086791a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086791c: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x867921u); f_00859c55();
    /* 00867921: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867923: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867924: mov dword ptr [0xaf0828], eax */ W32((u32)(0xaf0828u), r_eax);
    /* 00867929: jne 0x86793a */ if (!fZ) goto L_0086793a;
L_0086792b:; BB(0x0086792b);
    /* 0086792b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086792c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867931u); f_00858882();
    /* 00867931: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00867932: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867937u); f_00858882();
    /* 00867937: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867938: jmp 0x867906 */ goto L_00867906;
L_0086793a:; BB(0x0086793a);
    /* 0086793a: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0086793c: movzx esi, word ptr [0xae7ecc] */ r_esi = (u32)R16((u32)(0xae7eccu));
    /* 00867943: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 00867946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867947: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00867949: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086794a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086794c: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867951u); f_0086a17d();
    /* 00867951: mov edi, eax */ r_edi = r_eax;
    /* 00867953: lea eax, [ebx + 0x10] */ r_eax = (u32)(r_ebx+0x10u);
    /* 00867956: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867957: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00867959: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086795a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086795c: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867961u); f_0086a17d();
    /* 00867961: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867963: lea eax, [ebx + 0x14] */ r_eax = (u32)(r_ebx+0x14u);
    /* 00867966: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867967: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00867969: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086796a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086796c: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867971u); f_0086a17d();
    /* 00867971: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867973: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 00867976: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867977: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00867979: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086797a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086797c: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867981u); f_0086a17d();
    /* 00867981: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867984: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867986: lea eax, [ebx + 0x1c] */ r_eax = (u32)(r_ebx+0x1cu);
    /* 00867989: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086798a: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0086798c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086798d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086798f: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867994u); f_0086a17d();
    /* 00867994: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867996: lea eax, [ebx + 0x20] */ r_eax = (u32)(r_ebx+0x20u);
    /* 00867999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086799a: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0086799c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086799d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086799f: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8679a4u); f_0086a17d();
    /* 008679a4: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008679a6: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 008679a9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008679aa: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 008679ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008679ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008679af: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8679b4u); f_0086a17d();
    /* 008679b4: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008679b6: lea eax, [ebx + 0x28] */ r_eax = (u32)(r_ebx+0x28u);
    /* 008679b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008679ba: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 008679bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008679bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008679bf: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8679c4u); f_0086a17d();
    /* 008679c4: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008679c7: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008679c9: lea eax, [ebx + 0x29] */ r_eax = (u32)(r_ebx+0x29u);
    /* 008679cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008679cd: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 008679cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008679d0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008679d2: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8679d7u); f_0086a17d();
    /* 008679d7: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008679d9: lea eax, [ebx + 0x2a] */ r_eax = (u32)(r_ebx+0x2au);
    /* 008679dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008679dd: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 008679df: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008679e0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008679e2: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8679e7u); f_0086a17d();
    /* 008679e7: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008679e9: lea eax, [ebx + 0x2b] */ r_eax = (u32)(r_ebx+0x2bu);
    /* 008679ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008679ed: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 008679ef: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008679f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008679f2: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x8679f7u); f_0086a17d();
    /* 008679f7: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 008679f9: lea eax, [ebx + 0x2c] */ r_eax = (u32)(r_ebx+0x2cu);
    /* 008679fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008679fd: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 008679ff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867a00: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a02: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867a07u); f_0086a17d();
    /* 00867a07: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867a0a: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867a0c: lea eax, [ebx + 0x2d] */ r_eax = (u32)(r_ebx+0x2du);
    /* 00867a0f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867a10: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a12: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867a13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a15: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867a1au); f_0086a17d();
    /* 00867a1a: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867a1c: lea eax, [ebx + 0x2e] */ r_eax = (u32)(r_ebx+0x2eu);
    /* 00867a1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867a20: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a22: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867a23: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a25: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867a2au); f_0086a17d();
    /* 00867a2a: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00867a2c: lea eax, [ebx + 0x2f] */ r_eax = (u32)(r_ebx+0x2fu);
    /* 00867a2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867a30: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867a33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00867a35: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867a3au); f_0086a17d();
    /* 00867a3a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867a3d: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00867a3f: je 0x867a5d */ if (fZ) goto L_00867a5d;
L_00867a41:; BB(0x00867a41);
    /* 00867a41: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867a42: call 0x8677c7 */ r_esp -= 4; W32(r_esp, 0x867a47u); f_008677c7();
    /* 00867a47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867a48: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867a4du); f_00858882();
    /* 00867a4d: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867a50: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867a55u); f_00858882();
    /* 00867a55: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00867a58:; BB(0x00867a58);
    /* 00867a58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00867a5a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00867a5b: jmp 0x867ada */ goto L_00867ada;
L_00867a5d:; BB(0x00867a5d);
    /* 00867a5d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00867a60: jmp 0x867a74 */ goto L_00867a74;
L_00867a62:; BB(0x00867a62);
    /* 00867a62: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00867a64: cmp cl, 0x30 */ {  u32 a = (u8)r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867a67: jl 0x867a7b */ if ((fS!=fO)) goto L_00867a7b;
L_00867a69:; BB(0x00867a69);
    /* 00867a69: cmp cl, 0x39 */ {  u32 a = (u8)r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00867a6c: jg 0x867a7b */ if ((!fZ&&fS==fO)) goto L_00867a7b;
L_00867a6e:; BB(0x00867a6e);
    /* 00867a6e: sub cl, 0x30 */ {  u32 a = (u8)r_ecx; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00867a71: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_00867a73:; BB(0x00867a73);
    /* 00867a73: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00867a74:; BB(0x00867a74);
    /* 00867a74: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867a77: jne 0x867a62 */ if (!fZ) goto L_00867a62;
L_00867a79:; BB(0x00867a79);
    /* 00867a79: jmp 0x867aa5 */ goto L_00867aa5;
L_00867a7b:; BB(0x00867a7b);
    /* 00867a7b: cmp cl, 0x3b */ {  u32 a = (u8)r_ecx; u32 b = 0x3bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867a7e: jne 0x867a73 */ if (!fZ) goto L_00867a73;
L_00867a80:; BB(0x00867a80);
    /* 00867a80: mov esi, eax */ r_esi = r_eax;
L_00867a82:; BB(0x00867a82);
    /* 00867a82: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 00867a85: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00867a87: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 00867a89: mov esi, edi */ r_esi = r_edi;
    /* 00867a8b: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867a8e: jne 0x867a82 */ if (!fZ) goto L_00867a82;
L_00867a90:; BB(0x00867a90);
    /* 00867a90: jmp 0x867a74 */ goto L_00867a74;
L_00867a92:; BB(0x00867a92);
    /* 00867a92: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00867a94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867a95: mov esi, 0xa244c4 */ r_esi = 0xa244c4u;
    /* 00867a9a: mov edi, ebx */ r_edi = r_ebx;
    /* 00867a9c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00867a9e: and dword ptr [0xaf0828], 0 */ { u32 ad = (u32)(0xaf0828u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00867aa5:; BB(0x00867aa5);
    /* 00867aa5: mov eax, dword ptr [0xa244f4] */ r_eax = R32((u32)(0xa244f4u));
    /* 00867aaa: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00867aac: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00867aae: mov eax, dword ptr [0xa244f4] */ r_eax = R32((u32)(0xa244f4u));
    /* 00867ab3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00867ab6: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00867ab9: mov eax, dword ptr [0xa244f4] */ r_eax = R32((u32)(0xa244f4u));
    /* 00867abe: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 00867ac1: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00867ac4: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00867ac7: mov dword ptr [0xa244f4], ebx */ W32((u32)(0xa244f4u), r_ebx);
    /* 00867acd: mov dword ptr [0xaf082c], eax */ W32((u32)(0xaf082cu), r_eax);
    /* 00867ad2: mov dword ptr [0xae7e6c], ebx */ W32((u32)(0xae7e6cu), r_ebx);
L_00867ad8:; BB(0x00867ad8);
    /* 00867ad8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00867ada:; BB(0x00867ada);
    /* 00867ada: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00867adb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867adc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00867add: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00867ade: ret  */ FN_RET(0x008678a0); r_esp += 4; return;
}

void f_00867adf(void) /* ___init_ctype */
{
    FN_ENTER(0x00867adf);
    /* 00867adf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00867ae0: mov ebp, esp */ r_ebp = r_esp;
    /* 00867ae2: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00867ae5: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00867aea: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00867aeb: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00867aed: cmp dword ptr [0xae7e9c], edi */ {  u32 a = R32((u32)(0xae7e9cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867af3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00867af6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00867af9: je 0x867ca6 */ if (fZ) goto L_00867ca6;
L_00867aff:; BB(0x00867aff);
    /* 00867aff: cmp dword ptr [0xae7eac], edi */ {  u32 a = R32((u32)(0xae7eacu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867b05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867b06: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867b07: jne 0x867b2c */ if (!fZ) goto L_00867b2c;
L_00867b09:; BB(0x00867b09);
    /* 00867b09: movzx eax, word ptr [0xae7ec4] */ r_eax = (u32)R16((u32)(0xae7ec4u));
    /* 00867b10: push 0xae7eac */ { u32 v = 0xae7eacu; r_esp -= 4; W32(r_esp, v); }
    /* 00867b15: push 0x1004 */ { u32 v = 0x1004u; r_esp -= 4; W32(r_esp, v); }
    /* 00867b1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867b1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00867b1c: call 0x86a17d */ r_esp -= 4; W32(r_esp, 0x867b21u); f_0086a17d();
    /* 00867b21: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867b24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867b26: jne 0x867c8e */ if (!fZ) goto L_00867c8e;
L_00867b2c:; BB(0x00867b2c);
    /* 00867b2c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00867b2e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x867b33u); f_00859c55();
    /* 00867b33: mov ebx, eax */ r_ebx = r_eax;
    /* 00867b35: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00867b38: mov dword ptr [esp], 0x300 */ W32((u32)(r_esp), 0x300u);
    /* 00867b3f: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x867b44u); f_00859c55();
    /* 00867b44: mov esi, eax */ r_esi = r_eax;
    /* 00867b46: mov dword ptr [esp], 0x101 */ W32((u32)(r_esp), 0x101u);
    /* 00867b4d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x867b52u); f_00859c55();
    /* 00867b52: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867b54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867b55: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00867b58: je 0x867c91 */ if (fZ) goto L_00867c91;
L_00867b5e:; BB(0x00867b5e);
    /* 00867b5e: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867b60: je 0x867c91 */ if (fZ) goto L_00867c91;
L_00867b66:; BB(0x00867b66);
    /* 00867b66: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867b68: je 0x867c91 */ if (fZ) goto L_00867c91;
L_00867b6e:; BB(0x00867b6e);
    /* 00867b6e: mov dword ptr [ebx], edi */ W32((u32)(r_ebx), r_edi);
    /* 00867b70: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00867b72: mov edi, 0x100 */ r_edi = 0x100u;
L_00867b77:; BB(0x00867b77);
    /* 00867b77: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00867b7a: mov byte ptr [eax + ecx], al */ W8((u32)(r_eax+r_ecx), (u8)r_eax);
    /* 00867b7d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867b7e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867b80: jl 0x867b77 */ if ((fS!=fO)) goto L_00867b77;
L_00867b82:; BB(0x00867b82);
    /* 00867b82: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 00867b85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867b86: push dword ptr [0xae7eac] */ { u32 v = R32((u32)(0xae7eacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00867b8c: call dword ptr [0x8f82b4] */ { u32 t = R32((u32)(0x8f82b4u)); r_esp -= 4; W32(r_esp, 0x867b92u); call_ind(t); }
    /* 00867b92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867b94: je 0x867c91 */ if (fZ) goto L_00867c91;
L_00867b9a:; BB(0x00867b9a);
    /* 00867b9a: cmp dword ptr [ebp - 0x18], 5 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00867b9e: ja 0x867c91 */ if ((!fC&&!fZ)) goto L_00867c91;
L_00867ba4:; BB(0x00867ba4);
    /* 00867ba4: movzx eax, word ptr [ebp - 0x18] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffe8u));
    /* 00867ba8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867bab: mov dword ptr [0xa23f90], eax */ W32((u32)(0xa23f90u), r_eax);
    /* 00867bb0: jle 0x867be1 */ if ((fZ||fS!=fO)) goto L_00867be1;
L_00867bb2:; BB(0x00867bb2);
    /* 00867bb2: cmp byte ptr [ebp - 0x12], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffeeu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867bb6: je 0x867be1 */ if (fZ) goto L_00867be1;
L_00867bb8:; BB(0x00867bb8);
    /* 00867bb8: lea eax, [ebp - 0x11] */ r_eax = (u32)(r_ebp+0xffffffefu);
L_00867bbb:; BB(0x00867bbb);
    /* 00867bbb: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00867bbd: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00867bbf: je 0x867be1 */ if (fZ) goto L_00867be1;
L_00867bc1:; BB(0x00867bc1);
    /* 00867bc1: movzx ecx, byte ptr [eax - 1] */ r_ecx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 00867bc5: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00867bc8: jmp 0x867bd5 */ goto L_00867bd5;
L_00867bca:; BB(0x00867bca);
    /* 00867bca: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00867bcd: mov byte ptr [ecx + edx], 0 */ W8((u32)(r_ecx+r_edx), 0x0u);
    /* 00867bd1: movzx edx, byte ptr [eax] */ r_edx = (u32)R8((u32)(r_eax));
    /* 00867bd4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00867bd5:; BB(0x00867bd5);
    /* 00867bd5: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867bd7: jle 0x867bca */ if ((fZ||fS!=fO)) goto L_00867bca;
L_00867bd9:; BB(0x00867bd9);
    /* 00867bd9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867bda: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867bdb: cmp byte ptr [eax - 1], 0 */ {  u32 a = R8((u32)(r_eax+0xffffffffu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867bdf: jne 0x867bbb */ if (!fZ) goto L_00867bbb;
L_00867be1:; BB(0x00867be1);
    /* 00867be1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00867be3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867be4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867be5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867be6: lea ebx, [esi + 0x100] */ r_ebx = (u32)(r_esi+0x100u);
    /* 00867bec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00867bed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00867bee: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867bf1: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00867bf4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00867bf6: call 0x8686c8 */ r_esp -= 4; W32(r_esp, 0x867bfbu); f_008686c8();
    /* 00867bfb: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867bfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00867c00: je 0x867c91 */ if (fZ) goto L_00867c91;
L_00867c06:; BB(0x00867c06);
    /* 00867c06: lea edi, [esi + 0xfe] */ r_edi = (u32)(r_esi+0xfeu);
    /* 00867c0c: and word ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R16(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffu; W16(ad, r);  }
    /* 00867c10: cmp dword ptr [0xa23f90], 1 */ {  u32 a = R32((u32)(0xa23f90u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867c17: jle 0x867c54 */ if ((fZ||fS!=fO)) goto L_00867c54;
L_00867c19:; BB(0x00867c19);
    /* 00867c19: cmp byte ptr [ebp - 0x12], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffeeu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867c1d: je 0x867c54 */ if (fZ) goto L_00867c54;
L_00867c1f:; BB(0x00867c1f);
    /* 00867c1f: lea eax, [ebp - 0x11] */ r_eax = (u32)(r_ebp+0xffffffefu);
L_00867c22:; BB(0x00867c22);
    /* 00867c22: mov dl, byte ptr [eax] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 00867c24: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00867c26: je 0x867c54 */ if (fZ) goto L_00867c54;
L_00867c28:; BB(0x00867c28);
    /* 00867c28: movzx ecx, byte ptr [eax - 1] */ r_ecx = (u32)R8((u32)(r_eax+0xffffffffu));
    /* 00867c2c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00867c2f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867c31: jg 0x867c4c */ if ((!fZ&&fS==fO)) goto L_00867c4c;
L_00867c33:; BB(0x00867c33);
    /* 00867c33: lea edx, [esi + ecx*2 + 0x100] */ r_edx = (u32)(r_esi+r_ecx*2+0x100u);
L_00867c3a:; BB(0x00867c3a);
    /* 00867c3a: mov word ptr [edx], 0x8000 */ W16((u32)(r_edx), 0x8000u);
    /* 00867c3f: movzx ebx, byte ptr [eax] */ r_ebx = (u32)R8((u32)(r_eax));
    /* 00867c42: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00867c43: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00867c44: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00867c45: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00867c47: jle 0x867c3a */ if ((fZ||fS!=fO)) goto L_00867c3a;
L_00867c49:; BB(0x00867c49);
    /* 00867c49: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_00867c4c:; BB(0x00867c4c);
    /* 00867c4c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867c4d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00867c4e: cmp byte ptr [eax - 1], 0 */ {  u32 a = R8((u32)(r_eax+0xffffffffu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00867c52: jne 0x867c22 */ if (!fZ) goto L_00867c22;
L_00867c54:; BB(0x00867c54);
    /* 00867c54: push 0xfe */ { u32 v = 0xfeu; r_esp -= 4; W32(r_esp, v); }
    /* 00867c59: lea eax, [esi + 0x200] */ r_eax = (u32)(r_esi+0x200u);
    /* 00867c5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00867c60: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867c61: call 0x861d00 */ r_esp -= 4; W32(r_esp, 0x867c66u); f_00861d00();
    /* 00867c66: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00867c69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00867c6c: mov dword ptr [0xa23fa0], ebx */ W32((u32)(0xa23fa0u), r_ebx);
    /* 00867c72: mov dword ptr [0xaf0824], eax */ W32((u32)(0xaf0824u), r_eax);
    /* 00867c77: mov dword ptr [0xaf0820], edi */ W32((u32)(0xaf0820u), r_edi);
    /* 00867c7d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00867c7f:; BB(0x00867c7f);
    /* 00867c7f: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867c82: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867c87u); f_00858882();
    /* 00867c87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867c88: mov eax, esi */ r_eax = r_esi;
    /* 00867c8a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867c8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00867c8c: jmp 0x867cbe */ goto L_00867cbe;
L_00867c8e:; BB(0x00867c8e);
    /* 00867c8e: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
L_00867c91:; BB(0x00867c91);
    /* 00867c91: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00867c94: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867c99u); f_00858882();
    /* 00867c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00867c9a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x867c9fu); f_00858882();
    /* 00867c9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867ca0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00867ca2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00867ca3: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00867ca4: jmp 0x867c7f */ goto L_00867c7f;
L_00867ca6:; BB(0x00867ca6);
    /* 00867ca6: mov dword ptr [0xa23fa0], 0x998520 */ W32((u32)(0xa23fa0u), 0x998520u);
    /* 00867cb0: mov dword ptr [0xaf0824], edi */ W32((u32)(0xaf0824u), r_edi);
    /* 00867cb6: mov dword ptr [0xaf0820], edi */ W32((u32)(0xaf0820u), r_edi);
    /* 00867cbc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00867cbe:; BB(0x00867cbe);
    /* 00867cbe: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00867cc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00867cc2: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x867cc7u); f_0085e419();
    /* 00867cc7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00867cc8: ret  */ FN_RET(0x00867adf); r_esp += 4; return;
}

