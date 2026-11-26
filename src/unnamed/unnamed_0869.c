#include "protos.h"

void f_00869164(void) /* __sopen */
{
    FN_ENTER(0x00869164);
    /* 00869164: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00869166: push 0x99a428 */ { u32 v = 0x99a428u; r_esp -= 4; W32(r_esp, v); }
    /* 0086916b: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x869170u); f_0085e5ac();
    /* 00869170: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869174: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869178: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086917b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086917e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869181: lea eax, [ebp - 0x20] */ r_eax = (u32)(r_ebp+0xffffffe0u);
    /* 00869184: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869185: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 00869188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869189: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086918c: call 0x868e7d */ r_esp -= 4; W32(r_esp, 0x869191u); f_00868e7d();
    /* 00869191: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869194: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00869197: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086919b: call 0x8691a9 */ r_esp -= 4; W32(r_esp, 0x8691a0u); f_008691a9();
    /* 008691a0: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008691a3: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8691a8u); f_0085e5e7();
    /* 008691a8: ret  */ FN_RET(0x00869164); r_esp += 4; return;
}

void f_008691a9(void)
{
    FN_ENTER(0x008691a9);
    /* 008691a9: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008691ad: je 0x8691b8 */ if (fZ) goto L_008691b8;
L_008691af:; BB(0x008691af);
    /* 008691af: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008691b2: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8691b7u); f_00863bb1();
    /* 008691b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008691b8:; BB(0x008691b8);
    /* 008691b8: ret  */ FN_RET(0x008691a9); r_esp += 4; return;
}

void f_0086923c(void) /* _ungetc */
{
    FN_ENTER(0x0086923c);
    /* 0086923c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086923d: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00869241: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869244: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869245: je 0x869288 */ if (fZ) goto L_00869288;
L_00869247:; BB(0x00869247);
    /* 00869247: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0086924b: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0086924e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869250: jne 0x86925a */ if (!fZ) goto L_0086925a;
L_00869252:; BB(0x00869252);
    /* 00869252: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 00869254: jns 0x869288 */ if (!fS) goto L_00869288;
L_00869256:; BB(0x00869256);
    /* 00869256: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869258: jne 0x869288 */ if (!fZ) goto L_00869288;
L_0086925a:; BB(0x0086925a);
    /* 0086925a: cmp dword ptr [esi + 8], 0 */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086925e: jne 0x869267 */ if (!fZ) goto L_00869267;
L_00869260:; BB(0x00869260);
    /* 00869260: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869261: call 0x866e51 */ r_esp -= 4; W32(r_esp, 0x869266u); f_00866e51();
    /* 00869266: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00869267:; BB(0x00869267);
    /* 00869267: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00869269: cmp eax, dword ptr [esi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086926c: jne 0x869277 */ if (!fZ) goto L_00869277;
L_0086926e:; BB(0x0086926e);
    /* 0086926e: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869272: jne 0x869288 */ if (!fZ) goto L_00869288;
L_00869274:; BB(0x00869274);
    /* 00869274: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869275: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_00869277:; BB(0x00869277);
    /* 00869277: dec dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00869279: test byte ptr [esi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_esi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086927d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086927f: je 0x86928e */ if (fZ) goto L_0086928e;
L_00869281:; BB(0x00869281);
    /* 00869281: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869283: je 0x869290 */ if (fZ) goto L_00869290;
L_00869285:; BB(0x00869285);
    /* 00869285: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869286: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_00869288:; BB(0x00869288);
    /* 00869288: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086928b:; BB(0x0086928b);
    /* 0086928b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086928c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086928d: ret  */ FN_RET(0x0086923c); r_esp += 4; return;
L_0086928e:; BB(0x0086928e);
    /* 0086928e: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
L_00869290:; BB(0x00869290);
    /* 00869290: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00869293: inc dword ptr [esi + 4] */ { u32 ad = (u32)(r_esi+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869296: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00869299: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086929c: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0086929f: mov eax, ebx */ r_eax = r_ebx;
    /* 008692a1: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008692a6: jmp 0x86928b */ goto L_0086928b;
}

void f_008692e3(void)
{
    FN_ENTER(0x008692e3);
    /* 008692e3: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008692e6: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x8692ebu); f_0085bc4e();
    /* 008692eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008692ec: ret  */ FN_RET(0x008692e3); r_esp += 4; return;
}

void f_008692ed(void) /* _getenv */
{
    FN_ENTER(0x008692ed);
    /* 008692ed: cmp dword ptr [0xaf1bc8], 0 */ {  u32 a = R32((u32)(0xaf1bc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008692f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008692f5: mov esi, dword ptr [0xae7a30] */ r_esi = R32((u32)(0xae7a30u));
    /* 008692fb: jne 0x869301 */ if (!fZ) goto L_00869301;
L_008692fd:; BB(0x008692fd);
    /* 008692fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008692ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869300: ret  */ FN_RET(0x008692ed); r_esp += 4; return;
L_00869301:; BB(0x00869301);
    /* 00869301: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869303: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869304: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869305: jne 0x869322 */ if (!fZ) goto L_00869322;
L_00869307:; BB(0x00869307);
    /* 00869307: cmp dword ptr [0xae7a38], esi */ {  u32 a = R32((u32)(0xae7a38u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086930d: je 0x869360 */ if (fZ) goto L_00869360;
L_0086930f:; BB(0x0086930f);
    /* 0086930f: call 0x86a433 */ r_esp -= 4; W32(r_esp, 0x869314u); f_0086a433();
    /* 00869314: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869316: jne 0x869360 */ if (!fZ) goto L_00869360;
L_00869318:; BB(0x00869318);
    /* 00869318: mov esi, dword ptr [0xae7a30] */ r_esi = R32((u32)(0xae7a30u));
    /* 0086931e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869320: je 0x869360 */ if (fZ) goto L_00869360;
L_00869322:; BB(0x00869322);
    /* 00869322: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00869326: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869328: je 0x869360 */ if (fZ) goto L_00869360;
L_0086932a:; BB(0x0086932a);
    /* 0086932a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086932b: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x869330u); f_0085d760();
    /* 00869330: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869331: mov edi, eax */ r_edi = r_eax;
    /* 00869333: jmp 0x86935a */ goto L_0086935a;
L_00869335:; BB(0x00869335);
    /* 00869335: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869336: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86933bu); f_0085d760();
    /* 0086933b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086933d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086933e: jbe 0x869357 */ if ((fC||fZ)) goto L_00869357;
L_00869340:; BB(0x00869340);
    /* 00869340: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00869342: cmp byte ptr [eax + edi], 0x3d */ {  u32 a = R8((u32)(r_eax+r_edi)); u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869346: jne 0x869357 */ if (!fZ) goto L_00869357;
L_00869348:; BB(0x00869348);
    /* 00869348: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869349: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086934a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086934b: call 0x86a3e5 */ r_esp -= 4; W32(r_esp, 0x869350u); f_0086a3e5();
    /* 00869350: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869353: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00869355: je 0x869366 */ if (fZ) goto L_00869366;
L_00869357:; BB(0x00869357);
    /* 00869357: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0086935a:; BB(0x0086935a);
    /* 0086935a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086935c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086935e: jne 0x869335 */ if (!fZ) goto L_00869335;
L_00869360:; BB(0x00869360);
    /* 00869360: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00869362:; BB(0x00869362);
    /* 00869362: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00869363: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00869364: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869365: ret  */ FN_RET(0x008692ed); r_esp += 4; return;
L_00869366:; BB(0x00869366);
    /* 00869366: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00869368: lea eax, [eax + edi + 1] */ r_eax = (u32)(r_eax+r_edi+0x1u);
    /* 0086936c: jmp 0x869362 */ goto L_00869362;
}

void f_0086969b(void)
{
    FN_ENTER(0x0086969b);
    /* 0086969b: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086969f: je 0x8696aa */ if (fZ) goto L_008696aa;
L_008696a1:; BB(0x008696a1);
    /* 008696a1: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008696a4: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8696a9u); f_00863bb1();
    /* 008696a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008696aa:; BB(0x008696aa);
    /* 008696aa: ret  */ FN_RET(0x0086969b); r_esp += 4; return;
}

void f_008696ab(void) /* __filwbuf */
{
    FN_ENTER(0x008696ab);
    /* 008696ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008696ac: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008696b0: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008696b3: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008696b5: je 0x869790 */ if (fZ) goto L_00869790;
L_008696bb:; BB(0x008696bb);
    /* 008696bb: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008696bd: jne 0x869790 */ if (!fZ) goto L_00869790;
L_008696c3:; BB(0x008696c3);
    /* 008696c3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008696c5: je 0x8696d2 */ if (fZ) goto L_008696d2;
L_008696c7:; BB(0x008696c7);
    /* 008696c7: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008696ca: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008696cd: jmp 0x869790 */ goto L_00869790;
L_008696d2:; BB(0x008696d2);
    /* 008696d2: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008696d5: test ax, 0x10c */ {  u32 a = (u16)r_eax; u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008696d9: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008696dc: jne 0x8696e7 */ if (!fZ) goto L_008696e7;
L_008696de:; BB(0x008696de);
    /* 008696de: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008696df: call 0x866e51 */ r_esp -= 4; W32(r_esp, 0x8696e4u); f_00866e51();
    /* 008696e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008696e5: jmp 0x8696ec */ goto L_008696ec;
L_008696e7:; BB(0x008696e7);
    /* 008696e7: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008696ea: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_008696ec:; BB(0x008696ec);
    /* 008696ec: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008696ef: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008696f2: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008696f5: call 0x861c50 */ r_esp -= 4; W32(r_esp, 0x8696fau); f_00861c50();
    /* 008696fa: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008696fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008696ff: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00869702: je 0x86977f */ if (fZ) goto L_0086977f;
L_00869704:; BB(0x00869704);
    /* 00869704: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869707: je 0x86977f */ if (fZ) goto L_0086977f;
L_00869709:; BB(0x00869709);
    /* 00869709: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086970c: je 0x86977f */ if (fZ) goto L_0086977f;
L_0086970e:; BB(0x0086970e);
    /* 0086970e: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00869711: test dl, 0x82 */ {  u32 a = (u8)r_edx; u32 b = 0x82u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869714: jne 0x869750 */ if (!fZ) goto L_00869750;
L_00869716:; BB(0x00869716);
    /* 00869716: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 00869719: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086971c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086971d: je 0x869736 */ if (fZ) goto L_00869736;
L_0086971f:; BB(0x0086971f);
    /* 0086971f: mov edi, ecx */ r_edi = r_ecx;
    /* 00869721: sar edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00869724: mov edi, dword ptr [edi*4 + 0xaf0a80] */ r_edi = R32((u32)(r_edi*4+0xaf0a80u));
    /* 0086972b: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0086972e: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 00869731: lea edi, [edi + ecx*4] */ r_edi = (u32)(r_edi+r_ecx*4);
    /* 00869734: jmp 0x86973b */ goto L_0086973b;
L_00869736:; BB(0x00869736);
    /* 00869736: mov edi, 0xa24120 */ r_edi = 0xa24120u;
L_0086973b:; BB(0x0086973b);
    /* 0086973b: mov cl, byte ptr [edi + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x4u))) & 0xffu);
    /* 0086973e: and cl, 0x82 */ {  u32 a = (u8)r_ecx; u32 b = 0x82u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00869741: cmp cl, 0x82 */ {  u32 a = (u8)r_ecx; u32 b = 0x82u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869744: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00869745: jne 0x869750 */ if (!fZ) goto L_00869750;
L_00869747:; BB(0x00869747);
    /* 00869747: or edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0086974d: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
L_00869750:; BB(0x00869750);
    /* 00869750: cmp dword ptr [esi + 0x18], 0x200 */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869757: jne 0x86976d */ if (!fZ) goto L_0086976d;
L_00869759:; BB(0x00869759);
    /* 00869759: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 0086975c: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086975f: je 0x86976d */ if (fZ) goto L_0086976d;
L_00869761:; BB(0x00869761);
    /* 00869761: test ch, 4 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869764: jne 0x86976d */ if (!fZ) goto L_0086976d;
L_00869766:; BB(0x00869766);
    /* 00869766: mov dword ptr [esi + 0x18], 0x1000 */ W32((u32)(r_esi+0x18u), 0x1000u);
L_0086976d:; BB(0x0086976d);
    /* 0086976d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0086976f: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869772: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00869775: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 00869778: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086977b: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0086977d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086977e: ret  */ FN_RET(0x008696ab); r_esp += 4; return;
L_0086977f:; BB(0x0086977f);
    /* 0086977f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00869781: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00869783: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00869786: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869789: or dword ptr [esi + 0xc], eax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086978c: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00869790:; BB(0x00869790);
    /* 00869790: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00869795: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869796: ret  */ FN_RET(0x008696ab); r_esp += 4; return;
}

void f_008697ca(void) /* __ismbblead */
{
    FN_ENTER(0x008697ca);
    /* 008697ca: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008697cc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008697ce: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008697d2: call 0x869797 */ r_esp -= 4; W32(r_esp, 0x8697d7u); f_00869797();
    /* 008697d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008697da: ret  */ FN_RET(0x008697ca); r_esp += 4; return;
}

void f_008697db(void) /* __flswbuf */
{
    FN_ENTER(0x008697db);
    /* 008697db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008697dc: mov ebp, esp */ r_ebp = r_esp;
    /* 008697de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008697df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008697e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008697e1: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008697e4: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 008697e7: test al, 0x82 */ {  u32 a = (u8)r_eax; u32 b = 0x82u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008697e9: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008697ec: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008697ef: je 0x8698f4 */ if (fZ) goto L_008698f4;
L_008697f5:; BB(0x008697f5);
    /* 008697f5: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008697f7: jne 0x8698f4 */ if (!fZ) goto L_008698f4;
L_008697fd:; BB(0x008697fd);
    /* 008697fd: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008697ff: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869801: je 0x869819 */ if (fZ) goto L_00869819;
L_00869803:; BB(0x00869803);
    /* 00869803: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00869805: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 00869808: je 0x8698f4 */ if (fZ) goto L_008698f4;
L_0086980e:; BB(0x0086980e);
    /* 0086980e: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00869811: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00869814: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00869816: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_00869819:; BB(0x00869819);
    /* 00869819: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0086981c: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086981f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00869822: test ax, 0x10c */ {  u32 a = (u16)r_eax; u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 00869826: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00869829: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0086982c: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 0086982f: jne 0x869856 */ if (!fZ) goto L_00869856;
L_00869831:; BB(0x00869831);
    /* 00869831: cmp esi, 0xa23a00 */ {  u32 a = r_esi; u32 b = 0xa23a00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869837: je 0x869841 */ if (fZ) goto L_00869841;
L_00869839:; BB(0x00869839);
    /* 00869839: cmp esi, 0xa23a20 */ {  u32 a = r_esi; u32 b = 0xa23a20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086983f: jne 0x86984c */ if (!fZ) goto L_0086984c;
L_00869841:; BB(0x00869841);
    /* 00869841: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00869842: call 0x866e95 */ r_esp -= 4; W32(r_esp, 0x869847u); f_00866e95();
    /* 00869847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086984a: jne 0x869853 */ if (!fZ) goto L_00869853;
L_0086984c:; BB(0x0086984c);
    /* 0086984c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086984d: call 0x866e51 */ r_esp -= 4; W32(r_esp, 0x869852u); f_00866e51();
    /* 00869852: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00869853:; BB(0x00869853);
    /* 00869853: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
L_00869856:; BB(0x00869856);
    /* 00869856: test word ptr [esi + 0xc], 0x108 */ {  u32 a = R16((u32)(r_esi+0xcu)); u32 b = 0x108u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0086985c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086985d: je 0x8698c4 */ if (fZ) goto L_008698c4;
L_0086985f:; BB(0x0086985f);
    /* 0086985f: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00869862: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00869864: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00869867: mov dword ptr [esi], edx */ W32((u32)(r_esi), r_edx);
    /* 00869869: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0086986c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086986e: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086986f: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00869870: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00869872: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00869875: jle 0x869884 */ if ((fZ||fS!=fO)) goto L_00869884;
L_00869877:; BB(0x00869877);
    /* 00869877: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086987a: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x86987fu); f_00862354();
    /* 0086987f: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00869882: jmp 0x8698b6 */ goto L_008698b6;
L_00869884:; BB(0x00869884);
    /* 00869884: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869887: je 0x8698a2 */ if (fZ) goto L_008698a2;
L_00869889:; BB(0x00869889);
    /* 00869889: mov edx, ecx */ r_edx = r_ecx;
    /* 0086988b: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0086988e: mov edx, dword ptr [edx*4 + 0xaf0a80] */ r_edx = R32((u32)(r_edx*4+0xaf0a80u));
    /* 00869895: mov eax, ecx */ r_eax = r_ecx;
    /* 00869897: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086989a: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0086989d: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 008698a0: jmp 0x8698a7 */ goto L_008698a7;
L_008698a2:; BB(0x008698a2);
    /* 008698a2: mov eax, 0xa24120 */ r_eax = 0xa24120u;
L_008698a7:; BB(0x008698a7);
    /* 008698a7: test byte ptr [eax + 4], 0x20 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008698ab: je 0x8698b9 */ if (fZ) goto L_008698b9;
L_008698ad:; BB(0x008698ad);
    /* 008698ad: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008698af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008698b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008698b1: call 0x8648cf */ r_esp -= 4; W32(r_esp, 0x8698b6u); f_008648cf();
L_008698b6:; BB(0x008698b6);
    /* 008698b6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008698b9:; BB(0x008698b9);
    /* 008698b9: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008698bc: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008698bf: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 008698c2: jmp 0x8698df */ goto L_008698df;
L_008698c4:; BB(0x008698c4);
    /* 008698c4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008698c7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008698c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008698ca: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008698cb: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 008698ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008698cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008698d0: mov word ptr [ebp + 0xc], bx */ W16((u32)(r_ebp+0xcu), (u16)r_ebx);
    /* 008698d4: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x8698d9u); f_00862354();
    /* 008698d9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008698dc: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_008698df:; BB(0x008698df);
    /* 008698df: cmp dword ptr [ebp + 0xc], edi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008698e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008698e3: je 0x8698eb */ if (fZ) goto L_008698eb;
L_008698e5:; BB(0x008698e5);
    /* 008698e5: or dword ptr [esi + 0xc], 0x20 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008698e9: jmp 0x8698fa */ goto L_008698fa;
L_008698eb:; BB(0x008698eb);
    /* 008698eb: mov eax, ebx */ r_eax = r_ebx;
    /* 008698ed: and eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008698f2: jmp 0x8698ff */ goto L_008698ff;
L_008698f4:; BB(0x008698f4);
    /* 008698f4: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008698f7: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_008698fa:; BB(0x008698fa);
    /* 008698fa: mov eax, 0xffff */ r_eax = 0xffffu;
L_008698ff:; BB(0x008698ff);
    /* 008698ff: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869900: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00869901: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00869902: ret  */ FN_RET(0x008697db); r_esp += 4; return;
}

void f_00869903(void) /* ___addl */
{
    FN_ENTER(0x00869903);
    /* 00869903: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00869907: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869908: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0086990c: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 0086990f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00869911: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00869913: jb 0x869919 */ if (fC) goto L_00869919;
L_00869915:; BB(0x00869915);
    /* 00869915: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00869917: jae 0x86991c */ if (!fC) goto L_0086991c;
L_00869919:; BB(0x00869919);
    /* 00869919: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086991b: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_0086991c:; BB(0x0086991c);
    /* 0086991c: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00869920: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00869922: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869923: ret  */ FN_RET(0x00869903); r_esp += 4; return;
}

void f_008699b6(void)
{
    FN_ENTER(0x008699b6);
    /* 008699b6: or byte ptr [ebx + 0x57560448], cl */ { u32 ad = (u32)(r_ebx+0x57560448u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008699bc: mov edi, ecx */ r_edi = r_ecx;
    /* 008699be: mov esi, edx */ r_esi = r_edx;
    /* 008699c0: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008699c2: shl esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008699c5: or ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008699c7: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008699ca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008699cc: shl edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008699cf: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008699d1: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 008699d3: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 008699d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008699d6: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 008699d9: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 008699db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008699dc: ret  */ FN_RET(0x008699b6); r_esp += 4; return;
}

void f_008699dd(void) /* ___mtold12 */
{
    FN_ENTER(0x008699dd);
    /* 008699dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008699de: mov ebp, esp */ r_ebp = r_esp;
    /* 008699e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008699e3: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008699e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008699e9: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008699ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008699ee: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008699f1: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008699f4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008699f6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008699f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008699f8: mov dword ptr [ebp - 0x14], 0x404e */ W32((u32)(r_ebp+0xffffffecu), 0x404eu);
    /* 008699ff: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00869a01: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00869a04: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 00869a07: jbe 0x869a58 */ if ((fC||fZ)) goto L_00869a58;
L_00869a09:; BB(0x00869a09);
    /* 00869a09: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_00869a0c:; BB(0x00869a0c);
    /* 00869a0c: mov esi, ebx */ r_esi = r_ebx;
    /* 00869a0e: lea edi, [ebp - 0x10] */ r_edi = (u32)(r_ebp+0xfffffff0u);
    /* 00869a11: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00869a12: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00869a13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869a14: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00869a15: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x869a1au); f_00869982();
    /* 00869a1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869a1b: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x869a20u); f_00869982();
    /* 00869a20: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00869a23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869a24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869a25: call 0x869924 */ r_esp -= 4; W32(r_esp, 0x869a2au); f_00869924();
    /* 00869a2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869a2b: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x869a30u); f_00869982();
    /* 00869a30: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00869a33: movsx eax, byte ptr [eax] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 00869a36: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869a3a: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869a3e: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00869a41: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00869a44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869a45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869a46: call 0x869924 */ r_esp -= 4; W32(r_esp, 0x869a4bu); f_00869924();
    /* 00869a4b: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869a4e: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869a51: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00869a54: jne 0x869a0c */ if (!fZ) goto L_00869a0c;
L_00869a56:; BB(0x00869a56);
    /* 00869a56: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00869a58:; BB(0x00869a58);
    /* 00869a58: cmp dword ptr [ebx + 8], edx */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869a5b: jne 0x869a8c */ if (!fZ) goto L_00869a8c;
L_00869a5d:; BB(0x00869a5d);
    /* 00869a5d: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
L_00869a60:; BB(0x00869a60);
    /* 00869a60: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00869a63: add dword ptr [ebp - 0x14], 0xfff0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0xfff0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869a6a: mov eax, ecx */ r_eax = r_ecx;
    /* 00869a6c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00869a6f: mov edi, eax */ r_edi = r_eax;
    /* 00869a71: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00869a73: mov esi, eax */ r_esi = r_eax;
    /* 00869a75: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00869a78: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00869a7b: or esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00869a7d: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00869a80: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869a82: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00869a85: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00869a87: je 0x869a60 */ if (fZ) goto L_00869a60;
L_00869a89:; BB(0x00869a89);
    /* 00869a89: mov dword ptr [ebx + 8], edi */ W32((u32)(r_ebx+0x8u), r_edi);
L_00869a8c:; BB(0x00869a8c);
    /* 00869a8c: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 00869a91: jmp 0x869aa1 */ goto L_00869aa1;
L_00869a93:; BB(0x00869a93);
    /* 00869a93: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869a94: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x869a99u); f_00869982();
    /* 00869a99: add dword ptr [ebp - 0x14], 0xffff */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869aa0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00869aa1:; BB(0x00869aa1);
    /* 00869aa1: test dword ptr [ebx + 8], esi */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869aa4: je 0x869a93 */ if (fZ) goto L_00869a93;
L_00869aa6:; BB(0x00869aa6);
    /* 00869aa6: mov ax, word ptr [ebp - 0x14] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffecu))) & 0xffffu);
    /* 00869aaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00869aad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00869aae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869aaf: mov word ptr [ebx + 0xa], ax */ W16((u32)(r_ebx+0xau), (u16)r_eax);
    /* 00869ab3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00869ab4: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x869ab9u); f_0085e419();
    /* 00869ab9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00869aba: ret  */ FN_RET(0x008699dd); r_esp += 4; return;
}

void f_00869abb(void) /* ___strgtold12 */
{
    FN_ENTER(0x00869abb);
    /* 00869abb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00869abc: mov ebp, esp */ r_ebp = r_esp;
    /* 00869abe: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00869ac1: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00869ac6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00869ac7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00869ac8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00869acb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00869acd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00869ace: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 00869ad1: lea esi, [ebp - 0x30] */ r_esi = (u32)(r_ebp+0xffffffd0u);
    /* 00869ad4: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00869ad7: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 00869ada: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 00869ae1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00869ae4: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00869ae7: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00869aea: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 00869aed: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 00869af0: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00869af3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00869af6: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
L_00869af9:; BB(0x00869af9);
    /* 00869af9: mov cl, byte ptr [edi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869afb: cmp cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869afe: je 0x869b0f */ if (fZ) goto L_00869b0f;
L_00869b00:; BB(0x00869b00);
    /* 00869b00: cmp cl, 9 */ {  u32 a = (u8)r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b03: je 0x869b0f */ if (fZ) goto L_00869b0f;
L_00869b05:; BB(0x00869b05);
    /* 00869b05: cmp cl, 0xa */ {  u32 a = (u8)r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b08: je 0x869b0f */ if (fZ) goto L_00869b0f;
L_00869b0a:; BB(0x00869b0a);
    /* 00869b0a: cmp cl, 0xd */ {  u32 a = (u8)r_ecx; u32 b = 0xdu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b0d: jne 0x869b12 */ if (!fZ) goto L_00869b12;
L_00869b0f:; BB(0x00869b0f);
    /* 00869b0f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00869b10: jmp 0x869af9 */ goto L_00869af9;
L_00869b12:; BB(0x00869b12);
    /* 00869b12: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869b14: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00869b15: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00869b18: ja 0x869d91 */ if ((!fC&&!fZ)) goto L_00869d91;
L_00869b1e:; BB(0x00869b1e);
    /* 00869b1e: jmp dword ptr [eax*4 + 0x869ebf] */ { u32 t = R32((u32)(r_eax*4+0x869ebfu)); switch (t) { case 0x869b25u: goto L_00869b25; case 0x869b78u: goto L_00869b78; case 0x869bd9u: goto L_00869bd9; case 0x869c04u: goto L_00869c04; case 0x869c3fu: goto L_00869c3f; case 0x869c97u: goto L_00869c97; case 0x869cb7u: goto L_00869cb7; case 0x869d44u: goto L_00869d44; case 0x869cefu: goto L_00869cef; case 0x869da9u: goto L_00869da9; case 0x869d91u: goto L_00869d91; case 0x869d61u: goto L_00869d61; default: UNSUP(0x00869b1e, "jump table entry is not a known target"); } }
L_00869b25:; BB(0x00869b25);
    /* 00869b25: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869b28: jl 0x869b36 */ if ((fS!=fO)) goto L_00869b36;
L_00869b2a:; BB(0x00869b2a);
    /* 00869b2a: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869b2d: jg 0x869b36 */ if ((!fZ&&fS==fO)) goto L_00869b36;
L_00869b2f:; BB(0x00869b2f);
    /* 00869b2f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00869b31: jmp 0x869d50 */ goto L_00869d50;
L_00869b36:; BB(0x00869b36);
    /* 00869b36: cmp bl, byte ptr [0xa23f94] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0xa23f94u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b3c: jne 0x869b45 */ if (!fZ) goto L_00869b45;
L_00869b3e:; BB(0x00869b3e);
    /* 00869b3e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00869b40: jmp 0x869d87 */ goto L_00869d87;
L_00869b45:; BB(0x00869b45);
    /* 00869b45: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00869b48: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869b4b: je 0x869b6f */ if (fZ) goto L_00869b6f;
L_00869b4d:; BB(0x00869b4d);
    /* 00869b4d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00869b4e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869b4f: je 0x869b63 */ if (fZ) goto L_00869b63;
L_00869b51:; BB(0x00869b51);
    /* 00869b51: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869b54: je 0x869bfc */ if (fZ) goto L_00869bfc;
L_00869b5a:; BB(0x00869b5a);
    /* 00869b5a: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00869b5d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00869b5e: jmp 0x869d0e */ goto L_00869d0e;
L_00869b63:; BB(0x00869b63);
    /* 00869b63: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00869b65: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869b66: mov dword ptr [ebp - 0x50], 0x8000 */ W32((u32)(r_ebp+0xffffffb0u), 0x8000u);
    /* 00869b6d: jmp 0x869b12 */ goto L_00869b12;
L_00869b6f:; BB(0x00869b6f);
    /* 00869b6f: and dword ptr [ebp - 0x50], 0 */ { u32 ad = (u32)(r_ebp+0xffffffb0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00869b73: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00869b75: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869b76: jmp 0x869b12 */ goto L_00869b12;
L_00869b78:; BB(0x00869b78);
    /* 00869b78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00869b7a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869b7b: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869b7e: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00869b81: jl 0x869b88 */ if ((fS!=fO)) goto L_00869b88;
L_00869b83:; BB(0x00869b83);
    /* 00869b83: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869b86: jle 0x869b2f */ if ((fZ||fS!=fO)) goto L_00869b2f;
L_00869b88:; BB(0x00869b88);
    /* 00869b88: cmp bl, byte ptr [0xa23f94] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0xa23f94u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b8e: jne 0x869b97 */ if (!fZ) goto L_00869b97;
L_00869b90:; BB(0x00869b90);
    /* 00869b90: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00869b92: jmp 0x869d87 */ goto L_00869d87;
L_00869b97:; BB(0x00869b97);
    /* 00869b97: cmp bl, 0x2b */ {  u32 a = (u8)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b9a: je 0x869bd1 */ if (fZ) goto L_00869bd1;
L_00869b9c:; BB(0x00869b9c);
    /* 00869b9c: cmp bl, 0x2d */ {  u32 a = (u8)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869b9f: je 0x869bd1 */ if (fZ) goto L_00869bd1;
L_00869ba1:; BB(0x00869ba1);
    /* 00869ba1: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869ba4: je 0x869b12 */ if (fZ) goto L_00869b12;
L_00869baa:; BB(0x00869baa);
    /* 00869baa: cmp bl, 0x43 */ {  u32 a = (u8)r_ebx; u32 b = 0x43u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869bad: jle 0x869d0a */ if ((fZ||fS!=fO)) goto L_00869d0a;
L_00869bb3:; BB(0x00869bb3);
    /* 00869bb3: cmp bl, 0x45 */ {  u32 a = (u8)r_ebx; u32 b = 0x45u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869bb6: jle 0x869bca */ if ((fZ||fS!=fO)) goto L_00869bca;
L_00869bb8:; BB(0x00869bb8);
    /* 00869bb8: cmp bl, 0x63 */ {  u32 a = (u8)r_ebx; u32 b = 0x63u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869bbb: jle 0x869d0a */ if ((fZ||fS!=fO)) goto L_00869d0a;
L_00869bc1:; BB(0x00869bc1);
    /* 00869bc1: cmp bl, 0x65 */ {  u32 a = (u8)r_ebx; u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869bc4: jg 0x869d0a */ if ((!fZ&&fS==fO)) goto L_00869d0a;
L_00869bca:; BB(0x00869bca);
    /* 00869bca: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00869bcc: jmp 0x869d87 */ goto L_00869d87;
L_00869bd1:; BB(0x00869bd1);
    /* 00869bd1: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00869bd2: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00869bd4: jmp 0x869d87 */ goto L_00869d87;
L_00869bd9:; BB(0x00869bd9);
    /* 00869bd9: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869bdc: jl 0x869be7 */ if ((fS!=fO)) goto L_00869be7;
L_00869bde:; BB(0x00869bde);
    /* 00869bde: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869be1: jle 0x869b2f */ if ((fZ||fS!=fO)) goto L_00869b2f;
L_00869be7:; BB(0x00869be7);
    /* 00869be7: cmp bl, byte ptr [0xa23f94] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0xa23f94u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869bed: je 0x869b3e */ if (fZ) goto L_00869b3e;
L_00869bf3:; BB(0x00869bf3);
    /* 00869bf3: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869bf6: jne 0x869d5c */ if (!fZ) goto L_00869d5c;
L_00869bfc:; BB(0x00869bfc);
    /* 00869bfc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00869bfe: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869bff: jmp 0x869b12 */ goto L_00869b12;
L_00869c04:; BB(0x00869c04);
    /* 00869c04: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
    /* 00869c0b: jmp 0x869c24 */ goto L_00869c24;
L_00869c0d:; BB(0x00869c0d);
    /* 00869c0d: cmp dword ptr [ebp - 0x38], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00869c11: jae 0x869c1e */ if (!fC) goto L_00869c1e;
L_00869c13:; BB(0x00869c13);
    /* 00869c13: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869c16: sub bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00869c19: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00869c1b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00869c1c: jmp 0x869c21 */ goto L_00869c21;
L_00869c1e:; BB(0x00869c1e);
    /* 00869c1e: inc dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00869c21:; BB(0x00869c21);
    /* 00869c21: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869c23: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00869c24:; BB(0x00869c24);
    /* 00869c24: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00869c27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869c28: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x869c2du); f_00858286();
    /* 00869c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869c2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869c30: jne 0x869c0d */ if (!fZ) goto L_00869c0d;
L_00869c32:; BB(0x00869c32);
    /* 00869c32: cmp bl, byte ptr [0xa23f94] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(0xa23f94u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869c38: jne 0x869c80 */ if (!fZ) goto L_00869c80;
L_00869c3a:; BB(0x00869c3a);
    /* 00869c3a: jmp 0x869b90 */ goto L_00869b90;
L_00869c3f:; BB(0x00869c3f);
    /* 00869c3f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00869c41: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869c42: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869c46: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00869c49: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00869c4c: jne 0x869c72 */ if (!fZ) goto L_00869c72;
L_00869c4e:; BB(0x00869c4e);
    /* 00869c4e: jmp 0x869c56 */ goto L_00869c56;
L_00869c50:; BB(0x00869c50);
    /* 00869c50: dec dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00869c53: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869c55: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00869c56:; BB(0x00869c56);
    /* 00869c56: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869c59: je 0x869c50 */ if (fZ) goto L_00869c50;
L_00869c5b:; BB(0x00869c5b);
    /* 00869c5b: jmp 0x869c72 */ goto L_00869c72;
L_00869c5d:; BB(0x00869c5d);
    /* 00869c5d: cmp dword ptr [ebp - 0x38], 0x19 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00869c61: jae 0x869c6f */ if (!fC) goto L_00869c6f;
L_00869c63:; BB(0x00869c63);
    /* 00869c63: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869c66: sub bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00869c69: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 00869c6b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00869c6c: dec dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00869c6f:; BB(0x00869c6f);
    /* 00869c6f: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869c71: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00869c72:; BB(0x00869c72);
    /* 00869c72: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00869c75: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869c76: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x869c7bu); f_00858286();
    /* 00869c7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869c7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869c7e: jne 0x869c5d */ if (!fZ) goto L_00869c5d;
L_00869c80:; BB(0x00869c80);
    /* 00869c80: cmp bl, 0x2b */ {  u32 a = (u8)r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869c83: je 0x869bd1 */ if (fZ) goto L_00869bd1;
L_00869c89:; BB(0x00869c89);
    /* 00869c89: cmp bl, 0x2d */ {  u32 a = (u8)r_ebx; u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869c8c: je 0x869bd1 */ if (fZ) goto L_00869bd1;
L_00869c92:; BB(0x00869c92);
    /* 00869c92: jmp 0x869baa */ goto L_00869baa;
L_00869c97:; BB(0x00869c97);
    /* 00869c97: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00869c9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869c9b: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00869ca2: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x869ca7u); f_00858286();
    /* 00869ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869ca9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869caa: je 0x869d5c */ if (fZ) goto L_00869d5c;
L_00869cb0:; BB(0x00869cb0);
    /* 00869cb0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00869cb2: jmp 0x869d50 */ goto L_00869d50;
L_00869cb7:; BB(0x00869cb7);
    /* 00869cb7: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869cba: lea ecx, [edi - 2] */ r_ecx = (u32)(r_edi+0xfffffffeu);
    /* 00869cbd: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00869cc0: jl 0x869ccb */ if ((fS!=fO)) goto L_00869ccb;
L_00869cc2:; BB(0x00869cc2);
    /* 00869cc2: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869cc5: jle 0x869d4e */ if ((fZ||fS!=fO)) goto L_00869d4e;
L_00869ccb:; BB(0x00869ccb);
    /* 00869ccb: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00869cce: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869cd1: je 0x869d85 */ if (fZ) goto L_00869d85;
L_00869cd7:; BB(0x00869cd7);
    /* 00869cd7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00869cd8: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869cd9: je 0x869d79 */ if (fZ) goto L_00869d79;
L_00869cdf:; BB(0x00869cdf);
    /* 00869cdf: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869ce2: jne 0x869d9f */ if (!fZ) goto L_00869d9f;
L_00869ce8:; BB(0x00869ce8);
    /* 00869ce8: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00869cea: jmp 0x869d87 */ goto L_00869d87;
L_00869cef:; BB(0x00869cef);
    /* 00869cef: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00869cf6: jmp 0x869cfb */ goto L_00869cfb;
L_00869cf8:; BB(0x00869cf8);
    /* 00869cf8: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869cfa: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00869cfb:; BB(0x00869cfb);
    /* 00869cfb: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869cfe: je 0x869cf8 */ if (fZ) goto L_00869cf8;
L_00869d00:; BB(0x00869d00);
    /* 00869d00: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869d03: jl 0x869d0a */ if ((fS!=fO)) goto L_00869d0a;
L_00869d05:; BB(0x00869d05);
    /* 00869d05: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869d08: jle 0x869d4e */ if ((fZ||fS!=fO)) goto L_00869d4e;
L_00869d0a:; BB(0x00869d0a);
    /* 00869d0a: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_00869d0b:; BB(0x00869d0b);
    /* 00869d0b: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
L_00869d0e:; BB(0x00869d0e);
    /* 00869d0e: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869d12: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00869d15: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
    /* 00869d17: je 0x869e6d */ if (fZ) goto L_00869e6d;
L_00869d1d:; BB(0x00869d1d);
    /* 00869d1d: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00869d1f: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869d20: cmp dword ptr [ebp - 0x38], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00869d23: jbe 0x869d35 */ if ((fC||fZ)) goto L_00869d35;
L_00869d25:; BB(0x00869d25);
    /* 00869d25: cmp byte ptr [ebp - 0x19], 5 */ {  u32 a = R8((u32)(r_ebp+0xffffffe7u)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869d29: jl 0x869d2e */ if ((fS!=fO)) goto L_00869d2e;
L_00869d2b:; BB(0x00869d2b);
    /* 00869d2b: inc byte ptr [ebp - 0x19] */ { u32 ad = (u32)(r_ebp+0xffffffe7u); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00869d2e:; BB(0x00869d2e);
    /* 00869d2e: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00869d2f: inc dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00869d32: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_00869d35:; BB(0x00869d35);
    /* 00869d35: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00869d39: jbe 0x869e94 */ if ((fC||fZ)) goto L_00869e94;
L_00869d3f:; BB(0x00869d3f);
    /* 00869d3f: jmp 0x869e09 */ goto L_00869e09;
L_00869d44:; BB(0x00869d44);
    /* 00869d44: cmp bl, 0x31 */ {  u32 a = (u8)r_ebx; u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869d47: jl 0x869d57 */ if ((fS!=fO)) goto L_00869d57;
L_00869d49:; BB(0x00869d49);
    /* 00869d49: cmp bl, 0x39 */ {  u32 a = (u8)r_ebx; u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00869d4c: jg 0x869d57 */ if ((!fZ&&fS==fO)) goto L_00869d57;
L_00869d4e:; BB(0x00869d4e);
    /* 00869d4e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
L_00869d50:; BB(0x00869d50);
    /* 00869d50: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869d51: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00869d52: jmp 0x869b12 */ goto L_00869b12;
L_00869d57:; BB(0x00869d57);
    /* 00869d57: cmp bl, 0x30 */ {  u32 a = (u8)r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869d5a: je 0x869ce8 */ if (fZ) goto L_00869ce8;
L_00869d5c:; BB(0x00869d5c);
    /* 00869d5c: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00869d5f: jmp 0x869d0b */ goto L_00869d0b;
L_00869d61:; BB(0x00869d61);
    /* 00869d61: cmp dword ptr [ebp + 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869d65: je 0x869d8d */ if (fZ) goto L_00869d8d;
L_00869d67:; BB(0x00869d67);
    /* 00869d67: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00869d6a: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869d6d: lea ecx, [edi - 1] */ r_ecx = (u32)(r_edi+0xffffffffu);
    /* 00869d70: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00869d73: je 0x869d85 */ if (fZ) goto L_00869d85;
L_00869d75:; BB(0x00869d75);
    /* 00869d75: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00869d76: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00869d77: jne 0x869d9f */ if (!fZ) goto L_00869d9f;
L_00869d79:; BB(0x00869d79);
    /* 00869d79: or dword ptr [ebp - 0x4c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffb4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00869d7d: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00869d7f: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869d80: jmp 0x869b12 */ goto L_00869b12;
L_00869d85:; BB(0x00869d85);
    /* 00869d85: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
L_00869d87:; BB(0x00869d87);
    /* 00869d87: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869d88: jmp 0x869b12 */ goto L_00869b12;
L_00869d8d:; BB(0x00869d8d);
    /* 00869d8d: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00869d8f: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00869d90: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_00869d91:; BB(0x00869d91);
    /* 00869d91: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869d94: jne 0x869b12 */ if (!fZ) goto L_00869b12;
L_00869d9a:; BB(0x00869d9a);
    /* 00869d9a: jmp 0x869d0b */ goto L_00869d0b;
L_00869d9f:; BB(0x00869d9f);
    /* 00869d9f: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00869da2: mov edi, ecx */ r_edi = r_ecx;
    /* 00869da4: jmp 0x869d0e */ goto L_00869d0e;
L_00869da9:; BB(0x00869da9);
    /* 00869da9: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 00869dac: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 00869db3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00869db5: jmp 0x869dcc */ goto L_00869dcc;
L_00869db7:; BB(0x00869db7);
    /* 00869db7: movsx ecx, bl */ r_ecx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00869dba: lea eax, [esi + esi*4] */ r_eax = (u32)(r_esi+r_esi*4);
    /* 00869dbd: lea esi, [ecx + eax*2 - 0x30] */ r_esi = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 00869dc1: cmp esi, 0x1450 */ {  u32 a = r_esi; u32 b = 0x1450u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00869dc7: jg 0x869ddc */ if ((!fZ&&fS==fO)) goto L_00869ddc;
L_00869dc9:; BB(0x00869dc9);
    /* 00869dc9: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869dcb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00869dcc:; BB(0x00869dcc);
    /* 00869dcc: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00869dcf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869dd0: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x869dd5u); f_00858286();
    /* 00869dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869dd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869dd8: jne 0x869db7 */ if (!fZ) goto L_00869db7;
L_00869dda:; BB(0x00869dda);
    /* 00869dda: jmp 0x869de1 */ goto L_00869de1;
L_00869ddc:; BB(0x00869ddc);
    /* 00869ddc: mov esi, 0x1451 */ r_esi = 0x1451u;
L_00869de1:; BB(0x00869de1);
    /* 00869de1: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00869de4: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00869de7: jmp 0x869def */ goto L_00869def;
L_00869de9:; BB(0x00869de9);
    /* 00869de9: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00869deb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00869dec: movzx eax, al */ r_eax = (u32)(u8)r_eax;
L_00869def:; BB(0x00869def);
    /* 00869def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869df0: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x869df5u); f_00858286();
    /* 00869df5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869df7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00869df8: jne 0x869de9 */ if (!fZ) goto L_00869de9;
L_00869dfa:; BB(0x00869dfa);
    /* 00869dfa: mov esi, dword ptr [ebp - 0x34] */ r_esi = R32((u32)(r_ebp+0xffffffccu));
    /* 00869dfd: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00869dfe: jmp 0x869d0e */ goto L_00869d0e;
L_00869e03:; BB(0x00869e03);
    /* 00869e03: dec dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00869e06: inc dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00869e09:; BB(0x00869e09);
    /* 00869e09: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00869e0a: cmp byte ptr [esi], 0 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00869e0d: je 0x869e03 */ if (fZ) goto L_00869e03;
L_00869e0f:; BB(0x00869e0f);
    /* 00869e0f: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00869e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869e13: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869e16: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 00869e19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869e1a: call 0x8699dd */ r_esp -= 4; W32(r_esp, 0x869e1fu); f_008699dd();
    /* 00869e1f: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00869e22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00869e24: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869e27: cmp dword ptr [ebp - 0x4c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00869e2a: jge 0x869e2e */ if ((fS==fO)) goto L_00869e2e;
L_00869e2c:; BB(0x00869e2c);
    /* 00869e2c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00869e2e:; BB(0x00869e2e);
    /* 00869e2e: add eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00869e31: cmp dword ptr [ebp - 0x5c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869e34: jne 0x869e39 */ if (!fZ) goto L_00869e39;
L_00869e36:; BB(0x00869e36);
    /* 00869e36: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00869e39:; BB(0x00869e39);
    /* 00869e39: cmp dword ptr [ebp - 0x58], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00869e3c: jne 0x869e41 */ if (!fZ) goto L_00869e41;
L_00869e3e:; BB(0x00869e3e);
    /* 00869e3e: sub eax, dword ptr [ebp + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_00869e41:; BB(0x00869e41);
    /* 00869e41: cmp eax, 0x1450 */ {  u32 a = r_eax; u32 b = 0x1450u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00869e46: jg 0x869e76 */ if ((!fZ&&fS==fO)) goto L_00869e76;
L_00869e48:; BB(0x00869e48);
    /* 00869e48: cmp eax, 0xffffebb0 */ {  u32 a = r_eax; u32 b = 0xffffebb0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00869e4d: jl 0x869e8d */ if ((fS!=fO)) goto L_00869e8d;
L_00869e4f:; BB(0x00869e4f);
    /* 00869e4f: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00869e52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869e53: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00869e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00869e57: call 0x86a6f5 */ r_esp -= 4; W32(r_esp, 0x869e5cu); f_0086a6f5();
    /* 00869e5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00869e5f: mov ebx, dword ptr [ebp - 0x12] */ r_ebx = R32((u32)(r_ebp+0xffffffeeu));
    /* 00869e62: mov esi, dword ptr [ebp - 0xe] */ r_esi = R32((u32)(r_ebp+0xfffffff2u));
    /* 00869e65: mov eax, dword ptr [ebp - 0xa] */ r_eax = R32((u32)(r_ebp+0xfffffff6u));
    /* 00869e68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00869e6b: jmp 0x869e9c */ goto L_00869e9c;
L_00869e6d:; BB(0x00869e6d);
    /* 00869e6d: mov dword ptr [ebp - 0x48], 4 */ W32((u32)(r_ebp+0xffffffb8u), 0x4u);
    /* 00869e74: jmp 0x869e94 */ goto L_00869e94;
L_00869e76:; BB(0x00869e76);
    /* 00869e76: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00869e78: mov eax, 0x7fff */ r_eax = 0x7fffu;
    /* 00869e7d: mov esi, 0x80000000 */ r_esi = 0x80000000u;
    /* 00869e82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00869e84: mov dword ptr [ebp - 0x48], 2 */ W32((u32)(r_ebp+0xffffffb8u), 0x2u);
    /* 00869e8b: jmp 0x869e9c */ goto L_00869e9c;
L_00869e8d:; BB(0x00869e8d);
    /* 00869e8d: mov dword ptr [ebp - 0x48], 1 */ W32((u32)(r_ebp+0xffffffb8u), 0x1u);
L_00869e94:; BB(0x00869e94);
    /* 00869e94: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00869e96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00869e98: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00869e9a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00869e9c:; BB(0x00869e9c);
    /* 00869e9c: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00869e9f: or eax, dword ptr [ebp - 0x50] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffb0u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00869ea2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00869ea3: mov dword ptr [ecx + 6], esi */ W32((u32)(r_ecx+0x6u), r_esi);
    /* 00869ea6: mov dword ptr [ecx + 2], ebx */ W32((u32)(r_ecx+0x2u), r_ebx);
    /* 00869ea9: mov word ptr [ecx + 0xa], ax */ W16((u32)(r_ecx+0xau), (u16)r_eax);
    /* 00869ead: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00869eb0: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00869eb3: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00869eb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00869eb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00869eb8: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x869ebdu); f_0085e419();
    /* 00869ebd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00869ebe: ret  */ FN_RET(0x00869abb); r_esp += 4; return;
}

