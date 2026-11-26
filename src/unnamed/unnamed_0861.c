#include "protos.h"

void f_008610cc(void)
{
    FN_ENTER(0x008610cc);
    /* 008610cc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008610ce: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008610d1: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008610d4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008610d6: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8610dbu); f_0085e4c5();
    /* 008610db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008610dc: ret  */ FN_RET(0x008610cc); r_esp += 4; return;
}

void f_008610d4(void)
{
    FN_ENTER(0x008610d4);
    /* 008610d4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008610d6: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8610dbu); f_0085e4c5();
    /* 008610db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008610dc: ret  */ FN_RET(0x008610d4); r_esp += 4; return;
}

void f_00861119(void) /* __msize */
{
    FN_ENTER(0x00861119);
    /* 00861119: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0086111b: push 0x9989b0 */ { u32 v = 0x9989b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861120: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x861125u); f_0085e5ac();
    /* 00861125: cmp dword ptr [0xaf0ba0], 3 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086112c: jne 0x861168 */ if (!fZ) goto L_00861168;
L_0086112e:; BB(0x0086112e);
    /* 0086112e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00861130: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x861135u); f_0085e57a();
    /* 00861135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861136: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086113a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0086113d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086113e: call 0x85f628 */ r_esp -= 4; W32(r_esp, 0x861143u); f_0085f628();
    /* 00861143: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861144: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00861147: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861149: je 0x861156 */ if (fZ) goto L_00861156;
L_0086114b:; BB(0x0086114b);
    /* 0086114b: mov esi, dword ptr [esi - 4] */ r_esi = R32((u32)(r_esi+0xfffffffcu));
    /* 0086114e: sub esi, 9 */ {  u32 a = r_esi; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00861151: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00861154: jmp 0x861159 */ goto L_00861159;
L_00861156:; BB(0x00861156);
    /* 00861156: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
L_00861159:; BB(0x00861159);
    /* 00861159: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086115d: call 0x861186 */ r_esp -= 4; W32(r_esp, 0x861162u); f_00861186();
    /* 00861162: cmp dword ptr [ebp - 0x20], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861166: jne 0x86117b */ if (!fZ) goto L_0086117b;
L_00861168:; BB(0x00861168);
    /* 00861168: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086116b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086116d: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00861173: call dword ptr [0x8f8258] */ { u32 t = R32((u32)(0x8f8258u)); r_esp -= 4; W32(r_esp, 0x861179u); call_ind(t); }
    /* 00861179: mov esi, eax */ r_esi = r_eax;
L_0086117b:; BB(0x0086117b);
    /* 0086117b: mov eax, esi */ r_eax = r_esi;
    /* 0086117d: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x861182u); f_0085e5e7();
    /* 00861182: ret  */ FN_RET(0x00861119); r_esp += 4; return;
}

void f_00861183(void)
{
    FN_ENTER(0x00861183);
    /* 00861183: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00861186: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00861188: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x86118du); f_0085e4c5();
    /* 0086118d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086118e: ret  */ FN_RET(0x00861183); r_esp += 4; return;
}

void f_00861186(void)
{
    FN_ENTER(0x00861186);
    /* 00861186: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00861188: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x86118du); f_0085e4c5();
    /* 0086118d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086118e: ret  */ FN_RET(0x00861186); r_esp += 4; return;
}

void f_0086118f(void) /* __mbsicmp */
{
    FN_ENTER(0x0086118f);
    /* 0086118f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00861190: mov ebp, esp */ r_ebp = r_esp;
    /* 00861192: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00861193: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861194: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x861199u); f_0085c583();
    /* 00861199: mov esi, dword ptr [eax + 0x60] */ r_esi = R32((u32)(r_eax+0x60u));
    /* 0086119c: cmp esi, dword ptr [0xaf0838] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008611a2: je 0x8611ab */ if (fZ) goto L_008611ab;
L_008611a4:; BB(0x008611a4);
    /* 008611a4: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8611a9u); f_00866438();
    /* 008611a9: mov esi, eax */ r_esi = r_eax;
L_008611ab:; BB(0x008611ab);
    /* 008611ab: cmp dword ptr [esi + 8], 0 */ {  u32 a = R32((u32)(r_esi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008611af: jne 0x8611c3 */ if (!fZ) goto L_008611c3;
L_008611b1:; BB(0x008611b1);
    /* 008611b1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008611b4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008611b7: call 0x8599e3 */ r_esp -= 4; W32(r_esp, 0x8611bcu); f_008599e3();
    /* 008611bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008611bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008611be: jmp 0x8612c8 */ goto L_008612c8;
L_008611c3:; BB(0x008611c3);
    /* 008611c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008611c4: mov ebx, 0x200 */ r_ebx = 0x200u;
    /* 008611c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008611ca:; BB(0x008611ca);
    /* 008611ca: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008611cd: movzx ax, byte ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 008611d1: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 008611d4: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008611d5: test byte ptr [edx + esi + 0x1d], 4 */ {  u32 a = R8((u32)(r_edx+r_esi+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008611da: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 008611dd: je 0x86122c */ if (fZ) goto L_0086122c;
L_008611df:; BB(0x008611df);
    /* 008611df: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008611e2: jne 0x8611e8 */ if (!fZ) goto L_008611e8;
L_008611e4:; BB(0x008611e4);
    /* 008611e4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008611e6: jmp 0x861244 */ goto L_00861244;
L_008611e8:; BB(0x008611e8);
    /* 008611e8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008611ea: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008611ed: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 008611f0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008611f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008611f3: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008611f5: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008611f6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008611f7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008611f8: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008611fb: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x861200u); f_00860103();
    /* 00861200: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00861203: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861206: jne 0x86120f */ if (!fZ) goto L_0086120f;
L_00861208:; BB(0x00861208);
    /* 00861208: movzx di, byte ptr [ebp - 4] */ r_edi = (r_edi & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0086120d: jmp 0x861227 */ goto L_00861227;
L_0086120f:; BB(0x0086120f);
    /* 0086120f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861212: jne 0x8612cb */ if (!fZ) goto L_008612cb;
L_00861218:; BB(0x00861218);
    /* 00861218: movzx di, byte ptr [ebp - 4] */ r_edi = (r_edi & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 0086121d: movzx ax, byte ptr [ebp - 3] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffdu))) & 0xffffu);
    /* 00861222: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00861225: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00861227:; BB(0x00861227);
    /* 00861227: inc dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086122a: jmp 0x861244 */ goto L_00861244;
L_0086122c:; BB(0x0086122c);
    /* 0086122c: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 0086122f: lea eax, [ecx + esi] */ r_eax = (u32)(r_ecx+r_esi);
    /* 00861232: test byte ptr [eax + 0x1d], 0x10 */ {  u32 a = R8((u32)(r_eax+0x1du)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861236: je 0x861242 */ if (fZ) goto L_00861242;
L_00861238:; BB(0x00861238);
    /* 00861238: movsx di, byte ptr [eax + 0x11d] */ r_edi = (r_edi & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_eax+0x11du))) & 0xffffu);
    /* 00861240: jmp 0x861244 */ goto L_00861244;
L_00861242:; BB(0x00861242);
    /* 00861242: mov edi, ecx */ r_edi = r_ecx;
L_00861244:; BB(0x00861244);
    /* 00861244: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00861247: movzx ax, byte ptr [ecx] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ecx))) & 0xffffu);
    /* 0086124b: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0086124e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086124f: test byte ptr [edx + esi + 0x1d], 4 */ {  u32 a = R8((u32)(r_edx+r_esi+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861254: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 00861257: je 0x8612a2 */ if (fZ) goto L_008612a2;
L_00861259:; BB(0x00861259);
    /* 00861259: cmp byte ptr [ecx], 0 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086125c: jne 0x861262 */ if (!fZ) goto L_00861262;
L_0086125e:; BB(0x0086125e);
    /* 0086125e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00861260: jmp 0x8612b6 */ goto L_008612b6;
L_00861262:; BB(0x00861262);
    /* 00861262: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00861264: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861267: lea eax, [ebp - 4] */ r_eax = (u32)(r_ebp+0xfffffffcu);
    /* 0086126a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086126c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086126d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086126f: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00861270: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00861271: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861272: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00861275: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x86127au); f_00860103();
    /* 0086127a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086127d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861280: jne 0x861289 */ if (!fZ) goto L_00861289;
L_00861282:; BB(0x00861282);
    /* 00861282: movzx ax, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00861287: jmp 0x86129d */ goto L_0086129d;
L_00861289:; BB(0x00861289);
    /* 00861289: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086128c: jne 0x8612cb */ if (!fZ) goto L_008612cb;
L_0086128e:; BB(0x0086128e);
    /* 0086128e: movzx ax, byte ptr [ebp - 4] */ r_eax = (r_eax & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffcu))) & 0xffffu);
    /* 00861293: movzx cx, byte ptr [ebp - 3] */ r_ecx = (r_ecx & 0xffff0000u) | (((u32)R8((u32)(r_ebp+0xfffffffdu))) & 0xffffu);
    /* 00861298: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086129b: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0086129d:; BB(0x0086129d);
    /* 0086129d: inc dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008612a0: jmp 0x8612b6 */ goto L_008612b6;
L_008612a2:; BB(0x008612a2);
    /* 008612a2: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 008612a5: lea ecx, [eax + esi] */ r_ecx = (u32)(r_eax+r_esi);
    /* 008612a8: test byte ptr [ecx + 0x1d], 0x10 */ {  u32 a = R8((u32)(r_ecx+0x1du)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008612ac: je 0x8612b6 */ if (fZ) goto L_008612b6;
L_008612ae:; BB(0x008612ae);
    /* 008612ae: movsx ax, byte ptr [ecx + 0x11d] */ r_eax = (r_eax & 0xffff0000u) | (((u32)(i32)(i8)R8((u32)(r_ecx+0x11du))) & 0xffffu);
L_008612b6:; BB(0x008612b6);
    /* 008612b6: cmp ax, di */ {  u32 a = (u16)r_eax; u32 b = (u16)r_edi; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008612b9: jne 0x8612d2 */ if (!fZ) goto L_008612d2;
L_008612bb:; BB(0x008612bb);
    /* 008612bb: test di, di */ {  u32 a = (u16)r_edi; u32 b = (u16)r_edi; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008612be: jne 0x8611ca */ if (!fZ) goto L_008611ca;
L_008612c4:; BB(0x008612c4);
    /* 008612c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_008612c6:; BB(0x008612c6);
    /* 008612c6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008612c7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008612c8:; BB(0x008612c8);
    /* 008612c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008612c9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008612ca: ret  */ FN_RET(0x0086118f); r_esp += 4; return;
L_008612cb:; BB(0x008612cb);
    /* 008612cb: mov eax, 0x7fffffff */ r_eax = 0x7fffffffu;
    /* 008612d0: jmp 0x8612c6 */ goto L_008612c6;
L_008612d2:; BB(0x008612d2);
    /* 008612d2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008612d4: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008612d7: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008612d8: jmp 0x8612c6 */ goto L_008612c6;
}

void f_008612da(void) /* __mbsrchr */
{
    FN_ENTER(0x008612da);
    /* 008612da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008612db: mov ebp, esp */ r_ebp = r_esp;
    /* 008612dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008612de: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008612e0: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8612e5u); f_0085c583();
    /* 008612e5: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008612e8: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008612ee: je 0x8612f5 */ if (fZ) goto L_008612f5;
L_008612f0:; BB(0x008612f0);
    /* 008612f0: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8612f5u); f_00866438();
L_008612f5:; BB(0x008612f5);
    /* 008612f5: cmp dword ptr [eax + 8], esi */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008612f8: jne 0x861301 */ if (!fZ) goto L_00861301;
L_008612fa:; BB(0x008612fa);
    /* 008612fa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008612fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008612fc: jmp 0x868e50 */ f_00868e50(); return;
L_00861301:; BB(0x00861301);
    /* 00861301: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00861304: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861305: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_00861306:; BB(0x00861306);
    /* 00861306: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00861308: movzx ecx, bl */ r_ecx = (u32)(u8)r_ebx;
    /* 0086130b: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 0086130e: test byte ptr [edi + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_edi+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861313: je 0x861332 */ if (fZ) goto L_00861332;
L_00861315:; BB(0x00861315);
    /* 00861315: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00861316: mov bl, byte ptr [edx] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00861318: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086131a: je 0x86132e */ if (fZ) goto L_0086132e;
L_0086131c:; BB(0x0086131c);
    /* 0086131c: movzx edi, bl */ r_edi = (u32)(u8)r_ebx;
    /* 0086131f: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00861322: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00861324: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861327: jne 0x861339 */ if (!fZ) goto L_00861339;
L_00861329:; BB(0x00861329);
    /* 00861329: lea esi, [edx - 1] */ r_esi = (u32)(r_edx+0xffffffffu);
    /* 0086132c: jmp 0x861339 */ goto L_00861339;
L_0086132e:; BB(0x0086132e);
    /* 0086132e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861330: jmp 0x861335 */ goto L_00861335;
L_00861332:; BB(0x00861332);
    /* 00861332: cmp dword ptr [ebp + 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
L_00861335:; BB(0x00861335);
    /* 00861335: jne 0x861339 */ if (!fZ) goto L_00861339;
L_00861337:; BB(0x00861337);
    /* 00861337: mov esi, edx */ r_esi = r_edx;
L_00861339:; BB(0x00861339);
    /* 00861339: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086133a: test bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086133c: jne 0x861306 */ if (!fZ) goto L_00861306;
L_0086133e:; BB(0x0086133e);
    /* 0086133e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086133f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00861340: mov eax, esi */ r_eax = r_esi;
    /* 00861342: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861343: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00861344: ret  */ FN_RET(0x008612da); r_esp += 4; return;
}

void f_00861453(void) /* __fullpath */
{
    FN_ENTER(0x00861453);
    /* 00861453: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00861454: mov ebp, esp */ r_ebp = r_esp;
    /* 00861456: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861457: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0086145a: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086145c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086145d: je 0x8614ec */ if (fZ) goto L_008614ec;
L_00861463:; BB(0x00861463);
    /* 00861463: cmp byte ptr [ebx], 0 */ {  u32 a = R8((u32)(r_ebx)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861466: je 0x8614ec */ if (fZ) goto L_008614ec;
L_0086146c:; BB(0x0086146c);
    /* 0086146c: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 0086146f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861471: jne 0x861498 */ if (!fZ) goto L_00861498;
L_00861473:; BB(0x00861473);
    /* 00861473: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00861478: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x86147du); f_00859c55();
    /* 0086147d: mov edi, eax */ r_edi = r_eax;
    /* 0086147f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861481: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861482: jne 0x861491 */ if (!fZ) goto L_00861491;
L_00861484:; BB(0x00861484);
    /* 00861484: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x861489u); f_00859dd6();
    /* 00861489: mov dword ptr [eax], 0xc */ W32((u32)(r_eax), 0xcu);
    /* 0086148f: jmp 0x8614c4 */ goto L_008614c4;
L_00861491:; BB(0x00861491);
    /* 00861491: mov dword ptr [ebp + 0x10], 0x104 */ W32((u32)(r_ebp+0x10u), 0x104u);
L_00861498:; BB(0x00861498);
    /* 00861498: lea eax, [ebp + 0xc] */ r_eax = (u32)(r_ebp+0xcu);
    /* 0086149b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086149c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086149d: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008614a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008614a1: call dword ptr [0x8f81d4] */ { u32 t = R32((u32)(0x8f81d4u)); r_esp -= 4; W32(r_esp, 0x8614a7u); call_ind(t); }
    /* 008614a7: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008614aa: jb 0x8614c8 */ if (fC) goto L_008614c8;
L_008614ac:; BB(0x008614ac);
    /* 008614ac: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008614b0: jne 0x8614b9 */ if (!fZ) goto L_008614b9;
L_008614b2:; BB(0x008614b2);
    /* 008614b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008614b3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8614b8u); f_00858882();
    /* 008614b8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008614b9:; BB(0x008614b9);
    /* 008614b9: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8614beu); f_00859dd6();
    /* 008614be: mov dword ptr [eax], 0x22 */ W32((u32)(r_eax), 0x22u);
L_008614c4:; BB(0x008614c4);
    /* 008614c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008614c6: jmp 0x8614f9 */ goto L_008614f9;
L_008614c8:; BB(0x008614c8);
    /* 008614c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008614ca: jne 0x8614e8 */ if (!fZ) goto L_008614e8;
L_008614cc:; BB(0x008614cc);
    /* 008614cc: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008614cf: jne 0x8614d8 */ if (!fZ) goto L_008614d8;
L_008614d1:; BB(0x008614d1);
    /* 008614d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008614d2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8614d7u); f_00858882();
    /* 008614d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008614d8:; BB(0x008614d8);
    /* 008614d8: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8614deu); call_ind(t); }
    /* 008614de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008614df: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x8614e4u); f_00859de8();
    /* 008614e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008614e6: jmp 0x8614f8 */ goto L_008614f8;
L_008614e8:; BB(0x008614e8);
    /* 008614e8: mov eax, edi */ r_eax = r_edi;
    /* 008614ea: jmp 0x8614f9 */ goto L_008614f9;
L_008614ec:; BB(0x008614ec);
    /* 008614ec: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008614ef: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008614f2: call 0x85817f */ r_esp -= 4; W32(r_esp, 0x8614f7u); f_0085817f();
    /* 008614f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008614f8:; BB(0x008614f8);
    /* 008614f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008614f9:; BB(0x008614f9);
    /* 008614f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008614fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008614fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008614fc: ret  */ FN_RET(0x00861453); r_esp += 4; return;
}

void f_008614fd(void) /* __getdrive */
{
    FN_ENTER(0x008614fd);
    /* 008614fd: push 0x120 */ { u32 v = 0x120u; r_esp -= 4; W32(r_esp, v); }
    /* 00861502: push 0x9989c0 */ { u32 v = 0x9989c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861507: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86150cu); f_0085e5ac();
    /* 0086150c: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00861511: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00861514: lea edi, [ebp - 0x124] */ r_edi = (u32)(r_ebp+0xfffffedcu);
    /* 0086151a: and dword ptr [ebp - 0x128], 0 */ { u32 ad = (u32)(r_ebp+0xfffffed8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00861521: mov eax, edi */ r_eax = r_edi;
    /* 00861523: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861524: push 0x105 */ { u32 v = 0x105u; r_esp -= 4; W32(r_esp, v); }
    /* 00861529: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x86152fu); call_ind(t); }
    /* 0086152f: mov esi, eax */ r_esi = r_eax;
    /* 00861531: mov dword ptr [ebp - 0x12c], esi */ W32((u32)(r_ebp+0xfffffed4u), r_esi);
    /* 00861537: cmp esi, 0x104 */ {  u32 a = r_esi; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086153d: jle 0x8615a1 */ if ((fZ||fS!=fO)) goto L_008615a1;
L_0086153f:; BB(0x0086153f);
    /* 0086153f: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00861543: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 00861546: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861549: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086154c: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x861551u); f_00858020();
    /* 00861551: mov dword ptr [ebp - 0x18], esp */ W32((u32)(r_ebp+0xffffffe8u), r_esp);
    /* 00861554: mov edi, esp */ r_edi = r_esp;
    /* 00861556: mov dword ptr [ebp - 0x130], edi */ W32((u32)(r_ebp+0xfffffed0u), r_edi);
    /* 0086155c: jmp 0x86158e */ goto L_0086158e;
L_0086158e:; BB(0x0086158e);
    /* 0086158e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00861592: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861594: je 0x8615a1 */ if (fZ) goto L_008615a1;
L_00861596:; BB(0x00861596);
    /* 00861596: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861597: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861599: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x86159fu); call_ind(t); }
    /* 0086159f: mov esi, eax */ r_esi = r_eax;
L_008615a1:; BB(0x008615a1);
    /* 008615a1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008615a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008615a5: je 0x8615bc */ if (fZ) goto L_008615bc;
L_008615a7:; BB(0x008615a7);
    /* 008615a7: cmp byte ptr [edi + 1], 0x3a */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008615ab: jne 0x8615bc */ if (!fZ) goto L_008615bc;
L_008615ad:; BB(0x008615ad);
    /* 008615ad: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008615b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008615b1: call 0x858aed */ r_esp -= 4; W32(r_esp, 0x8615b6u); f_00858aed();
    /* 008615b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008615b7: mov ebx, eax */ r_ebx = r_eax;
    /* 008615b9: sub ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_008615bc:; BB(0x008615bc);
    /* 008615bc: cmp dword ptr [ebp - 0x128], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008615c3: je 0x8615cc */ if (fZ) goto L_008615cc;
L_008615c5:; BB(0x008615c5);
    /* 008615c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008615c6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8615cbu); f_00858882();
    /* 008615cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008615cc:; BB(0x008615cc);
    /* 008615cc: mov eax, ebx */ r_eax = r_ebx;
    /* 008615ce: lea esp, [ebp - 0x13c] */ r_esp = (u32)(r_ebp+0xfffffec4u);
    /* 008615d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008615d7: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x8615dcu); f_0085e419();
    /* 008615dc: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8615e1u); f_0085e5e7();
    /* 008615e1: ret  */ FN_RET(0x008614fd); r_esp += 4; return;
}

void f_0086155e(void)
{
    FN_ENTER(0x0086155e);
    /* 0086155e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 00861560: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00861561: ret  */ FN_RET(0x0086155e); r_esp += 4; return;
}

void f_00861562(void)
{
    FN_ENTER(0x00861562);
    /* 00861562: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 00861565: call 0x865365 */ r_esp -= 4; W32(r_esp, 0x86156au); f_00865365();
    /* 0086156a: mov esi, dword ptr [ebp - 0x12c] */ r_esi = R32((u32)(r_ebp+0xfffffed4u));
    /* 00861570: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 00861573: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861574: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x861579u); f_00859c55();
    /* 00861579: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086157a: mov edi, eax */ r_edi = r_eax;
    /* 0086157c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086157e: jne 0x861584 */ if (!fZ) goto L_00861584;
L_00861580:; BB(0x00861580);
    /* 00861580: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00861582: jmp 0x86158e */ goto L_0086158e;
L_00861584:; BB(0x00861584);
    /* 00861584: mov dword ptr [ebp - 0x128], 1 */ W32((u32)(r_ebp+0xfffffed8u), 0x1u);
L_0086158e:; BB(0x0086158e);
    /* 0086158e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00861592: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861594: je 0x8615a1 */ if (fZ) goto L_008615a1;
L_00861596:; BB(0x00861596);
    /* 00861596: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861597: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861598: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861599: call dword ptr [0x8f81d0] */ { u32 t = R32((u32)(0x8f81d0u)); r_esp -= 4; W32(r_esp, 0x86159fu); call_ind(t); }
    /* 0086159f: mov esi, eax */ r_esi = r_eax;
L_008615a1:; BB(0x008615a1);
    /* 008615a1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008615a3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008615a5: je 0x8615bc */ if (fZ) goto L_008615bc;
L_008615a7:; BB(0x008615a7);
    /* 008615a7: cmp byte ptr [edi + 1], 0x3a */ {  u32 a = R8((u32)(r_edi+0x1u)); u32 b = 0x3au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008615ab: jne 0x8615bc */ if (!fZ) goto L_008615bc;
L_008615ad:; BB(0x008615ad);
    /* 008615ad: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 008615b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008615b1: call 0x858aed */ r_esp -= 4; W32(r_esp, 0x8615b6u); f_00858aed();
    /* 008615b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008615b7: mov ebx, eax */ r_ebx = r_eax;
    /* 008615b9: sub ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
L_008615bc:; BB(0x008615bc);
    /* 008615bc: cmp dword ptr [ebp - 0x128], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffed8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008615c3: je 0x8615cc */ if (fZ) goto L_008615cc;
L_008615c5:; BB(0x008615c5);
    /* 008615c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008615c6: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8615cbu); f_00858882();
    /* 008615cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008615cc:; BB(0x008615cc);
    /* 008615cc: mov eax, ebx */ r_eax = r_ebx;
    /* 008615ce: lea esp, [ebp - 0x13c] */ r_esp = (u32)(r_ebp+0xfffffec4u);
    /* 008615d4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008615d7: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x8615dcu); f_0085e419();
    /* 008615dc: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8615e1u); f_0085e5e7();
    /* 008615e1: ret  */ FN_RET(0x00861562); r_esp += 4; return;
}

void f_008615e2(void) /* __mbctolower */
{
    FN_ENTER(0x008615e2);
    /* 008615e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008615e3: mov ebp, esp */ r_ebp = r_esp;
    /* 008615e5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008615e6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008615e7: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8615ecu); f_0085c583();
    /* 008615ec: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008615ef: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008615f5: je 0x8615fc */ if (fZ) goto L_008615fc;
L_008615f7:; BB(0x008615f7);
    /* 008615f7: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8615fcu); f_00866438();
L_008615fc:; BB(0x008615fc);
    /* 008615fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008615fd: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00861600: cmp ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00861606: jbe 0x861651 */ if ((fC||fZ)) goto L_00861651;
L_00861608:; BB(0x00861608);
    /* 00861608: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086160a: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086160d: mov byte ptr [ebp - 4], cl */ W8((u32)(r_ebp+0xfffffffcu), (u8)r_ecx);
    /* 00861610: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 00861613: mov byte ptr [ebp - 3], bl */ W8((u32)(r_ebp+0xfffffffdu), (u8)r_ebx);
    /* 00861616: test byte ptr [ecx + eax + 0x1d], 4 */ {  u32 a = R8((u32)(r_ecx+r_eax+0x1du)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086161b: je 0x861662 */ if (fZ) goto L_00861662;
L_0086161d:; BB(0x0086161d);
    /* 0086161d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086161f: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861622: lea ecx, [ebp - 8] */ r_ecx = (u32)(r_ebp+0xfffffff8u);
    /* 00861625: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00861627: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00861628: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086162a: lea ecx, [ebp - 4] */ r_ecx = (u32)(r_ebp+0xfffffffcu);
    /* 0086162d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086162e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00861633: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00861636: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x86163bu); f_00860103();
    /* 0086163b: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086163e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00861640: je 0x861662 */ if (fZ) goto L_00861662;
L_00861642:; BB(0x00861642);
    /* 00861642: movzx eax, byte ptr [ebp - 8] */ r_eax = (u32)R8((u32)(r_ebp+0xfffffff8u));
    /* 00861646: movzx ecx, byte ptr [ebp - 7] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffff9u));
    /* 0086164a: shl eax, 8 */ { u32 c = (8u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0086164d: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0086164f: jmp 0x861664 */ goto L_00861664;
L_00861651:; BB(0x00861651);
    /* 00861651: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861653: test byte ptr [eax + 0x1d], 0x10 */ {  u32 a = R8((u32)(r_eax+0x1du)); u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00861657: je 0x861662 */ if (fZ) goto L_00861662;
L_00861659:; BB(0x00861659);
    /* 00861659: movsx eax, byte ptr [eax + 0x11d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x11du));
    /* 00861660: jmp 0x861664 */ goto L_00861664;
L_00861662:; BB(0x00861662);
    /* 00861662: mov eax, ebx */ r_eax = r_ebx;
L_00861664:; BB(0x00861664);
    /* 00861664: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00861665: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861666: ret  */ FN_RET(0x008615e2); r_esp += 4; return;
}

void f_008616e3(void) /* __mbspbrk */
{
    FN_ENTER(0x008616e3);
    /* 008616e3: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x8616e8u); f_0085c583();
    /* 008616e8: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 008616eb: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008616f1: je 0x8616f8 */ if (fZ) goto L_008616f8;
L_008616f3:; BB(0x008616f3);
    /* 008616f3: call 0x866438 */ r_esp -= 4; W32(r_esp, 0x8616f8u); f_00866438();
L_008616f8:; BB(0x008616f8);
    /* 008616f8: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008616fc: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861700: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861701: call 0x861667 */ r_esp -= 4; W32(r_esp, 0x861706u); f_00861667();
    /* 00861706: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00861709: ret  */ FN_RET(0x008616e3); r_esp += 4; return;
}

void f_0086170a(void) /* __openfile */
{
    FN_ENTER(0x0086170a);
    /* 0086170a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0086170b: mov ebp, esp */ r_ebp = r_esp;
    /* 0086170d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086170e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086170f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861710: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861711: mov esi, dword ptr [0xae7ee4] */ r_esi = R32((u32)(0xae7ee4u));
    /* 00861717: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861718: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0086171b: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0086171d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0086171f: cmp al, 0x61 */ {  u32 a = (u8)r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861721: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00861724: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00861727: je 0x861743 */ if (fZ) goto L_00861743;
L_00861729:; BB(0x00861729);
    /* 00861729: cmp al, 0x72 */ {  u32 a = (u8)r_eax; u32 b = 0x72u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086172b: je 0x86173c */ if (fZ) goto L_0086173c;
L_0086172d:; BB(0x0086172d);
    /* 0086172d: cmp al, 0x77 */ {  u32 a = (u8)r_eax; u32 b = 0x77u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086172f: jne 0x86184f */ if (!fZ) goto L_0086184f;
L_00861735:; BB(0x00861735);
    /* 00861735: mov ecx, 0x301 */ r_ecx = 0x301u;
    /* 0086173a: jmp 0x861748 */ goto L_00861748;
L_0086173c:; BB(0x0086173c);
    /* 0086173c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0086173e: or esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00861741: jmp 0x86174b */ goto L_0086174b;
L_00861743:; BB(0x00861743);
    /* 00861743: mov ecx, 0x109 */ r_ecx = 0x109u;
L_00861748:; BB(0x00861748);
    /* 00861748: or esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
L_0086174b:; BB(0x0086174b);
    /* 0086174b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086174d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0086174e: jmp 0x86182a */ goto L_0086182a;
L_00861753:; BB(0x00861753);
    /* 00861753: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861755: je 0x861835 */ if (fZ) goto L_00861835;
L_0086175b:; BB(0x0086175b);
    /* 0086175b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 0086175e: cmp eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00861761: jg 0x8617d4 */ if ((!fZ&&fS==fO)) goto L_008617d4;
L_00861763:; BB(0x00861763);
    /* 00861763: je 0x8617c7 */ if (fZ) goto L_008617c7;
L_00861765:; BB(0x00861765);
    /* 00861765: sub eax, 0x2b */ {  u32 a = r_eax; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00861768: je 0x8617b1 */ if (fZ) goto L_008617b1;
L_0086176a:; BB(0x0086176a);
    /* 0086176a: sub eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0086176d: je 0x8617a7 */ if (fZ) goto L_008617a7;
L_0086176f:; BB(0x0086176f);
    /* 0086176f: sub eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00861772: je 0x861793 */ if (fZ) goto L_00861793;
L_00861774:; BB(0x00861774);
    /* 00861774: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00861775: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_0086177b:; BB(0x0086177b);
    /* 0086177b: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086177e: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_00861784:; BB(0x00861784);
    /* 00861784: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086178b: or ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0086178e: jmp 0x86182a */ goto L_0086182a;
L_00861793:; BB(0x00861793);
    /* 00861793: cmp dword ptr [ebp - 4], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861796: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_00861798:; BB(0x00861798);
    /* 00861798: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0086179f: or ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008617a2: jmp 0x86182a */ goto L_0086182a;
L_008617a7:; BB(0x008617a7);
    /* 008617a7: test cl, 0x40 */ {  u32 a = (u8)r_ecx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008617aa: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_008617ac:; BB(0x008617ac);
    /* 008617ac: or ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008617af: jmp 0x86182a */ goto L_0086182a;
L_008617b1:; BB(0x008617b1);
    /* 008617b1: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008617b4: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_008617b6:; BB(0x008617b6);
    /* 008617b6: and ecx, 0xfffffffe */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008617b9: and esi, 0xfffffffc */ {  u32 a = r_esi; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 008617bc: or ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008617bf: or esi, 0x80 */ {  u32 a = r_esi; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 008617c5: jmp 0x86182a */ goto L_0086182a;
L_008617c7:; BB(0x008617c7);
    /* 008617c7: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 008617cc: test eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008617ce: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_008617d0:; BB(0x008617d0);
    /* 008617d0: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008617d2: jmp 0x86182a */ goto L_0086182a;
L_008617d4:; BB(0x008617d4);
    /* 008617d4: sub eax, 0x62 */ {  u32 a = r_eax; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008617d7: je 0x86181f */ if (fZ) goto L_0086181f;
L_008617d9:; BB(0x008617d9);
    /* 008617d9: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008617da: je 0x861807 */ if (fZ) goto L_00861807;
L_008617dc:; BB(0x008617dc);
    /* 008617dc: sub eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008617df: je 0x8617f3 */ if (fZ) goto L_008617f3;
L_008617e1:; BB(0x008617e1);
    /* 008617e1: sub eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008617e4: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_008617e6:; BB(0x008617e6);
    /* 008617e6: test ch, 0xc0 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xc0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008617e9: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_008617eb:; BB(0x008617eb);
    /* 008617eb: or ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 008617f1: jmp 0x86182a */ goto L_0086182a;
L_008617f3:; BB(0x008617f3);
    /* 008617f3: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008617f6: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_008617f8:; BB(0x008617f8);
    /* 008617f8: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 008617ff: and esi, 0xffffbfff */ {  u32 a = r_esi; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 00861805: jmp 0x86182a */ goto L_0086182a;
L_00861807:; BB(0x00861807);
    /* 00861807: cmp dword ptr [ebp - 8], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086180a: je 0x861810 */ if (fZ) goto L_00861810;
L_0086180c:; BB(0x0086180c);
    /* 0086180c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0086180e: jmp 0x86182a */ goto L_0086182a;
L_00861810:; BB(0x00861810);
    /* 00861810: mov dword ptr [ebp - 8], 1 */ W32((u32)(r_ebp+0xfffffff8u), 0x1u);
    /* 00861817: or esi, 0x4000 */ {  u32 a = r_esi; u32 b = 0x4000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 0086181d: jmp 0x86182a */ goto L_0086182a;
L_0086181f:; BB(0x0086181f);
    /* 0086181f: test ch, 0xc0 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0xc0u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861822: jne 0x86180c */ if (!fZ) goto L_0086180c;
L_00861824:; BB(0x00861824);
    /* 00861824: or ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
L_0086182a:; BB(0x0086182a);
    /* 0086182a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0086182b: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0086182d: cmp al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086182f: jne 0x861753 */ if (!fZ) goto L_00861753;
L_00861835:; BB(0x00861835);
    /* 00861835: push 0x1a4 */ { u32 v = 0x1a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0086183a: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086183d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0086183e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861841: call 0x869164 */ r_esp -= 4; W32(r_esp, 0x861846u); f_00869164();
    /* 00861846: mov ecx, eax */ r_ecx = r_eax;
    /* 00861848: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0086184b: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086184d: jge 0x861853 */ if ((fS==fO)) goto L_00861853;
L_0086184f:; BB(0x0086184f);
    /* 0086184f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00861851: jmp 0x86186d */ goto L_0086186d;
L_00861853:; BB(0x00861853);
    /* 00861853: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00861856: inc dword ptr [0xae7a88] */ { u32 ad = (u32)(0xae7a88u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0086185c: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 0086185f: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 00861862: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00861864: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 00861867: mov dword ptr [eax + 0x1c], ebx */ W32((u32)(r_eax+0x1cu), r_ebx);
    /* 0086186a: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
L_0086186d:; BB(0x0086186d);
    /* 0086186d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086186e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086186f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00861870: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861871: ret  */ FN_RET(0x0086170a); r_esp += 4; return;
}

void f_00861872(void) /* __getstream */
{
    FN_ENTER(0x00861872);
    /* 00861872: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00861874: push 0x9989d0 */ { u32 v = 0x9989d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861879: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86187eu); f_0085e5ac();
    /* 0086187e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00861880: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00861882: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00861885: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00861887: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x86188cu); f_0085e57a();
    /* 0086188c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086188d: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00861890: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00861892:; BB(0x00861892);
    /* 00861892: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00861895: cmp esi, dword ptr [0xaf1bc0] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf1bc0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086189b: jge 0x861961 */ if ((fS==fO)) goto L_00861961;
L_008618a1:; BB(0x008618a1);
    /* 008618a1: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 008618a6: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 008618a9: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008618ab: je 0x8618fd */ if (fZ) goto L_008618fd;
L_008618ad:; BB(0x008618ad);
    /* 008618ad: test byte ptr [eax + 0xc], 0x83 */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008618b1: jne 0x8618f6 */ if (!fZ) goto L_008618f6;
L_008618b3:; BB(0x008618b3);
    /* 008618b3: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008618b6: jle 0x8618cf */ if ((fZ||fS!=fO)) goto L_008618cf;
L_008618b8:; BB(0x008618b8);
    /* 008618b8: cmp esi, 0x14 */ {  u32 a = r_esi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008618bb: jge 0x8618cf */ if ((fS==fO)) goto L_008618cf;
L_008618bd:; BB(0x008618bd);
    /* 008618bd: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 008618c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008618c1: call 0x85e4da */ r_esp -= 4; W32(r_esp, 0x8618c6u); f_0085e4da();
    /* 008618c6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008618c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008618c9: je 0x861961 */ if (fZ) goto L_00861961;
L_008618cf:; BB(0x008618cf);
    /* 008618cf: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 008618d4: push dword ptr [eax + esi*4] */ { u32 v = R32((u32)(r_eax+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008618d7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008618d8: call 0x85bc2b */ r_esp -= 4; W32(r_esp, 0x8618ddu); f_0085bc2b();
    /* 008618dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008618de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008618df: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 008618e4: mov eax, dword ptr [eax + esi*4] */ r_eax = R32((u32)(r_eax+r_esi*4));
    /* 008618e7: test byte ptr [eax + 0xc], 0x83 */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008618eb: je 0x8618f9 */ if (fZ) goto L_008618f9;
L_008618ed:; BB(0x008618ed);
    /* 008618ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008618ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008618ef: call 0x85bc7d */ r_esp -= 4; W32(r_esp, 0x8618f4u); f_0085bc7d();
    /* 008618f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008618f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008618f6:; BB(0x008618f6);
    /* 008618f6: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008618f7: jmp 0x861892 */ goto L_00861892;
L_008618f9:; BB(0x008618f9);
    /* 008618f9: mov edi, eax */ r_edi = r_eax;
    /* 008618fb: jmp 0x86195e */ goto L_0086195e;
L_008618fd:; BB(0x008618fd);
    /* 008618fd: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00861900: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 00861902: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x861907u); f_00859c55();
    /* 00861907: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861908: mov ecx, dword ptr [0xaf0ba4] */ r_ecx = R32((u32)(0xaf0ba4u));
    /* 0086190e: mov dword ptr [esi + ecx], eax */ W32((u32)(r_esi+r_ecx), r_eax);
    /* 00861911: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 00861916: mov eax, dword ptr [esi + eax] */ r_eax = R32((u32)(r_esi+r_eax));
    /* 00861919: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086191b: je 0x861961 */ if (fZ) goto L_00861961;
L_0086191d:; BB(0x0086191d);
    /* 0086191d: push 0xfa0 */ { u32 v = 0xfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861922: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861926: call 0x868a8e */ r_esp -= 4; W32(r_esp, 0x86192bu); f_00868a8e();
    /* 0086192b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086192c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086192d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086192f: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 00861934: jne 0x861949 */ if (!fZ) goto L_00861949;
L_00861936:; BB(0x00861936);
    /* 00861936: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00861939: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86193eu); f_00858882();
    /* 0086193e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086193f: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 00861944: mov dword ptr [esi + eax], ebx */ W32((u32)(r_esi+r_eax), r_ebx);
    /* 00861947: jmp 0x861961 */ goto L_00861961;
L_00861949:; BB(0x00861949);
    /* 00861949: mov eax, dword ptr [esi + eax] */ r_eax = R32((u32)(r_esi+r_eax));
    /* 0086194c: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086194f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00861950: call dword ptr [0x8f81b4] */ { u32 t = R32((u32)(0x8f81b4u)); r_esp -= 4; W32(r_esp, 0x861956u); call_ind(t); }
    /* 00861956: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 0086195b: mov edi, dword ptr [esi + eax] */ r_edi = R32((u32)(r_esi+r_eax));
L_0086195e:; BB(0x0086195e);
    /* 0086195e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_00861961:; BB(0x00861961);
    /* 00861961: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861963: je 0x861977 */ if (fZ) goto L_00861977;
L_00861965:; BB(0x00861965);
    /* 00861965: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 00861968: mov dword ptr [edi + 0xc], ebx */ W32((u32)(r_edi+0xcu), r_ebx);
    /* 0086196b: mov dword ptr [edi + 8], ebx */ W32((u32)(r_edi+0x8u), r_ebx);
    /* 0086196e: mov dword ptr [edi], ebx */ W32((u32)(r_edi), r_ebx);
    /* 00861970: mov dword ptr [edi + 0x1c], ebx */ W32((u32)(r_edi+0x1cu), r_ebx);
    /* 00861973: or dword ptr [edi + 0x10], 0xffffffff */ { u32 ad = (u32)(r_edi+0x10u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00861977:; BB(0x00861977);
    /* 00861977: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086197b: call 0x86198b */ r_esp -= 4; W32(r_esp, 0x861980u); f_0086198b();
    /* 00861980: mov eax, edi */ r_eax = r_edi;
    /* 00861982: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x861987u); f_0085e5e7();
    /* 00861987: ret  */ FN_RET(0x00861872); r_esp += 4; return;
}

void f_00861988(void)
{
    FN_ENTER(0x00861988);
    /* 00861988: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086198b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086198d: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x861992u); f_0085e4c5();
    /* 00861992: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861993: ret  */ FN_RET(0x00861988); r_esp += 4; return;
}

void f_0086198b(void)
{
    FN_ENTER(0x0086198b);
    /* 0086198b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086198d: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x861992u); f_0085e4c5();
    /* 00861992: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861993: ret  */ FN_RET(0x0086198b); r_esp += 4; return;
}

void f_00861994(void) /* __filbuf */
{
    FN_ENTER(0x00861994);
    /* 00861994: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861995: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00861999: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0086199c: test al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086199e: je 0x861a70 */ if (fZ) goto L_00861a70;
L_008619a4:; BB(0x008619a4);
    /* 008619a4: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008619a6: jne 0x861a70 */ if (!fZ) goto L_00861a70;
L_008619ac:; BB(0x008619ac);
    /* 008619ac: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008619ae: je 0x8619bb */ if (fZ) goto L_008619bb;
L_008619b0:; BB(0x008619b0);
    /* 008619b0: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008619b3: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008619b6: jmp 0x861a70 */ goto L_00861a70;
L_008619bb:; BB(0x008619bb);
    /* 008619bb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008619be: test ax, 0x10c */ {  u32 a = (u16)r_eax; u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 008619c2: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008619c5: jne 0x8619d0 */ if (!fZ) goto L_008619d0;
L_008619c7:; BB(0x008619c7);
    /* 008619c7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008619c8: call 0x866e51 */ r_esp -= 4; W32(r_esp, 0x8619cdu); f_00866e51();
    /* 008619cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008619ce: jmp 0x8619d5 */ goto L_008619d5;
L_008619d0:; BB(0x008619d0);
    /* 008619d0: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008619d3: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
L_008619d5:; BB(0x008619d5);
    /* 008619d5: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008619d8: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008619db: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008619de: call 0x861c50 */ r_esp -= 4; W32(r_esp, 0x8619e3u); f_00861c50();
    /* 008619e3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008619e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008619e8: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008619eb: je 0x861a5f */ if (fZ) goto L_00861a5f;
L_008619ed:; BB(0x008619ed);
    /* 008619ed: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008619f0: je 0x861a5f */ if (fZ) goto L_00861a5f;
L_008619f2:; BB(0x008619f2);
    /* 008619f2: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 008619f5: test dl, 0x82 */ {  u32 a = (u8)r_edx; u32 b = 0x82u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008619f8: jne 0x861a34 */ if (!fZ) goto L_00861a34;
L_008619fa:; BB(0x008619fa);
    /* 008619fa: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008619fd: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861a00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861a01: je 0x861a1a */ if (fZ) goto L_00861a1a;
L_00861a03:; BB(0x00861a03);
    /* 00861a03: mov edi, ecx */ r_edi = r_ecx;
    /* 00861a05: sar edi, 5 */ { u32 c = (5u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00861a08: mov edi, dword ptr [edi*4 + 0xaf0a80] */ r_edi = R32((u32)(r_edi*4+0xaf0a80u));
    /* 00861a0f: and ecx, 0x1f */ {  u32 a = r_ecx; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00861a12: lea ecx, [ecx + ecx*8] */ r_ecx = (u32)(r_ecx+r_ecx*8);
    /* 00861a15: lea edi, [edi + ecx*4] */ r_edi = (u32)(r_edi+r_ecx*4);
    /* 00861a18: jmp 0x861a1f */ goto L_00861a1f;
L_00861a1a:; BB(0x00861a1a);
    /* 00861a1a: mov edi, 0xa24120 */ r_edi = 0xa24120u;
L_00861a1f:; BB(0x00861a1f);
    /* 00861a1f: mov cl, byte ptr [edi + 4] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edi+0x4u))) & 0xffu);
    /* 00861a22: and cl, 0x82 */ {  u32 a = (u8)r_ecx; u32 b = 0x82u; u32 r = (a & b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00861a25: cmp cl, 0x82 */ {  u32 a = (u8)r_ecx; u32 b = 0x82u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00861a28: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861a29: jne 0x861a34 */ if (!fZ) goto L_00861a34;
L_00861a2b:; BB(0x00861a2b);
    /* 00861a2b: or edx, 0x2000 */ {  u32 a = r_edx; u32 b = 0x2000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00861a31: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
L_00861a34:; BB(0x00861a34);
    /* 00861a34: cmp dword ptr [esi + 0x18], 0x200 */ {  u32 a = R32((u32)(r_esi+0x18u)); u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00861a3b: jne 0x861a51 */ if (!fZ) goto L_00861a51;
L_00861a3d:; BB(0x00861a3d);
    /* 00861a3d: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 00861a40: test cl, 8 */ {  u32 a = (u8)r_ecx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 00861a43: je 0x861a51 */ if (fZ) goto L_00861a51;
L_00861a45:; BB(0x00861a45);
    /* 00861a45: test ch, 4 */ {  u32 a = (u8)(r_ecx>>8); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fC = 0; }
    /* 00861a48: jne 0x861a51 */ if (!fZ) goto L_00861a51;
L_00861a4a:; BB(0x00861a4a);
    /* 00861a4a: mov dword ptr [esi + 0x18], 0x1000 */ W32((u32)(r_esi+0x18u), 0x1000u);
L_00861a51:; BB(0x00861a51);
    /* 00861a51: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00861a53: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00861a54: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00861a57: movzx eax, byte ptr [ecx] */ r_eax = (u32)R8((u32)(r_ecx));
    /* 00861a5a: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00861a5b: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00861a5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861a5e: ret  */ FN_RET(0x00861994); r_esp += 4; return;
L_00861a5f:; BB(0x00861a5f);
    /* 00861a5f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00861a61: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 00861a63: and eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00861a66: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861a69: or dword ptr [esi + 0xc], eax */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00861a6c: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00861a70:; BB(0x00861a70);
    /* 00861a70: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00861a73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861a74: ret  */ FN_RET(0x00861994); r_esp += 4; return;
}

void f_00861c50(void) /* __read */
{
    FN_ENTER(0x00861c50);
    /* 00861c50: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00861c52: push 0x9989e0 */ { u32 v = 0x9989e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00861c57: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x861c5cu); f_0085e5ac();
    /* 00861c5c: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00861c5f: cmp ebx, dword ptr [0xaf0a60] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00861c65: jae 0x861cdf */ if (!fC) goto L_00861cdf;
L_00861c67:; BB(0x00861c67);
    /* 00861c67: mov eax, ebx */ r_eax = r_ebx;
    /* 00861c69: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00861c6c: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 00861c73: mov eax, ebx */ r_eax = r_ebx;
    /* 00861c75: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00861c78: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 00861c7b: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00861c7e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861c80: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861c85: je 0x861cdf */ if (fZ) goto L_00861cdf;
L_00861c87:; BB(0x00861c87);
    /* 00861c87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861c88: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x861c8du); f_00863b11();
    /* 00861c8d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861c8e: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00861c92: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00861c94: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00861c99: je 0x861caf */ if (fZ) goto L_00861caf;
L_00861c9b:; BB(0x00861c9b);
    /* 00861c9b: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00861c9e: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00861ca1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861ca2: call 0x861a75 */ r_esp -= 4; W32(r_esp, 0x861ca7u); f_00861a75();
    /* 00861ca7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00861caa: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00861cad: jmp 0x861cc6 */ goto L_00861cc6;
L_00861caf:; BB(0x00861caf);
    /* 00861caf: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x861cb4u); f_00859dd6();
    /* 00861cb4: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00861cba: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x861cbfu); f_00859ddf();
    /* 00861cbf: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00861cc2: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00861cc6:; BB(0x00861cc6);
    /* 00861cc6: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00861cca: call 0x861cd7 */ r_esp -= 4; W32(r_esp, 0x861ccfu); f_00861cd7();
    /* 00861ccf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00861cd2: jmp 0x861cf5 */ goto L_00861cf5;
L_00861cdf:; BB(0x00861cdf);
    /* 00861cdf: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x861ce4u); f_00859dd6();
    /* 00861ce4: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 00861cea: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x861cefu); f_00859ddf();
    /* 00861cef: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00861cf2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_00861cf5:; BB(0x00861cf5);
    /* 00861cf5: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x861cfau); f_0085e5e7();
    /* 00861cfa: ret  */ FN_RET(0x00861c50); r_esp += 4; return;
}

void f_00861cd4(void)
{
    FN_ENTER(0x00861cd4);
    /* 00861cd4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00861cd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861cd8: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x861cddu); f_00863bb1();
    /* 00861cdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861cde: ret  */ FN_RET(0x00861cd4); r_esp += 4; return;
}

void f_00861cd7(void)
{
    FN_ENTER(0x00861cd7);
    /* 00861cd7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00861cd8: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x861cddu); f_00863bb1();
    /* 00861cdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00861cde: ret  */ FN_RET(0x00861cd7); r_esp += 4; return;
}

void f_00861d00(void) /* _memcpy */
{
    FN_ENTER(0x00861d00);
    /* 00861d00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00861d01: mov ebp, esp */ r_ebp = r_esp;
    /* 00861d03: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00861d04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00861d05: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00861d08: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00861d0b: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 00861d0e: mov eax, ecx */ r_eax = r_ecx;
    /* 00861d10: mov edx, ecx */ r_edx = r_ecx;
    /* 00861d12: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00861d14: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00861d16: jbe 0x861d20 */ if ((fC||fZ)) goto L_00861d20;
L_00861d18:; BB(0x00861d18);
    /* 00861d18: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00861d1a: jb 0x861e9c */ if (fC) goto L_00861e9c;
L_00861d20:; BB(0x00861d20);
    /* 00861d20: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861d26: jne 0x861d3c */ if (!fZ) goto L_00861d3c;
L_00861d28:; BB(0x00861d28);
    /* 00861d28: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861d2b: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861d2e: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861d31: jb 0x861d5c */ if (fC) goto L_00861d5c;
L_00861d33:; BB(0x00861d33);
    /* 00861d33: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861d35: jmp dword ptr [edx*4 + 0x861e4c] */ { u32 t = R32((u32)(r_edx*4+0x861e4cu)); switch (t) { case 0x861e5cu: goto L_00861e5c; case 0x861e64u: goto L_00861e64; case 0x861e70u: goto L_00861e70; case 0x861e84u: goto L_00861e84; default: UNSUP(0x00861d35, "jump table entry is not a known target"); } }
L_00861d3c:; BB(0x00861d3c);
    /* 00861d3c: mov eax, edi */ r_eax = r_edi;
    /* 00861d3e: mov edx, 3 */ r_edx = 0x3u;
    /* 00861d43: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861d46: jb 0x861d54 */ if (fC) goto L_00861d54;
L_00861d48:; BB(0x00861d48);
    /* 00861d48: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00861d4b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00861d4d: jmp dword ptr [eax*4 + 0x861d60] */ { u32 t = R32((u32)(r_eax*4+0x861d60u)); switch (t) { case 0x861d70u: goto L_00861d70; case 0x861d9cu: goto L_00861d9c; case 0x861dc0u: goto L_00861dc0; default: UNSUP(0x00861d4d, "jump table entry is not a known target"); } }
L_00861d54:; BB(0x00861d54);
    /* 00861d54: jmp dword ptr [ecx*4 + 0x861e5c] */ { u32 t = R32((u32)(r_ecx*4+0x861e5cu)); switch (t) { case 0x861e84u: goto L_00861e84; case 0x861e70u: goto L_00861e70; case 0x861e64u: goto L_00861e64; case 0x861e5cu: goto L_00861e5c; default: UNSUP(0x00861d54, "jump table entry is not a known target"); } }
L_00861d5c:; BB(0x00861d5c);
    /* 00861d5c: jmp dword ptr [ecx*4 + 0x861de0] */ { u32 t = R32((u32)(r_ecx*4+0x861de0u)); switch (t) { case 0x861e43u: goto L_00861e43; case 0x861e30u: goto L_00861e30; case 0x861e28u: goto L_00861e28; case 0x861e20u: goto L_00861e20; case 0x861e18u: goto L_00861e18; case 0x861e10u: goto L_00861e10; case 0x861e08u: goto L_00861e08; case 0x861e00u: goto L_00861e00; default: UNSUP(0x00861d5c, "jump table entry is not a known target"); } }
L_00861d70:; BB(0x00861d70);
    /* 00861d70: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861d72: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00861d74: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00861d76: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00861d79: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00861d7c: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00861d7f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861d82: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00861d85: add esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861d88: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00861d8b: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861d8e: jb 0x861d5c */ if (fC) goto L_00861d5c;
L_00861d90:; BB(0x00861d90);
    /* 00861d90: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861d92: jmp dword ptr [edx*4 + 0x861e4c] */ { u32 t = R32((u32)(r_edx*4+0x861e4cu)); switch (t) { case 0x861e5cu: goto L_00861e5c; case 0x861e64u: goto L_00861e64; case 0x861e70u: goto L_00861e70; case 0x861e84u: goto L_00861e84; default: UNSUP(0x00861d92, "jump table entry is not a known target"); } }
L_00861d9c:; BB(0x00861d9c);
    /* 00861d9c: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861d9e: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00861da0: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00861da2: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00861da5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861da8: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00861dab: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861dae: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00861db1: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861db4: jb 0x861d5c */ if (fC) goto L_00861d5c;
L_00861db6:; BB(0x00861db6);
    /* 00861db6: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861db8: jmp dword ptr [edx*4 + 0x861e4c] */ { u32 t = R32((u32)(r_edx*4+0x861e4cu)); switch (t) { case 0x861e5cu: goto L_00861e5c; case 0x861e64u: goto L_00861e64; case 0x861e70u: goto L_00861e70; case 0x861e84u: goto L_00861e84; default: UNSUP(0x00861db8, "jump table entry is not a known target"); } }
L_00861dc0:; BB(0x00861dc0);
    /* 00861dc0: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861dc2: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00861dc4: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00861dc6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861dc9: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861dcc: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00861dcf: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861dd2: jb 0x861d5c */ if (fC) goto L_00861d5c;
L_00861dd4:; BB(0x00861dd4);
    /* 00861dd4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861dd6: jmp dword ptr [edx*4 + 0x861e4c] */ { u32 t = R32((u32)(r_edx*4+0x861e4cu)); switch (t) { case 0x861e5cu: goto L_00861e5c; case 0x861e64u: goto L_00861e64; case 0x861e70u: goto L_00861e70; case 0x861e84u: goto L_00861e84; default: UNSUP(0x00861dd6, "jump table entry is not a known target"); } }
L_00861e00:; BB(0x00861e00);
    /* 00861e00: mov eax, dword ptr [esi + ecx*4 - 0x1c] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xffffffe4u));
    /* 00861e04: mov dword ptr [edi + ecx*4 - 0x1c], eax */ W32((u32)(r_edi+r_ecx*4+0xffffffe4u), r_eax);
L_00861e08:; BB(0x00861e08);
    /* 00861e08: mov eax, dword ptr [esi + ecx*4 - 0x18] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xffffffe8u));
    /* 00861e0c: mov dword ptr [edi + ecx*4 - 0x18], eax */ W32((u32)(r_edi+r_ecx*4+0xffffffe8u), r_eax);
L_00861e10:; BB(0x00861e10);
    /* 00861e10: mov eax, dword ptr [esi + ecx*4 - 0x14] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xffffffecu));
    /* 00861e14: mov dword ptr [edi + ecx*4 - 0x14], eax */ W32((u32)(r_edi+r_ecx*4+0xffffffecu), r_eax);
L_00861e18:; BB(0x00861e18);
    /* 00861e18: mov eax, dword ptr [esi + ecx*4 - 0x10] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffff0u));
    /* 00861e1c: mov dword ptr [edi + ecx*4 - 0x10], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffff0u), r_eax);
L_00861e20:; BB(0x00861e20);
    /* 00861e20: mov eax, dword ptr [esi + ecx*4 - 0xc] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffff4u));
    /* 00861e24: mov dword ptr [edi + ecx*4 - 0xc], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffff4u), r_eax);
L_00861e28:; BB(0x00861e28);
    /* 00861e28: mov eax, dword ptr [esi + ecx*4 - 8] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffff8u));
    /* 00861e2c: mov dword ptr [edi + ecx*4 - 8], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffff8u), r_eax);
L_00861e30:; BB(0x00861e30);
    /* 00861e30: mov eax, dword ptr [esi + ecx*4 - 4] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xfffffffcu));
    /* 00861e34: mov dword ptr [edi + ecx*4 - 4], eax */ W32((u32)(r_edi+r_ecx*4+0xfffffffcu), r_eax);
    /* 00861e38: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 00861e3f: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861e41: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00861e43:; BB(0x00861e43);
    /* 00861e43: jmp dword ptr [edx*4 + 0x861e4c] */ { u32 t = R32((u32)(r_edx*4+0x861e4cu)); switch (t) { case 0x861e5cu: goto L_00861e5c; case 0x861e64u: goto L_00861e64; case 0x861e70u: goto L_00861e70; case 0x861e84u: goto L_00861e84; default: UNSUP(0x00861e43, "jump table entry is not a known target"); } }
L_00861e5c:; BB(0x00861e5c);
    /* 00861e5c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00861e5f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861e60: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861e61: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861e62: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00861e64:; BB(0x00861e64);
    /* 00861e64: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00861e66: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00861e68: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00861e6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861e6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861e6d: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861e6e: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00861e70:; BB(0x00861e70);
    /* 00861e70: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00861e72: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00861e74: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00861e77: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00861e7a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00861e7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861e7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861e7f: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861e80: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00861e84:; BB(0x00861e84);
    /* 00861e84: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 00861e86: mov byte ptr [edi], al */ W8((u32)(r_edi), (u8)r_eax);
    /* 00861e88: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00861e8b: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00861e8e: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00861e91: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00861e94: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00861e97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861e98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861e99: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861e9a: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00861e9c:; BB(0x00861e9c);
    /* 00861e9c: lea esi, [ecx + esi - 4] */ r_esi = (u32)(r_ecx+r_esi+0xfffffffcu);
    /* 00861ea0: lea edi, [ecx + edi - 4] */ r_edi = (u32)(r_ecx+r_edi+0xfffffffcu);
    /* 00861ea4: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00861eaa: jne 0x861ed0 */ if (!fZ) goto L_00861ed0;
L_00861eac:; BB(0x00861eac);
    /* 00861eac: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861eaf: and edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861eb2: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861eb5: jb 0x861ec4 */ if (fC) goto L_00861ec4;
L_00861eb7:; BB(0x00861eb7);
    /* 00861eb7: std  */ rt_df = 1;
    /* 00861eb8: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861eba: cld  */ rt_df = 0;
    /* 00861ebb: jmp dword ptr [edx*4 + 0x861fe8] */ { u32 t = R32((u32)(r_edx*4+0x861fe8u)); switch (t) { case 0x861ff8u: goto L_00861ff8; case 0x862000u: goto L_00862000; case 0x862010u: goto L_00862010; case 0x862024u: goto L_00862024; default: UNSUP(0x00861ebb, "jump table entry is not a known target"); } }
L_00861ec4:; BB(0x00861ec4);
    /* 00861ec4: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); fC = (b != 0); }
    /* 00861ec6: jmp dword ptr [ecx*4 + 0x861f98] */ { u32 t = R32((u32)(r_ecx*4+0x861f98u)); switch (t) { case 0x861fccu: goto L_00861fcc; case 0x861fc4u: goto L_00861fc4; case 0x861fbcu: goto L_00861fbc; case 0x861fb4u: goto L_00861fb4; case 0x861facu: goto L_00861fac; case 0x861fa4u: goto L_00861fa4; case 0x861f9cu: goto L_00861f9c; case 0x861fdfu: goto L_00861fdf; default: UNSUP(0x00861ec6, "jump table entry is not a known target"); } }
L_00861ed0:; BB(0x00861ed0);
    /* 00861ed0: mov eax, edi */ r_eax = r_edi;
    /* 00861ed2: mov edx, 3 */ r_edx = 0x3u;
    /* 00861ed7: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861eda: jb 0x861ee8 */ if (fC) goto L_00861ee8;
L_00861edc:; BB(0x00861edc);
    /* 00861edc: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00861edf: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00861ee1: jmp dword ptr [eax*4 + 0x861eec] */ { u32 t = R32((u32)(r_eax*4+0x861eecu)); switch (t) { case 0x861eecu: goto L_00861eec; case 0x861efcu: goto L_00861efc; case 0x861f20u: goto L_00861f20; case 0x861f48u: goto L_00861f48; default: UNSUP(0x00861ee1, "jump table entry is not a known target"); } }
L_00861ee8:; BB(0x00861ee8);
    /* 00861ee8: jmp dword ptr [ecx*4 + 0x861fe8] */ { u32 t = R32((u32)(r_ecx*4+0x861fe8u)); switch (t) { case 0x861ff8u: goto L_00861ff8; case 0x862000u: goto L_00862000; case 0x862010u: goto L_00862010; case 0x862024u: goto L_00862024; default: UNSUP(0x00861ee8, "jump table entry is not a known target"); } }
L_00861eec:; BB(0x00861eec);
    /* 00861eec: pop ds */ UNSUP(0x00861eec, "pop ds");
    /* 00861eed: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 00861eef: nop  */ ;
    /* 00861ef0: cld  */ rt_df = 0;
    /* 00861ef1: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 00861ef2: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 00861ef4: and byte ptr [edi], bl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00861ef6: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
    /* 00861ef8: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00861ef9: pop ds */ UNSUP(0x00861ef9, "pop ds");
    /* 00861efa: xchg byte ptr [eax], al */ { u32 x = R8((u32)(r_eax)); u32 y = (u8)r_eax; W8((u32)(r_eax), y); r_eax = (r_eax & 0xffffff00u) | ((x) & 0xffu); }
L_00861efc:; BB(0x00861efc);
    /* 00861efc: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00861eff: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861f01: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00861f04: sub esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00861f07: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861f0a: sub edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00861f0d: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861f10: jb 0x861ec4 */ if (fC) goto L_00861ec4;
L_00861f12:; BB(0x00861f12);
    /* 00861f12: std  */ rt_df = 1;
    /* 00861f13: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861f15: cld  */ rt_df = 0;
    /* 00861f16: jmp dword ptr [edx*4 + 0x861fe8] */ { u32 t = R32((u32)(r_edx*4+0x861fe8u)); switch (t) { case 0x861ff8u: goto L_00861ff8; case 0x862000u: goto L_00862000; case 0x862010u: goto L_00862010; case 0x862024u: goto L_00862024; default: UNSUP(0x00861f16, "jump table entry is not a known target"); } }
L_00861f20:; BB(0x00861f20);
    /* 00861f20: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00861f23: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861f25: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00861f28: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00861f2b: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861f2e: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00861f31: sub esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00861f34: sub edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00861f37: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861f3a: jb 0x861ec4 */ if (fC) goto L_00861ec4;
L_00861f3c:; BB(0x00861f3c);
    /* 00861f3c: std  */ rt_df = 1;
    /* 00861f3d: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861f3f: cld  */ rt_df = 0;
    /* 00861f40: jmp dword ptr [edx*4 + 0x861fe8] */ { u32 t = R32((u32)(r_edx*4+0x861fe8u)); switch (t) { case 0x861ff8u: goto L_00861ff8; case 0x862000u: goto L_00862000; case 0x862010u: goto L_00862010; case 0x862024u: goto L_00862024; default: UNSUP(0x00861f40, "jump table entry is not a known target"); } }
L_00861f48:; BB(0x00861f48);
    /* 00861f48: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00861f4b: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00861f4d: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00861f50: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00861f53: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00861f56: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00861f59: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00861f5c: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00861f5f: sub esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00861f62: sub edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00861f65: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00861f68: jb 0x861ec4 */ if (fC) goto L_00861ec4;
L_00861f6e:; BB(0x00861f6e);
    /* 00861f6e: std  */ rt_df = 1;
    /* 00861f6f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00861f71: cld  */ rt_df = 0;
    /* 00861f72: jmp dword ptr [edx*4 + 0x861fe8] */ { u32 t = R32((u32)(r_edx*4+0x861fe8u)); switch (t) { case 0x861ff8u: goto L_00861ff8; case 0x862000u: goto L_00862000; case 0x862010u: goto L_00862010; case 0x862024u: goto L_00862024; default: UNSUP(0x00861f72, "jump table entry is not a known target"); } }
L_00861f9c:; BB(0x00861f9c);
    /* 00861f9c: mov eax, dword ptr [esi + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x1cu));
    /* 00861fa0: mov dword ptr [edi + ecx*4 + 0x1c], eax */ W32((u32)(r_edi+r_ecx*4+0x1cu), r_eax);
L_00861fa4:; BB(0x00861fa4);
    /* 00861fa4: mov eax, dword ptr [esi + ecx*4 + 0x18] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x18u));
    /* 00861fa8: mov dword ptr [edi + ecx*4 + 0x18], eax */ W32((u32)(r_edi+r_ecx*4+0x18u), r_eax);
L_00861fac:; BB(0x00861fac);
    /* 00861fac: mov eax, dword ptr [esi + ecx*4 + 0x14] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x14u));
    /* 00861fb0: mov dword ptr [edi + ecx*4 + 0x14], eax */ W32((u32)(r_edi+r_ecx*4+0x14u), r_eax);
L_00861fb4:; BB(0x00861fb4);
    /* 00861fb4: mov eax, dword ptr [esi + ecx*4 + 0x10] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x10u));
    /* 00861fb8: mov dword ptr [edi + ecx*4 + 0x10], eax */ W32((u32)(r_edi+r_ecx*4+0x10u), r_eax);
L_00861fbc:; BB(0x00861fbc);
    /* 00861fbc: mov eax, dword ptr [esi + ecx*4 + 0xc] */ r_eax = R32((u32)(r_esi+r_ecx*4+0xcu));
    /* 00861fc0: mov dword ptr [edi + ecx*4 + 0xc], eax */ W32((u32)(r_edi+r_ecx*4+0xcu), r_eax);
L_00861fc4:; BB(0x00861fc4);
    /* 00861fc4: mov eax, dword ptr [esi + ecx*4 + 8] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00861fc8: mov dword ptr [edi + ecx*4 + 8], eax */ W32((u32)(r_edi+r_ecx*4+0x8u), r_eax);
L_00861fcc:; BB(0x00861fcc);
    /* 00861fcc: mov eax, dword ptr [esi + ecx*4 + 4] */ r_eax = R32((u32)(r_esi+r_ecx*4+0x4u));
    /* 00861fd0: mov dword ptr [edi + ecx*4 + 4], eax */ W32((u32)(r_edi+r_ecx*4+0x4u), r_eax);
    /* 00861fd4: lea eax, [ecx*4] */ r_eax = (u32)(r_ecx*4);
    /* 00861fdb: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00861fdd: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00861fdf:; BB(0x00861fdf);
    /* 00861fdf: jmp dword ptr [edx*4 + 0x861fe8] */ { u32 t = R32((u32)(r_edx*4+0x861fe8u)); switch (t) { case 0x861ff8u: goto L_00861ff8; case 0x862000u: goto L_00862000; case 0x862010u: goto L_00862010; case 0x862024u: goto L_00862024; default: UNSUP(0x00861fdf, "jump table entry is not a known target"); } }
L_00861ff8:; BB(0x00861ff8);
    /* 00861ff8: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00861ffb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00861ffc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00861ffd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00861ffe: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00862000:; BB(0x00862000);
    /* 00862000: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00862003: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00862006: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00862009: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086200a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086200b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086200c: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00862010:; BB(0x00862010);
    /* 00862010: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00862013: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 00862016: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 00862019: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 0086201c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086201f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00862020: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00862021: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00862022: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
L_00862024:; BB(0x00862024);
    /* 00862024: mov al, byte ptr [esi + 3] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x3u))) & 0xffu);
    /* 00862027: mov byte ptr [edi + 3], al */ W8((u32)(r_edi+0x3u), (u8)r_eax);
    /* 0086202a: mov al, byte ptr [esi + 2] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x2u))) & 0xffu);
    /* 0086202d: mov byte ptr [edi + 2], al */ W8((u32)(r_edi+0x2u), (u8)r_eax);
    /* 00862030: mov al, byte ptr [esi + 1] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0x1u))) & 0xffu);
    /* 00862033: mov byte ptr [edi + 1], al */ W8((u32)(r_edi+0x1u), (u8)r_eax);
    /* 00862036: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00862039: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086203a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086203b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0086203c: ret  */ FN_RET(0x00861d00); r_esp += 4; return;
}

