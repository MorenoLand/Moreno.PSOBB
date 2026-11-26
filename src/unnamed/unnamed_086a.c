#include "protos.h"

void f_0086a17d(void) /* ___getlocaleinfo */
{
    FN_ENTER(0x0086a17d);
    /* 0086a17d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086a17e: mov ebp, esp */ r_ebp = r_esp;
    /* 0086a180: sub esp, 0x84 */ {  u32 a = r_esp; u32 b = 0x84u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086a186: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0086a18b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a18c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a18d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a18f: cmp dword ptr [ebp + 8], 1 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a193: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086a196: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a197: jne 0x86a255 */ if (!fZ) goto L_0086a255;
L_0086a19d:; BB(0x0086a19d);
    /* 0086a19d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a19e: lea edi, [ebp - 0x84] */ r_edi = (u32)(r_ebp+0xffffff7cu);
    /* 0086a1a4: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1a9: mov eax, edi */ r_eax = r_edi;
    /* 0086a1ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1ac: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a1af: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 0086a1b2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a1b5: call 0x86a8ab */ r_esp -= 4; W32(r_esp, 0x86a1bau); f_0086a8ab();
    /* 0086a1ba: mov esi, eax */ r_esi = r_eax;
    /* 0086a1bc: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a1bf: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a1c1: jne 0x86a210 */ if (!fZ) goto L_0086a210;
L_0086a1c3:; BB(0x0086a1c3);
    /* 0086a1c3: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86a1c9u); call_ind(t); }
    /* 0086a1c9: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a1cc: jne 0x86a22c */ if (!fZ) goto L_0086a22c;
L_0086a1ce:; BB(0x0086a1ce);
    /* 0086a1ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1d1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a1d4: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a1d7: call 0x86a8ab */ r_esp -= 4; W32(r_esp, 0x86a1dcu); f_0086a8ab();
    /* 0086a1dc: mov esi, eax */ r_esi = r_eax;
    /* 0086a1de: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a1e1: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a1e3: je 0x86a22c */ if (fZ) goto L_0086a22c;
L_0086a1e5:; BB(0x0086a1e5);
    /* 0086a1e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1e6: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a1ebu); f_00859c55();
    /* 0086a1eb: mov edi, eax */ r_edi = r_eax;
    /* 0086a1ed: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a1ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a1f0: je 0x86a22c */ if (fZ) goto L_0086a22c;
L_0086a1f2:; BB(0x0086a1f2);
    /* 0086a1f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1f3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a1f5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a1f8: mov dword ptr [ebp + 8], 1 */ W32((u32)(r_ebp+0x8u), 0x1u);
    /* 0086a1ff: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a202: call 0x86a8ab */ r_esp -= 4; W32(r_esp, 0x86a207u); f_0086a8ab();
    /* 0086a207: mov esi, eax */ r_esi = r_eax;
    /* 0086a209: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a20c: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a20e: je 0x86a225 */ if (fZ) goto L_0086a225;
L_0086a210:; BB(0x0086a210);
    /* 0086a210: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a211: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a216u); f_00859c55();
    /* 0086a216: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a218: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a219: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 0086a21c: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0086a21e: jne 0x86a23c */ if (!fZ) goto L_0086a23c;
L_0086a220:; BB(0x0086a220);
    /* 0086a220: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a223: je 0x86a22c */ if (fZ) goto L_0086a22c;
L_0086a225:; BB(0x0086a225);
    /* 0086a225: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a226: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a22bu); f_00858882();
    /* 0086a22b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a22c:; BB(0x0086a22c);
    /* 0086a22c: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0086a22f:; BB(0x0086a22f);
    /* 0086a22f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086a232: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086a233: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086a234: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086a235: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86a23au); f_0085e419();
    /* 0086a23a: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086a23b: ret  */ FN_RET(0x0086a17d); r_esp += 4; return;
L_0086a23c:; BB(0x0086a23c);
    /* 0086a23c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a23d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a23e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a23f: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x86a244u); f_00858900();
    /* 0086a244: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a247: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a24a: je 0x86a2a0 */ if (fZ) goto L_0086a2a0;
L_0086a24c:; BB(0x0086a24c);
    /* 0086a24c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a24d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a252u); f_00858882();
    /* 0086a252: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a253: jmp 0x86a2a0 */ goto L_0086a2a0;
L_0086a255:; BB(0x0086a255);
    /* 0086a255: cmp dword ptr [ebp + 8], ebx */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a258: jne 0x86a22c */ if (!fZ) goto L_0086a22c;
L_0086a25a:; BB(0x0086a25a);
    /* 0086a25a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a25b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a25d: mov edi, 0xae7ee8 */ r_edi = 0xae7ee8u;
    /* 0086a262: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a263: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a266: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a269: call 0x86a77b */ r_esp -= 4; W32(r_esp, 0x86a26eu); f_0086a77b();
    /* 0086a26e: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a271: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a273: je 0x86a22c */ if (fZ) goto L_0086a22c;
L_0086a275:; BB(0x0086a275);
    /* 0086a275: mov esi, dword ptr [ebp + 0x14] */ r_esi = R32((u32)(r_ebp+0x14u));
    /* 0086a278: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
L_0086a27a:; BB(0x0086a27a);
    /* 0086a27a: mov bl, byte ptr [edi] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0086a27c: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 0086a27f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a280: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x86a285u); f_00858286();
    /* 0086a285: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a287: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a288: je 0x86a2a0 */ if (fZ) goto L_0086a2a0;
L_0086a28a:; BB(0x0086a28a);
    /* 0086a28a: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0086a28c: mov cl, 0xa */ r_ecx = (r_ecx & 0xffffff00u) | ((0xau) & 0xffu);
    /* 0086a28e: imul cl */ { i32 t = (i32)(i8)r_eax * (i32)(i8)(u8)r_ecx; r_eax = (r_eax & 0xffff0000u) | ((u32)t & 0xffffu); fC = fO = (t != (i32)(i8)t); }
    /* 0086a290: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086a292: sub al, 0x30 */ {  u32 a = (u8)r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086a294: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086a295: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086a296: cmp edi, 0xae7ef0 */ {  u32 a = r_edi; u32 b = 0xae7ef0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086a29c: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0086a29e: jl 0x86a27a */ if ((fS!=fO)) goto L_0086a27a;
L_0086a2a0:; BB(0x0086a2a0);
    /* 0086a2a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a2a2: jmp 0x86a22f */ goto L_0086a22f;
}

void f_0086a3e5(void) /* __mbsnbicoll */
{
    FN_ENTER(0x0086a3e5);
    /* 0086a3e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086a3e6: mov ebp, esp */ r_ebp = r_esp;
    /* 0086a3e8: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x86a3edu); f_0085c583();
    /* 0086a3ed: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 0086a3f0: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a3f6: je 0x86a3fd */ if (fZ) goto L_0086a3fd;
L_0086a3f8:; BB(0x0086a3f8);
    /* 0086a3f8: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x86a3fdu); f_00866438();
L_0086a3fd:; BB(0x0086a3fd);
    /* 0086a3fd: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a401: jne 0x86a407 */ if (!fZ) goto L_0086a407;
L_0086a403:; BB(0x0086a403);
    /* 0086a403: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086a405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086a406: ret  */ FN_RET(0x0086a3e5); r_esp += 4; return;
L_0086a407:; BB(0x0086a407);
    /* 0086a407: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a40a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a40d: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a410: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a413: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a416: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a418: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a41b: call 0x86aa73 */ r_esp -= 4; W32(r_esp, 0x86a420u); f_0086aa73();
    /* 0086a420: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a423: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086a425: jne 0x86a42e */ if (!fZ) goto L_0086a42e;
L_0086a427:; BB(0x0086a427);
    /* 0086a427: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 0086a42c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086a42d: ret  */ FN_RET(0x0086a3e5); r_esp += 4; return;
L_0086a42e:; BB(0x0086a42e);
    /* 0086a42e: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086a431: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086a432: ret  */ FN_RET(0x0086a3e5); r_esp += 4; return;
}

void f_0086a4c3(void) /* ___ld12mul */
{
    FN_ENTER(0x0086a4c3);
    /* 0086a4c3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086a4c4: mov ebp, esp */ r_ebp = r_esp;
    /* 0086a4c6: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086a4c9: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0086a4ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a4cf: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0086a4d2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086a4d5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a4d7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086a4d9: mov cx, word ptr [ebx + 0xa] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebx+0xau))) & 0xffffu);
    /* 0086a4dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a4de: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0086a4e1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086a4e4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 0086a4e7: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086a4ea: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0086a4ed: mov ax, word ptr [esi + 0xa] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_esi+0xau))) & 0xffffu);
    /* 0086a4f1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a4f2: mov edi, ecx */ r_edi = r_ecx;
    /* 0086a4f4: mov edx, 0x7fff */ r_edx = 0x7fffu;
    /* 0086a4f9: and ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0086a4fb: xor edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086a4fd: and eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086a4ff: and edi, 0x8000 */ {  u32 a = r_edi; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0086a505: cmp ax, 0x7fff */ {  u32 a = (u16)r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0086a509: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 0086a50c: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 0086a50f: jae 0x86a6cd */ if (!fC) goto L_0086a6cd;
L_0086a515:; BB(0x0086a515);
    /* 0086a515: cmp cx, 0x7fff */ {  u32 a = (u16)r_ecx; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0086a51a: jae 0x86a6cd */ if (!fC) goto L_0086a6cd;
L_0086a520:; BB(0x0086a520);
    /* 0086a520: cmp dx, 0xbffd */ {  u32 a = (u16)r_edx; u32 b = 0xbffdu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086a525: ja 0x86a6cd */ if ((!fC&&!fZ)) goto L_0086a6cd;
L_0086a52b:; BB(0x0086a52b);
    /* 0086a52b: cmp dx, 0x3fbf */ {  u32 a = (u16)r_edx; u32 b = 0x3fbfu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086a530: ja 0x86a536 */ if ((!fC&&!fZ)) goto L_0086a536;
L_0086a532:; BB(0x0086a532);
    /* 0086a532: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a534: jmp 0x86a570 */ goto L_0086a570;
L_0086a536:; BB(0x0086a536);
    /* 0086a536: test ax, ax */ {  u32 a = (u16)r_eax; u32 b = (u16)r_eax; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0086a539: mov edx, 0x7fffffff */ r_edx = 0x7fffffffu;
    /* 0086a53e: jne 0x86a558 */ if (!fZ) goto L_0086a558;
L_0086a540:; BB(0x0086a540);
    /* 0086a540: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a545: test dword ptr [esi + 8], edx */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a548: jne 0x86a55a */ if (!fZ) goto L_0086a55a;
L_0086a54a:; BB(0x0086a54a);
    /* 0086a54a: cmp dword ptr [esi + 4], eax */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a54d: jne 0x86a55a */ if (!fZ) goto L_0086a55a;
L_0086a54f:; BB(0x0086a54f);
    /* 0086a54f: cmp dword ptr [esi], eax */ {  u32 a = R32((u32)(r_esi)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a551: jne 0x86a55a */ if (!fZ) goto L_0086a55a;
L_0086a553:; BB(0x0086a553);
    /* 0086a553: jmp 0x86a6c7 */ goto L_0086a6c7;
L_0086a558:; BB(0x0086a558);
    /* 0086a558: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0086a55a:; BB(0x0086a55a);
    /* 0086a55a: cmp cx, ax */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086a55d: jne 0x86a57d */ if (!fZ) goto L_0086a57d;
L_0086a55f:; BB(0x0086a55f);
    /* 0086a55f: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a562: test dword ptr [ebx + 8], edx */ {  u32 a = R32((u32)(r_ebx+0x8u)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a565: jne 0x86a57d */ if (!fZ) goto L_0086a57d;
L_0086a567:; BB(0x0086a567);
    /* 0086a567: cmp dword ptr [ebx + 4], eax */ {  u32 a = R32((u32)(r_ebx+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a56a: jne 0x86a57d */ if (!fZ) goto L_0086a57d;
L_0086a56c:; BB(0x0086a56c);
    /* 0086a56c: cmp dword ptr [ebx], eax */ {  u32 a = R32((u32)(r_ebx)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a56e: jne 0x86a57d */ if (!fZ) goto L_0086a57d;
L_0086a570:; BB(0x0086a570);
    /* 0086a570: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 0086a573: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0086a576: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0086a578: jmp 0x86a6e8 */ goto L_0086a6e8;
L_0086a57d:; BB(0x0086a57d);
    /* 0086a57d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0086a580: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0086a583: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0086a586: mov dword ptr [ebp + 0xc], 5 */ W32((u32)(r_ebp+0xcu), 0x5u);
L_0086a58d:; BB(0x0086a58d);
    /* 0086a58d: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086a590: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086a592: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086a596: jle 0x86a5e1 */ if ((fZ||fS!=fO)) goto L_0086a5e1;
L_0086a598:; BB(0x0086a598);
    /* 0086a598: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086a59a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0086a59d: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086a5a0: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 0086a5a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0086a5a6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_0086a5a9:; BB(0x0086a5a9);
    /* 0086a5a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0086a5ac: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086a5af: movzx ecx, word ptr [ecx] */ r_ecx = (u32)R16((u32)(r_ecx));
    /* 0086a5b2: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0086a5b5: imul eax, ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0086a5b8: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0086a5bb: add ecx, -4 */ {  u32 a = r_ecx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086a5be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a5bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a5c0: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a5c2: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x86a5c7u); f_00869903();
    /* 0086a5c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086a5ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a5cc: je 0x86a5d4 */ if (fZ) goto L_0086a5d4;
L_0086a5ce:; BB(0x0086a5ce);
    /* 0086a5ce: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0086a5d1: inc word ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
L_0086a5d4:; BB(0x0086a5d4);
    /* 0086a5d4: add dword ptr [ebp - 0x24], 2 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a5d8: sub dword ptr [ebp - 0x20], 2 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a5dc: dec dword ptr [ebp - 0x28] */ { u32 ad = (u32)(r_ebp+0xffffffd8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086a5df: jne 0x86a5a9 */ if (!fZ) goto L_0086a5a9;
L_0086a5e1:; BB(0x0086a5e1);
    /* 0086a5e1: add dword ptr [ebp - 0x14], 2 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a5e5: inc dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a5e8: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a5eb: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086a5ef: jg 0x86a58d */ if ((!fZ&&fS==fO)) goto L_0086a58d;
L_0086a5f1:; BB(0x0086a5f1);
    /* 0086a5f1: add dword ptr [ebp + 8], 0xc002 */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0xc002u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a5f8: cmp word ptr [ebp + 8], 0 */ {  u32 a = R16((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0086a5fd: jle 0x86a624 */ if ((fZ||fS!=fO)) goto L_0086a624;
L_0086a5ff:; BB(0x0086a5ff);
    /* 0086a5ff: test byte ptr [ebp - 5], 0x80 */ {  u32 a = R8((u32)(r_ebp+0xfffffffbu)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086a603: jne 0x86a61d */ if (!fZ) goto L_0086a61d;
L_0086a605:; BB(0x0086a605);
    /* 0086a605: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a608: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a609: call 0x869982 */ r_esp -= 4; W32(r_esp, 0x86a60eu); f_00869982();
    /* 0086a60e: add dword ptr [ebp + 8], 0xffff */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a615: cmp word ptr [ebp + 8], 0 */ {  u32 a = R16((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0086a61a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a61b: jg 0x86a5ff */ if ((!fZ&&fS==fO)) goto L_0086a5ff;
L_0086a61d:; BB(0x0086a61d);
    /* 0086a61d: cmp word ptr [ebp + 8], 0 */ {  u32 a = R16((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0086a622: jg 0x86a65d */ if ((!fZ&&fS==fO)) goto L_0086a65d;
L_0086a624:; BB(0x0086a624);
    /* 0086a624: add dword ptr [ebp + 8], 0xffff */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a62b: cmp word ptr [ebp + 8], 0 */ {  u32 a = R16((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fS = ((r >> 15) & 1); fO = (((a ^ b) & (a ^ r)) >> 15) & 1; }
    /* 0086a630: jge 0x86a65d */ if ((fS==fO)) goto L_0086a65d;
L_0086a632:; BB(0x0086a632);
    /* 0086a632: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086a635: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086a637: movzx ebx, ax */ r_ebx = (u32)(u16)r_eax;
    /* 0086a63a: add dword ptr [ebp + 8], ebx */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086a63d:; BB(0x0086a63d);
    /* 0086a63d: test byte ptr [ebp - 0x10], 1 */ {  u32 a = R8((u32)(r_ebp+0xfffffff0u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086a641: je 0x86a646 */ if (fZ) goto L_0086a646;
L_0086a643:; BB(0x0086a643);
    /* 0086a643: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086a646:; BB(0x0086a646);
    /* 0086a646: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 0086a649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a64a: call 0x8699b0 */ r_esp -= 4; W32(r_esp, 0x86a64fu); f_008699b0();
    /* 0086a64f: dec ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 0086a650: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a651: jne 0x86a63d */ if (!fZ) goto L_0086a63d;
L_0086a653:; BB(0x0086a653);
    /* 0086a653: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a657: je 0x86a65d */ if (fZ) goto L_0086a65d;
L_0086a659:; BB(0x0086a659);
    /* 0086a659: or byte ptr [ebp - 0x10], 1 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0086a65d:; BB(0x0086a65d);
    /* 0086a65d: cmp word ptr [ebp - 0x10], 0x8000 */ {  u32 a = R16((u32)(r_ebp+0xfffffff0u)); u32 b = 0x8000u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086a663: ja 0x86a674 */ if ((!fC&&!fZ)) goto L_0086a674;
L_0086a665:; BB(0x0086a665);
    /* 0086a665: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086a668: and eax, 0x1ffff */ {  u32 a = r_eax; u32 b = 0x1ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086a66d: cmp eax, 0x18000 */ {  u32 a = r_eax; u32 b = 0x18000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a672: jne 0x86a6a9 */ if (!fZ) goto L_0086a6a9;
L_0086a674:; BB(0x0086a674);
    /* 0086a674: cmp dword ptr [ebp - 0xe], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff2u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a678: jne 0x86a6a6 */ if (!fZ) goto L_0086a6a6;
L_0086a67a:; BB(0x0086a67a);
    /* 0086a67a: and dword ptr [ebp - 0xe], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff2u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a67e: cmp dword ptr [ebp - 0xa], -1 */ {  u32 a = R32((u32)(r_ebp+0xfffffff6u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a682: jne 0x86a6a1 */ if (!fZ) goto L_0086a6a1;
L_0086a684:; BB(0x0086a684);
    /* 0086a684: and dword ptr [ebp - 0xa], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff6u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a688: cmp word ptr [ebp - 6], 0xffff */ {  u32 a = R16((u32)(r_ebp+0xfffffffau)); u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0086a68e: jne 0x86a69b */ if (!fZ) goto L_0086a69b;
L_0086a690:; BB(0x0086a690);
    /* 0086a690: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a693: mov word ptr [ebp - 6], 0x8000 */ W16((u32)(r_ebp+0xfffffffau), 0x8000u);
    /* 0086a699: jmp 0x86a6a9 */ goto L_0086a6a9;
L_0086a69b:; BB(0x0086a69b);
    /* 0086a69b: inc word ptr [ebp - 6] */ { u32 ad = (u32)(r_ebp+0xfffffffau); u32 x = R16(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0086a69f: jmp 0x86a6a9 */ goto L_0086a6a9;
L_0086a6a1:; BB(0x0086a6a1);
    /* 0086a6a1: inc dword ptr [ebp - 0xa] */ { u32 ad = (u32)(r_ebp+0xfffffff6u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a6a4: jmp 0x86a6a9 */ goto L_0086a6a9;
L_0086a6a6:; BB(0x0086a6a6);
    /* 0086a6a6: inc dword ptr [ebp - 0xe] */ { u32 ad = (u32)(r_ebp+0xfffffff2u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086a6a9:; BB(0x0086a6a9);
    /* 0086a6a9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086a6ac: cmp ax, 0x7fff */ {  u32 a = (u16)r_eax; u32 b = 0x7fffu; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0086a6b0: jae 0x86a6cd */ if (!fC) goto L_0086a6cd;
L_0086a6b2:; BB(0x0086a6b2);
    /* 0086a6b2: mov cx, word ptr [ebp - 0xe] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xfffffff2u))) & 0xffffu);
    /* 0086a6b6: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 0086a6b9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086a6bc: mov dword ptr [esi + 2], ecx */ W32((u32)(r_esi+0x2u), r_ecx);
    /* 0086a6bf: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086a6c2: mov dword ptr [esi + 6], ecx */ W32((u32)(r_esi+0x6u), r_ecx);
    /* 0086a6c5: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_0086a6c7:; BB(0x0086a6c7);
    /* 0086a6c7: mov word ptr [esi + 0xa], ax */ W16((u32)(r_esi+0xau), (u16)r_eax);
    /* 0086a6cb: jmp 0x86a6e8 */ goto L_0086a6e8;
L_0086a6cd:; BB(0x0086a6cd);
    /* 0086a6cd: neg di */ { u32 x = (u16)r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu); fC = (a < b); fC = (b != 0); }
    /* 0086a6d0: sbb edi, edi */ { u32 c = fC; u32 a = r_edi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 0086a6d2: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a6d6: and edi, 0x80000000 */ {  u32 a = r_edi; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0086a6dc: add edi, 0x7fff8000 */ {  u32 a = r_edi; u32 b = 0x7fff8000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086a6e2: and dword ptr [esi], 0 */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a6e5: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
L_0086a6e8:; BB(0x0086a6e8);
    /* 0086a6e8: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086a6eb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086a6ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086a6ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086a6ee: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86a6f3u); f_0085e419();
    /* 0086a6f3: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086a6f4: ret  */ FN_RET(0x0086a4c3); r_esp += 4; return;
}

void f_0086a6f5(void) /* ___multtenpow12 */
{
    FN_ENTER(0x0086a6f5);
    /* 0086a6f5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086a6f6: mov ebp, esp */ r_ebp = r_esp;
    /* 0086a6f8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086a6fb: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0086a700: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a701: mov ebx, 0xa24510 */ r_ebx = 0xa24510u;
    /* 0086a706: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086a708: sub ebx, 0x60 */ {  u32 a = r_ebx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a70b: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086a70e: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0086a711: je 0x86a770 */ if (fZ) goto L_0086a770;
L_0086a713:; BB(0x0086a713);
    /* 0086a713: jge 0x86a720 */ if ((fS==fO)) goto L_0086a720;
L_0086a715:; BB(0x0086a715);
    /* 0086a715: neg dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a718: mov ebx, 0xa24670 */ r_ebx = 0xa24670u;
    /* 0086a71d: sub ebx, 0x60 */ {  u32 a = r_ebx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_0086a720:; BB(0x0086a720);
    /* 0086a720: cmp dword ptr [ebp + 0x10], ecx */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a723: jne 0x86a72b */ if (!fZ) goto L_0086a72b;
L_0086a725:; BB(0x0086a725);
    /* 0086a725: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086a728: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_0086a72b:; BB(0x0086a72b);
    /* 0086a72b: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a72e: je 0x86a770 */ if (fZ) goto L_0086a770;
L_0086a730:; BB(0x0086a730);
    /* 0086a730: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a731: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_0086a732:; BB(0x0086a732);
    /* 0086a732: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0086a735: sar dword ptr [ebp + 0xc], 3 */ { u32 ad = (u32)(r_ebp+0xcu); u32 c = (3u) & 31; u32 a = R32(ad); u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; W32(ad, r);  } }
    /* 0086a739: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086a73c: add ebx, 0x54 */ {  u32 a = r_ebx; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a73f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a741: je 0x86a769 */ if (fZ) goto L_0086a769;
L_0086a743:; BB(0x0086a743);
    /* 0086a743: lea eax, [eax + eax*2] */ r_eax = (u32)(r_eax+r_eax*2);
    /* 0086a746: lea esi, [ebx + eax*4] */ r_esi = (u32)(r_ebx+r_eax*4);
    /* 0086a749: cmp word ptr [esi], 0x8000 */ {  u32 a = R16((u32)(r_esi)); u32 b = 0x8000u; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0086a74e: jb 0x86a75c */ if (fC) goto L_0086a75c;
L_0086a750:; BB(0x0086a750);
    /* 0086a750: lea edi, [ebp - 0x10] */ r_edi = (u32)(r_ebp+0xfffffff0u);
    /* 0086a753: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0086a754: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0086a755: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 0086a756: dec dword ptr [ebp - 0xe] */ { u32 ad = (u32)(r_ebp+0xfffffff2u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a759: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
L_0086a75c:; BB(0x0086a75c);
    /* 0086a75c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a75d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a760: call 0x86a4c3 */ r_esp -= 4; W32(r_esp, 0x86a765u); f_0086a4c3();
    /* 0086a765: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a766: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a767: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0086a769:; BB(0x0086a769);
    /* 0086a769: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a76c: jne 0x86a732 */ if (!fZ) goto L_0086a732;
L_0086a76e:; BB(0x0086a76e);
    /* 0086a76e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086a76f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0086a770:; BB(0x0086a770);
    /* 0086a770: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086a773: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086a774: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86a779u); f_0085e419();
    /* 0086a779: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086a77a: ret  */ FN_RET(0x0086a6f5); r_esp += 4; return;
}

void f_0086a77b(void) /* ___crtGetLocaleInfoW */
{
    FN_ENTER(0x0086a77b);
    /* 0086a77b: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a77d: push 0x99a478 */ { u32 v = 0x99a478u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a782: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86a787u); f_0085e5ac();
    /* 0086a787: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086a789: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a78b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a78c: cmp dword ptr [0xae7ef4], edi */ {  u32 a = R32((u32)(0xae7ef4u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a792: jne 0x86a7bf */ if (!fZ) goto L_0086a7bf;
L_0086a794:; BB(0x0086a794);
    /* 0086a794: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a795: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a796: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a797: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a798: call dword ptr [0x8f82d8] */ { u32 t = R32((u32)(0x8f82d8u)); r_esp -= 4; W32(r_esp, 0x86a79eu); call_ind(t); }
    /* 0086a79e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a7a0: je 0x86a7aa */ if (fZ) goto L_0086a7aa;
L_0086a7a2:; BB(0x0086a7a2);
    /* 0086a7a2: mov dword ptr [0xae7ef4], ebx */ W32((u32)(0xae7ef4u), r_ebx);
    /* 0086a7a8: jmp 0x86a7bf */ goto L_0086a7bf;
L_0086a7aa:; BB(0x0086a7aa);
    /* 0086a7aa: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86a7b0u); call_ind(t); }
    /* 0086a7b0: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a7b3: jne 0x86a7bf */ if (!fZ) goto L_0086a7bf;
L_0086a7b5:; BB(0x0086a7b5);
    /* 0086a7b5: mov dword ptr [0xae7ef4], 2 */ W32((u32)(0xae7ef4u), 0x2u);
L_0086a7bf:; BB(0x0086a7bf);
    /* 0086a7bf: mov eax, dword ptr [0xae7ef4] */ r_eax = R32((u32)(0xae7ef4u));
    /* 0086a7c4: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a7c6: jne 0x86a7df */ if (!fZ) goto L_0086a7df;
L_0086a7c8:; BB(0x0086a7c8);
    /* 0086a7c8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a7cb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a7ce: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a7d1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a7d4: call dword ptr [0x8f82d8] */ { u32 t = R32((u32)(0x8f82d8u)); r_esp -= 4; W32(r_esp, 0x86a7dau); call_ind(t); }
    /* 0086a7da: jmp 0x86a8a2 */ goto L_0086a8a2;
L_0086a7df:; BB(0x0086a7df);
    /* 0086a7df: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a7e2: je 0x86a7e8 */ if (fZ) goto L_0086a7e8;
L_0086a7e4:; BB(0x0086a7e4);
    /* 0086a7e4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a7e6: jne 0x86a810 */ if (!fZ) goto L_0086a810;
L_0086a7e8:; BB(0x0086a7e8);
    /* 0086a7e8: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0086a7eb: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0086a7ee: cmp dword ptr [ebp + 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a7f1: jne 0x86a7fb */ if (!fZ) goto L_0086a7fb;
L_0086a7f3:; BB(0x0086a7f3);
    /* 0086a7f3: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 0086a7f8: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_0086a7fb:; BB(0x0086a7fb);
    /* 0086a7fb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a7fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a7fd: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a800: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a803: call dword ptr [0x8f82bc] */ { u32 t = R32((u32)(0x8f82bcu)); r_esp -= 4; W32(r_esp, 0x86a809u); call_ind(t); }
    /* 0086a809: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0086a80c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a80e: jne 0x86a817 */ if (!fZ) goto L_0086a817;
L_0086a810:; BB(0x0086a810);
    /* 0086a810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a812: jmp 0x86a8a2 */ goto L_0086a8a2;
L_0086a817:; BB(0x0086a817);
    /* 0086a817: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086a81a: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086a81d: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086a820: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86a825u); f_00858020();
    /* 0086a825: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086a828: mov esi, esp */ r_esi = r_esp;
    /* 0086a82a: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0086a82d: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a831: jmp 0x86a84a */ goto L_0086a84a;
L_0086a84a:; BB(0x0086a84a);
    /* 0086a84a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a84c: jne 0x86a860 */ if (!fZ) goto L_0086a860;
L_0086a84e:; BB(0x0086a84e);
    /* 0086a84e: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a851: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a856u); f_00859c55();
    /* 0086a856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a857: mov esi, eax */ r_esi = r_eax;
    /* 0086a859: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a85b: je 0x86a810 */ if (fZ) goto L_0086a810;
L_0086a85d:; BB(0x0086a85d);
    /* 0086a85d: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
L_0086a860:; BB(0x0086a860);
    /* 0086a860: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a863: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a864: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a867: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a86a: call dword ptr [0x8f82bc] */ { u32 t = R32((u32)(0x8f82bcu)); r_esp -= 4; W32(r_esp, 0x86a870u); call_ind(t); }
    /* 0086a870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a872: je 0x86a893 */ if (fZ) goto L_0086a893;
L_0086a874:; BB(0x0086a874);
    /* 0086a874: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a877: jne 0x86a87d */ if (!fZ) goto L_0086a87d;
L_0086a879:; BB(0x0086a879);
    /* 0086a879: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a87a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a87b: jmp 0x86a883 */ goto L_0086a883;
L_0086a87d:; BB(0x0086a87d);
    /* 0086a87d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a880: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_0086a883:; BB(0x0086a883);
    /* 0086a883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086a885: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a886: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a887: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a88a: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86a890u); call_ind(t); }
    /* 0086a890: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0086a893:; BB(0x0086a893);
    /* 0086a893: cmp dword ptr [ebp - 0x24], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a896: je 0x86a89f */ if (fZ) goto L_0086a89f;
L_0086a898:; BB(0x0086a898);
    /* 0086a898: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a899: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a89eu); f_00858882();
    /* 0086a89e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a89f:; BB(0x0086a89f);
    /* 0086a89f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0086a8a2:; BB(0x0086a8a2);
    /* 0086a8a2: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 0086a8a5: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86a8aau); f_0085e5e7();
    /* 0086a8aa: ret  */ FN_RET(0x0086a77b); r_esp += 4; return;
}

void f_0086a833(void)
{
    FN_ENTER(0x0086a833);
    /* 0086a833: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086a835: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086a836: ret  */ FN_RET(0x0086a833); r_esp += 4; return;
}

void f_0086a837(void)
{
    FN_ENTER(0x0086a837);
    goto L_0086a837;
L_0086a810:; BB(0x0086a810);
    /* 0086a810: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a812: jmp 0x86a8a2 */ goto L_0086a8a2;
L_0086a837:; BB(0x0086a837);
    /* 0086a837: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086a83a: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x86a83fu); f_00865365();
    /* 0086a83f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086a841: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086a843: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a847: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a849: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0086a84a: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a84c: jne 0x86a860 */ if (!fZ) goto L_0086a860;
L_0086a84e:; BB(0x0086a84e);
    /* 0086a84e: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a851: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a856u); f_00859c55();
    /* 0086a856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a857: mov esi, eax */ r_esi = r_eax;
    /* 0086a859: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a85b: je 0x86a810 */ if (fZ) goto L_0086a810;
L_0086a85d:; BB(0x0086a85d);
    /* 0086a85d: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
L_0086a860:; BB(0x0086a860);
    /* 0086a860: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a863: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a864: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a867: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a86a: call dword ptr [0x8f82bc] */ { u32 t = R32((u32)(0x8f82bcu)); r_esp -= 4; W32(r_esp, 0x86a870u); call_ind(t); }
    /* 0086a870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a872: je 0x86a893 */ if (fZ) goto L_0086a893;
L_0086a874:; BB(0x0086a874);
    /* 0086a874: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a877: jne 0x86a87d */ if (!fZ) goto L_0086a87d;
L_0086a879:; BB(0x0086a879);
    /* 0086a879: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a87a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a87b: jmp 0x86a883 */ goto L_0086a883;
L_0086a87d:; BB(0x0086a87d);
    /* 0086a87d: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a880: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_0086a883:; BB(0x0086a883);
    /* 0086a883: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086a885: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a886: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a887: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a88a: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86a890u); call_ind(t); }
    /* 0086a890: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0086a893:; BB(0x0086a893);
    /* 0086a893: cmp dword ptr [ebp - 0x24], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a896: je 0x86a89f */ if (fZ) goto L_0086a89f;
L_0086a898:; BB(0x0086a898);
    /* 0086a898: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a899: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a89eu); f_00858882();
    /* 0086a89e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a89f:; BB(0x0086a89f);
    /* 0086a89f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
L_0086a8a2:; BB(0x0086a8a2);
    /* 0086a8a2: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 0086a8a5: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86a8aau); f_0085e5e7();
    /* 0086a8aa: ret  */ FN_RET(0x0086a837); r_esp += 4; return;
}

void f_0086a8ab(void) /* ___crtGetLocaleInfoA */
{
    FN_ENTER(0x0086a8ab);
    /* 0086a8ab: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a8ad: push 0x99a488 */ { u32 v = 0x99a488u; r_esp -= 4; W32(r_esp, v); }
    /* 0086a8b2: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86a8b7u); f_0085e5ac();
    /* 0086a8b7: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086a8b9: cmp dword ptr [0xae7ef8], esi */ {  u32 a = R32((u32)(0xae7ef8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a8bf: jne 0x86a8ef */ if (!fZ) goto L_0086a8ef;
L_0086a8c1:; BB(0x0086a8c1);
    /* 0086a8c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a8c2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a8c3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086a8c5: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086a8c6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a8c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a8c8: call dword ptr [0x8f82d8] */ { u32 t = R32((u32)(0x8f82d8u)); r_esp -= 4; W32(r_esp, 0x86a8ceu); call_ind(t); }
    /* 0086a8ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a8d0: je 0x86a8da */ if (fZ) goto L_0086a8da;
L_0086a8d2:; BB(0x0086a8d2);
    /* 0086a8d2: mov dword ptr [0xae7ef8], edi */ W32((u32)(0xae7ef8u), r_edi);
    /* 0086a8d8: jmp 0x86a8ef */ goto L_0086a8ef;
L_0086a8da:; BB(0x0086a8da);
    /* 0086a8da: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86a8e0u); call_ind(t); }
    /* 0086a8e0: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a8e3: jne 0x86a8ef */ if (!fZ) goto L_0086a8ef;
L_0086a8e5:; BB(0x0086a8e5);
    /* 0086a8e5: mov dword ptr [0xae7ef8], 2 */ W32((u32)(0xae7ef8u), 0x2u);
L_0086a8ef:; BB(0x0086a8ef);
    /* 0086a8ef: mov eax, dword ptr [0xae7ef8] */ r_eax = R32((u32)(0xae7ef8u));
    /* 0086a8f4: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a8f7: je 0x86a9d0 */ if (fZ) goto L_0086a9d0;
L_0086a8fd:; BB(0x0086a8fd);
    /* 0086a8fd: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a8ff: je 0x86a9d0 */ if (fZ) goto L_0086a9d0;
L_0086a905:; BB(0x0086a905);
    /* 0086a905: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a908: jne 0x86a934 */ if (!fZ) goto L_0086a934;
L_0086a90a:; BB(0x0086a90a);
    /* 0086a90a: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0086a90d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0086a910: cmp dword ptr [ebp + 0x18], esi */ {  u32 a = R32((u32)(r_ebp+0x18u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a913: jne 0x86a91d */ if (!fZ) goto L_0086a91d;
L_0086a915:; BB(0x0086a915);
    /* 0086a915: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
    /* 0086a91a: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_0086a91d:; BB(0x0086a91d);
    /* 0086a91d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a91e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a91f: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a922: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a925: call dword ptr [0x8f82d8] */ { u32 t = R32((u32)(0x8f82d8u)); r_esp -= 4; W32(r_esp, 0x86a92bu); call_ind(t); }
    /* 0086a92b: mov ebx, eax */ r_ebx = r_eax;
    /* 0086a92d: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0086a930: cmp ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a932: jne 0x86a93b */ if (!fZ) goto L_0086a93b;
L_0086a934:; BB(0x0086a934);
    /* 0086a934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a936: jmp 0x86a9e2 */ goto L_0086a9e2;
L_0086a93b:; BB(0x0086a93b);
    /* 0086a93b: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0086a93e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0086a941: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086a944: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086a947: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86a94cu); f_00858020();
    /* 0086a94c: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086a94f: mov edi, esp */ r_edi = r_esp;
    /* 0086a951: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0086a954: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a958: jmp 0x86a971 */ goto L_0086a971;
L_0086a971:; BB(0x0086a971);
    /* 0086a971: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a973: jne 0x86a98c */ if (!fZ) goto L_0086a98c;
L_0086a975:; BB(0x0086a975);
    /* 0086a975: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0086a978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a979: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a97eu); f_00859c55();
    /* 0086a97e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a97f: mov edi, eax */ r_edi = r_eax;
    /* 0086a981: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a983: je 0x86a934 */ if (fZ) goto L_0086a934;
L_0086a985:; BB(0x0086a985);
    /* 0086a985: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0086a98c:; BB(0x0086a98c);
    /* 0086a98c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a98d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a98e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a991: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a994: call dword ptr [0x8f82d8] */ { u32 t = R32((u32)(0x8f82d8u)); r_esp -= 4; W32(r_esp, 0x86a99au); call_ind(t); }
    /* 0086a99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a99c: je 0x86a9bf */ if (fZ) goto L_0086a9bf;
L_0086a99e:; BB(0x0086a99e);
    /* 0086a99e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a99f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9a0: cmp dword ptr [ebp + 0x14], esi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a9a3: jne 0x86a9a9 */ if (!fZ) goto L_0086a9a9;
L_0086a9a5:; BB(0x0086a9a5);
    /* 0086a9a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9a7: jmp 0x86a9af */ goto L_0086a9af;
L_0086a9a9:; BB(0x0086a9a9);
    /* 0086a9a9: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9ac: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_0086a9af:; BB(0x0086a9af);
    /* 0086a9af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b3: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b6: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x86a9bcu); call_ind(t); }
    /* 0086a9bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0086a9bf:; BB(0x0086a9bf);
    /* 0086a9bf: cmp dword ptr [ebp - 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a9c2: je 0x86a9cb */ if (fZ) goto L_0086a9cb;
L_0086a9c4:; BB(0x0086a9c4);
    /* 0086a9c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9c5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a9cau); f_00858882();
    /* 0086a9ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a9cb:; BB(0x0086a9cb);
    /* 0086a9cb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086a9ce: jmp 0x86a9e2 */ goto L_0086a9e2;
L_0086a9d0:; BB(0x0086a9d0);
    /* 0086a9d0: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9d3: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9d6: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9d9: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9dc: call dword ptr [0x8f82bc] */ { u32 t = R32((u32)(0x8f82bcu)); r_esp -= 4; W32(r_esp, 0x86a9e2u); call_ind(t); }
L_0086a9e2:; BB(0x0086a9e2);
    /* 0086a9e2: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 0086a9e5: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86a9eau); f_0085e5e7();
    /* 0086a9ea: ret  */ FN_RET(0x0086a8ab); r_esp += 4; return;
}

void f_0086a95a(void)
{
    FN_ENTER(0x0086a95a);
    /* 0086a95a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086a95c: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086a95d: ret  */ FN_RET(0x0086a95a); r_esp += 4; return;
}

void f_0086a95e(void)
{
    FN_ENTER(0x0086a95e);
    goto L_0086a95e;
L_0086a934:; BB(0x0086a934);
    /* 0086a934: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086a936: jmp 0x86a9e2 */ goto L_0086a9e2;
L_0086a95e:; BB(0x0086a95e);
    /* 0086a95e: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086a961: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x86a966u); f_00865365();
    /* 0086a966: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086a968: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086a96a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086a96e: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0086a971: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a973: jne 0x86a98c */ if (!fZ) goto L_0086a98c;
L_0086a975:; BB(0x0086a975);
    /* 0086a975: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0086a978: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086a979: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86a97eu); f_00859c55();
    /* 0086a97e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086a97f: mov edi, eax */ r_edi = r_eax;
    /* 0086a981: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a983: je 0x86a934 */ if (fZ) goto L_0086a934;
L_0086a985:; BB(0x0086a985);
    /* 0086a985: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
L_0086a98c:; BB(0x0086a98c);
    /* 0086a98c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086a98d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a98e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a991: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a994: call dword ptr [0x8f82d8] */ { u32 t = R32((u32)(0x8f82d8u)); r_esp -= 4; W32(r_esp, 0x86a99au); call_ind(t); }
    /* 0086a99a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a99c: je 0x86a9bf */ if (fZ) goto L_0086a9bf;
L_0086a99e:; BB(0x0086a99e);
    /* 0086a99e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a99f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9a0: cmp dword ptr [ebp + 0x14], esi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a9a3: jne 0x86a9a9 */ if (!fZ) goto L_0086a9a9;
L_0086a9a5:; BB(0x0086a9a5);
    /* 0086a9a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9a7: jmp 0x86a9af */ goto L_0086a9af;
L_0086a9a9:; BB(0x0086a9a9);
    /* 0086a9a9: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9ac: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
L_0086a9af:; BB(0x0086a9af);
    /* 0086a9af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b3: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086a9b6: call dword ptr [0x8f81d8] */ { u32 t = R32((u32)(0x8f81d8u)); r_esp -= 4; W32(r_esp, 0x86a9bcu); call_ind(t); }
    /* 0086a9bc: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0086a9bf:; BB(0x0086a9bf);
    /* 0086a9bf: cmp dword ptr [ebp - 0x20], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086a9c2: je 0x86a9cb */ if (fZ) goto L_0086a9cb;
L_0086a9c4:; BB(0x0086a9c4);
    /* 0086a9c4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086a9c5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86a9cau); f_00858882();
    /* 0086a9ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086a9cb:; BB(0x0086a9cb);
    /* 0086a9cb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086a9ce: jmp 0x86a9e2 */ goto L_0086a9e2;
L_0086a9e2:; BB(0x0086a9e2);
    /* 0086a9e2: lea esp, [ebp - 0x34] */ r_esp = (u32)(r_ebp+0xffffffccu);
    /* 0086a9e5: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86a9eau); f_0085e5e7();
    /* 0086a9ea: ret  */ FN_RET(0x0086a95e); r_esp += 4; return;
}

void f_0086aa57(void) /* _strncnt */
{
    FN_ENTER(0x0086aa57);
    /* 0086aa57: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0086aa5b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aa5d: je 0x86aa6a */ if (fZ) goto L_0086aa6a;
L_0086aa5f:; BB(0x0086aa5f);
    /* 0086aa5f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086aa60: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086aa63: je 0x86aa6b */ if (fZ) goto L_0086aa6b;
L_0086aa65:; BB(0x0086aa65);
    /* 0086aa65: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086aa66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aa68: jne 0x86aa5f */ if (!fZ) goto L_0086aa5f;
L_0086aa6a:; BB(0x0086aa6a);
    /* 0086aa6a: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
L_0086aa6b:; BB(0x0086aa6b);
    /* 0086aa6b: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0086aa6f: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0086aa71: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086aa72: ret  */ FN_RET(0x0086aa57); r_esp += 4; return;
}

void f_0086aa73(void) /* ___crtCompareStringA */
{
    FN_ENTER(0x0086aa73);
    /* 0086aa73: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa75: push 0x99a498 */ { u32 v = 0x99a498u; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa7a: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86aa7fu); f_0085e5ac();
    /* 0086aa7f: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0086aa84: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086aa87: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086aa89: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086aa8b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086aa8c: cmp dword ptr [0xae7efc], edi */ {  u32 a = R32((u32)(0xae7efcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aa92: jne 0x86aac6 */ if (!fZ) goto L_0086aac6;
L_0086aa94:; BB(0x0086aa94);
    /* 0086aa94: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa95: mov eax, 0x9983dc */ r_eax = 0x9983dcu;
    /* 0086aa9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa9d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa9e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aa9f: call dword ptr [0x8f82e0] */ { u32 t = R32((u32)(0x8f82e0u)); r_esp -= 4; W32(r_esp, 0x86aaa5u); call_ind(t); }
    /* 0086aaa5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aaa7: je 0x86aab1 */ if (fZ) goto L_0086aab1;
L_0086aaa9:; BB(0x0086aaa9);
    /* 0086aaa9: mov dword ptr [0xae7efc], esi */ W32((u32)(0xae7efcu), r_esi);
    /* 0086aaaf: jmp 0x86aac6 */ goto L_0086aac6;
L_0086aab1:; BB(0x0086aab1);
    /* 0086aab1: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86aab7u); call_ind(t); }
    /* 0086aab7: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aaba: jne 0x86aac6 */ if (!fZ) goto L_0086aac6;
L_0086aabc:; BB(0x0086aabc);
    /* 0086aabc: mov dword ptr [0xae7efc], 2 */ W32((u32)(0xae7efcu), 0x2u);
L_0086aac6:; BB(0x0086aac6);
    /* 0086aac6: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086aac9: jle 0x86aada */ if ((fZ||fS!=fO)) goto L_0086aada;
L_0086aacb:; BB(0x0086aacb);
    /* 0086aacb: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086aace: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0086aad1: call 0x86aa57 */ r_esp -= 4; W32(r_esp, 0x86aad6u); f_0086aa57();
    /* 0086aad6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086aad7: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
L_0086aada:; BB(0x0086aada);
    /* 0086aada: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0086aadd: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086aadf: jle 0x86aaee */ if ((fZ||fS!=fO)) goto L_0086aaee;
L_0086aae1:; BB(0x0086aae1);
    /* 0086aae1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086aae2: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 0086aae5: call 0x86aa57 */ r_esp -= 4; W32(r_esp, 0x86aaeau); f_0086aa57();
    /* 0086aaea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086aaeb: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
L_0086aaee:; BB(0x0086aaee);
    /* 0086aaee: mov ecx, dword ptr [0xae7efc] */ r_ecx = R32((u32)(0xae7efcu));
    /* 0086aaf4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086aaf6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086aaf7: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aaf9: je 0x86ad38 */ if (fZ) goto L_0086ad38;
L_0086aaff:; BB(0x0086aaff);
    /* 0086aaff: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab01: je 0x86ad38 */ if (fZ) goto L_0086ad38;
L_0086ab07:; BB(0x0086ab07);
    /* 0086ab07: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab09: jne 0x86ad65 */ if (!fZ) goto L_0086ad65;
L_0086ab0f:; BB(0x0086ab0f);
    /* 0086ab0f: mov dword ptr [ebp - 0x3c], edi */ W32((u32)(r_ebp+0xffffffc4u), r_edi);
    /* 0086ab12: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0086ab15: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 0086ab18: cmp dword ptr [ebp + 0x20], edi */ {  u32 a = R32((u32)(r_ebp+0x20u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab1b: jne 0x86ab26 */ if (!fZ) goto L_0086ab26;
L_0086ab1d:; BB(0x0086ab1d);
    /* 0086ab1d: mov ecx, dword ptr [0xae7eac] */ r_ecx = R32((u32)(0xae7eacu));
    /* 0086ab23: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
L_0086ab26:; BB(0x0086ab26);
    /* 0086ab26: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab29: je 0x86ab33 */ if (fZ) goto L_0086ab33;
L_0086ab2b:; BB(0x0086ab2b);
    /* 0086ab2b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab2d: jne 0x86abdc */ if (!fZ) goto L_0086abdc;
L_0086ab33:; BB(0x0086ab33);
    /* 0086ab33: cmp dword ptr [ebp + 0x14], eax */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab36: jne 0x86ab3f */ if (!fZ) goto L_0086ab3f;
L_0086ab38:; BB(0x0086ab38);
    /* 0086ab38: mov eax, ebx */ r_eax = r_ebx;
    /* 0086ab3a: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ab3f:; BB(0x0086ab3f);
    /* 0086ab3f: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ab41: jg 0x86ade4 */ if ((!fZ&&fS==fO)) goto L_0086ade4;
L_0086ab47:; BB(0x0086ab47);
    /* 0086ab47: cmp dword ptr [ebp + 0x14], esi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ab4a: jle 0x86ab54 */ if ((fZ||fS!=fO)) goto L_0086ab54;
L_0086ab4c:; BB(0x0086ab4c);
    /* 0086ab4c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ab4e: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0086ab4f: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ab54:; BB(0x0086ab54);
    /* 0086ab54: lea eax, [ebp - 0x30] */ r_eax = (u32)(r_ebp+0xffffffd0u);
    /* 0086ab57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ab58: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ab5b: call dword ptr [0x8f82b4] */ { u32 t = R32((u32)(0x8f82b4u)); r_esp -= 4; W32(r_esp, 0x86ab61u); call_ind(t); }
    /* 0086ab61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ab63: je 0x86ad65 */ if (fZ) goto L_0086ad65;
L_0086ab69:; BB(0x0086ab69);
    /* 0086ab69: cmp dword ptr [ebp + 0x14], edi */ {  u32 a = R32((u32)(r_ebp+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ab6c: jle 0x86ab99 */ if ((fZ||fS!=fO)) goto L_0086ab99;
L_0086ab6e:; BB(0x0086ab6e);
    /* 0086ab6e: cmp dword ptr [ebp - 0x30], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086ab71: jb 0x86ab4c */ if (fC) goto L_0086ab4c;
L_0086ab73:; BB(0x0086ab73);
    /* 0086ab73: lea eax, [ebp - 0x2a] */ r_eax = (u32)(r_ebp+0xffffffd6u);
    /* 0086ab76: cmp byte ptr [ebp - 0x2a], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffd6u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086ab7a: je 0x86ab4c */ if (fZ) goto L_0086ab4c;
L_0086ab7c:; BB(0x0086ab7c);
    /* 0086ab7c: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0086ab7f: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086ab81: je 0x86ab4c */ if (fZ) goto L_0086ab4c;
L_0086ab83:; BB(0x0086ab83);
    /* 0086ab83: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0086ab86: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0086ab88: cmp cl, byte ptr [eax] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_eax)); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0086ab8a: jb 0x86ab90 */ if (fC) goto L_0086ab90;
L_0086ab8c:; BB(0x0086ab8c);
    /* 0086ab8c: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086ab8e: jbe 0x86ab38 */ if ((fC||fZ)) goto L_0086ab38;
L_0086ab90:; BB(0x0086ab90);
    /* 0086ab90: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086ab92: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086ab95: jne 0x86ab7c */ if (!fZ) goto L_0086ab7c;
L_0086ab97:; BB(0x0086ab97);
    /* 0086ab97: jmp 0x86ab4c */ goto L_0086ab4c;
L_0086ab99:; BB(0x0086ab99);
    /* 0086ab99: cmp dword ptr [ebp + 0x1c], edi */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086ab9c: jle 0x86abdc */ if ((fZ||fS!=fO)) goto L_0086abdc;
L_0086ab9e:; BB(0x0086ab9e);
    /* 0086ab9e: cmp dword ptr [ebp - 0x30], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086aba1: jb 0x86ade4 */ if (fC) goto L_0086ade4;
L_0086aba7:; BB(0x0086aba7);
    /* 0086aba7: lea eax, [ebp - 0x2a] */ r_eax = (u32)(r_ebp+0xffffffd6u);
    /* 0086abaa: cmp byte ptr [ebp - 0x2a], 0 */ {  u32 a = R8((u32)(r_ebp+0xffffffd6u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086abae: je 0x86ade4 */ if (fZ) goto L_0086ade4;
L_0086abb4:; BB(0x0086abb4);
    /* 0086abb4: mov dl, byte ptr [eax + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_eax+0x1u))) & 0xffu);
    /* 0086abb7: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086abb9: je 0x86ade4 */ if (fZ) goto L_0086ade4;
L_0086abbf:; BB(0x0086abbf);
    /* 0086abbf: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 0086abc2: mov cl, byte ptr [ecx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0086abc4: cmp cl, byte ptr [eax] */ {  u32 a = (u8)r_ecx; u32 b = R8((u32)(r_eax)); u32 r = (a - b) & 0xffu;  fC = (a < b); }
    /* 0086abc6: jb 0x86abd0 */ if (fC) goto L_0086abd0;
L_0086abc8:; BB(0x0086abc8);
    /* 0086abc8: cmp cl, dl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086abca: jbe 0x86ab38 */ if ((fC||fZ)) goto L_0086ab38;
L_0086abd0:; BB(0x0086abd0);
    /* 0086abd0: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086abd2: cmp byte ptr [eax], 0 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086abd5: jne 0x86abb4 */ if (!fZ) goto L_0086abb4;
L_0086abd7:; BB(0x0086abd7);
    /* 0086abd7: jmp 0x86ade4 */ goto L_0086ade4;
L_0086abdc:; BB(0x0086abdc);
    /* 0086abdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086abdd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086abde: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086abe1: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086abe4: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0086abe6: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086abe9: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86abefu); call_ind(t); }
    /* 0086abef: mov ebx, eax */ r_ebx = r_eax;
    /* 0086abf1: mov dword ptr [ebp - 0x48], ebx */ W32((u32)(r_ebp+0xffffffb8u), r_ebx);
    /* 0086abf4: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086abf6: je 0x86ad65 */ if (fZ) goto L_0086ad65;
L_0086abfc:; BB(0x0086abfc);
    /* 0086abfc: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0086abff: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0086ac02: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086ac05: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086ac08: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86ac0du); f_00858020();
    /* 0086ac0d: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086ac10: mov eax, esp */ r_eax = r_esp;
    /* 0086ac12: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0086ac15: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086ac19: jmp 0x86ac37 */ goto L_0086ac37;
L_0086ac37:; BB(0x0086ac37);
    /* 0086ac37: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0086ac3a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac3c: jne 0x86ac56 */ if (!fZ) goto L_0086ac56;
L_0086ac3e:; BB(0x0086ac3e);
    /* 0086ac3e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0086ac41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac42: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86ac47u); f_00859c55();
    /* 0086ac47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ac48: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0086ac4b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac4d: je 0x86ad65 */ if (fZ) goto L_0086ad65;
L_0086ac53:; BB(0x0086ac53);
    /* 0086ac53: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
L_0086ac56:; BB(0x0086ac56);
    /* 0086ac56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac58: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac5b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac5f: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac62: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86ac68u); call_ind(t); }
    /* 0086ac68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac6a: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ac70:; BB(0x0086ac70);
    /* 0086ac70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac74: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac77: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac7a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac7c: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac7f: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86ac85u); call_ind(t); }
    /* 0086ac85: mov esi, eax */ r_esi = r_eax;
    /* 0086ac87: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0086ac8a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac8c: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ac92:; BB(0x0086ac92);
    /* 0086ac92: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086ac99: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086ac9c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086ac9f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086aca2: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86aca7u); f_00858020();
    /* 0086aca7: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086acaa: mov edi, esp */ r_edi = r_esp;
    /* 0086acac: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 0086acaf: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086acb3: jmp 0x86accd */ goto L_0086accd;
L_0086accd:; BB(0x0086accd);
    /* 0086accd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086accf: jne 0x86ace8 */ if (!fZ) goto L_0086ace8;
L_0086acd1:; BB(0x0086acd1);
    /* 0086acd1: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086acd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086acd5: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86acdau); f_00859c55();
    /* 0086acda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086acdb: mov edi, eax */ r_edi = r_eax;
    /* 0086acdd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086acdf: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ace1:; BB(0x0086ace1);
    /* 0086ace1: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0086ace8:; BB(0x0086ace8);
    /* 0086ace8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ace9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086acea: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086aced: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086acf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086acf2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086acf5: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86acfbu); call_ind(t); }
    /* 0086acfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086acfd: je 0x86ad14 */ if (fZ) goto L_0086ad14;
L_0086acff:; BB(0x0086acff);
    /* 0086acff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad02: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad05: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad0b: call dword ptr [0x8f82e0] */ { u32 t = R32((u32)(0x8f82e0u)); r_esp -= 4; W32(r_esp, 0x86ad11u); call_ind(t); }
    /* 0086ad11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0086ad14:; BB(0x0086ad14);
    /* 0086ad14: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad18: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ad1a:; BB(0x0086ad1a);
    /* 0086ad1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad1b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ad20u); f_00858882();
    /* 0086ad20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ad21:; BB(0x0086ad21);
    /* 0086ad21: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad25: je 0x86ad30 */ if (fZ) goto L_0086ad30;
L_0086ad27:; BB(0x0086ad27);
    /* 0086ad27: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad2a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ad2fu); f_00858882();
    /* 0086ad2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ad30:; BB(0x0086ad30);
    /* 0086ad30: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0086ad33: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ad38:; BB(0x0086ad38);
    /* 0086ad38: mov dword ptr [ebp - 0x38], edi */ W32((u32)(r_ebp+0xffffffc8u), r_edi);
    /* 0086ad3b: cmp dword ptr [ebp + 8], edi */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad3e: jne 0x86ad48 */ if (!fZ) goto L_0086ad48;
L_0086ad40:; BB(0x0086ad40);
    /* 0086ad40: mov eax, dword ptr [0xae7e9c] */ r_eax = R32((u32)(0xae7e9cu));
    /* 0086ad45: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
L_0086ad48:; BB(0x0086ad48);
    /* 0086ad48: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 0086ad4b: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad4d: jne 0x86ad55 */ if (!fZ) goto L_0086ad55;
L_0086ad4f:; BB(0x0086ad4f);
    /* 0086ad4f: mov ebx, dword ptr [0xae7eac] */ r_ebx = R32((u32)(0xae7eacu));
L_0086ad55:; BB(0x0086ad55);
    /* 0086ad55: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad58: call 0x868c37 */ r_esp -= 4; W32(r_esp, 0x86ad5du); f_00868c37();
    /* 0086ad5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ad5e: mov esi, eax */ r_esi = r_eax;
    /* 0086ad60: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad63: jne 0x86ad69 */ if (!fZ) goto L_0086ad69;
L_0086ad65:; BB(0x0086ad65);
    /* 0086ad65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ad67: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ad69:; BB(0x0086ad69);
    /* 0086ad69: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad6b: je 0x86adb6 */ if (fZ) goto L_0086adb6;
L_0086ad6d:; BB(0x0086ad6d);
    /* 0086ad6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad6f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad71: lea eax, [ebp + 0x14] */ r_eax = (u32)(r_ebp+0x14u);
    /* 0086ad74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad75: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad79: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad7a: call 0x868c7a */ r_esp -= 4; W32(r_esp, 0x86ad7fu); f_00868c7a();
    /* 0086ad7f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086ad82: mov edi, eax */ r_edi = r_eax;
    /* 0086ad84: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad86: je 0x86ad65 */ if (fZ) goto L_0086ad65;
L_0086ad88:; BB(0x0086ad88);
    /* 0086ad88: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad8c: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 0086ad8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad90: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad93: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad94: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad95: call 0x868c7a */ r_esp -= 4; W32(r_esp, 0x86ad9au); f_00868c7a();
    /* 0086ad9a: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086ad9d: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0086ada0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ada2: jne 0x86adad */ if (!fZ) goto L_0086adad;
L_0086ada4:; BB(0x0086ada4);
    /* 0086ada4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ada5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86adaau); f_00858882();
    /* 0086adaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086adab: jmp 0x86ad65 */ goto L_0086ad65;
L_0086adad:; BB(0x0086adad);
    /* 0086adad: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0086adb0: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0086adb3: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
L_0086adb6:; BB(0x0086adb6);
    /* 0086adb6: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086adb9: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086adbc: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086adbf: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086adc2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086adc5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086adc8: call dword ptr [0x8f82dc] */ { u32 t = R32((u32)(0x8f82dcu)); r_esp -= 4; W32(r_esp, 0x86adceu); call_ind(t); }
    /* 0086adce: mov esi, eax */ r_esi = r_eax;
    /* 0086add0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086add2: je 0x86ade4 */ if (fZ) goto L_0086ade4;
L_0086add4:; BB(0x0086add4);
    /* 0086add4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086add5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86addau); f_00858882();
    /* 0086adda: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086addd: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ade2u); f_00858882();
    /* 0086ade2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ade3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ade4:; BB(0x0086ade4);
    /* 0086ade4: mov eax, esi */ r_eax = r_esi;
L_0086ade6:; BB(0x0086ade6);
    /* 0086ade6: lea esp, [ebp - 0x5c] */ r_esp = (u32)(r_ebp+0xffffffa4u);
    /* 0086ade9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086adec: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86adf1u); f_0085e419();
    /* 0086adf1: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86adf6u); f_0085e5e7();
    /* 0086adf6: ret  */ FN_RET(0x0086aa73); r_esp += 4; return;
}

void f_0086ac1b(void)
{
    FN_ENTER(0x0086ac1b);
    /* 0086ac1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086ac1d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086ac1e: ret  */ FN_RET(0x0086ac1b); r_esp += 4; return;
}

void f_0086ac1f(void)
{
    FN_ENTER(0x0086ac1f);
    /* 0086ac1f: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086ac22: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x86ac27u); f_00865365();
    /* 0086ac27: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086ac2b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086ac2f: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0086ac32: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0086ac34: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0086ac35: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086ac37: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0086ac3a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac3c: jne 0x86ac56 */ if (!fZ) goto L_0086ac56;
L_0086ac3e:; BB(0x0086ac3e);
    /* 0086ac3e: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0086ac41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac42: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86ac47u); f_00859c55();
    /* 0086ac47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086ac48: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0086ac4b: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac4d: je 0x86ad65 */ if (fZ) goto L_0086ad65;
L_0086ac53:; BB(0x0086ac53);
    /* 0086ac53: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
L_0086ac56:; BB(0x0086ac56);
    /* 0086ac56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac58: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac5b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac5e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac5f: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac62: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86ac68u); call_ind(t); }
    /* 0086ac68: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac6a: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ac70:; BB(0x0086ac70);
    /* 0086ac70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac72: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac74: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac77: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac7a: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0086ac7c: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ac7f: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86ac85u); call_ind(t); }
    /* 0086ac85: mov esi, eax */ r_esi = r_eax;
    /* 0086ac87: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0086ac8a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ac8c: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ac92:; BB(0x0086ac92);
    /* 0086ac92: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086ac99: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086ac9c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086ac9f: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086aca2: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x86aca7u); f_00858020();
    /* 0086aca7: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 0086acaa: mov edi, esp */ r_edi = r_esp;
    /* 0086acac: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 0086acaf: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086acb3: jmp 0x86accd */ goto L_0086accd;
L_0086accd:; BB(0x0086accd);
    /* 0086accd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086accf: jne 0x86ace8 */ if (!fZ) goto L_0086ace8;
L_0086acd1:; BB(0x0086acd1);
    /* 0086acd1: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086acd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086acd5: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86acdau); f_00859c55();
    /* 0086acda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086acdb: mov edi, eax */ r_edi = r_eax;
    /* 0086acdd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086acdf: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ace1:; BB(0x0086ace1);
    /* 0086ace1: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0086ace8:; BB(0x0086ace8);
    /* 0086ace8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ace9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086acea: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086aced: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086acf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086acf2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086acf5: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86acfbu); call_ind(t); }
    /* 0086acfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086acfd: je 0x86ad14 */ if (fZ) goto L_0086ad14;
L_0086acff:; BB(0x0086acff);
    /* 0086acff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad02: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad05: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad0b: call dword ptr [0x8f82e0] */ { u32 t = R32((u32)(0x8f82e0u)); r_esp -= 4; W32(r_esp, 0x86ad11u); call_ind(t); }
    /* 0086ad11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0086ad14:; BB(0x0086ad14);
    /* 0086ad14: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad18: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ad1a:; BB(0x0086ad1a);
    /* 0086ad1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad1b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ad20u); f_00858882();
    /* 0086ad20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ad21:; BB(0x0086ad21);
    /* 0086ad21: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad25: je 0x86ad30 */ if (fZ) goto L_0086ad30;
L_0086ad27:; BB(0x0086ad27);
    /* 0086ad27: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad2a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ad2fu); f_00858882();
    /* 0086ad2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ad30:; BB(0x0086ad30);
    /* 0086ad30: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0086ad33: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ad65:; BB(0x0086ad65);
    /* 0086ad65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0086ad67: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ade6:; BB(0x0086ade6);
    /* 0086ade6: lea esp, [ebp - 0x5c] */ r_esp = (u32)(r_ebp+0xffffffa4u);
    /* 0086ade9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086adec: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86adf1u); f_0085e419();
    /* 0086adf1: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86adf6u); f_0085e5e7();
    /* 0086adf6: ret  */ FN_RET(0x0086ac1f); r_esp += 4; return;
}

void f_0086acb5(void)
{
    FN_ENTER(0x0086acb5);
    /* 0086acb5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0086acb7: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086acb8: ret  */ FN_RET(0x0086acb5); r_esp += 4; return;
}

void f_0086acb9(void)
{
    FN_ENTER(0x0086acb9);
    /* 0086acb9: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0086acbc: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x86acc1u); f_00865365();
    /* 0086acc1: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086acc3: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086acc7: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0086acca: mov esi, dword ptr [ebp - 0x4c] */ r_esi = R32((u32)(r_ebp+0xffffffb4u));
    /* 0086accd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086accf: jne 0x86ace8 */ if (!fZ) goto L_0086ace8;
L_0086acd1:; BB(0x0086acd1);
    /* 0086acd1: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0086acd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086acd5: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86acdau); f_00859c55();
    /* 0086acda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086acdb: mov edi, eax */ r_edi = r_eax;
    /* 0086acdd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086acdf: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ace1:; BB(0x0086ace1);
    /* 0086ace1: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0086ace8:; BB(0x0086ace8);
    /* 0086ace8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ace9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086acea: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086aced: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086acf0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086acf2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086acf5: call dword ptr [0x8f81c8] */ { u32 t = R32((u32)(0x8f81c8u)); r_esp -= 4; W32(r_esp, 0x86acfbu); call_ind(t); }
    /* 0086acfb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086acfd: je 0x86ad14 */ if (fZ) goto L_0086ad14;
L_0086acff:; BB(0x0086acff);
    /* 0086acff: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad02: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad05: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad08: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad0b: call dword ptr [0x8f82e0] */ { u32 t = R32((u32)(0x8f82e0u)); r_esp -= 4; W32(r_esp, 0x86ad11u); call_ind(t); }
    /* 0086ad11: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
L_0086ad14:; BB(0x0086ad14);
    /* 0086ad14: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad18: je 0x86ad21 */ if (fZ) goto L_0086ad21;
L_0086ad1a:; BB(0x0086ad1a);
    /* 0086ad1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ad1b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ad20u); f_00858882();
    /* 0086ad20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ad21:; BB(0x0086ad21);
    /* 0086ad21: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ad25: je 0x86ad30 */ if (fZ) goto L_0086ad30;
L_0086ad27:; BB(0x0086ad27);
    /* 0086ad27: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ad2a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86ad2fu); f_00858882();
    /* 0086ad2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086ad30:; BB(0x0086ad30);
    /* 0086ad30: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0086ad33: jmp 0x86ade6 */ goto L_0086ade6;
L_0086ade6:; BB(0x0086ade6);
    /* 0086ade6: lea esp, [ebp - 0x5c] */ r_esp = (u32)(r_ebp+0xffffffa4u);
    /* 0086ade9: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086adec: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86adf1u); f_0085e419();
    /* 0086adf1: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86adf6u); f_0085e5e7();
    /* 0086adf6: ret  */ FN_RET(0x0086acb9); r_esp += 4; return;
}

void f_0086adf7(void) /* _findenv */
{
    FN_ENTER(0x0086adf7);
    /* 0086adf7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086adf8: mov esi, dword ptr [0xae7a30] */ r_esi = R32((u32)(0xae7a30u));
    /* 0086adfe: jmp 0x86ae22 */ goto L_0086ae22;
L_0086ae00:; BB(0x0086ae00);
    /* 0086ae00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086ae02: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086ae06: call 0x86a3e5 */ r_esp -= 4; W32(r_esp, 0x86ae0bu); f_0086a3e5();
    /* 0086ae0b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086ae0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ae10: jne 0x86ae1f */ if (!fZ) goto L_0086ae1f;
L_0086ae12:; BB(0x0086ae12);
    /* 0086ae12: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086ae14: mov al, byte ptr [edi + eax] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+r_eax))) & 0xffu);
    /* 0086ae17: cmp al, 0x3d */ {  u32 a = (u8)r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086ae19: je 0x86ae37 */ if (fZ) goto L_0086ae37;
L_0086ae1b:; BB(0x0086ae1b);
    /* 0086ae1b: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086ae1d: je 0x86ae37 */ if (fZ) goto L_0086ae37;
L_0086ae1f:; BB(0x0086ae1f);
    /* 0086ae1f: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0086ae22:; BB(0x0086ae22);
    /* 0086ae22: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0086ae24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086ae26: jne 0x86ae00 */ if (!fZ) goto L_0086ae00;
L_0086ae28:; BB(0x0086ae28);
    /* 0086ae28: mov eax, esi */ r_eax = r_esi;
    /* 0086ae2a: sub eax, dword ptr [0xae7a30] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7a30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086ae30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ae31: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0086ae34: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
    /* 0086ae36: ret  */ FN_RET(0x0086adf7); r_esp += 4; return;
L_0086ae37:; BB(0x0086ae37);
    /* 0086ae37: mov eax, esi */ r_eax = r_esi;
    /* 0086ae39: sub eax, dword ptr [0xae7a30] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7a30u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 0086ae3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086ae40: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 0086ae43: ret  */ FN_RET(0x0086adf7); r_esp += 4; return;
}

void f_0086aea5(void) /* ___crtsetenv */
{
    FN_ENTER(0x0086aea5);
    /* 0086aea5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086aea6: mov ebp, esp */ r_ebp = r_esp;
    /* 0086aea8: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086aeab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086aeae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086aeaf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086aeb1: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aeb3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aeb4: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0086aeb7: jne 0x86aebe */ if (!fZ) goto L_0086aebe;
L_0086aeb9:; BB(0x0086aeb9);
    /* 0086aeb9: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086aebc: jmp 0x86af1f */ goto L_0086af1f;
L_0086aebe:; BB(0x0086aebe);
    /* 0086aebe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aebf: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0086aec1: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aec3: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0086aec6: je 0x86af1b */ if (fZ) goto L_0086af1b;
L_0086aec8:; BB(0x0086aec8);
    /* 0086aec8: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0086aeca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086aecb: call 0x86b0a5 */ r_esp -= 4; W32(r_esp, 0x86aed0u); f_0086b0a5();
    /* 0086aed0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aed2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086aed3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086aed4: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0086aed7: je 0x86af1b */ if (fZ) goto L_0086af1b;
L_0086aed9:; BB(0x0086aed9);
    /* 0086aed9: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aedb: je 0x86af1b */ if (fZ) goto L_0086af1b;
L_0086aedd:; BB(0x0086aedd);
    /* 0086aedd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086aedf: cmp byte ptr [eax + 1], bl */ {  u32 a = R8((u32)(r_eax+0x1u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086aee2: mov eax, dword ptr [0xae7a30] */ r_eax = R32((u32)(0xae7a30u));
    /* 0086aee7: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0086aeea: cmp eax, dword ptr [0xae7a34] */ {  u32 a = r_eax; u32 b = R32((u32)(0xae7a34u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086aef0: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0086aef3: jne 0x86af01 */ if (!fZ) goto L_0086af01;
L_0086aef5:; BB(0x0086aef5);
    /* 0086aef5: mov edi, eax */ r_edi = r_eax;
    /* 0086aef7: call 0x86ae44 */ r_esp -= 4; W32(r_esp, 0x86aefcu); f_0086ae44();
    /* 0086aefc: mov dword ptr [0xae7a30], eax */ W32((u32)(0xae7a30u), r_eax);
L_0086af01:; BB(0x0086af01);
    /* 0086af01: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af03: jne 0x86af5a */ if (!fZ) goto L_0086af5a;
L_0086af05:; BB(0x0086af05);
    /* 0086af05: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af08: je 0x86af23 */ if (fZ) goto L_0086af23;
L_0086af0a:; BB(0x0086af0a);
    /* 0086af0a: cmp dword ptr [0xae7a38], ebx */ {  u32 a = R32((u32)(0xae7a38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af10: je 0x86af23 */ if (fZ) goto L_0086af23;
L_0086af12:; BB(0x0086af12);
    /* 0086af12: call 0x86a433 */ r_esp -= 4; W32(r_esp, 0x86af17u); f_0086a433();
    /* 0086af17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af19: je 0x86af5a */ if (fZ) goto L_0086af5a;
L_0086af1b:; BB(0x0086af1b);
    /* 0086af1b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0086af1e:; BB(0x0086af1e);
    /* 0086af1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0086af1f:; BB(0x0086af1f);
    /* 0086af1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086af20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0086af21: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086af22: ret  */ FN_RET(0x0086aea5); r_esp += 4; return;
L_0086af23:; BB(0x0086af23);
    /* 0086af23: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af26: je 0x86af2c */ if (fZ) goto L_0086af2c;
L_0086af28:; BB(0x0086af28);
    /* 0086af28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086af2a: jmp 0x86af1e */ goto L_0086af1e;
L_0086af2c:; BB(0x0086af2c);
    /* 0086af2c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086af2e: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86af33u); f_00859c55();
    /* 0086af33: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086af36: mov dword ptr [0xae7a30], eax */ W32((u32)(0xae7a30u), r_eax);
    /* 0086af3b: je 0x86af1b */ if (fZ) goto L_0086af1b;
L_0086af3d:; BB(0x0086af3d);
    /* 0086af3d: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0086af3f: cmp dword ptr [0xae7a38], ebx */ {  u32 a = R32((u32)(0xae7a38u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af45: jne 0x86af5a */ if (!fZ) goto L_0086af5a;
L_0086af47:; BB(0x0086af47);
    /* 0086af47: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086af49: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86af4eu); f_00859c55();
    /* 0086af4e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086af51: mov dword ptr [0xae7a38], eax */ W32((u32)(0xae7a38u), r_eax);
    /* 0086af56: je 0x86af1b */ if (fZ) goto L_0086af1b;
L_0086af58:; BB(0x0086af58);
    /* 0086af58: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
L_0086af5a:; BB(0x0086af5a);
    /* 0086af5a: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 0086af5d: sub edi, dword ptr [ebp - 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086af60: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086af63: mov esi, dword ptr [0xae7a30] */ r_esi = R32((u32)(0xae7a30u));
    /* 0086af69: call 0x86adf7 */ r_esp -= 4; W32(r_esp, 0x86af6eu); f_0086adf7();
    /* 0086af6e: mov edi, eax */ r_edi = r_eax;
    /* 0086af70: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086af72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086af73: jl 0x86afbb */ if ((fS!=fO)) goto L_0086afbb;
L_0086af75:; BB(0x0086af75);
    /* 0086af75: cmp dword ptr [esi], ebx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af77: je 0x86afbb */ if (fZ) goto L_0086afbb;
L_0086af79:; BB(0x0086af79);
    /* 0086af79: lea esi, [esi + edi*4] */ r_esi = (u32)(r_esi+r_edi*4);
    /* 0086af7c: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0086af7e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86af83u); f_00858882();
    /* 0086af83: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086af86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086af87: jne 0x86af9e */ if (!fZ) goto L_0086af9e;
L_0086af89:; BB(0x0086af89);
    /* 0086af89: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086af8c: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0086af8e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086af91: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0086af93: jmp 0x86affc */ goto L_0086affc;
L_0086af95:; BB(0x0086af95);
    /* 0086af95: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0086af98: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0086af9a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086af9b: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0086af9e:; BB(0x0086af9e);
    /* 0086af9e: cmp dword ptr [esi], ebx */ {  u32 a = R32((u32)(r_esi)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086afa0: jne 0x86af95 */ if (!fZ) goto L_0086af95;
L_0086afa2:; BB(0x0086afa2);
    /* 0086afa2: mov eax, edi */ r_eax = r_edi;
    /* 0086afa4: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086afa7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086afa8: push dword ptr [0xae7a30] */ { u32 v = R32((u32)(0xae7a30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086afae: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x86afb3u); f_00860f6c();
    /* 0086afb3: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086afb5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086afb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086afb7: je 0x86affc */ if (fZ) goto L_0086affc;
L_0086afb9:; BB(0x0086afb9);
    /* 0086afb9: jmp 0x86aff7 */ goto L_0086aff7;
L_0086afbb:; BB(0x0086afbb);
    /* 0086afbb: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086afbe: jne 0x86b067 */ if (!fZ) goto L_0086b067;
L_0086afc4:; BB(0x0086afc4);
    /* 0086afc4: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086afc6: jge 0x86afca */ if ((fS==fO)) goto L_0086afca;
L_0086afc8:; BB(0x0086afc8);
    /* 0086afc8: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
L_0086afca:; BB(0x0086afca);
    /* 0086afca: lea eax, [edi*4 + 8] */ r_eax = (u32)(r_edi*4+0x8u);
    /* 0086afd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086afd2: push dword ptr [0xae7a30] */ { u32 v = R32((u32)(0xae7a30u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086afd8: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x86afddu); f_00860f6c();
    /* 0086afdd: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086afdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086afe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086afe1: je 0x86af1b */ if (fZ) goto L_0086af1b;
L_0086afe7:; BB(0x0086afe7);
    /* 0086afe7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0086afea: lea ecx, [eax + edi*4] */ r_ecx = (u32)(r_eax+r_edi*4);
    /* 0086afed: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 0086afef: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 0086aff2: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0086aff5: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
L_0086aff7:; BB(0x0086aff7);
    /* 0086aff7: mov dword ptr [0xae7a30], eax */ W32((u32)(0xae7a30u), r_eax);
L_0086affc:; BB(0x0086affc);
    /* 0086affc: cmp dword ptr [ebp + 0xc], ebx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086afff: je 0x86b051 */ if (fZ) goto L_0086b051;
L_0086b001:; BB(0x0086b001);
    /* 0086b001: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086b004: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x86b009u); f_0085d760();
    /* 0086b009: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b00a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b00b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086b00c: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86b011u); f_00859c55();
    /* 0086b011: mov esi, eax */ r_esi = r_eax;
    /* 0086b013: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b015: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b016: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b017: je 0x86b051 */ if (fZ) goto L_0086b051;
L_0086b019:; BB(0x0086b019);
    /* 0086b019: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086b01c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b01d: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x86b022u); f_0085e2f0();
    /* 0086b022: mov eax, esi */ r_eax = r_esi;
    /* 0086b024: sub eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086b027: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b028: add eax, dword ptr [ebp - 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b02b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b02c: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0086b02f: mov byte ptr [eax], bl */ W8((u32)(r_eax), (u8)r_ebx);
    /* 0086b031: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086b032: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 0086b034: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 0086b036: not ecx */ r_ecx = ~r_ecx;
    /* 0086b038: and ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0086b03a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086b03b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b03c: call dword ptr [0x8f821c] */ { u32 t = R32((u32)(0x8f821cu)); r_esp -= 4; W32(r_esp, 0x86b042u); call_ind(t); }
    /* 0086b042: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086b044: jne 0x86b04a */ if (!fZ) goto L_0086b04a;
L_0086b046:; BB(0x0086b046);
    /* 0086b046: or dword ptr [ebp - 0x10], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0086b04a:; BB(0x0086b04a);
    /* 0086b04a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086b04b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86b050u); f_00858882();
    /* 0086b050: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086b051:; BB(0x0086b051);
    /* 0086b051: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086b054: je 0x86b05f */ if (fZ) goto L_0086b05f;
L_0086b056:; BB(0x0086b056);
    /* 0086b056: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086b059: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86b05eu); f_00858882();
    /* 0086b05e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086b05f:; BB(0x0086b05f);
    /* 0086b05f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0086b062: jmp 0x86af1e */ goto L_0086af1e;
L_0086b067:; BB(0x0086b067);
    /* 0086b067: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0086b06a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86b06fu); f_00858882();
    /* 0086b06f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086b072: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086b073: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 0086b075: jmp 0x86af28 */ goto L_0086af28;
}

