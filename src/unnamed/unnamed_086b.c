#include "protos.h"

void f_0086b07a(void) /* __strdup */
{
    FN_ENTER(0x0086b07a);
    /* 0086b07a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b07b: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0086b07f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b081: je 0x86b0a1 */ if (fZ) goto L_0086b0a1;
L_0086b083:; BB(0x0086b083);
    /* 0086b083: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b084: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86b089u); f_0085d760();
    /* 0086b089: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b08a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b08b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86b090u); f_00859c55();
    /* 0086b090: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b092: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b093: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b094: je 0x86b0a1 */ if (fZ) goto L_0086b0a1;
L_0086b096:; BB(0x0086b096);
    /* 0086b096: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b097: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b098: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x86b09du); f_0085e2f0();
    /* 0086b09d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b09e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b09f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086b0a0: ret  */ FN_RET(0x0086b07a); r_esp += 4; return;
L_0086b0a1:; BB(0x0086b0a1);
    /* 0086b0a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b0a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086b0a4: ret  */ FN_RET(0x0086b07a); r_esp += 4; return;
}

void f_0086b0a5(void) /* __mbschr */
{
    FN_ENTER(0x0086b0a5);
    /* 0086b0a5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b0a6: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b0a8: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x86b0adu); f_0085c583();
    /* 0086b0ad: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0086b0b0: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b0b6: je 0x86b0bd */ if (fZ) goto L_0086b0bd;
L_0086b0b8:; BB(0x0086b0b8);
    /* 0086b0b8: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x86b0bdu); f_00866438();
L_0086b0bd:; BB(0x0086b0bd);
    /* 0086b0bd: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b0c1: jne 0x86b0c9 */ if (!fZ) goto L_0086b0c9;
L_0086b0c3:; BB(0x0086b0c3);
    /* 0086b0c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b0c4: jmp 0x862460 */ f_00862460(); return;
L_0086b0c9:; BB(0x0086b0c9);
    /* 0086b0c9: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0086b0cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b0cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b0ce: jmp 0x86b0ff */ goto L_0086b0ff;
L_0086b0d0:; BB(0x0086b0d0);
    /* 0086b0d0: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 0086b0d3: test byte ptr [esi + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_esi+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086b0d8: je 0x86b0f6 */ if (fZ) goto L_0086b0f6;
L_0086b0da:; BB(0x0086b0da);
    /* 0086b0da: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b0db: mov bl, byte ptr [ecx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0086b0dd: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086b0df: je 0x86b11c */ if (fZ) goto L_0086b11c;
L_0086b0e1:; BB(0x0086b0e1);
    /* 0086b0e1: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0086b0e4: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 0086b0e7: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0086b0ea: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0086b0ec: cmp dword ptr [ebp + 0xc], edx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b0ef: jne 0x86b0fe */ if (!fZ) goto L_0086b0fe;
L_0086b0f1:; BB(0x0086b0f1);
    /* 0086b0f1: lea eax, [ecx - 1] */ r_eax = (u32)(r_ecx+0xffffffffu);
    /* 0086b0f4: jmp 0x86b118 */ goto L_0086b118;
L_0086b0f6:; BB(0x0086b0f6);
    /* 0086b0f6: movzx esi, dx */ r_esi = (u32)(u16)r_edx;
    /* 0086b0f9: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b0fc: je 0x86b108 */ if (fZ) goto L_0086b108;
L_0086b0fe:; BB(0x0086b0fe);
    /* 0086b0fe: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0086b0ff:; BB(0x0086b0ff);
    /* 0086b0ff: movzx dx, byte ptr [ecx] */ r_edx = (r_edx & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 0086b103: test dx, dx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_edx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0086b106: jne 0x86b0d0 */ if (!fZ) goto L_0086b0d0;
L_0086b108:; BB(0x0086b108);
    /* 0086b108: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b10b: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0086b10e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b110: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0086b112: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 0086b114: not eax */ r_eax = ~r_eax;
    /* 0086b116: and eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086b118:; BB(0x0086b118);
    /* 0086b118: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086b119: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086b11a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b11b: ret  */ FN_RET(0x0086b0a5); r_esp += 4; return;
L_0086b11c:; BB(0x0086b11c);
    /* 0086b11c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b11e: jmp 0x86b118 */ goto L_0086b118;
}

void f_0086b120(void) /* sub_86B120 */
{
    FN_ENTER(0x0086b120);
    /* 0086b120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b121: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b123: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b126: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b129: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b12c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b12f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b132: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b135: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b137: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b13a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b13c: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b13e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b141: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b143: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b146: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b149: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b14b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b14c: ret  */ FN_RET(0x0086b120); r_esp += 4; return;
}

void f_0086b150(void) /* sub_86B150 */
{
    FN_ENTER(0x0086b150);
    /* 0086b150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b151: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b153: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b156: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b159: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b15c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086b15f: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b162: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b165: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086b168: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b16a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b16d: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b16f: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b171: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b173: mov edi, eax */ r_edi = r_eax;
    /* 0086b175: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b177: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b179: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b17b: mov edx, eax */ r_edx = r_eax;
    /* 0086b17d: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b184: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b187: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b18b: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b18d: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b190: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0086b193: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b198: je 0x86b214 */ if (fZ) goto L_0086b214;
L_0086b19e:; BB(0x0086b19e);
    /* 0086b19e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b1a1: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b1a4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b1a7: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b1aa: lea esi, [esi] */ r_esi = (u32)(r_esi);
L_0086b1b0:; BB(0x0086b1b0);
    /* 0086b1b0: movdqa xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086b1b4: movdqa xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086b1b9: movdqa xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086b1be: movdqa xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086b1c3: movdqa xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b1c7: movdqa xmmword ptr [edi + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[1], 16);
    /* 0086b1cc: movdqa xmmword ptr [edi + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[2], 16);
    /* 0086b1d1: movdqa xmmword ptr [edi + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[3], 16);
    /* 0086b1d6: movdqa xmm4, xmmword ptr [esi + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x40u), 16); xmm[4] = s; }
    /* 0086b1db: movdqa xmm5, xmmword ptr [esi + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x50u), 16); xmm[5] = s; }
    /* 0086b1e0: movdqa xmm6, xmmword ptr [esi + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x60u), 16); xmm[6] = s; }
    /* 0086b1e5: movdqa xmm7, xmmword ptr [esi + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x70u), 16); xmm[7] = s; }
    /* 0086b1ea: movdqa xmmword ptr [edi + 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[4], 16);
    /* 0086b1ef: movdqa xmmword ptr [edi + 0x50], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[5], 16);
    /* 0086b1f4: movdqa xmmword ptr [edi + 0x60], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[6], 16);
    /* 0086b1f9: movdqa xmmword ptr [edi + 0x70], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[7], 16);
    /* 0086b1fe: lea esi, [esi + 0x80] */ r_esi = (u32)(r_esi+0x80u);
    /* 0086b204: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b20a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b20b: jne 0x86b1b0 */ if (!fZ) goto L_0086b1b0;
L_0086b20d:; BB(0x0086b20d);
    /* 0086b20d: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086b20f: jmp 0x86b2d2 */ goto L_0086b2d2;
L_0086b214:; BB(0x0086b214);
    /* 0086b214: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086b217: mov edx, eax */ r_edx = r_eax;
    /* 0086b219: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086b21b: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b21e: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b221: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b223: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0086b226: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b228: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b22b: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b22d: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b22f: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b231: mov edi, eax */ r_edi = r_eax;
    /* 0086b233: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b235: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b237: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b239: mov edx, eax */ r_edx = r_eax;
    /* 0086b23b: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b242: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b245: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b247: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b249: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b24b: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b24e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086b251: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b256: jne 0x86b19e */ if (!fZ) goto L_0086b19e;
L_0086b25c:; BB(0x0086b25c);
    /* 0086b25c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b25f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b262: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b265: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b268: nop  */ ;
    /* 0086b269: lea esi, [esi] */ r_esi = (u32)(r_esi);
L_0086b270:; BB(0x0086b270);
    /* 0086b270: movdqa xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086b274: movdqa xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086b279: movdqa xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086b27e: movdqa xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086b283: movntdq xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b287: movntdq xmmword ptr [edi + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[1], 16);
    /* 0086b28c: movntdq xmmword ptr [edi + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[2], 16);
    /* 0086b291: movntdq xmmword ptr [edi + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[3], 16);
    /* 0086b296: movdqa xmm4, xmmword ptr [esi + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x40u), 16); xmm[4] = s; }
    /* 0086b29b: movdqa xmm5, xmmword ptr [esi + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x50u), 16); xmm[5] = s; }
    /* 0086b2a0: movdqa xmm6, xmmword ptr [esi + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x60u), 16); xmm[6] = s; }
    /* 0086b2a5: movdqa xmm7, xmmword ptr [esi + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x70u), 16); xmm[7] = s; }
    /* 0086b2aa: movntdq xmmword ptr [edi + 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[4], 16);
    /* 0086b2af: movntdq xmmword ptr [edi + 0x50], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[5], 16);
    /* 0086b2b4: movntdq xmmword ptr [edi + 0x60], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[6], 16);
    /* 0086b2b9: movntdq xmmword ptr [edi + 0x70], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[7], 16);
    /* 0086b2be: lea esi, [esi + 0x80] */ r_esi = (u32)(r_esi+0x80u);
    /* 0086b2c4: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b2ca: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b2cb: jne 0x86b270 */ if (!fZ) goto L_0086b270;
L_0086b2cd:; BB(0x0086b2cd);
    /* 0086b2cd: sfence  */ ;
    /* 0086b2d0: emms  */ ; /* the MMX tag state is not modelled */
L_0086b2d2:; BB(0x0086b2d2);
    /* 0086b2d2: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b2d5: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b2d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b2da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b2db: ret  */ FN_RET(0x0086b150); r_esp += 4; return;
}

void f_0086b2dc(void) /* sub_86B2DC */
{
    FN_ENTER(0x0086b2dc);
    goto L_0086b2dc;
L_0086b120:; BB(0x0086b120);
    /* 0086b120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b121: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b123: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b126: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b129: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b12c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b12f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b132: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b135: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b137: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b13a: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b13c: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b13e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b141: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b143: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b146: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b149: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b14b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b14c: ret  */ FN_RET(0x0086b2dc); r_esp += 4; return;
L_0086b150:; BB(0x0086b150);
    /* 0086b150: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b151: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b153: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b156: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b159: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b15c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086b15f: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b162: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b165: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086b168: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b16a: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b16d: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b16f: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b171: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b173: mov edi, eax */ r_edi = r_eax;
    /* 0086b175: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b177: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b179: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b17b: mov edx, eax */ r_edx = r_eax;
    /* 0086b17d: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b184: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b187: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b189: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b18b: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b18d: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b190: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0086b193: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b198: je 0x86b214 */ if (fZ) goto L_0086b214;
L_0086b19e:; BB(0x0086b19e);
    /* 0086b19e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b1a1: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b1a4: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b1a7: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b1aa: lea esi, [esi] */ r_esi = (u32)(r_esi);
L_0086b1b0:; BB(0x0086b1b0);
    /* 0086b1b0: movdqa xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086b1b4: movdqa xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086b1b9: movdqa xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086b1be: movdqa xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086b1c3: movdqa xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b1c7: movdqa xmmword ptr [edi + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[1], 16);
    /* 0086b1cc: movdqa xmmword ptr [edi + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[2], 16);
    /* 0086b1d1: movdqa xmmword ptr [edi + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[3], 16);
    /* 0086b1d6: movdqa xmm4, xmmword ptr [esi + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x40u), 16); xmm[4] = s; }
    /* 0086b1db: movdqa xmm5, xmmword ptr [esi + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x50u), 16); xmm[5] = s; }
    /* 0086b1e0: movdqa xmm6, xmmword ptr [esi + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x60u), 16); xmm[6] = s; }
    /* 0086b1e5: movdqa xmm7, xmmword ptr [esi + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x70u), 16); xmm[7] = s; }
    /* 0086b1ea: movdqa xmmword ptr [edi + 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[4], 16);
    /* 0086b1ef: movdqa xmmword ptr [edi + 0x50], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[5], 16);
    /* 0086b1f4: movdqa xmmword ptr [edi + 0x60], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[6], 16);
    /* 0086b1f9: movdqa xmmword ptr [edi + 0x70], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[7], 16);
    /* 0086b1fe: lea esi, [esi + 0x80] */ r_esi = (u32)(r_esi+0x80u);
    /* 0086b204: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b20a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b20b: jne 0x86b1b0 */ if (!fZ) goto L_0086b1b0;
L_0086b20d:; BB(0x0086b20d);
    /* 0086b20d: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086b20f: jmp 0x86b2d2 */ goto L_0086b2d2;
L_0086b214:; BB(0x0086b214);
    /* 0086b214: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086b217: mov edx, eax */ r_edx = r_eax;
    /* 0086b219: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086b21b: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b21e: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b221: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b223: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0086b226: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b228: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b22b: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b22d: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b22f: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b231: mov edi, eax */ r_edi = r_eax;
    /* 0086b233: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b235: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b237: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b239: mov edx, eax */ r_edx = r_eax;
    /* 0086b23b: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b242: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b245: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b247: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b249: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b24b: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b24e: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086b251: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b254: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b256: jne 0x86b19e */ if (!fZ) goto L_0086b19e;
L_0086b25c:; BB(0x0086b25c);
    /* 0086b25c: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b25f: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b262: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b265: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b268: nop  */ ;
    /* 0086b269: lea esi, [esi] */ r_esi = (u32)(r_esi);
L_0086b270:; BB(0x0086b270);
    /* 0086b270: movdqa xmm0, xmmword ptr [esi] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi), 16); xmm[0] = s; }
    /* 0086b274: movdqa xmm1, xmmword ptr [esi + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x10u), 16); xmm[1] = s; }
    /* 0086b279: movdqa xmm2, xmmword ptr [esi + 0x20] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x20u), 16); xmm[2] = s; }
    /* 0086b27e: movdqa xmm3, xmmword ptr [esi + 0x30] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x30u), 16); xmm[3] = s; }
    /* 0086b283: movntdq xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b287: movntdq xmmword ptr [edi + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[1], 16);
    /* 0086b28c: movntdq xmmword ptr [edi + 0x20], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[2], 16);
    /* 0086b291: movntdq xmmword ptr [edi + 0x30], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[3], 16);
    /* 0086b296: movdqa xmm4, xmmword ptr [esi + 0x40] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x40u), 16); xmm[4] = s; }
    /* 0086b29b: movdqa xmm5, xmmword ptr [esi + 0x50] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x50u), 16); xmm[5] = s; }
    /* 0086b2a0: movdqa xmm6, xmmword ptr [esi + 0x60] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x60u), 16); xmm[6] = s; }
    /* 0086b2a5: movdqa xmm7, xmmword ptr [esi + 0x70] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_esi+0x70u), 16); xmm[7] = s; }
    /* 0086b2aa: movntdq xmmword ptr [edi + 0x40], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[4], 16);
    /* 0086b2af: movntdq xmmword ptr [edi + 0x50], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[5], 16);
    /* 0086b2b4: movntdq xmmword ptr [edi + 0x60], xmm6 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[6], 16);
    /* 0086b2b9: movntdq xmmword ptr [edi + 0x70], xmm7 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[7], 16);
    /* 0086b2be: lea esi, [esi + 0x80] */ r_esi = (u32)(r_esi+0x80u);
    /* 0086b2c4: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b2ca: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b2cb: jne 0x86b270 */ if (!fZ) goto L_0086b270;
L_0086b2cd:; BB(0x0086b2cd);
    /* 0086b2cd: sfence  */ ;
    /* 0086b2d0: emms  */ ; /* the MMX tag state is not modelled */
L_0086b2d2:; BB(0x0086b2d2);
    /* 0086b2d2: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b2d5: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b2d8: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b2da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b2db: ret  */ FN_RET(0x0086b2dc); r_esp += 4; return;
L_0086b2dc:; BB(0x0086b2dc);
    /* 0086b2dc: test dword ptr [0xae7f00], 0x400 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b2e6: jne 0x86b120 */ if (!fZ) goto L_0086b120;
L_0086b2ec:; BB(0x0086b2ec);
    /* 0086b2ec: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b2f6: jne 0x86b150 */ if (!fZ) goto L_0086b150;
L_0086b2fc:; BB(0x0086b2fc);
    /* 0086b2fc: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b306: jne 0x86b120 */ if (!fZ) goto L_0086b120;
L_0086b30c:; BB(0x0086b30c);
    /* 0086b30c: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b316: jne 0x86b738 */ if (!fZ) goto L_0086b738;
L_0086b31c:; BB(0x0086b31c);
    /* 0086b31c: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86b321u); f_0086b8a0();
    /* 0086b321: jmp 0x86b2dc */ goto L_0086b2dc;
L_0086b738:; BB(0x0086b738);
    /* 0086b738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b739: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b73b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b73e: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b741: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b744: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b747: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b74a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b74d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b74f: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b752: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b755: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b758: ret  */ FN_RET(0x0086b2dc); r_esp += 4; return;
}

void f_0086b324(void) /* sub_86B324 */
{
    FN_ENTER(0x0086b324);
    /* 0086b324: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b325: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b327: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b32a: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 0086b32d: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b330: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 0086b333: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0086b336: cmp esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086b33c: ja 0x86b35d */ if ((!fC&&!fZ)) goto L_0086b35d;
L_0086b33e:; BB(0x0086b33e);
    /* 0086b33e: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b341: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b344: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b347: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b349: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b34c: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b34e: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b350: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b353: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b355: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b358: jmp 0x86b421 */ goto L_0086b421;
L_0086b35d:; BB(0x0086b35d);
    /* 0086b35d: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0086b360: mov eax, ebx */ r_eax = r_ebx;
    /* 0086b362: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086b363: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b365: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b368: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b36a: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b36c: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b36f: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b371: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b373: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086b374: mov edi, eax */ r_edi = r_eax;
    /* 0086b376: xor edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086b378: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b37a: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0086b37d: xor edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086b37f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b381: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b383: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0086b385: jne 0x86b3ce */ if (!fZ) goto L_0086b3ce;
L_0086b387:; BB(0x0086b387);
    /* 0086b387: mov ecx, esi */ r_ecx = r_esi;
    /* 0086b389: and ecx, 0x7f */ {  u32 a = r_ecx; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b38c: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0086b38f: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b391: je 0x86b3a6 */ if (fZ) goto L_0086b3a6;
L_0086b393:; BB(0x0086b393);
    /* 0086b393: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086b395: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b396: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b398: call 0x86b2dc */ r_esp -= 4; W32(r_esp, 0x86b39du); f_0086b2dc();
    /* 0086b39d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086b3a0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b3a3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
L_0086b3a6:; BB(0x0086b3a6);
    /* 0086b3a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b3a8: je 0x86b421 */ if (fZ) goto L_0086b421;
L_0086b3aa:; BB(0x0086b3aa);
    /* 0086b3aa: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0086b3ad: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0086b3b0: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b3b2: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086b3b4: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0086b3b7: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086b3b9: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b3bb: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0086b3be: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b3c1: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b3c4: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086b3c7: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b3c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b3cc: jmp 0x86b421 */ goto L_0086b421;
L_0086b3ce:; BB(0x0086b3ce);
    /* 0086b3ce: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b3d0: jne 0x86b407 */ if (!fZ) goto L_0086b407;
L_0086b3d2:; BB(0x0086b3d2);
    /* 0086b3d2: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b3d4: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b3d7: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0086b3da: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b3dd: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b3e0: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b3e3: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b3e5: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0086b3e8: add ecx, dword ptr [ebp - 0x1c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b3eb: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0086b3ee: add edx, dword ptr [ebp - 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b3f1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086b3f4: sub eax, dword ptr [ebp - 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffe4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b3f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b3f8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b3f9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b3fa: call 0x86b324 */ r_esp -= 4; W32(r_esp, 0x86b3ffu); f_0086b324();
    /* 0086b3ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086b402: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b405: jmp 0x86b421 */ goto L_0086b421;
L_0086b407:; BB(0x0086b407);
    /* 0086b407: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b40a: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b40d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b410: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b412: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b415: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b417: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b419: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b41c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b41e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0086b421:; BB(0x0086b421);
    /* 0086b421: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b424: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b427: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b42a: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b42c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b42d: ret  */ FN_RET(0x0086b324); r_esp += 4; return;
}

void f_0086b430(void) /* sub_86B430 */
{
    FN_ENTER(0x0086b430);
    /* 0086b430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b431: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b433: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b434: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b437: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b439: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b43c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b43f: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b441: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b444: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b446: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b448: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b44b: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b44d: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b450: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b452: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b453: ret  */ FN_RET(0x0086b430); r_esp += 4; return;
}

void f_0086b454(void) /* sub_86B454 */
{
    FN_ENTER(0x0086b454);
    /* 0086b454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b455: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b457: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b45a: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b45d: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b460: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b463: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b466: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b469: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086b46c: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b46e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b471: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b473: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b475: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b477: mov edi, eax */ r_edi = r_eax;
    /* 0086b479: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b47b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b47d: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b47f: mov edx, eax */ r_edx = r_eax;
    /* 0086b481: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b488: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b48b: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b48d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b48f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b491: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b494: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0086b497: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b49c: je 0x86b4eb */ if (fZ) goto L_0086b4eb;
L_0086b49e:; BB(0x0086b49e);
    /* 0086b49e: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b4a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b4a4: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b4a7: pxor xmm0, xmm0 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[1] = r.q; }
    /* 0086b4ab: mov esi, esi */ r_esi = r_esi;
    /* 0086b4ad: lea edi, [edi] */ r_edi = (u32)(r_edi);
L_0086b4b4:; BB(0x0086b4b4);
    /* 0086b4b4: movdqa xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b4b8: movdqa xmmword ptr [edi + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[0], 16);
    /* 0086b4bd: movdqa xmmword ptr [edi + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[0], 16);
    /* 0086b4c2: movdqa xmmword ptr [edi + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[0], 16);
    /* 0086b4c7: movdqa xmmword ptr [edi + 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[0], 16);
    /* 0086b4cc: movdqa xmmword ptr [edi + 0x50], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[0], 16);
    /* 0086b4d1: movdqa xmmword ptr [edi + 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[0], 16);
    /* 0086b4d6: movdqa xmmword ptr [edi + 0x70], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[0], 16);
    /* 0086b4db: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b4e1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b4e2: jne 0x86b4b4 */ if (!fZ) goto L_0086b4b4;
L_0086b4e4:; BB(0x0086b4e4);
    /* 0086b4e4: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086b4e6: jmp 0x86b579 */ goto L_0086b579;
L_0086b4eb:; BB(0x0086b4eb);
    /* 0086b4eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b4ee: mov edx, eax */ r_edx = r_eax;
    /* 0086b4f0: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086b4f2: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b4f5: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b4f8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b4fa: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0086b4fd: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b4ff: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b502: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b504: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b506: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b508: mov edi, eax */ r_edi = r_eax;
    /* 0086b50a: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b50c: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b50e: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b510: mov edx, eax */ r_edx = r_eax;
    /* 0086b512: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b519: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b51c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b51e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b520: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b522: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b525: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086b528: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b52d: jne 0x86b49e */ if (!fZ) goto L_0086b49e;
L_0086b533:; BB(0x0086b533);
    /* 0086b533: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b536: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b539: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b53c: pxor xmm0, xmm0 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[1] = r.q; }
    /* 0086b540: lea esi, [esi] */ r_esi = (u32)(r_esi);
L_0086b544:; BB(0x0086b544);
    /* 0086b544: movntdq xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b548: movntdq xmmword ptr [edi + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[0], 16);
    /* 0086b54d: movntdq xmmword ptr [edi + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[0], 16);
    /* 0086b552: movntdq xmmword ptr [edi + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[0], 16);
    /* 0086b557: movntdq xmmword ptr [edi + 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[0], 16);
    /* 0086b55c: movntdq xmmword ptr [edi + 0x50], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[0], 16);
    /* 0086b561: movntdq xmmword ptr [edi + 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[0], 16);
    /* 0086b566: movntdq xmmword ptr [edi + 0x70], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[0], 16);
    /* 0086b56b: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b571: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b572: jne 0x86b544 */ if (!fZ) goto L_0086b544;
L_0086b574:; BB(0x0086b574);
    /* 0086b574: sfence  */ ;
    /* 0086b577: emms  */ ; /* the MMX tag state is not modelled */
L_0086b579:; BB(0x0086b579);
    /* 0086b579: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b57c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b57f: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b582: ret  */ FN_RET(0x0086b454); r_esp += 4; return;
}

void f_0086b584(void) /* sub_86B584 */
{
    FN_ENTER(0x0086b584);
    goto L_0086b584;
L_0086b430:; BB(0x0086b430);
    /* 0086b430: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b431: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b433: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b434: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b437: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b439: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b43c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b43f: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b441: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b444: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b446: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b448: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b44b: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b44d: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b450: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b452: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b453: ret  */ FN_RET(0x0086b584); r_esp += 4; return;
L_0086b454:; BB(0x0086b454);
    /* 0086b454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b455: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b457: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b45a: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b45d: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b460: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b463: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b466: add eax, dword ptr [ebp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b469: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086b46c: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b46e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b471: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b473: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b475: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b477: mov edi, eax */ r_edi = r_eax;
    /* 0086b479: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b47b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b47d: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b47f: mov edx, eax */ r_edx = r_eax;
    /* 0086b481: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b488: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b48b: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b48d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b48f: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b491: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b494: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0086b497: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b49a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b49c: je 0x86b4eb */ if (fZ) goto L_0086b4eb;
L_0086b49e:; BB(0x0086b49e);
    /* 0086b49e: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b4a1: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b4a4: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b4a7: pxor xmm0, xmm0 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[1] = r.q; }
    /* 0086b4ab: mov esi, esi */ r_esi = r_esi;
    /* 0086b4ad: lea edi, [edi] */ r_edi = (u32)(r_edi);
L_0086b4b4:; BB(0x0086b4b4);
    /* 0086b4b4: movdqa xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b4b8: movdqa xmmword ptr [edi + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[0], 16);
    /* 0086b4bd: movdqa xmmword ptr [edi + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[0], 16);
    /* 0086b4c2: movdqa xmmword ptr [edi + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[0], 16);
    /* 0086b4c7: movdqa xmmword ptr [edi + 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[0], 16);
    /* 0086b4cc: movdqa xmmword ptr [edi + 0x50], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[0], 16);
    /* 0086b4d1: movdqa xmmword ptr [edi + 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[0], 16);
    /* 0086b4d6: movdqa xmmword ptr [edi + 0x70], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[0], 16);
    /* 0086b4db: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b4e1: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b4e2: jne 0x86b4b4 */ if (!fZ) goto L_0086b4b4;
L_0086b4e4:; BB(0x0086b4e4);
    /* 0086b4e4: emms  */ ; /* the MMX tag state is not modelled */
    /* 0086b4e6: jmp 0x86b579 */ goto L_0086b579;
L_0086b4eb:; BB(0x0086b4eb);
    /* 0086b4eb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b4ee: mov edx, eax */ r_edx = r_eax;
    /* 0086b4f0: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0086b4f2: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b4f5: add edx, dword ptr [ebp + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b4f8: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086b4fa: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0086b4fd: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b4ff: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b502: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b504: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b506: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 0086b508: mov edi, eax */ r_edi = r_eax;
    /* 0086b50a: rdtsc  */ { u64 t = rt_rdtsc(); r_eax = (u32)t; r_edx = (u32)(t >> 32); }
    /* 0086b50c: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b50e: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b510: mov edx, eax */ r_edx = r_eax;
    /* 0086b512: lea esi, [edi*4] */ r_esi = (u32)(r_edi*4);
    /* 0086b519: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0086b51c: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b51e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b520: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b522: setge al */ r_eax = (r_eax & 0xffffff00u) | ((((fS==fO)) ? 1 : 0) & 0xffu);
    /* 0086b525: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086b528: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b52d: jne 0x86b49e */ if (!fZ) goto L_0086b49e;
L_0086b533:; BB(0x0086b533);
    /* 0086b533: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b536: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b539: shr ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; } }
    /* 0086b53c: pxor xmm0, xmm0 */ { MM64 a; a.q = xmm[0].q[0]; MM64 b; b.q = xmm[0].q[0]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[0] = r.q; } { MM64 a; a.q = xmm[0].q[1]; MM64 b; b.q = xmm[0].q[1]; MM64 r; r.q = a.q ^ b.q; xmm[0].q[1] = r.q; }
    /* 0086b540: lea esi, [esi] */ r_esi = (u32)(r_esi);
L_0086b544:; BB(0x0086b544);
    /* 0086b544: movntdq xmmword ptr [edi], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi), &xmm[0], 16);
    /* 0086b548: movntdq xmmword ptr [edi + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x10u), &xmm[0], 16);
    /* 0086b54d: movntdq xmmword ptr [edi + 0x20], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x20u), &xmm[0], 16);
    /* 0086b552: movntdq xmmword ptr [edi + 0x30], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x30u), &xmm[0], 16);
    /* 0086b557: movntdq xmmword ptr [edi + 0x40], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x40u), &xmm[0], 16);
    /* 0086b55c: movntdq xmmword ptr [edi + 0x50], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x50u), &xmm[0], 16);
    /* 0086b561: movntdq xmmword ptr [edi + 0x60], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x60u), &xmm[0], 16);
    /* 0086b566: movntdq xmmword ptr [edi + 0x70], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edi+0x70u), &xmm[0], 16);
    /* 0086b56b: lea edi, [edi + 0x80] */ r_edi = (u32)(r_edi+0x80u);
    /* 0086b571: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086b572: jne 0x86b544 */ if (!fZ) goto L_0086b544;
L_0086b574:; BB(0x0086b574);
    /* 0086b574: sfence  */ ;
    /* 0086b577: emms  */ ; /* the MMX tag state is not modelled */
L_0086b579:; BB(0x0086b579);
    /* 0086b579: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b57c: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b57f: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b581: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b582: ret  */ FN_RET(0x0086b584); r_esp += 4; return;
L_0086b584:; BB(0x0086b584);
    /* 0086b584: test dword ptr [0xae7f00], 0x400 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b58e: jne 0x86b430 */ if (!fZ) goto L_0086b430;
L_0086b594:; BB(0x0086b594);
    /* 0086b594: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b59e: jne 0x86b454 */ if (!fZ) goto L_0086b454;
L_0086b5a4:; BB(0x0086b5a4);
    /* 0086b5a4: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b5ae: jne 0x86b430 */ if (!fZ) goto L_0086b430;
L_0086b5b4:; BB(0x0086b5b4);
    /* 0086b5b4: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b5be: jne 0x86b720 */ if (!fZ) goto L_0086b720;
L_0086b5c4:; BB(0x0086b5c4);
    /* 0086b5c4: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86b5c9u); f_0086b8a0();
    /* 0086b5c9: jmp 0x86b584 */ goto L_0086b584;
L_0086b720:; BB(0x0086b720);
    /* 0086b720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b721: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b723: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b724: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b729: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b72c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b72f: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b731: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b734: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b737: ret  */ FN_RET(0x0086b584); r_esp += 4; return;
}

void f_0086b5cc(void) /* sub_86B5CC */
{
    FN_ENTER(0x0086b5cc);
    /* 0086b5cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b5cd: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b5cf: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b5d2: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b5d5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b5d8: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086b5de: ja 0x86b5fb */ if ((!fC&&!fZ)) goto L_0086b5fb;
L_0086b5e0:; BB(0x0086b5e0);
    /* 0086b5e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b5e2: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b5e5: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b5e8: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b5ea: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086b5ed: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086b5ef: mov ecx, edx */ r_ecx = r_edx;
    /* 0086b5f1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b5f4: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b5f6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b5f9: jmp 0x86b677 */ goto L_0086b677;
L_0086b5fb:; BB(0x0086b5fb);
    /* 0086b5fb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b5fe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086b5ff: mov edi, eax */ r_edi = r_eax;
    /* 0086b601: xor edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086b603: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b605: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0086b608: xor edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086b60a: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b60c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b60e: jne 0x86b649 */ if (!fZ) goto L_0086b649;
L_0086b610:; BB(0x0086b610);
    /* 0086b610: mov edx, ecx */ r_edx = r_ecx;
    /* 0086b612: and edx, 0x7f */ {  u32 a = r_edx; u32 b = 0x7fu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0086b615: mov dword ptr [ebp - 0xc], edx */ W32((u32)(r_ebp+0xfffffff4u), r_edx);
    /* 0086b618: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b61a: je 0x86b62e */ if (fZ) goto L_0086b62e;
L_0086b61c:; BB(0x0086b61c);
    /* 0086b61c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b61e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b61f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b620: call 0x86b584 */ r_esp -= 4; W32(r_esp, 0x86b625u); f_0086b584();
    /* 0086b625: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086b628: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b62b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
L_0086b62e:; BB(0x0086b62e);
    /* 0086b62e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b630: je 0x86b677 */ if (fZ) goto L_0086b677;
L_0086b632:; BB(0x0086b632);
    /* 0086b632: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b635: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b637: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0086b63a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b63c: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b63f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b642: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b644: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b647: jmp 0x86b677 */ goto L_0086b677;
L_0086b649:; BB(0x0086b649);
    /* 0086b649: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086b64b: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086b64e: mov dword ptr [ebp - 0x10], edi */ W32((u32)(r_ebp+0xfffffff0u), r_edi);
    /* 0086b651: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b653: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b656: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b659: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b65b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b65e: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0086b661: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0086b664: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b666: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0086b668: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b669: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086b66b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b66c: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x86b671u); f_0086b5cc();
    /* 0086b671: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086b674: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_0086b677:; BB(0x0086b677);
    /* 0086b677: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b67a: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b67c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b67d: ret  */ FN_RET(0x0086b5cc); r_esp += 4; return;
}

void f_0086b688(void) /* sub_86B688 */
{
    FN_ENTER(0x0086b688);
    goto L_0086b688;
L_0086b680:; BB(0x0086b680);
    /* 0086b680: jmp 0x86ba20 */ f_0086ba20(); return;
L_0086b688:; BB(0x0086b688);
    /* 0086b688: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b692: jne 0x86b680 */ if (!fZ) goto L_0086b680;
L_0086b698:; BB(0x0086b698);
    /* 0086b698: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b6a2: jne 0x86b704 */ if (!fZ) goto L_0086b704;
L_0086b6a8:; BB(0x0086b6a8);
    /* 0086b6a8: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86b6adu); f_0086b8a0();
    /* 0086b6ad: jmp 0x86b688 */ goto L_0086b688;
L_0086b704:; BB(0x0086b704);
    /* 0086b704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b705: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b707: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b708: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b70b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b70e: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b711: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b714: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b716: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b719: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b71c: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b71e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b71f: ret  */ FN_RET(0x0086b688); r_esp += 4; return;
}

void f_0086b6b8(void) /* sub_86B6B8 */
{
    FN_ENTER(0x0086b6b8);
    goto L_0086b6b8;
L_0086b6b0:; BB(0x0086b6b0);
    /* 0086b6b0: jmp 0x86c4a0 */ f_0086c4a0(); return;
L_0086b6b8:; BB(0x0086b6b8);
    /* 0086b6b8: test dword ptr [0xae7f00], 0xfffffe00 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xfffffe00u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b6c2: jne 0x86b6b0 */ if (!fZ) goto L_0086b6b0;
L_0086b6c8:; BB(0x0086b6c8);
    /* 0086b6c8: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b6d2: jne 0x86b6e0 */ if (!fZ) goto L_0086b6e0;
L_0086b6d8:; BB(0x0086b6d8);
    /* 0086b6d8: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86b6ddu); f_0086b8a0();
    /* 0086b6dd: jmp 0x86b6b8 */ goto L_0086b6b8;
L_0086b6e0:; BB(0x0086b6e0);
    /* 0086b6e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b6e1: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b6e3: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b6e6: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b6e9: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b6ec: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b6ef: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b6f2: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b6f5: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b6f7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b6fa: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b6fd: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b700: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b702: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b703: ret  */ FN_RET(0x0086b6b8); r_esp += 4; return;
}

void f_0086b704(void) /* sub_86B704 */
{
    FN_ENTER(0x0086b704);
    /* 0086b704: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b705: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b707: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b708: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b70b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086b70e: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b711: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b714: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b716: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b719: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b71c: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b71e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b71f: ret  */ FN_RET(0x0086b704); r_esp += 4; return;
}

void f_0086b720(void) /* sub_86B720 */
{
    FN_ENTER(0x0086b720);
    /* 0086b720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b721: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b723: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b724: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b729: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b72c: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 0086b72f: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b731: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b734: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b736: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b737: ret  */ FN_RET(0x0086b720); r_esp += 4; return;
}

void f_0086b738(void) /* sub_86B738 */
{
    FN_ENTER(0x0086b738);
    /* 0086b738: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b739: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b73b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b73e: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086b741: mov dword ptr [ebp - 8], esi */ W32((u32)(r_ebp+0xfffffff8u), r_esi);
    /* 0086b744: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0086b747: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086b74a: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086b74d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0086b74f: mov esi, dword ptr [ebp - 8] */ r_esi = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b752: mov edi, dword ptr [ebp - 4] */ r_edi = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b755: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b757: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b758: ret  */ FN_RET(0x0086b738); r_esp += 4; return;
}

void f_0086b768(void) /* sub_86B768 */
{
    FN_ENTER(0x0086b768);
    goto L_0086b768;
L_0061cdb0:; BB(0x0061cdb0);
    /* 0061cdb0: ret  */ FN_RET(0x0086b768); r_esp += 4; return;
L_0086b75c:; BB(0x0086b75c);
    /* 0086b75c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086b75e: call 0x86b790 */ r_esp -= 4; W32(r_esp, 0x86b763u); f_0086b790();
    /* 0086b763: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b764: ret  */ FN_RET(0x0086b768); r_esp += 4; return;
L_0086b768:; BB(0x0086b768);
    /* 0086b768: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b772: jne 0x86b75c */ if (!fZ) goto L_0086b75c;
L_0086b778:; BB(0x0086b778);
    /* 0086b778: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b782: jne 0x61cdb0 */ if (!fZ) goto L_0061cdb0;
L_0086b788:; BB(0x0086b788);
    /* 0086b788: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x86b78du); f_0086b8a0();
    /* 0086b78d: jmp 0x86b768 */ goto L_0086b768;
}

void f_0086b790(void) /* sub_86B790 */
{
    FN_ENTER(0x0086b790);
    /* 0086b790: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b791: mov ebx, esp */ r_ebx = r_esp;
    /* 0086b793: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0086b796: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b797: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b798: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0086b79b: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0086b79f: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b7a1: sub esp, 0x818 */ {  u32 a = r_esp; u32 b = 0x818u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086b7a7: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 0086b7aa: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 0086b7ad: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0086b7b0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086b7b2: lea eax, [ebp - 0x818] */ r_eax = (u32)(r_ebp+0xfffff7e8u);
    /* 0086b7b8: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0086b7bd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086b7bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b7c0: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x86b7c5u); f_0085f580();
    /* 0086b7c5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086b7c8: fxsave [ebp - 0x818] */ UNSUP(0x0086b7c8, "fxsave");
    /* 0086b7cf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b7d1: jne 0x86b7d9 */ if (!fZ) goto L_0086b7d9;
L_0086b7d3:; BB(0x0086b7d3);
    /* 0086b7d3: mov esi, dword ptr [ebp - 0x7fc] */ r_esi = R32((u32)(r_ebp+0xfffff804u));
L_0086b7d9:; BB(0x0086b7d9);
    /* 0086b7d9: stmxcsr dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), mxcsr);
    /* 0086b7dd: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086b7e0: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0086b7e5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086b7e8: ldmxcsr dword ptr [ebp - 0x14] */ mxcsr = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b7ec: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b7ee: jne 0x86b7f4 */ if (!fZ) goto L_0086b7f4;
L_0086b7f0:; BB(0x0086b7f0);
    /* 0086b7f0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b7f2: je 0x86b805 */ if (fZ) goto L_0086b805;
L_0086b7f4:; BB(0x0086b7f4);
    /* 0086b7f4: stmxcsr dword ptr [ebp - 0x14] */ W32((u32)(r_ebp+0xffffffecu), mxcsr);
    /* 0086b7f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b7fb: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b7fe: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086b801: ldmxcsr dword ptr [ebp - 0x14] */ mxcsr = R32((u32)(r_ebp+0xffffffecu));
L_0086b805:; BB(0x0086b805);
    /* 0086b805: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b808: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b80b: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b80d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b80e: mov esp, ebx */ r_esp = r_ebx;
    /* 0086b810: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086b811: ret  */ FN_RET(0x0086b790); r_esp += 4; return;
}

void f_0086b814(void) /* sub_86B814 */
{
    FN_ENTER(0x0086b814);
    /* 0086b814: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b815: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b817: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086b819: push 0x99a4bc */ { u32 v = 0x99a4bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0086b81e: push 0x85b6a4 */ { u32 v = 0x85b6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086b823: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0086b829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b82a: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0086b831: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b834: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086b837: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0086b83a: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0086b83d: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0086b840: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0086b847: jmp 0x86b852 */ goto L_0086b852;
L_0086b852:; BB(0x0086b852);
    /* 0086b852: movaps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0] = s; }
    /* 0086b855: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0086b85c: mov eax, 1 */ r_eax = 0x1u;
    /* 0086b861: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086b864: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086b867: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086b86a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b86d: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b870: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086b877: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b879: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b87a: ret  */ FN_RET(0x0086b814); r_esp += 4; return;
}

void f_0086b87b(void)
{
    FN_ENTER(0x0086b87b);
    /* 0086b87b: mov eax, 1 */ r_eax = 0x1u;
    /* 0086b880: ret  */ FN_RET(0x0086b87b); r_esp += 4; return;
}

void f_0086b881(void)
{
    FN_ENTER(0x0086b881);
    /* 0086b881: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086b884: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b886: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086b889: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086b88c: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086b88f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b892: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b895: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0086b89c: mov esp, ebp */ r_esp = r_ebp;
    /* 0086b89e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086b89f: ret  */ FN_RET(0x0086b881); r_esp += 4; return;
}

void f_0086b8a0(void) /* sub_86B8A0 */
{
    FN_ENTER(0x0086b8a0);
    /* 0086b8a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8a7: mov ebp, esp */ r_ebp = r_esp;
    /* 0086b8a9: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b8ac: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0086b8ad: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086b8ae: mov ecx, eax */ r_ecx = r_eax;
    /* 0086b8b0: xor eax, 0x200000 */ {  u32 a = r_eax; u32 b = 0x200000u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086b8b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8b6: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 0086b8b7: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 0086b8b8: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086b8b9: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b8bb: je 0x86b8eb */ if (fZ) goto L_0086b8eb;
L_0086b8c1:; BB(0x0086b8c1);
    /* 0086b8c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b8c2: popfd  */ { u32 v = R32(r_esp); r_esp += 4; fC = v & 1; fP = (v >> 2) & 1; fA = (v >> 4) & 1; fZ = (v >> 6) & 1; fS = (v >> 7) & 1; fO = (v >> 11) & 1; rt_eflags_extra = v & 0x240000u; }
    /* 0086b8c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b8c5: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086b8c7: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086b8ca: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 0086b8cd: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 0086b8d0: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 0086b8d3: mov eax, 1 */ r_eax = 0x1u;
    /* 0086b8d8: cpuid  */ { u32 a, b, c, d; rt_cpuid(r_eax, r_ecx, &a, &b, &c, &d); r_eax = a; r_ebx = b; r_ecx = c; r_edx = d; }
    /* 0086b8da: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086b8dd: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0086b8e0: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0086b8e3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0086b8e6: jmp 0x86b905 */ goto L_0086b905;
L_0086b8eb:; BB(0x0086b8eb);
    /* 0086b8eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086b8ed: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086b8f0: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0086b8f3: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086b8f6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0086b8f9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086b8fc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0086b8ff: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086b902: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0086b905:; BB(0x0086b905);
    /* 0086b905: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b908: cmp eax, 0x756e6547 */ {  u32 a = r_eax; u32 b = 0x756e6547u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b90d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 0086b912: jne 0x86b92f */ if (!fZ) goto L_0086b92f;
L_0086b914:; BB(0x0086b914);
    /* 0086b914: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b917: cmp eax, 0x49656e69 */ {  u32 a = r_eax; u32 b = 0x49656e69u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b91c: jne 0x86b92f */ if (!fZ) goto L_0086b92f;
L_0086b91e:; BB(0x0086b91e);
    /* 0086b91e: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086b921: cmp eax, 0x6c65746e */ {  u32 a = r_eax; u32 b = 0x6c65746eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b926: jne 0x86b92f */ if (!fZ) goto L_0086b92f;
L_0086b928:; BB(0x0086b928);
    /* 0086b928: mov edx, 1 */ r_edx = 0x1u;
    /* 0086b92d: jmp 0x86b931 */ goto L_0086b931;
L_0086b92f:; BB(0x0086b92f);
    /* 0086b92f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0086b931:; BB(0x0086b931);
    /* 0086b931: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086b934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b936: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b93c:; BB(0x0086b93c);
    /* 0086b93c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b93e: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b944:; BB(0x0086b944);
    /* 0086b944: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0086b947: shr eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0086b94a: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086b94d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b950: jne 0x86b96f */ if (!fZ) goto L_0086b96f;
L_0086b952:; BB(0x0086b952);
    /* 0086b952: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086b955: test eax, 0x800000 */ {  u32 a = r_eax; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b95a: mov ebx, 2 */ r_ebx = 0x2u;
    /* 0086b95f: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b965:; BB(0x0086b965);
    /* 0086b965: mov ebx, 8 */ r_ebx = 0x8u;
    /* 0086b96a: jmp 0x86ba07 */ goto L_0086ba07;
L_0086b96f:; BB(0x0086b96f);
    /* 0086b96f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b972: jne 0x86b9ce */ if (!fZ) goto L_0086b9ce;
L_0086b974:; BB(0x0086b974);
    /* 0086b974: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086b977: test edx, 0x800000 */ {  u32 a = r_edx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b97d: mov ebx, 4 */ r_ebx = 0x4u;
    /* 0086b982: je 0x86b989 */ if (fZ) goto L_0086b989;
L_0086b984:; BB(0x0086b984);
    /* 0086b984: mov ebx, 0x10 */ r_ebx = 0x10u;
L_0086b989:; BB(0x0086b989);
    /* 0086b989: test edx, 0x1000000 */ {  u32 a = r_edx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b98f: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b991:; BB(0x0086b991);
    /* 0086b991: test edx, 0x2000000 */ {  u32 a = r_edx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b997: mov ebx, 0x20 */ r_ebx = 0x20u;
    /* 0086b99c: je 0x86b9b6 */ if (fZ) goto L_0086b9b6;
L_0086b99e:; BB(0x0086b99e);
    /* 0086b99e: call 0x86b814 */ r_esp -= 4; W32(r_esp, 0x86b9a3u); f_0086b814();
    /* 0086b9a3: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086b9a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b9a8: je 0x86b9b1 */ if (fZ) goto L_0086b9b1;
L_0086b9aa:; BB(0x0086b9aa);
    /* 0086b9aa: mov ebx, 0x80 */ r_ebx = 0x80u;
    /* 0086b9af: jmp 0x86b9b6 */ goto L_0086b9b6;
L_0086b9b1:; BB(0x0086b9b1);
    /* 0086b9b1: mov ebx, 0x40 */ r_ebx = 0x40u;
L_0086b9b6:; BB(0x0086b9b6);
    /* 0086b9b6: test edx, 0x4000000 */ {  u32 a = r_edx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b9bc: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b9be:; BB(0x0086b9be);
    /* 0086b9be: call 0x86b814 */ r_esp -= 4; W32(r_esp, 0x86b9c3u); f_0086b814();
    /* 0086b9c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b9c5: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b9c7:; BB(0x0086b9c7);
    /* 0086b9c7: mov ebx, 0x400 */ r_ebx = 0x400u;
    /* 0086b9cc: jmp 0x86ba07 */ goto L_0086ba07;
L_0086b9ce:; BB(0x0086b9ce);
    /* 0086b9ce: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b9d1: jne 0x86ba07 */ if (!fZ) goto L_0086ba07;
L_0086b9d3:; BB(0x0086b9d3);
    /* 0086b9d3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086b9d6: test eax, 0x4000000 */ {  u32 a = r_eax; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b9db: je 0x86b9f2 */ if (fZ) goto L_0086b9f2;
L_0086b9dd:; BB(0x0086b9dd);
    /* 0086b9dd: call 0x86b814 */ r_esp -= 4; W32(r_esp, 0x86b9e2u); f_0086b814();
    /* 0086b9e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b9e4: je 0x86b9ed */ if (fZ) goto L_0086b9ed;
L_0086b9e6:; BB(0x0086b9e6);
    /* 0086b9e6: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 0086b9eb: jmp 0x86b9f2 */ goto L_0086b9f2;
L_0086b9ed:; BB(0x0086b9ed);
    /* 0086b9ed: mov ebx, 0x100 */ r_ebx = 0x100u;
L_0086b9f2:; BB(0x0086b9f2);
    /* 0086b9f2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086b9f5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086b9f7: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086b9f9:; BB(0x0086b9f9);
    /* 0086b9f9: call 0x86b814 */ r_esp -= 4; W32(r_esp, 0x86b9feu); f_0086b814();
    /* 0086b9fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ba00: je 0x86ba07 */ if (fZ) goto L_0086ba07;
L_0086ba02:; BB(0x0086ba02);
    /* 0086ba02: mov ebx, 0x800 */ r_ebx = 0x800u;
L_0086ba07:; BB(0x0086ba07);
    /* 0086ba07: mov dword ptr [0xae7f00], ebx */ W32((u32)(0xae7f00u), r_ebx);
    /* 0086ba0d: add esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086ba10: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086ba11: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ba12: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086ba13: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086ba14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ba15: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 0086ba16: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086ba17: ret  */ FN_RET(0x0086b8a0); r_esp += 4; return;
}

