#include "protos.h"

void f_008664a7(void) /* __setmbcp_lk */
{
    FN_ENTER(0x008664a7);
    /* 008664a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008664a8: mov ebp, esp */ r_ebp = r_esp;
    /* 008664aa: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008664ad: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008664b2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008664b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008664b4: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008664b7: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008664b9: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008664bb: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008664be: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008664bf: je 0x866619 */ if (fZ) goto L_00866619;
L_008664c5:; BB(0x008664c5);
    /* 008664c5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008664c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008664c9:; BB(0x008664c9);
    /* 008664c9: cmp dword ptr [eax + 0xa24398], esi */ {  u32 a = R32((u32)(r_eax+0xa24398u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008664cf: je 0x866536 */ if (fZ) goto L_00866536;
L_008664d1:; BB(0x008664d1);
    /* 008664d1: add eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008664d4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008664d5: cmp eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008664da: jb 0x8664c9 */ if (fC) goto L_008664c9;
L_008664dc:; BB(0x008664dc);
    /* 008664dc: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008664df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008664e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008664e1: call dword ptr [0x8f82b4] */ { u32 t = R32((u32)(0x8f82b4u)); r_esp -= 4; W32(r_esp, 0x8664e7u); call_ind(t); }
    /* 008664e7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008664ea: jne 0x866611 */ if (!fZ) goto L_00866611;
L_008664f0:; BB(0x008664f0);
    /* 008664f0: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008664f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008664f4: cmp dword ptr [ebp - 0x18], 1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008664f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008664f9: mov edi, 0xaf0840 */ r_edi = 0xaf0840u;
    /* 008664fe: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00866500: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00866501: mov dword ptr [0xaf0944], esi */ W32((u32)(0xaf0944u), r_esi);
    /* 00866507: mov dword ptr [0xaf0834], ebx */ W32((u32)(0xaf0834u), r_ebx);
    /* 0086650d: jbe 0x8665ff */ if ((fC||fZ)) goto L_008665ff;
L_00866513:; BB(0x00866513);
    /* 00866513: cmp byte ptr [ebp - 0x12], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffeeu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00866517: je 0x8665d7 */ if (fZ) goto L_008665d7;
L_0086651d:; BB(0x0086651d);
    /* 0086651d: lea ecx, [ebp - 0x11] */ r_ecx = (u32)(r_ebp+0xffffffefu);
L_00866520:; BB(0x00866520);
    /* 00866520: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00866522: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866524: je 0x8665d7 */ if (fZ) goto L_008665d7;
L_0086652a:; BB(0x0086652a);
    /* 0086652a: movzx eax, byte ptr [ecx - 1] */ r_eax = (u32)R8((u32)(r_ecx+0xffffffffu));
    /* 0086652e: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00866531: jmp 0x8665c7 */ goto L_008665c7;
L_00866536:; BB(0x00866536);
    /* 00866536: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00866538: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086653a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086653b: mov edi, 0xaf0840 */ r_edi = 0xaf0840u;
    /* 00866540: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00866542: lea ecx, [edx + edx*2] */ r_ecx = (u32)(r_edx+r_edx*2);
    /* 00866545: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00866548: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0086654b: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 0086654c: lea ebx, [ecx + 0xa243a8] */ r_ebx = (u32)(r_ecx+0xa243a8u);
L_00866552:; BB(0x00866552);
    /* 00866552: mov al, byte ptr [ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 00866554: mov esi, ebx */ r_esi = r_ebx;
    /* 00866556: jmp 0x866581 */ goto L_00866581;
L_00866558:; BB(0x00866558);
    /* 00866558: mov dl, byte ptr [esi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 0086655b: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086655d: je 0x866585 */ if (fZ) goto L_00866585;
L_0086655f:; BB(0x0086655f);
    /* 0086655f: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00866562: movzx edi, dl */ r_edi = (u32)(u8)r_edx;
    /* 00866565: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00866567: ja 0x86657d */ if ((!fC&&!fZ)) goto L_0086657d;
L_00866569:; BB(0x00866569);
    /* 00866569: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086656c: mov dl, byte ptr [edx + 0xa24390] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx+0xa24390u))) & 0xffu);
L_00866572:; BB(0x00866572);
    /* 00866572: or byte ptr [eax + 0xaf0841], dl */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00866578: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866579: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086657b: jbe 0x866572 */ if ((fC||fZ)) goto L_00866572;
L_0086657d:; BB(0x0086657d);
    /* 0086657d: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086657e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086657f: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
L_00866581:; BB(0x00866581);
    /* 00866581: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866583: jne 0x866558 */ if (!fZ) goto L_00866558;
L_00866585:; BB(0x00866585);
    /* 00866585: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00866588: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086658b: cmp dword ptr [ebp - 0x1c], 4 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086658f: jb 0x866552 */ if (fC) goto L_00866552;
L_00866591:; BB(0x00866591);
    /* 00866591: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00866594: mov dword ptr [0xaf0944], eax */ W32((u32)(0xaf0944u), r_eax);
    /* 00866599: mov dword ptr [0xaf083c], 1 */ W32((u32)(0xaf083cu), 0x1u);
    /* 008665a3: call 0x866254 */ r_esp -= 4; W32(r_esp, 0x8665a8u); f_00866254();
    /* 008665a8: lea ecx, [ecx + 0xa2439c] */ r_ecx = (u32)(r_ecx+0xa2439cu);
    /* 008665ae: mov esi, ecx */ r_esi = r_ecx;
    /* 008665b0: mov edi, 0xaf0950 */ r_edi = 0xaf0950u;
    /* 008665b5: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008665b6: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008665b7: mov dword ptr [0xaf0834], eax */ W32((u32)(0xaf0834u), r_eax);
    /* 008665bc: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 008665bd: jmp 0x86661e */ goto L_0086661e;
L_008665bf:; BB(0x008665bf);
    /* 008665bf: or byte ptr [eax + 0xaf0841], 4 */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008665c6: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008665c7:; BB(0x008665c7);
    /* 008665c7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008665c9: jbe 0x8665bf */ if ((fC||fZ)) goto L_008665bf;
L_008665cb:; BB(0x008665cb);
    /* 008665cb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008665cc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008665cd: cmp byte ptr [ecx - 1], 0 */ {  u32 a = R8((u32)(r_ecx+0xffffffffu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008665d1: jne 0x866520 */ if (!fZ) goto L_00866520;
L_008665d7:; BB(0x008665d7);
    /* 008665d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008665d9: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008665da: mov eax, ecx */ r_eax = r_ecx;
L_008665dc:; BB(0x008665dc);
    /* 008665dc: or byte ptr [eax + 0xaf0841], 8 */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008665e3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008665e4: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008665e9: jb 0x8665dc */ if (fC) goto L_008665dc;
L_008665eb:; BB(0x008665eb);
    /* 008665eb: mov eax, esi */ r_eax = r_esi;
    /* 008665ed: call 0x866254 */ r_esp -= 4; W32(r_esp, 0x8665f2u); f_00866254();
    /* 008665f2: mov dword ptr [0xaf0834], eax */ W32((u32)(0xaf0834u), r_eax);
    /* 008665f7: mov dword ptr [0xaf083c], ecx */ W32((u32)(0xaf083cu), r_ecx);
    /* 008665fd: jmp 0x866605 */ goto L_00866605;
L_008665ff:; BB(0x008665ff);
    /* 008665ff: mov dword ptr [0xaf083c], ebx */ W32((u32)(0xaf083cu), r_ebx);
L_00866605:; BB(0x00866605);
    /* 00866605: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866607: mov edi, 0xaf0950 */ r_edi = 0xaf0950u;
    /* 0086660c: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 0086660d: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 0086660e: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 0086660f: jmp 0x86661e */ goto L_0086661e;
L_00866611:; BB(0x00866611);
    /* 00866611: cmp dword ptr [0xae7e60], ebx */ {  u32 a = R32((u32)(0xae7e60u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866617: je 0x866627 */ if (fZ) goto L_00866627;
L_00866619:; BB(0x00866619);
    /* 00866619: call 0x866283 */ r_esp -= 4; W32(r_esp, 0x86661eu); f_00866283();
L_0086661e:; BB(0x0086661e);
    /* 0086661e: call 0x8662ac */ r_esp -= 4; W32(r_esp, 0x866623u); f_008662ac();
    /* 00866623: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866625: jmp 0x86662a */ goto L_0086662a;
L_00866627:; BB(0x00866627);
    /* 00866627: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0086662a:; BB(0x0086662a);
    /* 0086662a: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086662d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086662e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086662f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866630: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x866635u); f_0085e419();
    /* 00866635: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866636: ret  */ FN_RET(0x008664a7); r_esp += 4; return;
}

