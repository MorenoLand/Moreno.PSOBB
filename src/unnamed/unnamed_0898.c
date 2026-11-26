#include "protos.h"

void f_008981f9(void) /* sub_8981F9 */
{
    FN_ENTER(0x008981f9);
    /* 008981f9: mov eax, 0x8cb6a3 */ r_eax = 0x8cb6a3u;
    /* 008981fe: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x898203u); f_008cb064();
    /* 00898203: sub esp, 0xb8 */ {  u32 a = r_esp; u32 b = 0xb8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00898209: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089820a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0089820c: cmp byte ptr [ebx + 8], 5 */ {  u32 a = R8((u32)(r_ebx+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00898210: je 0x89821c */ if (fZ) goto L_0089821c;
L_00898212:; BB(0x00898212);
    /* 00898212: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00898217: jmp 0x89867e */ goto L_0089867e;
L_0089821c:; BB(0x0089821c);
    /* 0089821c: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0089821e: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 00898224: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00898227: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00898228: mov esi, dword ptr [edx + 0x1058] */ r_esi = R32((u32)(r_edx+0x1058u));
    /* 0089822e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089822f: mov edi, eax */ r_edi = r_eax;
    /* 00898231: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00898233: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898235: je 0x89824a */ if (fZ) goto L_0089824a;
L_00898237:; BB(0x00898237);
    /* 00898237: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089823a: jne 0x898240 */ if (!fZ) goto L_00898240;
L_0089823c:; BB(0x0089823c);
    /* 0089823c: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089823e: je 0x89824a */ if (fZ) goto L_0089824a;
L_00898240:; BB(0x00898240);
    /* 00898240: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00898245: jmp 0x89867c */ goto L_0089867c;
L_0089824a:; BB(0x0089824a);
    /* 0089824a: mov edi, dword ptr [ecx + 0x105c] */ r_edi = R32((u32)(r_ecx+0x105cu));
    /* 00898250: mov esi, dword ptr [edx + 0x105c] */ r_esi = R32((u32)(r_edx+0x105cu));
    /* 00898256: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00898258: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089825a: je 0x898269 */ if (fZ) goto L_00898269;
L_0089825c:; BB(0x0089825c);
    /* 0089825c: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089825f: jne 0x898240 */ if (!fZ) goto L_00898240;
L_00898261:; BB(0x00898261);
    /* 00898261: cmp dword ptr [ecx + 0x105c], esi */ {  u32 a = R32((u32)(r_ecx+0x105cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00898267: jne 0x898240 */ if (!fZ) goto L_00898240;
L_00898269:; BB(0x00898269);
    /* 00898269: mov esi, dword ptr [ecx + 0x1060] */ r_esi = R32((u32)(r_ecx+0x1060u));
    /* 0089826f: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00898271: cmp dword ptr [edx + 0x1060], esi */ {  u32 a = R32((u32)(r_edx+0x1060u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00898277: jne 0x898240 */ if (!fZ) goto L_00898240;
L_00898279:; BB(0x00898279);
    /* 00898279: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089827c: jbe 0x898299 */ if ((fC||fZ)) goto L_00898299;
L_0089827e:; BB(0x0089827e);
    /* 0089827e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00898280: je 0x898299 */ if (fZ) goto L_00898299;
L_00898282:; BB(0x00898282);
    /* 00898282: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00898285: mov dword ptr [ecx + 0x1058], eax */ W32((u32)(r_ecx+0x1058u), r_eax);
    /* 0089828b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0089828d: mov ecx, dword ptr [eax + 0x1068] */ r_ecx = R32((u32)(r_eax+0x1068u));
    /* 00898293: sub dword ptr [eax + 0x1064], ecx */ { u32 ad = (u32)(r_eax+0x1064u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00898299:; BB(0x00898299);
    /* 00898299: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0089829b: lea ecx, [eax + 0x105c] */ r_ecx = (u32)(r_eax+0x105cu);
    /* 008982a1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008982a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008982a6: jbe 0x8982ad */ if ((fC||fZ)) goto L_008982ad;
L_008982a8:; BB(0x008982a8);
    /* 008982a8: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008982ab: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_008982ad:; BB(0x008982ad);
    /* 008982ad: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008982af: lea ecx, [eax + 0x1060] */ r_ecx = (u32)(r_eax+0x1060u);
    /* 008982b5: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008982b7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008982ba: jbe 0x8982c1 */ if ((fC||fZ)) goto L_008982c1;
L_008982bc:; BB(0x008982bc);
    /* 008982bc: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008982bf: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_008982c1:; BB(0x008982c1);
    /* 008982c1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008982c4: mov esi, dword ptr [eax + 0x1058] */ r_esi = R32((u32)(r_eax+0x1058u));
    /* 008982ca: mov eax, esi */ r_eax = r_esi;
    /* 008982cc: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008982cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008982d0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x8982d5u); f_008581c5();
    /* 008982d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008982d6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008982d9: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008982dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008982df: mov edi, 0x88f917 */ r_edi = 0x88f917u;
    /* 008982e4: je 0x8982f8 */ if (fZ) goto L_008982f8;
L_008982e6:; BB(0x008982e6);
    /* 008982e6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008982e7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008982e8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008982ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008982eb: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x8982f0u); f_0088fd17();
    /* 008982f0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008982f3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008982f6: jmp 0x8982fc */ goto L_008982fc;
L_008982f8:; BB(0x008982f8);
    /* 008982f8: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008982fc:; BB(0x008982fc);
    /* 008982fc: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898300: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00898304: jne 0x898310 */ if (!fZ) goto L_00898310;
L_00898306:; BB(0x00898306);
    /* 00898306: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 0089830b: jmp 0x89867c */ goto L_0089867c;
L_00898310:; BB(0x00898310);
    /* 00898310: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00898312: cmp dword ptr [eax + 0x105c], 1 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898319: mov esi, dword ptr [eax + 0x1058] */ r_esi = R32((u32)(r_eax+0x1058u));
    /* 0089831f: jne 0x898374 */ if (!fZ) goto L_00898374;
L_00898321:; BB(0x00898321);
    /* 00898321: shl esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00898323: mov eax, esi */ r_eax = r_esi;
    /* 00898325: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898329: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89832eu); f_008581c5();
    /* 0089832e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089832f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898334: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0089833b: je 0x89834c */ if (fZ) goto L_0089834c;
L_0089833d:; BB(0x0089833d);
    /* 0089833d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089833e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089833f: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898341: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898342: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898347u); f_0088fd17();
    /* 00898347: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089834a: jmp 0x89834e */ goto L_0089834e;
L_0089834c:; BB(0x0089834c);
    /* 0089834c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0089834e:; BB(0x0089834e);
    /* 0089834e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00898350: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 00898356: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089835a: mov esi, eax */ r_esi = r_eax;
    /* 0089835c: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089835f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00898361: mov edx, esi */ r_edx = r_esi;
    /* 00898363: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00898366: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00898369: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 0089836c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0089836f: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 00898372: jmp 0x8983dc */ goto L_008983dc;
L_00898374:; BB(0x00898374);
    /* 00898374: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00898377: mov eax, esi */ r_eax = r_esi;
    /* 00898379: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089837c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089837d: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x898382u); f_008581c5();
    /* 00898382: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898383: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898386: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898388: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0089838f: je 0x8983a0 */ if (fZ) goto L_008983a0;
L_00898391:; BB(0x00898391);
    /* 00898391: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898392: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00898393: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898395: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898396: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89839bu); f_0088fd17();
    /* 0089839b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0089839e: jmp 0x8983a2 */ goto L_008983a2;
L_008983a0:; BB(0x008983a0);
    /* 008983a0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008983a2:; BB(0x008983a2);
    /* 008983a2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008983a4: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 008983aa: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008983ae: mov ecx, eax */ r_ecx = r_eax;
    /* 008983b0: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008983b3: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008983b5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 008983b8: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 008983bb: mov ecx, eax */ r_ecx = r_eax;
    /* 008983bd: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008983c0: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008983c2: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008983c5: lea ecx, [eax + eax*2] */ r_ecx = (u32)(r_eax+r_eax*2);
    /* 008983c8: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008983cb: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008983cd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 008983d0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008983d3: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 008983d6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 008983d9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
L_008983dc:; BB(0x008983dc);
    /* 008983dc: cmp dword ptr [ebp - 0x38], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008983e0: jne 0x8983ec */ if (!fZ) goto L_008983ec;
L_008983e2:; BB(0x008983e2);
    /* 008983e2: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
    /* 008983e7: jmp 0x898671 */ goto L_00898671;
L_008983ec:; BB(0x008983ec);
    /* 008983ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008983ef: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 008983f2: jne 0x8983fc */ if (!fZ) goto L_008983fc;
L_008983f4:; BB(0x008983f4);
    /* 008983f4: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 008983f7: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 008983fa: jmp 0x89840e */ goto L_0089840e;
L_008983fc:; BB(0x008983fc);
    /* 008983fc: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008983ff: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00898402: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 00898405: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898408: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0089840b: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0089840e:; BB(0x0089840e);
    /* 0089840e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00898411: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898415: cmp dword ptr [eax + 0x1060], 0 */ {  u32 a = R32((u32)(r_eax+0x1060u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089841c: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 0089841f: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00898422: jbe 0x898666 */ if ((fC||fZ)) goto L_00898666;
L_00898428:; BB(0x00898428);
    /* 00898428: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089842c: cmp dword ptr [eax + 0x105c], 0 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898433: jbe 0x898651 */ if ((fC||fZ)) goto L_00898651;
L_00898439:; BB(0x00898439);
    /* 00898439: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089843c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089843f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898442: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00898444: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00898446: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00898448: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089844a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089844b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089844c: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x89844fu); call_ind(t); }
    /* 0089844f: cmp esi, dword ptr [ebp - 0x18] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898452: je 0x898466 */ if (fZ) goto L_00898466;
L_00898454:; BB(0x00898454);
    /* 00898454: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00898456: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00898458: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00898459: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 0089845c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089845d: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898460: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898462: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898463: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x898466u); call_ind(t); }
L_00898466:; BB(0x00898466);
    /* 00898466: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898469: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089846c: je 0x89847e */ if (fZ) goto L_0089847e;
L_0089846e:; BB(0x0089846e);
    /* 0089846e: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00898470: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00898472: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898473: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898476: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898478: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898479: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089847a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089847b: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x89847eu); call_ind(t); }
L_0089847e:; BB(0x0089847e);
    /* 0089847e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00898481: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898483: je 0x89849b */ if (fZ) goto L_0089849b;
L_00898485:; BB(0x00898485);
    /* 00898485: cmp eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898488: je 0x89849b */ if (fZ) goto L_0089849b;
L_0089848a:; BB(0x0089848a);
    /* 0089848a: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0089848c: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0089848e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089848f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898492: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00898493: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898495: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898496: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898498: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x89849bu); call_ind(t); }
L_0089849b:; BB(0x0089849b);
    /* 0089849b: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0089849e: and dword ptr [ebp - 0x2c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008984a2: cmp dword ptr [eax + 0x1058], 0 */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008984a9: jbe 0x89862b */ if ((fC||fZ)) goto L_0089862b;
L_008984af:; BB(0x008984af);
    /* 008984af: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 008984b2: fld dword ptr [0x99b9d0] */ FPUSH(R_F32((u32)(0x99b9d0u)));
    /* 008984b8: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_008984bb:; BB(0x008984bb);
    /* 008984bb: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 008984be: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 008984c1: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008984c4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008984c6: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008984c9: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008984cb: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 008984cd: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008984cf: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 008984d1: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 008984d4: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 008984d7: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 008984da: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 008984dd: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 008984e3: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 008984e6: lea ecx, [eax + esi] */ r_ecx = (u32)(r_eax+r_esi);
    /* 008984e9: fadd dword ptr [edx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0xcu));
    /* 008984ec: fstp dword ptr [ebp - 0x88] */ W_F32((u32)(r_ebp+0xffffff78u), ST(0)); FPOP();
    /* 008984f2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008984f4: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 008984f6: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 008984fc: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 008984ff: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898501: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 00898507: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 0089850a: fld dword ptr [ebp - 0x88] */ FPUSH(R_F32((u32)(r_ebp+0xffffff78u)));
    /* 00898510: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00898513: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00898516: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898518: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 0089851e: fld dword ptr [ebp - 0xb4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff4cu)));
    /* 00898524: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00898526: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 0089852c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089852e: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 00898531: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 00898534: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00898537: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898539: fld dword ptr [ebp - 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff58u)));
    /* 0089853f: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00898542: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898545: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 0089854b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089854d: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 0089854f: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00898552: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 00898555: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 00898558: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0089855b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089855d: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00898560: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 00898563: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00898566: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00898569: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089856b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0089856d: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00898570: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00898572: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00898575: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 00898578: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 0089857b: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0089857e: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00898581: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00898584: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898586: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00898589: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 0089858c: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0089858f: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898591: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00898593: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 00898596: add dword ptr [ebp - 0x34], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089859a: lea esi, [ebp - 0x74] */ r_esi = (u32)(r_ebp+0xffffff8cu);
    /* 0089859d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0089859f: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 008985a2: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 008985a5: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 008985a8: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 008985ab: fstp dword ptr [ebp - 0x9c] */ W_F32((u32)(r_ebp+0xffffff64u), ST(0)); FPOP();
    /* 008985b1: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 008985b4: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 008985b7: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008985ba: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008985bc: inc dword ptr [ebp - 0x2c] */ { u32 ad = (u32)(r_ebp+0xffffffd4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008985bf: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 008985c5: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008985c7: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 008985ca: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 008985cc: fstp dword ptr [ebp - 0xc4] */ W_F32((u32)(r_ebp+0xffffff3cu), ST(0)); FPOP();
    /* 008985d2: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 008985d5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008985d7: fld dword ptr [ebp - 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff64u)));
    /* 008985dd: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 008985e0: fld dword ptr [ebp - 0x98] */ FPUSH(R_F32((u32)(r_ebp+0xffffff68u)));
    /* 008985e6: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 008985e9: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 008985ef: fld dword ptr [ebp - 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff3cu)));
    /* 008985f5: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008985f7: fstp dword ptr [ebp - 0x74] */ W_F32((u32)(r_ebp+0xffffff8cu), ST(0)); FPOP();
    /* 008985fa: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008985fc: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 008985fe: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00898601: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00898603: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00898606: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898608: fld dword ptr [ebp - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff48u)));
    /* 0089860e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898610: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 00898613: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898614: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898615: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898616: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898617: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0089861a: cmp ecx, dword ptr [eax + 0x1058] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00898620: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00898623: jb 0x8984bb */ if (fC) goto L_008984bb;
L_00898629:; BB(0x00898629);
    /* 00898629: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0089862b:; BB(0x0089862b);
    /* 0089862b: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089862e: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00898631: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898634: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898636: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898639: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x89863cu); call_ind(t); }
    /* 0089863c: inc dword ptr [ebp - 0x10] */ { u32 ad = (u32)(r_ebp+0xfffffff0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089863f: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00898642: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898645: cmp ecx, dword ptr [eax + 0x105c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089864b: jb 0x898439 */ if (fC) goto L_00898439;
L_00898651:; BB(0x00898651);
    /* 00898651: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00898654: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00898657: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0089865a: cmp ecx, dword ptr [eax + 0x1060] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00898660: jb 0x898428 */ if (fC) goto L_00898428;
L_00898666:; BB(0x00898666);
    /* 00898666: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898669: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89866eu); f_00857e98();
    /* 0089866e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089866f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00898671:; BB(0x00898671);
    /* 00898671: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898674: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x898679u); f_00857e98();
    /* 00898679: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089867a: mov eax, esi */ r_eax = r_esi;
L_0089867c:; BB(0x0089867c);
    /* 0089867c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089867d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0089867e:; BB(0x0089867e);
    /* 0089867e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00898681: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00898682: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00898689: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089868a: ret  */ FN_RET(0x008981f9); r_esp += 4; return;
}

void f_0089868b(void) /* sub_89868B */
{
    FN_ENTER(0x0089868b);
    /* 0089868b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0089868c: mov ebp, esp */ r_ebp = r_esp;
    /* 0089868e: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00898691: mov eax, ebx */ r_eax = r_ebx;
    /* 00898693: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898696: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00898697: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898698: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89869du); f_008581c5();
    /* 0089869d: mov esi, eax */ r_esi = r_eax;
    /* 0089869f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008986a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008986a2: je 0x898788 */ if (fZ) goto L_00898788;
L_008986a8:; BB(0x008986a8);
    /* 008986a8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008986aa: mov dword ptr [ebp - 0x14], edi */ W32((u32)(r_ebp+0xffffffecu), r_edi);
    /* 008986ad: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 008986b0: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008986b3: jge 0x8986bb */ if ((fS==fO)) goto L_008986bb;
L_008986b5:; BB(0x008986b5);
    /* 008986b5: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008986bb:; BB(0x008986bb);
    /* 008986bb: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008986bd: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 008986c0: fild dword ptr [ebp - 0x14] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffecu)));
    /* 008986c3: jge 0x8986cb */ if ((fS==fO)) goto L_008986cb;
L_008986c5:; BB(0x008986c5);
    /* 008986c5: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_008986cb:; BB(0x008986cb);
    /* 008986cb: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 008986cd: fstp dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 008986d0: fnstcw word ptr [ebp - 4] */ W16((u32)(r_ebp+0xfffffffcu), fcw);
    /* 008986d3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008986d6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008986db: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008986de: fldcw word ptr [ebp - 0xc] */ fcw = R16((u32)(r_ebp+0xfffffff4u));
    /* 008986e1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008986e4: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008986e8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008986ea: mov dword ptr [0xae974c], eax */ W32((u32)(0xae974cu), r_eax);
    /* 008986ef: jbe 0x89877a */ if ((fC||fZ)) goto L_0089877a;
L_008986f5:; BB(0x008986f5);
    /* 008986f5: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008986f8: fild dword ptr [ebp - 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xfffffffcu)));
    /* 008986fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008986fd: jge 0x898705 */ if ((fS==fO)) goto L_00898705;
L_008986ff:; BB(0x008986ff);
    /* 008986ff: fadd dword ptr [0x99b9bc] */ ST(0) = ST(0) + R_F32((u32)(0x99b9bcu));
L_00898705:; BB(0x00898705);
    /* 00898705: fmul dword ptr [ebp - 0x10] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0xfffffff0u));
    /* 00898708: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00898709: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0089870a: fsub dword ptr [0x99b9b4] */ ST(0) = ST(0) - R_F32((u32)(0x99b9b4u));
    /* 00898710: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 00898713: fstp qword ptr [esp] */ W_F64((u32)(r_esp), ST(0)); FPOP();
    /* 00898716: call 0x8c9b50 */ r_esp -= 4; W32(r_esp, 0x89871bu); f_008c9b50();
    /* 0089871b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089871c: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0089871f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898720: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 00898723: fistp dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), (u32)fx_int32(ST(0))); FPOP();
    /* 00898726: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00898729: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0089872b: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0089872e: jge 0x89873c */ if ((fS==fO)) goto L_0089873c;
L_00898730:; BB(0x00898730);
    /* 00898730: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00898733: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00898735: lea edx, [edi - 1] */ r_edx = (u32)(r_edi+0xffffffffu);
    /* 00898738: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0089873a: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_0089873c:; BB(0x0089873c);
    /* 0089873c: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089873e: jb 0x89874e */ if (fC) goto L_0089874e;
L_00898740:; BB(0x00898740);
    /* 00898740: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00898743: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00898745: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00898747: lea edx, [edi - 1] */ r_edx = (u32)(r_edi+0xffffffffu);
    /* 0089874a: not ecx */ r_ecx = ~r_ecx;
    /* 0089874c: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
L_0089874e:; BB(0x0089874e);
    /* 0089874e: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00898751: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00898753: fsub dword ptr [ebp - 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff4u));
    /* 00898756: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00898759: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089875c: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089875f: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00898762: fsubr dword ptr [0x99b9b8] */ ST(0) = R_F32((u32)(0x99b9b8u)) - ST(0);
    /* 00898768: fst dword ptr [esi - 0xc] */ W_F32((u32)(r_esi+0xfffffff4u), ST(0));
    /* 0089876b: fld1  */ FPUSH(1.0);
    /* 0089876d: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0089876f: fstp dword ptr [esi - 4] */ W_F32((u32)(r_esi+0xfffffffcu), ST(0)); FPOP();
    /* 00898772: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898774: jb 0x8986f5 */ if (fC) goto L_008986f5;
L_0089877a:; BB(0x0089877a);
    /* 0089877a: mov eax, dword ptr [0xae974c] */ r_eax = R32((u32)(0xae974cu));
    /* 0089877f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898782: fldcw word ptr [ebp - 0x14] */ fcw = R16((u32)(r_ebp+0xffffffecu));
    /* 00898785: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
L_00898788:; BB(0x00898788);
    /* 00898788: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00898789: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0089878a: ret  */ FN_RET(0x0089868b); r_esp += 4; return;
}

void f_0089878b(void) /* sub_89878B */
{
    FN_ENTER(0x0089878b);
    /* 0089878b: mov eax, 0x8cb6c1 */ r_eax = 0x8cb6c1u;
    /* 00898790: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x898795u); f_008cb064();
    /* 00898795: sub esp, 0xc4 */ {  u32 a = r_esp; u32 b = 0xc4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089879b: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089879f: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008987a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008987a4: mov esi, ecx */ r_esi = r_ecx;
    /* 008987a6: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008987a9: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008987ab: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 008987ae: je 0x8987ba */ if (fZ) goto L_008987ba;
L_008987b0:; BB(0x008987b0);
    /* 008987b0: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008987b5: jmp 0x898b64 */ goto L_00898b64;
L_008987ba:; BB(0x008987ba);
    /* 008987ba: mov ecx, eax */ r_ecx = r_eax;
    /* 008987bc: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008987bf: shr eax, 0x11 */ { u32 c = (17u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008987c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008987c3: not ecx */ r_ecx = ~r_ecx;
    /* 008987c5: not eax */ r_eax = ~r_eax;
    /* 008987c7: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008987ca: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008987cd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008987ce: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 008987d1: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008987d4: mov ebx, dword ptr [eax + 0x1058] */ r_ebx = R32((u32)(r_eax+0x1058u));
    /* 008987da: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008987db: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008987dd: mov edi, dword ptr [ecx + 0x1058] */ r_edi = R32((u32)(r_ecx+0x1058u));
    /* 008987e3: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x8987e8u); f_0089868b();
    /* 008987e8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008987ea: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008987ed: mov edi, dword ptr [ecx + 0x105c] */ r_edi = R32((u32)(r_ecx+0x105cu));
    /* 008987f3: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 008987f6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008987f9: mov ebx, dword ptr [eax + 0x105c] */ r_ebx = R32((u32)(r_eax+0x105cu));
    /* 008987ff: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898804u); f_0089868b();
    /* 00898804: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898808: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898809: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089880a: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0089880d: je 0x898b38 */ if (fZ) goto L_00898b38;
L_00898813:; BB(0x00898813);
    /* 00898813: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898815: je 0x898b38 */ if (fZ) goto L_00898b38;
L_0089881b:; BB(0x0089881b);
    /* 0089881b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089881e: mov ebx, dword ptr [eax + 0x1058] */ r_ebx = R32((u32)(r_eax+0x1058u));
    /* 00898824: mov eax, ebx */ r_eax = r_ebx;
    /* 00898826: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089882a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89882fu); f_008581c5();
    /* 0089882f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898830: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898833: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898839: mov edi, 0x88f917 */ r_edi = 0x88f917u;
    /* 0089883e: je 0x898852 */ if (fZ) goto L_00898852;
L_00898840:; BB(0x00898840);
    /* 00898840: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898841: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898842: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898845: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x89884au); f_0088fd17();
    /* 0089884a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0089884d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00898850: jmp 0x898859 */ goto L_00898859;
L_00898852:; BB(0x00898852);
    /* 00898852: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898856: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00898859:; BB(0x00898859);
    /* 00898859: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089885d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089885f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898862: je 0x898b38 */ if (fZ) goto L_00898b38;
L_00898868:; BB(0x00898868);
    /* 00898868: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0089886a: mov ebx, dword ptr [eax + 0x1058] */ r_ebx = R32((u32)(r_eax+0x1058u));
    /* 00898870: shl ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00898872: mov eax, ebx */ r_eax = r_ebx;
    /* 00898874: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898877: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898878: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x89887du); f_008581c5();
    /* 0089887d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089887e: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00898881: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898883: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0089888a: je 0x89889b */ if (fZ) goto L_0089889b;
L_0089888c:; BB(0x0089888c);
    /* 0089888c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089888d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089888e: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898890: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898891: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898896u); f_0088fd17();
    /* 00898896: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898899: jmp 0x89889d */ goto L_0089889d;
L_0089889b:; BB(0x0089889b);
    /* 0089889b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0089889d:; BB(0x0089889d);
    /* 0089889d: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008988a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008988a3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008988a6: je 0x898b38 */ if (fZ) goto L_00898b38;
L_008988ac:; BB(0x008988ac);
    /* 008988ac: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008988ae: mov ebx, dword ptr [ecx + 0x1058] */ r_ebx = R32((u32)(r_ecx+0x1058u));
    /* 008988b4: and dword ptr [ebp - 0x28], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008988b8: or dword ptr [ebp - 0x24], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008988bc: or dword ptr [ebp - 0x18], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008988c0: shl ebx, 4 */ { u32 c = (4u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008988c3: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008988c5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 008988c8: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008988cb: cmp dword ptr [eax + 0x105c], 0 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008988d2: jbe 0x898b34 */ if ((fC||fZ)) goto L_00898b34;
L_008988d8:; BB(0x008988d8);
    /* 008988d8: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 008988db: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008988de: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
L_008988e1:; BB(0x008988e1);
    /* 008988e1: mov eax, dword ptr [edi - 8] */ r_eax = R32((u32)(r_edi+0xfffffff8u));
    /* 008988e4: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008988e8: cmp eax, dword ptr [ebp - 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffdcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008988eb: je 0x898917 */ if (fZ) goto L_00898917;
L_008988ed:; BB(0x008988ed);
    /* 008988ed: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008988f0: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008988f2: je 0x898908 */ if (fZ) goto L_00898908;
L_008988f4:; BB(0x008988f4);
    /* 008988f4: push dword ptr [ebp - 0x2c] */ { u32 v = R32((u32)(r_ebp+0xffffffd4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008988f7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008988f9: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 008988fc: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008988fe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00898900: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898903: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898906u); call_ind(t); }
    /* 00898906: jmp 0x898917 */ goto L_00898917;
L_00898908:; BB(0x00898908);
    /* 00898908: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0089890b: or dword ptr [ebp - 0x18], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089890f: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00898912: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00898915: mov ebx, eax */ r_ebx = r_eax;
L_00898917:; BB(0x00898917);
    /* 00898917: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00898919: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089891c: je 0x89892c */ if (fZ) goto L_0089892c;
L_0089891e:; BB(0x0089891e);
    /* 0089891e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898920: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00898922: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898923: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00898925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898926: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00898929: call dword ptr [edx + 4] */ { u32 t = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, 0x89892cu); call_ind(t); }
L_0089892c:; BB(0x0089892c);
    /* 0089892c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089892f: cmp dword ptr [eax + 0x1058], 0 */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898936: jbe 0x898b09 */ if ((fC||fZ)) goto L_00898b09;
L_0089893c:; BB(0x0089893c);
    /* 0089893c: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0089893f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00898942: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898945: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
L_00898948:; BB(0x00898948);
    /* 00898948: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0089894a: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089894d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089894f: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898952: lea edx, [ecx + ebx] */ r_edx = (u32)(r_ecx+r_ebx);
    /* 00898955: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00898957: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 0089895a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089895c: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 0089895f: fstp dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0)); FPOP();
    /* 00898962: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898964: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00898967: fstp dword ptr [ebp - 0x48] */ W_F32((u32)(r_ebp+0xffffffb8u), ST(0)); FPOP();
    /* 0089896a: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 0089896d: mov edx, dword ptr [eax - 8] */ r_edx = R32((u32)(r_eax+0xfffffff8u));
    /* 00898970: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898973: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00898976: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898978: lea esi, [edx + ebx] */ r_esi = (u32)(r_edx+r_ebx);
    /* 0089897b: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 0089897d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089897f: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898982: fstp dword ptr [ebp - 0x9c] */ W_F32((u32)(r_ebp+0xffffff64u), ST(0)); FPOP();
    /* 00898988: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0089898a: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 0089898d: fstp dword ptr [ebp - 0x98] */ W_F32((u32)(r_ebp+0xffffff68u), ST(0)); FPOP();
    /* 00898993: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898995: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898998: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0089899b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089899d: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 008989a3: fadd dword ptr [ebp - 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb0u));
    /* 008989a6: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 008989a9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008989ab: fld dword ptr [ebp - 0x9c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff64u)));
    /* 008989b1: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 008989b4: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 008989b7: fld dword ptr [ebp - 0x98] */ FPUSH(R_F32((u32)(r_ebp+0xffffff68u)));
    /* 008989bd: fadd dword ptr [ebp - 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb8u));
    /* 008989c0: fstp dword ptr [ebp - 0x78] */ W_F32((u32)(r_ebp+0xffffff88u), ST(0)); FPOP();
    /* 008989c3: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 008989c9: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008989cb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008989cd: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 008989d0: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 008989d3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008989d5: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 008989db: fld dword ptr [ebp - 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff84u)));
    /* 008989de: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008989e0: fstp dword ptr [ebp - 0xac] */ W_F32((u32)(r_ebp+0xffffff54u), ST(0)); FPOP();
    /* 008989e6: fld dword ptr [ebp - 0x78] */ FPUSH(R_F32((u32)(r_ebp+0xffffff88u)));
    /* 008989e9: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008989eb: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 008989f1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008989f3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008989f5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 008989f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008989f9: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008989fc: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008989fe: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00898a00: fstp dword ptr [ebp - 0xc0] */ W_F32((u32)(r_ebp+0xffffff40u), ST(0)); FPOP();
    /* 00898a06: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898a08: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00898a0b: fstp dword ptr [ebp - 0xbc] */ W_F32((u32)(r_ebp+0xffffff44u), ST(0)); FPOP();
    /* 00898a11: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898a13: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00898a16: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 00898a1c: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00898a1f: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 00898a22: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898a25: lea esi, [ebp - 0xd0] */ r_esi = (u32)(r_ebp+0xffffff30u);
    /* 00898a2b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898a2d: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898a30: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 00898a32: inc dword ptr [ebp - 0x34] */ { u32 ad = (u32)(r_ebp+0xffffffccu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00898a35: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898a37: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 00898a3a: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 00898a3d: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00898a40: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898a42: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00898a45: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00898a48: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898a4a: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 00898a4d: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00898a50: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00898a53: fadd dword ptr [ebp - 0xc0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff40u));
    /* 00898a59: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00898a5c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898a5e: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00898a61: fadd dword ptr [ebp - 0xbc] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff44u));
    /* 00898a67: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00898a6a: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00898a6d: fadd dword ptr [ebp - 0xb8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff48u));
    /* 00898a73: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 00898a76: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00898a79: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898a7b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898a7d: fld dword ptr [edi - 4] */ FPUSH(R_F32((u32)(r_edi+0xfffffffcu)));
    /* 00898a80: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00898a83: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 00898a86: add dword ptr [ebp - 0x3c], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffc4u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00898a8a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898a8c: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00898a92: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00898a95: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898a97: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 00898a9d: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 00898aa0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898aa2: fstp dword ptr [ebp - 0x88] */ W_F32((u32)(r_ebp+0xffffff78u), ST(0)); FPOP();
    /* 00898aa8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898aaa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898aac: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898aae: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898ab0: fld dword ptr [ebp - 0x90] */ FPUSH(R_F32((u32)(r_ebp+0xffffff70u)));
    /* 00898ab6: fadd dword ptr [ebp - 0xb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff50u));
    /* 00898abc: fstp dword ptr [ebp - 0xd0] */ W_F32((u32)(r_ebp+0xffffff30u), ST(0)); FPOP();
    /* 00898ac2: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 00898ac8: fadd dword ptr [ebp - 0xac] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff54u));
    /* 00898ace: fstp dword ptr [ebp - 0xcc] */ W_F32((u32)(r_ebp+0xffffff34u), ST(0)); FPOP();
    /* 00898ad4: fld dword ptr [ebp - 0x88] */ FPUSH(R_F32((u32)(r_ebp+0xffffff78u)));
    /* 00898ada: fadd dword ptr [ebp - 0xa8] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff58u));
    /* 00898ae0: fstp dword ptr [ebp - 0xc8] */ W_F32((u32)(r_ebp+0xffffff38u), ST(0)); FPOP();
    /* 00898ae6: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898ae8: fstp dword ptr [ebp - 0xc4] */ W_F32((u32)(r_ebp+0xffffff3cu), ST(0)); FPOP();
    /* 00898aee: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898aef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898af1: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898af2: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898af3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898af4: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00898af7: cmp edx, dword ptr [ecx + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00898afd: mov edi, dword ptr [ebp - 0x38] */ r_edi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00898b00: jb 0x898948 */ if (fC) goto L_00898948;
L_00898b06:; BB(0x00898b06);
    /* 00898b06: mov esi, dword ptr [ebp - 0x40] */ r_esi = R32((u32)(r_ebp+0xffffffc0u));
L_00898b09:; BB(0x00898b09);
    /* 00898b09: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898b0c: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00898b0f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898b11: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00898b13: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898b16: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x898b19u); call_ind(t); }
    /* 00898b19: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898b1c: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00898b1f: inc dword ptr [ebp - 0x28] */ { u32 ad = (u32)(r_ebp+0xffffffd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00898b22: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00898b25: cmp ecx, dword ptr [eax + 0x105c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00898b2b: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 00898b2e: jb 0x8988e1 */ if (fC) goto L_008988e1;
L_00898b34:; BB(0x00898b34);
    /* 00898b34: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00898b36: jmp 0x898b3d */ goto L_00898b3d;
L_00898b38:; BB(0x00898b38);
    /* 00898b38: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
L_00898b3d:; BB(0x00898b3d);
    /* 00898b3d: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898b40: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x898b45u); f_00857e98();
    /* 00898b45: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898b48: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x898b4du); f_00857e98();
    /* 00898b4d: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898b50: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x898b55u); f_00857e98();
    /* 00898b55: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898b58: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x898b5du); f_00857e98();
    /* 00898b5d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00898b60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00898b61: mov eax, esi */ r_eax = r_esi;
    /* 00898b63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00898b64:; BB(0x00898b64);
    /* 00898b64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00898b67: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00898b68: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00898b6f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00898b70: ret  */ FN_RET(0x0089878b); r_esp += 4; return;
}

void f_00898b71(void) /* sub_898B71 */
{
    FN_ENTER(0x00898b71);
    /* 00898b71: mov eax, 0x8cb6df */ r_eax = 0x8cb6dfu;
    /* 00898b76: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x898b7bu); f_008cb064();
    /* 00898b7b: sub esp, 0x198 */ {  u32 a = r_esp; u32 b = 0x198u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00898b81: and dword ptr [ebp - 0x44], 0 */ { u32 ad = (u32)(r_ebp+0xffffffbcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898b85: and dword ptr [ebp - 0x30], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898b89: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00898b8a: mov esi, ecx */ r_esi = r_ecx;
    /* 00898b8c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00898b8f: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00898b91: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00898b94: je 0x898ba0 */ if (fZ) goto L_00898ba0;
L_00898b96:; BB(0x00898b96);
    /* 00898b96: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00898b9b: jmp 0x899295 */ goto L_00899295;
L_00898ba0:; BB(0x00898ba0);
    /* 00898ba0: mov ecx, eax */ r_ecx = r_eax;
    /* 00898ba2: mov edx, eax */ r_edx = r_eax;
    /* 00898ba4: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00898ba7: shr eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00898baa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898bab: not ecx */ r_ecx = ~r_ecx;
    /* 00898bad: not eax */ r_eax = ~r_eax;
    /* 00898baf: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00898bb2: shr edx, 0x11 */ { u32 c = (17u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00898bb5: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00898bb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898bb9: not edx */ r_edx = ~r_edx;
    /* 00898bbb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00898bbe: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898bc1: mov ebx, dword ptr [eax + 0x1058] */ r_ebx = R32((u32)(r_eax+0x1058u));
    /* 00898bc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00898bc8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898bca: mov edi, dword ptr [ecx + 0x1058] */ r_edi = R32((u32)(r_ecx+0x1058u));
    /* 00898bd0: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00898bd3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00898bd6: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898bdbu); f_0089868b();
    /* 00898bdb: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898bdd: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898be0: mov edi, dword ptr [ecx + 0x105c] */ r_edi = R32((u32)(r_ecx+0x105cu));
    /* 00898be6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00898be9: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898bec: mov ebx, dword ptr [eax + 0x105c] */ r_ebx = R32((u32)(r_eax+0x105cu));
    /* 00898bf2: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898bf7u); f_0089868b();
    /* 00898bf7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898bf9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898bfc: mov edi, dword ptr [ecx + 0x1060] */ r_edi = R32((u32)(r_ecx+0x1060u));
    /* 00898c02: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00898c05: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898c08: mov ebx, dword ptr [eax + 0x1060] */ r_ebx = R32((u32)(r_eax+0x1060u));
    /* 00898c0e: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898c13u); f_0089868b();
    /* 00898c13: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00898c15: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00898c18: cmp dword ptr [ebp - 0x48], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c1b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00898c1e: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c24:; BB(0x00898c24);
    /* 00898c24: cmp dword ptr [ebp - 0x4c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c27: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c2d:; BB(0x00898c2d);
    /* 00898c2d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c2f: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c35:; BB(0x00898c35);
    /* 00898c35: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898c38: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 00898c3e: mov eax, edi */ r_eax = r_edi;
    /* 00898c40: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898c44: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x898c49u); f_008581c5();
    /* 00898c49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898c4a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00898c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c4f: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00898c52: mov ebx, 0x88f917 */ r_ebx = 0x88f917u;
    /* 00898c57: je 0x898c6b */ if (fZ) goto L_00898c6b;
L_00898c59:; BB(0x00898c59);
    /* 00898c59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5e: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898c63u); f_0088fd17();
    /* 00898c63: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00898c66: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00898c69: jmp 0x898c72 */ goto L_00898c72;
L_00898c6b:; BB(0x00898c6b);
    /* 00898c6b: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898c6f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00898c72:; BB(0x00898c72);
    /* 00898c72: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c78: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00898c7b: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c81:; BB(0x00898c81);
    /* 00898c81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00898c83: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 00898c89: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00898c8c: mov eax, edi */ r_eax = r_edi;
    /* 00898c8e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898c91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898c92: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x898c97u); f_008581c5();
    /* 00898c97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898c98: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00898c9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c9d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00898ca4: je 0x898cb5 */ if (fZ) goto L_00898cb5;
L_00898ca6:; BB(0x00898ca6);
    /* 00898ca6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898ca7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898ca8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898caa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898cab: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898cb0u); f_0088fd17();
    /* 00898cb0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00898cb3: jmp 0x898cb7 */ goto L_00898cb7;
L_00898cb5:; BB(0x00898cb5);
    /* 00898cb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00898cb7:; BB(0x00898cb7);
    /* 00898cb7: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898cbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898cbd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00898cc0: je 0x899261 */ if (fZ) goto L_00899261;
L_00898cc6:; BB(0x00898cc6);
    /* 00898cc6: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898cc8: mov edi, dword ptr [ecx + 0x1058] */ r_edi = R32((u32)(r_ecx+0x1058u));
    /* 00898cce: and dword ptr [ebp - 0x38], 0 */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898cd2: mov ecx, edi */ r_ecx = r_edi;
    /* 00898cd4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898cd7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898cd9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00898cdc: mov ecx, edi */ r_ecx = r_edi;
    /* 00898cde: lea edi, [edi + edi*2] */ r_edi = (u32)(r_edi+r_edi*2);
    /* 00898ce1: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898ce4: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00898ce7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898ce9: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00898ceb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00898cee: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898cf1: cmp dword ptr [eax + 0x1060], 0 */ {  u32 a = R32((u32)(r_eax+0x1060u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898cf8: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00898cfb: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00898cfe: jbe 0x89925d */ if ((fC||fZ)) goto L_0089925d;
L_00898d04:; BB(0x00898d04);
    /* 00898d04: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00898d07: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898d0a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00898d0d:; BB(0x00898d0d);
    /* 00898d0d: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d11: or dword ptr [ebp - 0x18], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d15: or dword ptr [ebp - 0x14], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d19: cmp dword ptr [eax + 0x105c], 0 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898d20: jbe 0x899244 */ if ((fC||fZ)) goto L_00899244;
L_00898d26:; BB(0x00898d26);
    /* 00898d26: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00898d29: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00898d2c:; BB(0x00898d2c);
    /* 00898d2c: mov eax, dword ptr [ebx - 8] */ r_eax = R32((u32)(r_ebx+0xfffffff8u));
    /* 00898d2f: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d33: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898d36: je 0x898d87 */ if (fZ) goto L_00898d87;
L_00898d38:; BB(0x00898d38);
    /* 00898d38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00898d3b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898d3d: je 0x898d69 */ if (fZ) goto L_00898d69;
L_00898d3f:; BB(0x00898d3f);
    /* 00898d3f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898d45: push dword ptr [edx - 8] */ { u32 v = R32((u32)(r_edx+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d48: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898d4a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00898d4d: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d50: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898d52: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898d55u); call_ind(t); }
    /* 00898d55: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d58: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898d5b: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d5d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898d5f: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d62: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898d64: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898d67u); call_ind(t); }
    /* 00898d67: jmp 0x898d87 */ goto L_00898d87;
L_00898d69:; BB(0x00898d69);
    /* 00898d69: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00898d6c: or dword ptr [ebp - 0x14], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d70: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00898d73: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898d76: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00898d79: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00898d7c: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 00898d7f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00898d82: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00898d85: mov edi, eax */ r_edi = r_eax;
L_00898d87:; BB(0x00898d87);
    /* 00898d87: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00898d89: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898d8c: je 0x898db4 */ if (fZ) goto L_00898db4;
L_00898d8e:; BB(0x00898d8e);
    /* 00898d8e: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898d94: push dword ptr [edx - 8] */ { u32 v = R32((u32)(r_edx+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d97: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898d99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898d9c: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d9f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898da1: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898da4u); call_ind(t); }
    /* 00898da4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898da7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898da9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898dab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898dac: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00898dae: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898db1: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898db4u); call_ind(t); }
L_00898db4:; BB(0x00898db4);
    /* 00898db4: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898db7: cmp dword ptr [eax + 0x1058], 0 */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898dbe: jbe 0x89921b */ if ((fC||fZ)) goto L_0089921b;
L_00898dc4:; BB(0x00898dc4);
    /* 00898dc4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00898dc7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00898dca: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898dcd: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_00898dd0:; BB(0x00898dd0);
    /* 00898dd0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00898dd2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00898dd5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898dd7: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898dda: lea edx, [ecx + edi] */ r_edx = (u32)(r_ecx+r_edi);
    /* 00898ddd: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00898ddf: fstp dword ptr [ebp - 0x114] */ W_F32((u32)(r_ebp+0xfffffeecu), ST(0)); FPOP();
    /* 00898de5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898de7: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00898dea: fstp dword ptr [ebp - 0x110] */ W_F32((u32)(r_ebp+0xfffffef0u), ST(0)); FPOP();
    /* 00898df0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898df2: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00898df5: fstp dword ptr [ebp - 0x10c] */ W_F32((u32)(r_ebp+0xfffffef4u), ST(0)); FPOP();
    /* 00898dfb: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00898dfe: mov edx, dword ptr [eax - 8] */ r_edx = R32((u32)(r_eax+0xfffffff8u));
    /* 00898e01: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898e04: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00898e07: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898e09: lea esi, [edx + edi] */ r_esi = (u32)(r_edx+r_edi);
    /* 00898e0c: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898e0e: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00898e11: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e13: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898e16: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 00898e19: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e1b: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898e1e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00898e21: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e23: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898e26: lea esi, [ecx + edi] */ r_esi = (u32)(r_ecx+r_edi);
    /* 00898e29: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00898e2c: fadd dword ptr [ebp - 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeecu));
    /* 00898e32: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 00898e38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898e3a: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00898e3d: fadd dword ptr [ebp - 0x110] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffef0u));
    /* 00898e43: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00898e49: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00898e4c: fadd dword ptr [ebp - 0x10c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffef4u));
    /* 00898e52: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 00898e58: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00898e5b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898e5d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898e5f: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00898e62: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 00898e68: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e6a: fstp dword ptr [ebp - 0x174] */ W_F32((u32)(r_ebp+0xfffffe8cu), ST(0)); FPOP();
    /* 00898e70: fld dword ptr [ebp - 0x90] */ FPUSH(R_F32((u32)(r_ebp+0xffffff70u)));
    /* 00898e76: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e78: fstp dword ptr [ebp - 0x170] */ W_F32((u32)(r_ebp+0xfffffe90u), ST(0)); FPOP();
    /* 00898e7e: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 00898e84: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e86: fstp dword ptr [ebp - 0x16c] */ W_F32((u32)(r_ebp+0xfffffe94u), ST(0)); FPOP();
    /* 00898e8c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e90: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898e92: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898e94: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00898e97: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898e99: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898e9b: fstp dword ptr [ebp - 0x194] */ W_F32((u32)(r_ebp+0xfffffe6cu), ST(0)); FPOP();
    /* 00898ea1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898ea3: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898ea6: fstp dword ptr [ebp - 0x190] */ W_F32((u32)(r_ebp+0xfffffe70u), ST(0)); FPOP();
    /* 00898eac: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898eae: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898eb1: fstp dword ptr [ebp - 0x18c] */ W_F32((u32)(r_ebp+0xfffffe74u), ST(0)); FPOP();
    /* 00898eb7: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898eba: lea esi, [edx + edi] */ r_esi = (u32)(r_edx+r_edi);
    /* 00898ebd: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898ec0: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898ec3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898ec5: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898ec7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898ec9: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898ecc: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 00898ed2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898ed4: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898ed7: fstp dword ptr [ebp - 0xac] */ W_F32((u32)(r_ebp+0xffffff54u), ST(0)); FPOP();
    /* 00898edd: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898edf: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898ee2: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 00898ee8: fadd dword ptr [ebp - 0x194] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe6cu));
    /* 00898eee: fstp dword ptr [ebp - 0x134] */ W_F32((u32)(r_ebp+0xfffffeccu), ST(0)); FPOP();
    /* 00898ef4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898ef6: fld dword ptr [ebp - 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff50u)));
    /* 00898efc: fadd dword ptr [ebp - 0x190] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe70u));
    /* 00898f02: fstp dword ptr [ebp - 0x130] */ W_F32((u32)(r_ebp+0xfffffed0u), ST(0)); FPOP();
    /* 00898f08: fld dword ptr [ebp - 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xffffff54u)));
    /* 00898f0e: fadd dword ptr [ebp - 0x18c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe74u));
    /* 00898f14: fstp dword ptr [ebp - 0x12c] */ W_F32((u32)(r_ebp+0xfffffed4u), ST(0)); FPOP();
    /* 00898f1a: fld dword ptr [ebp - 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff58u)));
    /* 00898f20: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898f22: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898f24: fld dword ptr [ebx - 4] */ FPUSH(R_F32((u32)(r_ebx+0xfffffffcu)));
    /* 00898f27: fld dword ptr [ebp - 0x134] */ FPUSH(R_F32((u32)(r_ebp+0xfffffeccu)));
    /* 00898f2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f2f: fstp dword ptr [ebp - 0xd4] */ W_F32((u32)(r_ebp+0xffffff2cu), ST(0)); FPOP();
    /* 00898f35: fld dword ptr [ebp - 0x130] */ FPUSH(R_F32((u32)(r_ebp+0xfffffed0u)));
    /* 00898f3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f3d: fstp dword ptr [ebp - 0xd0] */ W_F32((u32)(r_ebp+0xffffff30u), ST(0)); FPOP();
    /* 00898f43: fld dword ptr [ebp - 0x12c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffed4u)));
    /* 00898f49: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f4b: fstp dword ptr [ebp - 0xcc] */ W_F32((u32)(r_ebp+0xffffff34u), ST(0)); FPOP();
    /* 00898f51: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898f53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f55: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898f57: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898f59: fld dword ptr [ebp - 0xd4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff2cu)));
    /* 00898f5f: fadd dword ptr [ebp - 0x174] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe8cu));
    /* 00898f65: fstp dword ptr [ebp - 0xf4] */ W_F32((u32)(r_ebp+0xffffff0cu), ST(0)); FPOP();
    /* 00898f6b: fld dword ptr [ebp - 0xd0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff30u)));
    /* 00898f71: fadd dword ptr [ebp - 0x170] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe90u));
    /* 00898f77: fstp dword ptr [ebp - 0xf0] */ W_F32((u32)(r_ebp+0xffffff10u), ST(0)); FPOP();
    /* 00898f7d: fld dword ptr [ebp - 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff34u)));
    /* 00898f83: fadd dword ptr [ebp - 0x16c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe94u));
    /* 00898f89: fstp dword ptr [ebp - 0xec] */ W_F32((u32)(r_ebp+0xffffff14u), ST(0)); FPOP();
    /* 00898f8f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898f91: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898f93: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00898f96: fld dword ptr [ebp - 0xf4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff0cu)));
    /* 00898f9c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f9e: fstp dword ptr [ebp - 0x184] */ W_F32((u32)(r_ebp+0xfffffe7cu), ST(0)); FPOP();
    /* 00898fa4: fld dword ptr [ebp - 0xf0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff10u)));
    /* 00898faa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898fac: fstp dword ptr [ebp - 0x180] */ W_F32((u32)(r_ebp+0xfffffe80u), ST(0)); FPOP();
    /* 00898fb2: fld dword ptr [ebp - 0xec] */ FPUSH(R_F32((u32)(r_ebp+0xffffff14u)));
    /* 00898fb8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898fba: fstp dword ptr [ebp - 0x17c] */ W_F32((u32)(r_ebp+0xfffffe84u), ST(0)); FPOP();
    /* 00898fc0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898fc2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898fc4: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898fc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898fc8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898fcb: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00898fce: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00898fd0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898fd2: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898fd4: fstp dword ptr [ebp - 0x154] */ W_F32((u32)(r_ebp+0xfffffeacu), ST(0)); FPOP();
    /* 00898fda: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898fdc: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898fdf: fstp dword ptr [ebp - 0x150] */ W_F32((u32)(r_ebp+0xfffffeb0u), ST(0)); FPOP();
    /* 00898fe5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898fe7: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898fea: fstp dword ptr [ebp - 0x14c] */ W_F32((u32)(r_ebp+0xfffffeb4u), ST(0)); FPOP();
    /* 00898ff0: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898ff3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898ff6: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898ff9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00898ffb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898ffd: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898fff: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899001: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00899004: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00899007: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899009: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 0089900c: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0089900f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899011: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00899014: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899017: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899019: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0089901c: fadd dword ptr [ebp - 0x154] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeacu));
    /* 00899022: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00899028: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089902a: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 0089902d: fadd dword ptr [ebp - 0x150] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeb0u));
    /* 00899033: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 00899036: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00899039: fadd dword ptr [ebp - 0x14c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeb4u));
    /* 0089903f: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 00899042: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 00899045: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00899047: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00899049: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0089904c: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 00899052: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899054: fstp dword ptr [ebp - 0x124] */ W_F32((u32)(r_ebp+0xfffffedcu), ST(0)); FPOP();
    /* 0089905a: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 0089905d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089905f: fstp dword ptr [ebp - 0x120] */ W_F32((u32)(r_ebp+0xfffffee0u), ST(0)); FPOP();
    /* 00899065: fld dword ptr [ebp - 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff84u)));
    /* 00899068: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089906a: fstp dword ptr [ebp - 0x11c] */ W_F32((u32)(r_ebp+0xfffffee4u), ST(0)); FPOP();
    /* 00899070: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899072: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899074: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00899076: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00899078: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089907b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089907d: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0089907f: fstp dword ptr [ebp - 0xa4] */ W_F32((u32)(r_ebp+0xffffff5cu), ST(0)); FPOP();
    /* 00899085: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00899087: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 0089908a: fstp dword ptr [ebp - 0xa0] */ W_F32((u32)(r_ebp+0xffffff60u), ST(0)); FPOP();
    /* 00899090: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00899092: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00899095: fstp dword ptr [ebp - 0x9c] */ W_F32((u32)(r_ebp+0xffffff64u), ST(0)); FPOP();
    /* 0089909b: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 0089909e: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 008990a1: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 008990a4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008990a6: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008990a8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008990aa: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008990ad: fstp dword ptr [ebp - 0xc0] */ W_F32((u32)(r_ebp+0xffffff40u), ST(0)); FPOP();
    /* 008990b3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008990b5: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008990b8: fstp dword ptr [ebp - 0xbc] */ W_F32((u32)(r_ebp+0xffffff44u), ST(0)); FPOP();
    /* 008990be: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008990c0: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008990c3: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 008990c9: fadd dword ptr [ebp - 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff5cu));
    /* 008990cf: fstp dword ptr [ebp - 0xe4] */ W_F32((u32)(r_ebp+0xffffff1cu), ST(0)); FPOP();
    /* 008990d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008990d7: fld dword ptr [ebp - 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff40u)));
    /* 008990dd: fadd dword ptr [ebp - 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff60u));
    /* 008990e3: fstp dword ptr [ebp - 0xe0] */ W_F32((u32)(r_ebp+0xffffff20u), ST(0)); FPOP();
    /* 008990e9: fld dword ptr [ebp - 0xbc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff44u)));
    /* 008990ef: fadd dword ptr [ebp - 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff64u));
    /* 008990f5: fstp dword ptr [ebp - 0xdc] */ W_F32((u32)(r_ebp+0xffffff24u), ST(0)); FPOP();
    /* 008990fb: fld dword ptr [ebp - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff48u)));
    /* 00899101: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00899103: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00899105: fld dword ptr [ebx - 4] */ FPUSH(R_F32((u32)(r_ebx+0xfffffffcu)));
    /* 00899108: fld dword ptr [ebp - 0xe4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff1cu)));
    /* 0089910e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899110: fstp dword ptr [ebp - 0x104] */ W_F32((u32)(r_ebp+0xfffffefcu), ST(0)); FPOP();
    /* 00899116: fld dword ptr [ebp - 0xe0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff20u)));
    /* 0089911c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089911e: fstp dword ptr [ebp - 0x100] */ W_F32((u32)(r_ebp+0xffffff00u), ST(0)); FPOP();
    /* 00899124: fld dword ptr [ebp - 0xdc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff24u)));
    /* 0089912a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089912c: fstp dword ptr [ebp - 0xfc] */ W_F32((u32)(r_ebp+0xffffff04u), ST(0)); FPOP();
    /* 00899132: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899134: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899136: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00899138: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089913a: fld dword ptr [ebp - 0x104] */ FPUSH(R_F32((u32)(r_ebp+0xfffffefcu)));
    /* 00899140: fadd dword ptr [ebp - 0x124] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffedcu));
    /* 00899146: fstp dword ptr [ebp - 0x144] */ W_F32((u32)(r_ebp+0xfffffebcu), ST(0)); FPOP();
    /* 0089914c: fld dword ptr [ebp - 0x100] */ FPUSH(R_F32((u32)(r_ebp+0xffffff00u)));
    /* 00899152: fadd dword ptr [ebp - 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffee0u));
    /* 00899158: fstp dword ptr [ebp - 0x140] */ W_F32((u32)(r_ebp+0xfffffec0u), ST(0)); FPOP();
    /* 0089915e: fld dword ptr [ebp - 0xfc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff04u)));
    /* 00899164: fadd dword ptr [ebp - 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffee4u));
    /* 0089916a: fstp dword ptr [ebp - 0x13c] */ W_F32((u32)(r_ebp+0xfffffec4u), ST(0)); FPOP();
    /* 00899170: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00899172: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00899174: fld dword ptr [edi - 4] */ FPUSH(R_F32((u32)(r_edi+0xfffffffcu)));
    /* 00899177: fld dword ptr [ebp - 0x144] */ FPUSH(R_F32((u32)(r_ebp+0xfffffebcu)));
    /* 0089917d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089917f: fstp dword ptr [ebp - 0x164] */ W_F32((u32)(r_ebp+0xfffffe9cu), ST(0)); FPOP();
    /* 00899185: fld dword ptr [ebp - 0x140] */ FPUSH(R_F32((u32)(r_ebp+0xfffffec0u)));
    /* 0089918b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089918d: fstp dword ptr [ebp - 0x160] */ W_F32((u32)(r_ebp+0xfffffea0u), ST(0)); FPOP();
    /* 00899193: fld dword ptr [ebp - 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffec4u)));
    /* 00899199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089919b: fstp dword ptr [ebp - 0x15c] */ W_F32((u32)(r_ebp+0xfffffea4u), ST(0)); FPOP();
    /* 008991a1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008991a3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008991a5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 008991a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008991a9: fld dword ptr [ebp - 0x164] */ FPUSH(R_F32((u32)(r_ebp+0xfffffe9cu)));
    /* 008991af: fadd dword ptr [ebp - 0x184] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe7cu));
    /* 008991b5: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 008991b8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 008991bb: add dword ptr [ebp - 0x50], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffb0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008991bf: fstp dword ptr [ebp - 0x1a4] */ W_F32((u32)(r_ebp+0xfffffe5cu), ST(0)); FPOP();
    /* 008991c5: lea esi, [ebp - 0x1a4] */ r_esi = (u32)(r_ebp+0xfffffe5cu);
    /* 008991cb: fld dword ptr [ebp - 0x160] */ FPUSH(R_F32((u32)(r_ebp+0xfffffea0u)));
    /* 008991d1: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008991d4: fadd dword ptr [ebp - 0x180] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe80u));
    /* 008991da: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008991dd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008991e0: fstp dword ptr [ebp - 0x1a0] */ W_F32((u32)(r_ebp+0xfffffe60u), ST(0)); FPOP();
    /* 008991e6: fld dword ptr [ebp - 0x15c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffea4u)));
    /* 008991ec: fadd dword ptr [ebp - 0x17c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe84u));
    /* 008991f2: fstp dword ptr [ebp - 0x19c] */ W_F32((u32)(r_ebp+0xfffffe64u), ST(0)); FPOP();
    /* 008991f8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008991fa: fstp dword ptr [ebp - 0x198] */ W_F32((u32)(r_ebp+0xfffffe68u), ST(0)); FPOP();
    /* 00899200: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899201: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00899203: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899204: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899205: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899206: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00899209: cmp edx, dword ptr [ecx + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089920f: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899212: jb 0x898dd0 */ if (fC) goto L_00898dd0;
L_00899218:; BB(0x00899218);
    /* 00899218: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
L_0089921b:; BB(0x0089921b);
    /* 0089921b: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089921e: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00899221: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899224: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00899226: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00899229: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x89922cu); call_ind(t); }
    /* 0089922c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089922f: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00899232: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00899235: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899238: cmp ecx, dword ptr [eax + 0x105c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089923e: jb 0x898d2c */ if (fC) goto L_00898d2c;
L_00899244:; BB(0x00899244);
    /* 00899244: add dword ptr [ebp - 0x10], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00899248: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089924b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089924e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00899251: cmp ecx, dword ptr [eax + 0x1060] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899257: jb 0x898d0d */ if (fC) goto L_00898d0d;
L_0089925d:; BB(0x0089925d);
    /* 0089925d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089925f: jmp 0x899266 */ goto L_00899266;
L_00899261:; BB(0x00899261);
    /* 00899261: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
L_00899266:; BB(0x00899266);
    /* 00899266: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899269: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89926eu); f_00857e98();
    /* 0089926e: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899271: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899276u); f_00857e98();
    /* 00899276: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899279: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89927eu); f_00857e98();
    /* 0089927e: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00899281: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899286u); f_00857e98();
    /* 00899286: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899289: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89928eu); f_00857e98();
    /* 0089928e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00899291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899292: mov eax, esi */ r_eax = r_esi;
    /* 00899294: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00899295:; BB(0x00899295);
    /* 00899295: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899298: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00899299: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008992a0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008992a1: ret  */ FN_RET(0x00898b71); r_esp += 4; return;
}

void f_00898b8b(void)
{
    FN_ENTER(0x00898b8b);
    /* 00898b8b: int1  */ UNSUP(0x00898b8b, "int1 ");
    /* 00898b8c: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 00898b8f: cmp al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00898b91: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 00898b94: je 0x898ba0 */ if (fZ) goto L_00898ba0;
L_00898b96:; BB(0x00898b96);
    /* 00898b96: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00898b9b: jmp 0x899295 */ goto L_00899295;
L_00898ba0:; BB(0x00898ba0);
    /* 00898ba0: mov ecx, eax */ r_ecx = r_eax;
    /* 00898ba2: mov edx, eax */ r_edx = r_eax;
    /* 00898ba4: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00898ba7: shr eax, 0x12 */ { u32 c = (18u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00898baa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898bab: not ecx */ r_ecx = ~r_ecx;
    /* 00898bad: not eax */ r_eax = ~r_eax;
    /* 00898baf: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00898bb2: shr edx, 0x11 */ { u32 c = (17u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00898bb5: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00898bb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898bb9: not edx */ r_edx = ~r_edx;
    /* 00898bbb: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00898bbe: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898bc1: mov ebx, dword ptr [eax + 0x1058] */ r_ebx = R32((u32)(r_eax+0x1058u));
    /* 00898bc7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00898bc8: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898bca: mov edi, dword ptr [ecx + 0x1058] */ r_edi = R32((u32)(r_ecx+0x1058u));
    /* 00898bd0: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00898bd3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00898bd6: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898bdbu); f_0089868b();
    /* 00898bdb: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898bdd: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898be0: mov edi, dword ptr [ecx + 0x105c] */ r_edi = R32((u32)(r_ecx+0x105cu));
    /* 00898be6: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 00898be9: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898bec: mov ebx, dword ptr [eax + 0x105c] */ r_ebx = R32((u32)(r_eax+0x105cu));
    /* 00898bf2: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898bf7u); f_0089868b();
    /* 00898bf7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898bf9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898bfc: mov edi, dword ptr [ecx + 0x1060] */ r_edi = R32((u32)(r_ecx+0x1060u));
    /* 00898c02: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00898c05: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898c08: mov ebx, dword ptr [eax + 0x1060] */ r_ebx = R32((u32)(r_eax+0x1060u));
    /* 00898c0e: call 0x89868b */ r_esp -= 4; W32(r_esp, 0x898c13u); f_0089868b();
    /* 00898c13: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00898c15: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00898c18: cmp dword ptr [ebp - 0x48], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c1b: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00898c1e: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c24:; BB(0x00898c24);
    /* 00898c24: cmp dword ptr [ebp - 0x4c], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c27: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c2d:; BB(0x00898c2d);
    /* 00898c2d: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c2f: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c35:; BB(0x00898c35);
    /* 00898c35: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898c38: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 00898c3e: mov eax, edi */ r_eax = r_edi;
    /* 00898c40: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898c43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898c44: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x898c49u); f_008581c5();
    /* 00898c49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898c4a: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00898c4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c4f: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00898c52: mov ebx, 0x88f917 */ r_ebx = 0x88f917u;
    /* 00898c57: je 0x898c6b */ if (fZ) goto L_00898c6b;
L_00898c59:; BB(0x00898c59);
    /* 00898c59: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898c5e: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898c63u); f_0088fd17();
    /* 00898c63: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00898c66: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00898c69: jmp 0x898c72 */ goto L_00898c72;
L_00898c6b:; BB(0x00898c6b);
    /* 00898c6b: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898c6f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
L_00898c72:; BB(0x00898c72);
    /* 00898c72: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898c76: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c78: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 00898c7b: je 0x899261 */ if (fZ) goto L_00899261;
L_00898c81:; BB(0x00898c81);
    /* 00898c81: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00898c83: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 00898c89: shl edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00898c8c: mov eax, edi */ r_eax = r_edi;
    /* 00898c8e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898c91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898c92: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x898c97u); f_008581c5();
    /* 00898c97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00898c98: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00898c9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898c9d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00898ca4: je 0x898cb5 */ if (fZ) goto L_00898cb5;
L_00898ca6:; BB(0x00898ca6);
    /* 00898ca6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00898ca7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898ca8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00898caa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898cab: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898cb0u); f_0088fd17();
    /* 00898cb0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00898cb3: jmp 0x898cb7 */ goto L_00898cb7;
L_00898cb5:; BB(0x00898cb5);
    /* 00898cb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00898cb7:; BB(0x00898cb7);
    /* 00898cb7: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898cbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898cbd: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00898cc0: je 0x899261 */ if (fZ) goto L_00899261;
L_00898cc6:; BB(0x00898cc6);
    /* 00898cc6: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898cc8: mov edi, dword ptr [ecx + 0x1058] */ r_edi = R32((u32)(r_ecx+0x1058u));
    /* 00898cce: and dword ptr [ebp - 0x38], 0 */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898cd2: mov ecx, edi */ r_ecx = r_edi;
    /* 00898cd4: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898cd7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898cd9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00898cdc: mov ecx, edi */ r_ecx = r_edi;
    /* 00898cde: lea edi, [edi + edi*2] */ r_edi = (u32)(r_edi+r_edi*2);
    /* 00898ce1: shl ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898ce4: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00898ce7: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898ce9: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00898ceb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00898cee: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898cf1: cmp dword ptr [eax + 0x1060], 0 */ {  u32 a = R32((u32)(r_eax+0x1060u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898cf8: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00898cfb: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00898cfe: jbe 0x89925d */ if ((fC||fZ)) goto L_0089925d;
L_00898d04:; BB(0x00898d04);
    /* 00898d04: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00898d07: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00898d0a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00898d0d:; BB(0x00898d0d);
    /* 00898d0d: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d11: or dword ptr [ebp - 0x18], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d15: or dword ptr [ebp - 0x14], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d19: cmp dword ptr [eax + 0x105c], 0 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898d20: jbe 0x899244 */ if ((fC||fZ)) goto L_00899244;
L_00898d26:; BB(0x00898d26);
    /* 00898d26: mov ebx, dword ptr [ebp - 0x4c] */ r_ebx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00898d29: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00898d2c:; BB(0x00898d2c);
    /* 00898d2c: mov eax, dword ptr [ebx - 8] */ r_eax = R32((u32)(r_ebx+0xfffffff8u));
    /* 00898d2f: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d33: cmp eax, dword ptr [ebp - 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898d36: je 0x898d87 */ if (fZ) goto L_00898d87;
L_00898d38:; BB(0x00898d38);
    /* 00898d38: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00898d3b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898d3d: je 0x898d69 */ if (fZ) goto L_00898d69;
L_00898d3f:; BB(0x00898d3f);
    /* 00898d3f: push dword ptr [ebp - 0x28] */ { u32 v = R32((u32)(r_ebp+0xffffffd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d42: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898d45: push dword ptr [edx - 8] */ { u32 v = R32((u32)(r_edx+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d48: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898d4a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00898d4d: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d50: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898d52: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898d55u); call_ind(t); }
    /* 00898d55: push dword ptr [ebp - 0x40] */ { u32 v = R32((u32)(r_ebp+0xffffffc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d58: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898d5b: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d5d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898d5f: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d62: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898d64: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898d67u); call_ind(t); }
    /* 00898d67: jmp 0x898d87 */ goto L_00898d87;
L_00898d69:; BB(0x00898d69);
    /* 00898d69: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00898d6c: or dword ptr [ebp - 0x14], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898d70: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00898d73: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898d76: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00898d79: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00898d7c: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 00898d7f: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00898d82: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00898d85: mov edi, eax */ r_edi = r_eax;
L_00898d87:; BB(0x00898d87);
    /* 00898d87: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00898d89: cmp eax, dword ptr [ebp - 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898d8c: je 0x898db4 */ if (fZ) goto L_00898db4;
L_00898d8e:; BB(0x00898d8e);
    /* 00898d8e: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d91: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898d94: push dword ptr [edx - 8] */ { u32 v = R32((u32)(r_edx+0xfffffff8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d97: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898d99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00898d9c: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898d9f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898da1: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898da4u); call_ind(t); }
    /* 00898da4: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898da7: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00898da9: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898dab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898dac: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 00898dae: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00898db1: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x898db4u); call_ind(t); }
L_00898db4:; BB(0x00898db4);
    /* 00898db4: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00898db7: cmp dword ptr [eax + 0x1058], 0 */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898dbe: jbe 0x89921b */ if ((fC||fZ)) goto L_0089921b;
L_00898dc4:; BB(0x00898dc4);
    /* 00898dc4: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00898dc7: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00898dca: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898dcd: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
L_00898dd0:; BB(0x00898dd0);
    /* 00898dd0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00898dd2: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00898dd5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898dd7: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00898dda: lea edx, [ecx + edi] */ r_edx = (u32)(r_ecx+r_edi);
    /* 00898ddd: fmul dword ptr [edx] */ ST(0) = ST(0) * R_F32((u32)(r_edx));
    /* 00898ddf: fstp dword ptr [ebp - 0x114] */ W_F32((u32)(r_ebp+0xfffffeecu), ST(0)); FPOP();
    /* 00898de5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898de7: fmul dword ptr [edx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x4u));
    /* 00898dea: fstp dword ptr [ebp - 0x110] */ W_F32((u32)(r_ebp+0xfffffef0u), ST(0)); FPOP();
    /* 00898df0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898df2: fmul dword ptr [edx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0x8u));
    /* 00898df5: fstp dword ptr [ebp - 0x10c] */ W_F32((u32)(r_ebp+0xfffffef4u), ST(0)); FPOP();
    /* 00898dfb: fmul dword ptr [edx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+0xcu));
    /* 00898dfe: mov edx, dword ptr [eax - 8] */ r_edx = R32((u32)(r_eax+0xfffffff8u));
    /* 00898e01: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898e04: shl edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00898e07: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898e09: lea esi, [edx + edi] */ r_esi = (u32)(r_edx+r_edi);
    /* 00898e0c: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898e0e: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00898e11: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e13: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898e16: fstp dword ptr [ebp - 0x60] */ W_F32((u32)(r_ebp+0xffffffa0u), ST(0)); FPOP();
    /* 00898e19: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e1b: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898e1e: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 00898e21: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e23: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898e26: lea esi, [ecx + edi] */ r_esi = (u32)(r_ecx+r_edi);
    /* 00898e29: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 00898e2c: fadd dword ptr [ebp - 0x114] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeecu));
    /* 00898e32: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 00898e38: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898e3a: fld dword ptr [ebp - 0x60] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa0u)));
    /* 00898e3d: fadd dword ptr [ebp - 0x110] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffef0u));
    /* 00898e43: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00898e49: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 00898e4c: fadd dword ptr [ebp - 0x10c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffef4u));
    /* 00898e52: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 00898e58: fld dword ptr [ebp - 0x58] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa8u)));
    /* 00898e5b: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898e5d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898e5f: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 00898e62: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 00898e68: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e6a: fstp dword ptr [ebp - 0x174] */ W_F32((u32)(r_ebp+0xfffffe8cu), ST(0)); FPOP();
    /* 00898e70: fld dword ptr [ebp - 0x90] */ FPUSH(R_F32((u32)(r_ebp+0xffffff70u)));
    /* 00898e76: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e78: fstp dword ptr [ebp - 0x170] */ W_F32((u32)(r_ebp+0xfffffe90u), ST(0)); FPOP();
    /* 00898e7e: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 00898e84: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e86: fstp dword ptr [ebp - 0x16c] */ W_F32((u32)(r_ebp+0xfffffe94u), ST(0)); FPOP();
    /* 00898e8c: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898e8e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898e90: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898e92: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898e94: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00898e97: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898e99: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898e9b: fstp dword ptr [ebp - 0x194] */ W_F32((u32)(r_ebp+0xfffffe6cu), ST(0)); FPOP();
    /* 00898ea1: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898ea3: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898ea6: fstp dword ptr [ebp - 0x190] */ W_F32((u32)(r_ebp+0xfffffe70u), ST(0)); FPOP();
    /* 00898eac: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898eae: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898eb1: fstp dword ptr [ebp - 0x18c] */ W_F32((u32)(r_ebp+0xfffffe74u), ST(0)); FPOP();
    /* 00898eb7: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898eba: lea esi, [edx + edi] */ r_esi = (u32)(r_edx+r_edi);
    /* 00898ebd: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898ec0: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898ec3: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898ec5: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898ec7: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898ec9: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898ecc: fstp dword ptr [ebp - 0xb0] */ W_F32((u32)(r_ebp+0xffffff50u), ST(0)); FPOP();
    /* 00898ed2: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898ed4: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898ed7: fstp dword ptr [ebp - 0xac] */ W_F32((u32)(r_ebp+0xffffff54u), ST(0)); FPOP();
    /* 00898edd: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898edf: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898ee2: fstp dword ptr [ebp - 0xa8] */ W_F32((u32)(r_ebp+0xffffff58u), ST(0)); FPOP();
    /* 00898ee8: fadd dword ptr [ebp - 0x194] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe6cu));
    /* 00898eee: fstp dword ptr [ebp - 0x134] */ W_F32((u32)(r_ebp+0xfffffeccu), ST(0)); FPOP();
    /* 00898ef4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898ef6: fld dword ptr [ebp - 0xb0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff50u)));
    /* 00898efc: fadd dword ptr [ebp - 0x190] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe70u));
    /* 00898f02: fstp dword ptr [ebp - 0x130] */ W_F32((u32)(r_ebp+0xfffffed0u), ST(0)); FPOP();
    /* 00898f08: fld dword ptr [ebp - 0xac] */ FPUSH(R_F32((u32)(r_ebp+0xffffff54u)));
    /* 00898f0e: fadd dword ptr [ebp - 0x18c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe74u));
    /* 00898f14: fstp dword ptr [ebp - 0x12c] */ W_F32((u32)(r_ebp+0xfffffed4u), ST(0)); FPOP();
    /* 00898f1a: fld dword ptr [ebp - 0xa8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff58u)));
    /* 00898f20: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898f22: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898f24: fld dword ptr [ebx - 4] */ FPUSH(R_F32((u32)(r_ebx+0xfffffffcu)));
    /* 00898f27: fld dword ptr [ebp - 0x134] */ FPUSH(R_F32((u32)(r_ebp+0xfffffeccu)));
    /* 00898f2d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f2f: fstp dword ptr [ebp - 0xd4] */ W_F32((u32)(r_ebp+0xffffff2cu), ST(0)); FPOP();
    /* 00898f35: fld dword ptr [ebp - 0x130] */ FPUSH(R_F32((u32)(r_ebp+0xfffffed0u)));
    /* 00898f3b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f3d: fstp dword ptr [ebp - 0xd0] */ W_F32((u32)(r_ebp+0xffffff30u), ST(0)); FPOP();
    /* 00898f43: fld dword ptr [ebp - 0x12c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffed4u)));
    /* 00898f49: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f4b: fstp dword ptr [ebp - 0xcc] */ W_F32((u32)(r_ebp+0xffffff34u), ST(0)); FPOP();
    /* 00898f51: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898f53: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f55: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898f57: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898f59: fld dword ptr [ebp - 0xd4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff2cu)));
    /* 00898f5f: fadd dword ptr [ebp - 0x174] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe8cu));
    /* 00898f65: fstp dword ptr [ebp - 0xf4] */ W_F32((u32)(r_ebp+0xffffff0cu), ST(0)); FPOP();
    /* 00898f6b: fld dword ptr [ebp - 0xd0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff30u)));
    /* 00898f71: fadd dword ptr [ebp - 0x170] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe90u));
    /* 00898f77: fstp dword ptr [ebp - 0xf0] */ W_F32((u32)(r_ebp+0xffffff10u), ST(0)); FPOP();
    /* 00898f7d: fld dword ptr [ebp - 0xcc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff34u)));
    /* 00898f83: fadd dword ptr [ebp - 0x16c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe94u));
    /* 00898f89: fstp dword ptr [ebp - 0xec] */ W_F32((u32)(r_ebp+0xffffff14u), ST(0)); FPOP();
    /* 00898f8f: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00898f91: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898f93: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00898f96: fld dword ptr [ebp - 0xf4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff0cu)));
    /* 00898f9c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898f9e: fstp dword ptr [ebp - 0x184] */ W_F32((u32)(r_ebp+0xfffffe7cu), ST(0)); FPOP();
    /* 00898fa4: fld dword ptr [ebp - 0xf0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff10u)));
    /* 00898faa: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898fac: fstp dword ptr [ebp - 0x180] */ W_F32((u32)(r_ebp+0xfffffe80u), ST(0)); FPOP();
    /* 00898fb2: fld dword ptr [ebp - 0xec] */ FPUSH(R_F32((u32)(r_ebp+0xffffff14u)));
    /* 00898fb8: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898fba: fstp dword ptr [ebp - 0x17c] */ W_F32((u32)(r_ebp+0xfffffe84u), ST(0)); FPOP();
    /* 00898fc0: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898fc2: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00898fc4: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00898fc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898fc8: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898fcb: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 00898fce: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00898fd0: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898fd2: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898fd4: fstp dword ptr [ebp - 0x154] */ W_F32((u32)(r_ebp+0xfffffeacu), ST(0)); FPOP();
    /* 00898fda: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898fdc: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00898fdf: fstp dword ptr [ebp - 0x150] */ W_F32((u32)(r_ebp+0xfffffeb0u), ST(0)); FPOP();
    /* 00898fe5: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898fe7: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 00898fea: fstp dword ptr [ebp - 0x14c] */ W_F32((u32)(r_ebp+0xfffffeb4u), ST(0)); FPOP();
    /* 00898ff0: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00898ff3: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00898ff6: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 00898ff9: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00898ffb: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00898ffd: fmul dword ptr [esi] */ ST(0) = ST(0) * R_F32((u32)(r_esi));
    /* 00898fff: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899001: fmul dword ptr [esi + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x4u));
    /* 00899004: fstp dword ptr [ebp - 0x70] */ W_F32((u32)(r_ebp+0xffffff90u), ST(0)); FPOP();
    /* 00899007: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899009: fmul dword ptr [esi + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x8u));
    /* 0089900c: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 0089900f: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899011: fmul dword ptr [esi + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0xcu));
    /* 00899014: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00899017: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00899019: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0089901c: fadd dword ptr [ebp - 0x154] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeacu));
    /* 00899022: fstp dword ptr [ebp - 0x84] */ W_F32((u32)(r_ebp+0xffffff7cu), ST(0)); FPOP();
    /* 00899028: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089902a: fld dword ptr [ebp - 0x70] */ FPUSH(R_F32((u32)(r_ebp+0xffffff90u)));
    /* 0089902d: fadd dword ptr [ebp - 0x150] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeb0u));
    /* 00899033: fstp dword ptr [ebp - 0x80] */ W_F32((u32)(r_ebp+0xffffff80u), ST(0)); FPOP();
    /* 00899036: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00899039: fadd dword ptr [ebp - 0x14c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffeb4u));
    /* 0089903f: fstp dword ptr [ebp - 0x7c] */ W_F32((u32)(r_ebp+0xffffff84u), ST(0)); FPOP();
    /* 00899042: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 00899045: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00899047: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00899049: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0089904c: fld dword ptr [ebp - 0x84] */ FPUSH(R_F32((u32)(r_ebp+0xffffff7cu)));
    /* 00899052: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899054: fstp dword ptr [ebp - 0x124] */ W_F32((u32)(r_ebp+0xfffffedcu), ST(0)); FPOP();
    /* 0089905a: fld dword ptr [ebp - 0x80] */ FPUSH(R_F32((u32)(r_ebp+0xffffff80u)));
    /* 0089905d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089905f: fstp dword ptr [ebp - 0x120] */ W_F32((u32)(r_ebp+0xfffffee0u), ST(0)); FPOP();
    /* 00899065: fld dword ptr [ebp - 0x7c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff84u)));
    /* 00899068: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089906a: fstp dword ptr [ebp - 0x11c] */ W_F32((u32)(r_ebp+0xfffffee4u), ST(0)); FPOP();
    /* 00899070: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899072: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899074: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00899076: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00899078: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 0089907b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0089907d: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 0089907f: fstp dword ptr [ebp - 0xa4] */ W_F32((u32)(r_ebp+0xffffff5cu), ST(0)); FPOP();
    /* 00899085: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00899087: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 0089908a: fstp dword ptr [ebp - 0xa0] */ W_F32((u32)(r_ebp+0xffffff60u), ST(0)); FPOP();
    /* 00899090: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00899092: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 00899095: fstp dword ptr [ebp - 0x9c] */ W_F32((u32)(r_ebp+0xffffff64u), ST(0)); FPOP();
    /* 0089909b: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 0089909e: fld dword ptr [eax - 4] */ FPUSH(R_F32((u32)(r_eax+0xfffffffcu)));
    /* 008990a1: lea ecx, [edx + esi] */ r_ecx = (u32)(r_edx+r_esi);
    /* 008990a4: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 008990a6: fmul dword ptr [ecx] */ ST(0) = ST(0) * R_F32((u32)(r_ecx));
    /* 008990a8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008990aa: fmul dword ptr [ecx + 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x4u));
    /* 008990ad: fstp dword ptr [ebp - 0xc0] */ W_F32((u32)(r_ebp+0xffffff40u), ST(0)); FPOP();
    /* 008990b3: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008990b5: fmul dword ptr [ecx + 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x8u));
    /* 008990b8: fstp dword ptr [ebp - 0xbc] */ W_F32((u32)(r_ebp+0xffffff44u), ST(0)); FPOP();
    /* 008990be: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008990c0: fmul dword ptr [ecx + 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0xcu));
    /* 008990c3: fstp dword ptr [ebp - 0xb8] */ W_F32((u32)(r_ebp+0xffffff48u), ST(0)); FPOP();
    /* 008990c9: fadd dword ptr [ebp - 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff5cu));
    /* 008990cf: fstp dword ptr [ebp - 0xe4] */ W_F32((u32)(r_ebp+0xffffff1cu), ST(0)); FPOP();
    /* 008990d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008990d7: fld dword ptr [ebp - 0xc0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff40u)));
    /* 008990dd: fadd dword ptr [ebp - 0xa0] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff60u));
    /* 008990e3: fstp dword ptr [ebp - 0xe0] */ W_F32((u32)(r_ebp+0xffffff20u), ST(0)); FPOP();
    /* 008990e9: fld dword ptr [ebp - 0xbc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff44u)));
    /* 008990ef: fadd dword ptr [ebp - 0x9c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff64u));
    /* 008990f5: fstp dword ptr [ebp - 0xdc] */ W_F32((u32)(r_ebp+0xffffff24u), ST(0)); FPOP();
    /* 008990fb: fld dword ptr [ebp - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff48u)));
    /* 00899101: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00899103: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00899105: fld dword ptr [ebx - 4] */ FPUSH(R_F32((u32)(r_ebx+0xfffffffcu)));
    /* 00899108: fld dword ptr [ebp - 0xe4] */ FPUSH(R_F32((u32)(r_ebp+0xffffff1cu)));
    /* 0089910e: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899110: fstp dword ptr [ebp - 0x104] */ W_F32((u32)(r_ebp+0xfffffefcu), ST(0)); FPOP();
    /* 00899116: fld dword ptr [ebp - 0xe0] */ FPUSH(R_F32((u32)(r_ebp+0xffffff20u)));
    /* 0089911c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089911e: fstp dword ptr [ebp - 0x100] */ W_F32((u32)(r_ebp+0xffffff00u), ST(0)); FPOP();
    /* 00899124: fld dword ptr [ebp - 0xdc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff24u)));
    /* 0089912a: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089912c: fstp dword ptr [ebp - 0xfc] */ W_F32((u32)(r_ebp+0xffffff04u), ST(0)); FPOP();
    /* 00899132: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00899134: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00899136: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00899138: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0089913a: fld dword ptr [ebp - 0x104] */ FPUSH(R_F32((u32)(r_ebp+0xfffffefcu)));
    /* 00899140: fadd dword ptr [ebp - 0x124] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffedcu));
    /* 00899146: fstp dword ptr [ebp - 0x144] */ W_F32((u32)(r_ebp+0xfffffebcu), ST(0)); FPOP();
    /* 0089914c: fld dword ptr [ebp - 0x100] */ FPUSH(R_F32((u32)(r_ebp+0xffffff00u)));
    /* 00899152: fadd dword ptr [ebp - 0x120] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffee0u));
    /* 00899158: fstp dword ptr [ebp - 0x140] */ W_F32((u32)(r_ebp+0xfffffec0u), ST(0)); FPOP();
    /* 0089915e: fld dword ptr [ebp - 0xfc] */ FPUSH(R_F32((u32)(r_ebp+0xffffff04u)));
    /* 00899164: fadd dword ptr [ebp - 0x11c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffee4u));
    /* 0089916a: fstp dword ptr [ebp - 0x13c] */ W_F32((u32)(r_ebp+0xfffffec4u), ST(0)); FPOP();
    /* 00899170: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00899172: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00899174: fld dword ptr [edi - 4] */ FPUSH(R_F32((u32)(r_edi+0xfffffffcu)));
    /* 00899177: fld dword ptr [ebp - 0x144] */ FPUSH(R_F32((u32)(r_ebp+0xfffffebcu)));
    /* 0089917d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089917f: fstp dword ptr [ebp - 0x164] */ W_F32((u32)(r_ebp+0xfffffe9cu), ST(0)); FPOP();
    /* 00899185: fld dword ptr [ebp - 0x140] */ FPUSH(R_F32((u32)(r_ebp+0xfffffec0u)));
    /* 0089918b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089918d: fstp dword ptr [ebp - 0x160] */ W_F32((u32)(r_ebp+0xfffffea0u), ST(0)); FPOP();
    /* 00899193: fld dword ptr [ebp - 0x13c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffec4u)));
    /* 00899199: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0089919b: fstp dword ptr [ebp - 0x15c] */ W_F32((u32)(r_ebp+0xfffffea4u), ST(0)); FPOP();
    /* 008991a1: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 008991a3: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 008991a5: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 008991a7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008991a9: fld dword ptr [ebp - 0x164] */ FPUSH(R_F32((u32)(r_ebp+0xfffffe9cu)));
    /* 008991af: fadd dword ptr [ebp - 0x184] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe7cu));
    /* 008991b5: mov edi, dword ptr [ebp - 0x50] */ r_edi = R32((u32)(r_ebp+0xffffffb0u));
    /* 008991b8: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 008991bb: add dword ptr [ebp - 0x50], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffb0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008991bf: fstp dword ptr [ebp - 0x1a4] */ W_F32((u32)(r_ebp+0xfffffe5cu), ST(0)); FPOP();
    /* 008991c5: lea esi, [ebp - 0x1a4] */ r_esi = (u32)(r_ebp+0xfffffe5cu);
    /* 008991cb: fld dword ptr [ebp - 0x160] */ FPUSH(R_F32((u32)(r_ebp+0xfffffea0u)));
    /* 008991d1: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008991d4: fadd dword ptr [ebp - 0x180] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe80u));
    /* 008991da: inc dword ptr [ebp - 0x20] */ { u32 ad = (u32)(r_ebp+0xffffffe0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008991dd: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 008991e0: fstp dword ptr [ebp - 0x1a0] */ W_F32((u32)(r_ebp+0xfffffe60u), ST(0)); FPOP();
    /* 008991e6: fld dword ptr [ebp - 0x15c] */ FPUSH(R_F32((u32)(r_ebp+0xfffffea4u)));
    /* 008991ec: fadd dword ptr [ebp - 0x17c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffe84u));
    /* 008991f2: fstp dword ptr [ebp - 0x19c] */ W_F32((u32)(r_ebp+0xfffffe64u), ST(0)); FPOP();
    /* 008991f8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 008991fa: fstp dword ptr [ebp - 0x198] */ W_F32((u32)(r_ebp+0xfffffe68u), ST(0)); FPOP();
    /* 00899200: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899201: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00899203: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899204: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899205: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00899206: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00899209: cmp edx, dword ptr [ecx + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089920f: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00899212: jb 0x898dd0 */ if (fC) goto L_00898dd0;
L_00899218:; BB(0x00899218);
    /* 00899218: mov esi, dword ptr [ebp - 0x54] */ r_esi = R32((u32)(r_ebp+0xffffffacu));
L_0089921b:; BB(0x0089921b);
    /* 0089921b: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0089921e: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00899221: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899224: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00899226: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00899229: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x89922cu); call_ind(t); }
    /* 0089922c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089922f: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00899232: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00899235: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00899238: cmp ecx, dword ptr [eax + 0x105c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089923e: jb 0x898d2c */ if (fC) goto L_00898d2c;
L_00899244:; BB(0x00899244);
    /* 00899244: add dword ptr [ebp - 0x10], 0x10 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00899248: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089924b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0089924e: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00899251: cmp ecx, dword ptr [eax + 0x1060] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00899257: jb 0x898d0d */ if (fC) goto L_00898d0d;
L_0089925d:; BB(0x0089925d);
    /* 0089925d: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0089925f: jmp 0x899266 */ goto L_00899266;
L_00899261:; BB(0x00899261);
    /* 00899261: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
L_00899266:; BB(0x00899266);
    /* 00899266: push dword ptr [ebp - 0x48] */ { u32 v = R32((u32)(r_ebp+0xffffffb8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899269: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89926eu); f_00857e98();
    /* 0089926e: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899271: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899276u); f_00857e98();
    /* 00899276: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899279: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89927eu); f_00857e98();
    /* 0089927e: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00899281: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x899286u); f_00857e98();
    /* 00899286: push dword ptr [ebp - 0x30] */ { u32 v = R32((u32)(r_ebp+0xffffffd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00899289: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x89928eu); f_00857e98();
    /* 0089928e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00899291: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00899292: mov eax, esi */ r_eax = r_esi;
    /* 00899294: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00899295:; BB(0x00899295);
    /* 00899295: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00899298: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00899299: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008992a0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008992a1: ret  */ FN_RET(0x00898b8b); r_esp += 4; return;
}

