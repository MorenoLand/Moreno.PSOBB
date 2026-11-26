#include "protos.h"

void f_0085c173(void)
{
    FN_ENTER(0x0085c173);
    /* 0085c173: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085c175: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085c176: ret  */ FN_RET(0x0085c173); r_esp += 4; return;
}

void f_0085c177(void)
{
    FN_ENTER(0x0085c177);
    /* 0085c177: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085c17a: jmp 0x85c859 */ f_0085c859(); return;
}

void f_0085c4a8(void) /* ___InternalCxxFrameHandler */
{
    FN_ENTER(0x0085c4a8);
    /* 0085c4a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c4a9: mov ebp, esp */ r_ebp = r_esp;
    /* 0085c4ab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c4ac: mov esi, dword ptr [ebp + 0x18] */ r_esi = R32((u32)(r_ebp+0x18u));
    /* 0085c4af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0085c4b1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c4b2: and eax, 0x1fffffff */ {  u32 a = r_eax; u32 b = 0x1fffffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085c4b7: mov edi, 0x19930520 */ r_edi = 0x19930520u;
    /* 0085c4bc: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c4be: je 0x85c4c5 */ if (fZ) goto L_0085c4c5;
L_0085c4c0:; BB(0x0085c4c0);
    /* 0085c4c0: call 0x85c88e */ r_esp -= 4; W32(r_esp, 0x85c4c5u); f_0085c88e();
L_0085c4c5:; BB(0x0085c4c5);
    /* 0085c4c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085c4c8: test byte ptr [eax + 4], 0x66 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x66u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c4cc: je 0x85c4ed */ if (fZ) goto L_0085c4ed;
L_0085c4ce:; BB(0x0085c4ce);
    /* 0085c4ce: cmp dword ptr [esi + 4], 0 */ {  u32 a = R32((u32)(r_esi+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c4d2: je 0x85c543 */ if (fZ) goto L_0085c543;
L_0085c4d4:; BB(0x0085c4d4);
    /* 0085c4d4: cmp dword ptr [ebp + 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c4d8: jne 0x85c543 */ if (!fZ) goto L_0085c543;
L_0085c4da:; BB(0x0085c4da);
    /* 0085c4da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c4dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c4dd: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c4e0: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c4e3: call 0x85bd0d */ r_esp -= 4; W32(r_esp, 0x85c4e8u); f_0085bd0d();
    /* 0085c4e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085c4eb: jmp 0x85c543 */ goto L_0085c543;
L_0085c4ed:; BB(0x0085c4ed);
    /* 0085c4ed: cmp dword ptr [esi + 0xc], 0 */ {  u32 a = R32((u32)(r_esi+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c4f1: je 0x85c543 */ if (fZ) goto L_0085c543;
L_0085c4f3:; BB(0x0085c4f3);
    /* 0085c4f3: cmp dword ptr [eax], 0xe06d7363 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0xe06d7363u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c4f9: jne 0x85c527 */ if (!fZ) goto L_0085c527;
L_0085c4fb:; BB(0x0085c4fb);
    /* 0085c4fb: cmp dword ptr [eax + 0x14], edi */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085c4fe: jbe 0x85c527 */ if ((fC||fZ)) goto L_0085c527;
L_0085c500:; BB(0x0085c500);
    /* 0085c500: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 0085c503: mov ecx, dword ptr [ecx + 8] */ r_ecx = R32((u32)(r_ecx+0x8u));
    /* 0085c506: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c508: je 0x85c527 */ if (fZ) goto L_0085c527;
L_0085c50a:; BB(0x0085c50a);
    /* 0085c50a: movzx edx, byte ptr [ebp + 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0x24u));
    /* 0085c50e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c50f: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c512: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c515: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c516: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c519: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c51c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c51f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c520: call ecx */ { u32 t = r_ecx; r_esp -= 4; W32(r_esp, 0x85c522u); call_ind(t); }
    /* 0085c522: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085c525: jmp 0x85c546 */ goto L_0085c546;
L_0085c527:; BB(0x0085c527);
    /* 0085c527: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c52a: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c52d: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c530: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c531: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c534: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c537: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c53a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c53b: call 0x85c2a4 */ r_esp -= 4; W32(r_esp, 0x85c540u); f_0085c2a4();
    /* 0085c540: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085c543:; BB(0x0085c543);
    /* 0085c543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085c545: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
L_0085c546:; BB(0x0085c546);
    /* 0085c546: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085c547: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c548: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085c549: ret  */ FN_RET(0x0085c4a8); r_esp += 4; return;
}

void f_0085c54a(void) /* ___crtTlsAlloc@4 */
{
    FN_ENTER(0x0085c54a);
    /* 0085c54a: call dword ptr [0x8f8224] */ { u32 t = R32((u32)(0x8f8224u)); r_esp -= 4; W32(r_esp, 0x85c550u); call_ind(t); }
    /* 0085c550: ret 4 */ FN_RET(0x0085c54a); r_esp += 8; return;
}

void f_0085c553(void) /* __mtterm */
{
    FN_ENTER(0x0085c553);
    /* 0085c553: mov eax, dword ptr [0xa23c68] */ r_eax = R32((u32)(0xa23c68u));
    /* 0085c558: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c55b: je 0x85c56b */ if (fZ) goto L_0085c56b;
L_0085c55d:; BB(0x0085c55d);
    /* 0085c55d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c55e: call dword ptr [0xae7a98] */ { u32 t = R32((u32)(0xae7a98u)); r_esp -= 4; W32(r_esp, 0x85c564u); call_ind(t); }
    /* 0085c564: or dword ptr [0xa23c68], 0xffffffff */ { u32 ad = (u32)(0xa23c68u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085c56b:; BB(0x0085c56b);
    /* 0085c56b: jmp 0x85e470 */ f_0085e470(); return;
}

void f_0085c570(void) /* __initptd */
{
    FN_ENTER(0x0085c570);
    /* 0085c570: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085c574: mov dword ptr [eax + 0x54], 0xa241e0 */ W32((u32)(r_eax+0x54u), 0xa241e0u);
    /* 0085c57b: mov dword ptr [eax + 0x14], 1 */ W32((u32)(r_eax+0x14u), 0x1u);
    /* 0085c582: ret  */ FN_RET(0x0085c570); r_esp += 4; return;
}

void f_0085c583(void) /* __getptd */
{
    FN_ENTER(0x0085c583);
    /* 0085c583: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c584: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c585: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x85c58bu); call_ind(t); }
    /* 0085c58b: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c591: mov ebx, eax */ r_ebx = r_eax;
    /* 0085c593: call dword ptr [0xae7a90] */ { u32 t = R32((u32)(0xae7a90u)); r_esp -= 4; W32(r_esp, 0x85c599u); call_ind(t); }
    /* 0085c599: mov esi, eax */ r_esi = r_eax;
    /* 0085c59b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c59d: jne 0x85c5e8 */ if (!fZ) goto L_0085c5e8;
L_0085c59f:; BB(0x0085c59f);
    /* 0085c59f: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5a4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5a6: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x85c5abu); f_008587c7();
    /* 0085c5ab: mov esi, eax */ r_esi = r_eax;
    /* 0085c5ad: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c5af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c5b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c5b1: je 0x85c5e0 */ if (fZ) goto L_0085c5e0;
L_0085c5b3:; BB(0x0085c5b3);
    /* 0085c5b3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5b4: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c5ba: call dword ptr [0xae7a94] */ { u32 t = R32((u32)(0xae7a94u)); r_esp -= 4; W32(r_esp, 0x85c5c0u); call_ind(t); }
    /* 0085c5c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c5c2: je 0x85c5e0 */ if (fZ) goto L_0085c5e0;
L_0085c5c4:; BB(0x0085c5c4);
    /* 0085c5c4: mov dword ptr [esi + 0x54], 0xa241e0 */ W32((u32)(r_esi+0x54u), 0xa241e0u);
    /* 0085c5cb: mov dword ptr [esi + 0x14], 1 */ W32((u32)(r_esi+0x14u), 0x1u);
    /* 0085c5d2: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x85c5d8u); call_ind(t); }
    /* 0085c5d8: or dword ptr [esi + 4], 0xffffffff */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c5dc: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0085c5de: jmp 0x85c5e8 */ goto L_0085c5e8;
L_0085c5e0:; BB(0x0085c5e0);
    /* 0085c5e0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5e2: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x85c5e7u); f_0085aaf3();
    /* 0085c5e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c5e8:; BB(0x0085c5e8);
    /* 0085c5e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5e9: call dword ptr [0x8f8228] */ { u32 t = R32((u32)(0x8f8228u)); r_esp -= 4; W32(r_esp, 0x85c5efu); call_ind(t); }
    /* 0085c5ef: mov eax, esi */ r_eax = r_esi;
    /* 0085c5f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c5f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085c5f3: ret  */ FN_RET(0x0085c583); r_esp += 4; return;
}

void f_0085c5f4(void) /* __freefls@4 */
{
    FN_ENTER(0x0085c5f4);
    /* 0085c5f4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5f6: push 0x9980f0 */ { u32 v = 0x9980f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c5fb: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85c600u); f_0085e5ac();
    /* 0085c600: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085c603: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085c605: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c607: je 0x85c719 */ if (fZ) goto L_0085c719;
L_0085c60d:; BB(0x0085c60d);
    /* 0085c60d: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0085c610: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c612: je 0x85c61b */ if (fZ) goto L_0085c61b;
L_0085c614:; BB(0x0085c614);
    /* 0085c614: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c615: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c61au); f_00858882();
    /* 0085c61a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c61b:; BB(0x0085c61b);
    /* 0085c61b: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0085c61e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c620: je 0x85c629 */ if (fZ) goto L_0085c629;
L_0085c622:; BB(0x0085c622);
    /* 0085c622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c623: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c628u); f_00858882();
    /* 0085c628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c629:; BB(0x0085c629);
    /* 0085c629: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 0085c62c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c62e: je 0x85c637 */ if (fZ) goto L_0085c637;
L_0085c630:; BB(0x0085c630);
    /* 0085c630: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c631: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c636u); f_00858882();
    /* 0085c636: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c637:; BB(0x0085c637);
    /* 0085c637: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 0085c63a: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c63c: je 0x85c645 */ if (fZ) goto L_0085c645;
L_0085c63e:; BB(0x0085c63e);
    /* 0085c63e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c63f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c644u); f_00858882();
    /* 0085c644: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c645:; BB(0x0085c645);
    /* 0085c645: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0085c648: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c64a: je 0x85c653 */ if (fZ) goto L_0085c653;
L_0085c64c:; BB(0x0085c64c);
    /* 0085c64c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c64d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c652u); f_00858882();
    /* 0085c652: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c653:; BB(0x0085c653);
    /* 0085c653: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 0085c656: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c658: je 0x85c661 */ if (fZ) goto L_0085c661;
L_0085c65a:; BB(0x0085c65a);
    /* 0085c65a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c65b: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c660u); f_00858882();
    /* 0085c660: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c661:; BB(0x0085c661);
    /* 0085c661: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 0085c664: cmp eax, 0xa241e0 */ {  u32 a = r_eax; u32 b = 0xa241e0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c669: je 0x85c672 */ if (fZ) goto L_0085c672;
L_0085c66b:; BB(0x0085c66b);
    /* 0085c66b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c66c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c671u); f_00858882();
    /* 0085c671: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c672:; BB(0x0085c672);
    /* 0085c672: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c674: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85c679u); f_0085e57a();
    /* 0085c679: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c67a: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 0085c67d: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 0085c680: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0085c683: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c685: je 0x85c69a */ if (fZ) goto L_0085c69a;
L_0085c687:; BB(0x0085c687);
    /* 0085c687: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0085c689: jne 0x85c69a */ if (!fZ) goto L_0085c69a;
L_0085c68b:; BB(0x0085c68b);
    /* 0085c68b: cmp eax, dword ptr [0xaf0838] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c691: je 0x85c69a */ if (fZ) goto L_0085c69a;
L_0085c693:; BB(0x0085c693);
    /* 0085c693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c694: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c699u); f_00858882();
    /* 0085c699: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c69a:; BB(0x0085c69a);
    /* 0085c69a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c69e: call 0x85c726 */ r_esp -= 4; W32(r_esp, 0x85c6a3u); f_0085c726();
    /* 0085c6a3: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c6a5: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x85c6aau); f_0085e57a();
    /* 0085c6aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c6ab: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0085c6b2: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 0085c6b5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0085c6b8: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6ba: je 0x85c709 */ if (fZ) goto L_0085c709;
L_0085c6bc:; BB(0x0085c6bc);
    /* 0085c6bc: dec dword ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c6be: cmp dword ptr [eax + 0x2c], edi */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6c1: je 0x85c6c8 */ if (fZ) goto L_0085c6c8;
L_0085c6c3:; BB(0x0085c6c3);
    /* 0085c6c3: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0085c6c6: dec dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085c6c8:; BB(0x0085c6c8);
    /* 0085c6c8: cmp dword ptr [eax + 0x34], edi */ {  u32 a = R32((u32)(r_eax+0x34u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6cb: je 0x85c6d2 */ if (fZ) goto L_0085c6d2;
L_0085c6cd:; BB(0x0085c6cd);
    /* 0085c6cd: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0085c6d0: dec dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085c6d2:; BB(0x0085c6d2);
    /* 0085c6d2: cmp dword ptr [eax + 0x30], edi */ {  u32 a = R32((u32)(r_eax+0x30u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6d5: je 0x85c6dc */ if (fZ) goto L_0085c6dc;
L_0085c6d7:; BB(0x0085c6d7);
    /* 0085c6d7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0085c6da: dec dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085c6dc:; BB(0x0085c6dc);
    /* 0085c6dc: cmp dword ptr [eax + 0x40], edi */ {  u32 a = R32((u32)(r_eax+0x40u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6df: je 0x85c6e6 */ if (fZ) goto L_0085c6e6;
L_0085c6e1:; BB(0x0085c6e1);
    /* 0085c6e1: mov ecx, dword ptr [eax + 0x40] */ r_ecx = R32((u32)(r_eax+0x40u));
    /* 0085c6e4: dec dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_0085c6e6:; BB(0x0085c6e6);
    /* 0085c6e6: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0085c6e9: dec dword ptr [ecx + 0xb4] */ { u32 ad = (u32)(r_ecx+0xb4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c6ef: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6f5: je 0x85c709 */ if (fZ) goto L_0085c709;
L_0085c6f7:; BB(0x0085c6f7);
    /* 0085c6f7: cmp eax, 0xa23c98 */ {  u32 a = r_eax; u32 b = 0xa23c98u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c6fc: je 0x85c709 */ if (fZ) goto L_0085c709;
L_0085c6fe:; BB(0x0085c6fe);
    /* 0085c6fe: cmp dword ptr [eax], edi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c700: jne 0x85c709 */ if (!fZ) goto L_0085c709;
L_0085c702:; BB(0x0085c702);
    /* 0085c702: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c703: call 0x85d7eb */ r_esp -= 4; W32(r_esp, 0x85c708u); f_0085d7eb();
    /* 0085c708: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c709:; BB(0x0085c709);
    /* 0085c709: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c70d: call 0x85c732 */ r_esp -= 4; W32(r_esp, 0x85c712u); f_0085c732();
    /* 0085c712: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c713: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85c718u); f_00858882();
    /* 0085c718: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085c719:; BB(0x0085c719);
    /* 0085c719: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85c71eu); f_0085e5e7();
    /* 0085c71e: ret 4 */ FN_RET(0x0085c5f4); r_esp += 8; return;
}

void f_0085c721(void)
{
    FN_ENTER(0x0085c721);
    /* 0085c721: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085c723: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085c726: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c728: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85c72du); f_0085e4c5();
    /* 0085c72d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c72e: ret  */ FN_RET(0x0085c721); r_esp += 4; return;
}

void f_0085c726(void)
{
    FN_ENTER(0x0085c726);
    /* 0085c726: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c728: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85c72du); f_0085e4c5();
    /* 0085c72d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c72e: ret  */ FN_RET(0x0085c726); r_esp += 4; return;
}

void f_0085c72f(void)
{
    FN_ENTER(0x0085c72f);
    /* 0085c72f: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0085c732: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c734: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85c739u); f_0085e4c5();
    /* 0085c739: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c73a: ret  */ FN_RET(0x0085c72f); r_esp += 4; return;
}

void f_0085c732(void)
{
    FN_ENTER(0x0085c732);
    /* 0085c732: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c734: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x85c739u); f_0085e4c5();
    /* 0085c739: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c73a: ret  */ FN_RET(0x0085c732); r_esp += 4; return;
}

void f_0085c73b(void) /* __freeptd */
{
    FN_ENTER(0x0085c73b);
    /* 0085c73b: mov ecx, dword ptr [0xa23c68] */ r_ecx = R32((u32)(0xa23c68u));
    /* 0085c741: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085c744: je 0x85c769 */ if (fZ) goto L_0085c769;
L_0085c746:; BB(0x0085c746);
    /* 0085c746: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085c74a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c74c: jne 0x85c755 */ if (!fZ) goto L_0085c755;
L_0085c74e:; BB(0x0085c74e);
    /* 0085c74e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c74f: call dword ptr [0xae7a90] */ { u32 t = R32((u32)(0xae7a90u)); r_esp -= 4; W32(r_esp, 0x85c755u); call_ind(t); }
L_0085c755:; BB(0x0085c755);
    /* 0085c755: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c756: call 0x85c5f4 */ r_esp -= 4; W32(r_esp, 0x85c75bu); f_0085c5f4();
    /* 0085c75b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c75d: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c763: call dword ptr [0xae7a94] */ { u32 t = R32((u32)(0xae7a94u)); r_esp -= 4; W32(r_esp, 0x85c769u); call_ind(t); }
L_0085c769:; BB(0x0085c769);
    /* 0085c769: ret  */ FN_RET(0x0085c73b); r_esp += 4; return;
}

void f_0085c76a(void) /* __mtinit */
{
    FN_ENTER(0x0085c76a);
    /* 0085c76a: call 0x85e427 */ r_esp -= 4; W32(r_esp, 0x85c76fu); f_0085e427();
    /* 0085c76f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c771: jne 0x85c77b */ if (!fZ) goto L_0085c77b;
L_0085c773:; BB(0x0085c773);
    /* 0085c773: call 0x85c553 */ r_esp -= 4; W32(r_esp, 0x85c778u); f_0085c553();
    /* 0085c778: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c77a: ret  */ FN_RET(0x0085c76a); r_esp += 4; return;
L_0085c77b:; BB(0x0085c77b);
    /* 0085c77b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c77c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c77d: push 0x998134 */ { u32 v = 0x998134u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c782: call dword ptr [0x8f81f0] */ { u32 t = R32((u32)(0x8f81f0u)); r_esp -= 4; W32(r_esp, 0x85c788u); call_ind(t); }
    /* 0085c788: mov edi, eax */ r_edi = r_eax;
    /* 0085c78a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c78c: je 0x85c7f9 */ if (fZ) goto L_0085c7f9;
L_0085c78e:; BB(0x0085c78e);
    /* 0085c78e: mov esi, dword ptr [0x8f812c] */ r_esi = R32((u32)(0x8f812cu));
    /* 0085c794: push 0x998128 */ { u32 v = 0x998128u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c799: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c79a: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x85c79cu); call_ind(t); }
    /* 0085c79c: push 0x99811c */ { u32 v = 0x99811cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7a2: mov dword ptr [0xae7a8c], eax */ W32((u32)(0xae7a8cu), r_eax);
    /* 0085c7a7: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x85c7a9u); call_ind(t); }
    /* 0085c7a9: push 0x998110 */ { u32 v = 0x998110u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7af: mov dword ptr [0xae7a90], eax */ W32((u32)(0xae7a90u), r_eax);
    /* 0085c7b4: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x85c7b6u); call_ind(t); }
    /* 0085c7b6: push 0x998108 */ { u32 v = 0x998108u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7bc: mov dword ptr [0xae7a94], eax */ W32((u32)(0xae7a94u), r_eax);
    /* 0085c7c1: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x85c7c3u); call_ind(t); }
    /* 0085c7c3: cmp dword ptr [0xae7a90], 0 */ {  u32 a = R32((u32)(0xae7a90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c7ca: mov dword ptr [0xae7a98], eax */ W32((u32)(0xae7a98u), r_eax);
    /* 0085c7cf: jne 0x85c7f9 */ if (!fZ) goto L_0085c7f9;
L_0085c7d1:; BB(0x0085c7d1);
    /* 0085c7d1: mov eax, dword ptr [0x8f8234] */ r_eax = R32((u32)(0x8f8234u));
    /* 0085c7d6: mov dword ptr [0xae7a90], eax */ W32((u32)(0xae7a90u), r_eax);
    /* 0085c7db: mov eax, dword ptr [0x8f8230] */ r_eax = R32((u32)(0x8f8230u));
    /* 0085c7e0: mov dword ptr [0xae7a94], eax */ W32((u32)(0xae7a94u), r_eax);
    /* 0085c7e5: mov eax, dword ptr [0x8f822c] */ r_eax = R32((u32)(0x8f822cu));
    /* 0085c7ea: mov dword ptr [0xae7a8c], 0x85c54a */ W32((u32)(0xae7a8cu), 0x85c54au);
    /* 0085c7f4: mov dword ptr [0xae7a98], eax */ W32((u32)(0xae7a98u), r_eax);
L_0085c7f9:; BB(0x0085c7f9);
    /* 0085c7f9: push 0x85c5f4 */ { u32 v = 0x85c5f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c7fe: call dword ptr [0xae7a8c] */ { u32 t = R32((u32)(0xae7a8cu)); r_esp -= 4; W32(r_esp, 0x85c804u); call_ind(t); }
    /* 0085c804: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c807: mov dword ptr [0xa23c68], eax */ W32((u32)(0xa23c68u), r_eax);
    /* 0085c80c: je 0x85c84f */ if (fZ) goto L_0085c84f;
L_0085c80e:; BB(0x0085c80e);
    /* 0085c80e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085c810: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0085c815: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085c816: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c817: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x85c81cu); f_008587c7();
    /* 0085c81c: mov esi, eax */ r_esi = r_eax;
    /* 0085c81e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c820: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c821: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c822: je 0x85c84f */ if (fZ) goto L_0085c84f;
L_0085c824:; BB(0x0085c824);
    /* 0085c824: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c825: push dword ptr [0xa23c68] */ { u32 v = R32((u32)(0xa23c68u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c82b: call dword ptr [0xae7a94] */ { u32 t = R32((u32)(0xae7a94u)); r_esp -= 4; W32(r_esp, 0x85c831u); call_ind(t); }
    /* 0085c831: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c833: je 0x85c84f */ if (fZ) goto L_0085c84f;
L_0085c835:; BB(0x0085c835);
    /* 0085c835: mov dword ptr [esi + 0x54], 0xa241e0 */ W32((u32)(r_esi+0x54u), 0xa241e0u);
    /* 0085c83c: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
    /* 0085c83f: call dword ptr [0x8f8214] */ { u32 t = R32((u32)(0x8f8214u)); r_esp -= 4; W32(r_esp, 0x85c845u); call_ind(t); }
    /* 0085c845: or dword ptr [esi + 4], 0xffffffff */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c849: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 0085c84b: mov eax, edi */ r_eax = r_edi;
    /* 0085c84d: jmp 0x85c856 */ goto L_0085c856;
L_0085c84f:; BB(0x0085c84f);
    /* 0085c84f: call 0x85c553 */ r_esp -= 4; W32(r_esp, 0x85c854u); f_0085c553();
    /* 0085c854: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085c856:; BB(0x0085c856);
    /* 0085c856: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085c857: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c858: ret  */ FN_RET(0x0085c76a); r_esp += 4; return;
}

void f_0085c87e(void)
{
    FN_ENTER(0x0085c87e);
    /* 0085c87e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085c880: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085c881: ret  */ FN_RET(0x0085c87e); r_esp += 4; return;
}

void f_0085c882(void)
{
    FN_ENTER(0x0085c882);
    /* 0085c882: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085c885: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c889: jmp 0x863578 */ f_00863578(); return;
}

void f_0085c88e(void) /* sub_85C88E */
{
    FN_ENTER(0x0085c88e);
    /* 0085c88e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c890: push 0x998158 */ { u32 v = 0x998158u; r_esp -= 4; W32(r_esp, v); }
    /* 0085c895: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x85c89au); f_0085e5ac();
    /* 0085c89a: mov eax, dword ptr [0xa23c6c] */ r_eax = R32((u32)(0xa23c6cu));
    /* 0085c89f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c8a1: je 0x85c8b6 */ if (fZ) goto L_0085c8b6;
L_0085c8a3:; BB(0x0085c8a3);
    /* 0085c8a3: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c8a7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85c8a9u); call_ind(t); }
    /* 0085c8a9: jmp 0x85c8b2 */ goto L_0085c8b2;
L_0085c8b2:; BB(0x0085c8b2);
    /* 0085c8b2: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085c8b6:; BB(0x0085c8b6);
    /* 0085c8b6: jmp 0x85c859 */ f_0085c859(); return;
}

void f_0085c8ab(void)
{
    FN_ENTER(0x0085c8ab);
    /* 0085c8ab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085c8ad: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085c8ae: ret  */ FN_RET(0x0085c8ab); r_esp += 4; return;
}

void f_0085c8af(void)
{
    FN_ENTER(0x0085c8af);
    /* 0085c8af: mov esp, dword ptr [ebp - 0x18] */ r_esp = R32((u32)(r_ebp+0xffffffe8u));
    /* 0085c8b2: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085c8b6: jmp 0x85c859 */ f_0085c859(); return;
}

void f_0085c8c0(void) /* __CallSettingFrame@12 */
{
    FN_ENTER(0x0085c8c0);
    /* 0085c8c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8c1: mov ebp, esp */ r_ebp = r_esp;
    /* 0085c8c3: sub esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085c8c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8c7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8c8: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085c8cb: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c8ce: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085c8d1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085c8d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8d5: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c8d8: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0085c8db: mov ebp, dword ptr [ebp - 4] */ r_ebp = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085c8de: call 0x857999 */ r_esp -= 4; W32(r_esp, 0x85c8e3u); f_00857999();
    /* 0085c8e3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8e5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x85c8e7u); call_ind(t); }
    /* 0085c8e7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085c8e8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c8e9: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0085c8eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085c8ec: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 0085c8ef: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c8f0: mov ebp, ebx */ r_ebp = r_ebx;
    /* 0085c8f2: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c8f8: jne 0x85c8ff */ if (!fZ) goto L_0085c8ff;
L_0085c8fa:; BB(0x0085c8fa);
    /* 0085c8fa: mov ecx, 2 */ r_ecx = 0x2u;
L_0085c8ff:; BB(0x0085c8ff);
    /* 0085c8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c900: call 0x857999 */ r_esp -= 4; W32(r_esp, 0x85c905u); f_00857999();
    /* 0085c905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085c906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c907: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085c908: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c909: ret 0xc */ FN_RET(0x0085c8c0); r_esp += 16; return;
}

void f_0085c8f3(void)
{
    FN_ENTER(0x0085c8f3);
    /* 0085c8f3: stc  */ fC = 1;
    /* 0085c8f4: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085c8f6: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 0085c8f8: jne 0x85c8ff */ if (!fZ) goto L_0085c8ff;
L_0085c8fa:; BB(0x0085c8fa);
    /* 0085c8fa: mov ecx, 2 */ r_ecx = 0x2u;
L_0085c8ff:; BB(0x0085c8ff);
    /* 0085c8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c900: call 0x857999 */ r_esp -= 4; W32(r_esp, 0x85c905u); f_00857999();
    /* 0085c905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085c906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c907: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085c908: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c909: ret 0xc */ FN_RET(0x0085c8f3); r_esp += 16; return;
}

void f_0085c8fa(void)
{
    FN_ENTER(0x0085c8fa);
    /* 0085c8fa: mov ecx, 2 */ r_ecx = 0x2u;
    /* 0085c8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c900: call 0x857999 */ r_esp -= 4; W32(r_esp, 0x85c905u); f_00857999();
    /* 0085c905: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085c906: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c907: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085c908: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c909: ret 0xc */ FN_RET(0x0085c8fa); r_esp += 16; return;
}

void f_0085c90c(void) /* __forcdecpt */
{
    FN_ENTER(0x0085c90c);
    /* 0085c90c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c90d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 0085c911: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0085c914: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c915: call 0x8599c1 */ r_esp -= 4; W32(r_esp, 0x85c91au); f_008599c1();
    /* 0085c91a: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c91d: jmp 0x85c92b */ goto L_0085c92b;
L_0085c91f:; BB(0x0085c91f);
    /* 0085c91f: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085c920: movsx eax, byte ptr [esi] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi));
    /* 0085c923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c924: call 0x858286 */ r_esp -= 4; W32(r_esp, 0x85c929u); f_00858286();
    /* 0085c929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
L_0085c92b:; BB(0x0085c92b);
    /* 0085c92b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c92c: jne 0x85c91f */ if (!fZ) goto L_0085c91f;
L_0085c92e:; BB(0x0085c92e);
    /* 0085c92e: mov al, byte ptr [esi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0085c930: mov cl, byte ptr [0xa23f94] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0xa23f94u))) & 0xffu);
    /* 0085c936: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0085c938: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0085c939:; BB(0x0085c939);
    /* 0085c939: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0085c93b: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0085c93d: mov al, cl */ r_eax = (r_eax & 0xffffff00u) | (((u8)r_ecx) & 0xffu);
    /* 0085c93f: mov cl, byte ptr [esi] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_esi))) & 0xffu);
    /* 0085c941: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085c942: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c944: jne 0x85c939 */ if (!fZ) goto L_0085c939;
L_0085c946:; BB(0x0085c946);
    /* 0085c946: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085c947: ret  */ FN_RET(0x0085c90c); r_esp += 4; return;
}

void f_0085c948(void) /* __cropzeros */
{
    FN_ENTER(0x0085c948);
    /* 0085c948: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085c94c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c94d: mov bl, byte ptr [0xa23f94] */ r_ebx = (r_ebx & 0xffffff00u) | ((R8((u32)(0xa23f94u))) & 0xffu);
    /* 0085c953: jmp 0x85c95a */ goto L_0085c95a;
L_0085c955:; BB(0x0085c955);
    /* 0085c955: cmp cl, bl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c957: je 0x85c960 */ if (fZ) goto L_0085c960;
L_0085c959:; BB(0x0085c959);
    /* 0085c959: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085c95a:; BB(0x0085c95a);
    /* 0085c95a: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0085c95c: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c95e: jne 0x85c955 */ if (!fZ) goto L_0085c955;
L_0085c960:; BB(0x0085c960);
    /* 0085c960: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0085c962: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c963: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c965: je 0x85c991 */ if (fZ) goto L_0085c991;
L_0085c967:; BB(0x0085c967);
    /* 0085c967: jmp 0x85c974 */ goto L_0085c974;
L_0085c969:; BB(0x0085c969);
    /* 0085c969: cmp cl, 0x65 */ {  u32 a = (u8)r_ecx; u32 b = 0x65u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c96c: je 0x85c97a */ if (fZ) goto L_0085c97a;
L_0085c96e:; BB(0x0085c96e);
    /* 0085c96e: cmp cl, 0x45 */ {  u32 a = (u8)r_ecx; u32 b = 0x45u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c971: je 0x85c97a */ if (fZ) goto L_0085c97a;
L_0085c973:; BB(0x0085c973);
    /* 0085c973: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085c974:; BB(0x0085c974);
    /* 0085c974: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0085c976: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c978: jne 0x85c969 */ if (!fZ) goto L_0085c969;
L_0085c97a:; BB(0x0085c97a);
    /* 0085c97a: mov edx, eax */ r_edx = r_eax;
L_0085c97c:; BB(0x0085c97c);
    /* 0085c97c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085c97d: cmp byte ptr [eax], 0x30 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c980: je 0x85c97c */ if (fZ) goto L_0085c97c;
L_0085c982:; BB(0x0085c982);
    /* 0085c982: cmp byte ptr [eax], bl */ {  u32 a = R8((u32)(r_eax)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085c984: jne 0x85c987 */ if (!fZ) goto L_0085c987;
L_0085c986:; BB(0x0085c986);
    /* 0085c986: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0085c987:; BB(0x0085c987);
    /* 0085c987: mov cl, byte ptr [edx] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 0085c989: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c98a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0085c98b: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c98d: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0085c98f: jne 0x85c987 */ if (!fZ) goto L_0085c987;
L_0085c991:; BB(0x0085c991);
    /* 0085c991: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085c992: ret  */ FN_RET(0x0085c948); r_esp += 4; return;
}

void f_0085c993(void) /* __positive */
{
    FN_ENTER(0x0085c993);
    /* 0085c993: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0085c997: fld qword ptr [eax] */ FPUSH(R_F64((u32)(r_eax)));
    /* 0085c999: fcomp qword ptr [0x998168] */ fx_compare(ST(0), R_F64((u32)(0x998168u))); FPOP();
    /* 0085c99f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0085c9a1: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085c9a4: jne 0x85c9aa */ if (!fZ) goto L_0085c9aa;
L_0085c9a6:; BB(0x0085c9a6);
    /* 0085c9a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085c9a8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085c9a9: ret  */ FN_RET(0x0085c993); r_esp += 4; return;
L_0085c9aa:; BB(0x0085c9aa);
    /* 0085c9aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c9ac: ret  */ FN_RET(0x0085c993); r_esp += 4; return;
}

void f_0085c9ad(void) /* __fassign */
{
    FN_ENTER(0x0085c9ad);
    /* 0085c9ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9ae: mov ebp, esp */ r_ebp = r_esp;
    /* 0085c9b0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9b1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9b2: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085c9b6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085c9b9: je 0x85c9d6 */ if (fZ) goto L_0085c9d6;
L_0085c9bb:; BB(0x0085c9bb);
    /* 0085c9bb: lea eax, [ebp - 8] */ r_eax = (u32)(r_ebp+0xfffffff8u);
    /* 0085c9be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9bf: call 0x866ac9 */ r_esp -= 4; W32(r_esp, 0x85c9c4u); f_00866ac9();
    /* 0085c9c4: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085c9c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c9c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c9c9: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0085c9cc: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0085c9ce: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085c9d1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0085c9d4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c9d5: ret  */ FN_RET(0x0085c9ad); r_esp += 4; return;
L_0085c9d6:; BB(0x0085c9d6);
    /* 0085c9d6: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0085c9d9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9da: call 0x866b06 */ r_esp -= 4; W32(r_esp, 0x85c9dfu); f_00866b06();
    /* 0085c9df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085c9e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c9e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085c9e4: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 0085c9e7: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0085c9e9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085c9ea: ret  */ FN_RET(0x0085c9ad); r_esp += 4; return;
}

void f_0085c9eb(void) /* __shift */
{
    FN_ENTER(0x0085c9eb);
    /* 0085c9eb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085c9ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9ee: mov esi, eax */ r_esi = r_eax;
    /* 0085c9f0: je 0x85ca06 */ if (fZ) goto L_0085ca06;
L_0085c9f2:; BB(0x0085c9f2);
    /* 0085c9f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9f3: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85c9f8u); f_0085d760();
    /* 0085c9f8: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085c9f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9fa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9fb: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085c9fd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085c9fe: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x85ca03u); f_00858c80();
    /* 0085ca03: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0085ca06:; BB(0x0085ca06);
    /* 0085ca06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ca07: ret  */ FN_RET(0x0085c9eb); r_esp += 4; return;
}

void f_0085ca08(void) /* __cftoe2 */
{
    FN_ENTER(0x0085ca08);
    /* 0085ca08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085ca09: mov ebp, esp */ r_ebp = r_esp;
    /* 0085ca0b: cmp byte ptr [ebp + 0x10], 0 */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ca0f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ca10: mov esi, eax */ r_esi = r_eax;
    /* 0085ca12: je 0x85ca31 */ if (fZ) goto L_0085ca31;
L_0085ca14:; BB(0x0085ca14);
    /* 0085ca14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085ca16: cmp dword ptr [ebp + 8], eax */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ca19: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ca1a: setg al */ r_eax = (r_eax & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0085ca1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca1f: cmp dword ptr [esi], 0x2d */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ca22: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085ca25: mov edi, eax */ r_edi = r_eax;
    /* 0085ca27: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca29: mov eax, ecx */ r_eax = r_ecx;
    /* 0085ca2b: call 0x85c9eb */ r_esp -= 4; W32(r_esp, 0x85ca30u); f_0085c9eb();
    /* 0085ca30: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0085ca31:; BB(0x0085ca31);
    /* 0085ca31: cmp dword ptr [esi], 0x2d */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ca34: mov eax, ebx */ r_eax = r_ebx;
    /* 0085ca36: jne 0x85ca3e */ if (!fZ) goto L_0085ca3e;
L_0085ca38:; BB(0x0085ca38);
    /* 0085ca38: mov byte ptr [ebx], 0x2d */ W8((u32)(r_ebx), 0x2du);
    /* 0085ca3b: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
L_0085ca3e:; BB(0x0085ca3e);
    /* 0085ca3e: cmp dword ptr [ebp + 8], 0 */ {  u32 a = R32((u32)(r_ebp+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ca42: jle 0x85ca55 */ if ((fZ||fS!=fO)) goto L_0085ca55;
L_0085ca44:; BB(0x0085ca44);
    /* 0085ca44: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0085ca47: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0085ca49: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0085ca4b: mov eax, ecx */ r_eax = r_ecx;
    /* 0085ca4d: mov cl, byte ptr [0xa23f94] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(0xa23f94u))) & 0xffu);
    /* 0085ca53: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
L_0085ca55:; BB(0x0085ca55);
    /* 0085ca55: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca57: cmp byte ptr [ebp + 0x10], cl */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085ca5a: push 0x998170 */ { u32 v = 0x998170u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ca5f: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085ca62: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca64: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca67: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ca68: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x85ca6du); f_0085e2f0();
    /* 0085ca6d: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ca71: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ca72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ca73: mov ecx, eax */ r_ecx = r_eax;
    /* 0085ca75: je 0x85ca7a */ if (fZ) goto L_0085ca7a;
L_0085ca77:; BB(0x0085ca77);
    /* 0085ca77: mov byte ptr [ecx], 0x45 */ W8((u32)(r_ecx), 0x45u);
L_0085ca7a:; BB(0x0085ca7a);
    /* 0085ca7a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085ca7d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca7e: cmp byte ptr [eax], 0x30 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 0085ca81: je 0x85cab1 */ if (fZ) goto L_0085cab1;
L_0085ca83:; BB(0x0085ca83);
    /* 0085ca83: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0085ca86: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 0085ca87: jns 0x85ca8e */ if (!fS) goto L_0085ca8e;
L_0085ca89:; BB(0x0085ca89);
    /* 0085ca89: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085ca8b: mov byte ptr [ecx], 0x2d */ W8((u32)(r_ecx), 0x2du);
L_0085ca8e:; BB(0x0085ca8e);
    /* 0085ca8e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca8f: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085ca92: jl 0x85ca9e */ if ((fS!=fO)) goto L_0085ca9e;
L_0085ca94:; BB(0x0085ca94);
    /* 0085ca94: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085ca95: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ca97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ca98: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085ca98, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085ca98, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085ca9a: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085ca9c: mov eax, edx */ r_eax = r_edx;
L_0085ca9e:; BB(0x0085ca9e);
    /* 0085ca9e: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ca9f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085caa2: jl 0x85caae */ if ((fS!=fO)) goto L_0085caae;
L_0085caa4:; BB(0x0085caa4);
    /* 0085caa4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085caa5: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0085caa7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085caa8: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x0085caa8, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0085caa8, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0085caaa: add byte ptr [ecx], al */ { u32 ad = (u32)(r_ecx);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0085caac: mov eax, edx */ r_eax = r_edx;
L_0085caae:; BB(0x0085caae);
    /* 0085caae: add byte ptr [ecx + 1], al */ { u32 ad = (u32)(r_ecx+0x1u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
L_0085cab1:; BB(0x0085cab1);
    /* 0085cab1: mov eax, ebx */ r_eax = r_ebx;
    /* 0085cab3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cab4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085cab5: ret  */ FN_RET(0x0085ca08); r_esp += 4; return;
}

void f_0085cab6(void) /* __cftoe */
{
    FN_ENTER(0x0085cab6);
    /* 0085cab6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cab7: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cab9: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085cabc: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085cac1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cac2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085cac5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cac6: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0085cac9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085caca: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cacd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cace: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085cad1: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cad4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cad6: call 0x866c74 */ r_esp -= 4; W32(r_esp, 0x85cadbu); f_00866c74();
    /* 0085cadb: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0085cade: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085cae1: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cae4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cae5: lea eax, [esi + 1] */ r_eax = (u32)(r_esi+0x1u);
    /* 0085cae8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cae9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085caeb: cmp dword ptr [ebp - 0x2c], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085caef: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085caf2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085caf4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085caf6: setg cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((!fZ&&fS==fO)) ? 1 : 0) & 0xffu);
    /* 0085caf9: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085cafb: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085cafd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cafe: call 0x866b43 */ r_esp -= 4; W32(r_esp, 0x85cb03u); f_00866b43();
    /* 0085cb03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cb05: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cb08: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cb0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cb0c: call 0x85ca08 */ r_esp -= 4; W32(r_esp, 0x85cb11u); f_0085ca08();
    /* 0085cb11: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085cb14: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085cb17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cb18: mov eax, ebx */ r_eax = r_ebx;
    /* 0085cb1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085cb1b: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85cb20u); f_0085e419();
    /* 0085cb20: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085cb21: ret  */ FN_RET(0x0085cab6); r_esp += 4; return;
}

void f_0085cb22(void) /* __cftof2 */
{
    FN_ENTER(0x0085cb22);
    /* 0085cb22: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cb23: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cb25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cb26: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cb27: mov esi, eax */ r_esi = r_eax;
    /* 0085cb29: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0085cb2c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085cb2d: cmp byte ptr [ebp + 0x10], 0 */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085cb31: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cb32: je 0x85cb4f */ if (fZ) goto L_0085cb4f;
L_0085cb34:; BB(0x0085cb34);
    /* 0085cb34: cmp eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cb37: jne 0x85cb4f */ if (!fZ) goto L_0085cb4f;
L_0085cb39:; BB(0x0085cb39);
    /* 0085cb39: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085cb3b: cmp dword ptr [esi], 0x2d */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cb3e: sete cl */ r_ecx = (r_ecx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085cb41: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085cb43: add ecx, dword ptr [ebp + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x8u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085cb46: mov eax, ecx */ r_eax = r_ecx;
    /* 0085cb48: mov byte ptr [eax], 0x30 */ W8((u32)(r_eax), 0x30u);
    /* 0085cb4b: mov byte ptr [eax + 1], 0 */ W8((u32)(r_eax+0x1u), 0x0u);
L_0085cb4f:; BB(0x0085cb4f);
    /* 0085cb4f: cmp dword ptr [esi], 0x2d */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cb52: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0085cb55: jne 0x85cb5b */ if (!fZ) goto L_0085cb5b;
L_0085cb57:; BB(0x0085cb57);
    /* 0085cb57: mov byte ptr [ebx], 0x2d */ W8((u32)(r_ebx), 0x2du);
    /* 0085cb5a: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085cb5b:; BB(0x0085cb5b);
    /* 0085cb5b: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 0085cb5e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085cb60: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085cb61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085cb63: jg 0x85cb72 */ if ((!fZ&&fS==fO)) goto L_0085cb72;
L_0085cb65:; BB(0x0085cb65);
    /* 0085cb65: mov eax, ebx */ r_eax = r_ebx;
    /* 0085cb67: call 0x85c9eb */ r_esp -= 4; W32(r_esp, 0x85cb6cu); f_0085c9eb();
    /* 0085cb6c: mov byte ptr [ebx], 0x30 */ W8((u32)(r_ebx), 0x30u);
    /* 0085cb6f: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085cb70: jmp 0x85cb74 */ goto L_0085cb74;
L_0085cb72:; BB(0x0085cb72);
    /* 0085cb72: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085cb74:; BB(0x0085cb74);
    /* 0085cb74: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085cb78: jle 0x85cbb6 */ if ((fZ||fS!=fO)) goto L_0085cbb6;
L_0085cb7a:; BB(0x0085cb7a);
    /* 0085cb7a: mov eax, ebx */ r_eax = r_ebx;
    /* 0085cb7c: call 0x85c9eb */ r_esp -= 4; W32(r_esp, 0x85cb81u); f_0085c9eb();
    /* 0085cb81: mov al, byte ptr [0xa23f94] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xa23f94u))) & 0xffu);
    /* 0085cb86: mov byte ptr [ebx], al */ W8((u32)(r_ebx), (u8)r_eax);
    /* 0085cb88: mov esi, dword ptr [esi + 4] */ r_esi = R32((u32)(r_esi+0x4u));
    /* 0085cb8b: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085cb8c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085cb8e: jge 0x85cbb6 */ if ((fS==fO)) goto L_0085cbb6;
L_0085cb90:; BB(0x0085cb90);
    /* 0085cb90: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085cb92: cmp byte ptr [ebp + 0x10], 0 */ {  u32 a = R8((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085cb96: jne 0x85cb9d */ if (!fZ) goto L_0085cb9d;
L_0085cb98:; BB(0x0085cb98);
    /* 0085cb98: cmp dword ptr [ebp + 0xc], esi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085cb9b: jl 0x85cba0 */ if ((fS!=fO)) goto L_0085cba0;
L_0085cb9d:; BB(0x0085cb9d);
    /* 0085cb9d: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
L_0085cba0:; BB(0x0085cba0);
    /* 0085cba0: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 0085cba3: mov eax, ebx */ r_eax = r_ebx;
    /* 0085cba5: call 0x85c9eb */ r_esp -= 4; W32(r_esp, 0x85cbaau); f_0085c9eb();
    /* 0085cbaa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbab: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbae: call 0x85f580 */ r_esp -= 4; W32(r_esp, 0x85cbb3u); f_0085f580();
    /* 0085cbb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0085cbb6:; BB(0x0085cbb6);
    /* 0085cbb6: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085cbb9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085cbba: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cbbb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085cbbc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085cbbd: ret  */ FN_RET(0x0085cb22); r_esp += 4; return;
}

void f_0085cbbe(void) /* __cftof */
{
    FN_ENTER(0x0085cbbe);
    /* 0085cbbe: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbbf: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cbc1: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085cbc4: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085cbc9: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085cbcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbcd: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0085cbd0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbd1: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cbd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbd5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085cbd8: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cbdb: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cbdd: call 0x866c74 */ r_esp -= 4; W32(r_esp, 0x85cbe2u); f_00866c74();
    /* 0085cbe2: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 0085cbe5: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cbe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbe9: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0085cbec: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085cbee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085cbf1: cmp dword ptr [ebp - 0x2c], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cbf5: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085cbf8: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085cbfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cbfc: call 0x866b43 */ r_esp -= 4; W32(r_esp, 0x85cc01u); f_00866b43();
    /* 0085cc01: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc04: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cc07: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cc0a: call 0x85cb22 */ r_esp -= 4; W32(r_esp, 0x85cc0fu); f_0085cb22();
    /* 0085cc0f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085cc12: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0085cc15: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085cc18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cc19: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85cc1eu); f_0085e419();
    /* 0085cc1e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085cc1f: ret  */ FN_RET(0x0085cbbe); r_esp += 4; return;
}

void f_0085cc20(void) /* __cftog */
{
    FN_ENTER(0x0085cc20);
    /* 0085cc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc21: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cc23: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085cc26: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085cc2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc2c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc2d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085cc30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc31: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0085cc34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc35: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc39: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085cc3c: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cc3f: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cc41: call 0x866c74 */ r_esp -= 4; W32(r_esp, 0x85cc46u); f_00866c74();
    /* 0085cc46: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0085cc49: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 0085cc4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085cc4e: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085cc4f: cmp dword ptr [ebp - 0x2c], 0x2d */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cc53: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085cc56: add eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085cc59: mov edi, eax */ r_edi = r_eax;
    /* 0085cc5b: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cc5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc61: call 0x866b43 */ r_esp -= 4; W32(r_esp, 0x85cc66u); f_00866b43();
    /* 0085cc66: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0085cc69: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085cc6c: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085cc6d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085cc6f: setl cl */ r_ecx = (r_ecx & 0xffffff00u) | ((((fS!=fO)) ? 1 : 0) & 0xffu);
    /* 0085cc72: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085cc75: jl 0x85cc99 */ if ((fS!=fO)) goto L_0085cc99;
L_0085cc77:; BB(0x0085cc77);
    /* 0085cc77: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085cc79: jge 0x85cc99 */ if ((fS==fO)) goto L_0085cc99;
L_0085cc7b:; BB(0x0085cc7b);
    /* 0085cc7b: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cc7d: je 0x85cc89 */ if (fZ) goto L_0085cc89;
L_0085cc7f:; BB(0x0085cc7f);
    /* 0085cc7f: mov al, byte ptr [edi] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0085cc81: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085cc82: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cc84: jne 0x85cc7f */ if (!fZ) goto L_0085cc7f;
L_0085cc86:; BB(0x0085cc86);
    /* 0085cc86: mov byte ptr [edi - 2], al */ W8((u32)(r_edi+0xfffffffeu), (u8)r_eax);
L_0085cc89:; BB(0x0085cc89);
    /* 0085cc89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc8c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cc8f: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cc92: call 0x85cb22 */ r_esp -= 4; W32(r_esp, 0x85cc97u); f_0085cb22();
    /* 0085cc97: jmp 0x85ccaa */ goto L_0085ccaa;
L_0085cc99:; BB(0x0085cc99);
    /* 0085cc99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cc9b: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cc9e: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085cca1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cca2: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 0085cca5: call 0x85ca08 */ r_esp -= 4; W32(r_esp, 0x85ccaau); f_0085ca08();
L_0085ccaa:; BB(0x0085ccaa);
    /* 0085ccaa: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0085ccad: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085ccb0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085ccb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ccb2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085ccb3: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85ccb8u); f_0085e419();
    /* 0085ccb8: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085ccb9: ret  */ FN_RET(0x0085cc20); r_esp += 4; return;
}

void f_0085ccba(void) /* __cfltcvt */
{
    FN_ENTER(0x0085ccba);
    /* 0085ccba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085ccbb: mov ebp, esp */ r_ebp = r_esp;
    /* 0085ccbd: cmp dword ptr [ebp + 0x10], 0x65 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ccc1: je 0x85ccf5 */ if (fZ) goto L_0085ccf5;
L_0085ccc3:; BB(0x0085ccc3);
    /* 0085ccc3: cmp dword ptr [ebp + 0x10], 0x45 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x45u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ccc7: je 0x85ccf5 */ if (fZ) goto L_0085ccf5;
L_0085ccc9:; BB(0x0085ccc9);
    /* 0085ccc9: cmp dword ptr [ebp + 0x10], 0x66 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x66u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cccd: jne 0x85cce2 */ if (!fZ) goto L_0085cce2;
L_0085cccf:; BB(0x0085cccf);
    /* 0085cccf: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccd2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccd5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccd8: call 0x85cbbe */ r_esp -= 4; W32(r_esp, 0x85ccddu); f_0085cbbe();
    /* 0085ccdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085cce0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085cce1: ret  */ FN_RET(0x0085ccba); r_esp += 4; return;
L_0085cce2:; BB(0x0085cce2);
    /* 0085cce2: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cce5: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cce8: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cceb: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccee: call 0x85cc20 */ r_esp -= 4; W32(r_esp, 0x85ccf3u); f_0085cc20();
    /* 0085ccf3: jmp 0x85cd06 */ goto L_0085cd06;
L_0085ccf5:; BB(0x0085ccf5);
    /* 0085ccf5: push dword ptr [ebp + 0x18] */ { u32 v = R32((u32)(r_ebp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccf8: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccfb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ccfe: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cd01: call 0x85cab6 */ r_esp -= 4; W32(r_esp, 0x85cd06u); f_0085cab6();
L_0085cd06:; BB(0x0085cd06);
    /* 0085cd06: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085cd09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085cd0a: ret  */ FN_RET(0x0085ccba); r_esp += 4; return;
}

void f_0085cd0b(void) /* __setdefaultprecision */
{
    FN_ENTER(0x0085cd0b);
    /* 0085cd0b: push 0x30000 */ { u32 v = 0x30000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd10: push 0x10000 */ { u32 v = 0x10000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd15: call 0x866e3b */ r_esp -= 4; W32(r_esp, 0x85cd1au); f_00866e3b();
    /* 0085cd1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cd1b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cd1c: ret  */ FN_RET(0x0085cd0b); r_esp += 4; return;
}

void f_0085cd86(void) /* __flsbuf */
{
    FN_ENTER(0x0085cd86);
    /* 0085cd86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd87: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cd89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd8a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cd8b: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 0085cd8e: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085cd91: test al, 0x82 */ {  u32 a = (u8)r_eax; u32 b = 0x82u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cd93: mov ebx, dword ptr [esi + 0x10] */ r_ebx = R32((u32)(r_esi+0x10u));
    /* 0085cd96: je 0x85ce92 */ if (fZ) goto L_0085ce92;
L_0085cd9c:; BB(0x0085cd9c);
    /* 0085cd9c: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cd9e: jne 0x85ce92 */ if (!fZ) goto L_0085ce92;
L_0085cda4:; BB(0x0085cda4);
    /* 0085cda4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cda6: je 0x85cdbf */ if (fZ) goto L_0085cdbf;
L_0085cda8:; BB(0x0085cda8);
    /* 0085cda8: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cdac: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cdae: je 0x85ce92 */ if (fZ) goto L_0085ce92;
L_0085cdb4:; BB(0x0085cdb4);
    /* 0085cdb4: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0085cdb7: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085cdba: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0085cdbc: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_0085cdbf:; BB(0x0085cdbf);
    /* 0085cdbf: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0085cdc2: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cdc6: and dword ptr [ebp + 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cdca: and eax, 0xffffffef */ {  u32 a = r_eax; u32 b = 0xffffffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085cdcd: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0085cdd0: test ax, 0x10c */ {  u32 a = (u16)r_eax; u32 b = 0x10cu; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085cdd4: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 0085cdd7: jne 0x85cdfb */ if (!fZ) goto L_0085cdfb;
L_0085cdd9:; BB(0x0085cdd9);
    /* 0085cdd9: cmp esi, 0xa23a00 */ {  u32 a = r_esi; u32 b = 0xa23a00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cddf: je 0x85cde9 */ if (fZ) goto L_0085cde9;
L_0085cde1:; BB(0x0085cde1);
    /* 0085cde1: cmp esi, 0xa23a20 */ {  u32 a = r_esi; u32 b = 0xa23a20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cde7: jne 0x85cdf4 */ if (!fZ) goto L_0085cdf4;
L_0085cde9:; BB(0x0085cde9);
    /* 0085cde9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cdea: call 0x866e95 */ r_esp -= 4; W32(r_esp, 0x85cdefu); f_00866e95();
    /* 0085cdef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cdf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cdf2: jne 0x85cdfb */ if (!fZ) goto L_0085cdfb;
L_0085cdf4:; BB(0x0085cdf4);
    /* 0085cdf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cdf5: call 0x866e51 */ r_esp -= 4; W32(r_esp, 0x85cdfau); f_00866e51();
    /* 0085cdfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085cdfb:; BB(0x0085cdfb);
    /* 0085cdfb: test word ptr [esi + 0xc], 0x108 */ {  u32 a = R16((u32)(r_esi+0xcu)); u32 b = 0x108u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085ce01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce02: je 0x85ce68 */ if (fZ) goto L_0085ce68;
L_0085ce04:; BB(0x0085ce04);
    /* 0085ce04: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0085ce07: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 0085ce09: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 0085ce0c: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 0085ce0e: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0085ce11: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0085ce13: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0085ce14: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085ce16: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 0085ce19: jle 0x85ce28 */ if ((fZ||fS!=fO)) goto L_0085ce28;
L_0085ce1b:; BB(0x0085ce1b);
    /* 0085ce1b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce1d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce1e: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x85ce23u); f_00862354();
    /* 0085ce23: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 0085ce26: jmp 0x85ce5b */ goto L_0085ce5b;
L_0085ce28:; BB(0x0085ce28);
    /* 0085ce28: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ce2b: je 0x85ce46 */ if (fZ) goto L_0085ce46;
L_0085ce2d:; BB(0x0085ce2d);
    /* 0085ce2d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0085ce2f: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0085ce32: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 0085ce39: mov eax, ebx */ r_eax = r_ebx;
    /* 0085ce3b: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085ce3e: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 0085ce41: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 0085ce44: jmp 0x85ce4b */ goto L_0085ce4b;
L_0085ce46:; BB(0x0085ce46);
    /* 0085ce46: mov eax, 0xa24120 */ r_eax = 0xa24120u;
L_0085ce4b:; BB(0x0085ce4b);
    /* 0085ce4b: test byte ptr [eax + 4], 0x20 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085ce4f: je 0x85ce5e */ if (fZ) goto L_0085ce5e;
L_0085ce51:; BB(0x0085ce51);
    /* 0085ce51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce56: call 0x8648cf */ r_esp -= 4; W32(r_esp, 0x85ce5bu); f_008648cf();
L_0085ce5b:; BB(0x0085ce5b);
    /* 0085ce5b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085ce5e:; BB(0x0085ce5e);
    /* 0085ce5e: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0085ce61: mov cl, byte ptr [ebp + 8] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 0085ce64: mov byte ptr [eax], cl */ W8((u32)(r_eax), (u8)r_ecx);
    /* 0085ce66: jmp 0x85ce7c */ goto L_0085ce7c;
L_0085ce68:; BB(0x0085ce68);
    /* 0085ce68: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0085ce6a: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085ce6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce6c: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 0085ce6f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ce71: call 0x862354 */ r_esp -= 4; W32(r_esp, 0x85ce76u); f_00862354();
    /* 0085ce76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085ce79: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
L_0085ce7c:; BB(0x0085ce7c);
    /* 0085ce7c: cmp dword ptr [ebp + 0xc], edi */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085ce7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085ce80: je 0x85ce88 */ if (fZ) goto L_0085ce88;
L_0085ce82:; BB(0x0085ce82);
    /* 0085ce82: or dword ptr [esi + 0xc], 0x20 */ { u32 ad = (u32)(r_esi+0xcu);  u32 a = R32(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ce86: jmp 0x85ce98 */ goto L_0085ce98;
L_0085ce88:; BB(0x0085ce88);
    /* 0085ce88: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0085ce8b: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085ce90: jmp 0x85ce9b */ goto L_0085ce9b;
L_0085ce92:; BB(0x0085ce92);
    /* 0085ce92: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0085ce95: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
L_0085ce98:; BB(0x0085ce98);
    /* 0085ce98: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_0085ce9b:; BB(0x0085ce9b);
    /* 0085ce9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085ce9c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085ce9d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085ce9e: ret  */ FN_RET(0x0085cd86); r_esp += 4; return;
}

void f_0085cf26(void) /* __woutput */
{
    FN_ENTER(0x0085cf26);
    /* 0085cf26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf27: lea ebp, [esp - 0x3d8] */ r_ebp = (u32)(r_esp+0xfffffc28u);
    /* 0085cf2e: sub esp, 0x458 */ {  u32 a = r_esp; u32 b = 0x458u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0085cf34: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 0085cf39: mov edx, dword ptr [ebp + 0x3e4] */ r_edx = R32((u32)(r_ebp+0x3e4u));
    /* 0085cf3f: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 0085cf45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085cf47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf48: mov bx, word ptr [edx] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_edx))) & 0xffffu);
    /* 0085cf4b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0085cf4d: cmp bx, ax */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_eax; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085cf50: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0085cf53: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0085cf56: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0085cf59: je 0x85d71f */ if (fZ) goto L_0085d71f;
L_0085cf5f:; BB(0x0085cf5f);
    /* 0085cf5f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf61: jmp 0x85cf66 */ goto L_0085cf66;
L_0085cf63:; BB(0x0085cf63);
    /* 0085cf63: mov ecx, dword ptr [ebp - 0x68] */ r_ecx = R32((u32)(r_ebp+0xffffff98u));
L_0085cf66:; BB(0x0085cf66);
    /* 0085cf66: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf68: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085cf69: add dword ptr [ebp + 0x3e4], edi */ { u32 ad = (u32)(r_ebp+0x3e4u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cf6f: cmp dword ptr [ebp - 0x40], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085cf73: jl 0x85d71d */ if ((fS!=fO)) goto L_0085d71d;
L_0085cf79:; BB(0x0085cf79);
    /* 0085cf79: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cf7c: cmp bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a - b) & 0xffffu;  fC = (a < b); }
    /* 0085cf7f: jb 0x85cf96 */ if (fC) goto L_0085cf96;
L_0085cf81:; BB(0x0085cf81);
    /* 0085cf81: cmp bx, 0x78 */ {  u32 a = (u16)r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085cf85: ja 0x85cf96 */ if ((!fC&&!fZ)) goto L_0085cf96;
L_0085cf87:; BB(0x0085cf87);
    /* 0085cf87: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085cf8a: movsx eax, byte ptr [eax + 0x998908] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x998908u));
    /* 0085cf91: and eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0085cf94: jmp 0x85cf98 */ goto L_0085cf98;
L_0085cf96:; BB(0x0085cf96);
    /* 0085cf96: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0085cf98:; BB(0x0085cf98);
    /* 0085cf98: movsx eax, byte ptr [ecx + eax*8 + 0x998928] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*8+0x998928u));
    /* 0085cfa0: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0085cfa2: sar eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085cfa5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cfa6: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085cfa8: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 0085cfab: ja 0x85d70b */ if ((!fC&&!fZ)) goto L_0085d70b;
L_0085cfb1:; BB(0x0085cfb1);
    /* 0085cfb1: jmp dword ptr [eax*4 + 0x85d736] */ { u32 t = R32((u32)(r_eax*4+0x85d736u)); switch (t) { case 0x85d16du: goto L_0085d16d; case 0x85cfb8u: goto L_0085cfb8; case 0x85cfd5u: goto L_0085cfd5; case 0x85d01fu: goto L_0085d01f; case 0x85d061u: goto L_0085d061; case 0x85d06au: goto L_0085d06a; case 0x85d0a9u: goto L_0085d0a9; case 0x85d188u: goto L_0085d188; default: UNSUP(0x0085cfb1, "jump table entry is not a known target"); } }
L_0085cfb8:; BB(0x0085cfb8);
    /* 0085cfb8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085cfba: or dword ptr [ebp - 0x34], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cfbe: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0085cfc1: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0085cfc4: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0085cfc7: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0085cfca: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0085cfcd: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0085cfd0: jmp 0x85d70b */ goto L_0085d70b;
L_0085cfd5:; BB(0x0085cfd5);
    /* 0085cfd5: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085cfd8: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085cfda: je 0x85d017 */ if (fZ) goto L_0085d017;
L_0085cfdc:; BB(0x0085cfdc);
    /* 0085cfdc: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085cfdf: je 0x85d00e */ if (fZ) goto L_0085d00e;
L_0085cfe1:; BB(0x0085cfe1);
    /* 0085cfe1: sub eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085cfe4: je 0x85d005 */ if (fZ) goto L_0085d005;
L_0085cfe6:; BB(0x0085cfe6);
    /* 0085cfe6: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085cfe8: je 0x85cffc */ if (fZ) goto L_0085cffc;
L_0085cfea:; BB(0x0085cfea);
    /* 0085cfea: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085cfed: jne 0x85d70b */ if (!fZ) goto L_0085d70b;
L_0085cff3:; BB(0x0085cff3);
    /* 0085cff3: or dword ptr [ebp - 0x30], 8 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cff7: jmp 0x85d70b */ goto L_0085d70b;
L_0085cffc:; BB(0x0085cffc);
    /* 0085cffc: or dword ptr [ebp - 0x30], 4 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d000: jmp 0x85d70b */ goto L_0085d70b;
L_0085d005:; BB(0x0085d005);
    /* 0085d005: or dword ptr [ebp - 0x30], 1 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d009: jmp 0x85d70b */ goto L_0085d70b;
L_0085d00e:; BB(0x0085d00e);
    /* 0085d00e: or byte ptr [ebp - 0x30], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085d012: jmp 0x85d70b */ goto L_0085d70b;
L_0085d017:; BB(0x0085d017);
    /* 0085d017: or dword ptr [ebp - 0x30], edi */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d01a: jmp 0x85d70b */ goto L_0085d70b;
L_0085d01f:; BB(0x0085d01f);
    /* 0085d01f: cmp bx, 0x2a */ {  u32 a = (u16)r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d023: jne 0x85d04c */ if (!fZ) goto L_0085d04c;
L_0085d025:; BB(0x0085d025);
    /* 0085d025: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d02c: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d032: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d035: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d037: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0085d03a: jge 0x85d70b */ if ((fS==fO)) goto L_0085d70b;
L_0085d040:; BB(0x0085d040);
    /* 0085d040: or dword ptr [ebp - 0x30], 4 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d044: neg dword ptr [ebp - 0x48] */ { u32 ad = (u32)(r_ebp+0xffffffb8u); u32 x = R32(ad); u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d047: jmp 0x85d70b */ goto L_0085d70b;
L_0085d04c:; BB(0x0085d04c);
    /* 0085d04c: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0085d04f: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 0085d052: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085d055: lea eax, [ecx + eax*2 - 0x30] */ r_eax = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 0085d059: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0085d05c: jmp 0x85d70b */ goto L_0085d70b;
L_0085d061:; BB(0x0085d061);
    /* 0085d061: and dword ptr [ebp - 0x34], 0 */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d065: jmp 0x85d70b */ goto L_0085d70b;
L_0085d06a:; BB(0x0085d06a);
    /* 0085d06a: cmp bx, 0x2a */ {  u32 a = (u16)r_ebx; u32 b = 0x2au; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d06e: jne 0x85d094 */ if (!fZ) goto L_0085d094;
L_0085d070:; BB(0x0085d070);
    /* 0085d070: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d077: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d07d: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d080: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d082: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0085d085: jge 0x85d70b */ if ((fS==fO)) goto L_0085d70b;
L_0085d08b:; BB(0x0085d08b);
    /* 0085d08b: or dword ptr [ebp - 0x34], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffccu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d08f: jmp 0x85d70b */ goto L_0085d70b;
L_0085d094:; BB(0x0085d094);
    /* 0085d094: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0085d097: movzx ecx, bx */ r_ecx = (u32)(u16)r_ebx;
    /* 0085d09a: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 0085d09d: lea eax, [ecx + eax*2 - 0x30] */ r_eax = (u32)(r_ecx+r_eax*2+0xffffffd0u);
    /* 0085d0a1: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0085d0a4: jmp 0x85d70b */ goto L_0085d70b;
L_0085d0a9:; BB(0x0085d0a9);
    /* 0085d0a9: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085d0ac: cmp eax, 0x49 */ {  u32 a = r_eax; u32 b = 0x49u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d0af: je 0x85d0de */ if (fZ) goto L_0085d0de;
L_0085d0b1:; BB(0x0085d0b1);
    /* 0085d0b1: cmp eax, 0x68 */ {  u32 a = r_eax; u32 b = 0x68u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d0b4: je 0x85d0d6 */ if (fZ) goto L_0085d0d6;
L_0085d0b6:; BB(0x0085d0b6);
    /* 0085d0b6: cmp eax, 0x6c */ {  u32 a = r_eax; u32 b = 0x6cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d0b9: je 0x85d0cd */ if (fZ) goto L_0085d0cd;
L_0085d0bb:; BB(0x0085d0bb);
    /* 0085d0bb: cmp eax, 0x77 */ {  u32 a = r_eax; u32 b = 0x77u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d0be: jne 0x85d70b */ if (!fZ) goto L_0085d70b;
L_0085d0c4:; BB(0x0085d0c4);
    /* 0085d0c4: or byte ptr [ebp - 0x2f], 8 */ { u32 ad = (u32)(r_ebp+0xffffffd1u);  u32 a = R8(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085d0c8: jmp 0x85d70b */ goto L_0085d70b;
L_0085d0cd:; BB(0x0085d0cd);
    /* 0085d0cd: or dword ptr [ebp - 0x30], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d0d1: jmp 0x85d70b */ goto L_0085d70b;
L_0085d0d6:; BB(0x0085d0d6);
    /* 0085d0d6: or dword ptr [ebp - 0x30], esi */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d0d9: jmp 0x85d70b */ goto L_0085d70b;
L_0085d0de:; BB(0x0085d0de);
    /* 0085d0de: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 0085d0e4: mov ax, word ptr [eax] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0085d0e7: cmp ax, 0x36 */ {  u32 a = (u16)r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d0eb: jne 0x85d10a */ if (!fZ) goto L_0085d10a;
L_0085d0ed:; BB(0x0085d0ed);
    /* 0085d0ed: mov ecx, dword ptr [ebp + 0x3e4] */ r_ecx = R32((u32)(r_ebp+0x3e4u));
    /* 0085d0f3: cmp word ptr [ecx + 2], 0x34 */ {  u32 a = R16((u32)(r_ecx+0x2u)); u32 b = 0x34u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d0f8: jne 0x85d10a */ if (!fZ) goto L_0085d10a;
L_0085d0fa:; BB(0x0085d0fa);
    /* 0085d0fa: add dword ptr [ebp + 0x3e4], 4 */ { u32 ad = (u32)(r_ebp+0x3e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d101: or byte ptr [ebp - 0x2f], 0x80 */ { u32 ad = (u32)(r_ebp+0xffffffd1u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085d105: jmp 0x85d70b */ goto L_0085d70b;
L_0085d10a:; BB(0x0085d10a);
    /* 0085d10a: cmp ax, 0x33 */ {  u32 a = (u16)r_eax; u32 b = 0x33u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d10e: jne 0x85d12d */ if (!fZ) goto L_0085d12d;
L_0085d110:; BB(0x0085d110);
    /* 0085d110: mov ecx, dword ptr [ebp + 0x3e4] */ r_ecx = R32((u32)(r_ebp+0x3e4u));
    /* 0085d116: cmp word ptr [ecx + 2], 0x32 */ {  u32 a = R16((u32)(r_ecx+0x2u)); u32 b = 0x32u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d11b: jne 0x85d12d */ if (!fZ) goto L_0085d12d;
L_0085d11d:; BB(0x0085d11d);
    /* 0085d11d: add dword ptr [ebp + 0x3e4], 4 */ { u32 ad = (u32)(r_ebp+0x3e4u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d124: and byte ptr [ebp - 0x2f], 0x7f */ { u32 ad = (u32)(r_ebp+0xffffffd1u);  u32 a = R8(ad); u32 b = 0x7fu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 0085d128: jmp 0x85d70b */ goto L_0085d70b;
L_0085d12d:; BB(0x0085d12d);
    /* 0085d12d: cmp ax, 0x64 */ {  u32 a = (u16)r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d131: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d137:; BB(0x0085d137);
    /* 0085d137: cmp ax, 0x69 */ {  u32 a = (u16)r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d13b: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d141:; BB(0x0085d141);
    /* 0085d141: cmp ax, 0x6f */ {  u32 a = (u16)r_eax; u32 b = 0x6fu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d145: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d14b:; BB(0x0085d14b);
    /* 0085d14b: cmp ax, 0x75 */ {  u32 a = (u16)r_eax; u32 b = 0x75u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d14f: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d155:; BB(0x0085d155);
    /* 0085d155: cmp ax, 0x78 */ {  u32 a = (u16)r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d159: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d15f:; BB(0x0085d15f);
    /* 0085d15f: cmp ax, 0x58 */ {  u32 a = (u16)r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d163: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d169:; BB(0x0085d169);
    /* 0085d169: and dword ptr [ebp - 0x68], 0 */ { u32 ad = (u32)(r_ebp+0xffffff98u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085d16d:; BB(0x0085d16d);
    /* 0085d16d: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 0085d173: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d174: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 0085d177: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0085d17e: call 0x85ce9f */ r_esp -= 4; W32(r_esp, 0x85d183u); f_0085ce9f();
    /* 0085d183: jmp 0x85d70a */ goto L_0085d70a;
L_0085d188:; BB(0x0085d188);
    /* 0085d188: movzx eax, bx */ r_eax = (u32)(u16)r_ebx;
    /* 0085d18b: cmp eax, 0x67 */ {  u32 a = r_eax; u32 b = 0x67u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d18e: jg 0x85d425 */ if ((!fZ&&fS==fO)) goto L_0085d425;
L_0085d194:; BB(0x0085d194);
    /* 0085d194: cmp eax, 0x65 */ {  u32 a = r_eax; u32 b = 0x65u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d197: jge 0x85d250 */ if ((fS==fO)) goto L_0085d250;
L_0085d19d:; BB(0x0085d19d);
    /* 0085d19d: cmp eax, 0x58 */ {  u32 a = r_eax; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d1a0: jg 0x85d2c1 */ if ((!fZ&&fS==fO)) goto L_0085d2c1;
L_0085d1a6:; BB(0x0085d1a6);
    /* 0085d1a6: je 0x85d49a */ if (fZ) goto L_0085d49a;
L_0085d1ac:; BB(0x0085d1ac);
    /* 0085d1ac: sub eax, 0x43 */ {  u32 a = r_eax; u32 b = 0x43u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d1af: je 0x85d270 */ if (fZ) goto L_0085d270;
L_0085d1b5:; BB(0x0085d1b5);
    /* 0085d1b5: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d1b7: je 0x85d247 */ if (fZ) goto L_0085d247;
L_0085d1bd:; BB(0x0085d1bd);
    /* 0085d1bd: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d1bf: je 0x85d247 */ if (fZ) goto L_0085d247;
L_0085d1c5:; BB(0x0085d1c5);
    /* 0085d1c5: sub eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d1c8: jne 0x85d5f4 */ if (!fZ) goto L_0085d5f4;
L_0085d1ce:; BB(0x0085d1ce);
    /* 0085d1ce: test word ptr [ebp - 0x30], 0x830 */ {  u32 a = R16((u32)(r_ebp+0xffffffd0u)); u32 b = 0x830u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d1d4: jne 0x85d1d9 */ if (!fZ) goto L_0085d1d9;
L_0085d1d6:; BB(0x0085d1d6);
    /* 0085d1d6: or dword ptr [ebp - 0x30], esi */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085d1d9:; BB(0x0085d1d9);
    /* 0085d1d9: mov edx, dword ptr [ebp - 0x34] */ r_edx = R32((u32)(r_ebp+0xffffffccu));
    /* 0085d1dc: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d1df: jne 0x85d1e6 */ if (!fZ) goto L_0085d1e6;
L_0085d1e1:; BB(0x0085d1e1);
    /* 0085d1e1: mov edx, 0x7fffffff */ r_edx = 0x7fffffffu;
L_0085d1e6:; BB(0x0085d1e6);
    /* 0085d1e6: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d1ed: test byte ptr [ebp - 0x30], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d1f1: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d1f7: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d1fa: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0085d1fd: je 0x85d464 */ if (fZ) goto L_0085d464;
L_0085d203:; BB(0x0085d203);
    /* 0085d203: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d205: jne 0x85d20f */ if (!fZ) goto L_0085d20f;
L_0085d207:; BB(0x0085d207);
    /* 0085d207: mov eax, dword ptr [0xa23fa8] */ r_eax = R32((u32)(0xa23fa8u));
    /* 0085d20c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0085d20f:; BB(0x0085d20f);
    /* 0085d20f: and dword ptr [ebp - 0x38], 0 */ { u32 ad = (u32)(r_ebp+0xffffffc8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d213: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d215: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0085d218: jle 0x85d5f4 */ if ((fZ||fS!=fO)) goto L_0085d5f4;
L_0085d21e:; BB(0x0085d21e);
    /* 0085d21e: mov cl, byte ptr [eax] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax))) & 0xffu);
    /* 0085d220: test cl, cl */ {  u32 a = (u8)r_ecx; u32 b = (u8)r_ecx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d222: je 0x85d5f4 */ if (fZ) goto L_0085d5f4;
L_0085d228:; BB(0x0085d228);
    /* 0085d228: mov esi, dword ptr [0xa23fa0] */ r_esi = R32((u32)(0xa23fa0u));
    /* 0085d22e: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 0085d231: test byte ptr [esi + ecx*2 + 1], 0x80 */ {  u32 a = R8((u32)(r_esi+r_ecx*2+0x1u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d236: je 0x85d239 */ if (fZ) goto L_0085d239;
L_0085d238:; BB(0x0085d238);
    /* 0085d238: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085d239:; BB(0x0085d239);
    /* 0085d239: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085d23a: inc dword ptr [ebp - 0x38] */ { u32 ad = (u32)(r_ebp+0xffffffc8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d23d: cmp dword ptr [ebp - 0x38], edx */ {  u32 a = R32((u32)(r_ebp+0xffffffc8u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d240: jl 0x85d21e */ if ((fS!=fO)) goto L_0085d21e;
L_0085d242:; BB(0x0085d242);
    /* 0085d242: jmp 0x85d5f4 */ goto L_0085d5f4;
L_0085d247:; BB(0x0085d247);
    /* 0085d247: mov dword ptr [ebp - 0x6c], 1 */ W32((u32)(r_ebp+0xffffff94u), 0x1u);
    /* 0085d24e: add ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0085d250:; BB(0x0085d250);
    /* 0085d250: or dword ptr [ebp - 0x30], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d254: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d258: lea esi, [ebp - 0x2c] */ r_esi = (u32)(r_ebp+0xffffffd4u);
    /* 0085d25b: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0085d25e: jge 0x85d367 */ if ((fS==fO)) goto L_0085d367;
L_0085d264:; BB(0x0085d264);
    /* 0085d264: mov dword ptr [ebp - 0x34], 6 */ W32((u32)(r_ebp+0xffffffccu), 0x6u);
    /* 0085d26b: jmp 0x85d3af */ goto L_0085d3af;
L_0085d270:; BB(0x0085d270);
    /* 0085d270: test word ptr [ebp - 0x30], 0x830 */ {  u32 a = R16((u32)(r_ebp+0xffffffd0u)); u32 b = 0x830u; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d276: jne 0x85d27b */ if (!fZ) goto L_0085d27b;
L_0085d278:; BB(0x0085d278);
    /* 0085d278: or dword ptr [ebp - 0x30], esi */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085d27b:; BB(0x0085d27b);
    /* 0085d27b: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d282: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d288: movzx eax, word ptr [eax - 4] */ r_eax = (u32)R16((u32)(r_eax+0xfffffffcu));
    /* 0085d28c: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0085d28e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085d28f: test byte ptr [ebp - 0x30], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d293: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0085d296: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0085d299: je 0x85d306 */ if (fZ) goto L_0085d306;
L_0085d29b:; BB(0x0085d29b);
    /* 0085d29b: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d2a1: mov byte ptr [ebp - 0x54], al */ W8((u32)(r_ebp+0xffffffacu), (u8)r_eax);
    /* 0085d2a4: lea eax, [ebp - 0x54] */ r_eax = (u32)(r_ebp+0xffffffacu);
    /* 0085d2a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d2a8: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085d2ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d2ac: mov byte ptr [ebp - 0x53], 0 */ W8((u32)(r_ebp+0xffffffadu), 0x0u);
    /* 0085d2b0: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x85d2b5u); f_00866f7f();
    /* 0085d2b5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085d2b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d2ba: jge 0x85d30a */ if ((fS==fO)) goto L_0085d30a;
L_0085d2bc:; BB(0x0085d2bc);
    /* 0085d2bc: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 0085d2bf: jmp 0x85d30a */ goto L_0085d30a;
L_0085d2c1:; BB(0x0085d2c1);
    /* 0085d2c1: sub eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d2c4: je 0x85d318 */ if (fZ) goto L_0085d318;
L_0085d2c6:; BB(0x0085d2c6);
    /* 0085d2c6: sub eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d2c9: je 0x85d27b */ if (fZ) goto L_0085d27b;
L_0085d2cb:; BB(0x0085d2cb);
    /* 0085d2cb: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d2cc: jne 0x85d5f4 */ if (!fZ) goto L_0085d5f4;
L_0085d2d2:; BB(0x0085d2d2);
    /* 0085d2d2: or dword ptr [ebp - 0x30], 0x40 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_0085d2d6:; BB(0x0085d2d6);
    /* 0085d2d6: mov dword ptr [ebp - 0x38], 0xa */ W32((u32)(r_ebp+0xffffffc8u), 0xau);
L_0085d2dd:; BB(0x0085d2dd);
    /* 0085d2dd: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0085d2e0: mov esi, 0x8000 */ r_esi = 0x8000u;
    /* 0085d2e5: test esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d2e7: je 0x85d510 */ if (fZ) goto L_0085d510;
L_0085d2ed:; BB(0x0085d2ed);
    /* 0085d2ed: mov ecx, dword ptr [ebp + 0x3e8] */ r_ecx = R32((u32)(r_ebp+0x3e8u));
    /* 0085d2f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0085d2f5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0085d2f8: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085d2fb: mov dword ptr [ebp + 0x3e8], ecx */ W32((u32)(r_ebp+0x3e8u), r_ecx);
    /* 0085d301: jmp 0x85d53e */ goto L_0085d53e;
L_0085d306:; BB(0x0085d306);
    /* 0085d306: mov word ptr [ebp - 0x2c], ax */ W16((u32)(r_ebp+0xffffffd4u), (u16)r_eax);
L_0085d30a:; BB(0x0085d30a);
    /* 0085d30a: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0085d30d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0085d310: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0085d313: jmp 0x85d5f4 */ goto L_0085d5f4;
L_0085d318:; BB(0x0085d318);
    /* 0085d318: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d31f: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d325: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d328: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d32a: je 0x85d359 */ if (fZ) goto L_0085d359;
L_0085d32c:; BB(0x0085d32c);
    /* 0085d32c: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0085d32f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d331: je 0x85d359 */ if (fZ) goto L_0085d359;
L_0085d333:; BB(0x0085d333);
    /* 0085d333: test byte ptr [ebp - 0x2f], 8 */ {  u32 a = R8((u32)(r_ebp+0xffffffd1u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d337: movsx eax, word ptr [eax] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 0085d33a: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0085d33d: je 0x85d350 */ if (fZ) goto L_0085d350;
L_0085d33f:; BB(0x0085d33f);
    /* 0085d33f: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085d340: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085d342: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085d344: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0085d34b: jmp 0x85d5f1 */ goto L_0085d5f1;
L_0085d350:; BB(0x0085d350);
    /* 0085d350: and dword ptr [ebp - 0x4c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffb4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d354: jmp 0x85d5f1 */ goto L_0085d5f1;
L_0085d359:; BB(0x0085d359);
    /* 0085d359: mov eax, dword ptr [0xa23fa8] */ r_eax = R32((u32)(0xa23fa8u));
    /* 0085d35e: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0085d361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d362: jmp 0x85d41a */ goto L_0085d41a;
L_0085d367:; BB(0x0085d367);
    /* 0085d367: jne 0x85d378 */ if (!fZ) goto L_0085d378;
L_0085d369:; BB(0x0085d369);
    /* 0085d369: cmp bx, 0x67 */ {  u32 a = (u16)r_ebx; u32 b = 0x67u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d36d: jne 0x85d3af */ if (!fZ) goto L_0085d3af;
L_0085d36f:; BB(0x0085d36f);
    /* 0085d36f: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0085d376: jmp 0x85d3af */ goto L_0085d3af;
L_0085d378:; BB(0x0085d378);
    /* 0085d378: mov eax, 0x200 */ r_eax = 0x200u;
    /* 0085d37d: cmp dword ptr [ebp - 0x34], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d380: jle 0x85d385 */ if ((fZ||fS!=fO)) goto L_0085d385;
L_0085d382:; BB(0x0085d382);
    /* 0085d382: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_0085d385:; BB(0x0085d385);
    /* 0085d385: mov edi, 0xa3 */ r_edi = 0xa3u;
    /* 0085d38a: cmp dword ptr [ebp - 0x34], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d38d: jle 0x85d3af */ if ((fZ||fS!=fO)) goto L_0085d3af;
L_0085d38f:; BB(0x0085d38f);
    /* 0085d38f: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0085d392: add eax, 0x15d */ {  u32 a = r_eax; u32 b = 0x15du; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085d397: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d398: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x85d39du); f_00859c55();
    /* 0085d39d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d39f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d3a0: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 0085d3a3: je 0x85d3ac */ if (fZ) goto L_0085d3ac;
L_0085d3a5:; BB(0x0085d3a5);
    /* 0085d3a5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0085d3a8: mov esi, eax */ r_esi = r_eax;
    /* 0085d3aa: jmp 0x85d3af */ goto L_0085d3af;
L_0085d3ac:; BB(0x0085d3ac);
    /* 0085d3ac: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
L_0085d3af:; BB(0x0085d3af);
    /* 0085d3af: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d3b5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0085d3b7: push dword ptr [ebp - 0x6c] */ { u32 v = R32((u32)(r_ebp+0xffffff94u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d3ba: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085d3bd: push dword ptr [ebp - 0x34] */ { u32 v = R32((u32)(r_ebp+0xffffffccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d3c0: mov dword ptr [ebp + 0x3e8], eax */ W32((u32)(r_ebp+0x3e8u), r_eax);
    /* 0085d3c6: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d3c9: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0085d3cc: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 0085d3cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d3d0: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 0085d3d3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d3d5: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0085d3d8: call dword ptr [0xa23c70] */ { u32 t = R32((u32)(0xa23c70u)); r_esp -= 4; W32(r_esp, 0x85d3deu); call_ind(t); }
    /* 0085d3de: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0085d3e1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085d3e4: and edi, 0x80 */ {  u32 a = r_edi; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0085d3ea: je 0x85d3fa */ if (fZ) goto L_0085d3fa;
L_0085d3ec:; BB(0x0085d3ec);
    /* 0085d3ec: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d3f0: jne 0x85d3fa */ if (!fZ) goto L_0085d3fa;
L_0085d3f2:; BB(0x0085d3f2);
    /* 0085d3f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d3f3: call dword ptr [0xa23c7c] */ { u32 t = R32((u32)(0xa23c7cu)); r_esp -= 4; W32(r_esp, 0x85d3f9u); call_ind(t); }
    /* 0085d3f9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d3fa:; BB(0x0085d3fa);
    /* 0085d3fa: cmp bx, 0x67 */ {  u32 a = (u16)r_ebx; u32 b = 0x67u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d3fe: jne 0x85d40c */ if (!fZ) goto L_0085d40c;
L_0085d400:; BB(0x0085d400);
    /* 0085d400: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d402: jne 0x85d40c */ if (!fZ) goto L_0085d40c;
L_0085d404:; BB(0x0085d404);
    /* 0085d404: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d405: call dword ptr [0xa23c74] */ { u32 t = R32((u32)(0xa23c74u)); r_esp -= 4; W32(r_esp, 0x85d40bu); call_ind(t); }
    /* 0085d40b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d40c:; BB(0x0085d40c);
    /* 0085d40c: cmp byte ptr [esi], 0x2d */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x2du; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085d40f: jne 0x85d419 */ if (!fZ) goto L_0085d419;
L_0085d411:; BB(0x0085d411);
    /* 0085d411: or byte ptr [ebp - 0x2f], 1 */ { u32 ad = (u32)(r_ebp+0xffffffd1u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085d415: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085d416: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
L_0085d419:; BB(0x0085d419);
    /* 0085d419: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_0085d41a:; BB(0x0085d41a);
    /* 0085d41a: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x85d41fu); f_0085d760();
    /* 0085d41f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d420: jmp 0x85d5f1 */ goto L_0085d5f1;
L_0085d425:; BB(0x0085d425);
    /* 0085d425: sub eax, 0x69 */ {  u32 a = r_eax; u32 b = 0x69u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d428: je 0x85d2d2 */ if (fZ) goto L_0085d2d2;
L_0085d42e:; BB(0x0085d42e);
    /* 0085d42e: sub eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d431: je 0x85d4e0 */ if (fZ) goto L_0085d4e0;
L_0085d437:; BB(0x0085d437);
    /* 0085d437: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d438: je 0x85d4c6 */ if (fZ) goto L_0085d4c6;
L_0085d43e:; BB(0x0085d43e);
    /* 0085d43e: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d43f: je 0x85d493 */ if (fZ) goto L_0085d493;
L_0085d441:; BB(0x0085d441);
    /* 0085d441: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d444: je 0x85d1d9 */ if (fZ) goto L_0085d1d9;
L_0085d44a:; BB(0x0085d44a);
    /* 0085d44a: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d44c: je 0x85d2d6 */ if (fZ) goto L_0085d2d6;
L_0085d452:; BB(0x0085d452);
    /* 0085d452: sub eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d455: jne 0x85d5f4 */ if (!fZ) goto L_0085d5f4;
L_0085d45b:; BB(0x0085d45b);
    /* 0085d45b: mov dword ptr [ebp - 0x64], 0x27 */ W32((u32)(r_ebp+0xffffff9cu), 0x27u);
    /* 0085d462: jmp 0x85d49d */ goto L_0085d49d;
L_0085d464:; BB(0x0085d464);
    /* 0085d464: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d466: jne 0x85d470 */ if (!fZ) goto L_0085d470;
L_0085d468:; BB(0x0085d468);
    /* 0085d468: mov eax, dword ptr [0xa23fac] */ r_eax = R32((u32)(0xa23facu));
    /* 0085d46d: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0085d470:; BB(0x0085d470);
    /* 0085d470: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0085d473: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 0085d47a: jmp 0x85d485 */ goto L_0085d485;
L_0085d47c:; BB(0x0085d47c);
    /* 0085d47c: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085d47d: cmp word ptr [eax], 0 */ {  u32 a = R16((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d481: je 0x85d489 */ if (fZ) goto L_0085d489;
L_0085d483:; BB(0x0085d483);
    /* 0085d483: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085d485:; BB(0x0085d485);
    /* 0085d485: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d487: jne 0x85d47c */ if (!fZ) goto L_0085d47c;
L_0085d489:; BB(0x0085d489);
    /* 0085d489: sub eax, dword ptr [ebp - 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffffc4u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085d48c: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0085d48e: jmp 0x85d5f1 */ goto L_0085d5f1;
L_0085d493:; BB(0x0085d493);
    /* 0085d493: mov dword ptr [ebp - 0x34], 8 */ W32((u32)(r_ebp+0xffffffccu), 0x8u);
L_0085d49a:; BB(0x0085d49a);
    /* 0085d49a: mov dword ptr [ebp - 0x64], ecx */ W32((u32)(r_ebp+0xffffff9cu), r_ecx);
L_0085d49d:; BB(0x0085d49d);
    /* 0085d49d: test byte ptr [ebp - 0x30], 0x80 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d4a1: mov dword ptr [ebp - 0x38], 0x10 */ W32((u32)(r_ebp+0xffffffc8u), 0x10u);
    /* 0085d4a8: je 0x85d2dd */ if (fZ) goto L_0085d2dd;
L_0085d4ae:; BB(0x0085d4ae);
    /* 0085d4ae: mov eax, dword ptr [ebp - 0x64] */ r_eax = R32((u32)(r_ebp+0xffffff9cu));
    /* 0085d4b1: add eax, 0x51 */ {  u32 a = r_eax; u32 b = 0x51u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0085d4b4: mov word ptr [ebp - 0x50], 0x30 */ W16((u32)(r_ebp+0xffffffb0u), 0x30u);
    /* 0085d4ba: mov word ptr [ebp - 0x4e], ax */ W16((u32)(r_ebp+0xffffffb2u), (u16)r_eax);
    /* 0085d4be: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0085d4c1: jmp 0x85d2dd */ goto L_0085d2dd;
L_0085d4c6:; BB(0x0085d4c6);
    /* 0085d4c6: test byte ptr [ebp - 0x30], 0x80 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d4ca: mov dword ptr [ebp - 0x38], 8 */ W32((u32)(r_ebp+0xffffffc8u), 0x8u);
    /* 0085d4d1: je 0x85d2dd */ if (fZ) goto L_0085d2dd;
L_0085d4d7:; BB(0x0085d4d7);
    /* 0085d4d7: or byte ptr [ebp - 0x2f], 2 */ { u32 ad = (u32)(r_ebp+0xffffffd1u);  u32 a = R8(ad); u32 b = 0x2u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0085d4db: jmp 0x85d2dd */ goto L_0085d2dd;
L_0085d4e0:; BB(0x0085d4e0);
    /* 0085d4e0: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d4e7: test byte ptr [ebp - 0x30], 0x20 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d4eb: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d4f1: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d4f4: je 0x85d4ff */ if (fZ) goto L_0085d4ff;
L_0085d4f6:; BB(0x0085d4f6);
    /* 0085d4f6: mov cx, word ptr [ebp - 0x40] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+0xffffffc0u))) & 0xffffu);
    /* 0085d4fa: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0085d4fd: jmp 0x85d504 */ goto L_0085d504;
L_0085d4ff:; BB(0x0085d4ff);
    /* 0085d4ff: mov ecx, dword ptr [ebp - 0x40] */ r_ecx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0085d502: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_0085d504:; BB(0x0085d504);
    /* 0085d504: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 0085d50b: jmp 0x85d6f8 */ goto L_0085d6f8;
L_0085d510:; BB(0x0085d510);
    /* 0085d510: add dword ptr [ebp + 0x3e8], 4 */ { u32 ad = (u32)(r_ebp+0x3e8u);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d517: test bl, 0x20 */ {  u32 a = (u8)r_ebx; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d51a: mov eax, dword ptr [ebp + 0x3e8] */ r_eax = R32((u32)(r_ebp+0x3e8u));
    /* 0085d520: je 0x85d534 */ if (fZ) goto L_0085d534;
L_0085d522:; BB(0x0085d522);
    /* 0085d522: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d525: je 0x85d52e */ if (fZ) goto L_0085d52e;
L_0085d527:; BB(0x0085d527);
    /* 0085d527: movsx eax, word ptr [eax - 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xfffffffcu));
L_0085d52b:; BB(0x0085d52b);
    /* 0085d52b: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085d52c: jmp 0x85d53e */ goto L_0085d53e;
L_0085d52e:; BB(0x0085d52e);
    /* 0085d52e: movzx eax, word ptr [eax - 4] */ r_eax = (u32)R16((u32)(r_eax+0xfffffffcu));
    /* 0085d532: jmp 0x85d52b */ goto L_0085d52b;
L_0085d534:; BB(0x0085d534);
    /* 0085d534: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d537: mov eax, dword ptr [eax - 4] */ r_eax = R32((u32)(r_eax+0xfffffffcu));
    /* 0085d53a: jne 0x85d52b */ if (!fZ) goto L_0085d52b;
L_0085d53c:; BB(0x0085d53c);
    /* 0085d53c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0085d53e:; BB(0x0085d53e);
    /* 0085d53e: test bl, 0x40 */ {  u32 a = (u8)r_ebx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d541: je 0x85d558 */ if (fZ) goto L_0085d558;
L_0085d543:; BB(0x0085d543);
    /* 0085d543: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d545: jg 0x85d558 */ if ((!fZ&&fS==fO)) goto L_0085d558;
L_0085d547:; BB(0x0085d547);
    /* 0085d547: jl 0x85d54d */ if ((fS!=fO)) goto L_0085d54d;
L_0085d549:; BB(0x0085d549);
    /* 0085d549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fC = 0; }
    /* 0085d54b: jae 0x85d558 */ if (!fC) goto L_0085d558;
L_0085d54d:; BB(0x0085d54d);
    /* 0085d54d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 0085d54f: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 0085d552: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0085d554: or byte ptr [ebp - 0x2f], 1 */ { u32 ad = (u32)(r_ebp+0xffffffd1u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
L_0085d558:; BB(0x0085d558);
    /* 0085d558: test dword ptr [ebp - 0x30], esi */ {  u32 a = R32((u32)(r_ebp+0xffffffd0u)); u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d55b: mov ebx, eax */ r_ebx = r_eax;
    /* 0085d55d: mov edi, edx */ r_edi = r_edx;
    /* 0085d55f: jne 0x85d563 */ if (!fZ) goto L_0085d563;
L_0085d561:; BB(0x0085d561);
    /* 0085d561: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_0085d563:; BB(0x0085d563);
    /* 0085d563: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d567: jge 0x85d572 */ if ((fS==fO)) goto L_0085d572;
L_0085d569:; BB(0x0085d569);
    /* 0085d569: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0085d570: jmp 0x85d583 */ goto L_0085d583;
L_0085d572:; BB(0x0085d572);
    /* 0085d572: and dword ptr [ebp - 0x30], 0xfffffff7 */ { u32 ad = (u32)(r_ebp+0xffffffd0u);  u32 a = R32(ad); u32 b = 0xfffffff7u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d576: mov eax, 0x200 */ r_eax = 0x200u;
    /* 0085d57b: cmp dword ptr [ebp - 0x34], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d57e: jle 0x85d583 */ if ((fZ||fS!=fO)) goto L_0085d583;
L_0085d580:; BB(0x0085d580);
    /* 0085d580: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
L_0085d583:; BB(0x0085d583);
    /* 0085d583: mov eax, ebx */ r_eax = r_ebx;
    /* 0085d585: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d587: jne 0x85d58d */ if (!fZ) goto L_0085d58d;
L_0085d589:; BB(0x0085d589);
    /* 0085d589: and dword ptr [ebp - 0x44], 0 */ { u32 ad = (u32)(r_ebp+0xffffffbcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085d58d:; BB(0x0085d58d);
    /* 0085d58d: lea esi, [ebp + 0x1d3] */ r_esi = (u32)(r_ebp+0x1d3u);
L_0085d593:; BB(0x0085d593);
    /* 0085d593: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0085d596: dec dword ptr [ebp - 0x34] */ { u32 ad = (u32)(r_ebp+0xffffffccu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d599: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d59b: jg 0x85d5a3 */ if ((!fZ&&fS==fO)) goto L_0085d5a3;
L_0085d59d:; BB(0x0085d59d);
    /* 0085d59d: mov eax, ebx */ r_eax = r_ebx;
    /* 0085d59f: or eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0085d5a1: je 0x85d5c7 */ if (fZ) goto L_0085d5c7;
L_0085d5a3:; BB(0x0085d5a3);
    /* 0085d5a3: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0085d5a6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0085d5a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d5a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d5a9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d5aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d5ab: call 0x866fb0 */ r_esp -= 4; W32(r_esp, 0x85d5b0u); f_00866fb0();
    /* 0085d5b0: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0085d5b3: cmp ecx, 0x39 */ {  u32 a = r_ecx; u32 b = 0x39u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d5b6: mov dword ptr [ebp - 0x74], ebx */ W32((u32)(r_ebp+0xffffff8cu), r_ebx);
    /* 0085d5b9: mov ebx, eax */ r_ebx = r_eax;
    /* 0085d5bb: mov edi, edx */ r_edi = r_edx;
    /* 0085d5bd: jle 0x85d5c2 */ if ((fZ||fS!=fO)) goto L_0085d5c2;
L_0085d5bf:; BB(0x0085d5bf);
    /* 0085d5bf: add ecx, dword ptr [ebp - 0x64] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xffffff9cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0085d5c2:; BB(0x0085d5c2);
    /* 0085d5c2: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 0085d5c4: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0085d5c5: jmp 0x85d593 */ goto L_0085d593;
L_0085d5c7:; BB(0x0085d5c7);
    /* 0085d5c7: lea eax, [ebp + 0x1d3] */ r_eax = (u32)(r_ebp+0x1d3u);
    /* 0085d5cd: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0085d5cf: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0085d5d0: test byte ptr [ebp - 0x2f], 2 */ {  u32 a = R8((u32)(r_ebp+0xffffffd1u)); u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d5d4: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0085d5d7: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0085d5da: je 0x85d5f4 */ if (fZ) goto L_0085d5f4;
L_0085d5dc:; BB(0x0085d5dc);
    /* 0085d5dc: mov ecx, esi */ r_ecx = r_esi;
    /* 0085d5de: cmp byte ptr [ecx], 0x30 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x30u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0085d5e1: jne 0x85d5e7 */ if (!fZ) goto L_0085d5e7;
L_0085d5e3:; BB(0x0085d5e3);
    /* 0085d5e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d5e5: jne 0x85d5f4 */ if (!fZ) goto L_0085d5f4;
L_0085d5e7:; BB(0x0085d5e7);
    /* 0085d5e7: dec dword ptr [ebp - 0x3c] */ { u32 ad = (u32)(r_ebp+0xffffffc4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d5ea: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0085d5ed: mov byte ptr [ecx], 0x30 */ W8((u32)(r_ecx), 0x30u);
    /* 0085d5f0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0085d5f1:; BB(0x0085d5f1);
    /* 0085d5f1: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
L_0085d5f4:; BB(0x0085d5f4);
    /* 0085d5f4: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d5f8: jne 0x85d6f8 */ if (!fZ) goto L_0085d6f8;
L_0085d5fe:; BB(0x0085d5fe);
    /* 0085d5fe: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0085d601: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d603: je 0x85d62f */ if (fZ) goto L_0085d62f;
L_0085d605:; BB(0x0085d605);
    /* 0085d605: test ah, 1 */ {  u32 a = (u8)(r_eax>>8); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d608: je 0x85d612 */ if (fZ) goto L_0085d612;
L_0085d60a:; BB(0x0085d60a);
    /* 0085d60a: mov word ptr [ebp - 0x50], 0x2d */ W16((u32)(r_ebp+0xffffffb0u), 0x2du);
    /* 0085d610: jmp 0x85d628 */ goto L_0085d628;
L_0085d612:; BB(0x0085d612);
    /* 0085d612: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d614: je 0x85d61e */ if (fZ) goto L_0085d61e;
L_0085d616:; BB(0x0085d616);
    /* 0085d616: mov word ptr [ebp - 0x50], 0x2b */ W16((u32)(r_ebp+0xffffffb0u), 0x2bu);
    /* 0085d61c: jmp 0x85d628 */ goto L_0085d628;
L_0085d61e:; BB(0x0085d61e);
    /* 0085d61e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d620: je 0x85d62f */ if (fZ) goto L_0085d62f;
L_0085d622:; BB(0x0085d622);
    /* 0085d622: mov word ptr [ebp - 0x50], 0x20 */ W16((u32)(r_ebp+0xffffffb0u), 0x20u);
L_0085d628:; BB(0x0085d628);
    /* 0085d628: mov dword ptr [ebp - 0x44], 1 */ W32((u32)(r_ebp+0xffffffbcu), 0x1u);
L_0085d62f:; BB(0x0085d62f);
    /* 0085d62f: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0085d632: sub ebx, dword ptr [ebp - 0x44] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffbcu)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0085d635: sub ebx, dword ptr [ebp - 0x38] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0085d638: test byte ptr [ebp - 0x30], 0xc */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d63c: jne 0x85d652 */ if (!fZ) goto L_0085d652;
L_0085d63e:; BB(0x0085d63e);
    /* 0085d63e: push dword ptr [ebp + 0x3e0] */ { u32 v = R32((u32)(r_ebp+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d644: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0085d647: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d648: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085d64a: call 0x85cec4 */ r_esp -= 4; W32(r_esp, 0x85d64fu); f_0085cec4();
    /* 0085d64f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085d652:; BB(0x0085d652);
    /* 0085d652: push dword ptr [ebp - 0x44] */ { u32 v = R32((u32)(r_ebp+0xffffffbcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d655: mov edi, dword ptr [ebp + 0x3e0] */ r_edi = R32((u32)(r_ebp+0x3e0u));
    /* 0085d65b: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0085d65e: lea ecx, [ebp - 0x50] */ r_ecx = (u32)(r_ebp+0xffffffb0u);
    /* 0085d661: call 0x85cee9 */ r_esp -= 4; W32(r_esp, 0x85d666u); f_0085cee9();
    /* 0085d666: test byte ptr [ebp - 0x30], 8 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d66a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d66b: je 0x85d682 */ if (fZ) goto L_0085d682;
L_0085d66d:; BB(0x0085d66d);
    /* 0085d66d: test byte ptr [ebp - 0x30], 4 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d671: jne 0x85d682 */ if (!fZ) goto L_0085d682;
L_0085d673:; BB(0x0085d673);
    /* 0085d673: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d674: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d675: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0085d677: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0085d67a: call 0x85cec4 */ r_esp -= 4; W32(r_esp, 0x85d67fu); f_0085cec4();
    /* 0085d67f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085d682:; BB(0x0085d682);
    /* 0085d682: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d686: jne 0x85d6cf */ if (!fZ) goto L_0085d6cf;
L_0085d688:; BB(0x0085d688);
    /* 0085d688: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0085d68b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d68d: jle 0x85d6cf */ if ((fZ||fS!=fO)) goto L_0085d6cf;
L_0085d68f:; BB(0x0085d68f);
    /* 0085d68f: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0085d692: mov dword ptr [ebp - 0x60], eax */ W32((u32)(r_ebp+0xffffffa0u), r_eax);
L_0085d695:; BB(0x0085d695);
    /* 0085d695: push dword ptr [0xa23f90] */ { u32 v = R32((u32)(0xa23f90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d69b: dec dword ptr [ebp - 0x60] */ { u32 ad = (u32)(r_ebp+0xffffffa0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085d69e: lea eax, [ebp - 0x70] */ r_eax = (u32)(r_ebp+0xffffff90u);
    /* 0085d6a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0085d6a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085d6a3: call 0x866f7f */ r_esp -= 4; W32(r_esp, 0x85d6a8u); f_00866f7f();
    /* 0085d6a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0085d6ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0085d6ad: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 0085d6b0: jle 0x85d6de */ if ((fZ||fS!=fO)) goto L_0085d6de;
L_0085d6b2:; BB(0x0085d6b2);
    /* 0085d6b2: push dword ptr [ebp - 0x70] */ { u32 v = R32((u32)(r_ebp+0xffffff90u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d6b5: mov eax, dword ptr [ebp + 0x3e0] */ r_eax = R32((u32)(r_ebp+0x3e0u));
    /* 0085d6bb: lea esi, [ebp - 0x40] */ r_esi = (u32)(r_ebp+0xffffffc0u);
    /* 0085d6be: call 0x85ce9f */ r_esp -= 4; W32(r_esp, 0x85d6c3u); f_0085ce9f();
    /* 0085d6c3: add edi, dword ptr [ebp - 0x74] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebp+0xffffff8cu)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0085d6c6: cmp dword ptr [ebp - 0x60], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0085d6ca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085d6cb: jg 0x85d695 */ if ((!fZ&&fS==fO)) goto L_0085d695;
L_0085d6cd:; BB(0x0085d6cd);
    /* 0085d6cd: jmp 0x85d6de */ goto L_0085d6de;
L_0085d6cf:; BB(0x0085d6cf);
    /* 0085d6cf: push dword ptr [ebp - 0x38] */ { u32 v = R32((u32)(r_ebp+0xffffffc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d6d2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0085d6d5: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0085d6d8: call 0x85cee9 */ r_esp -= 4; W32(r_esp, 0x85d6ddu); f_0085cee9();
    /* 0085d6dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d6de:; BB(0x0085d6de);
    /* 0085d6de: test byte ptr [ebp - 0x30], 4 */ {  u32 a = R8((u32)(r_ebp+0xffffffd0u)); u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085d6e2: je 0x85d6f8 */ if (fZ) goto L_0085d6f8;
L_0085d6e4:; BB(0x0085d6e4);
    /* 0085d6e4: push dword ptr [ebp + 0x3e0] */ { u32 v = R32((u32)(r_ebp+0x3e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d6ea: lea eax, [ebp - 0x40] */ r_eax = (u32)(r_ebp+0xffffffc0u);
    /* 0085d6ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085d6ee: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0085d6f0: call 0x85cec4 */ r_esp -= 4; W32(r_esp, 0x85d6f5u); f_0085cec4();
    /* 0085d6f5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0085d6f8:; BB(0x0085d6f8);
    /* 0085d6f8: cmp dword ptr [ebp - 0x58], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085d6fc: je 0x85d70b */ if (fZ) goto L_0085d70b;
L_0085d6fe:; BB(0x0085d6fe);
    /* 0085d6fe: push dword ptr [ebp - 0x58] */ { u32 v = R32((u32)(r_ebp+0xffffffa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085d701: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x85d706u); f_00858882();
    /* 0085d706: and dword ptr [ebp - 0x58], 0 */ { u32 ad = (u32)(r_ebp+0xffffffa8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0085d70a:; BB(0x0085d70a);
    /* 0085d70a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0085d70b:; BB(0x0085d70b);
    /* 0085d70b: mov eax, dword ptr [ebp + 0x3e4] */ r_eax = R32((u32)(r_ebp+0x3e4u));
    /* 0085d711: mov bx, word ptr [eax] */ r_ebx = (r_ebx & 0xffff0000u) | ((R16((u32)(r_eax))) & 0xffffu);
    /* 0085d714: test bx, bx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ebx; u32 r = (a & b) & 0xffffu;  fZ = (r == 0); }
    /* 0085d717: jne 0x85cf63 */ if (!fZ) goto L_0085cf63;
L_0085d71d:; BB(0x0085d71d);
    /* 0085d71d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0085d71e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_0085d71f:; BB(0x0085d71f);
    /* 0085d71f: mov ecx, dword ptr [ebp + 0x3d4] */ r_ecx = R32((u32)(r_ebp+0x3d4u));
    /* 0085d725: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0085d728: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085d729: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x85d72eu); f_0085e419();
    /* 0085d72e: add ebp, 0x3d8 */ {  u32 a = r_ebp; u32 b = 0x3d8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085d734: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 0085d735: ret  */ FN_RET(0x0085cf26); r_esp += 4; return;
}

