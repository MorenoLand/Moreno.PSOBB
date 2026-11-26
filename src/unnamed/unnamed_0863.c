#include "protos.h"

void f_00863510(void) /* __aulldiv */
{
    FN_ENTER(0x00863510);
    /* 00863510: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863511: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863512: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00863516: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00863518: jne 0x863532 */ if (!fZ) goto L_00863532;
L_0086351a:; BB(0x0086351a);
    /* 0086351a: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0086351e: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00863522: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863524: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00863524, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00863524, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00863526: mov ebx, eax */ r_ebx = r_eax;
    /* 00863528: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0086352c: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x0086352c, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0086352c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086352e: mov edx, ebx */ r_edx = r_ebx;
    /* 00863530: jmp 0x863573 */ goto L_00863573;
L_00863532:; BB(0x00863532);
    /* 00863532: mov ecx, eax */ r_ecx = r_eax;
    /* 00863534: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00863538: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 0086353c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
L_00863540:; BB(0x00863540);
    /* 00863540: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00863542: rcr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ebx = a; }
    /* 00863544: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00863546: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 00863548: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086354a: jne 0x863540 */ if (!fZ) goto L_00863540;
L_0086354c:; BB(0x0086354c);
    /* 0086354c: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x0086354c, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x0086354c, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086354e: mov esi, eax */ r_esi = r_eax;
    /* 00863550: mul dword ptr [esp + 0x18] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x18u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00863554: mov ecx, eax */ r_ecx = r_eax;
    /* 00863556: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0086355a: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0086355c: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0086355e: jb 0x86356e */ if (fC) goto L_0086356e;
L_00863560:; BB(0x00863560);
    /* 00863560: cmp edx, dword ptr [esp + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00863564: ja 0x86356e */ if ((!fC&&!fZ)) goto L_0086356e;
L_00863566:; BB(0x00863566);
    /* 00863566: jb 0x86356f */ if (fC) goto L_0086356f;
L_00863568:; BB(0x00863568);
    /* 00863568: cmp eax, dword ptr [esp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086356c: jbe 0x86356f */ if ((fC||fZ)) goto L_0086356f;
L_0086356e:; BB(0x0086356e);
    /* 0086356e: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_0086356f:; BB(0x0086356f);
    /* 0086356f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863571: mov eax, esi */ r_eax = r_esi;
L_00863573:; BB(0x00863573);
    /* 00863573: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00863574: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00863575: ret 0x10 */ FN_RET(0x00863510); r_esp += 20; return;
}

void f_00863578(void) /* _abort */
{
    FN_ENTER(0x00863578);
    /* 00863578: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0086357a: call 0x864b78 */ r_esp -= 4; W32(r_esp, 0x86357fu); f_00864b78();
    /* 0086357f: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00863581: call 0x8635be */ r_esp -= 4; W32(r_esp, 0x863586u); f_008635be();
    /* 00863586: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863587: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863588: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0086358a: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x86358fu); f_0085a043();
    /* 0086358f: int3  */ UNSUP(0x0086358f, "int3");
}

void f_00863590(void) /* _siglookup */
{
    FN_ENTER(0x00863590);
    /* 00863590: mov ecx, dword ptr [0xa24264] */ r_ecx = R32((u32)(0xa24264u));
    /* 00863596: mov eax, edx */ r_eax = r_edx;
    /* 00863598: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00863599:; BB(0x00863599);
    /* 00863599: cmp dword ptr [eax + 4], esi */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086359c: je 0x8635ab */ if (fZ) goto L_008635ab;
L_0086359e:; BB(0x0086359e);
    /* 0086359e: lea edi, [ecx + ecx*2] */ r_edi = (u32)(r_ecx+r_ecx*2);
    /* 008635a1: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008635a4: lea edi, [edx + edi*4] */ r_edi = (u32)(r_edx+r_edi*4);
    /* 008635a7: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008635a9: jb 0x863599 */ if (fC) goto L_00863599;
L_008635ab:; BB(0x008635ab);
    /* 008635ab: lea ecx, [ecx + ecx*2] */ r_ecx = (u32)(r_ecx+r_ecx*2);
    /* 008635ae: lea ecx, [edx + ecx*4] */ r_ecx = (u32)(r_edx+r_ecx*4);
    /* 008635b1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008635b3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008635b4: jae 0x8635bb */ if (!fC) goto L_008635bb;
L_008635b6:; BB(0x008635b6);
    /* 008635b6: cmp dword ptr [eax + 4], esi */ {  u32 a = R32((u32)(r_eax+0x4u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008635b9: je 0x8635bd */ if (fZ) goto L_008635bd;
L_008635bb:; BB(0x008635bb);
    /* 008635bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008635bd:; BB(0x008635bd);
    /* 008635bd: ret  */ FN_RET(0x00863590); r_esp += 4; return;
}

void f_008635be(void) /* _raise */
{
    FN_ENTER(0x008635be);
    /* 008635be: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008635c0: push 0x998a38 */ { u32 v = 0x998a38u; r_esp -= 4; W32(r_esp, v); }
    /* 008635c5: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8635cau); f_0085e5ac();
    /* 008635ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008635cc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 008635cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008635d2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008635d3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635d4: je 0x863640 */ if (fZ) goto L_00863640;
L_008635d6:; BB(0x008635d6);
    /* 008635d6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008635d7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635d8: je 0x863620 */ if (fZ) goto L_00863620;
L_008635da:; BB(0x008635da);
    /* 008635da: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635dd: je 0x863620 */ if (fZ) goto L_00863620;
L_008635df:; BB(0x008635df);
    /* 008635df: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635e2: je 0x863620 */ if (fZ) goto L_00863620;
L_008635e4:; BB(0x008635e4);
    /* 008635e4: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635e7: je 0x863613 */ if (fZ) goto L_00863613;
L_008635e9:; BB(0x008635e9);
    /* 008635e9: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635ec: je 0x863606 */ if (fZ) goto L_00863606;
L_008635ee:; BB(0x008635ee);
    /* 008635ee: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008635ef: je 0x8635f9 */ if (fZ) goto L_008635f9;
L_008635f1:; BB(0x008635f1);
    /* 008635f1: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008635f4: jmp 0x863731 */ goto L_00863731;
L_008635f9:; BB(0x008635f9);
    /* 008635f9: mov esi, 0xae7c14 */ r_esi = 0xae7c14u;
    /* 008635fe: mov edi, dword ptr [0xae7c14] */ r_edi = R32((u32)(0xae7c14u));
    /* 00863604: jmp 0x86364b */ goto L_0086364b;
L_00863606:; BB(0x00863606);
    /* 00863606: mov esi, 0xae7c10 */ r_esi = 0xae7c10u;
    /* 0086360b: mov edi, dword ptr [0xae7c10] */ r_edi = R32((u32)(0xae7c10u));
    /* 00863611: jmp 0x86364b */ goto L_0086364b;
L_00863613:; BB(0x00863613);
    /* 00863613: mov esi, 0xae7c18 */ r_esi = 0xae7c18u;
    /* 00863618: mov edi, dword ptr [0xae7c18] */ r_edi = R32((u32)(0xae7c18u));
    /* 0086361e: jmp 0x86364b */ goto L_0086364b;
L_00863620:; BB(0x00863620);
    /* 00863620: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x863625u); f_0085c583();
    /* 00863625: mov ebx, eax */ r_ebx = r_eax;
    /* 00863627: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0086362a: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0086362d: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00863630: call 0x863590 */ r_esp -= 4; W32(r_esp, 0x863635u); f_00863590();
    /* 00863635: mov esi, eax */ r_esi = r_eax;
    /* 00863637: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086363a: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0086363c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086363e: jmp 0x863655 */ goto L_00863655;
L_00863640:; BB(0x00863640);
    /* 00863640: mov esi, 0xae7c0c */ r_esi = 0xae7c0cu;
    /* 00863645: mov edi, dword ptr [0xae7c0c] */ r_edi = R32((u32)(0xae7c0cu));
L_0086364b:; BB(0x0086364b);
    /* 0086364b: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00863652: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
L_00863655:; BB(0x00863655);
    /* 00863655: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00863658: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086365b: je 0x86372f */ if (fZ) goto L_0086372f;
L_00863661:; BB(0x00863661);
    /* 00863661: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863663: jne 0x86366c */ if (!fZ) goto L_0086366c;
L_00863665:; BB(0x00863665);
    /* 00863665: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00863667: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x86366cu); f_0085a043();
L_0086366c:; BB(0x0086366c);
    /* 0086366c: cmp dword ptr [ebp - 0x1c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086366f: je 0x86367a */ if (fZ) goto L_0086367a;
L_00863671:; BB(0x00863671);
    /* 00863671: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00863672: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x863677u); f_0085e57a();
    /* 00863677: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0086367a:; BB(0x0086367a);
    /* 0086367a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0086367d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00863680: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863683: je 0x86368f */ if (fZ) goto L_0086368f;
L_00863685:; BB(0x00863685);
    /* 00863685: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863688: je 0x86368f */ if (fZ) goto L_0086368f;
L_0086368a:; BB(0x0086368a);
    /* 0086368a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086368d: jne 0x8636aa */ if (!fZ) goto L_008636aa;
L_0086368f:; BB(0x0086368f);
    /* 0086368f: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 00863692: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00863695: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00863698: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086369b: jne 0x8636d6 */ if (!fZ) goto L_008636d6;
L_0086369d:; BB(0x0086369d);
    /* 0086369d: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 008636a0: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 008636a3: mov dword ptr [ebx + 0x5c], 0x8c */ W32((u32)(r_ebx+0x5cu), 0x8cu);
L_008636aa:; BB(0x008636aa);
    /* 008636aa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008636ad: jne 0x8636d6 */ if (!fZ) goto L_008636d6;
L_008636af:; BB(0x008636af);
    /* 008636af: mov eax, dword ptr [0xa24258] */ r_eax = R32((u32)(0xa24258u));
L_008636b4:; BB(0x008636b4);
    /* 008636b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008636b7: mov edx, dword ptr [0xa2425c] */ r_edx = R32((u32)(0xa2425cu));
    /* 008636bd: mov esi, dword ptr [0xa24258] */ r_esi = R32((u32)(0xa24258u));
    /* 008636c3: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008636c5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008636c7: jge 0x8636d8 */ if ((fS==fO)) goto L_008636d8;
L_008636c9:; BB(0x008636c9);
    /* 008636c9: lea edx, [eax + eax*2] */ r_edx = (u32)(r_eax+r_eax*2);
    /* 008636cc: mov esi, dword ptr [ebx + 0x54] */ r_esi = R32((u32)(r_ebx+0x54u));
    /* 008636cf: mov dword ptr [esi + edx*4 + 8], ecx */ W32((u32)(r_esi+r_edx*4+0x8u), r_ecx);
    /* 008636d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008636d4: jmp 0x8636b4 */ goto L_008636b4;
L_008636d6:; BB(0x008636d6);
    /* 008636d6: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
L_008636d8:; BB(0x008636d8);
    /* 008636d8: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008636dc: call 0x8636f9 */ r_esp -= 4; W32(r_esp, 0x8636e1u); f_008636f9();
    /* 008636e1: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008636e5: jne 0x863706 */ if (!fZ) goto L_00863706;
L_008636e7:; BB(0x008636e7);
    /* 008636e7: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008636ea: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008636ec: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8636eeu); call_ind(t); }
    /* 008636ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008636ef: jmp 0x86370b */ goto L_0086370b;
L_00863706:; BB(0x00863706);
    /* 00863706: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00863709: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x86370bu); call_ind(t); }
L_0086370b:; BB(0x0086370b);
    /* 0086370b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086370c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086370f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863712: je 0x86371e */ if (fZ) goto L_0086371e;
L_00863714:; BB(0x00863714);
    /* 00863714: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863717: je 0x86371e */ if (fZ) goto L_0086371e;
L_00863719:; BB(0x00863719);
    /* 00863719: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086371c: jne 0x86372f */ if (!fZ) goto L_0086372f;
L_0086371e:; BB(0x0086371e);
    /* 0086371e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00863721: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00863724: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863727: jne 0x86372f */ if (!fZ) goto L_0086372f;
L_00863729:; BB(0x00863729);
    /* 00863729: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0086372c: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0086372f:; BB(0x0086372f);
    /* 0086372f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00863731:; BB(0x00863731);
    /* 00863731: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863736u); f_0085e5e7();
    /* 00863736: ret  */ FN_RET(0x008635be); r_esp += 4; return;
}

void f_008635ff(void)
{
    FN_ENTER(0x008635ff);
    /* 008635ff: cmp eax, 0xae7c14 */ {  u32 a = r_eax; u32 b = 0xae7c14u; u32 r = (a - b) & 0xffffffffu;   }
    /* 00863604: jmp 0x86364b */ goto L_0086364b;
L_0086364b:; BB(0x0086364b);
    /* 0086364b: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 00863652: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00863655: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00863658: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086365b: je 0x86372f */ if (fZ) goto L_0086372f;
L_00863661:; BB(0x00863661);
    /* 00863661: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863663: jne 0x86366c */ if (!fZ) goto L_0086366c;
L_00863665:; BB(0x00863665);
    /* 00863665: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00863667: call 0x85a043 */ r_esp -= 4; W32(r_esp, 0x86366cu); f_0085a043();
L_0086366c:; BB(0x0086366c);
    /* 0086366c: cmp dword ptr [ebp - 0x1c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086366f: je 0x86367a */ if (fZ) goto L_0086367a;
L_00863671:; BB(0x00863671);
    /* 00863671: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00863672: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x863677u); f_0085e57a();
    /* 00863677: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863678: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0086367a:; BB(0x0086367a);
    /* 0086367a: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0086367d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00863680: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863683: je 0x86368f */ if (fZ) goto L_0086368f;
L_00863685:; BB(0x00863685);
    /* 00863685: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863688: je 0x86368f */ if (fZ) goto L_0086368f;
L_0086368a:; BB(0x0086368a);
    /* 0086368a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086368d: jne 0x8636aa */ if (!fZ) goto L_008636aa;
L_0086368f:; BB(0x0086368f);
    /* 0086368f: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 00863692: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00863695: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00863698: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086369b: jne 0x8636d6 */ if (!fZ) goto L_008636d6;
L_0086369d:; BB(0x0086369d);
    /* 0086369d: mov edx, dword ptr [ebx + 0x5c] */ r_edx = R32((u32)(r_ebx+0x5cu));
    /* 008636a0: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 008636a3: mov dword ptr [ebx + 0x5c], 0x8c */ W32((u32)(r_ebx+0x5cu), 0x8cu);
L_008636aa:; BB(0x008636aa);
    /* 008636aa: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008636ad: jne 0x8636d6 */ if (!fZ) goto L_008636d6;
L_008636af:; BB(0x008636af);
    /* 008636af: mov eax, dword ptr [0xa24258] */ r_eax = R32((u32)(0xa24258u));
L_008636b4:; BB(0x008636b4);
    /* 008636b4: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 008636b7: mov edx, dword ptr [0xa2425c] */ r_edx = R32((u32)(0xa2425cu));
    /* 008636bd: mov esi, dword ptr [0xa24258] */ r_esi = R32((u32)(0xa24258u));
    /* 008636c3: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008636c5: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008636c7: jge 0x8636d8 */ if ((fS==fO)) goto L_008636d8;
L_008636c9:; BB(0x008636c9);
    /* 008636c9: lea edx, [eax + eax*2] */ r_edx = (u32)(r_eax+r_eax*2);
    /* 008636cc: mov esi, dword ptr [ebx + 0x54] */ r_esi = R32((u32)(r_ebx+0x54u));
    /* 008636cf: mov dword ptr [esi + edx*4 + 8], ecx */ W32((u32)(r_esi+r_edx*4+0x8u), r_ecx);
    /* 008636d3: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008636d4: jmp 0x8636b4 */ goto L_008636b4;
L_008636d6:; BB(0x008636d6);
    /* 008636d6: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
L_008636d8:; BB(0x008636d8);
    /* 008636d8: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008636dc: call 0x8636f9 */ r_esp -= 4; W32(r_esp, 0x8636e1u); f_008636f9();
    /* 008636e1: cmp dword ptr [ebp + 8], 8 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008636e5: jne 0x863706 */ if (!fZ) goto L_00863706;
L_008636e7:; BB(0x008636e7);
    /* 008636e7: push dword ptr [ebx + 0x5c] */ { u32 v = R32((u32)(r_ebx+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008636ea: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008636ec: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x8636eeu); call_ind(t); }
    /* 008636ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008636ef: jmp 0x86370b */ goto L_0086370b;
L_00863706:; BB(0x00863706);
    /* 00863706: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00863709: call edi */ { u32 t = r_edi; r_esp -= 4; W32(r_esp, 0x86370bu); call_ind(t); }
L_0086370b:; BB(0x0086370b);
    /* 0086370b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086370c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086370f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863712: je 0x86371e */ if (fZ) goto L_0086371e;
L_00863714:; BB(0x00863714);
    /* 00863714: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863717: je 0x86371e */ if (fZ) goto L_0086371e;
L_00863719:; BB(0x00863719);
    /* 00863719: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086371c: jne 0x86372f */ if (!fZ) goto L_0086372f;
L_0086371e:; BB(0x0086371e);
    /* 0086371e: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00863721: mov dword ptr [ebx + 0x58], ecx */ W32((u32)(r_ebx+0x58u), r_ecx);
    /* 00863724: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863727: jne 0x86372f */ if (!fZ) goto L_0086372f;
L_00863729:; BB(0x00863729);
    /* 00863729: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0086372c: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
L_0086372f:; BB(0x0086372f);
    /* 0086372f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00863731: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863736u); f_0085e5e7();
    /* 00863736: ret  */ FN_RET(0x008635ff); r_esp += 4; return;
}

void f_008636f1(void)
{
    FN_ENTER(0x008636f1);
    /* 008636f1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008636f4: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 008636f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008636f9: cmp dword ptr [ebp - 0x1c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008636fc: je 0x863705 */ if (fZ) goto L_00863705;
L_008636fe:; BB(0x008636fe);
    /* 008636fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008636ff: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863704u); f_0085e4c5();
    /* 00863704: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863705:; BB(0x00863705);
    /* 00863705: ret  */ FN_RET(0x008636f1); r_esp += 4; return;
}

void f_008636f9(void)
{
    FN_ENTER(0x008636f9);
    /* 008636f9: cmp dword ptr [ebp - 0x1c], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008636fc: je 0x863705 */ if (fZ) goto L_00863705;
L_008636fe:; BB(0x008636fe);
    /* 008636fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008636ff: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863704u); f_0085e4c5();
    /* 00863704: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00863705:; BB(0x00863705);
    /* 00863705: ret  */ FN_RET(0x008636f9); r_esp += 4; return;
}

void f_00863737(void) /* ___crtMessageBoxA */
{
    FN_ENTER(0x00863737);
    /* 00863737: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00863738: mov ebp, esp */ r_ebp = r_esp;
    /* 0086373a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086373d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086373e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00863740: cmp dword ptr [0xae7c20], ebx */ {  u32 a = R32((u32)(0xae7c20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863746: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00863747: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863748: jne 0x8637b7 */ if (!fZ) goto L_008637b7;
L_0086374a:; BB(0x0086374a);
    /* 0086374a: push 0x998aa8 */ { u32 v = 0x998aa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0086374f: call dword ptr [0x8f8130] */ { u32 t = R32((u32)(0x8f8130u)); r_esp -= 4; W32(r_esp, 0x863755u); call_ind(t); }
    /* 00863755: mov edi, eax */ r_edi = r_eax;
    /* 00863757: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863759: je 0x8637f2 */ if (fZ) goto L_008637f2;
L_0086375f:; BB(0x0086375f);
    /* 0086375f: mov esi, dword ptr [0x8f812c] */ r_esi = R32((u32)(0x8f812cu));
    /* 00863765: push 0x998a9c */ { u32 v = 0x998a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086376a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086376b: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x86376du); call_ind(t); }
    /* 0086376d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086376f: mov dword ptr [0xae7c20], eax */ W32((u32)(0xae7c20u), r_eax);
    /* 00863774: je 0x8637f2 */ if (fZ) goto L_008637f2;
L_00863776:; BB(0x00863776);
    /* 00863776: push 0x998a8c */ { u32 v = 0x998a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086377b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086377c: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x86377eu); call_ind(t); }
    /* 0086377e: push 0x998a78 */ { u32 v = 0x998a78u; r_esp -= 4; W32(r_esp, v); }
    /* 00863783: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00863784: mov dword ptr [0xae7c24], eax */ W32((u32)(0xae7c24u), r_eax);
    /* 00863789: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x86378bu); call_ind(t); }
    /* 0086378b: cmp dword ptr [0xae7a10], 2 */ {  u32 a = R32((u32)(0xae7a10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863792: mov dword ptr [0xae7c28], eax */ W32((u32)(0xae7c28u), r_eax);
    /* 00863797: jne 0x8637b7 */ if (!fZ) goto L_008637b7;
L_00863799:; BB(0x00863799);
    /* 00863799: push 0x998a5c */ { u32 v = 0x998a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0086379e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086379f: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8637a1u); call_ind(t); }
    /* 008637a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008637a3: mov dword ptr [0xae7c30], eax */ W32((u32)(0xae7c30u), r_eax);
    /* 008637a8: je 0x8637b7 */ if (fZ) goto L_008637b7;
L_008637aa:; BB(0x008637aa);
    /* 008637aa: push 0x998a44 */ { u32 v = 0x998a44u; r_esp -= 4; W32(r_esp, v); }
    /* 008637af: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008637b0: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x8637b2u); call_ind(t); }
    /* 008637b2: mov dword ptr [0xae7c2c], eax */ W32((u32)(0xae7c2cu), r_eax);
L_008637b7:; BB(0x008637b7);
    /* 008637b7: mov eax, dword ptr [0xae7c2c] */ r_eax = R32((u32)(0xae7c2cu));
    /* 008637bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008637be: je 0x8637fc */ if (fZ) goto L_008637fc;
L_008637c0:; BB(0x008637c0);
    /* 008637c0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x8637c2u); call_ind(t); }
    /* 008637c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008637c4: je 0x8637e3 */ if (fZ) goto L_008637e3;
L_008637c6:; BB(0x008637c6);
    /* 008637c6: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 008637c9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008637ca: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008637cc: lea ecx, [ebp - 0x10] */ r_ecx = (u32)(r_ebp+0xfffffff0u);
    /* 008637cf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008637d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008637d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008637d3: call dword ptr [0xae7c30] */ { u32 t = R32((u32)(0xae7c30u)); r_esp -= 4; W32(r_esp, 0x8637d9u); call_ind(t); }
    /* 008637d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008637db: je 0x8637e3 */ if (fZ) goto L_008637e3;
L_008637dd:; BB(0x008637dd);
    /* 008637dd: test byte ptr [ebp - 8], 1 */ {  u32 a = R8((u32)(r_ebp+0xfffffff8u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008637e1: jne 0x8637fc */ if (!fZ) goto L_008637fc;
L_008637e3:; BB(0x008637e3);
    /* 008637e3: cmp dword ptr [0xae7a1c], 4 */ {  u32 a = R32((u32)(0xae7a1cu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008637ea: jb 0x8637f6 */ if (fC) goto L_008637f6;
L_008637ec:; BB(0x008637ec);
    /* 008637ec: or byte ptr [ebp + 0x12], 0x20 */ { u32 ad = (u32)(r_ebp+0x12u);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008637f0: jmp 0x86381b */ goto L_0086381b;
L_008637f2:; BB(0x008637f2);
    /* 008637f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008637f4: jmp 0x86382b */ goto L_0086382b;
L_008637f6:; BB(0x008637f6);
    /* 008637f6: or byte ptr [ebp + 0x12], 4 */ { u32 ad = (u32)(r_ebp+0x12u);  u32 a = R8(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008637fa: jmp 0x86381b */ goto L_0086381b;
L_008637fc:; BB(0x008637fc);
    /* 008637fc: mov eax, dword ptr [0xae7c24] */ r_eax = R32((u32)(0xae7c24u));
    /* 00863801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863803: je 0x86381b */ if (fZ) goto L_0086381b;
L_00863805:; BB(0x00863805);
    /* 00863805: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x863807u); call_ind(t); }
    /* 00863807: mov ebx, eax */ r_ebx = r_eax;
    /* 00863809: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086380b: je 0x86381b */ if (fZ) goto L_0086381b;
L_0086380d:; BB(0x0086380d);
    /* 0086380d: mov eax, dword ptr [0xae7c28] */ r_eax = R32((u32)(0xae7c28u));
    /* 00863812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863814: je 0x86381b */ if (fZ) goto L_0086381b;
L_00863816:; BB(0x00863816);
    /* 00863816: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863817: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x863819u); call_ind(t); }
    /* 00863819: mov ebx, eax */ r_ebx = r_eax;
L_0086381b:; BB(0x0086381b);
    /* 0086381b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086381e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00863821: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00863824: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00863825: call dword ptr [0xae7c20] */ { u32 t = R32((u32)(0xae7c20u)); r_esp -= 4; W32(r_esp, 0x86382bu); call_ind(t); }
L_0086382b:; BB(0x0086382b);
    /* 0086382b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086382c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086382d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086382e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086382f: ret  */ FN_RET(0x00863737); r_esp += 4; return;
}

void f_00863830(void) /* _xtoa */
{
    FN_ENTER(0x00863830);
    /* 00863830: cmp dword ptr [esp + 8], 0 */ {  u32 a = R32((u32)(r_esp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863835: je 0x86383d */ if (fZ) goto L_0086383d;
L_00863837:; BB(0x00863837);
    /* 00863837: mov byte ptr [ecx], 0x2d */ W8((u32)(r_ecx), 0x2du);
    /* 0086383a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086383b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0086383d:; BB(0x0086383d);
    /* 0086383d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086383e: mov esi, ecx */ r_esi = r_ecx;
L_00863840:; BB(0x00863840);
    /* 00863840: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00863842: div dword ptr [esp + 8] */ { u32 d = R32((u32)(r_esp+0x8u)); if (!d) UNSUP(0x00863842, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00863842, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00863846: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00863849: jbe 0x863850 */ if ((fC||fZ)) goto L_00863850;
L_0086384b:; BB(0x0086384b);
    /* 0086384b: add dl, 0x57 */ {  u32 a = (u8)r_edx; u32 b = 0x57u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086384e: jmp 0x863853 */ goto L_00863853;
L_00863850:; BB(0x00863850);
    /* 00863850: add dl, 0x30 */ {  u32 a = (u8)r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
L_00863853:; BB(0x00863853);
    /* 00863853: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00863855: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00863856: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00863858: ja 0x863840 */ if ((!fC&&!fZ)) goto L_00863840;
L_0086385a:; BB(0x0086385a);
    /* 0086385a: mov byte ptr [ecx], 0 */ W8((u32)(r_ecx), 0x0u);
    /* 0086385d: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_0086385e:; BB(0x0086385e);
    /* 0086385e: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00863860: mov al, byte ptr [ecx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00863862: mov byte ptr [ecx], dl */ W8((u32)(r_ecx), (u8)r_edx);
    /* 00863864: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00863865: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 00863867: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863868: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086386a: jb 0x86385e */ if (fC) goto L_0086385e;
L_0086386c:; BB(0x0086386c);
    /* 0086386c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086386d: ret  */ FN_RET(0x00863830); r_esp += 4; return;
}

void f_0086386e(void) /* __itoa */
{
    FN_ENTER(0x0086386e);
    /* 0086386e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086386f: mov ebp, esp */ r_ebp = r_esp;
    /* 00863871: cmp dword ptr [ebp + 0x10], 0xa */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863875: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00863878: jne 0x863884 */ if (!fZ) goto L_00863884;
L_0086387a:; BB(0x0086387a);
    /* 0086387a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0086387c: jge 0x863884 */ if ((fS==fO)) goto L_00863884;
L_0086387e:; BB(0x0086387e);
    /* 0086387e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00863880: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863882: jmp 0x863889 */ goto L_00863889;
L_00863884:; BB(0x00863884);
    /* 00863884: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00863886: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_00863889:; BB(0x00863889);
    /* 00863889: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086388c: call 0x863830 */ r_esp -= 4; W32(r_esp, 0x863891u); f_00863830();
    /* 00863891: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00863894: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863895: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863896: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00863897: ret  */ FN_RET(0x0086386e); r_esp += 4; return;
}

void f_008638a0(void) /* _strncat */
{
    FN_ENTER(0x008638a0);
    /* 008638a0: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008638a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008638a5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008638a7: je 0x863964 */ if (fZ) goto L_00863964;
L_008638ad:; BB(0x008638ad);
    /* 008638ad: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 008638b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008638b2: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008638b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008638b9: je 0x8638cc */ if (fZ) goto L_008638cc;
L_008638bb:; BB(0x008638bb);
    /* 008638bb: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 008638bd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008638c0: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008638c2: je 0x8638fd */ if (fZ) goto L_008638fd;
L_008638c4:; BB(0x008638c4);
    /* 008638c4: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008638ca: jne 0x8638bb */ if (!fZ) goto L_008638bb;
L_008638cc:; BB(0x008638cc);
    /* 008638cc: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008638ce: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 008638d3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008638d5: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008638d8: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008638da: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008638dd: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008638e2: je 0x8638cc */ if (fZ) goto L_008638cc;
L_008638e4:; BB(0x008638e4);
    /* 008638e4: mov eax, dword ptr [edi - 4] */ r_eax = R32((u32)(r_edi+0xfffffffcu));
    /* 008638e7: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008638e9: je 0x86390c */ if (fZ) goto L_0086390c;
L_008638eb:; BB(0x008638eb);
    /* 008638eb: test ah, ah */ {  u32 a = (u8)(r_eax>>8); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008638ed: je 0x863907 */ if (fZ) goto L_00863907;
L_008638ef:; BB(0x008638ef);
    /* 008638ef: test eax, 0xff0000 */ {  u32 a = r_eax; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008638f4: je 0x863902 */ if (fZ) goto L_00863902;
L_008638f6:; BB(0x008638f6);
    /* 008638f6: test eax, 0xff000000 */ {  u32 a = r_eax; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008638fb: jne 0x8638cc */ if (!fZ) goto L_008638cc;
L_008638fd:; BB(0x008638fd);
    /* 008638fd: sub edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00863900: jmp 0x86390f */ goto L_0086390f;
L_00863902:; BB(0x00863902);
    /* 00863902: sub edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00863905: jmp 0x86390f */ goto L_0086390f;
L_00863907:; BB(0x00863907);
    /* 00863907: sub edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086390a: jmp 0x86390f */ goto L_0086390f;
L_0086390c:; BB(0x0086390c);
    /* 0086390c: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_0086390f:; BB(0x0086390f);
    /* 0086390f: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00863913: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863919: jne 0x863924 */ if (!fZ) goto L_00863924;
L_0086391b:; BB(0x0086391b);
    /* 0086391b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086391d: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00863920: jne 0x86397e */ if (!fZ) goto L_0086397e;
L_00863922:; BB(0x00863922);
    /* 00863922: jmp 0x863946 */ goto L_00863946;
L_00863924:; BB(0x00863924);
    /* 00863924: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00863926: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863929: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086392b: je 0x86396a */ if (fZ) goto L_0086396a;
L_0086392d:; BB(0x0086392d);
    /* 0086392d: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0086392f: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00863932: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00863935: je 0x863960 */ if (fZ) goto L_00863960;
L_00863937:; BB(0x00863937);
    /* 00863937: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086393d: jne 0x863924 */ if (!fZ) goto L_00863924;
L_0086393f:; BB(0x0086393f);
    /* 0086393f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00863941: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fZ = (r == 0); } }
    /* 00863944: jne 0x86397e */ if (!fZ) goto L_0086397e;
L_00863946:; BB(0x00863946);
    /* 00863946: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00863948: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086394b: je 0x863960 */ if (fZ) goto L_00863960;
L_0086394d:; BB(0x0086394d);
    /* 0086394d: mov dl, byte ptr [esi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0086394f: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863952: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 00863954: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00863957: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00863959: je 0x863962 */ if (fZ) goto L_00863962;
L_0086395b:; BB(0x0086395b);
    /* 0086395b: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086395e: jne 0x86394d */ if (!fZ) goto L_0086394d;
L_00863960:; BB(0x00863960);
    /* 00863960: mov byte ptr [edi], cl */ W8((u32)(r_edi), (u8)r_ecx);
L_00863962:; BB(0x00863962);
    /* 00863962: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00863963: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00863964:; BB(0x00863964);
    /* 00863964: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00863968: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00863969: ret  */ FN_RET(0x008638a0); r_esp += 4; return;
L_0086396a:; BB(0x0086396a);
    /* 0086396a: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 0086396c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00863970: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00863971: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00863972: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00863973: ret  */ FN_RET(0x008638a0); r_esp += 4; return;
L_00863974:; BB(0x00863974);
    /* 00863974: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 00863976: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00863979: sub ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0086397c: je 0x863946 */ if (fZ) goto L_00863946;
L_0086397e:; BB(0x0086397e);
    /* 0086397e: mov edx, 0x7efefeff */ r_edx = 0x7efefeffu;
    /* 00863983: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00863985: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00863987: xor eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086398a: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086398c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0086398e: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00863991: test eax, 0x81010100 */ {  u32 a = r_eax; u32 b = 0x81010100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863996: je 0x863974 */ if (fZ) goto L_00863974;
L_00863998:; BB(0x00863998);
    /* 00863998: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086399a: je 0x86396a */ if (fZ) goto L_0086396a;
L_0086399c:; BB(0x0086399c);
    /* 0086399c: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086399e: je 0x8639ca */ if (fZ) goto L_008639ca;
L_008639a0:; BB(0x008639a0);
    /* 008639a0: test edx, 0xff0000 */ {  u32 a = r_edx; u32 b = 0xff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008639a6: je 0x8639ba */ if (fZ) goto L_008639ba;
L_008639a8:; BB(0x008639a8);
    /* 008639a8: test edx, 0xff000000 */ {  u32 a = r_edx; u32 b = 0xff000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008639ae: jne 0x863974 */ if (!fZ) goto L_00863974;
L_008639b0:; BB(0x008639b0);
    /* 008639b0: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 008639b2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008639b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008639b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008639b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008639b9: ret  */ FN_RET(0x008638a0); r_esp += 4; return;
L_008639ba:; BB(0x008639ba);
    /* 008639ba: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 008639bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008639bf: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008639c3: mov byte ptr [edi + 2], dl */ W8((u32)(r_edi+0x2u), (u8)r_edx);
    /* 008639c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008639c7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008639c8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008639c9: ret  */ FN_RET(0x008638a0); r_esp += 4; return;
L_008639ca:; BB(0x008639ca);
    /* 008639ca: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 008639cd: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008639d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008639d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008639d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008639d4: ret  */ FN_RET(0x008638a0); r_esp += 4; return;
}

void f_00863ba5(void)
{
    FN_ENTER(0x00863ba5);
    /* 00863ba5: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00863ba8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863baa: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863bafu); f_0085e4c5();
    /* 00863baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863bb0: ret  */ FN_RET(0x00863ba5); r_esp += 4; return;
}

void f_00863ba8(void)
{
    FN_ENTER(0x00863ba8);
    /* 00863ba8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863baa: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863bafu); f_0085e4c5();
    /* 00863baf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863bb0: ret  */ FN_RET(0x00863ba8); r_esp += 4; return;
}

void f_00863ca6(void)
{
    FN_ENTER(0x00863ca6);
    /* 00863ca6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00863ca9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00863cac: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863cae: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863cb3u); f_0085e4c5();
    /* 00863cb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863cb4: ret  */ FN_RET(0x00863ca6); r_esp += 4; return;
}

void f_00863cac(void)
{
    FN_ENTER(0x00863cac);
    /* 00863cac: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00863cae: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863cb3u); f_0085e4c5();
    /* 00863cb3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863cb4: ret  */ FN_RET(0x00863cac); r_esp += 4; return;
}

void f_00863d46(void)
{
    FN_ENTER(0x00863d46);
    /* 00863d46: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00863d48: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x863d4du); f_0085e4c5();
    /* 00863d4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00863d4e: ret  */ FN_RET(0x00863d46); r_esp += 4; return;
}

void f_00863d4f(void) /* sub_863D4F */
{
    FN_ENTER(0x00863d4f);
    /* 00863d4f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00863d51: push 0x998e18 */ { u32 v = 0x998e18u; r_esp -= 4; W32(r_esp, v); }
    /* 00863d56: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x863d5bu); f_0085e5ac();
    /* 00863d5b: mov dword ptr [ebp - 0x1c], 0x9a0204 */ W32((u32)(r_ebp+0xffffffe4u), 0x9a0204u);
L_00863d62:; BB(0x00863d62);
    /* 00863d62: cmp dword ptr [ebp - 0x1c], 0x9a0204 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9a0204u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863d69: jae 0x863d8d */ if (!fC) goto L_00863d8d;
L_00863d6b:; BB(0x00863d6b);
    /* 00863d6b: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d6f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00863d72: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00863d74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863d76: je 0x863d83 */ if (fZ) goto L_00863d83;
L_00863d78:; BB(0x00863d78);
    /* 00863d78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x863d7au); call_ind(t); }
    /* 00863d7a: jmp 0x863d83 */ goto L_00863d83;
L_00863d83:; BB(0x00863d83);
    /* 00863d83: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d87: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d8b: jmp 0x863d62 */ goto L_00863d62;
L_00863d8d:; BB(0x00863d8d);
    /* 00863d8d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863d92u); f_0085e5e7();
    /* 00863d92: ret  */ FN_RET(0x00863d4f); r_esp += 4; return;
}

void f_00863d7c(void)
{
    FN_ENTER(0x00863d7c);
    /* 00863d7c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00863d7e: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00863d7f: ret  */ FN_RET(0x00863d7c); r_esp += 4; return;
}

void f_00863d80(void)
{
    FN_ENTER(0x00863d80);
    goto L_00863d80;
L_00863d62:; BB(0x00863d62);
    /* 00863d62: cmp dword ptr [ebp - 0x1c], 0x9a0204 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9a0204u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863d69: jae 0x863d8d */ if (!fC) goto L_00863d8d;
L_00863d6b:; BB(0x00863d6b);
    /* 00863d6b: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d6f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00863d72: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00863d74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863d76: je 0x863d83 */ if (fZ) goto L_00863d83;
L_00863d78:; BB(0x00863d78);
    /* 00863d78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x863d7au); call_ind(t); }
    /* 00863d7a: jmp 0x863d83 */ goto L_00863d83;
L_00863d80:; BB(0x00863d80);
    /* 00863d80: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
L_00863d83:; BB(0x00863d83);
    /* 00863d83: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d87: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863d8b: jmp 0x863d62 */ goto L_00863d62;
L_00863d8d:; BB(0x00863d8d);
    /* 00863d8d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863d92u); f_0085e5e7();
    /* 00863d92: ret  */ FN_RET(0x00863d80); r_esp += 4; return;
}

void f_00863d93(void) /* sub_863D93 */
{
    FN_ENTER(0x00863d93);
    /* 00863d93: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00863d95: push 0x998e28 */ { u32 v = 0x998e28u; r_esp -= 4; W32(r_esp, v); }
    /* 00863d9a: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x863d9fu); f_0085e5ac();
    /* 00863d9f: mov dword ptr [ebp - 0x1c], 0x9a020c */ W32((u32)(r_ebp+0xffffffe4u), 0x9a020cu);
L_00863da6:; BB(0x00863da6);
    /* 00863da6: cmp dword ptr [ebp - 0x1c], 0x9a020c */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9a020cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863dad: jae 0x863dd1 */ if (!fC) goto L_00863dd1;
L_00863daf:; BB(0x00863daf);
    /* 00863daf: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863db3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00863db6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00863db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863dba: je 0x863dc7 */ if (fZ) goto L_00863dc7;
L_00863dbc:; BB(0x00863dbc);
    /* 00863dbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x863dbeu); call_ind(t); }
    /* 00863dbe: jmp 0x863dc7 */ goto L_00863dc7;
L_00863dc7:; BB(0x00863dc7);
    /* 00863dc7: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863dcb: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863dcf: jmp 0x863da6 */ goto L_00863da6;
L_00863dd1:; BB(0x00863dd1);
    /* 00863dd1: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863dd6u); f_0085e5e7();
    /* 00863dd6: ret  */ FN_RET(0x00863d93); r_esp += 4; return;
}

void f_00863dc0(void)
{
    FN_ENTER(0x00863dc0);
    /* 00863dc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00863dc2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00863dc3: ret  */ FN_RET(0x00863dc0); r_esp += 4; return;
}

void f_00863dc4(void)
{
    FN_ENTER(0x00863dc4);
    goto L_00863dc4;
L_00863da6:; BB(0x00863da6);
    /* 00863da6: cmp dword ptr [ebp - 0x1c], 0x9a020c */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x9a020cu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00863dad: jae 0x863dd1 */ if (!fC) goto L_00863dd1;
L_00863daf:; BB(0x00863daf);
    /* 00863daf: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00863db3: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00863db6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00863db8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00863dba: je 0x863dc7 */ if (fZ) goto L_00863dc7;
L_00863dbc:; BB(0x00863dbc);
    /* 00863dbc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x863dbeu); call_ind(t); }
    /* 00863dbe: jmp 0x863dc7 */ goto L_00863dc7;
L_00863dc4:; BB(0x00863dc4);
    /* 00863dc4: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
L_00863dc7:; BB(0x00863dc7);
    /* 00863dc7: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00863dcb: add dword ptr [ebp - 0x1c], 4 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00863dcf: jmp 0x863da6 */ goto L_00863da6;
L_00863dd1:; BB(0x00863dd1);
    /* 00863dd1: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x863dd6u); f_0085e5e7();
    /* 00863dd6: ret  */ FN_RET(0x00863dc4); r_esp += 4; return;
}

