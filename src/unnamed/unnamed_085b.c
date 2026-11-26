#include "protos.h"

void f_0085b054(void)
{
    FN_ENTER(0x0085b054);
    /* 0085b054: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085b056: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085b057: ret  */ FN_RET(0x0085b054); r_esp += 4; return;
}

void f_0085b058(void)
{
    FN_ENTER(0x0085b058);
    /* 0085b058: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085b05b: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x85b060u); f_00865365();
    /* 0085b060: mov esi, dword ptr [ebp - 0x134] */ r_esi = R32((u32)(r_ebp+0xfffffeccu));
    /* 0085b066: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0085b069: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b06a: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b06fu); f_00859c55();
    /* 0085b06f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b070: mov edi, eax */ r_edi = r_eax;
    /* 0085b072: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b074: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b076: jne 0x85b07c */ if (!fZ) goto L_0085b07c;
L_0085b078:; BB(0x0085b078);
    /* 0085b078: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085b07a: jmp 0x85b086 */ goto L_0085b086;
L_0085b07c:; BB(0x0085b07c);
    /* 0085b07c: mov dword ptr [ebp - 0x130], 1 */ W32((u32)(r_ebp+0xfffffed0u), 0x1u);
L_0085b086:; BB(0x0085b086);
    /* 0085b086: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b08a: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b08c: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b08e:; BB(0x0085b08e);
    /* 0085b08e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b08f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085b090: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b091: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x85b097u); call_ind(t); }
    /* 0085b097: mov esi, eax */ r_esi = r_eax;
    /* 0085b099: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b09b: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b09d:; BB(0x0085b09d);
    /* 0085b09d: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0085b09f: cmp al, 0x5c */ {  u32 a = (u8)r_eax; u32 b = 0x5cu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b0a1: je 0x85b0a7 */ if (fZ) goto L_0085b0a7;
L_0085b0a3:; BB(0x0085b0a3);
    /* 0085b0a3: cmp al, 0x2f */ {  u32 a = (u8)r_eax; u32 b = 0x2fu; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b0a5: jne 0x85b0ac */ if (!fZ) goto L_0085b0ac;
L_0085b0a7:; BB(0x0085b0a7);
    /* 0085b0a7: cmp al, byte ptr [edi + 1] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b0aa: je 0x85b0e2 */ if (fZ) goto L_0085b0e2;
L_0085b0ac:; BB(0x0085b0ac);
    /* 0085b0ac: mov byte ptr [ebp - 0x128], 0x3d */ W8((u32)(r_ebp+0xfffffed8u), 0x3du);
    /* 0085b0b3: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0085b0b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0b7: call 0x8652e0 */ r_esp -= 4; W32(r_esp, 0x85b0bcu); f_008652e0();
    /* 0085b0bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b0bd: mov byte ptr [ebp - 0x127], al */ W8((u32)(r_ebp+0xfffffed9u), (u8)r_eax);
    /* 0085b0c3: mov byte ptr [ebp - 0x126], 0x3a */ W8((u32)(r_ebp+0xfffffedau), 0x3au);
    /* 0085b0ca: mov byte ptr [ebp - 0x125], bl */ W8((u32)(r_ebp+0xfffffedbu), (u8)r_ebx);
    /* 0085b0d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0d1: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0085b0d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0d8: call dword ptr [0x8f821c] */ { u32 t = R32((u32)(0x8f821cu)); r_esp -= 4; W32(r_esp, 0x85b0deu); call_ind(t); }
    /* 0085b0de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b0e0: je 0x85b0e8 */ if (fZ) goto L_0085b0e8;
L_0085b0e2:; BB(0x0085b0e2);
    /* 0085b0e2: mov dword ptr [ebp - 0x12c], ebx */ W32((u32)(r_ebp+0xfffffed4u), r_ebx);
L_0085b0e8:; BB(0x0085b0e8);
    /* 0085b0e8: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85b0eeu); call_ind(t); }
    /* 0085b0ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0ef: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x85b0f4u); f_00859de8();
    /* 0085b0f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b0f5: cmp dword ptr [ebp - 0x130], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffed0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b0fb: je 0x85b104 */ if (fZ) goto L_0085b104;
L_0085b0fd:; BB(0x0085b0fd);
    /* 0085b0fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b0fe: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b103u); f_00858882();
    /* 0085b103: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b104:; BB(0x0085b104);
    /* 0085b104: mov eax, dword ptr [ebp - 0x12c] */ r_eax = R32((u32)(r_ebp+0xfffffed4u));
    /* 0085b10a: lea esp, [ebp - 0x144] */ r_esp = (u32)(r_ebp+0xfffffebcu);
    /* 0085b110: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085b113: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85b118u); f_0085e419();
    /* 0085b118: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b11du); f_0085e5e7();
    /* 0085b11d: ret  */ FN_RET(0x0085b058); r_esp += 4; return;
}

void f_0085b4e9(void) /* _mktime */
{
    FN_ENTER(0x0085b4e9);
    /* 0085b4e9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085b4ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4ef: call 0x85b329 */ r_esp -= 4; W32(r_esp, 0x85b4f4u); f_0085b329();
    /* 0085b4f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b4f5: ret  */ FN_RET(0x0085b4e9); r_esp += 4; return;
}

void f_0085b4f6(void) /* _gmtime */
{
    FN_ENTER(0x0085b4f6);
    /* 0085b4f6: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085b4fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4fc: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0085b4fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b4ff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b501: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85b506u); f_0085c583();
    /* 0085b506: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b508: mov edi, eax */ r_edi = r_eax;
    /* 0085b50a: jge 0x85b513 */ if ((fS==fO)) goto L_0085b513;
L_0085b50c:; BB(0x0085b50c);
    /* 0085b50c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b50e: jmp 0x85b5f9 */ goto L_0085b5f9;
L_0085b513:; BB(0x0085b513);
    /* 0085b513: cmp dword ptr [edi + 0x44], 0 */ {  u32 a = R32((u32)(r_edi+0x44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b517: jne 0x85b52d */ if (!fZ) goto L_0085b52d;
L_0085b519:; BB(0x0085b519);
    /* 0085b519: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b51b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b520u); f_00859c55();
    /* 0085b520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b522: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b523: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0085b526: mov ecx, 0xae7a60 */ r_ecx = 0xae7a60u;
    /* 0085b52b: je 0x85b530 */ if (fZ) goto L_0085b530;
L_0085b52d:; BB(0x0085b52d);
    /* 0085b52d: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
L_0085b530:; BB(0x0085b530);
    /* 0085b530: mov eax, esi */ r_eax = r_esi;
    /* 0085b532: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b533: mov edi, 0x7861f80 */ r_edi = 0x7861f80u;
    /* 0085b538: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0085b538, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b538, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b53a: mov edx, eax */ r_edx = r_eax;
    /* 0085b53c: imul edx, edx, 0xf879e080 */ { i64 t = (i64)(i32)r_edx * (i64)(i32)0xf879e080u; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b542: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085b544: lea edx, [eax*4 + 0x46] */ r_edx = (u32)(r_eax*4+0x46u);
    /* 0085b54b: mov eax, 0x1e13380 */ r_eax = 0x1e13380u;
    /* 0085b550: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b552: jl 0x85b56f */ if ((fS!=fO)) goto L_0085b56f;
L_0085b554:; BB(0x0085b554);
    /* 0085b554: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085b556: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b557: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b559: jl 0x85b56f */ if ((fS!=fO)) goto L_0085b56f;
L_0085b55b:; BB(0x0085b55b);
    /* 0085b55b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085b55d: mov eax, 0x1e28500 */ r_eax = 0x1e28500u;
    /* 0085b562: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b563: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b565: jl 0x85b56c */ if ((fS!=fO)) goto L_0085b56c;
L_0085b567:; BB(0x0085b567);
    /* 0085b567: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b568: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085b56a: jmp 0x85b56f */ goto L_0085b56f;
L_0085b56c:; BB(0x0085b56c);
    /* 0085b56c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b56e: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085b56f:; BB(0x0085b56f);
    /* 0085b56f: mov eax, esi */ r_eax = r_esi;
    /* 0085b571: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 0085b574: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b575: mov edi, 0x15180 */ r_edi = 0x15180u;
    /* 0085b57a: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0085b57a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b57a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b57c: mov edi, 0xa24268 */ r_edi = 0xa24268u;
    /* 0085b581: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 0085b584: imul eax, eax, 0xfffeae80 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfffeae80u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b58a: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085b58c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b58e: jne 0x85b595 */ if (!fZ) goto L_0085b595;
L_0085b590:; BB(0x0085b590);
    /* 0085b590: mov edi, 0xa2429c */ r_edi = 0xa2429cu;
L_0085b595:; BB(0x0085b595);
    /* 0085b595: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0085b598: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085b59a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b59b: cmp dword ptr [edi + 4], eax */ {  u32 a = R32((u32)(r_edi+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b59e: jge 0x85b5a8 */ if ((fS==fO)) goto L_0085b5a8;
L_0085b5a0:; BB(0x0085b5a0);
    /* 0085b5a0: mov ebx, eax */ r_ebx = r_eax;
L_0085b5a2:; BB(0x0085b5a2);
    /* 0085b5a2: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085b5a3: cmp dword ptr [edi + edx*4], ebx */ {  u32 a = R32((u32)(r_edi+r_edx*4)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085b5a6: jl 0x85b5a2 */ if ((fS!=fO)) goto L_0085b5a2;
L_0085b5a8:; BB(0x0085b5a8);
    /* 0085b5a8: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085b5a9: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 0085b5ac: sub eax, dword ptr [edi + edx*4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+r_edx*4)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085b5af: mov edi, 0x15180 */ r_edi = 0x15180u;
    /* 0085b5b4: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0085b5b7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0085b5bb: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085b5bd: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b5be: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0085b5be, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b5be, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b5c0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b5c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b5c3: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085b5c5: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b5c8: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b5c9: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0085b5c9, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b5c9, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b5cb: mov eax, esi */ r_eax = r_esi;
    /* 0085b5cd: mov edi, 0xe10 */ r_edi = 0xe10u;
    /* 0085b5d2: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 0085b5d5: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b5d6: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0085b5d6, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b5d6, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b5d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b5d9: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0085b5dc: imul eax, eax, 0xfffff1f0 */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0xfffff1f0u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b5e2: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085b5e4: mov eax, esi */ r_eax = r_esi;
    /* 0085b5e6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085b5e7: idiv edi */ { i32 d = (i32)r_edi; if (!d) UNSUP(0x0085b5e7, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085b5e7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085b5e9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0085b5ec: imul eax, eax, 0x3c */ { i64 t = (i64)(i32)r_eax * (i64)(i32)0x3cu; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0085b5ef: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085b5f1: and dword ptr [ecx + 0x20], 0 */ { u32 ad = (u32)(r_ecx+0x20u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b5f5: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 0085b5f7: mov eax, ecx */ r_eax = r_ecx;
L_0085b5f9:; BB(0x0085b5f9);
    /* 0085b5f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085b5fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b5fb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b5fc: ret  */ FN_RET(0x0085b4f6); r_esp += 4; return;
}

void f_0085b5fd(void) /* _fputs */
{
    FN_ENTER(0x0085b5fd);
    /* 0085b5fd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b5ff: push 0x998040 */ { u32 v = 0x998040u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b604: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85b609u); f_0085e5ac();
    /* 0085b609: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b60c: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85b611u); f_0085d760();
    /* 0085b611: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085b614: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085b617: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b618: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85b61du); f_0085bbfc();
    /* 0085b61d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b61e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b61f: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b623: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b624: call 0x8644b2 */ r_esp -= 4; W32(r_esp, 0x85b629u); f_008644b2();
    /* 0085b629: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085b62c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b62d: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b630: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b632: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b635: call 0x859761 */ r_esp -= 4; W32(r_esp, 0x85b63au); f_00859761();
    /* 0085b63a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0085b63d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b63e: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b641: call 0x86453a */ r_esp -= 4; W32(r_esp, 0x85b646u); f_0086453a();
    /* 0085b646: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b649: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b64d: call 0x85b664 */ r_esp -= 4; W32(r_esp, 0x85b652u); f_0085b664();
    /* 0085b652: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085b654: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085b657: cmp dword ptr [ebp - 0x24], ecx */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b65a: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085b65d: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085b65e: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b663u); f_0085e5e7();
    /* 0085b663: ret  */ FN_RET(0x0085b5fd); r_esp += 4; return;
}

void f_0085b664(void)
{
    FN_ENTER(0x0085b664);
    /* 0085b664: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b667: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85b66cu); f_0085bc4e();
    /* 0085b66c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b66d: ret  */ FN_RET(0x0085b664); r_esp += 4; return;
}

void f_0085b66e(void) /* __mkdir */
{
    FN_ENTER(0x0085b66e);
    /* 0085b66e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b670: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b674: call dword ptr [0x8f8220] */ { u32 t = R32((u32)(0x8f8220u)); r_esp -= 4; W32(r_esp, 0x85b67au); call_ind(t); }
    /* 0085b67a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b67c: jne 0x85b686 */ if (!fZ) goto L_0085b686;
L_0085b67e:; BB(0x0085b67e);
    /* 0085b67e: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85b684u); call_ind(t); }
    /* 0085b684: jmp 0x85b688 */ goto L_0085b688;
L_0085b686:; BB(0x0085b686);
    /* 0085b686: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085b688:; BB(0x0085b688);
    /* 0085b688: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b68a: je 0x85b697 */ if (fZ) goto L_0085b697;
L_0085b68c:; BB(0x0085b68c);
    /* 0085b68c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b68d: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x85b692u); f_00859de8();
    /* 0085b692: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b693: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b696: ret  */ FN_RET(0x0085b66e); r_esp += 4; return;
L_0085b697:; BB(0x0085b697);
    /* 0085b697: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b699: ret  */ FN_RET(0x0085b66e); r_esp += 4; return;
}

void f_0085b7a5(void) /* _wcsftime */
{
    FN_ENTER(0x0085b7a5);
    /* 0085b7a5: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b7a7: push 0x998050 */ { u32 v = 0x998050u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b7ac: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85b7b1u); f_0085e5ac();
    /* 0085b7b1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b7b3: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0085b7b6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b7b9: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x85b7beu); f_00858009();
    /* 0085b7be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b7bf: mov esi, eax */ r_esi = r_eax;
    /* 0085b7c1: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085b7c2: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0085b7c5: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0085b7c8: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0085b7cb: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85b7d0u); f_0085c583();
    /* 0085b7d0: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 0085b7d3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085b7d6: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b7dc: je 0x85b7e6 */ if (fZ) goto L_0085b7e6;
L_0085b7de:; BB(0x0085b7de);
    /* 0085b7de: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x85b7e3u); f_0085daca();
    /* 0085b7e3: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_0085b7e6:; BB(0x0085b7e6);
    /* 0085b7e6: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0085b7e9: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b7ec: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0085b7ef: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b7f2: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b7f5: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85b7fau); f_00858020();
    /* 0085b7fa: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085b7fd: mov eax, esp */ r_eax = r_esp;
    /* 0085b7ff: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085b802: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b806: jmp 0x85b824 */ goto L_0085b824;
L_0085b824:; BB(0x0085b824);
    /* 0085b824: cmp dword ptr [ebp - 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b827: jne 0x85b848 */ if (!fZ) goto L_0085b848;
L_0085b829:; BB(0x0085b829);
    /* 0085b829: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0085b82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b82d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b832u); f_00859c55();
    /* 0085b832: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b833: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085b836: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b838: jne 0x85b841 */ if (!fZ) goto L_0085b841;
L_0085b83a:; BB(0x0085b83a);
    /* 0085b83a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085b83c: jmp 0x85b90f */ goto L_0085b90f;
L_0085b841:; BB(0x0085b841);
    /* 0085b841: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_0085b848:; BB(0x0085b848);
    /* 0085b848: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0085b84f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b852: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b855: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b858: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85b85du); f_00858020();
    /* 0085b85d: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085b860: mov edi, esp */ r_edi = r_esp;
    /* 0085b862: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0085b865: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b869: jmp 0x85b883 */ goto L_0085b883;
L_0085b883:; BB(0x0085b883);
    /* 0085b883: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b885: jne 0x85b89e */ if (!fZ) goto L_0085b89e;
L_0085b887:; BB(0x0085b887);
    /* 0085b887: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b88a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b88b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b890u); f_00859c55();
    /* 0085b890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b891: mov edi, eax */ r_edi = r_eax;
    /* 0085b893: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b895: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b897:; BB(0x0085b897);
    /* 0085b897: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_0085b89e:; BB(0x0085b89e);
    /* 0085b89e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a6: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a9: call 0x858467 */ r_esp -= 4; W32(r_esp, 0x85b8aeu); f_00858467();
    /* 0085b8ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8b1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8b4: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b8b6:; BB(0x0085b8b6);
    /* 0085b8b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8b8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8bc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0085b8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c0: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c3: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c6: call 0x865ea4 */ r_esp -= 4; W32(r_esp, 0x85b8cbu); f_00865ea4();
    /* 0085b8cb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8d0: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b8d2:; BB(0x0085b8d2);
    /* 0085b8d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d3: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8dc: call 0x857e9d */ r_esp -= 4; W32(r_esp, 0x85b8e1u); f_00857e9d();
    /* 0085b8e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8e4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0085b8e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8ea: jne 0x85b8f0 */ if (!fZ) goto L_0085b8f0;
L_0085b8ec:; BB(0x0085b8ec);
    /* 0085b8ec: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085b8f0:; BB(0x0085b8f0);
    /* 0085b8f0: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8f4: je 0x85b8ff */ if (fZ) goto L_0085b8ff;
L_0085b8f6:; BB(0x0085b8f6);
    /* 0085b8f6: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8f9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b8feu); f_00858882();
    /* 0085b8fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b8ff:; BB(0x0085b8ff);
    /* 0085b8ff: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b903: je 0x85b90c */ if (fZ) goto L_0085b90c;
L_0085b905:; BB(0x0085b905);
    /* 0085b905: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b906: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b90bu); f_00858882();
    /* 0085b90b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b90c:; BB(0x0085b90c);
    /* 0085b90c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0085b90f:; BB(0x0085b90f);
    /* 0085b90f: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 0085b912: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b917u); f_0085e5e7();
    /* 0085b917: ret  */ FN_RET(0x0085b7a5); r_esp += 4; return;
}

void f_0085b808(void)
{
    FN_ENTER(0x0085b808);
    /* 0085b808: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085b80a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085b80b: ret  */ FN_RET(0x0085b808); r_esp += 4; return;
}

void f_0085b80c(void)
{
    FN_ENTER(0x0085b80c);
    /* 0085b80c: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085b80f: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x85b814u); f_00865365();
    /* 0085b814: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b818: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b81c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b81f: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0085b822: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b824: cmp dword ptr [ebp - 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b827: jne 0x85b848 */ if (!fZ) goto L_0085b848;
L_0085b829:; BB(0x0085b829);
    /* 0085b829: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0085b82c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b82d: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b832u); f_00859c55();
    /* 0085b832: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b833: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085b836: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b838: jne 0x85b841 */ if (!fZ) goto L_0085b841;
L_0085b83a:; BB(0x0085b83a);
    /* 0085b83a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085b83c: jmp 0x85b90f */ goto L_0085b90f;
L_0085b841:; BB(0x0085b841);
    /* 0085b841: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
L_0085b848:; BB(0x0085b848);
    /* 0085b848: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0085b84f: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b852: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085b855: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b858: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x85b85du); f_00858020();
    /* 0085b85d: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0085b860: mov edi, esp */ r_edi = r_esp;
    /* 0085b862: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0085b865: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b869: jmp 0x85b883 */ goto L_0085b883;
L_0085b883:; BB(0x0085b883);
    /* 0085b883: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b885: jne 0x85b89e */ if (!fZ) goto L_0085b89e;
L_0085b887:; BB(0x0085b887);
    /* 0085b887: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b88a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b88b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b890u); f_00859c55();
    /* 0085b890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b891: mov edi, eax */ r_edi = r_eax;
    /* 0085b893: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b895: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b897:; BB(0x0085b897);
    /* 0085b897: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_0085b89e:; BB(0x0085b89e);
    /* 0085b89e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a6: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a9: call 0x858467 */ r_esp -= 4; W32(r_esp, 0x85b8aeu); f_00858467();
    /* 0085b8ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8b1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8b4: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b8b6:; BB(0x0085b8b6);
    /* 0085b8b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8b8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8bc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0085b8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c0: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c3: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c6: call 0x865ea4 */ r_esp -= 4; W32(r_esp, 0x85b8cbu); f_00865ea4();
    /* 0085b8cb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8d0: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b8d2:; BB(0x0085b8d2);
    /* 0085b8d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d3: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8dc: call 0x857e9d */ r_esp -= 4; W32(r_esp, 0x85b8e1u); f_00857e9d();
    /* 0085b8e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8e4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0085b8e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8ea: jne 0x85b8f0 */ if (!fZ) goto L_0085b8f0;
L_0085b8ec:; BB(0x0085b8ec);
    /* 0085b8ec: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085b8f0:; BB(0x0085b8f0);
    /* 0085b8f0: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8f4: je 0x85b8ff */ if (fZ) goto L_0085b8ff;
L_0085b8f6:; BB(0x0085b8f6);
    /* 0085b8f6: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8f9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b8feu); f_00858882();
    /* 0085b8fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b8ff:; BB(0x0085b8ff);
    /* 0085b8ff: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b903: je 0x85b90c */ if (fZ) goto L_0085b90c;
L_0085b905:; BB(0x0085b905);
    /* 0085b905: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b906: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b90bu); f_00858882();
    /* 0085b90b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b90c:; BB(0x0085b90c);
    /* 0085b90c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0085b90f:; BB(0x0085b90f);
    /* 0085b90f: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 0085b912: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b917u); f_0085e5e7();
    /* 0085b917: ret  */ FN_RET(0x0085b80c); r_esp += 4; return;
}

void f_0085b86b(void)
{
    FN_ENTER(0x0085b86b);
    /* 0085b86b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085b86d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085b86e: ret  */ FN_RET(0x0085b86b); r_esp += 4; return;
}

void f_0085b86f(void)
{
    FN_ENTER(0x0085b86f);
    /* 0085b86f: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085b872: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x85b877u); f_00865365();
    /* 0085b877: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085b879: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b87d: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085b880: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0085b883: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b885: jne 0x85b89e */ if (!fZ) goto L_0085b89e;
L_0085b887:; BB(0x0085b887);
    /* 0085b887: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b88a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b88b: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85b890u); f_00859c55();
    /* 0085b890: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b891: mov edi, eax */ r_edi = r_eax;
    /* 0085b893: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b895: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b897:; BB(0x0085b897);
    /* 0085b897: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
L_0085b89e:; BB(0x0085b89e);
    /* 0085b89e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0085b8a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a2: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a6: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8a9: call 0x858467 */ r_esp -= 4; W32(r_esp, 0x85b8aeu); f_00858467();
    /* 0085b8ae: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8b1: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8b4: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b8b6:; BB(0x0085b8b6);
    /* 0085b8b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8b8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8bc: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0085b8bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c0: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c3: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8c6: call 0x865ea4 */ r_esp -= 4; W32(r_esp, 0x85b8cbu); f_00865ea4();
    /* 0085b8cb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8d0: je 0x85b8f0 */ if (fZ) goto L_0085b8f0;
L_0085b8d2:; BB(0x0085b8d2);
    /* 0085b8d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d3: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8d9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8dc: call 0x857e9d */ r_esp -= 4; W32(r_esp, 0x85b8e1u); f_00857e9d();
    /* 0085b8e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b8e4: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0085b8e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8ea: jne 0x85b8f0 */ if (!fZ) goto L_0085b8f0;
L_0085b8ec:; BB(0x0085b8ec);
    /* 0085b8ec: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085b8f0:; BB(0x0085b8f0);
    /* 0085b8f0: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b8f4: je 0x85b8ff */ if (fZ) goto L_0085b8ff;
L_0085b8f6:; BB(0x0085b8f6);
    /* 0085b8f6: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b8f9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b8feu); f_00858882();
    /* 0085b8fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b8ff:; BB(0x0085b8ff);
    /* 0085b8ff: cmp dword ptr [ebp - 0x30], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b903: je 0x85b90c */ if (fZ) goto L_0085b90c;
L_0085b905:; BB(0x0085b905);
    /* 0085b905: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b906: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85b90bu); f_00858882();
    /* 0085b90b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085b90c:; BB(0x0085b90c);
    /* 0085b90c: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0085b90f: lea esp, [ebp - 0x40] */ r_esp = (u32)(r_ebp+0xffffffc0u);
    /* 0085b912: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b917u); f_0085e5e7();
    /* 0085b917: ret  */ FN_RET(0x0085b86f); r_esp += 4; return;
}

void f_0085b918(void) /* _fputws */
{
    FN_ENTER(0x0085b918);
    /* 0085b918: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b91a: push 0x998068 */ { u32 v = 0x998068u; r_esp -= 4; W32(r_esp, v); }
    /* 0085b91f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85b924u); f_0085e5ac();
    /* 0085b924: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b928: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b92b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x85b930u); f_00858009();
    /* 0085b930: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085b933: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b936: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85b93bu); f_0085bbfc();
    /* 0085b93b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b93c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b93d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085b941:; BB(0x0085b941);
    /* 0085b941: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085b944: dec dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b947: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b949: je 0x85b96a */ if (fZ) goto L_0085b96a;
L_0085b94b:; BB(0x0085b94b);
    /* 0085b94b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085b94e: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0085b951: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b954: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b955: call 0x865f69 */ r_esp -= 4; W32(r_esp, 0x85b95au); f_00865f69();
    /* 0085b95a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b95b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b95c: add dword ptr [ebp + 8], 2 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b960: cmp ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085b964: jne 0x85b941 */ if (!fZ) goto L_0085b941;
L_0085b966:; BB(0x0085b966);
    /* 0085b966: or dword ptr [ebp - 0x20], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085b96a:; BB(0x0085b96a);
    /* 0085b96a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b96e: call 0x85b97c */ r_esp -= 4; W32(r_esp, 0x85b973u); f_0085b97c();
    /* 0085b973: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0085b976: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85b97bu); f_0085e5e7();
    /* 0085b97b: ret  */ FN_RET(0x0085b918); r_esp += 4; return;
}

void f_0085b97c(void)
{
    FN_ENTER(0x0085b97c);
    /* 0085b97c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b97f: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85b984u); f_0085bc4e();
    /* 0085b984: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085b985: ret  */ FN_RET(0x0085b97c); r_esp += 4; return;
}

void f_0085b986(void) /* __flush */
{
    FN_ENTER(0x0085b986);
    /* 0085b986: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085b987: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b988: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0085b98c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085b98f: mov ecx, eax */ r_ecx = r_eax;
    /* 0085b991: and cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0085b994: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0085b996: cmp cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085b999: jne 0x85b9d5 */ if (!fZ) goto L_0085b9d5;
L_0085b99b:; BB(0x0085b99b);
    /* 0085b99b: test ax, 0x108 */ {  u32 a = (u16)r_eax; u32 b = 0x108u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085b99f: je 0x85b9d5 */ if (fZ) goto L_0085b9d5;
L_0085b9a1:; BB(0x0085b9a1);
    /* 0085b9a1: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0085b9a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b9a5: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0085b9a7: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0085b9a9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085b9ab: jle 0x85b9d4 */ if ((fZ||fS!=fO)) goto L_0085b9d4;
L_0085b9ad:; BB(0x0085b9ad);
    /* 0085b9ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085b9ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085b9af: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085b9b2: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x85b9b7u); f_00862354();
    /* 0085b9b7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085b9ba: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085b9bc: jne 0x85b9cd */ if (!fZ) goto L_0085b9cd;
L_0085b9be:; BB(0x0085b9be);
    /* 0085b9be: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085b9c1: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fS = ((r >> 7) & 1); }
    /* 0085b9c3: jns 0x85b9d4 */ if (!fS) goto L_0085b9d4;
L_0085b9c5:; BB(0x0085b9c5);
    /* 0085b9c5: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085b9c8: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0085b9cb: jmp 0x85b9d4 */ goto L_0085b9d4;
L_0085b9cd:; BB(0x0085b9cd);
    /* 0085b9cd: or dword ptr [esi + 0xc], 0x20 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085b9d1: or ebx, 0xffffffff */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
L_0085b9d4:; BB(0x0085b9d4);
    /* 0085b9d4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085b9d5:; BB(0x0085b9d5);
    /* 0085b9d5: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0085b9d8: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085b9dc: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0085b9de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085b9df: mov eax, ebx */ r_eax = r_ebx;
    /* 0085b9e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085b9e2: ret  */ FN_RET(0x0085b986); r_esp += 4; return;
}

void f_0085ba11(void) /* _flsall */
{
    FN_ENTER(0x0085ba11);
    /* 0085ba11: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba13: push 0x998078 */ { u32 v = 0x998078u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba18: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85ba1du); f_0085e5ac();
    /* 0085ba1d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085ba1f: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0085ba22: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0085ba25: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba27: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85ba2cu); f_0085e57a();
    /* 0085ba2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ba2d: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0085ba30: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0085ba32:; BB(0x0085ba32);
    /* 0085ba32: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085ba35: cmp esi, dword ptr [0xaf1bc0] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf1bc0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ba3b: jge 0x85bac2 */ if ((fS==fO)) goto L_0085bac2;
L_0085ba41:; BB(0x0085ba41);
    /* 0085ba41: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 0085ba46: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0085ba49: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ba4b: je 0x85baa9 */ if (fZ) goto L_0085baa9;
L_0085ba4d:; BB(0x0085ba4d);
    /* 0085ba4d: test byte ptr [eax + 0xc], 0x83 */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085ba51: je 0x85baa9 */ if (fZ) goto L_0085baa9;
L_0085ba53:; BB(0x0085ba53);
    /* 0085ba53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba55: call 0x85bc2b */ r_esp -= 4; W32(r_esp, 0x85ba5au); f_0085bc2b();
    /* 0085ba5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ba5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ba5c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085ba5e: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085ba5f: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0085ba62: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 0085ba67: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 0085ba6a: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 0085ba6d: test cl, 0x83 */ {  u32 a = (u8)r_ecx; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085ba70: je 0x85baa1 */ if (fZ) goto L_0085baa1;
L_0085ba72:; BB(0x0085ba72);
    /* 0085ba72: cmp dword ptr [ebp + 8], edx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ba75: jne 0x85ba88 */ if (!fZ) goto L_0085ba88;
L_0085ba77:; BB(0x0085ba77);
    /* 0085ba77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba78: call 0x85b9e3 */ r_esp -= 4; W32(r_esp, 0x85ba7du); f_0085b9e3();
    /* 0085ba7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ba7e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ba81: je 0x85baa1 */ if (fZ) goto L_0085baa1;
L_0085ba83:; BB(0x0085ba83);
    /* 0085ba83: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ba86: jmp 0x85baa1 */ goto L_0085baa1;
L_0085ba88:; BB(0x0085ba88);
    /* 0085ba88: cmp dword ptr [ebp + 8], edi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ba8b: jne 0x85baa1 */ if (!fZ) goto L_0085baa1;
L_0085ba8d:; BB(0x0085ba8d);
    /* 0085ba8d: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085ba90: je 0x85baa1 */ if (fZ) goto L_0085baa1;
L_0085ba92:; BB(0x0085ba92);
    /* 0085ba92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ba93: call 0x85b9e3 */ r_esp -= 4; W32(r_esp, 0x85ba98u); f_0085b9e3();
    /* 0085ba98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ba99: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ba9c: jne 0x85baa1 */ if (!fZ) goto L_0085baa1;
L_0085ba9e:; BB(0x0085ba9e);
    /* 0085ba9e: or dword ptr [ebp - 0x24], eax */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085baa1:; BB(0x0085baa1);
    /* 0085baa1: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0085baa4: call 0x85bab1 */ r_esp -= 4; W32(r_esp, 0x85baa9u); f_0085bab1();
L_0085baa9:; BB(0x0085baa9);
    /* 0085baa9: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085baaa: jmp 0x85ba32 */ goto L_0085ba32;
L_0085bac2:; BB(0x0085bac2);
    /* 0085bac2: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bac6: call 0x85badd */ r_esp -= 4; W32(r_esp, 0x85bacbu); f_0085badd();
    /* 0085bacb: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bacf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bad2: je 0x85bad7 */ if (fZ) goto L_0085bad7;
L_0085bad4:; BB(0x0085bad4);
    /* 0085bad4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_0085bad7:; BB(0x0085bad7);
    /* 0085bad7: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85badcu); f_0085e5e7();
    /* 0085badc: ret  */ FN_RET(0x0085ba11); r_esp += 4; return;
}

void f_0085baac(void)
{
    FN_ENTER(0x0085baac);
    /* 0085baac: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085baae: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0085bab1: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 0085bab6: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bab9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085baba: call 0x85bc7d */ r_esp -= 4; W32(r_esp, 0x85babfu); f_0085bc7d();
    /* 0085babf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bac0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bac1: ret  */ FN_RET(0x0085baac); r_esp += 4; return;
}

void f_0085bab1(void)
{
    FN_ENTER(0x0085bab1);
    /* 0085bab1: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 0085bab6: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bab9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085baba: call 0x85bc7d */ r_esp -= 4; W32(r_esp, 0x85babfu); f_0085bc7d();
    /* 0085babf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bac0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bac1: ret  */ FN_RET(0x0085bab1); r_esp += 4; return;
}

void f_0085badd(void)
{
    FN_ENTER(0x0085badd);
    /* 0085badd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085badf: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85bae4u); f_0085e4c5();
    /* 0085bae4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bae5: ret  */ FN_RET(0x0085badd); r_esp += 4; return;
}

void f_0085bae6(void) /* _fflush */
{
    FN_ENTER(0x0085bae6);
    /* 0085bae6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085bae8: push 0x998090 */ { u32 v = 0x998090u; r_esp -= 4; W32(r_esp, v); }
    /* 0085baed: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85baf2u); f_0085e5ac();
    /* 0085baf2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085baf4: cmp dword ptr [ebp + 8], esi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085baf7: jne 0x85bb02 */ if (!fZ) goto L_0085bb02;
L_0085baf9:; BB(0x0085baf9);
    /* 0085baf9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bafa: call 0x85ba11 */ r_esp -= 4; W32(r_esp, 0x85baffu); f_0085ba11();
    /* 0085baff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb00: jmp 0x85bb26 */ goto L_0085bb26;
L_0085bb02:; BB(0x0085bb02);
    /* 0085bb02: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bb05: call 0x85bbfc */ r_esp -= 4; W32(r_esp, 0x85bb0au); f_0085bbfc();
    /* 0085bb0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb0b: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0085bb0e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bb11: call 0x85b9e3 */ r_esp -= 4; W32(r_esp, 0x85bb16u); f_0085b9e3();
    /* 0085bb16: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb17: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085bb1a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bb1e: call 0x85bb2c */ r_esp -= 4; W32(r_esp, 0x85bb23u); f_0085bb2c();
    /* 0085bb23: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0085bb26:; BB(0x0085bb26);
    /* 0085bb26: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85bb2bu); f_0085e5e7();
    /* 0085bb2b: ret  */ FN_RET(0x0085bae6); r_esp += 4; return;
}

void f_0085bb2c(void)
{
    FN_ENTER(0x0085bb2c);
    /* 0085bb2c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bb2f: call 0x85bc4e */ r_esp -= 4; W32(r_esp, 0x85bb34u); f_0085bc4e();
    /* 0085bb34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb35: ret  */ FN_RET(0x0085bb2c); r_esp += 4; return;
}

void f_0085bb36(void) /* __flushall */
{
    FN_ENTER(0x0085bb36);
    /* 0085bb36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb38: call 0x85ba11 */ r_esp -= 4; W32(r_esp, 0x85bb3du); f_0085ba11();
    /* 0085bb3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb3e: ret  */ FN_RET(0x0085bb36); r_esp += 4; return;
}

void f_0085bb3f(void) /* ___initstdio */
{
    FN_ENTER(0x0085bb3f);
    /* 0085bb3f: mov eax, dword ptr [0xaf1bc0] */ r_eax = R32((u32)(0xaf1bc0u));
    /* 0085bb44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bb46: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb47: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb49: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085bb4a: jne 0x85bb53 */ if (!fZ) goto L_0085bb53;
L_0085bb4c:; BB(0x0085bb4c);
    /* 0085bb4c: mov eax, 0x200 */ r_eax = 0x200u;
    /* 0085bb51: jmp 0x85bb59 */ goto L_0085bb59;
L_0085bb53:; BB(0x0085bb53);
    /* 0085bb53: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bb55: jge 0x85bb5e */ if ((fS==fO)) goto L_0085bb5e;
L_0085bb57:; BB(0x0085bb57);
    /* 0085bb57: mov eax, esi */ r_eax = r_esi;
L_0085bb59:; BB(0x0085bb59);
    /* 0085bb59: mov dword ptr [0xaf1bc0], eax */ W32((u32)(0xaf1bc0u), r_eax);
L_0085bb5e:; BB(0x0085bb5e);
    /* 0085bb5e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb61: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x85bb66u); f_008587c7();
    /* 0085bb66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bb68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb6a: mov dword ptr [0xaf0ba4], eax */ W32((u32)(0xaf0ba4u), r_eax);
    /* 0085bb6f: jne 0x85bb8f */ if (!fZ) goto L_0085bb8f;
L_0085bb71:; BB(0x0085bb71);
    /* 0085bb71: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb73: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb74: mov dword ptr [0xaf1bc0], esi */ W32((u32)(0xaf1bc0u), r_esi);
    /* 0085bb7a: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x85bb7fu); f_008587c7();
    /* 0085bb7f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085bb81: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb82: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bb83: mov dword ptr [0xaf0ba4], eax */ W32((u32)(0xaf0ba4u), r_eax);
    /* 0085bb88: jne 0x85bb8f */ if (!fZ) goto L_0085bb8f;
L_0085bb8a:; BB(0x0085bb8a);
    /* 0085bb8a: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0085bb8c: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0085bb8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085bb8e: ret  */ FN_RET(0x0085bb3f); r_esp += 4; return;
L_0085bb8f:; BB(0x0085bb8f);
    /* 0085bb8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0085bb91: mov ecx, 0xa239e0 */ r_ecx = 0xa239e0u;
    /* 0085bb96: jmp 0x85bb9d */ goto L_0085bb9d;
L_0085bb98:; BB(0x0085bb98);
    /* 0085bb98: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
L_0085bb9d:; BB(0x0085bb9d);
    /* 0085bb9d: mov dword ptr [edx + eax], ecx */ W32((u32)(r_edx+r_eax), r_ecx);
    /* 0085bba0: add ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085bba3: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085bba6: cmp ecx, 0xa23c60 */ {  u32 a = r_ecx; u32 b = 0xa23c60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bbac: jl 0x85bb98 */ if ((fS!=fO)) goto L_0085bb98;
L_0085bbae:; BB(0x0085bbae);
    /* 0085bbae: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085bbb0: mov edx, 0xa239f0 */ r_edx = 0xa239f0u;
L_0085bbb5:; BB(0x0085bbb5);
    /* 0085bbb5: mov esi, ecx */ r_esi = r_ecx;
    /* 0085bbb7: mov eax, ecx */ r_eax = r_ecx;
    /* 0085bbb9: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085bbbc: sar esi, 5 */ { u32 c = (5u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0085bbbf: mov esi, dword ptr [esi*4 + 0xaf0a80] */ r_esi = R32((u32)(r_esi*4+0xaf0a80u));
    /* 0085bbc6: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0085bbc9: mov eax, dword ptr [esi + eax*4] */ r_eax = R32((u32)(r_esi+r_eax*4));
    /* 0085bbcc: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bbcf: je 0x85bbd5 */ if (fZ) goto L_0085bbd5;
L_0085bbd1:; BB(0x0085bbd1);
    /* 0085bbd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bbd3: jne 0x85bbd8 */ if (!fZ) goto L_0085bbd8;
L_0085bbd5:; BB(0x0085bbd5);
    /* 0085bbd5: or dword ptr [edx], 0xffffffff */ { u32 ad = (u32)(r_edx);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085bbd8:; BB(0x0085bbd8);
    /* 0085bbd8: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085bbdb: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085bbdc: cmp edx, 0xa23a50 */ {  u32 a = r_edx; u32 b = 0xa23a50u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bbe2: jl 0x85bbb5 */ if ((fS!=fO)) goto L_0085bbb5;
L_0085bbe4:; BB(0x0085bbe4);
    /* 0085bbe4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085bbe6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085bbe7: ret  */ FN_RET(0x0085bb3f); r_esp += 4; return;
}

void f_0085bbe8(void) /* ___endstdio */
{
    FN_ENTER(0x0085bbe8);
    /* 0085bbe8: call 0x85bb36 */ r_esp -= 4; W32(r_esp, 0x85bbedu); f_0085bb36();
    /* 0085bbed: cmp byte ptr [0xae7a48], 0 */ {  u32 a = R8((u32)(0xae7a48u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085bbf4: je 0x85bbfb */ if (fZ) goto L_0085bbfb;
L_0085bbf6:; BB(0x0085bbf6);
    /* 0085bbf6: jmp 0x8660fb */ f_008660fb(); return;
L_0085bbfb:; BB(0x0085bbfb);
    /* 0085bbfb: ret  */ FN_RET(0x0085bbe8); r_esp += 4; return;
}

void f_0085bd0d(void) /* ___FrameUnwindToState */
{
    FN_ENTER(0x0085bd0d);
    /* 0085bd0d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bd0f: push 0x9980a0 */ { u32 v = 0x9980a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bd14: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85bd19u); f_0085e5ac();
    /* 0085bd19: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085bd1c: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 0085bd1f: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0085bd22: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bd27u); f_0085c583();
    /* 0085bd27: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085bd2c: inc dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bd2e: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bd32: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
L_0085bd35:; BB(0x0085bd35);
    /* 0085bd35: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bd38: je 0x85bd9e */ if (fZ) goto L_0085bd9e;
L_0085bd3a:; BB(0x0085bd3a);
    /* 0085bd3a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bd3d: jle 0x85bd44 */ if ((fZ||fS!=fO)) goto L_0085bd44;
L_0085bd3f:; BB(0x0085bd3f);
    /* 0085bd3f: cmp esi, dword ptr [edi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bd42: jl 0x85bd49 */ if ((fS!=fO)) goto L_0085bd49;
L_0085bd44:; BB(0x0085bd44);
    /* 0085bd44: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85bd49u); f_0085c88e();
L_0085bd49:; BB(0x0085bd49);
    /* 0085bd49: mov eax, esi */ r_eax = r_esi;
    /* 0085bd4b: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085bd4e: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0085bd51: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085bd53: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0085bd55: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085bd58: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0085bd5f: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bd63: je 0x85bd7a */ if (fZ) goto L_0085bd7a;
L_0085bd65:; BB(0x0085bd65);
    /* 0085bd65: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0085bd68: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bd6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085bd6e: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0085bd71: push dword ptr [ecx + eax + 4] */ { u32 v = R32((u32)(r_ecx+r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bd75: call 0x85c8c0 */ r_esp -= 4; W32(r_esp, 0x85bd7au); f_0085c8c0();
L_0085bd7a:; BB(0x0085bd7a);
    /* 0085bd7a: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bd7e: jmp 0x85bd99 */ goto L_0085bd99;
L_0085bd99:; BB(0x0085bd99);
    /* 0085bd99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0085bd9c: jmp 0x85bd35 */ goto L_0085bd35;
L_0085bd9e:; BB(0x0085bd9e);
    /* 0085bd9e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bda2: call 0x85bdc0 */ r_esp -= 4; W32(r_esp, 0x85bda7u); f_0085bdc0();
    /* 0085bda7: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bdaa: je 0x85bdb1 */ if (fZ) goto L_0085bdb1;
L_0085bdac:; BB(0x0085bdac);
    /* 0085bdac: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85bdb1u); f_0085c88e();
L_0085bdb1:; BB(0x0085bdb1);
    /* 0085bdb1: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0085bdb4: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85bdb9u); f_0085e5e7();
    /* 0085bdb9: ret  */ FN_RET(0x0085bd0d); r_esp += 4; return;
}

void f_0085bd80(void)
{
    FN_ENTER(0x0085bd80);
    /* 0085bd80: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0085bd83: call 0x85bcef */ r_esp -= 4; W32(r_esp, 0x85bd88u); f_0085bcef();
    /* 0085bd88: ret  */ FN_RET(0x0085bd80); r_esp += 4; return;
}

void f_0085bd89(void)
{
    FN_ENTER(0x0085bd89);
    goto L_0085bd89;
L_0085bd35:; BB(0x0085bd35);
    /* 0085bd35: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bd38: je 0x85bd9e */ if (fZ) goto L_0085bd9e;
L_0085bd3a:; BB(0x0085bd3a);
    /* 0085bd3a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bd3d: jle 0x85bd44 */ if ((fZ||fS!=fO)) goto L_0085bd44;
L_0085bd3f:; BB(0x0085bd3f);
    /* 0085bd3f: cmp esi, dword ptr [edi + 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bd42: jl 0x85bd49 */ if ((fS!=fO)) goto L_0085bd49;
L_0085bd44:; BB(0x0085bd44);
    /* 0085bd44: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85bd49u); f_0085c88e();
L_0085bd49:; BB(0x0085bd49);
    /* 0085bd49: mov eax, esi */ r_eax = r_esi;
    /* 0085bd4b: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0085bd4e: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0085bd51: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085bd53: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0085bd55: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085bd58: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0085bd5f: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bd63: je 0x85bd7a */ if (fZ) goto L_0085bd7a;
L_0085bd65:; BB(0x0085bd65);
    /* 0085bd65: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0085bd68: push 0x103 */ { u32 v = 0x103u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bd6d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085bd6e: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 0085bd71: push dword ptr [ecx + eax + 4] */ { u32 v = R32((u32)(r_ecx+r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bd75: call 0x85c8c0 */ r_esp -= 4; W32(r_esp, 0x85bd7au); f_0085c8c0();
L_0085bd7a:; BB(0x0085bd7a);
    /* 0085bd7a: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bd7e: jmp 0x85bd99 */ goto L_0085bd99;
L_0085bd89:; BB(0x0085bd89);
    /* 0085bd89: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085bd8c: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bd90: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 0085bd93: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085bd96: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
L_0085bd99:; BB(0x0085bd99);
    /* 0085bd99: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0085bd9c: jmp 0x85bd35 */ goto L_0085bd35;
L_0085bd9e:; BB(0x0085bd9e);
    /* 0085bd9e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bda2: call 0x85bdc0 */ r_esp -= 4; W32(r_esp, 0x85bda7u); f_0085bdc0();
    /* 0085bda7: cmp esi, dword ptr [ebp + 0x14] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bdaa: je 0x85bdb1 */ if (fZ) goto L_0085bdb1;
L_0085bdac:; BB(0x0085bdac);
    /* 0085bdac: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85bdb1u); f_0085c88e();
L_0085bdb1:; BB(0x0085bdb1);
    /* 0085bdb1: mov dword ptr [ebx + 8], esi */ W32((u32)(r_ebx+0x8u), r_esi);
    /* 0085bdb4: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85bdb9u); f_0085e5e7();
    /* 0085bdb9: ret  */ FN_RET(0x0085bd89); r_esp += 4; return;
}

void f_0085bdba(void)
{
    FN_ENTER(0x0085bdba);
    /* 0085bdba: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085bdbd: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bdc0: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bdc5u); f_0085c583();
    /* 0085bdc5: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bdcc: jle 0x85bdda */ if ((fZ||fS!=fO)) goto L_0085bdda;
L_0085bdce:; BB(0x0085bdce);
    /* 0085bdce: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bdd3u); f_0085c583();
    /* 0085bdd3: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0085bdd8: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
L_0085bdda:; BB(0x0085bdda);
    /* 0085bdda: ret  */ FN_RET(0x0085bdba); r_esp += 4; return;
}

void f_0085bdc0(void)
{
    FN_ENTER(0x0085bdc0);
    /* 0085bdc0: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bdc5u); f_0085c583();
    /* 0085bdc5: cmp dword ptr [eax + 0x84], 0 */ {  u32 a = R32((u32)(r_eax+0x84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bdcc: jle 0x85bdda */ if ((fZ||fS!=fO)) goto L_0085bdda;
L_0085bdce:; BB(0x0085bdce);
    /* 0085bdce: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bdd3u); f_0085c583();
    /* 0085bdd3: add eax, 0x84 */ {  u32 a = r_eax; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0085bdd8: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
L_0085bdda:; BB(0x0085bdda);
    /* 0085bdda: ret  */ FN_RET(0x0085bdc0); r_esp += 4; return;
}

void f_0085bddb(void) /* ___DestructExceptionObject */
{
    FN_ENTER(0x0085bddb);
    /* 0085bddb: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bddd: push 0x9980b8 */ { u32 v = 0x9980b8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085bde2: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85bde7u); f_0085e5ac();
    /* 0085bde7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085bdea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bdec: je 0x85be09 */ if (fZ) goto L_0085be09;
L_0085bdee:; BB(0x0085bdee);
    /* 0085bdee: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0085bdf1: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0085bdf4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bdf6: je 0x85be09 */ if (fZ) goto L_0085be09;
L_0085bdf8:; BB(0x0085bdf8);
    /* 0085bdf8: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bdfc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085bdfd: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085be00: call 0x8579ea */ r_esp -= 4; W32(r_esp, 0x85be05u); f_008579ea();
    /* 0085be05: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085be09:; BB(0x0085be09);
    /* 0085be09: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85be0eu); f_0085e5e7();
    /* 0085be0e: ret  */ FN_RET(0x0085bddb); r_esp += 4; return;
}

void f_0085be0f(void)
{
    FN_ENTER(0x0085be0f);
    /* 0085be0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085be11: cmp byte ptr [ebp + 0xc], al */ {  u32 a = R8((u32)(r_ebp+0xcu)); u32 b = (u8)r_eax; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085be14: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0085be17: ret  */ FN_RET(0x0085be0f); r_esp += 4; return;
}

void f_0085be18(void)
{
    FN_ENTER(0x0085be18);
    /* 0085be18: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085be1b: jmp 0x85c859 */ f_0085c859(); return;
}

void f_0085beca(void)
{
    FN_ENTER(0x0085beca);
    /* 0085beca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0085becd: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0085becf: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085bed2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bed5: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bedb: jne 0x85bf0e */ if (!fZ) goto L_0085bf0e;
L_0085bedd:; BB(0x0085bedd);
    /* 0085bedd: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bee0: cmp dword ptr [eax + 0x10], 3 */ {  u32 a = R32((u32)(r_eax+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bee4: jne 0x85bf0e */ if (!fZ) goto L_0085bf0e;
L_0085bee6:; BB(0x0085bee6);
    /* 0085bee6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bee9: cmp dword ptr [eax + 0x14], 0x19930520 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x19930520u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bef0: je 0x85befe */ if (fZ) goto L_0085befe;
L_0085bef2:; BB(0x0085bef2);
    /* 0085bef2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bef5: cmp dword ptr [eax + 0x14], 0x19930521 */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085befc: jne 0x85bf0e */ if (!fZ) goto L_0085bf0e;
L_0085befe:; BB(0x0085befe);
    /* 0085befe: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0085bf01: cmp dword ptr [eax + 0x1c], 0 */ {  u32 a = R32((u32)(r_eax+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bf05: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0085bf0c: je 0x85bf15 */ if (fZ) goto L_0085bf15;
L_0085bf0e:; BB(0x0085bf0e);
    /* 0085bf0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0085bf15:; BB(0x0085bf15);
    /* 0085bf15: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0085bf18: ret  */ FN_RET(0x0085beca); r_esp += 4; return;
}

void f_0085bf19(void)
{
    FN_ENTER(0x0085bf19);
    /* 0085bf19: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085bf1c: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0085bf1f: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0085bf22: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0085bf25: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085bf28: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0085bf2b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0085bf2e: mov edx, dword ptr [ecx + 0x10] */ r_edx = R32((u32)(r_ecx+0x10u));
    /* 0085bf31: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 0085bf34: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0085bf36:; BB(0x0085bf36);
    /* 0085bf36: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0085bf39: cmp edx, dword ptr [ecx + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0085bf3c: jae 0x85bf62 */ if (!fC) goto L_0085bf62;
L_0085bf3e:; BB(0x0085bf3e);
    /* 0085bf3e: lea esi, [edx + edx*4] */ r_esi = (u32)(r_edx+r_edx*4);
    /* 0085bf41: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0085bf44: lea esi, [ebx + esi*4] */ r_esi = (u32)(r_ebx+r_esi*4);
    /* 0085bf47: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0085bf4a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bf4c: jle 0x85bf8b */ if ((fZ||fS!=fO)) goto L_0085bf8b;
L_0085bf4e:; BB(0x0085bf4e);
    /* 0085bf4e: cmp eax, dword ptr [esi + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085bf51: jg 0x85bf8b */ if ((!fZ&&fS==fO)) goto L_0085bf8b;
L_0085bf53:; BB(0x0085bf53);
    /* 0085bf53: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 0085bf56: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0085bf59: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0085bf5c: mov eax, dword ptr [edx + eax*8] */ r_eax = R32((u32)(r_edx+r_eax*8));
    /* 0085bf5f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0085bf62:; BB(0x0085bf62);
    /* 0085bf62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bf63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085bf64: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085bf66: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bf67: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bf68: call 0x85bd0d */ r_esp -= 4; W32(r_esp, 0x85bf6du); f_0085bd0d();
    /* 0085bf6d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085bf70: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0085bf73: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0085bf76: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085bf79: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085bf7d: call 0x85bf94 */ r_esp -= 4; W32(r_esp, 0x85bf82u); f_0085bf94();
    /* 0085bf82: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0085bf85: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85bf8au); f_0085e5e7();
    /* 0085bf8a: ret  */ FN_RET(0x0085bf19); r_esp += 4; return;
L_0085bf8b:; BB(0x0085bf8b);
    /* 0085bf8b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085bf8c: jmp 0x85bf36 */ goto L_0085bf36;
}

void f_0085bf8e(void)
{
    FN_ENTER(0x0085bf8e);
    /* 0085bf8e: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085bf91: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085bf94: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0085bf97: mov dword ptr [edi - 4], eax */ W32((u32)(r_edi+0xfffffffcu), r_eax);
    /* 0085bf9a: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bf9d: call 0x857cf0 */ r_esp -= 4; W32(r_esp, 0x85bfa2u); f_00857cf0();
    /* 0085bfa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bfa3: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bfa8u); f_0085c583();
    /* 0085bfa8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0085bfab: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 0085bfae: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bfb3u); f_0085c583();
    /* 0085bfb3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0085bfb6: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 0085bfbc: cmp dword ptr [esi], 0xe06d7363 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfc2: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfc4:; BB(0x0085bfc4);
    /* 0085bfc4: cmp dword ptr [esi + 0x10], 3 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfc8: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfca:; BB(0x0085bfca);
    /* 0085bfca: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0085bfcd: cmp eax, 0x19930520 */ {  u32 a = r_eax; u32 b = 0x19930520u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bfd2: je 0x85bfdb */ if (fZ) goto L_0085bfdb;
L_0085bfd4:; BB(0x0085bfd4);
    /* 0085bfd4: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfd9: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfdb:; BB(0x0085bfdb);
    /* 0085bfdb: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfdf: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfe1:; BB(0x0085bfe1);
    /* 0085bfe1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfe5: je 0x85c002 */ if (fZ) goto L_0085c002;
L_0085bfe7:; BB(0x0085bfe7);
    /* 0085bfe7: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bfea: call 0x857ccf */ r_esp -= 4; W32(r_esp, 0x85bfefu); f_00857ccf();
    /* 0085bfef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085bff2: je 0x85c002 */ if (fZ) goto L_0085c002;
L_0085bff4:; BB(0x0085bff4);
    /* 0085bff4: call 0x857976 */ r_esp -= 4; W32(r_esp, 0x85bff9u); f_00857976();
    /* 0085bff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bffa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bffb: call 0x85bddb */ r_esp -= 4; W32(r_esp, 0x85c000u); f_0085bddb();
    /* 0085c000: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c001: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c002:; BB(0x0085c002);
    /* 0085c002: ret  */ FN_RET(0x0085bf8e); r_esp += 4; return;
}

void f_0085bf94(void)
{
    FN_ENTER(0x0085bf94);
    /* 0085bf94: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0085bf97: mov dword ptr [edi - 4], eax */ W32((u32)(r_edi+0xfffffffcu), r_eax);
    /* 0085bf9a: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bf9d: call 0x857cf0 */ r_esp -= 4; W32(r_esp, 0x85bfa2u); f_00857cf0();
    /* 0085bfa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bfa3: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bfa8u); f_0085c583();
    /* 0085bfa8: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0085bfab: mov dword ptr [eax + 0x7c], ecx */ W32((u32)(r_eax+0x7cu), r_ecx);
    /* 0085bfae: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x85bfb3u); f_0085c583();
    /* 0085bfb3: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0085bfb6: mov dword ptr [eax + 0x80], ecx */ W32((u32)(r_eax+0x80u), r_ecx);
    /* 0085bfbc: cmp dword ptr [esi], 0xe06d7363 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfc2: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfc4:; BB(0x0085bfc4);
    /* 0085bfc4: cmp dword ptr [esi + 0x10], 3 */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfc8: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfca:; BB(0x0085bfca);
    /* 0085bfca: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 0085bfcd: cmp eax, 0x19930520 */ {  u32 a = r_eax; u32 b = 0x19930520u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085bfd2: je 0x85bfdb */ if (fZ) goto L_0085bfdb;
L_0085bfd4:; BB(0x0085bfd4);
    /* 0085bfd4: cmp eax, 0x19930521 */ {  u32 a = r_eax; u32 b = 0x19930521u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfd9: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfdb:; BB(0x0085bfdb);
    /* 0085bfdb: cmp dword ptr [ebp - 0x48], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfdf: jne 0x85c002 */ if (!fZ) goto L_0085c002;
L_0085bfe1:; BB(0x0085bfe1);
    /* 0085bfe1: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085bfe5: je 0x85c002 */ if (fZ) goto L_0085c002;
L_0085bfe7:; BB(0x0085bfe7);
    /* 0085bfe7: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085bfea: call 0x857ccf */ r_esp -= 4; W32(r_esp, 0x85bfefu); f_00857ccf();
    /* 0085bfef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085bff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085bff2: je 0x85c002 */ if (fZ) goto L_0085c002;
L_0085bff4:; BB(0x0085bff4);
    /* 0085bff4: call 0x857976 */ r_esp -= 4; W32(r_esp, 0x85bff9u); f_00857976();
    /* 0085bff9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085bffa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085bffb: call 0x85bddb */ r_esp -= 4; W32(r_esp, 0x85c000u); f_0085bddb();
    /* 0085c000: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c001: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c002:; BB(0x0085c002);
    /* 0085c002: ret  */ FN_RET(0x0085bf94); r_esp += 4; return;
}

