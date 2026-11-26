#include "protos.h"

void f_0089a278(void) /* ??1CD3DXCodecDXT@@UAE@XZ */
{
    FN_ENTER(0x0089a278);
    /* 0089a278: mov eax, 0x8cb719 */ r_eax = 0x8cb719u;
    /* 0089a27d: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89a282u); f_008cb064();
    /* 0089a282: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a283: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a284: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a285: mov esi, ecx */ r_esi = r_ecx;
    /* 0089a287: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0089a28a: mov dword ptr [esi], 0x99ba80 */ W32((u32)(r_esi), 0x99ba80u);
    /* 0089a290: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a294: cmp dword ptr [esi + 0x10bc], 0 */ {  u32 a = R32((u32)(r_esi+0x10bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a29b: je 0x89a2e8 */ if (fZ) goto L_0089a2e8;
L_0089a29d:; BB(0x0089a29d);
    /* 0089a29d: mov eax, dword ptr [esi + 0x10c0] */ r_eax = R32((u32)(r_esi+0x10c0u));
    /* 0089a2a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a2a5: je 0x89a2e8 */ if (fZ) goto L_0089a2e8;
L_0089a2a7:; BB(0x0089a2a7);
    /* 0089a2a7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a2a8: mov ebx, dword ptr [esi + 0x109c] */ r_ebx = R32((u32)(r_esi+0x109cu));
    /* 0089a2ae: cmp ebx, dword ptr [esi + 0x10a0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x10a0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a2b4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089a2b7: jae 0x89a2e7 */ if (!fC) goto L_0089a2e7;
L_0089a2b9:; BB(0x0089a2b9);
    /* 0089a2b9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0089a2ba:; BB(0x0089a2ba);
    /* 0089a2ba: mov edi, dword ptr [esi + 0x1090] */ r_edi = R32((u32)(r_esi+0x1090u));
    /* 0089a2c0: jmp 0x89a2d5 */ goto L_0089a2d5;
L_0089a2c2:; BB(0x0089a2c2);
    /* 0089a2c2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089a2c5: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a2c8: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89a2cdu); f_00857e98();
    /* 0089a2cd: add dword ptr [ebp - 0x10], 8 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a2d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a2d2: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0089a2d5:; BB(0x0089a2d5);
    /* 0089a2d5: cmp edi, dword ptr [esi + 0x1098] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x1098u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a2db: jb 0x89a2c2 */ if (fC) goto L_0089a2c2;
L_0089a2dd:; BB(0x0089a2dd);
    /* 0089a2dd: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089a2de: cmp ebx, dword ptr [esi + 0x10a0] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x10a0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a2e4: jb 0x89a2ba */ if (fC) goto L_0089a2ba;
L_0089a2e6:; BB(0x0089a2e6);
    /* 0089a2e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0089a2e7:; BB(0x0089a2e7);
    /* 0089a2e7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089a2e8:; BB(0x0089a2e8);
    /* 0089a2e8: push dword ptr [esi + 0x10b8] */ { u32 v = R32((u32)(r_esi+0x10b8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a2ee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89a2f3u); f_00857e98();
    /* 0089a2f3: push dword ptr [esi + 0x10c0] */ { u32 v = R32((u32)(r_esi+0x10c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a2f9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89a2feu); f_00857e98();
    /* 0089a2fe: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a302: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a303: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a304: mov ecx, esi */ r_ecx = r_esi;
    /* 0089a306: call 0x899f6b */ r_esp -= 4; W32(r_esp, 0x89a30bu); f_00899f6b();
    /* 0089a30b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089a30e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089a30f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089a316: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089a317: ret  */ FN_RET(0x0089a278); r_esp += 4; return;
}

void f_0089a318(void) /* ?Encode@CD3DXCodecDXT@@UAEXIIPAUD3DXCOLOR@@@Z */
{
    FN_ENTER(0x0089a318);
    /* 0089a318: mov eax, 0x8cb72d */ r_eax = 0x8cb72du;
    /* 0089a31d: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89a322u); f_008cb064();
    /* 0089a322: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089a325: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a326: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a327: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0089a32a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0089a32c: add esi, dword ptr [ebx + 0x1034] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1034u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a332: mov eax, dword ptr [ebx + 0x1040] */ r_eax = R32((u32)(r_ebx+0x1040u));
    /* 0089a338: add dword ptr [ebp + 0xc], eax */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a33b: cmp dword ptr [ebx + 0x10c0], 0 */ {  u32 a = R32((u32)(r_ebx+0x10c0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a342: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a343: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0089a346: jne 0x89a38f */ if (!fZ) goto L_0089a38f;
L_0089a348:; BB(0x0089a348);
    /* 0089a348: mov eax, dword ptr [ebx + 0x10a8] */ r_eax = R32((u32)(r_ebx+0x10a8u));
    /* 0089a34e: imul eax, dword ptr [ebx + 0x10ac] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebx+0x10acu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a355: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089a358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a359: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89a35eu); f_008581c5();
    /* 0089a35e: mov edi, eax */ r_edi = r_eax;
    /* 0089a360: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089a362: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a363: mov dword ptr [ebx + 0x10c0], edi */ W32((u32)(r_ebx+0x10c0u), r_edi);
    /* 0089a369: je 0x89a701 */ if (fZ) goto L_0089a701;
L_0089a36f:; BB(0x0089a36f);
    /* 0089a36f: mov ecx, dword ptr [ebx + 0x10a8] */ r_ecx = R32((u32)(r_ebx+0x10a8u));
    /* 0089a375: imul ecx, dword ptr [ebx + 0x10ac] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebx+0x10acu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a37c: shl ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089a37f: mov edx, ecx */ r_edx = r_ecx;
    /* 0089a381: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a384: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089a386: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089a388: mov ecx, edx */ r_ecx = r_edx;
    /* 0089a38a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a38d: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0089a38f:; BB(0x0089a38f);
    /* 0089a38f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0089a392: sub eax, dword ptr [ebx + 0x109c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x109cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089a398: mov ecx, esi */ r_ecx = r_esi;
    /* 0089a39a: imul eax, dword ptr [ebx + 0x10a8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebx+0x10a8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a3a1: sub ecx, dword ptr [ebx + 0x1090] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x1090u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a3a7: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a3aa: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a3ac: mov ecx, dword ptr [ebx + 0x10c0] */ r_ecx = R32((u32)(r_ebx+0x10c0u));
    /* 0089a3b2: lea edi, [ecx + eax*8] */ r_edi = (u32)(r_ecx+r_eax*8);
    /* 0089a3b5: cmp dword ptr [edi + 4], 0 */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a3b9: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0089a3bc: jne 0x89a40e */ if (!fZ) goto L_0089a40e;
L_0089a3be:; BB(0x0089a3be);
    /* 0089a3be: mov eax, dword ptr [ebx + 0x10a4] */ r_eax = R32((u32)(r_ebx+0x10a4u));
    /* 0089a3c4: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089a3c7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0089a3ca: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089a3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a3ce: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89a3d3u); f_008581c5();
    /* 0089a3d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a3d4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089a3d7: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a3db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a3dd: je 0x89a3f4 */ if (fZ) goto L_0089a3f4;
L_0089a3df:; BB(0x0089a3df);
    /* 0089a3df: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a3e4: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a3e7: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a3e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a3ea: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89a3efu); f_0088fd17();
    /* 0089a3ef: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089a3f2: jmp 0x89a3f6 */ goto L_0089a3f6;
L_0089a3f4:; BB(0x0089a3f4);
    /* 0089a3f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0089a3f6:; BB(0x0089a3f6);
    /* 0089a3f6: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a3fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089a3fc: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 0089a3ff: je 0x89a701 */ if (fZ) goto L_0089a701;
L_0089a405:; BB(0x0089a405);
    /* 0089a405: and dword ptr [edi], 0 */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a408: inc dword ptr [ebx + 0x10bc] */ { u32 ad = (u32)(r_ebx+0x10bcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0089a40e:; BB(0x0089a40e);
    /* 0089a40e: cmp dword ptr [edi], 0 */ {  u32 a = R32((u32)(r_edi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a411: jne 0x89a544 */ if (!fZ) goto L_0089a544;
L_0089a417:; BB(0x0089a417);
    /* 0089a417: mov eax, dword ptr [ebx + 0x103c] */ r_eax = R32((u32)(r_ebx+0x103cu));
    /* 0089a41d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a41f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0089a420: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a422: mov ecx, edx */ r_ecx = r_edx;
    /* 0089a424: jb 0x89a428 */ if (fC) goto L_0089a428;
L_0089a426:; BB(0x0089a426);
    /* 0089a426: mov ecx, eax */ r_ecx = r_eax;
L_0089a428:; BB(0x0089a428);
    /* 0089a428: mov eax, esi */ r_eax = r_esi;
    /* 0089a42a: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089a42d: cmp eax, dword ptr [ebx + 0x1034] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1034u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a433: jb 0x89a4dc */ if (fC) goto L_0089a4dc;
L_0089a439:; BB(0x0089a439);
    /* 0089a439: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a43c: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089a43e: ja 0x89a4dc */ if ((!fC&&!fZ)) goto L_0089a4dc;
L_0089a444:; BB(0x0089a444);
    /* 0089a444: mov eax, dword ptr [ebx + 0x1038] */ r_eax = R32((u32)(r_ebx+0x1038u));
    /* 0089a44a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a44c: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0089a44f: jb 0x89a454 */ if (fC) goto L_0089a454;
L_0089a451:; BB(0x0089a451);
    /* 0089a451: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0089a454:; BB(0x0089a454);
    /* 0089a454: mov eax, dword ptr [ebx + 0x108c] */ r_eax = R32((u32)(r_ebx+0x108cu));
    /* 0089a45a: cmp eax, dword ptr [ebx + 0x1030] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1030u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a460: jae 0x89a495 */ if (!fC) goto L_0089a495;
L_0089a462:; BB(0x0089a462);
    /* 0089a462: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0089a465: imul eax, dword ptr [ebx + 0x1080] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebx+0x1080u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a46c: mov ecx, esi */ r_ecx = r_esi;
    /* 0089a46e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a471: imul ecx, dword ptr [ebx + 0x1050] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebx+0x1050u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a478: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a47a: mov ecx, dword ptr [ebx + 0x1054] */ r_ecx = R32((u32)(r_ebx+0x1054u));
    /* 0089a480: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a484: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a486: add eax, dword ptr [ebx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a489: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a48a: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a48d: call dword ptr [ebx + 0x1084] */ { u32 t = R32((u32)(r_ebx+0x1084u)); r_esp -= 4; W32(r_esp, 0x89a493u); call_ind(t); }
    /* 0089a493: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a494: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089a495:; BB(0x0089a495);
    /* 0089a495: mov eax, dword ptr [ebx + 0x1094] */ r_eax = R32((u32)(r_ebx+0x1094u));
    /* 0089a49b: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089a49e: jbe 0x89a544 */ if ((fC||fZ)) goto L_0089a544;
L_0089a4a4:; BB(0x0089a4a4);
    /* 0089a4a4: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a4a7: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0089a4aa: imul eax, dword ptr [ebx + 0x1080] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebx+0x1080u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a4b1: mov ecx, esi */ r_ecx = r_esi;
    /* 0089a4b3: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a4b6: imul ecx, dword ptr [ebx + 0x1050] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebx+0x1050u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a4bd: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a4bf: mov ecx, dword ptr [ebx + 0x1054] */ r_ecx = R32((u32)(r_ebx+0x1054u));
    /* 0089a4c5: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a4c9: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a4cb: add eax, dword ptr [ebx + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a4ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a4cf: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a4d2: call dword ptr [ebx + 0x1084] */ { u32 t = R32((u32)(r_ebx+0x1084u)); r_esp -= 4; W32(r_esp, 0x89a4d8u); call_ind(t); }
    /* 0089a4d8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a4d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a4da: jmp 0x89a544 */ goto L_0089a544;
L_0089a4dc:; BB(0x0089a4dc);
    /* 0089a4dc: mov eax, dword ptr [ebx + 0x108c] */ r_eax = R32((u32)(r_ebx+0x108cu));
    /* 0089a4e2: mov edi, esi */ r_edi = r_esi;
    /* 0089a4e4: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0089a4e7: imul edi, dword ptr [ebx + 0x1050] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebx+0x1050u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a4ee: mov ecx, eax */ r_ecx = r_eax;
    /* 0089a4f0: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a4f3: imul ecx, dword ptr [ebx + 0x1080] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebx+0x1080u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a4fa: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089a4fc: mov ecx, dword ptr [ebx + 0x1054] */ r_ecx = R32((u32)(r_ebx+0x1054u));
    /* 0089a502: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a506: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089a508: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089a50b: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0089a50e: add edi, dword ptr [ebx + 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089a511: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0089a514: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_0089a517:; BB(0x0089a517);
    /* 0089a517: cmp eax, dword ptr [ebx + 0x1094] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1094u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a51d: jae 0x89a541 */ if (!fC) goto L_0089a541;
L_0089a51f:; BB(0x0089a51f);
    /* 0089a51f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a520: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a523: call dword ptr [ebx + 0x1084] */ { u32 t = R32((u32)(r_ebx+0x1084u)); r_esp -= 4; W32(r_esp, 0x89a529u); call_ind(t); }
    /* 0089a529: add edi, dword ptr [ebx + 0x1080] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x1080u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089a52f: add dword ptr [ebp - 0x14], 0x100 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a536: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a53a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089a53d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a53e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a53f: jmp 0x89a517 */ goto L_0089a517;
L_0089a541:; BB(0x0089a541);
    /* 0089a541: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
L_0089a544:; BB(0x0089a544);
    /* 0089a544: cmp dword ptr [ebx + 0x1048], 0 */ {  u32 a = R32((u32)(r_ebx+0x1048u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a54b: je 0x89a55a */ if (fZ) goto L_0089a55a;
L_0089a54d:; BB(0x0089a54d);
    /* 0089a54d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a550: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0089a552: call 0x899f81 */ r_esp -= 4; W32(r_esp, 0x89a557u); f_00899f81();
    /* 0089a557: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
L_0089a55a:; BB(0x0089a55a);
    /* 0089a55a: mov eax, dword ptr [ebx + 0x1030] */ r_eax = R32((u32)(r_ebx+0x1030u));
    /* 0089a560: sub eax, dword ptr [ebx + 0x108c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x108cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089a566: mov edx, dword ptr [ebx + 0x1058] */ r_edx = R32((u32)(r_ebx+0x1058u));
    /* 0089a56c: mov ecx, esi */ r_ecx = r_esi;
    /* 0089a56e: sub ecx, dword ptr [ebx + 0x1090] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x1090u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a574: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089a576: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a579: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a57b: jae 0x89a5ad */ if (!fC) goto L_0089a5ad;
L_0089a57d:; BB(0x0089a57d);
    /* 0089a57d: mov edi, eax */ r_edi = r_eax;
    /* 0089a57f: and edi, 0xfffffffc */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089a582: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0089a584: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0089a587: mov esi, eax */ r_esi = r_eax;
    /* 0089a589: and esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089a58c: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0089a58e: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089a591: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 0089a594: add edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089a597: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0089a59a: add dword ptr [ebp + 0x10], 0x10 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a59e: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a59f: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a5a0: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a5a1: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a5a2: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a5a4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a5a5: jb 0x89a57d */ if (fC) goto L_0089a57d;
L_0089a5a7:; BB(0x0089a5a7);
    /* 0089a5a7: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0089a5aa: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
L_0089a5ad:; BB(0x0089a5ad);
    /* 0089a5ad: mov eax, esi */ r_eax = r_esi;
    /* 0089a5af: sub eax, dword ptr [ebx + 0x1090] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1090u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0089a5b5: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089a5b8: cmp dword ptr [ebx + 0x1074], 0 */ {  u32 a = R32((u32)(r_ebx+0x1074u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a5bf: jne 0x89a5cc */ if (!fZ) goto L_0089a5cc;
L_0089a5c1:; BB(0x0089a5c1);
    /* 0089a5c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 0089a5c3: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0089a5c4: mov ecx, eax */ r_ecx = r_eax;
    /* 0089a5c6: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0089a5c8: or dword ptr [edi], edx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a5ca: jmp 0x89a5f0 */ goto L_0089a5f0;
L_0089a5cc:; BB(0x0089a5cc);
    /* 0089a5cc: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0089a5d0:; BB(0x0089a5d0);
    /* 0089a5d0: mov ecx, dword ptr [ebx + 0x107c] */ r_ecx = R32((u32)(r_ebx+0x107cu));
    /* 0089a5d6: and ecx, dword ptr [ebp + 0x10] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a5d9: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a5db: jne 0x89a5e7 */ if (!fZ) goto L_0089a5e7;
L_0089a5dd:; BB(0x0089a5dd);
    /* 0089a5dd: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089a5e0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 0089a5e2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0089a5e3: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0089a5e5: or dword ptr [edi], edx */ { u32 ad = (u32)(r_edi);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0089a5e7:; BB(0x0089a5e7);
    /* 0089a5e7: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a5ea: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a5ee: jb 0x89a5d0 */ if (fC) goto L_0089a5d0;
L_0089a5f0:; BB(0x0089a5f0);
    /* 0089a5f0: cmp dword ptr [edi], 0xf */ {  u32 a = R32((u32)(r_edi)); u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089a5f3: jne 0x89a701 */ if (!fZ) goto L_0089a701;
L_0089a5f9:; BB(0x0089a5f9);
    /* 0089a5f9: mov eax, dword ptr [ebx + 0x108c] */ r_eax = R32((u32)(r_ebx+0x108cu));
    /* 0089a5ff: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0089a602: imul esi, dword ptr [ebx + 0x1050] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_ebx+0x1050u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a609: mov ecx, eax */ r_ecx = r_eax;
    /* 0089a60b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089a60e: imul ecx, dword ptr [ebx + 0x1080] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebx+0x1080u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a615: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a617: mov ecx, dword ptr [ebx + 0x1054] */ r_ecx = R32((u32)(r_ebx+0x1054u));
    /* 0089a61d: imul ecx, dword ptr [ebp + 0xc] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a621: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a623: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 0089a626: add esi, dword ptr [ebx + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a629: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 0089a62c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0089a62f: jmp 0x89a6ac */ goto L_0089a6ac;
L_0089a631:; BB(0x0089a631);
    /* 0089a631: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089a633: cmp dword ptr [ebx + 0x1074], eax */ {  u32 a = R32((u32)(r_ebx+0x1074u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a639: je 0x89a689 */ if (fZ) goto L_0089a689;
L_0089a63b:; BB(0x0089a63b);
    /* 0089a63b: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_0089a63e:; BB(0x0089a63e);
    /* 0089a63e: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a642: mov ecx, eax */ r_ecx = r_eax;
    /* 0089a644: shl ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0089a647: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
L_0089a64a:; BB(0x0089a64a);
    /* 0089a64a: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0089a64d: mov edx, dword ptr [ebx + 0x107c] */ r_edx = R32((u32)(r_ebx+0x107cu));
    /* 0089a653: and esi, dword ptr [ebx + 0x1078] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1078u)); u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089a659: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0089a65b: lea esi, [esi + edx*4] */ r_esi = (u32)(r_esi+r_edx*4);
    /* 0089a65e: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a660: je 0x89a672 */ if (fZ) goto L_0089a672;
L_0089a662:; BB(0x0089a662);
    /* 0089a662: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0089a665: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089a668: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a66b: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a66c: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a66d: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a66e: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0089a66f: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
L_0089a672:; BB(0x0089a672);
    /* 0089a672: inc dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a675: add dword ptr [ebp + 8], 0x10 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a679: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a67a: cmp dword ptr [ebp + 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a67e: jb 0x89a64a */ if (fC) goto L_0089a64a;
L_0089a680:; BB(0x0089a680);
    /* 0089a680: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0089a683: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089a684: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a687: jb 0x89a63e */ if (fC) goto L_0089a63e;
L_0089a689:; BB(0x0089a689);
    /* 0089a689: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a68c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0089a68f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a690: call dword ptr [ebx + 0x1088] */ { u32 t = R32((u32)(r_ebx+0x1088u)); r_esp -= 4; W32(r_esp, 0x89a696u); call_ind(t); }
    /* 0089a696: add esi, dword ptr [ebx + 0x1080] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebx+0x1080u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089a69c: add dword ptr [ebp + 0xc], 0x100 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a6a3: add dword ptr [ebp - 0x18], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a6a7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089a6aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a6ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089a6ac:; BB(0x0089a6ac);
    /* 0089a6ac: cmp eax, dword ptr [ebx + 0x1094] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1094u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a6b2: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 0089a6b5: jb 0x89a631 */ if (fC) goto L_0089a631;
L_0089a6bb:; BB(0x0089a6bb);
    /* 0089a6bb: mov ecx, dword ptr [ebx + 0x10ac] */ r_ecx = R32((u32)(r_ebx+0x10acu));
    /* 0089a6c1: imul ecx, dword ptr [ebx + 0x10a8] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebx+0x10a8u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089a6c8: mov edx, dword ptr [ebx + 0x10c0] */ r_edx = R32((u32)(r_ebx+0x10c0u));
    /* 0089a6ce: lea eax, [edi + 8] */ r_eax = (u32)(r_edi+0x8u);
    /* 0089a6d1: lea ecx, [edx + ecx*8] */ r_ecx = (u32)(r_edx+r_ecx*8);
    /* 0089a6d4: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089a6d6: jae 0x89a6ee */ if (!fC) goto L_0089a6ee;
L_0089a6d8:; BB(0x0089a6d8);
    /* 0089a6d8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0089a6da: cmp dword ptr [eax], ecx */ {  u32 a = R32((u32)(r_eax)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a6dc: jne 0x89a6ee */ if (!fZ) goto L_0089a6ee;
L_0089a6de:; BB(0x0089a6de);
    /* 0089a6de: cmp dword ptr [edi + 0xc], ecx */ {  u32 a = R32((u32)(r_edi+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a6e1: jne 0x89a6ee */ if (!fZ) goto L_0089a6ee;
L_0089a6e3:; BB(0x0089a6e3);
    /* 0089a6e3: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0089a6e6: mov dword ptr [edi + 0xc], eax */ W32((u32)(r_edi+0xcu), r_eax);
    /* 0089a6e9: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0089a6ec: jmp 0x89a6fd */ goto L_0089a6fd;
L_0089a6ee:; BB(0x0089a6ee);
    /* 0089a6ee: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089a6f1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89a6f6u); f_00857e98();
    /* 0089a6f6: dec dword ptr [ebx + 0x10bc] */ { u32 ad = (u32)(r_ebx+0x10bcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0089a6fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089a6fd:; BB(0x0089a6fd);
    /* 0089a6fd: and dword ptr [edi + 4], 0 */ { u32 ad = (u32)(r_edi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0089a701:; BB(0x0089a701);
    /* 0089a701: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089a704: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089a705: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089a706: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089a707: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089a70e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089a70f: ret 0xc */ FN_RET(0x0089a318); r_esp += 16; return;
}

void f_0089a981(void) /* ??_GCWin32Heap@ATL@@UAEPAXI@Z_0 */
{
    FN_ENTER(0x0089a981);
    /* 0089a981: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a982: mov esi, ecx */ r_esi = r_ecx;
    /* 0089a984: call 0x899f6b */ r_esp -= 4; W32(r_esp, 0x89a989u); f_00899f6b();
    /* 0089a989: test byte ptr [esp + 8], 1 */ {  u32 a = R8((u32)(r_esp+0x8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089a98e: je 0x89a997 */ if (fZ) goto L_0089a997;
L_0089a990:; BB(0x0089a990);
    /* 0089a990: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a991: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89a996u); f_00857e98();
    /* 0089a996: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0089a997:; BB(0x0089a997);
    /* 0089a997: mov eax, esi */ r_eax = r_esi;
    /* 0089a999: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089a99a: ret 4 */ FN_RET(0x0089a981); r_esp += 8; return;
}

void f_0089a99d(void) /* ?ConvertFrom@CD3DXCodec@@QAEJPAV1@@Z */
{
    FN_ENTER(0x0089a99d);
    /* 0089a99d: mov eax, 0x8cb741 */ r_eax = 0x8cb741u;
    /* 0089a9a2: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x89a9a7u); f_008cb064();
    /* 0089a9a7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9a9: mov esi, ecx */ r_esi = r_ecx;
    /* 0089a9ab: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0089a9ae: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0089a9b1: cmp eax, dword ptr [ecx + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a9b4: je 0x89aa07 */ if (fZ) goto L_0089aa07;
L_0089a9b6:; BB(0x0089a9b6);
    /* 0089a9b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9b8: mov edi, dword ptr [esi + 0x1058] */ r_edi = R32((u32)(r_esi+0x1058u));
    /* 0089a9be: mov eax, edi */ r_eax = r_edi;
    /* 0089a9c0: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089a9c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9c4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89a9c9u); f_008581c5();
    /* 0089a9c9: mov ebx, eax */ r_ebx = r_eax;
    /* 0089a9cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089a9cc: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0089a9cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089a9d1: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089a9d3: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0089a9d6: je 0x89a9e8 */ if (fZ) goto L_0089a9e8;
L_0089a9d8:; BB(0x0089a9d8);
    /* 0089a9d8: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9dd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9de: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089a9e1: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89a9e6u); f_0088fd17();
    /* 0089a9e6: mov eax, ebx */ r_eax = r_ebx;
L_0089a9e8:; BB(0x0089a9e8);
    /* 0089a9e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089a9ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089a9eb: mov dword ptr [esi + 0x104c], eax */ W32((u32)(r_esi+0x104cu), r_eax);
    /* 0089a9f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0089a9f2: jne 0x89a9fb */ if (!fZ) goto L_0089a9fb;
L_0089a9f4:; BB(0x0089a9f4);
    /* 0089a9f4: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 0089a9f9: jmp 0x89aa09 */ goto L_0089aa09;
L_0089a9fb:; BB(0x0089a9fb);
    /* 0089a9fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0089a9fe: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 0089aa01: mov dword ptr [esi + 0x1048], eax */ W32((u32)(r_esi+0x1048u), r_eax);
L_0089aa07:; BB(0x0089aa07);
    /* 0089aa07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0089aa09:; BB(0x0089aa09);
    /* 0089aa09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089aa0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089aa0d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0089aa14: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089aa15: ret 4 */ FN_RET(0x0089a99d); r_esp += 8; return;
}

