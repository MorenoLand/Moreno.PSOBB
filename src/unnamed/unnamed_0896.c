#include "protos.h"

void f_00896644(void) /* sub_896644 */
{
    FN_ENTER(0x00896644);
    /* 00896644: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896645: mov ebp, esp */ r_ebp = r_esp;
    /* 00896647: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089664a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089664b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089664c: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 0089664e: mov edx, dword ptr [edi + 0x103c] */ r_edx = R32((u32)(r_edi+0x103cu));
    /* 00896654: or edx, dword ptr [edi + 0x1038] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x1038u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0089665a: mov eax, dword ptr [edi + 0x1030] */ r_eax = R32((u32)(r_edi+0x1030u));
    /* 00896660: mov esi, dword ptr [edi + 0x1034] */ r_esi = R32((u32)(r_edi+0x1034u));
    /* 00896666: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00896668: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0089666a: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0089666d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00896670: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00896673: je 0x89667f */ if (fZ) goto L_0089667f;
L_00896675:; BB(0x00896675);
    /* 00896675: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 0089667a: jmp 0x8967ce */ goto L_008967ce;
L_0089667f:; BB(0x0089667f);
    /* 0089667f: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00896682: mov edx, dword ptr [eax + 0x1030] */ r_edx = R32((u32)(r_eax+0x1030u));
    /* 00896688: mov ecx, dword ptr [eax + 0x1034] */ r_ecx = R32((u32)(r_eax+0x1034u));
    /* 0089668e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089668f: mov ebx, dword ptr [eax + 0x103c] */ r_ebx = R32((u32)(r_eax+0x103cu));
    /* 00896695: or ebx, dword ptr [eax + 0x1038] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1038u)); u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0089669b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0089669e: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008966a0: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008966a2: test bl, 3 */ {  u32 a = (u8)r_ebx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008966a5: je 0x8966b1 */ if (fZ) goto L_008966b1;
L_008966a7:; BB(0x008966a7);
    /* 008966a7: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008966ac: jmp 0x8967cd */ goto L_008967cd;
L_008966b1:; BB(0x008966b1);
    /* 008966b1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008966b4: cmp edx, 0x31545844 */ {  u32 a = r_edx; u32 b = 0x31545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008966ba: je 0x8966e0 */ if (fZ) goto L_008966e0;
L_008966bc:; BB(0x008966bc);
    /* 008966bc: cmp edx, 0x32545844 */ {  u32 a = r_edx; u32 b = 0x32545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008966c2: je 0x8966dc */ if (fZ) goto L_008966dc;
L_008966c4:; BB(0x008966c4);
    /* 008966c4: cmp edx, 0x33545844 */ {  u32 a = r_edx; u32 b = 0x33545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008966ca: je 0x8966dc */ if (fZ) goto L_008966dc;
L_008966cc:; BB(0x008966cc);
    /* 008966cc: cmp edx, 0x34545844 */ {  u32 a = r_edx; u32 b = 0x34545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008966d2: je 0x8966dc */ if (fZ) goto L_008966dc;
L_008966d4:; BB(0x008966d4);
    /* 008966d4: cmp edx, 0x35545844 */ {  u32 a = r_edx; u32 b = 0x35545844u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008966da: jne 0x8966a7 */ if (!fZ) goto L_008966a7;
L_008966dc:; BB(0x008966dc);
    /* 008966dc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008966de: jmp 0x8966e2 */ goto L_008966e2;
L_008966e0:; BB(0x008966e0);
    /* 008966e0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
L_008966e2:; BB(0x008966e2);
    /* 008966e2: mov edx, dword ptr [eax + 0x1058] */ r_edx = R32((u32)(r_eax+0x1058u));
    /* 008966e8: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008966eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008966ec: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008966ef: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008966f2: imul ecx, dword ptr [eax + 0x1050] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_eax+0x1050u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008966f9: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 008966fc: mov edx, dword ptr [eax + 0x1054] */ r_edx = R32((u32)(r_eax+0x1054u));
    /* 00896702: imul edx, dword ptr [eax + 0x1040] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_eax+0x1040u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896709: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089670b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089670e: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00896711: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896714: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00896716: add ecx, dword ptr [eax + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00896719: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0089671c: imul esi, dword ptr [edi + 0x1050] */ { i64 t = (i64)(i32)r_esi * (i64)(i32)R32((u32)(r_edi+0x1050u)); r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896723: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00896726: mov ecx, dword ptr [edi + 0x1054] */ r_ecx = R32((u32)(r_edi+0x1054u));
    /* 0089672c: imul ecx, dword ptr [edi + 0x1040] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_edi+0x1040u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896733: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896735: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00896738: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089673c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089673f: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896742: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896744: add esi, dword ptr [edi + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896747: cmp dword ptr [eax + 0x1060], 0 */ {  u32 a = R32((u32)(r_eax+0x1060u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089674e: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 00896751: jbe 0x8967cb */ if ((fC||fZ)) goto L_008967cb;
L_00896753:; BB(0x00896753);
    /* 00896753: mov eax, dword ptr [eax + 0x105c] */ r_eax = R32((u32)(r_eax+0x105cu));
    /* 00896759: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
L_0089675c:; BB(0x0089675c);
    /* 0089675c: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00896760: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00896762: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00896765: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00896768: jbe 0x8967a3 */ if ((fC||fZ)) goto L_008967a3;
L_0089676a:; BB(0x0089676a);
    /* 0089676a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0089676d: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00896770: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896774: mov eax, ecx */ r_eax = r_ecx;
    /* 00896776: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00896779: mov edi, ebx */ r_edi = r_ebx;
    /* 0089677b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0089677d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089677f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896782: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00896784: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00896787: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00896789: add ebx, dword ptr [eax + 0x1050] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089678f: mov ecx, dword ptr [ecx + 0x1050] */ r_ecx = R32((u32)(r_ecx+0x1050u));
    /* 00896795: mov eax, dword ptr [eax + 0x105c] */ r_eax = R32((u32)(r_eax+0x105cu));
    /* 0089679b: add dword ptr [ebp - 4], ecx */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089679e: cmp dword ptr [ebp - 8], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008967a1: jb 0x89676a */ if (fC) goto L_0089676a;
L_008967a3:; BB(0x008967a3);
    /* 008967a3: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 008967a6: mov esi, dword ptr [ecx + 0x1054] */ r_esi = R32((u32)(r_ecx+0x1054u));
    /* 008967ac: add dword ptr [ebp - 0xc], esi */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008967af: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008967b1: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 008967b4: add esi, dword ptr [edi + 0x1054] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x1054u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008967ba: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008967bd: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008967c0: cmp edi, dword ptr [ecx + 0x1060] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008967c6: mov dword ptr [ebp - 0x14], esi */ W32((u32)(r_ebp+0xffffffecu), r_esi);
    /* 008967c9: jb 0x89675c */ if (fC) goto L_0089675c;
L_008967cb:; BB(0x008967cb);
    /* 008967cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008967cd:; BB(0x008967cd);
    /* 008967cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008967ce:; BB(0x008967ce);
    /* 008967ce: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008967cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008967d0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008967d1: ret  */ FN_RET(0x00896644); r_esp += 4; return;
}

void f_008967d2(void) /* sub_8967D2 */
{
    FN_ENTER(0x008967d2);
    /* 008967d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008967d3: mov ebp, esp */ r_ebp = r_esp;
    /* 008967d5: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008967d8: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008967db: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 008967de: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008967df: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008967e2: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008967e5: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008967e7: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008967e9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 008967ec: jae 0x8968f3 */ if (!fC) goto L_008968f3;
L_008967f2:; BB(0x008967f2);
    /* 008967f2: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008967f5: lea eax, [edx + eax*4] */ r_eax = (u32)(r_edx+r_eax*4);
    /* 008967f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008967f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008967fa: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008967fd: mov esi, 0xffc03fc0 */ r_esi = 0xffc03fc0u;
    /* 00896802: mov eax, 0xff00ff */ r_eax = 0xff00ffu;
L_00896807:; BB(0x00896807);
    /* 00896807: cmp edx, dword ptr [ebp + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089680a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0089680d: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00896810: jae 0x8968d7 */ if (!fC) goto L_008968d7;
L_00896816:; BB(0x00896816);
    /* 00896816: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00896819: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089681b: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0089681c: shr ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0089681f: lea ecx, [edx + 4] */ r_ecx = (u32)(r_edx+0x4u);
    /* 00896822: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896823: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 00896826: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
L_00896829:; BB(0x00896829);
    /* 00896829: mov edx, dword ptr [ecx + edi] */ r_edx = R32((u32)(r_ecx+r_edi));
    /* 0089682c: mov edi, dword ptr [edi + ecx - 4] */ r_edi = R32((u32)(r_edi+r_ecx+0xfffffffcu));
    /* 00896830: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00896833: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00896836: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896838: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0089683b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0089683d: mov ecx, dword ptr [ecx - 4] */ r_ecx = R32((u32)(r_ecx+0xfffffffcu));
    /* 00896840: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00896842: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00896845: and ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00896847: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896849: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089684c: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0089684f: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896851: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896853: mov edi, edx */ r_edi = r_edx;
    /* 00896855: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00896858: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089685a: lea ebx, [ebx + edi - 0x7fff80] */ r_ebx = (u32)(r_ebx+r_edi+0xff800080u);
    /* 00896861: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00896864: and edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896866: mov esi, ecx */ r_esi = r_ecx;
    /* 00896868: and esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 0089686a: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089686c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089686f: and edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896871: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896873: mov edi, edx */ r_edi = r_edx;
    /* 00896875: and edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896877: lea esi, [esi + edi + 0x20002] */ r_esi = (u32)(r_esi+r_edi+0x20002u);
    /* 0089687e: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00896881: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00896884: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00896887: xor ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00896889: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0089688c: mov esi, 0x3fc03fc0 */ r_esi = 0x3fc03fc0u;
    /* 00896891: and ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896893: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896895: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00896897: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0089689a: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0089689d: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089689f: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008968a1: mov edi, dword ptr [ebp + 0x18] */ r_edi = R32((u32)(r_ebp+0x18u));
    /* 008968a4: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008968a7: and edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008968a9: lea ecx, [ecx + edx + 0x800080] */ r_ecx = (u32)(r_ecx+r_edx+0x800080u);
    /* 008968b0: and ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008968b2: xor ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008968b4: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 008968b7: add dword ptr [ebp - 8], 4 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008968bb: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 008968bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 008968c0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008968c3: dec dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008968c6: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008968c9: mov esi, 0xffc03fc0 */ r_esi = 0xffc03fc0u;
    /* 008968ce: jne 0x896829 */ if (!fZ) goto L_00896829;
L_008968d4:; BB(0x008968d4);
    /* 008968d4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_008968d7:; BB(0x008968d7);
    /* 008968d7: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008968da: add dword ptr [ebp + 8], ecx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008968dd: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 008968e0: add dword ptr [ebp + 0x14], ecx */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008968e3: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008968e5: cmp edx, dword ptr [ebp - 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008968e8: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 008968eb: jb 0x896807 */ if (fC) goto L_00896807;
L_008968f1:; BB(0x008968f1);
    /* 008968f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008968f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008968f3:; BB(0x008968f3);
    /* 008968f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008968f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008968f6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008968f7: ret  */ FN_RET(0x008967d2); r_esp += 4; return;
}

void f_008968f8(void) /* sub_8968F8 */
{
    FN_ENTER(0x008968f8);
    /* 008968f8: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008968fb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008968fd: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00896900: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896901: push dword ptr [edx + 0x1050] */ { u32 v = R32((u32)(r_edx+0x1050u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896907: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 0089690a: push dword ptr [eax + 0x1050] */ { u32 v = R32((u32)(r_eax+0x1050u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896910: push dword ptr [eax + 0x105c] */ { u32 v = R32((u32)(r_eax+0x105cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00896916: push dword ptr [eax + 0x1058] */ { u32 v = R32((u32)(r_eax+0x1058u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089691c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089691d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089691e: call dword ptr [0xa346c0] */ { u32 t = R32((u32)(0xa346c0u)); r_esp -= 4; W32(r_esp, 0x896924u); call_ind(t); }
    /* 00896924: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896927: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896928: ret  */ FN_RET(0x008968f8); r_esp += 4; return;
}

void f_00896929(void) /* sub_896929 */
{
    FN_ENTER(0x00896929);
    /* 00896929: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089692a: mov ebp, esp */ r_ebp = r_esp;
    /* 0089692c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089692f: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 00896932: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00896935: imul ecx, eax */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_eax; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896938: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896939: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0089693c: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089693e: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896940: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00896943: jae 0x896a0c */ if (!fC) goto L_00896a0c;
L_00896949:; BB(0x00896949);
    /* 00896949: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0089694c: lea ecx, [edi + ecx*4] */ r_ecx = (u32)(r_edi+r_ecx*4);
    /* 0089694f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00896950: mov dword ptr [ebp + 0x14], ecx */ W32((u32)(r_ebp+0x14u), r_ecx);
    /* 00896953: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896954: mov edx, 0xff00ff */ r_edx = 0xff00ffu;
    /* 00896959: mov ecx, 0xff00 */ r_ecx = 0xff00u;
L_0089695e:; BB(0x0089695e);
    /* 0089695e: cmp edi, dword ptr [ebp + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896961: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00896964: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00896967: jae 0x8969f0 */ if (!fC) goto L_008969f0;
L_0089696d:; BB(0x0089696d);
    /* 0089696d: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 00896970: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00896972: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00896973: shr ebx, 3 */ { u32 c = (3u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00896976: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896977: lea esi, [edi + 4] */ r_esi = (u32)(r_edi+0x4u);
    /* 0089697a: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
L_0089697d:; BB(0x0089697d);
    /* 0089697d: mov edi, dword ptr [esi + eax] */ r_edi = R32((u32)(r_esi+r_eax));
    /* 00896980: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 00896983: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00896985: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00896988: mov edi, dword ptr [eax + esi - 4] */ r_edi = R32((u32)(r_eax+r_esi+0xfffffffcu));
    /* 0089698c: mov eax, dword ptr [esi - 4] */ r_eax = R32((u32)(r_esi+0xfffffffcu));
    /* 0089698f: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 00896992: and edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896994: mov ebx, eax */ r_ebx = r_eax;
    /* 00896996: and ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00896998: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089699a: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089699d: and edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089699f: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008969a1: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008969a4: and edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008969a6: lea ebx, [ebx + edi + 0x20002] */ r_ebx = (u32)(r_ebx+r_edi+0x20002u);
    /* 008969ad: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 008969b0: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008969b2: and edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008969b4: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008969b6: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 008969b9: and edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008969bb: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008969bd: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 008969c0: and edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008969c2: lea eax, [eax + edi + 0x200] */ r_eax = (u32)(r_eax+r_edi+0x200u);
    /* 008969c9: and eax, 0x3fc00 */ {  u32 a = r_eax; u32 b = 0x3fc00u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008969ce: and ebx, 0x3fc03fc */ {  u32 a = r_ebx; u32 b = 0x3fc03fcu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008969d4: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 008969d6: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008969d9: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008969dd: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008969e0: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008969e3: dec dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 008969e6: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 008969e8: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008969eb: jne 0x89697d */ if (!fZ) goto L_0089697d;
L_008969ed:; BB(0x008969ed);
    /* 008969ed: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
L_008969f0:; BB(0x008969f0);
    /* 008969f0: mov esi, dword ptr [ebp + 0x1c] */ r_esi = R32((u32)(r_ebp+0x1cu));
    /* 008969f3: add dword ptr [ebp + 8], esi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008969f6: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 008969f9: add dword ptr [ebp + 0x14], esi */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008969fc: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008969fe: cmp edi, dword ptr [ebp - 0x18] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896a01: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00896a04: jb 0x89695e */ if (fC) goto L_0089695e;
L_00896a0a:; BB(0x00896a0a);
    /* 00896a0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896a0b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00896a0c:; BB(0x00896a0c);
    /* 00896a0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00896a0e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896a0f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00896a10: ret  */ FN_RET(0x00896929); r_esp += 4; return;
}

void f_00896a11(void) /* sub_896A11 */
{
    FN_ENTER(0x00896a11);
    /* 00896a11: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896a12: mov ebp, esp */ r_ebp = r_esp;
    /* 00896a14: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00896a17: test byte ptr [ebp + 0x10], 3 */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00896a1b: je 0x896a39 */ if (fZ) goto L_00896a39;
L_00896a1d:; BB(0x00896a1d);
    /* 00896a1d: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00896a20: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896a23: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896a26: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896a29: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00896a2c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896a2f: call 0x8967d2 */ r_esp -= 4; W32(r_esp, 0x896a34u); f_008967d2();
    /* 00896a34: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896a37: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00896a38: ret  */ FN_RET(0x00896a11); r_esp += 4; return;
L_00896a39:; BB(0x00896a39);
    /* 00896a39: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00896a3c: imul eax, dword ptr [ebp + 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x18u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896a40: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896a43: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00896a47: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00896a4b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00896a4c: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00896a4f: mov eax, 0x20002 */ r_eax = 0x20002u;
    /* 00896a54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896a55: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896a56: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00896a59: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00896a5c: emms  */ ; /* the MMX tag state is not modelled */
    /* 00896a5e: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00896a61: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00896a64: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00896a67: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00896a6a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00896a6d: movq mm4, qword ptr [ebp - 0x1c] */ { MM64 r; r.q = R64((u32)(r_ebp+0xffffffe4u)); fpr[4] = (long double)(i64)(r.q); }
    /* 00896a71: pxor mm6, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.q = a.q ^ b.q; fpr[6] = (long double)(i64)(r.q); }
    /* 00896a74: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00896a77: jge 0x896b1e */ if ((fS==fO)) goto L_00896b1e;
L_00896a7d:; BB(0x00896a7d);
    /* 00896a7d: mov edi, eax */ r_edi = r_eax;
    /* 00896a7f: mov esi, eax */ r_esi = r_eax;
    /* 00896a81: add esi, dword ptr [ebp + 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896a84: mov ebx, edi */ r_ebx = r_edi;
    /* 00896a86: add ebx, dword ptr [ebp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896a89: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00896a8c: mov dword ptr [ebp - 8], edx */ W32((u32)(r_ebp+0xfffffff8u), r_edx);
    /* 00896a8f: mov eax, edx */ r_eax = r_edx;
    /* 00896a91: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00896a93: jge 0x896b06 */ if ((fS==fO)) goto L_00896b06;
L_00896a95:; BB(0x00896a95);
    /* 00896a95: movq mm0, qword ptr [edi] */ { MM64 r; r.q = R64((u32)(r_edi)); fpr[0] = (long double)(i64)(r.q); }
    /* 00896a98: movq mm2, qword ptr [esi] */ { MM64 r; r.q = R64((u32)(r_esi)); fpr[2] = (long double)(i64)(r.q); }
    /* 00896a9b: movq mm4, qword ptr [edi + 8] */ { MM64 r; r.q = R64((u32)(r_edi+0x8u)); fpr[4] = (long double)(i64)(r.q); }
    /* 00896a9f: movq mm6, qword ptr [esi + 8] */ { MM64 r; r.q = R64((u32)(r_esi+0x8u)); fpr[6] = (long double)(i64)(r.q); }
    /* 00896aa3: movq mm1, mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; fpr[1] = (long double)(i64)(r.q); }
    /* 00896aa6: movq mm3, mm2 */ { MM64 r; r.q = (u64)(i64)fpr[2]; fpr[3] = (long double)(i64)(r.q); }
    /* 00896aa9: movq mm5, mm4 */ { MM64 r; r.q = (u64)(i64)fpr[4]; fpr[5] = (long double)(i64)(r.q); }
    /* 00896aac: movq mm7, mm6 */ { MM64 r; r.q = (u64)(i64)fpr[6]; fpr[7] = (long double)(i64)(r.q); }
    /* 00896aaf: punpcklbw mm0, dword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 00896ab3: punpckhbw mm1, qword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[1]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[4]; r.b[1] = b.b[4]; r.b[2] = a.b[5]; r.b[3] = b.b[5]; r.b[4] = a.b[6]; r.b[5] = b.b[6]; r.b[6] = a.b[7]; r.b[7] = b.b[7]; fpr[1] = (long double)(i64)(r.q); }
    /* 00896ab7: punpcklbw mm2, dword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[2]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[2] = (long double)(i64)(r.q); }
    /* 00896abb: punpckhbw mm3, qword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[3]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[4]; r.b[1] = b.b[4]; r.b[2] = a.b[5]; r.b[3] = b.b[5]; r.b[4] = a.b[6]; r.b[5] = b.b[6]; r.b[6] = a.b[7]; r.b[7] = b.b[7]; fpr[3] = (long double)(i64)(r.q); }
    /* 00896abf: punpcklbw mm4, dword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 00896ac3: punpckhbw mm5, qword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[5]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[4]; r.b[1] = b.b[4]; r.b[2] = a.b[5]; r.b[3] = b.b[5]; r.b[4] = a.b[6]; r.b[5] = b.b[6]; r.b[6] = a.b[7]; r.b[7] = b.b[7]; fpr[5] = (long double)(i64)(r.q); }
    /* 00896ac7: punpcklbw mm6, dword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[6]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[0]; r.b[1] = b.b[0]; r.b[2] = a.b[1]; r.b[3] = b.b[1]; r.b[4] = a.b[2]; r.b[5] = b.b[2]; r.b[6] = a.b[3]; r.b[7] = b.b[3]; fpr[6] = (long double)(i64)(r.q); }
    /* 00896acb: punpckhbw mm7, qword ptr [ebp - 0x14] */ { MM64 a; a.q = (u64)(i64)fpr[7]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffecu)); MM64 r; r.b[0] = a.b[4]; r.b[1] = b.b[4]; r.b[2] = a.b[5]; r.b[3] = b.b[5]; r.b[4] = a.b[6]; r.b[5] = b.b[6]; r.b[6] = a.b[7]; r.b[7] = b.b[7]; fpr[7] = (long double)(i64)(r.q); }
    /* 00896acf: mov ecx, eax */ r_ecx = r_eax;
    /* 00896ad1: paddw mm0, mm1 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[1]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 00896ad4: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896ad7: paddw mm4, mm5 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[5]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 00896ada: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00896add: paddw mm0, mm2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[2]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 00896ae0: paddw mm4, mm6 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[6]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 00896ae3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896ae6: paddw mm0, mm3 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[3]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 00896ae9: paddw mm4, mm7 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = (u64)(i64)fpr[7]; MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 00896aec: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00896aee: paddw mm0, qword ptr [ebp - 0x1c] */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffe4u)); MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[0] = (long double)(i64)(r.q); }
    /* 00896af2: paddw mm4, qword ptr [ebp - 0x1c] */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(r_ebp+0xffffffe4u)); MM64 r; r.w[0] = a.w[0] + b.w[0]; r.w[1] = a.w[1] + b.w[1]; r.w[2] = a.w[2] + b.w[2]; r.w[3] = a.w[3] + b.w[3]; fpr[4] = (long double)(i64)(r.q); }
    /* 00896af6: psraw mm0, 2 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[0] = (long double)(i64)(r.q); }
    /* 00896afa: psraw mm4, 2 */ { MM64 a; a.q = (u64)(i64)fpr[4]; MM64 b; b.q = R64((u32)(0x0u)); MM64 r; u32 c = 0x2u; r.w[0] = c >= 16 ? 0 : (a.w[0] >> c); r.w[1] = c >= 16 ? 0 : (a.w[1] >> c); r.w[2] = c >= 16 ? 0 : (a.w[2] >> c); r.w[3] = c >= 16 ? 0 : (a.w[3] >> c); fpr[4] = (long double)(i64)(r.q); }
    /* 00896afe: packuswb mm0, mm4 */ { MM64 a; a.q = (u64)(i64)fpr[0]; MM64 b; b.q = (u64)(i64)fpr[4]; MM64 r; r.b[0] = (u8)rt_satu8((i32)(i16)a.w[0]); r.b[4] = (u8)rt_satu8((i32)(i16)b.w[0]); r.b[1] = (u8)rt_satu8((i32)(i16)a.w[1]); r.b[5] = (u8)rt_satu8((i32)(i16)b.w[1]); r.b[2] = (u8)rt_satu8((i32)(i16)a.w[2]); r.b[6] = (u8)rt_satu8((i32)(i16)b.w[2]); r.b[3] = (u8)rt_satu8((i32)(i16)a.w[3]); r.b[7] = (u8)rt_satu8((i32)(i16)b.w[3]); fpr[0] = (long double)(i64)(r.q); }
    /* 00896b01: movq qword ptr [ecx], mm0 */ { MM64 r; r.q = (u64)(i64)fpr[0]; W64((u32)(r_ecx), r.q); }
    /* 00896b04: jl 0x896a95 */ if ((fS!=fO)) goto L_00896a95;
L_00896b06:; BB(0x00896b06);
    /* 00896b06: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00896b09: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00896b0c: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896b0f: add eax, dword ptr [ebp + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896b12: add edx, dword ptr [ebp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x1cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00896b15: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00896b18: jl 0x896a7d */ if ((fS!=fO)) goto L_00896a7d;
L_00896b1e:; BB(0x00896b1e);
    /* 00896b1e: emms  */ ; /* the MMX tag state is not modelled */
    /* 00896b20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896b21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896b22: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00896b24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00896b25: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00896b26: ret  */ FN_RET(0x00896a11); r_esp += 4; return;
}

void f_00896b27(void) /* sub_896B27 */
{
    FN_ENTER(0x00896b27);
    /* 00896b27: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896b28: mov ebp, esp */ r_ebp = r_esp;
    /* 00896b2a: call 0x89f409 */ r_esp -= 4; W32(r_esp, 0x896b2fu); f_0089f409();
    /* 00896b2f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896b31: je 0x896b44 */ if (fZ) goto L_00896b44;
L_00896b33:; BB(0x00896b33);
    /* 00896b33: mov eax, 0x896a11 */ r_eax = 0x896a11u;
    /* 00896b38: mov dword ptr [0xa346c0], eax */ W32((u32)(0xa346c0u), r_eax);
    /* 00896b3d: mov dword ptr [0xa346c4], eax */ W32((u32)(0xa346c4u), r_eax);
    /* 00896b42: jmp 0x896b58 */ goto L_00896b58;
L_00896b44:; BB(0x00896b44);
    /* 00896b44: mov dword ptr [0xa346c0], 0x8967d2 */ W32((u32)(0xa346c0u), 0x8967d2u);
    /* 00896b4e: mov dword ptr [0xa346c4], 0x896929 */ W32((u32)(0xa346c4u), 0x896929u);
L_00896b58:; BB(0x00896b58);
    /* 00896b58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00896b59: jmp dword ptr [0xa346c0] */ { u32 t = R32((u32)(0xa346c0u)); jmp_ind(t); return; }
}

void f_00896b5f(void) /* sub_896B5F */
{
    FN_ENTER(0x00896b5f);
    /* 00896b5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896b60: mov ebp, esp */ r_ebp = r_esp;
    /* 00896b62: call 0x89f409 */ r_esp -= 4; W32(r_esp, 0x896b67u); f_0089f409();
    /* 00896b67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00896b69: je 0x896b77 */ if (fZ) goto L_00896b77;
L_00896b6b:; BB(0x00896b6b);
    /* 00896b6b: mov eax, 0x896a11 */ r_eax = 0x896a11u;
    /* 00896b70: mov dword ptr [0xa346c0], eax */ W32((u32)(0xa346c0u), r_eax);
    /* 00896b75: jmp 0x896b86 */ goto L_00896b86;
L_00896b77:; BB(0x00896b77);
    /* 00896b77: mov dword ptr [0xa346c0], 0x8967d2 */ W32((u32)(0xa346c0u), 0x8967d2u);
    /* 00896b81: mov eax, 0x896929 */ r_eax = 0x896929u;
L_00896b86:; BB(0x00896b86);
    /* 00896b86: mov dword ptr [0xa346c4], eax */ W32((u32)(0xa346c4u), r_eax);
    /* 00896b8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00896b8c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
}

void f_00896b8e(void) /* sub_896B8E */
{
    FN_ENTER(0x00896b8e);
    /* 00896b8e: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00896b91: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00896b93: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00896b96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896b97: push dword ptr [edx + 0x1050] */ { u32 v = R32((u32)(r_edx+0x1050u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896b9d: mov esi, dword ptr [edx + 0x18] */ r_esi = R32((u32)(r_edx+0x18u));
    /* 00896ba0: push dword ptr [eax + 0x1050] */ { u32 v = R32((u32)(r_eax+0x1050u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896ba6: push dword ptr [eax + 0x105c] */ { u32 v = R32((u32)(r_eax+0x105cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00896bac: push dword ptr [eax + 0x1058] */ { u32 v = R32((u32)(r_eax+0x1058u)); r_esp -= 4; W32(r_esp, v); }
    /* 00896bb2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00896bb3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896bb4: call dword ptr [0xa346c4] */ { u32 t = R32((u32)(0xa346c4u)); r_esp -= 4; W32(r_esp, 0x896bbau); call_ind(t); }
    /* 00896bba: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896bbd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896bbe: ret  */ FN_RET(0x00896b8e); r_esp += 4; return;
}

void f_00896bbf(void) /* sub_896BBF */
{
    FN_ENTER(0x00896bbf);
    /* 00896bbf: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00896bc2: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00896bc5: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00896bc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896bc9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896bca: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00896bcc: mov ebp, dword ptr [esi + 0x105c] */ r_ebp = R32((u32)(r_esi+0x105cu));
    /* 00896bd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896bd3: mov edi, dword ptr [esi + 0x1050] */ r_edi = R32((u32)(r_esi+0x1050u));
    /* 00896bd9: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896bdc: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00896be0: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00896be3: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896be5: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896be7: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00896beb: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00896bef: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00896bf3: jae 0x896d06 */ if (!fC) goto L_00896d06;
L_00896bf9:; BB(0x00896bf9);
    /* 00896bf9: mov edx, 0xf81f */ r_edx = 0xf81fu;
    /* 00896bfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00896bff:; BB(0x00896bff);
    /* 00896bff: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00896c03: mov esi, dword ptr [esi + 0x1058] */ r_esi = R32((u32)(r_esi+0x1058u));
    /* 00896c09: lea esi, [eax + esi*2] */ r_esi = (u32)(r_eax+r_esi*2);
    /* 00896c0c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00896c10: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896c12: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896c14: mov ebx, eax */ r_ebx = r_eax;
    /* 00896c16: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00896c1a: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00896c1e: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00896c22: jae 0x896ce1 */ if (!fC) goto L_00896ce1;
L_00896c28:; BB(0x00896c28);
    /* 00896c28: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 00896c2b: movzx esi, word ptr [ebx + 2] */ r_esi = (u32)R16((u32)(r_ebx+0x2u));
    /* 00896c2f: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 00896c33: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 00896c36: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00896c38: mov ebx, eax */ r_ebx = r_eax;
    /* 00896c3a: and bx, dx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00896c3d: and bp, dx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00896c40: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00896c44: and ecx, 0xffff07e0 */ {  u32 a = r_ecx; u32 b = 0xffff07e0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896c4a: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896c4c: mov ebp, edi */ r_ebp = r_edi;
    /* 00896c4e: and bp, dx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00896c51: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896c53: mov ebp, esi */ r_ebp = r_esi;
    /* 00896c55: and bp, dx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00896c58: lea ebx, [ebx + ebp + 0x1002] */ r_ebx = (u32)(r_ebx+r_ebp+0x1002u);
    /* 00896c5f: mov ebp, eax */ r_ebp = r_eax;
    /* 00896c61: and ebp, 0xffff07e0 */ {  u32 a = r_ebp; u32 b = 0xffff07e0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896c67: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896c69: mov ecx, edi */ r_ecx = r_edi;
    /* 00896c6b: and ecx, 0xffff07e0 */ {  u32 a = r_ecx; u32 b = 0xffff07e0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896c71: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896c73: mov ecx, esi */ r_ecx = r_esi;
    /* 00896c75: and ecx, 0xffff07e0 */ {  u32 a = r_ecx; u32 b = 0xffff07e0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896c7b: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00896c7e: lea ecx, [ecx + ebp + 0x40] */ r_ecx = (u32)(r_ecx+r_ebp+0x40u);
    /* 00896c82: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00896c85: xor ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00896c87: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00896c8b: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00896c8d: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896c8f: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896c91: and edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896c93: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896c95: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00896c99: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00896c9b: and ebx, 0xffff07e0 */ {  u32 a = r_ebx; u32 b = 0xffff07e0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00896ca1: lea eax, [eax + esi + 0x1002] */ r_eax = (u32)(r_eax+r_esi+0x1002u);
    /* 00896ca8: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00896cab: xor ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00896cad: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00896cb1: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896cb6: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 00896cb9: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00896cbd: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896cc0: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896cc3: cmp ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896cc7: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00896ccb: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00896ccf: jb 0x896c28 */ if (fC) goto L_00896c28;
L_00896cd5:; BB(0x00896cd5);
    /* 00896cd5: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00896cd9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00896cdd: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_00896ce1:; BB(0x00896ce1);
    /* 00896ce1: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00896ce4: mov esi, dword ptr [esi + 0x1050] */ r_esi = R32((u32)(r_esi+0x1050u));
    /* 00896cea: add dword ptr [esp + 0x14], esi */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896cee: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00896cf0: mov edi, dword ptr [esi + 0x1050] */ r_edi = R32((u32)(r_esi+0x1050u));
    /* 00896cf6: lea eax, [eax + edi*2] */ r_eax = (u32)(r_eax+r_edi*2);
    /* 00896cf9: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896cfb: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00896cff: jb 0x896bff */ if (fC) goto L_00896bff;
L_00896d05:; BB(0x00896d05);
    /* 00896d05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00896d06:; BB(0x00896d06);
    /* 00896d06: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896d07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896d08: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00896d0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00896d0b: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896d0e: ret  */ FN_RET(0x00896bbf); r_esp += 4; return;
}

void f_00896d0f(void) /* sub_896D0F */
{
    FN_ENTER(0x00896d0f);
    /* 00896d0f: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00896d12: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00896d15: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00896d18: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00896d1c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00896d1e: mov edx, dword ptr [eax + 0x105c] */ r_edx = R32((u32)(r_eax+0x105cu));
    /* 00896d24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00896d25: mov ebx, dword ptr [eax + 0x1050] */ r_ebx = R32((u32)(r_eax+0x1050u));
    /* 00896d2b: imul edx, ebx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896d2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896d2f: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 00896d32: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00896d34: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896d36: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00896d3a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00896d3e: jae 0x896e2b */ if (!fC) goto L_00896e2b;
L_00896d44:; BB(0x00896d44);
    /* 00896d44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896d45: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896d46: mov edi, 0x7c1f */ r_edi = 0x7c1fu;
L_00896d4b:; BB(0x00896d4b);
    /* 00896d4b: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00896d4f: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 00896d55: lea eax, [esi + eax*2] */ r_eax = (u32)(r_esi+r_eax*2);
    /* 00896d58: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00896d5c: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896d5e: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896d60: mov ebp, esi */ r_ebp = r_esi;
    /* 00896d62: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00896d66: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00896d6a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00896d6e: jae 0x896e09 */ if (!fC) goto L_00896e09;
L_00896d74:; BB(0x00896d74);
    /* 00896d74: movzx ecx, word ptr [ebp] */ r_ecx = (u32)R16((u32)(r_ebp));
    /* 00896d78: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00896d7c: movzx eax, word ptr [ebx + 2] */ r_eax = (u32)R16((u32)(r_ebx+0x2u));
    /* 00896d80: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 00896d83: mov ebp, eax */ r_ebp = r_eax;
    /* 00896d85: and ebp, 0xffff03e0 */ {  u32 a = r_ebp; u32 b = 0xffff03e0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896d8b: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00896d8f: and ecx, 0xffff03e0 */ {  u32 a = r_ecx; u32 b = 0xffff03e0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896d95: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896d97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00896d99: and ecx, 0xffff03e0 */ {  u32 a = r_ecx; u32 b = 0xffff03e0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896d9f: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896da1: mov ecx, edx */ r_ecx = r_edx;
    /* 00896da3: and ecx, 0xffff03e0 */ {  u32 a = r_ecx; u32 b = 0xffff03e0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896da9: lea ebp, [ecx + ebp + 0x40] */ r_ebp = (u32)(r_ecx+r_ebp+0x40u);
    /* 00896dad: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 00896db1: and eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00896db3: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896db5: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896db7: and ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00896db9: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00896dbb: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00896dbf: and edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00896dc1: lea eax, [eax + edx + 0x802] */ r_eax = (u32)(r_eax+r_edx+0x802u);
    /* 00896dc8: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00896dcb: and ax, di */ {  u32 a = (u16)r_eax; u32 b = (u16)r_edi; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00896dce: shr ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00896dd1: and ebp, 0xffff03e0 */ {  u32 a = r_ebp; u32 b = 0xffff03e0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896dd7: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896dda: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00896dde: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00896de0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00896de4: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896de9: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 00896dec: mov ebp, dword ptr [esp + 0x18] */ r_ebp = R32((u32)(r_esp+0x18u));
    /* 00896df0: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896df3: cmp ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896df7: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00896dfb: jb 0x896d74 */ if (fC) goto L_00896d74;
L_00896e01:; BB(0x00896e01);
    /* 00896e01: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 00896e05: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
L_00896e09:; BB(0x00896e09);
    /* 00896e09: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00896e0c: mov eax, dword ptr [eax + 0x1050] */ r_eax = R32((u32)(r_eax+0x1050u));
    /* 00896e12: add dword ptr [esp + 0x14], eax */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896e16: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00896e18: mov ebx, dword ptr [eax + 0x1050] */ r_ebx = R32((u32)(r_eax+0x1050u));
    /* 00896e1e: lea esi, [esi + ebx*2] */ r_esi = (u32)(r_esi+r_ebx*2);
    /* 00896e21: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896e23: jb 0x896d4b */ if (fC) goto L_00896d4b;
L_00896e29:; BB(0x00896e29);
    /* 00896e29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896e2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_00896e2b:; BB(0x00896e2b);
    /* 00896e2b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896e2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00896e2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00896e2f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896e32: ret  */ FN_RET(0x00896d0f); r_esp += 4; return;
}

void f_00896e33(void) /* sub_896E33 */
{
    FN_ENTER(0x00896e33);
    /* 00896e33: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00896e36: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00896e39: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00896e3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896e3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896e3e: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00896e40: mov ebp, dword ptr [esi + 0x105c] */ r_ebp = R32((u32)(r_esi+0x105cu));
    /* 00896e46: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00896e49: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896e4a: mov edi, dword ptr [esi + 0x1050] */ r_edi = R32((u32)(r_esi+0x1050u));
    /* 00896e50: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896e53: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896e55: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896e57: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00896e5b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00896e5f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00896e63: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00896e67: jae 0x896f79 */ if (!fC) goto L_00896f79;
L_00896e6d:; BB(0x00896e6d);
    /* 00896e6d: mov eax, 0x83e0 */ r_eax = 0x83e0u;
    /* 00896e72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00896e73:; BB(0x00896e73);
    /* 00896e73: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00896e77: mov esi, dword ptr [esi + 0x1058] */ r_esi = R32((u32)(r_esi+0x1058u));
    /* 00896e7d: lea esi, [edx + esi*2] */ r_esi = (u32)(r_edx+r_esi*2);
    /* 00896e80: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00896e84: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896e86: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896e88: mov ebx, edx */ r_ebx = r_edx;
    /* 00896e8a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00896e8e: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00896e92: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00896e96: jae 0x896f54 */ if (!fC) goto L_00896f54;
L_00896e9c:; BB(0x00896e9c);
    /* 00896e9c: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 00896e9f: movzx esi, word ptr [ebx + 2] */ r_esi = (u32)R16((u32)(r_ebx+0x2u));
    /* 00896ea3: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 00896ea7: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 00896eaa: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00896eac: and ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896eae: mov ebx, edx */ r_ebx = r_edx;
    /* 00896eb0: and ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00896eb2: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896eb4: mov ebp, edi */ r_ebp = r_edi;
    /* 00896eb6: and ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896eb8: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896eba: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00896ebe: and ecx, 0x7c1f */ {  u32 a = r_ecx; u32 b = 0x7c1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896ec4: mov ebp, esi */ r_ebp = r_esi;
    /* 00896ec6: and ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896ec8: lea ebx, [ebx + ebp + 0x10040] */ r_ebx = (u32)(r_ebx+r_ebp+0x10040u);
    /* 00896ecf: mov ebp, edx */ r_ebp = r_edx;
    /* 00896ed1: and ebp, 0x7c1f */ {  u32 a = r_ebp; u32 b = 0x7c1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00896ed7: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896ed9: mov ecx, edi */ r_ecx = r_edi;
    /* 00896edb: and ecx, 0x7c1f */ {  u32 a = r_ecx; u32 b = 0x7c1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896ee1: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896ee3: mov ecx, esi */ r_ecx = r_esi;
    /* 00896ee5: and ecx, 0x7c1f */ {  u32 a = r_ecx; u32 b = 0x7c1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896eeb: lea ecx, [ecx + ebp + 0x802] */ r_ecx = (u32)(r_ecx+r_ebp+0x802u);
    /* 00896ef2: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00896ef5: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00896ef8: xor ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00896efa: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00896efe: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00896f00: and edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00896f02: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00896f04: and edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00896f06: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00896f08: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 00896f0c: and esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00896f0e: and ebx, 0xffff7c1f */ {  u32 a = r_ebx; u32 b = 0xffff7c1fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00896f14: lea ecx, [edx + esi + 0x10040] */ r_ecx = (u32)(r_edx+r_esi+0x10040u);
    /* 00896f1b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00896f1e: xor ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00896f20: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00896f24: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896f29: mov word ptr [ecx], bx */ W16((u32)(r_ecx), (u16)r_ebx);
    /* 00896f2c: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00896f30: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00896f33: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896f36: cmp ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896f3a: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00896f3e: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00896f42: jb 0x896e9c */ if (fC) goto L_00896e9c;
L_00896f48:; BB(0x00896f48);
    /* 00896f48: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00896f4c: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00896f50: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_00896f54:; BB(0x00896f54);
    /* 00896f54: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 00896f57: mov esi, dword ptr [esi + 0x1050] */ r_esi = R32((u32)(r_esi+0x1050u));
    /* 00896f5d: add dword ptr [esp + 0x14], esi */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00896f61: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00896f63: mov edi, dword ptr [esi + 0x1050] */ r_edi = R32((u32)(r_esi+0x1050u));
    /* 00896f69: lea edx, [edx + edi*2] */ r_edx = (u32)(r_edx+r_edi*2);
    /* 00896f6c: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896f6e: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00896f72: jb 0x896e73 */ if (fC) goto L_00896e73;
L_00896f78:; BB(0x00896f78);
    /* 00896f78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00896f79:; BB(0x00896f79);
    /* 00896f79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00896f7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00896f7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00896f7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00896f7e: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00896f81: ret  */ FN_RET(0x00896e33); r_esp += 4; return;
}

void f_00896f82(void) /* sub_896F82 */
{
    FN_ENTER(0x00896f82);
    /* 00896f82: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00896f85: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00896f88: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00896f8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00896f8c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00896f8d: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00896f8f: mov ebp, dword ptr [esi + 0x105c] */ r_ebp = R32((u32)(r_esi+0x105cu));
    /* 00896f95: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00896f96: mov edi, dword ptr [esi + 0x1050] */ r_edi = R32((u32)(r_esi+0x1050u));
    /* 00896f9c: imul ebp, edi */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edi; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00896f9f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00896fa3: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 00896fa6: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00896fa8: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896faa: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 00896fae: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00896fb2: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00896fb6: jae 0x8970cc */ if (!fC) goto L_008970cc;
L_00896fbc:; BB(0x00896fbc);
    /* 00896fbc: mov edx, 0xf0f0 */ r_edx = 0xf0f0u;
    /* 00896fc1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00896fc2:; BB(0x00896fc2);
    /* 00896fc2: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00896fc6: mov esi, dword ptr [esi + 0x1058] */ r_esi = R32((u32)(r_esi+0x1058u));
    /* 00896fcc: lea esi, [eax + esi*2] */ r_esi = (u32)(r_eax+r_esi*2);
    /* 00896fcf: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00896fd3: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00896fd5: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00896fd7: mov ebx, eax */ r_ebx = r_eax;
    /* 00896fd9: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00896fdd: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00896fe1: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00896fe5: jae 0x8970a7 */ if (!fC) goto L_008970a7;
L_00896feb:; BB(0x00896feb);
    /* 00896feb: movzx ecx, word ptr [ebx] */ r_ecx = (u32)R16((u32)(r_ebx));
    /* 00896fee: movzx esi, word ptr [ebx + 2] */ r_esi = (u32)R16((u32)(r_ebx+0x2u));
    /* 00896ff2: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 00896ff6: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 00896ff9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00896ffb: mov ebx, eax */ r_ebx = r_eax;
    /* 00896ffd: and bx, dx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897000: and bp, dx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897003: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00897007: and ecx, 0xffff0f0f */ {  u32 a = r_ecx; u32 b = 0xffff0f0fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089700d: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089700f: mov ebp, edi */ r_ebp = r_edi;
    /* 00897011: and bp, dx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897014: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897016: mov ebp, esi */ r_ebp = r_esi;
    /* 00897018: and bp, dx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089701b: lea ebx, [ebx + ebp + 0x2020] */ r_ebx = (u32)(r_ebx+r_ebp+0x2020u);
    /* 00897022: mov ebp, eax */ r_ebp = r_eax;
    /* 00897024: and ebp, 0xffff0f0f */ {  u32 a = r_ebp; u32 b = 0xffff0f0fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0089702a: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0089702c: mov ecx, edi */ r_ecx = r_edi;
    /* 0089702e: and ecx, 0xffff0f0f */ {  u32 a = r_ecx; u32 b = 0xffff0f0fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897034: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00897036: mov ecx, esi */ r_ecx = r_esi;
    /* 00897038: and ecx, 0xffff0f0f */ {  u32 a = r_ecx; u32 b = 0xffff0f0fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0089703e: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00897041: lea ecx, [ecx + ebp + 0x202] */ r_ecx = (u32)(r_ecx+r_ebp+0x202u);
    /* 00897048: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089704b: xor ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0089704d: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00897051: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00897053: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897055: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00897057: and edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00897059: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089705b: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0089705f: and esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00897061: and ebx, 0xffff0f0f */ {  u32 a = r_ebx; u32 b = 0xffff0f0fu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897067: lea eax, [eax + esi + 0x2020] */ r_eax = (u32)(r_eax+r_esi+0x2020u);
    /* 0089706e: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00897071: xor ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00897073: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00897077: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089707c: mov word ptr [eax], bx */ W16((u32)(r_eax), (u16)r_ebx);
    /* 0089707f: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00897083: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897086: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897089: cmp ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089708d: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 00897091: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00897095: jb 0x896feb */ if (fC) goto L_00896feb;
L_0089709b:; BB(0x0089709b);
    /* 0089709b: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0089709f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008970a3: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
L_008970a7:; BB(0x008970a7);
    /* 008970a7: mov esi, dword ptr [ecx + 4] */ r_esi = R32((u32)(r_ecx+0x4u));
    /* 008970aa: mov esi, dword ptr [esi + 0x1050] */ r_esi = R32((u32)(r_esi+0x1050u));
    /* 008970b0: add dword ptr [esp + 0x14], esi */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008970b4: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 008970b6: mov edi, dword ptr [esi + 0x1050] */ r_edi = R32((u32)(r_esi+0x1050u));
    /* 008970bc: lea eax, [eax + edi*2] */ r_eax = (u32)(r_eax+r_edi*2);
    /* 008970bf: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008970c1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008970c5: jb 0x896fc2 */ if (fC) goto L_00896fc2;
L_008970cb:; BB(0x008970cb);
    /* 008970cb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008970cc:; BB(0x008970cc);
    /* 008970cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008970cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008970ce: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008970d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008970d1: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008970d4: ret  */ FN_RET(0x00896f82); r_esp += 4; return;
}

