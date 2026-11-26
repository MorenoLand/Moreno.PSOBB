#include "protos.h"

void f_00890249(void) /* ?CreateTextureFromFileInMemoryEx@@YAJPAUIDirect3DDevice8@@PBXIIIIIKW4_D3DFORMAT@@W4_D3DPOOL@@KKKPAU_D3DXIMAGE_INFO@@PAUtagPALETTEENTRY@@W4_D3DRESOURCETYPE@@PAPAUIDirect3DBaseTexture8@@@Z */
{
    FN_ENTER(0x00890249);
    /* 00890249: mov eax, 0x8cb5db */ r_eax = 0x8cb5dbu;
    /* 0089024e: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x890253u); f_008cb064();
    /* 00890253: sub esp, 0x4c0 */ {  u32 a = r_esp; u32 b = 0x4c0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00890259: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089025a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089025b: mov esi, dword ptr [ebp + 0x3c] */ r_esi = R32((u32)(r_ebp+0x3cu));
    /* 0089025e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089025f: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00890265: call 0x8941db */ r_esp -= 4; W32(r_esp, 0x89026au); f_008941db();
    /* 0089026a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089026c: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0089026f: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890272: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00890275: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00890278: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0089027b: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0089027e: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00890281: jne 0x89028d */ if (!fZ) goto L_0089028d;
L_00890283:; BB(0x00890283);
    /* 00890283: mov edi, 0x8876086c */ r_edi = 0x8876086cu;
    /* 00890288: jmp 0x89086e */ goto L_0089086e;
L_0089028d:; BB(0x0089028d);
    /* 0089028d: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890290: je 0x890283 */ if (fZ) goto L_00890283;
L_00890292:; BB(0x00890292);
    /* 00890292: cmp dword ptr [ebp + 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890295: je 0x890283 */ if (fZ) goto L_00890283;
L_00890297:; BB(0x00890297);
    /* 00890297: cmp dword ptr [ebp + 0x48], ebx */ {  u32 a = R32((u32)(r_ebp+0x48u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089029a: je 0x890283 */ if (fZ) goto L_00890283;
L_0089029c:; BB(0x0089029c);
    /* 0089029c: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089029e: jne 0x8902ab */ if (!fZ) goto L_008902ab;
L_008902a0:; BB(0x008902a0);
    /* 008902a0: cmp dword ptr [ebp + 0x44], edi */ {  u32 a = R32((u32)(r_ebp+0x44u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008902a3: jne 0x8902ab */ if (!fZ) goto L_008902ab;
L_008902a5:; BB(0x008902a5);
    /* 008902a5: lea esi, [ebp - 0xcc] */ r_esi = (u32)(r_ebp+0xffffff34u);
L_008902ab:; BB(0x008902ab);
    /* 008902ab: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008902ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008902ae: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008902b1: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 008902b7: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008902ba: call 0x895cb4 */ r_esp -= 4; W32(r_esp, 0x8902bfu); f_00895cb4();
    /* 008902bf: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008902c1: jge 0x8902ca */ if ((fS==fO)) goto L_008902ca;
L_008902c3:; BB(0x008902c3);
    /* 008902c3: mov edi, eax */ r_edi = r_eax;
    /* 008902c5: jmp 0x89086e */ goto L_0089086e;
L_008902ca:; BB(0x008902ca);
    /* 008902ca: cmp dword ptr [ebp + 0x44], edi */ {  u32 a = R32((u32)(r_ebp+0x44u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008902cd: jne 0x8902d5 */ if (!fZ) goto L_008902d5;
L_008902cf:; BB(0x008902cf);
    /* 008902cf: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 008902d2: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
L_008902d5:; BB(0x008902d5);
    /* 008902d5: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008902d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008902da: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008902db: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008902de: jmp 0x8902e6 */ goto L_008902e6;
L_008902e0:; BB(0x008902e0);
    /* 008902e0: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008902e3: mov eax, dword ptr [eax + 0x4c] */ r_eax = R32((u32)(r_eax+0x4cu));
L_008902e6:; BB(0x008902e6);
    /* 008902e6: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008902e8: jne 0x8902e0 */ if (!fZ) goto L_008902e0;
L_008902ea:; BB(0x008902ea);
    /* 008902ea: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008902ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008902ed: cmp dword ptr [ebp + 0x44], esi */ {  u32 a = R32((u32)(r_ebp+0x44u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008902f0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008902f3: jne 0x890316 */ if (!fZ) goto L_00890316;
L_008902f5:; BB(0x008902f5);
    /* 008902f5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008902f8: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008902fa: je 0x89030c */ if (fZ) goto L_0089030c;
L_008902fc:; BB(0x008902fc);
    /* 008902fc: mov eax, dword ptr [eax + 0x50] */ r_eax = R32((u32)(r_eax+0x50u));
    /* 008902ff: inc dword ptr [ebp - 0x28] */ { u32 ad = (u32)(r_ebp+0xffffffd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00890302: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890304: jne 0x8902fc */ if (!fZ) goto L_008902fc;
L_00890306:; BB(0x00890306);
    /* 00890306: cmp dword ptr [ebp - 0x28], 6 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089030a: je 0x890316 */ if (fZ) goto L_00890316;
L_0089030c:; BB(0x0089030c);
    /* 0089030c: mov edi, 0x80004005 */ r_edi = 0x80004005u;
    /* 00890311: jmp 0x89086e */ goto L_0089086e;
L_00890316:; BB(0x00890316);
    /* 00890316: cmp dword ptr [ebp + 0x14], ebx */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890319: je 0x890320 */ if (fZ) goto L_00890320;
L_0089031b:; BB(0x0089031b);
    /* 0089031b: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089031e: jne 0x890326 */ if (!fZ) goto L_00890326;
L_00890320:; BB(0x00890320);
    /* 00890320: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 00890323: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
L_00890326:; BB(0x00890326);
    /* 00890326: cmp dword ptr [ebp + 0x18], ebx */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890329: je 0x890330 */ if (fZ) goto L_00890330;
L_0089032b:; BB(0x0089032b);
    /* 0089032b: cmp dword ptr [ebp + 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089032e: jne 0x890336 */ if (!fZ) goto L_00890336;
L_00890330:; BB(0x00890330);
    /* 00890330: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 00890333: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_00890336:; BB(0x00890336);
    /* 00890336: cmp dword ptr [ebp + 0x1c], ebx */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890339: je 0x890340 */ if (fZ) goto L_00890340;
L_0089033b:; BB(0x0089033b);
    /* 0089033b: cmp dword ptr [ebp + 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089033e: jne 0x890346 */ if (!fZ) goto L_00890346;
L_00890340:; BB(0x00890340);
    /* 00890340: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 00890343: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_00890346:; BB(0x00890346);
    /* 00890346: cmp dword ptr [ebp + 0x30], edi */ {  u32 a = R32((u32)(r_ebp+0x30u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890349: jne 0x890352 */ if (!fZ) goto L_00890352;
L_0089034b:; BB(0x0089034b);
    /* 0089034b: mov dword ptr [ebp + 0x30], 0x80004 */ W32((u32)(r_ebp+0x30u), 0x80004u);
L_00890352:; BB(0x00890352);
    /* 00890352: cmp dword ptr [ebp + 0x34], edi */ {  u32 a = R32((u32)(r_ebp+0x34u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890355: jne 0x89035a */ if (!fZ) goto L_0089035a;
L_00890357:; BB(0x00890357);
    /* 00890357: mov dword ptr [ebp + 0x34], esi */ W32((u32)(r_ebp+0x34u), r_esi);
L_0089035a:; BB(0x0089035a);
    /* 0089035a: cmp dword ptr [ebp + 0x44], esi */ {  u32 a = R32((u32)(r_ebp+0x44u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089035d: jne 0x89036a */ if (!fZ) goto L_0089036a;
L_0089035f:; BB(0x0089035f);
    /* 0089035f: mov eax, 0x70000 */ r_eax = 0x70000u;
    /* 00890364: or dword ptr [ebp + 0x30], eax */ { u32 ad = (u32)(r_ebp+0x30u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00890367: or dword ptr [ebp + 0x34], eax */ { u32 ad = (u32)(r_ebp+0x34u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0089036a:; BB(0x0089036a);
    /* 0089036a: cmp byte ptr [ebp + 0x30], 1 */ {  u32 a = R8((u32)(r_ebp+0x30u)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0089036e: je 0x890384 */ if (fZ) goto L_00890384;
L_00890370:; BB(0x00890370);
    /* 00890370: mov eax, dword ptr [ebp + 0x34] */ r_eax = R32((u32)(r_ebp+0x34u));
    /* 00890373: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00890378: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089037b: je 0x890384 */ if (fZ) goto L_00890384;
L_0089037d:; BB(0x0089037d);
    /* 0089037d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089037f: mov dword ptr [ebp - 0x30], ebx */ W32((u32)(r_ebp+0xffffffd0u), r_ebx);
    /* 00890382: jne 0x890387 */ if (!fZ) goto L_00890387;
L_00890384:; BB(0x00890384);
    /* 00890384: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
L_00890387:; BB(0x00890387);
    /* 00890387: cmp dword ptr [ebp + 0x28], ebx */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089038a: jne 0x890415 */ if (!fZ) goto L_00890415;
L_00890390:; BB(0x00890390);
    /* 00890390: cmp dword ptr [ebp + 0x38], ebx */ {  u32 a = R32((u32)(r_ebp+0x38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890393: mov esi, dword ptr [ebp - 0x8c] */ r_esi = R32((u32)(r_ebp+0xffffff74u));
    /* 00890399: je 0x8903f7 */ if (fZ) goto L_008903f7;
L_0089039b:; BB(0x0089039b);
    /* 0089039b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089039c: call 0x88f68c */ r_esp -= 4; W32(r_esp, 0x8903a1u); f_0088f68c();
    /* 008903a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008903a2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008903a5: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008903a7: je 0x8903b3 */ if (fZ) goto L_008903b3;
L_008903a9:; BB(0x008903a9);
    /* 008903a9: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008903ac: je 0x8903b3 */ if (fZ) goto L_008903b3;
L_008903ae:; BB(0x008903ae);
    /* 008903ae: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008903b1: jne 0x8903f7 */ if (!fZ) goto L_008903f7;
L_008903b3:; BB(0x008903b3);
    /* 008903b3: cmp dword ptr [eax + 0x10], ebx */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008903b6: jne 0x8903f7 */ if (!fZ) goto L_008903f7;
L_008903b8:; BB(0x008903b8);
    /* 008903b8: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 008903ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008903bb: mov esi, eax */ r_esi = r_eax;
    /* 008903bd: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 008903c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008903c4: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 008903c7: lea edi, [ebp - 0xb0] */ r_edi = (u32)(r_ebp+0xffffff50u);
    /* 008903cd: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 008903d0: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008903d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008903d3: mov dword ptr [ebp - 0xb0], ebx */ W32((u32)(r_ebp+0xffffff50u), r_ebx);
    /* 008903d9: mov dword ptr [ebp - 0xa0], 1 */ W32((u32)(r_ebp+0xffffff60u), 0x1u);
    /* 008903e3: call 0x88f725 */ r_esp -= 4; W32(r_esp, 0x8903e8u); f_0088f725();
    /* 008903e8: mov esi, eax */ r_esi = r_eax;
    /* 008903ea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008903ed: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008903ef: jne 0x8903f7 */ if (!fZ) goto L_008903f7;
L_008903f1:; BB(0x008903f1);
    /* 008903f1: mov esi, dword ptr [ebp - 0x8c] */ r_esi = R32((u32)(r_ebp+0xffffff74u));
L_008903f7:; BB(0x008903f7);
    /* 008903f7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008903f8: call 0x88f807 */ r_esp -= 4; W32(r_esp, 0x8903fdu); f_0088f807();
    /* 008903fd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00890400: cmp dword ptr [ebp + 0x2c], 3 */ {  u32 a = R32((u32)(r_ebp+0x2cu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890404: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00890407: je 0x890415 */ if (fZ) goto L_00890415;
L_00890409:; BB(0x00890409);
    /* 00890409: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089040c: jne 0x890415 */ if (!fZ) goto L_00890415;
L_0089040e:; BB(0x0089040e);
    /* 0089040e: mov dword ptr [ebp + 0x28], 0x16 */ W32((u32)(r_ebp+0x28u), 0x16u);
L_00890415:; BB(0x00890415);
    /* 00890415: mov esi, dword ptr [ebp - 0x84] */ r_esi = R32((u32)(r_ebp+0xffffff7cu));
    /* 0089041b: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089041d: je 0x890471 */ if (fZ) goto L_00890471;
L_0089041f:; BB(0x0089041f);
    /* 0089041f: mov ecx, dword ptr [ebp + 0x38] */ r_ecx = R32((u32)(r_ebp+0x38u));
    /* 00890422: movzx eax, byte ptr [ebp + 0x3a] */ r_eax = (u32)R8((u32)(r_ebp+0x3au));
    /* 00890426: mov edx, ecx */ r_edx = r_ecx;
    /* 00890428: and edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0089042e: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00890431: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00890433: and ecx, 0xff00ff00 */ {  u32 a = r_ecx; u32 b = 0xff00ff00u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00890439: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089043b: lea edx, [ebp - 0x4cc] */ r_edx = (u32)(r_ebp+0xfffffb34u);
    /* 00890441: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00890443: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00890445: mov edx, 0x100 */ r_edx = 0x100u;
L_0089044a:; BB(0x0089044a);
    /* 0089044a: lea edi, [esi + ecx*4] */ r_edi = (u32)(r_esi+r_ecx*4);
    /* 0089044d: mov edi, dword ptr [ebp + edi - 0x4cc] */ r_edi = R32((u32)(r_ebp+r_edi+0xfffffb34u));
    /* 00890454: mov ebx, edi */ r_ebx = r_edi;
    /* 00890456: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00890458: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); fC = (b != 0); }
    /* 0089045a: sbb ebx, ebx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r;  }
    /* 0089045c: and ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089045e: mov dword ptr [ebp + ecx*4 - 0x4cc], ebx */ W32((u32)(r_ebp+r_ecx*4+0xfffffb34u), r_ebx);
    /* 00890465: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00890466: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00890468: jb 0x89044a */ if (fC) goto L_0089044a;
L_0089046a:; BB(0x0089046a);
    /* 0089046a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089046c: mov dword ptr [ebp + 0x38], ebx */ W32((u32)(r_ebp+0x38u), r_ebx);
    /* 0089046f: jmp 0x890483 */ goto L_00890483;
L_00890471:; BB(0x00890471);
    /* 00890471: mov edx, 0x100 */ r_edx = 0x100u;
    /* 00890476: mov ecx, edx */ r_ecx = r_edx;
    /* 00890478: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0089047b: lea edi, [ebp - 0x4cc] */ r_edi = (u32)(r_ebp+0xfffffb34u);
    /* 00890481: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_00890483:; BB(0x00890483);
    /* 00890483: mov edi, dword ptr [ebp + 0x40] */ r_edi = R32((u32)(r_ebp+0x40u));
    /* 00890486: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890488: je 0x890496 */ if (fZ) goto L_00890496;
L_0089048a:; BB(0x0089048a);
    /* 0089048a: mov ecx, edx */ r_ecx = r_edx;
    /* 0089048c: lea esi, [ebp - 0x4cc] */ r_esi = (u32)(r_ebp+0xfffffb34u);
    /* 00890492: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00890494: jmp 0x8904c3 */ goto L_008904c3;
L_00890496:; BB(0x00890496);
    /* 00890496: cmp dword ptr [ebp + 0x28], 0x28 */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089049a: je 0x8904bc */ if (fZ) goto L_008904bc;
L_0089049c:; BB(0x0089049c);
    /* 0089049c: cmp dword ptr [ebp + 0x28], 0x29 */ {  u32 a = R32((u32)(r_ebp+0x28u)); u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008904a0: jne 0x8904c3 */ if (!fZ) goto L_008904c3;
L_008904a2:; BB(0x008904a2);
    /* 008904a2: mov dword ptr [ebp + 0x28], 0x16 */ W32((u32)(r_ebp+0x28u), 0x16u);
    /* 008904a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008904ab:; BB(0x008904ab);
    /* 008904ab: cmp byte ptr [ebp + eax*4 - 0x4c9], 0xff */ {  u32 a = R8((u32)(r_ebp+r_eax*4+0xfffffb37u)); u32 b = 0xffu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008904b3: jne 0x8904bc */ if (!fZ) goto L_008904bc;
L_008904b5:; BB(0x008904b5);
    /* 008904b5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008904b6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008904b8: jb 0x8904ab */ if (fC) goto L_008904ab;
L_008904ba:; BB(0x008904ba);
    /* 008904ba: jmp 0x8904c3 */ goto L_008904c3;
L_008904bc:; BB(0x008904bc);
    /* 008904bc: mov dword ptr [ebp + 0x28], 0x15 */ W32((u32)(r_ebp+0x28u), 0x15u);
L_008904c3:; BB(0x008904c3);
    /* 008904c3: cmp dword ptr [ebp + 0x2c], ebx */ {  u32 a = R32((u32)(r_ebp+0x2cu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008904c6: jne 0x8904d5 */ if (!fZ) goto L_008904d5;
L_008904c8:; BB(0x008904c8);
    /* 008904c8: test byte ptr [ebp + 0x25], 2 */ {  u32 a = R8((u32)(r_ebp+0x25u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008904cc: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 008904d3: je 0x8904d8 */ if (fZ) goto L_008904d8;
L_008904d5:; BB(0x008904d5);
    /* 008904d5: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
L_008904d8:; BB(0x008904d8);
    /* 008904d8: push dword ptr [ebp + 0x44] */ { u32 v = R32((u32)(r_ebp+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 008904db: mov edx, dword ptr [ebp + 0x24] */ r_edx = R32((u32)(r_ebp+0x24u));
    /* 008904de: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008904e1: lea eax, [ebp + 0x28] */ r_eax = (u32)(r_ebp+0x28u);
    /* 008904e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008904e5: lea eax, [ebp + 0x20] */ r_eax = (u32)(r_ebp+0x20u);
    /* 008904e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008904e9: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 008904ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008904ed: lea eax, [ebp + 0x18] */ r_eax = (u32)(r_ebp+0x18u);
    /* 008904f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008904f1: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 008904f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008904f5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008904f8: call 0x88f9ed */ r_esp -= 4; W32(r_esp, 0x8904fdu); f_0088f9ed();
    /* 008904fd: mov edi, eax */ r_edi = r_eax;
    /* 008904ff: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00890502: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00890504: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_0089050a:; BB(0x0089050a);
    /* 0089050a: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 0089050d: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890510: mov esi, dword ptr [ebp + 0x28] */ r_esi = R32((u32)(r_ebp+0x28u));
    /* 00890513: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00890516: je 0x890558 */ if (fZ) goto L_00890558;
L_00890518:; BB(0x00890518);
    /* 00890518: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890519: je 0x890538 */ if (fZ) goto L_00890538;
L_0089051b:; BB(0x0089051b);
    /* 0089051b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089051c: jne 0x890575 */ if (!fZ) goto L_00890575;
L_0089051e:; BB(0x0089051e);
    /* 0089051e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890521: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890523: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00890526: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00890527: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089052a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089052b: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089052e: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890531: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890532: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890533: call dword ptr [ecx + 0x58] */ { u32 t = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, 0x890536u); call_ind(t); }
    /* 00890536: jmp 0x890573 */ goto L_00890573;
L_00890538:; BB(0x00890538);
    /* 00890538: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089053b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089053d: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00890540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00890541: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890544: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890545: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890548: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089054b: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089054e: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890551: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890552: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890553: call dword ptr [ecx + 0x54] */ { u32 t = R32((u32)(r_ecx+0x54u)); r_esp -= 4; W32(r_esp, 0x890556u); call_ind(t); }
    /* 00890556: jmp 0x890573 */ goto L_00890573;
L_00890558:; BB(0x00890558);
    /* 00890558: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089055b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089055d: lea edx, [ebp - 0x1c] */ r_edx = (u32)(r_ebp+0xffffffe4u);
    /* 00890560: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00890561: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890564: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00890565: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890568: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089056b: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089056e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089056f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890570: call dword ptr [ecx + 0x50] */ { u32 t = R32((u32)(r_ecx+0x50u)); r_esp -= 4; W32(r_esp, 0x890573u); call_ind(t); }
L_00890573:; BB(0x00890573);
    /* 00890573: mov edi, eax */ r_edi = r_eax;
L_00890575:; BB(0x00890575);
    /* 00890575: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00890577: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_0089057d:; BB(0x0089057d);
    /* 0089057d: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890581: je 0x8905ef */ if (fZ) goto L_008905ef;
L_00890583:; BB(0x00890583);
    /* 00890583: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00890586: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890589: je 0x8905c7 */ if (fZ) goto L_008905c7;
L_0089058b:; BB(0x0089058b);
    /* 0089058b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089058c: je 0x8905a9 */ if (fZ) goto L_008905a9;
L_0089058e:; BB(0x0089058e);
    /* 0089058e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089058f: jne 0x8905e2 */ if (!fZ) goto L_008905e2;
L_00890591:; BB(0x00890591);
    /* 00890591: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00890594: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890596: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 00890599: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0089059a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0089059c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089059d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089059f: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008905a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008905a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008905a4: call dword ptr [ecx + 0x58] */ { u32 t = R32((u32)(r_ecx+0x58u)); r_esp -= 4; W32(r_esp, 0x8905a7u); call_ind(t); }
    /* 008905a7: jmp 0x8905e0 */ goto L_008905e0;
L_008905a9:; BB(0x008905a9);
    /* 008905a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008905ac: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008905ae: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 008905b1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008905b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008905b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008905b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008905b7: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008905ba: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008905bd: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008905c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008905c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008905c2: call dword ptr [ecx + 0x54] */ { u32 t = R32((u32)(r_ecx+0x54u)); r_esp -= 4; W32(r_esp, 0x8905c5u); call_ind(t); }
    /* 008905c5: jmp 0x8905e0 */ goto L_008905e0;
L_008905c7:; BB(0x008905c7);
    /* 008905c7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008905ca: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008905cc: lea edx, [ebp - 0x20] */ r_edx = (u32)(r_ebp+0xffffffe0u);
    /* 008905cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008905d0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008905d2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008905d3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008905d5: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 008905d8: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008905db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008905dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008905dd: call dword ptr [ecx + 0x50] */ { u32 t = R32((u32)(r_ecx+0x50u)); r_esp -= 4; W32(r_esp, 0x8905e0u); call_ind(t); }
L_008905e0:; BB(0x008905e0);
    /* 008905e0: mov edi, eax */ r_edi = r_eax;
L_008905e2:; BB(0x008905e2);
    /* 008905e2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008905e4: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_008905ea:; BB(0x008905ea);
    /* 008905ea: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008905ed: jmp 0x8905f2 */ goto L_008905f2;
L_008905ef:; BB(0x008905ef);
    /* 008905ef: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
L_008905f2:; BB(0x008905f2);
    /* 008905f2: and dword ptr [ebp - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008905f6: cmp dword ptr [ebp - 0x28], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008905fa: lea esi, [ebp - 0x8c] */ r_esi = (u32)(r_ebp+0xffffff74u);
    /* 00890600: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00890603: jbe 0x8907da */ if ((fC||fZ)) goto L_008907da;
L_00890609:; BB(0x00890609);
    /* 00890609: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089060d: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00890611: jbe 0x8906fd */ if ((fC||fZ)) goto L_008906fd;
L_00890617:; BB(0x00890617);
    /* 00890617: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0089061a: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089061d: jae 0x8906fd */ if (!fC) goto L_008906fd;
L_00890623:; BB(0x00890623);
    /* 00890623: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00890626: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890629: je 0x890648 */ if (fZ) goto L_00890648;
L_0089062b:; BB(0x0089062b);
    /* 0089062b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089062c: je 0x890643 */ if (fZ) goto L_00890643;
L_0089062e:; BB(0x0089062e);
    /* 0089062e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089062f: jne 0x890657 */ if (!fZ) goto L_00890657;
L_00890631:; BB(0x00890631);
    /* 00890631: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00890633: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00890636: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890637: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089063a: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089063d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089063e: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x890641u); call_ind(t); }
    /* 00890641: jmp 0x890655 */ goto L_00890655;
L_00890643:; BB(0x00890643);
    /* 00890643: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00890646: jmp 0x89064b */ goto L_0089064b;
L_00890648:; BB(0x00890648);
    /* 00890648: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
L_0089064b:; BB(0x0089064b);
    /* 0089064b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0089064d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089064e: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890651: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890652: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x890655u); call_ind(t); }
L_00890655:; BB(0x00890655);
    /* 00890655: mov edi, eax */ r_edi = r_eax;
L_00890657:; BB(0x00890657);
    /* 00890657: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00890659: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_0089065f:; BB(0x0089065f);
    /* 0089065f: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00890662: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890665: je 0x89066d */ if (fZ) goto L_0089066d;
L_00890667:; BB(0x00890667);
    /* 00890667: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890668: je 0x8906d2 */ if (fZ) goto L_008906d2;
L_0089066a:; BB(0x0089066a);
    /* 0089066a: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089066b: jne 0x890695 */ if (!fZ) goto L_00890695;
L_0089066d:; BB(0x0089066d);
    /* 0089066d: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890670: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 00890673: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890676: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890677: lea eax, [ebp - 0x4cc] */ r_eax = (u32)(r_ebp+0xfffffb34u);
    /* 0089067d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089067e: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890681: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00890683: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890686: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00890688: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089068b: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089068e: call 0x88f838 */ r_esp -= 4; W32(r_esp, 0x890693u); f_0088f838();
L_00890693:; BB(0x00890693);
    /* 00890693: mov edi, eax */ r_edi = r_eax;
L_00890695:; BB(0x00890695);
    /* 00890695: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00890697: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_0089069d:; BB(0x0089069d);
    /* 0089069d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008906a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008906a2: je 0x8906ae */ if (fZ) goto L_008906ae;
L_008906a4:; BB(0x008906a4);
    /* 008906a4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008906a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008906a7: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8906aau); call_ind(t); }
    /* 008906aa: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008906ae:; BB(0x008906ae);
    /* 008906ae: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008906b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008906b3: je 0x8906bf */ if (fZ) goto L_008906bf;
L_008906b5:; BB(0x008906b5);
    /* 008906b5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008906b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008906b8: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8906bbu); call_ind(t); }
    /* 008906bb: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008906bf:; BB(0x008906bf);
    /* 008906bf: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008906c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008906c5: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008906c8: jae 0x8906fd */ if (!fC) goto L_008906fd;
L_008906ca:; BB(0x008906ca);
    /* 008906ca: mov esi, dword ptr [esi + 0x4c] */ r_esi = R32((u32)(r_esi+0x4cu));
    /* 008906cd: jmp 0x890617 */ goto L_00890617;
L_008906d2:; BB(0x008906d2);
    /* 008906d2: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906d5: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 008906d8: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008906dc: lea eax, [ebp - 0x4cc] */ r_eax = (u32)(r_ebp+0xfffffb34u);
    /* 008906e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008906e3: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906e6: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906e9: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008906eb: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906ee: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008906f0: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906f3: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008906f6: call 0x88f91a */ r_esp -= 4; W32(r_esp, 0x8906fbu); f_0088f91a();
    /* 008906fb: jmp 0x890693 */ goto L_00890693;
L_008906fd:; BB(0x008906fd);
    /* 008906fd: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890701: jne 0x8907c2 */ if (!fZ) goto L_008907c2;
L_00890707:; BB(0x00890707);
    /* 00890707: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 0089070a: cmp dword ptr [ebp - 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089070d: jae 0x8907c2 */ if (!fC) goto L_008907c2;
L_00890713:; BB(0x00890713);
    /* 00890713: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00890716: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890719: je 0x890738 */ if (fZ) goto L_00890738;
L_0089071b:; BB(0x0089071b);
    /* 0089071b: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089071c: je 0x890733 */ if (fZ) goto L_00890733;
L_0089071e:; BB(0x0089071e);
    /* 0089071e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089071f: jne 0x890747 */ if (!fZ) goto L_00890747;
L_00890721:; BB(0x00890721);
    /* 00890721: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00890723: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
    /* 00890726: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00890727: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089072a: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089072d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089072e: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x890731u); call_ind(t); }
    /* 00890731: jmp 0x890745 */ goto L_00890745;
L_00890733:; BB(0x00890733);
    /* 00890733: lea ecx, [ebp - 0x18] */ r_ecx = (u32)(r_ebp+0xffffffe8u);
    /* 00890736: jmp 0x89073b */ goto L_0089073b;
L_00890738:; BB(0x00890738);
    /* 00890738: lea ecx, [ebp - 0x14] */ r_ecx = (u32)(r_ebp+0xffffffecu);
L_0089073b:; BB(0x0089073b);
    /* 0089073b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0089073d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089073e: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890741: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00890742: call dword ptr [eax + 0x3c] */ { u32 t = R32((u32)(r_eax+0x3cu)); r_esp -= 4; W32(r_esp, 0x890745u); call_ind(t); }
L_00890745:; BB(0x00890745);
    /* 00890745: mov edi, eax */ r_edi = r_eax;
L_00890747:; BB(0x00890747);
    /* 00890747: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00890749: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_0089074f:; BB(0x0089074f);
    /* 0089074f: mov eax, dword ptr [ebp + 0x44] */ r_eax = R32((u32)(r_ebp+0x44u));
    /* 00890752: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890755: je 0x890761 */ if (fZ) goto L_00890761;
L_00890757:; BB(0x00890757);
    /* 00890757: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00890758: je 0x89088e */ if (fZ) goto L_0089088e;
L_0089075e:; BB(0x0089075e);
    /* 0089075e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0089075f: jne 0x890789 */ if (!fZ) goto L_00890789;
L_00890761:; BB(0x00890761);
    /* 00890761: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890764: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 00890767: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089076a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089076b: lea eax, [ebp - 0x4cc] */ r_eax = (u32)(r_ebp+0xfffffb34u);
    /* 00890771: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890772: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890775: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00890777: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089077a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0089077c: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089077f: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00890782: call 0x88f838 */ r_esp -= 4; W32(r_esp, 0x890787u); f_0088f838();
L_00890787:; BB(0x00890787);
    /* 00890787: mov edi, eax */ r_edi = r_eax;
L_00890789:; BB(0x00890789);
    /* 00890789: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089078b: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_00890791:; BB(0x00890791);
    /* 00890791: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00890794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890796: je 0x8907a2 */ if (fZ) goto L_008907a2;
L_00890798:; BB(0x00890798);
    /* 00890798: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089079a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089079b: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89079eu); call_ind(t); }
    /* 0089079e: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008907a2:; BB(0x008907a2);
    /* 008907a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008907a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008907a7: je 0x8907b3 */ if (fZ) goto L_008907b3;
L_008907a9:; BB(0x008907a9);
    /* 008907a9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008907ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008907ac: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x8907afu); call_ind(t); }
    /* 008907af: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008907b3:; BB(0x008907b3);
    /* 008907b3: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008907b6: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008907b9: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008907bc: jb 0x890713 */ if (fC) goto L_00890713;
L_008907c2:; BB(0x008907c2);
    /* 008907c2: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 008907c5: inc dword ptr [ebp - 0x2c] */ { u32 ad = (u32)(r_ebp+0xffffffd4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008907c8: mov esi, dword ptr [eax + 0x50] */ r_esi = R32((u32)(r_eax+0x50u));
    /* 008907cb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008907ce: cmp eax, dword ptr [ebp - 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008907d1: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 008907d4: jb 0x890609 */ if (fC) goto L_00890609;
L_008907da:; BB(0x008907da);
    /* 008907da: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008907de: je 0x890803 */ if (fZ) goto L_00890803;
L_008907e0:; BB(0x008907e0);
    /* 008907e0: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 008907e3: cmp dword ptr [ebp - 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008907e6: jae 0x890803 */ if (!fC) goto L_00890803;
L_008907e8:; BB(0x008907e8);
    /* 008907e8: push dword ptr [ebp + 0x34] */ { u32 v = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008907eb: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 008907ee: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008907ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008907f0: lea eax, [ebp - 0x4cc] */ r_eax = (u32)(r_ebp+0xfffffb34u);
    /* 008907f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008907f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008907f8: call 0x88ff65 */ r_esp -= 4; W32(r_esp, 0x8907fdu); f_0088ff65();
    /* 008907fd: mov edi, eax */ r_edi = r_eax;
    /* 008907ff: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00890801: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_00890803:; BB(0x00890803);
    /* 00890803: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890807: je 0x89081e */ if (fZ) goto L_0089081e;
L_00890809:; BB(0x00890809);
    /* 00890809: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089080c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089080f: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890812: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890814: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890815: call dword ptr [ecx + 0x74] */ { u32 t = R32((u32)(r_ecx+0x74u)); r_esp -= 4; W32(r_esp, 0x890818u); call_ind(t); }
    /* 00890818: mov edi, eax */ r_edi = r_eax;
    /* 0089081a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089081c: jl 0x89082c */ if ((fS!=fO)) goto L_0089082c;
L_0089081e:; BB(0x0089081e);
    /* 0089081e: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00890821: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 00890824: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00890828: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0089082a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0089082c:; BB(0x0089082c);
    /* 0089082c: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089082f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00890831: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890833: je 0x89083e */ if (fZ) goto L_0089083e;
L_00890835:; BB(0x00890835);
    /* 00890835: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890837: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890838: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89083bu); call_ind(t); }
    /* 0089083b: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_0089083e:; BB(0x0089083e);
    /* 0089083e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00890841: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890843: je 0x89084e */ if (fZ) goto L_0089084e;
L_00890845:; BB(0x00890845);
    /* 00890845: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890847: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890848: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89084bu); call_ind(t); }
    /* 0089084b: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
L_0089084e:; BB(0x0089084e);
    /* 0089084e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00890851: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890853: je 0x89085e */ if (fZ) goto L_0089085e;
L_00890855:; BB(0x00890855);
    /* 00890855: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890857: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890858: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89085bu); call_ind(t); }
    /* 0089085b: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
L_0089085e:; BB(0x0089085e);
    /* 0089085e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00890861: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00890863: je 0x89086e */ if (fZ) goto L_0089086e;
L_00890865:; BB(0x00890865);
    /* 00890865: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00890867: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890868: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x89086bu); call_ind(t); }
    /* 0089086b: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
L_0089086e:; BB(0x0089086e);
    /* 0089086e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00890872: lea ecx, [ebp - 0x8c] */ r_ecx = (u32)(r_ebp+0xffffff74u);
    /* 00890878: call 0x8941f4 */ r_esp -= 4; W32(r_esp, 0x89087du); f_008941f4();
    /* 0089087d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00890880: mov eax, edi */ r_eax = r_edi;
    /* 00890882: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00890883: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00890884: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00890885: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089088c: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089088d: ret  */ FN_RET(0x00890249); r_esp += 4; return;
L_0089088e:; BB(0x0089088e);
    /* 0089088e: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890891: lea eax, [esi + 0x18] */ r_eax = (u32)(r_esi+0x18u);
    /* 00890894: push dword ptr [ebp + 0x30] */ { u32 v = R32((u32)(r_ebp+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00890897: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00890898: lea eax, [ebp - 0x4cc] */ r_eax = (u32)(r_ebp+0xfffffb34u);
    /* 0089089e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089089f: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908a2: push dword ptr [esi + 0x30] */ { u32 v = R32((u32)(r_esi+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908a5: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008908a7: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908aa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008908ac: push dword ptr [ebp + 0x40] */ { u32 v = R32((u32)(r_ebp+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908af: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008908b2: call 0x88f91a */ r_esp -= 4; W32(r_esp, 0x8908b7u); f_0088f91a();
    /* 008908b7: jmp 0x890787 */ goto L_00890787;
}

