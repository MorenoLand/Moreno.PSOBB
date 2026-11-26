#include "protos.h"

void f_00858467(void) /* ___wcstombs_mt */
{
    FN_ENTER(0x00858467);
    /* 00858467: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00858468: mov ebp, esp */ r_ebp = r_esp;
    /* 0085846a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085846d: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00858472: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858473: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00858474: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858475: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00858478: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085847a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085847c: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085847e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00858481: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 00858484: je 0x8585d8 */ if (fZ) goto L_008585d8;
L_0085848a:; BB(0x0085848a);
    /* 0085848a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 0085848d: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085848f: jne 0x858498 */ if (!fZ) goto L_00858498;
L_00858491:; BB(0x00858491);
    /* 00858491: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858493: jmp 0x858572 */ goto L_00858572;
L_00858498:; BB(0x00858498);
    /* 00858498: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085849b: cmp dword ptr [ecx + 0x14], ebx */ {  u32 a = R32((u32)(r_ecx+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085849e: jne 0x8584d3 */ if (!fZ) goto L_008584d3;
L_008584a0:; BB(0x008584a0);
    /* 008584a0: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008584a2: jbe 0x8585d4 */ if ((fC||fZ)) goto L_008585d4;
L_008584a8:; BB(0x008584a8);
    /* 008584a8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
L_008584ab:; BB(0x008584ab);
    /* 008584ab: cmp word ptr [ecx], 0xff */ {  u32 a = R16((u32)(r_ecx)); u32 b = 0xffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008584b0: ja 0x858564 */ if ((!fC&&!fZ)) goto L_00858564;
L_008584b6:; BB(0x008584b6);
    /* 008584b6: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 008584b8: mov byte ptr [esi + edi], al */ W8((u32)(r_esi+r_edi), (u8)r_eax);
    /* 008584bb: mov ax, word ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ecx))) & 0xffffu);
    /* 008584be: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008584bf: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008584c0: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008584c3: je 0x8585d4 */ if (fZ) goto L_008585d4;
L_008584c9:; BB(0x008584c9);
    /* 008584c9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008584ca: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008584cc: jb 0x8584ab */ if (fC) goto L_008584ab;
L_008584ce:; BB(0x008584ce);
    /* 008584ce: jmp 0x8585d4 */ goto L_008585d4;
L_008584d3:; BB(0x008584d3);
    /* 008584d3: cmp dword ptr [0xa23f90], 1 */ {  u32 a = R32((u32)(0xa23f90u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008584da: jne 0x85852c */ if (!fZ) goto L_0085852c;
L_008584dc:; BB(0x008584dc);
    /* 008584dc: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008584de: jbe 0x858503 */ if ((fC||fZ)) goto L_00858503;
L_008584e0:; BB(0x008584e0);
    /* 008584e0: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008584e3: mov esi, edx */ r_esi = r_edx;
L_008584e5:; BB(0x008584e5);
    /* 008584e5: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008584e8: je 0x8584ef */ if (fZ) goto L_008584ef;
L_008584ea:; BB(0x008584ea);
    /* 008584ea: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008584eb: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008584ec: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008584ed: jne 0x8584e5 */ if (!fZ) goto L_008584e5;
L_008584ef:; BB(0x008584ef);
    /* 008584ef: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008584f1: je 0x858503 */ if (fZ) goto L_00858503;
L_008584f3:; BB(0x008584f3);
    /* 008584f3: cmp word ptr [eax], bx */ {  u32 a = R16((u32)(r_eax)); u32 b = (u16)r_ebx; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 008584f6: jne 0x858503 */ if (!fZ) goto L_00858503;
L_008584f8:; BB(0x008584f8);
    /* 008584f8: sub eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008584fb: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008584fd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008584fe: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00858501: mov edx, eax */ r_edx = r_eax;
L_00858503:; BB(0x00858503);
    /* 00858503: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00858506: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858507: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00858509: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085850a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085850b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085850e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085850f: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858512: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x858518u); call_ind(t); }
    /* 00858518: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085851a: je 0x858564 */ if (fZ) goto L_00858564;
L_0085851c:; BB(0x0085851c);
    /* 0085851c: cmp dword ptr [ebp - 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085851f: jne 0x858564 */ if (!fZ) goto L_00858564;
L_00858521:; BB(0x00858521);
    /* 00858521: cmp byte ptr [eax + edi - 1], bl */ {  u32 a = R8((u32)(r_eax+r_edi+0xffffffffu)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00858525: jne 0x858572 */ if (!fZ) goto L_00858572;
L_00858527:; BB(0x00858527);
    /* 00858527: jmp 0x858612 */ goto L_00858612;
L_0085852c:; BB(0x0085852c);
    /* 0085852c: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0085852f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858530: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858531: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00858532: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00858533: mov edi, dword ptr [0x8f81d8] */ r_edi = R32((u32)(0x8f81d8u));
    /* 00858539: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085853b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085853e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085853f: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858542: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x858544u); call_ind(t); }
    /* 00858544: mov esi, eax */ r_esi = r_eax;
    /* 00858546: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858548: je 0x858554 */ if (fZ) goto L_00858554;
L_0085854a:; BB(0x0085854a);
    /* 0085854a: cmp dword ptr [ebp - 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085854d: jne 0x858564 */ if (!fZ) goto L_00858564;
L_0085854f:; BB(0x0085854f);
    /* 0085854f: lea eax, [esi - 1] */ r_eax = (u32)(r_esi+0xffffffffu);
    /* 00858552: jmp 0x858572 */ goto L_00858572;
L_00858554:; BB(0x00858554);
    /* 00858554: cmp dword ptr [ebp - 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858557: jne 0x858564 */ if (!fZ) goto L_00858564;
L_00858559:; BB(0x00858559);
    /* 00858559: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85855fu); call_ind(t); }
    /* 0085855f: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858562: je 0x8585cf */ if (fZ) goto L_008585cf;
L_00858564:; BB(0x00858564);
    /* 00858564: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x858569u); f_00859dd6();
    /* 00858569: mov dword ptr [eax], 0x2a */ W32((u32)(r_eax), 0x2au);
    /* 0085856f: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00858572:; BB(0x00858572);
    /* 00858572: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00858575: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00858576: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00858577: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00858578: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85857du); f_0085e419();
    /* 0085857d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085857e: ret  */ FN_RET(0x00858467); r_esp += 4; return;
L_0085857f:; BB(0x0085857f);
    /* 0085857f: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00858582: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00858583: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858584: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085858a: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0085858d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085858e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00858591: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00858593: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00858596: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00858597: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085859a: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x85859cu); call_ind(t); }
    /* 0085859c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085859e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008585a1: je 0x858564 */ if (fZ) goto L_00858564;
L_008585a3:; BB(0x008585a3);
    /* 008585a3: cmp dword ptr [ebp - 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008585a6: jne 0x858564 */ if (!fZ) goto L_00858564;
L_008585a8:; BB(0x008585a8);
    /* 008585a8: lea ecx, [eax + esi] */ r_ecx = (u32)(r_eax+r_esi);
    /* 008585ab: cmp ecx, dword ptr [ebp + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008585ae: ja 0x8585d4 */ if ((!fC&&!fZ)) goto L_008585d4;
L_008585b0:; BB(0x008585b0);
    /* 008585b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008585b2: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008585b4: jle 0x8585cb */ if ((fZ||fS!=fO)) goto L_008585cb;
L_008585b6:; BB(0x008585b6);
    /* 008585b6: mov cl, byte ptr [ebp + edx - 0xc] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_edx+0xfffffff4u))) & 0xffu);
    /* 008585ba: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008585bc: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008585bf: mov byte ptr [esi + eax], cl */ W8((u32)(r_esi+r_eax), (u8)r_ecx);
    /* 008585c2: je 0x8585d4 */ if (fZ) goto L_008585d4;
L_008585c4:; BB(0x008585c4);
    /* 008585c4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008585c5: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008585c6: cmp edx, dword ptr [ebp - 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffecu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008585c9: jl 0x8585b6 */ if ((fS!=fO)) goto L_008585b6;
L_008585cb:; BB(0x008585cb);
    /* 008585cb: add dword ptr [ebp + 0x10], 2 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_008585cf:; BB(0x008585cf);
    /* 008585cf: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008585d2: jb 0x85857f */ if (fC) goto L_0085857f;
L_008585d4:; BB(0x008585d4);
    /* 008585d4: mov eax, esi */ r_eax = r_esi;
    /* 008585d6: jmp 0x858572 */ goto L_00858572;
L_008585d8:; BB(0x008585d8);
    /* 008585d8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008585db: cmp dword ptr [eax + 0x14], ebx */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008585de: jne 0x8585eb */ if (!fZ) goto L_008585eb;
L_008585e0:; BB(0x008585e0);
    /* 008585e0: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008585e3: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x8585e8u); f_00858009();
    /* 008585e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008585e9: jmp 0x858572 */ goto L_00858572;
L_008585eb:; BB(0x008585eb);
    /* 008585eb: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 008585ee: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008585ef: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008585f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008585f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008585f2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008585f4: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008585f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008585f8: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008585fb: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x858601u); call_ind(t); }
    /* 00858601: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00858603: je 0x858564 */ if (fZ) goto L_00858564;
L_00858609:; BB(0x00858609);
    /* 00858609: cmp dword ptr [ebp - 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085860c: jne 0x858564 */ if (!fZ) goto L_00858564;
L_00858612:; BB(0x00858612);
    /* 00858612: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00858613: jmp 0x858572 */ goto L_00858572;
}

