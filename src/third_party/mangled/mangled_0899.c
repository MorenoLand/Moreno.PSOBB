#include "protos.h"

void f_008992a2(void) /* ?BltTriangle2D@CD3DXBlt@@IAEJXZ */
{
    FN_ENTER(0x008992a2);
    /* 008992a2: mov eax, 0x8cb707 */ r_eax = 0x8cb707u;
    /* 008992a7: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x8992acu); f_008cb064();
    /* 008992ac: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008992af: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008992b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008992b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008992b2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008992b4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008992b6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008992b8: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 008992bb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008992bc: cmp dword ptr [edx + 0x1060], edi */ {  u32 a = R32((u32)(r_edx+0x1060u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008992c2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008992c5: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008992c8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008992cb: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 008992ce: jne 0x899630 */ if (!fZ) goto L_00899630;
L_008992d4:; BB(0x008992d4);
    /* 008992d4: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 008992d6: cmp dword ptr [esi + 0x1060], edi */ {  u32 a = R32((u32)(r_esi+0x1060u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008992dc: jne 0x899630 */ if (!fZ) goto L_00899630;
L_008992e2:; BB(0x008992e2);
    /* 008992e2: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008992e5: mov ecx, eax */ r_ecx = r_eax;
    /* 008992e7: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008992ea: not ecx */ r_ecx = ~r_ecx;
    /* 008992ec: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008992ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008992ef: push dword ptr [edx + 0x1058] */ { u32 v = R32((u32)(r_edx+0x1058u)); r_esp -= 4; W32(r_esp, v); }
    /* 008992f5: shr eax, 0x11 */ { u32 c = (17u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008992f8: push dword ptr [esi + 0x1058] */ { u32 v = R32((u32)(r_esi+0x1058u)); r_esp -= 4; W32(r_esp, v); }
    /* 008992fe: not eax */ r_eax = ~r_eax;
    /* 00899300: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00899302: mov edi, eax */ r_edi = r_eax;
    /* 00899304: call 0x895ec7 */ r_esp -= 4; W32(r_esp, 0x899309u); f_00895ec7();
    /* 00899309: mov esi, eax */ r_esi = r_eax;
    /* 0089930b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0089930e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899310: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 00899313: je 0x8995f7 */ if (fZ) goto L_008995f7;
L_00899319:; BB(0x00899319);
    /* 00899319: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0089931c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089931d: push dword ptr [eax + 0x105c] */ { u32 v = R32((u32)(r_eax+0x105cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00899323: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00899325: push dword ptr [eax + 0x105c] */ { u32 v = R32((u32)(r_eax+0x105cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089932b: call 0x895ec7 */ r_esp -= 4; W32(r_esp, 0x899330u); f_00895ec7();
    /* 00899330: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00899333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899335: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00899338: je 0x8995f7 */ if (fZ) goto L_008995f7;
L_0089933e:; BB(0x0089933e);
    /* 0089933e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00899340: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899342: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00899345: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00899348: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0089934a: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089934c: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0089934f: mov esi, dword ptr [eax + 0x105c] */ r_esi = R32((u32)(r_eax+0x105cu));
    /* 00899355: lea eax, [esi + esi*2] */ r_eax = (u32)(r_esi+r_esi*2);
    /* 00899358: lea eax, [eax*4 + 4] */ r_eax = (u32)(r_eax*4+0x4u);
    /* 0089935f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899360: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00899363: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x899368u); f_008581c5();
    /* 00899368: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899369: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0089936c: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00899370: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899372: je 0x899397 */ if (fZ) goto L_00899397;
L_00899374:; BB(0x00899374);
    /* 00899374: push 0x895ebe */ { u32 v = 0x895ebeu; r_esp -= 4; W32(r_esp, v); }
    /* 00899379: push 0x895eb1 */ { u32 v = 0x895eb1u; r_esp -= 4; W32(r_esp, v); }
    /* 0089937e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089937f: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00899381: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899384: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00899386: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899387: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0089938a: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x89938fu); f_00858736();
    /* 0089938f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 00899392: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00899395: jmp 0x89939e */ goto L_0089939e;
L_00899397:; BB(0x00899397);
    /* 00899397: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089939b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_0089939e:; BB(0x0089939e);
    /* 0089939e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008993a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008993a4: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 008993a7: je 0x8995f0 */ if (fZ) goto L_008995f0;
L_008993ad:; BB(0x008993ad);
    /* 008993ad: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008993af: mov esi, dword ptr [eax + 0x1058] */ r_esi = R32((u32)(r_eax+0x1058u));
    /* 008993b5: mov eax, esi */ r_eax = r_esi;
    /* 008993b7: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008993ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008993bb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8993c0u); f_008581c5();
    /* 008993c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008993c1: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 008993c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008993c6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 008993cd: je 0x8993e5 */ if (fZ) goto L_008993e5;
L_008993cf:; BB(0x008993cf);
    /* 008993cf: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 008993d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008993d5: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008993d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008993d8: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x8993ddu); f_0088fd17();
    /* 008993dd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 008993e0: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008993e3: jmp 0x8993ec */ goto L_008993ec;
L_008993e5:; BB(0x008993e5);
    /* 008993e5: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008993e9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_008993ec:; BB(0x008993ec);
    /* 008993ec: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008993f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008993f2: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 008993f5: je 0x8995f0 */ if (fZ) goto L_008995f0;
L_008993fb:; BB(0x008993fb);
    /* 008993fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008993fe: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899401: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899403: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00899406: jae 0x89942c */ if (!fC) goto L_0089942c;
L_00899408:; BB(0x00899408);
    /* 00899408: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0089940a: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089940c: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089940f: jmp 0x899422 */ goto L_00899422;
L_00899411:; BB(0x00899411);
    /* 00899411: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00899413: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00899416: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00899419: lea eax, [esi + eax*4 + 8] */ r_eax = (u32)(r_esi+r_eax*4+0x8u);
    /* 0089941d: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089941f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00899422:; BB(0x00899422);
    /* 00899422: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899424: jb 0x899411 */ if (fC) goto L_00899411;
L_00899426:; BB(0x00899426);
    /* 00899426: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899428: mov ecx, edx */ r_ecx = r_edx;
    /* 0089942a: jb 0x899408 */ if (fC) goto L_00899408;
L_0089942c:; BB(0x0089942c);
    /* 0089942c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0089942f: and dword ptr [ebp - 0x28], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00899433: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899435: jae 0x8995ec */ if (!fC) goto L_008995ec;
L_0089943b:; BB(0x0089943b);
    /* 0089943b: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0089943d: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089943f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899442: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00899445: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00899448: jmp 0x8994e0 */ goto L_008994e0;
L_0089944d:; BB(0x0089944d);
    /* 0089944d: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0089944f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00899452: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 00899455: lea edi, [ecx + eax*4] */ r_edi = (u32)(r_ecx+r_eax*4);
    /* 00899458: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089945b: jne 0x8994da */ if (!fZ) goto L_008994da;
L_0089945d:; BB(0x0089945d);
    /* 0089945d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00899460: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899462: je 0x899473 */ if (fZ) goto L_00899473;
L_00899464:; BB(0x00899464);
    /* 00899464: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00899466: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 00899468: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089946b: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 0089946e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00899471: jmp 0x8994b9 */ goto L_008994b9;
L_00899473:; BB(0x00899473);
    /* 00899473: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00899476: mov esi, dword ptr [eax + 0x1058] */ r_esi = R32((u32)(r_eax+0x1058u));
    /* 0089947c: mov eax, esi */ r_eax = r_esi;
    /* 0089947e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00899481: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00899482: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x899487u); f_008581c5();
    /* 00899487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899488: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0089948b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089948d: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00899494: je 0x8994a9 */ if (fZ) goto L_008994a9;
L_00899496:; BB(0x00899496);
    /* 00899496: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 0089949b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089949c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089949e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089949f: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x8994a4u); f_0088fd17();
    /* 008994a4: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 008994a7: jmp 0x8994ab */ goto L_008994ab;
L_008994a9:; BB(0x008994a9);
    /* 008994a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008994ab:; BB(0x008994ab);
    /* 008994ab: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008994af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008994b1: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008994b3: je 0x8995f0 */ if (fZ) goto L_008995f0;
L_008994b9:; BB(0x008994b9);
    /* 008994b9: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008994bc: mov ecx, dword ptr [eax + 0x1058] */ r_ecx = R32((u32)(r_eax+0x1058u));
    /* 008994c2: mov edi, dword ptr [edi] */ r_edi = R32((u32)(r_edi));
    /* 008994c4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 008994c7: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008994ca: mov edx, ecx */ r_edx = r_ecx;
    /* 008994cc: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008994cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008994d1: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008994d3: mov ecx, edx */ r_ecx = r_edx;
    /* 008994d5: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008994d8: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_008994da:; BB(0x008994da);
    /* 008994da: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 008994dd: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008994e0:; BB(0x008994e0);
    /* 008994e0: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008994e2: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008994e5: jb 0x89944d */ if (fC) goto L_0089944d;
L_008994eb:; BB(0x008994eb);
    /* 008994eb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 008994ee: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008994f0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008994f2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008994f3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008994f5: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008994f8: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8994fbu); call_ind(t); }
    /* 008994fb: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 008994fe: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899501: cmp eax, dword ptr [ebp - 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899504: jae 0x8995a5 */ if (!fC) goto L_008995a5;
L_0089950a:; BB(0x0089950a);
    /* 0089950a: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
L_0089950d:; BB(0x0089950d);
    /* 0089950d: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0089950f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00899512: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00899514: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899516: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00899519: jae 0x899597 */ if (!fC) goto L_00899597;
L_0089951b:; BB(0x0089951b);
    /* 0089951b: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089951e: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00899521: jmp 0x899526 */ goto L_00899526;
L_00899523:; BB(0x00899523);
    /* 00899523: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
L_00899526:; BB(0x00899526);
    /* 00899526: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00899528: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089952b: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 0089952e: mov ecx, dword ptr [ecx + eax*4] */ r_ecx = R32((u32)(r_ecx+r_eax*4));
    /* 00899531: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00899534: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899536: jae 0x89958e */ if (!fC) goto L_0089958e;
L_00899538:; BB(0x00899538);
    /* 00899538: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089953b: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089953e: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00899541: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00899543: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00899546: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00899548: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089954a: fmul dword ptr [edx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffff8u));
    /* 0089954d: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 0089954f: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00899551: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00899553: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00899556: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00899558: lea esi, [esi + ecx + 4] */ r_esi = (u32)(r_esi+r_ecx+0x4u);
    /* 0089955c: fmul dword ptr [edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xfffffffcu));
    /* 0089955f: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00899561: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00899563: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00899565: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00899568: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089956a: lea esi, [esi + ecx + 8] */ r_esi = (u32)(r_esi+r_ecx+0x8u);
    /* 0089956e: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00899570: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00899572: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00899574: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 00899576: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00899579: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0089957c: lea esi, [esi + ecx + 0xc] */ r_esi = (u32)(r_esi+r_ecx+0xcu);
    /* 00899580: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00899583: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899585: fadd dword ptr [esi] */ ST(0) = ST(0) + R_F32((u32)(r_esi));
    /* 00899587: fstp dword ptr [esi] */ W_F32((u32)(r_esi), ST(0)); FPOP();
    /* 00899589: jb 0x899538 */ if (fC) goto L_00899538;
L_0089958b:; BB(0x0089958b);
    /* 0089958b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_0089958e:; BB(0x0089958e);
    /* 0089958e: add dword ptr [ebp - 0x10], 8 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00899592: cmp dword ptr [ebp - 0x10], esi */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899595: jb 0x899523 */ if (fC) goto L_00899523;
L_00899597:; BB(0x00899597);
    /* 00899597: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089959a: cmp edi, dword ptr [ebp - 0x2c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffd4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089959d: mov eax, edi */ r_eax = r_edi;
    /* 0089959f: jb 0x89950d */ if (fC) goto L_0089950d;
L_008995a5:; BB(0x008995a5);
    /* 008995a5: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 008995a8: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008995aa: jae 0x8995de */ if (!fC) goto L_008995de;
L_008995ac:; BB(0x008995ac);
    /* 008995ac: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008995ae: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008995b1: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 008995b4: lea esi, [ecx + eax*4] */ r_esi = (u32)(r_ecx+r_eax*4);
    /* 008995b7: dec dword ptr [esi + 8] */ { u32 ad = (u32)(r_esi+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008995ba: jne 0x8995d3 */ if (!fZ) goto L_008995d3;
L_008995bc:; BB(0x008995bc);
    /* 008995bc: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 008995be: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 008995c1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008995c3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008995c5: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 008995c7: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x8995cau); call_ind(t); }
    /* 008995ca: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008995cd: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008995d0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_008995d3:; BB(0x008995d3);
    /* 008995d3: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008995d6: cmp edi, dword ptr [ebp - 0x1c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008995d9: jb 0x8995ac */ if (fC) goto L_008995ac;
L_008995db:; BB(0x008995db);
    /* 008995db: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_008995de:; BB(0x008995de);
    /* 008995de: inc dword ptr [ebp - 0x28] */ { u32 ad = (u32)(r_ebp+0xffffffd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008995e1: cmp esi, dword ptr [ebp - 0x44] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008995e4: mov eax, esi */ r_eax = r_esi;
    /* 008995e6: jb 0x89943b */ if (fC) goto L_0089943b;
L_008995ec:; BB(0x008995ec);
    /* 008995ec: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008995ee: jmp 0x8995fc */ goto L_008995fc;
L_008995f0:; BB(0x008995f0);
    /* 008995f0: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
    /* 008995f5: jmp 0x8995fc */ goto L_008995fc;
L_008995f7:; BB(0x008995f7);
    /* 008995f7: mov esi, 0x80004005 */ r_esi = 0x80004005u;
L_008995fc:; BB(0x008995fc);
    /* 008995fc: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 008995ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00899601: je 0x89960a */ if (fZ) goto L_0089960a;
L_00899603:; BB(0x00899603);
    /* 00899603: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00899605: call 0x896184 */ r_esp -= 4; W32(r_esp, 0x89960au); f_00896184();
L_0089960a:; BB(0x0089960a);
    /* 0089960a: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089960d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899612u); f_00857e98();
    /* 00899612: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899615: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89961au); f_00857e98();
    /* 0089961a: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089961d: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899622u); f_00857e98();
    /* 00899622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00899624: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899629u); f_00857e98();
    /* 00899629: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0089962c: mov eax, esi */ r_eax = r_esi;
    /* 0089962e: jmp 0x899635 */ goto L_00899635;
L_00899630:; BB(0x00899630);
    /* 00899630: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_00899635:; BB(0x00899635);
    /* 00899635: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899638: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899639: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089963a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089963b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00899642: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00899643: ret  */ FN_RET(0x008992a2); r_esp += 4; return;
}

void f_0089975e(void) /* ??0CRect@@QAE@XZ */
{
    FN_ENTER(0x0089975e);
    /* 0089975e: mov eax, ecx */ r_eax = r_ecx;
    /* 00899760: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00899762: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00899764: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00899767: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 0089976a: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0089976d: ret  */ FN_RET(0x0089975e); r_esp += 4; return;
}

void f_00899f6b(void) /* ??1CD3DXCodec@@UAE@XZ */
{
    FN_ENTER(0x00899f6b);
    /* 00899f6b: push dword ptr [ecx + 0x104c] */ { u32 v = R32((u32)(r_ecx+0x104cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00899f71: mov dword ptr [ecx], 0x99ba6c */ W32((u32)(r_ecx), 0x99ba6cu);
    /* 00899f77: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899f7cu); f_00857e98();
    /* 00899f7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00899f7d: ret  */ FN_RET(0x00899f6b); r_esp += 4; return;
}

