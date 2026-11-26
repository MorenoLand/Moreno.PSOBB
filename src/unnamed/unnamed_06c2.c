#include "protos.h"

void f_006c2608(void) /* sub_6C2608 */
{
    FN_ENTER(0x006c2608);
    /* 006c2608: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c260c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006c2610: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006c2614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c2615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2617: je 0x6c2676 */ if (fZ) goto L_006c2676;
L_006c2619:; BB(0x006c2619);
    /* 006c2619: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c261b: je 0x6c2676 */ if (fZ) goto L_006c2676;
L_006c261d:; BB(0x006c261d);
    /* 006c261d: mov ebp, dword ptr [eax + 0x14] */ r_ebp = R32((u32)(r_eax+0x14u));
    /* 006c2620: cmp ebp, dword ptr [edx + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2623: ja 0x6c266f */ if ((!fC&&!fZ)) goto L_006c266f;
L_006c2625:; BB(0x006c2625);
    /* 006c2625: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 006c2628: cmp ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c262b: jne 0x6c2668 */ if (!fZ) goto L_006c2668;
L_006c262d:; BB(0x006c262d);
    /* 006c262d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006c2630: cmp eax, 0xc87ed5b1 */ {  u32 a = r_eax; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2635: jne 0x6c2661 */ if (!fZ) goto L_006c2661;
L_006c2637:; BB(0x006c2637);
    /* 006c2637: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006c263a: cmp eax, 0xc87ed5b1 */ {  u32 a = r_eax; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c263f: jne 0x6c2661 */ if (!fZ) goto L_006c2661;
L_006c2641:; BB(0x006c2641);
    /* 006c2641: mov eax, dword ptr [ecx + 0xba9c] */ r_eax = R32((u32)(r_ecx+0xba9cu));
    /* 006c2647: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006c264b: cmp eax, dword ptr [edx + 0xba9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xba9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2651: je 0x6c265a */ if (fZ) goto L_006c265a;
L_006c2653:; BB(0x006c2653);
    /* 006c2653: mov eax, 6 */ r_eax = 0x6u;
    /* 006c2658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2659: ret  */ FN_RET(0x006c2608); r_esp += 4; return;
L_006c265a:; BB(0x006c265a);
    /* 006c265a: mov eax, 7 */ r_eax = 0x7u;
    /* 006c265f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2660: ret  */ FN_RET(0x006c2608); r_esp += 4; return;
L_006c2661:; BB(0x006c2661);
    /* 006c2661: mov eax, 5 */ r_eax = 0x5u;
    /* 006c2666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2667: ret  */ FN_RET(0x006c2608); r_esp += 4; return;
L_006c2668:; BB(0x006c2668);
    /* 006c2668: mov eax, 4 */ r_eax = 0x4u;
    /* 006c266d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c266e: ret  */ FN_RET(0x006c2608); r_esp += 4; return;
L_006c266f:; BB(0x006c266f);
    /* 006c266f: mov eax, 2 */ r_eax = 0x2u;
    /* 006c2674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2675: ret  */ FN_RET(0x006c2608); r_esp += 4; return;
L_006c2676:; BB(0x006c2676);
    /* 006c2676: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2679: ret  */ FN_RET(0x006c2608); r_esp += 4; return;
}

void f_006c2614(void) /* sub_6C2614 */
{
    FN_ENTER(0x006c2614);
    /* 006c2614: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c2615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2617: je 0x6c2676 */ if (fZ) goto L_006c2676;
L_006c2619:; BB(0x006c2619);
    /* 006c2619: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c261b: je 0x6c2676 */ if (fZ) goto L_006c2676;
L_006c261d:; BB(0x006c261d);
    /* 006c261d: mov ebp, dword ptr [eax + 0x14] */ r_ebp = R32((u32)(r_eax+0x14u));
    /* 006c2620: cmp ebp, dword ptr [edx + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2623: ja 0x6c266f */ if ((!fC&&!fZ)) goto L_006c266f;
L_006c2625:; BB(0x006c2625);
    /* 006c2625: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 006c2628: cmp ebp, dword ptr [edx + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c262b: jne 0x6c2668 */ if (!fZ) goto L_006c2668;
L_006c262d:; BB(0x006c262d);
    /* 006c262d: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 006c2630: cmp eax, 0xc87ed5b1 */ {  u32 a = r_eax; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2635: jne 0x6c2661 */ if (!fZ) goto L_006c2661;
L_006c2637:; BB(0x006c2637);
    /* 006c2637: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006c263a: cmp eax, 0xc87ed5b1 */ {  u32 a = r_eax; u32 b = 0xc87ed5b1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c263f: jne 0x6c2661 */ if (!fZ) goto L_006c2661;
L_006c2641:; BB(0x006c2641);
    /* 006c2641: mov eax, dword ptr [ecx + 0xba9c] */ r_eax = R32((u32)(r_ecx+0xba9cu));
    /* 006c2647: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006c264b: cmp eax, dword ptr [edx + 0xba9c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xba9cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2651: je 0x6c265a */ if (fZ) goto L_006c265a;
L_006c2653:; BB(0x006c2653);
    /* 006c2653: mov eax, 6 */ r_eax = 0x6u;
    /* 006c2658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2659: ret  */ FN_RET(0x006c2614); r_esp += 4; return;
L_006c265a:; BB(0x006c265a);
    /* 006c265a: mov eax, 7 */ r_eax = 0x7u;
    /* 006c265f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2660: ret  */ FN_RET(0x006c2614); r_esp += 4; return;
L_006c2661:; BB(0x006c2661);
    /* 006c2661: mov eax, 5 */ r_eax = 0x5u;
    /* 006c2666: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2667: ret  */ FN_RET(0x006c2614); r_esp += 4; return;
L_006c2668:; BB(0x006c2668);
    /* 006c2668: mov eax, 4 */ r_eax = 0x4u;
    /* 006c266d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c266e: ret  */ FN_RET(0x006c2614); r_esp += 4; return;
L_006c266f:; BB(0x006c266f);
    /* 006c266f: mov eax, 2 */ r_eax = 0x2u;
    /* 006c2674: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2675: ret  */ FN_RET(0x006c2614); r_esp += 4; return;
L_006c2676:; BB(0x006c2676);
    /* 006c2676: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2678: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2679: ret  */ FN_RET(0x006c2614); r_esp += 4; return;
}

void f_006c267c(void) /* sub_6C267C */
{
    FN_ENTER(0x006c267c);
    /* 006c267c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c267d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c2680: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c2685: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2687: je 0x6c26da */ if (fZ) goto L_006c26da;
L_006c2689:; BB(0x006c2689);
    /* 006c2689: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c268c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c268d: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2692: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6c2697u); f_0083ad44();
    /* 006c2697: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c269c: call 0x83ace8 */ r_esp -= 4; W32(r_esp, 0x6c26a1u); f_0083ace8();
    /* 006c26a1: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006c26a5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c26a6: push 0xa95de4 */ { u32 v = 0xa95de4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c26ab: call 0x83ad44 */ r_esp -= 4; W32(r_esp, 0x6c26b0u); f_0083ad44();
    /* 006c26b0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c26b3: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c26b7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 006c26ba: mov ecx, dword ptr [0xa95df8] */ r_ecx = R32((u32)(0xa95df8u));
    /* 006c26c0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c26c2: jb 0x6c26d0 */ if (fC) goto L_006c26d0;
L_006c26c4:; BB(0x006c26c4);
    /* 006c26c4: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
    /* 006c26c7: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c26c9: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006c26cb: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 006c26ce: jmp 0x6c26d3 */ goto L_006c26d3;
L_006c26d0:; BB(0x006c26d0);
    /* 006c26d0: mov edi, dword ptr [ecx + 0xc] */ r_edi = R32((u32)(r_ecx+0xcu));
L_006c26d3:; BB(0x006c26d3);
    /* 006c26d3: mov eax, edi */ r_eax = r_edi;
    /* 006c26d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c26d8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c26d9: ret  */ FN_RET(0x006c267c); r_esp += 4; return;
L_006c26da:; BB(0x006c26da);
    /* 006c26da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c26dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c26df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c26e0: ret  */ FN_RET(0x006c267c); r_esp += 4; return;
}

void f_006c26e4(void) /* sub_6C26E4 */
{
    FN_ENTER(0x006c26e4);
    /* 006c26e4: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c26e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c26eb: je 0x6c26f4 */ if (fZ) goto L_006c26f4;
L_006c26ed:; BB(0x006c26ed);
    /* 006c26ed: add dword ptr [eax + 0xba9c], 1 */ { u32 ad = (u32)(r_eax+0xba9cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006c26f4:; BB(0x006c26f4);
    /* 006c26f4: ret  */ FN_RET(0x006c26e4); r_esp += 4; return;
}

void f_006c26f8(void) /* sub_6C26F8 */
{
    FN_ENTER(0x006c26f8);
    /* 006c26f8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c26fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c26fd: mov ecx, eax */ r_ecx = r_eax;
    /* 006c26ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c2701: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006c2703: mov dword ptr [ecx + 0xbaa0], edx */ W32((u32)(r_ecx+0xbaa0u), r_edx);
    /* 006c2709: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c270e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c2710:; BB(0x006c2710);
    /* 006c2710: movzx ebx, byte ptr [edx + ecx] */ r_ebx = (u32)R8((u32)(r_edx+r_ecx));
    /* 006c2714: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2716: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c2719: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c271b: je 0x6c2726 */ if (fZ) goto L_006c2726;
L_006c271d:; BB(0x006c271d);
    /* 006c271d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c271f: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2724: jmp 0x6c2728 */ goto L_006c2728;
L_006c2726:; BB(0x006c2726);
    /* 006c2726: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2728:; BB(0x006c2728);
    /* 006c2728: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c272a: je 0x6c2735 */ if (fZ) goto L_006c2735;
L_006c272c:; BB(0x006c272c);
    /* 006c272c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c272e: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2733: jmp 0x6c2737 */ goto L_006c2737;
L_006c2735:; BB(0x006c2735);
    /* 006c2735: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2737:; BB(0x006c2737);
    /* 006c2737: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2739: je 0x6c2744 */ if (fZ) goto L_006c2744;
L_006c273b:; BB(0x006c273b);
    /* 006c273b: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c273d: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2742: jmp 0x6c2746 */ goto L_006c2746;
L_006c2744:; BB(0x006c2744);
    /* 006c2744: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2746:; BB(0x006c2746);
    /* 006c2746: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2748: je 0x6c2753 */ if (fZ) goto L_006c2753;
L_006c274a:; BB(0x006c274a);
    /* 006c274a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c274c: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2751: jmp 0x6c2755 */ goto L_006c2755;
L_006c2753:; BB(0x006c2753);
    /* 006c2753: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2755:; BB(0x006c2755);
    /* 006c2755: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2757: je 0x6c2762 */ if (fZ) goto L_006c2762;
L_006c2759:; BB(0x006c2759);
    /* 006c2759: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c275b: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2760: jmp 0x6c2764 */ goto L_006c2764;
L_006c2762:; BB(0x006c2762);
    /* 006c2762: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2764:; BB(0x006c2764);
    /* 006c2764: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2766: je 0x6c2771 */ if (fZ) goto L_006c2771;
L_006c2768:; BB(0x006c2768);
    /* 006c2768: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c276a: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c276f: jmp 0x6c2773 */ goto L_006c2773;
L_006c2771:; BB(0x006c2771);
    /* 006c2771: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2773:; BB(0x006c2773);
    /* 006c2773: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2775: je 0x6c2780 */ if (fZ) goto L_006c2780;
L_006c2777:; BB(0x006c2777);
    /* 006c2777: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2779: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c277e: jmp 0x6c2782 */ goto L_006c2782;
L_006c2780:; BB(0x006c2780);
    /* 006c2780: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2782:; BB(0x006c2782);
    /* 006c2782: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2784: je 0x6c278f */ if (fZ) goto L_006c278f;
L_006c2786:; BB(0x006c2786);
    /* 006c2786: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2788: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c278d: jmp 0x6c2791 */ goto L_006c2791;
L_006c278f:; BB(0x006c278f);
    /* 006c278f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2791:; BB(0x006c2791);
    /* 006c2791: cmp edx, 0xbaa4 */ {  u32 a = r_edx; u32 b = 0xbaa4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2797: jb 0x6c2710 */ if (fC) goto L_006c2710;
L_006c279d:; BB(0x006c279d);
    /* 006c279d: not eax */ r_eax = ~r_eax;
    /* 006c279f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006c27a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c27a2: ret  */ FN_RET(0x006c26f8); r_esp += 4; return;
}

void f_006c26fc(void) /* sub_6C26FC */
{
    FN_ENTER(0x006c26fc);
    /* 006c26fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c26fd: mov ecx, eax */ r_ecx = r_eax;
    /* 006c26ff: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c2701: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006c2703: mov dword ptr [ecx + 0xbaa0], edx */ W32((u32)(r_ecx+0xbaa0u), r_edx);
    /* 006c2709: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006c270e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006c2710:; BB(0x006c2710);
    /* 006c2710: movzx ebx, byte ptr [edx + ecx] */ r_ebx = (u32)R8((u32)(r_edx+r_ecx));
    /* 006c2714: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2716: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c2719: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c271b: je 0x6c2726 */ if (fZ) goto L_006c2726;
L_006c271d:; BB(0x006c271d);
    /* 006c271d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c271f: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2724: jmp 0x6c2728 */ goto L_006c2728;
L_006c2726:; BB(0x006c2726);
    /* 006c2726: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2728:; BB(0x006c2728);
    /* 006c2728: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c272a: je 0x6c2735 */ if (fZ) goto L_006c2735;
L_006c272c:; BB(0x006c272c);
    /* 006c272c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c272e: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2733: jmp 0x6c2737 */ goto L_006c2737;
L_006c2735:; BB(0x006c2735);
    /* 006c2735: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2737:; BB(0x006c2737);
    /* 006c2737: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2739: je 0x6c2744 */ if (fZ) goto L_006c2744;
L_006c273b:; BB(0x006c273b);
    /* 006c273b: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c273d: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2742: jmp 0x6c2746 */ goto L_006c2746;
L_006c2744:; BB(0x006c2744);
    /* 006c2744: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2746:; BB(0x006c2746);
    /* 006c2746: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2748: je 0x6c2753 */ if (fZ) goto L_006c2753;
L_006c274a:; BB(0x006c274a);
    /* 006c274a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c274c: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2751: jmp 0x6c2755 */ goto L_006c2755;
L_006c2753:; BB(0x006c2753);
    /* 006c2753: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2755:; BB(0x006c2755);
    /* 006c2755: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2757: je 0x6c2762 */ if (fZ) goto L_006c2762;
L_006c2759:; BB(0x006c2759);
    /* 006c2759: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c275b: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2760: jmp 0x6c2764 */ goto L_006c2764;
L_006c2762:; BB(0x006c2762);
    /* 006c2762: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2764:; BB(0x006c2764);
    /* 006c2764: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2766: je 0x6c2771 */ if (fZ) goto L_006c2771;
L_006c2768:; BB(0x006c2768);
    /* 006c2768: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c276a: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c276f: jmp 0x6c2773 */ goto L_006c2773;
L_006c2771:; BB(0x006c2771);
    /* 006c2771: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2773:; BB(0x006c2773);
    /* 006c2773: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2775: je 0x6c2780 */ if (fZ) goto L_006c2780;
L_006c2777:; BB(0x006c2777);
    /* 006c2777: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2779: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c277e: jmp 0x6c2782 */ goto L_006c2782;
L_006c2780:; BB(0x006c2780);
    /* 006c2780: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2782:; BB(0x006c2782);
    /* 006c2782: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2784: je 0x6c278f */ if (fZ) goto L_006c278f;
L_006c2786:; BB(0x006c2786);
    /* 006c2786: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2788: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c278d: jmp 0x6c2791 */ goto L_006c2791;
L_006c278f:; BB(0x006c278f);
    /* 006c278f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2791:; BB(0x006c2791);
    /* 006c2791: cmp edx, 0xbaa4 */ {  u32 a = r_edx; u32 b = 0xbaa4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c2797: jb 0x6c2710 */ if (fC) goto L_006c2710;
L_006c279d:; BB(0x006c279d);
    /* 006c279d: not eax */ r_eax = ~r_eax;
    /* 006c279f: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006c27a1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c27a2: ret  */ FN_RET(0x006c26fc); r_esp += 4; return;
}

void f_006c27a4(void) /* sub_6C27A4 */
{
    FN_ENTER(0x006c27a4);
    /* 006c27a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c27a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c27a6: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c27a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c27ab: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006c27ae: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006c27b2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006c27b6: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006c27ba: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006c27be: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006c27c2: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006c27c6: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006c27ca: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006c27ce: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006c27d2: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006c27d6: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006c27da: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c27de: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c27e2: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c27e6: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c27ea: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c27ee: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c27f2: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c27f6: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c27fa: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c27fe: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c2802: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c2806: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c280a: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 006c280d: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c2812:; BB(0x006c2812);
    /* 006c2812: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c2814: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c2817: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c2819: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c281c: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c281e: jne 0x6c2812 */ if (!fZ) goto L_006c2812;
L_006c2820:; BB(0x006c2820);
    /* 006c2820: lea esi, [esp + 0x12] */ r_esi = (u32)(r_esp+0x12u);
    /* 006c2824: mov edi, 0x9ceae8 */ r_edi = 0x9ceae8u;
L_006c2829:; BB(0x006c2829);
    /* 006c2829: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c282b: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c282e: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c2830: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c2833: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2835: jne 0x6c2829 */ if (!fZ) goto L_006c2829;
L_006c2837:; BB(0x006c2837);
    /* 006c2837: mov esi, 0xa95e6c */ r_esi = 0xa95e6cu;
    /* 006c283c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c283e: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006c2841: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006c2844: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006c2847: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c284b: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006c284f: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 006c2853: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006c2857: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c285a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c285c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c285d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c2862u); f_0061cdb0();
    /* 006c2862: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c2868: mov dword ptr [esp + 0x64], 0xbaa4 */ W32((u32)(r_esp+0x64u), 0xbaa4u);
    /* 006c2870: mov eax, 1 */ r_eax = 0x1u;
    /* 006c2875: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c2877: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 006c287c: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 006c2881: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 006c2885: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 006c288a: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 006c288e: lea esi, [esp + 8] */ r_esi = (u32)(r_esp+0x8u);
    /* 006c2892: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2893: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2899: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c289eu); f_0082c34c();
    /* 006c289e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006c28a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c28a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c28a8u); f_0061cdb0();
    /* 006c28a8: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c28ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c28ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c28ad: ret  */ FN_RET(0x006c27a4); r_esp += 4; return;
}

void f_006c28b0(void) /* sub_6C28B0 */
{
    FN_ENTER(0x006c28b0);
    /* 006c28b0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c28b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c28b2: mov eax, dword ptr [0xa95df4] */ r_eax = R32((u32)(0xa95df4u));
    /* 006c28b7: mov esi, 0xffff0000 */ r_esi = 0xffff0000u;
    /* 006c28bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c28be: je 0x6c290c */ if (fZ) goto L_006c290c;
L_006c28c0:; BB(0x006c28c0);
    /* 006c28c0: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c28c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c28c7: jne 0x6c290c */ if (!fZ) goto L_006c290c;
L_006c28c9:; BB(0x006c28c9);
    /* 006c28c9: push dword ptr [0xa95dd8] */ { u32 v = R32((u32)(0xa95dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c28cf: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6c28d4u); f_007083d4();
    /* 006c28d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c28d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c28d7: je 0x6c290c */ if (fZ) goto L_006c290c;
L_006c28d9:; BB(0x006c28d9);
    /* 006c28d9: push 0x9ceb64 */ { u32 v = 0x9ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006c28de: push dword ptr [0xa95dd8] */ { u32 v = R32((u32)(0xa95dd8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c28e4: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c28e9u); f_0082c198();
    /* 006c28e9: mov esi, eax */ r_esi = r_eax;
    /* 006c28eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c28ee: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c28f0: jne 0x6c290c */ if (!fZ) goto L_006c290c;
L_006c28f2:; BB(0x006c28f2);
    /* 006c28f2: mov eax, dword ptr [0xa95dd8] */ r_eax = R32((u32)(0xa95dd8u));
    /* 006c28f7: call 0x6c2918 */ r_esp -= 4; W32(r_esp, 0x6c28fcu); f_006c2918();
    /* 006c28fc: mov esi, eax */ r_esi = r_eax;
    /* 006c28fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2900: jne 0x6c290c */ if (!fZ) goto L_006c290c;
L_006c2902:; BB(0x006c2902);
    /* 006c2902: mov dword ptr [0xa95de0], 0xc */ W32((u32)(0xa95de0u), 0xcu);
L_006c290c:; BB(0x006c290c);
    /* 006c290c: mov eax, esi */ r_eax = r_esi;
    /* 006c290e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c290f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c2910: ret  */ FN_RET(0x006c28b0); r_esp += 4; return;
}

void f_006c2914(void) /* sub_6C2914 */
{
    FN_ENTER(0x006c2914);
    /* 006c2914: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c2918: push dword ptr [0xa95dd0] */ { u32 v = R32((u32)(0xa95dd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c291e: push dword ptr [0xa95e28] */ { u32 v = R32((u32)(0xa95e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2924: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c292e: push 0x9ceb64 */ { u32 v = 0x9ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2934: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c2939: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6c293eu); f_00828928();
    /* 006c293e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c2941: ret  */ FN_RET(0x006c2914); r_esp += 4; return;
}

void f_006c2918(void)
{
    FN_ENTER(0x006c2918);
    /* 006c2918: push dword ptr [0xa95dd0] */ { u32 v = R32((u32)(0xa95dd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c291e: push dword ptr [0xa95e28] */ { u32 v = R32((u32)(0xa95e28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2924: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c292e: push 0x9ceb64 */ { u32 v = 0x9ceb64u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2934: mov dword ptr [0xa95dd8], eax */ W32((u32)(0xa95dd8u), r_eax);
    /* 006c2939: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6c293eu); f_00828928();
    /* 006c293e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c2941: ret  */ FN_RET(0x006c2918); r_esp += 4; return;
}

void f_006c2944(void) /* sub_6C2944 */
{
    FN_ENTER(0x006c2944);
    /* 006c2944: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2945: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2946: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c294b: mov esi, 0xffff0000 */ r_esi = 0xffff0000u;
    /* 006c2950: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2952: je 0x6c2999 */ if (fZ) goto L_006c2999;
L_006c2954:; BB(0x006c2954);
    /* 006c2954: mov eax, dword ptr [0xa95de0] */ r_eax = R32((u32)(0xa95de0u));
    /* 006c2959: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c295b: jne 0x6c2999 */ if (!fZ) goto L_006c2999;
L_006c295d:; BB(0x006c295d);
    /* 006c295d: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2962: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2968: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c296du); f_0082c198();
    /* 006c296d: mov esi, eax */ r_esi = r_eax;
    /* 006c296f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2972: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2974: jne 0x6c2999 */ if (!fZ) goto L_006c2999;
L_006c2976:; BB(0x006c2976);
    /* 006c2976: call 0x6c29a0 */ r_esp -= 4; W32(r_esp, 0x6c297bu); f_006c29a0();
    /* 006c297b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c297d: je 0x6c2999 */ if (fZ) goto L_006c2999;
L_006c297f:; BB(0x006c297f);
    /* 006c297f: mov eax, dword ptr [0xa95dcc] */ r_eax = R32((u32)(0xa95dccu));
    /* 006c2984: call 0x6c2b8c */ r_esp -= 4; W32(r_esp, 0x6c2989u); f_006c2b8c();
    /* 006c2989: mov esi, eax */ r_esi = r_eax;
    /* 006c298b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c298d: jne 0x6c2999 */ if (!fZ) goto L_006c2999;
L_006c298f:; BB(0x006c298f);
    /* 006c298f: mov dword ptr [0xa95de0], 0xf */ W32((u32)(0xa95de0u), 0xfu);
L_006c2999:; BB(0x006c2999);
    /* 006c2999: mov eax, esi */ r_eax = r_esi;
    /* 006c299b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c299c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c299d: ret  */ FN_RET(0x006c2944); r_esp += 4; return;
}

void f_006c29a0(void) /* sub_6C29A0 */
{
    FN_ENTER(0x006c29a0);
    /* 006c29a0: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c29a5u); f_006ffa24();
    /* 006c29a5: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c29aa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c29ac: je 0x6c29c2 */ if (fZ) goto L_006c29c2;
L_006c29ae:; BB(0x006c29ae);
    /* 006c29ae: mov eax, dword ptr [0xa95e24] */ r_eax = R32((u32)(0xa95e24u));
    /* 006c29b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c29b5: je 0x6c29c2 */ if (fZ) goto L_006c29c2;
L_006c29b7:; BB(0x006c29b7);
    /* 006c29b7: call 0x6c29c8 */ r_esp -= 4; W32(r_esp, 0x6c29bcu); f_006c29c8();
    /* 006c29bc: mov eax, 1 */ r_eax = 0x1u;
    /* 006c29c1: ret  */ FN_RET(0x006c29a0); r_esp += 4; return;
L_006c29c2:; BB(0x006c29c2);
    /* 006c29c2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c29c4: ret  */ FN_RET(0x006c29a0); r_esp += 4; return;
}

void f_006c29c8(void) /* sub_6C29C8 */
{
    FN_ENTER(0x006c29c8);
    /* 006c29c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c29c9: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c29ce: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c29d0: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 006c29d6: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c29dc: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_006c29e1:; BB(0x006c29e1);
    /* 006c29e1: movzx ebx, byte ptr [edx + ecx] */ r_ebx = (u32)R8((u32)(r_edx+r_ecx));
    /* 006c29e5: xor eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c29e7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c29ea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c29ec: je 0x6c29f7 */ if (fZ) goto L_006c29f7;
L_006c29ee:; BB(0x006c29ee);
    /* 006c29ee: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c29f0: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c29f5: jmp 0x6c29f9 */ goto L_006c29f9;
L_006c29f7:; BB(0x006c29f7);
    /* 006c29f7: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c29f9:; BB(0x006c29f9);
    /* 006c29f9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c29fb: je 0x6c2a06 */ if (fZ) goto L_006c2a06;
L_006c29fd:; BB(0x006c29fd);
    /* 006c29fd: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c29ff: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a04: jmp 0x6c2a08 */ goto L_006c2a08;
L_006c2a06:; BB(0x006c2a06);
    /* 006c2a06: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a08:; BB(0x006c2a08);
    /* 006c2a08: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2a0a: je 0x6c2a15 */ if (fZ) goto L_006c2a15;
L_006c2a0c:; BB(0x006c2a0c);
    /* 006c2a0c: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2a0e: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a13: jmp 0x6c2a17 */ goto L_006c2a17;
L_006c2a15:; BB(0x006c2a15);
    /* 006c2a15: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a17:; BB(0x006c2a17);
    /* 006c2a17: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2a19: je 0x6c2a24 */ if (fZ) goto L_006c2a24;
L_006c2a1b:; BB(0x006c2a1b);
    /* 006c2a1b: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2a1d: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a22: jmp 0x6c2a26 */ goto L_006c2a26;
L_006c2a24:; BB(0x006c2a24);
    /* 006c2a24: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a26:; BB(0x006c2a26);
    /* 006c2a26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2a28: je 0x6c2a33 */ if (fZ) goto L_006c2a33;
L_006c2a2a:; BB(0x006c2a2a);
    /* 006c2a2a: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2a2c: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a31: jmp 0x6c2a35 */ goto L_006c2a35;
L_006c2a33:; BB(0x006c2a33);
    /* 006c2a33: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a35:; BB(0x006c2a35);
    /* 006c2a35: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2a37: je 0x6c2a42 */ if (fZ) goto L_006c2a42;
L_006c2a39:; BB(0x006c2a39);
    /* 006c2a39: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2a3b: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a40: jmp 0x6c2a44 */ goto L_006c2a44;
L_006c2a42:; BB(0x006c2a42);
    /* 006c2a42: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a44:; BB(0x006c2a44);
    /* 006c2a44: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2a46: je 0x6c2a51 */ if (fZ) goto L_006c2a51;
L_006c2a48:; BB(0x006c2a48);
    /* 006c2a48: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2a4a: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a4f: jmp 0x6c2a53 */ goto L_006c2a53;
L_006c2a51:; BB(0x006c2a51);
    /* 006c2a51: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a53:; BB(0x006c2a53);
    /* 006c2a53: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2a55: je 0x6c2a60 */ if (fZ) goto L_006c2a60;
L_006c2a57:; BB(0x006c2a57);
    /* 006c2a57: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006c2a59: xor eax, 0xedb88320 */ {  u32 a = r_eax; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a5e: jmp 0x6c2a62 */ goto L_006c2a62;
L_006c2a60:; BB(0x006c2a60);
    /* 006c2a60: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_006c2a62:; BB(0x006c2a62);
    /* 006c2a62: cmp edx, 0xaf0 */ {  u32 a = r_edx; u32 b = 0xaf0u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006c2a68: jb 0x6c29e1 */ if (fC) goto L_006c29e1;
L_006c2a6e:; BB(0x006c2a6e);
    /* 006c2a6e: not eax */ r_eax = ~r_eax;
    /* 006c2a70: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006c2a72: call 0x6c2a7c */ r_esp -= 4; W32(r_esp, 0x6c2a77u); f_006c2a7c();
    /* 006c2a77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c2a78: ret  */ FN_RET(0x006c29c8); r_esp += 4; return;
}

void f_006c2a7c(void) /* sub_6C2A7C */
{
    FN_ENTER(0x006c2a7c);
    /* 006c2a7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2a7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2a7e: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c2a81: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2a83: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006c2a86: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006c2a8a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006c2a8e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006c2a92: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006c2a96: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006c2a9a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006c2a9e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006c2aa2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006c2aa6: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006c2aaa: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006c2aae: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006c2ab2: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c2ab6: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c2aba: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c2abe: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c2ac2: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c2ac6: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c2aca: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c2ace: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c2ad2: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c2ad6: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c2ada: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c2ade: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c2ae2: lea esi, [esp] */ r_esi = (u32)(r_esp);
    /* 006c2ae5: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c2aea:; BB(0x006c2aea);
    /* 006c2aea: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c2aec: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c2aef: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c2af1: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c2af4: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2af6: jne 0x6c2aea */ if (!fZ) goto L_006c2aea;
L_006c2af8:; BB(0x006c2af8);
    /* 006c2af8: lea esi, [esp + 0x12] */ r_esi = (u32)(r_esp+0x12u);
    /* 006c2afc: mov edi, 0x9ceb40 */ r_edi = 0x9ceb40u;
L_006c2b01:; BB(0x006c2b01);
    /* 006c2b01: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c2b03: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c2b06: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c2b08: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c2b0b: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c2b0d: jne 0x6c2b01 */ if (!fZ) goto L_006c2b01;
L_006c2b0f:; BB(0x006c2b0f);
    /* 006c2b0f: mov esi, 0xa95e5c */ r_esi = 0xa95e5cu;
    /* 006c2b14: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c2b16: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006c2b19: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006c2b1c: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006c2b1f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c2b23: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006c2b27: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 006c2b2b: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 006c2b2f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c2b32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2b34: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2b35: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c2b3au); f_0061cdb0();
    /* 006c2b3a: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c2b40: mov dword ptr [esp + 0x64], 0xaf0 */ W32((u32)(r_esp+0x64u), 0xaf0u);
    /* 006c2b48: mov eax, 1 */ r_eax = 0x1u;
    /* 006c2b4d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c2b4f: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 006c2b54: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 006c2b59: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 006c2b5d: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 006c2b62: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 006c2b66: lea esi, [esp + 8] */ r_esi = (u32)(r_esp+0x8u);
    /* 006c2b6a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2b6b: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2b71: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c2b76u); f_0082c34c();
    /* 006c2b76: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006c2b7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2b7b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c2b80u); f_0061cdb0();
    /* 006c2b80: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c2b83: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c2b84: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c2b85: ret  */ FN_RET(0x006c2a7c); r_esp += 4; return;
}

void f_006c2b88(void) /* sub_6C2B88 */
{
    FN_ENTER(0x006c2b88);
    /* 006c2b88: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006c2b8c: push dword ptr [0xa95dc8] */ { u32 v = R32((u32)(0xa95dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2b92: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2b98: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c2ba2: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ba8: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c2bad: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6c2bb2u); f_00828928();
    /* 006c2bb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c2bb5: ret  */ FN_RET(0x006c2b88); r_esp += 4; return;
}

void f_006c2b8c(void)
{
    FN_ENTER(0x006c2b8c);
    /* 006c2b8c: push dword ptr [0xa95dc8] */ { u32 v = R32((u32)(0xa95dc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2b92: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2b98: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c2ba2: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ba8: mov dword ptr [0xa95dcc], eax */ W32((u32)(0xa95dccu), r_eax);
    /* 006c2bad: call 0x828928 */ r_esp -= 4; W32(r_esp, 0x6c2bb2u); f_00828928();
    /* 006c2bb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c2bb5: ret  */ FN_RET(0x006c2b8c); r_esp += 4; return;
}

void f_006c2bb8(void) /* sub_6C2BB8 */
{
    FN_ENTER(0x006c2bb8);
    /* 006c2bb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c2bb9: mov ebp, esp */ r_ebp = r_esp;
    /* 006c2bbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2bbd: push 0x8ec6c0 */ { u32 v = 0x8ec6c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2bc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c2bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2bc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c2bd0: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c2bd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c2bd6: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c2bd9: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c2bdc: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c2bdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2be1: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c2be4: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c2beb: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2bf0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c2bf5u); f_008581c5();
    /* 006c2bf5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c2bf8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2bfb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c2bfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2c00: je 0x6c2d6e */ if (fZ) goto L_006c2d6e;
L_006c2c06:; BB(0x006c2c06);
    /* 006c2c06: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006c2c0d: mov esi, eax */ r_esi = r_eax;
    /* 006c2c0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2c11: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c2c17: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c2c1d: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c2c23: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c2c29: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c2c2f: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c2c35: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c2c3b: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c2c41: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c2c48: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_006c2c4b:; BB(0x006c2c4b);
    /* 006c2c4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c2c52: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2c55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2c57: je 0x6c2d78 */ if (fZ) goto L_006c2d78;
L_006c2c5d:; BB(0x006c2c5d);
    /* 006c2c5d: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2c62: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2c68: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c2c6du); f_0082c198();
    /* 006c2c6d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2c70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2c72: jne 0x6c2d4a */ if (!fZ) goto L_006c2d4a;
L_006c2c78:; BB(0x006c2c78);
    /* 006c2c78: mov eax, dword ptr [0xa95dc8] */ r_eax = R32((u32)(0xa95dc8u));
    /* 006c2c7d: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c2c87: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c2c8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2c8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2c8d: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2c93: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c2c98u); f_0086b688();
    /* 006c2c98: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2c9e: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ca3: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2ca9: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2caeu); f_006dc358();
    /* 006c2cae: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2cb1: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c2cb6u); f_006ffa24();
L_006c2cb6:; BB(0x006c2cb6);
    /* 006c2cb6: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2cbc: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2cc1u); f_006dc358();
    /* 006c2cc1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2cc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2cc4: je 0x6c2d03 */ if (fZ) goto L_006c2d03;
L_006c2cc6:; BB(0x006c2cc6);
    /* 006c2cc6: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006c2ccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2ccd: je 0x6c2cfc */ if (fZ) goto L_006c2cfc;
L_006c2ccf:; BB(0x006c2ccf);
    /* 006c2ccf: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2cd4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c2cd9u); f_0061cdb0();
    /* 006c2cd9: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c2cdeu); f_007becd4();
    /* 006c2cde: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2ce3: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c2ce8u); f_0081888c();
    /* 006c2ce8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2ced: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c2cf2u); f_00817604();
    /* 006c2cf2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2cf7: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c2cfcu); f_00818f80();
L_006c2cfc:; BB(0x006c2cfc);
    /* 006c2cfc: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c2d01u); f_0080030c();
    /* 006c2d01: jmp 0x6c2cb6 */ goto L_006c2cb6;
L_006c2d03:; BB(0x006c2d03);
    /* 006c2d03: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2d06: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006c2d10: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d15: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2d1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d1c: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c2d21u); f_0086b6b8();
    /* 006c2d21: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2d24: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c2d2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2d2d: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c2d33: cmp edx, dword ptr [ecx + 0x110] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2d39: je 0x6c2d42 */ if (fZ) goto L_006c2d42;
L_006c2d3b:; BB(0x006c2d3b);
    /* 006c2d3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2d3d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c2d40: jmp 0x6c2d4a */ goto L_006c2d4a;
L_006c2d42:; BB(0x006c2d42);
    /* 006c2d42: mov eax, 1 */ r_eax = 0x1u;
    /* 006c2d47: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006c2d4a:; BB(0x006c2d4a);
    /* 006c2d4a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2d4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d4e: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c2d53u); f_00857e98();
    /* 006c2d53: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2d54: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c2d57: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c2d5a: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c2d5d: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c2d60: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c2d63: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2d6a: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2d6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2d6d: ret  */ FN_RET(0x006c2bb8); r_esp += 4; return;
L_006c2d6e:; BB(0x006c2d6e);
    /* 006c2d6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2d70: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c2d73: jmp 0x6c2c4b */ goto L_006c2c4b;
L_006c2d78:; BB(0x006c2d78);
    /* 006c2d78: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c2d7b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2d7d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c2d80: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2d87: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2d89: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2d8a: ret  */ FN_RET(0x006c2bb8); r_esp += 4; return;
}

void f_006c2d8c(void) /* sub_6C2D8C */
{
    FN_ENTER(0x006c2d8c);
    /* 006c2d8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d8d: mov ebp, esp */ r_ebp = r_esp;
    /* 006c2d8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d91: push 0x8ec6e8 */ { u32 v = 0x8ec6e8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c2d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2d9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c2da4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c2da7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c2daa: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006c2dad: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006c2db0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006c2db3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2db5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c2db8: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006c2dbf: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2dc4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6c2dc9u); f_008581c5();
    /* 006c2dc9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c2dcc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2dcf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006c2dd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2dd4: je 0x6c2f49 */ if (fZ) goto L_006c2f49;
L_006c2dda:; BB(0x006c2dda);
    /* 006c2dda: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006c2de1: mov esi, eax */ r_esi = r_eax;
    /* 006c2de3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2de5: mov dword ptr [esi + 0x2b8], eax */ W32((u32)(r_esi+0x2b8u), r_eax);
    /* 006c2deb: mov dword ptr [esi + 0x2bc], eax */ W32((u32)(r_esi+0x2bcu), r_eax);
    /* 006c2df1: mov dword ptr [esi + 0x2c0], eax */ W32((u32)(r_esi+0x2c0u), r_eax);
    /* 006c2df7: mov dword ptr [esi + 0x2c4], eax */ W32((u32)(r_esi+0x2c4u), r_eax);
    /* 006c2dfd: mov byte ptr [esi + 0x2c8], al */ W8((u32)(r_esi+0x2c8u), (u8)r_eax);
    /* 006c2e03: mov byte ptr [esi + 0x2c9], al */ W8((u32)(r_esi+0x2c9u), (u8)r_eax);
    /* 006c2e09: mov byte ptr [esi + 0x2ca], al */ W8((u32)(r_esi+0x2cau), (u8)r_eax);
    /* 006c2e0f: mov byte ptr [esi + 0x2cb], al */ W8((u32)(r_esi+0x2cbu), (u8)r_eax);
    /* 006c2e15: mov word ptr [esi + 0x2cc], ax */ W16((u32)(r_esi+0x2ccu), (u16)r_eax);
    /* 006c2e1c: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
L_006c2e1f:; BB(0x006c2e1f);
    /* 006c2e1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c2e26: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2e29: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2e2b: je 0x6c2f42 */ if (fZ) goto L_006c2f42;
L_006c2e31:; BB(0x006c2e31);
    /* 006c2e31: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2e36: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2e3c: call 0x82c198 */ r_esp -= 4; W32(r_esp, 0x6c2e41u); f_0082c198();
    /* 006c2e41: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2e44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2e46: jne 0x6c2f1e */ if (!fZ) goto L_006c2f1e;
L_006c2e4c:; BB(0x006c2e4c);
    /* 006c2e4c: mov eax, dword ptr [0xa95dc8] */ r_eax = R32((u32)(0xa95dc8u));
    /* 006c2e51: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c2e5b: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c2e5e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2e5f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2e61: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2e67: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6c2e6cu); f_0086b688();
    /* 006c2e6c: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2e72: push 0x9ceb0c */ { u32 v = 0x9ceb0cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2e77: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2e7d: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2e82u); f_006dc358();
    /* 006c2e82: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2e85: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c2e8au); f_006ffa24();
L_006c2e8a:; BB(0x006c2e8a);
    /* 006c2e8a: push dword ptr [0xa95dcc] */ { u32 v = R32((u32)(0xa95dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2e90: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c2e95u); f_006dc358();
    /* 006c2e95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2e96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2e98: je 0x6c2ed7 */ if (fZ) goto L_006c2ed7;
L_006c2e9a:; BB(0x006c2e9a);
    /* 006c2e9a: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 006c2e9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2ea1: je 0x6c2ed0 */ if (fZ) goto L_006c2ed0;
L_006c2ea3:; BB(0x006c2ea3);
    /* 006c2ea3: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2ea8: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c2eadu); f_0061cdb0();
    /* 006c2ead: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x6c2eb2u); f_007becd4();
    /* 006c2eb2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2eb7: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x6c2ebcu); f_0081888c();
    /* 006c2ebc: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2ec1: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x6c2ec6u); f_00817604();
    /* 006c2ec6: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 006c2ecb: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x6c2ed0u); f_00818f80();
L_006c2ed0:; BB(0x006c2ed0);
    /* 006c2ed0: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x6c2ed5u); f_0080030c();
    /* 006c2ed5: jmp 0x6c2e8a */ goto L_006c2e8a;
L_006c2ed7:; BB(0x006c2ed7);
    /* 006c2ed7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2eda: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006c2ee4: push 0xaf0 */ { u32 v = 0xaf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ee9: push dword ptr [0xa95e24] */ { u32 v = R32((u32)(0xa95e24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2eef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ef0: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c2ef5u); f_0086b6b8();
    /* 006c2ef5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c2ef8: mov ecx, dword ptr [0xa95df0] */ r_ecx = R32((u32)(0xa95df0u));
    /* 006c2efe: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2f01: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c2f07: cmp edx, dword ptr [ecx + 0x110] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x110u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2f0d: je 0x6c2f16 */ if (fZ) goto L_006c2f16;
L_006c2f0f:; BB(0x006c2f0f);
    /* 006c2f0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2f11: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c2f14: jmp 0x6c2f1e */ goto L_006c2f1e;
L_006c2f16:; BB(0x006c2f16);
    /* 006c2f16: mov eax, 1 */ r_eax = 0x1u;
    /* 006c2f1b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_006c2f1e:; BB(0x006c2f1e);
    /* 006c2f1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006c2f21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c2f22: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6c2f27u); f_00857e98();
    /* 006c2f27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006c2f28:; BB(0x006c2f28);
    /* 006c2f28: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006c2f2b: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006c2f2e: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c2f31: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006c2f34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c2f37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c2f3e: mov esp, ebp */ r_esp = r_ebp;
    /* 006c2f40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c2f41: ret  */ FN_RET(0x006c2d8c); r_esp += 4; return;
L_006c2f42:; BB(0x006c2f42);
    /* 006c2f42: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2f44: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006c2f47: jmp 0x6c2f28 */ goto L_006c2f28;
L_006c2f49:; BB(0x006c2f49);
    /* 006c2f49: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c2f4b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006c2f4e: jmp 0x6c2e1f */ goto L_006c2e1f;
}

void f_006c2f54(void) /* sub_6C2F54 */
{
    FN_ENTER(0x006c2f54);
    /* 006c2f54: call 0x6ffa24 */ r_esp -= 4; W32(r_esp, 0x6c2f59u); f_006ffa24();
    /* 006c2f59: mov eax, dword ptr [0xa95dfc] */ r_eax = R32((u32)(0xa95dfcu));
    /* 006c2f5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2f60: je 0x6c2fca */ if (fZ) goto L_006c2fca;
L_006c2f62:; BB(0x006c2f62);
    /* 006c2f62: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c2f67: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2f69: je 0x6c2fca */ if (fZ) goto L_006c2fca;
L_006c2f6b:; BB(0x006c2f6b);
    /* 006c2f6b: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c2f70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c2f72: je 0x6c2fca */ if (fZ) goto L_006c2fca;
L_006c2f74:; BB(0x006c2f74);
    /* 006c2f74: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2f7a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6c2f7fu); f_0068d5a8();
    /* 006c2f7f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c2f80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2f82: je 0x6c2faf */ if (fZ) goto L_006c2faf;
L_006c2f84:; BB(0x006c2f84);
    /* 006c2f84: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6c2f89u); f_00687c48();
    /* 006c2f89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2f8b: jne 0x6c2faf */ if (!fZ) goto L_006c2faf;
L_006c2f8d:; BB(0x006c2f8d);
    /* 006c2f8d: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 006c2f92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2f94: je 0x6c2f9e */ if (fZ) goto L_006c2f9e;
L_006c2f96:; BB(0x006c2f96);
    /* 006c2f96: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 006c2f99: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2f9c: je 0x6c2fd0 */ if (fZ) goto L_006c2fd0;
L_006c2f9e:; BB(0x006c2f9e);
    /* 006c2f9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006c2fa0:; BB(0x006c2fa0);
    /* 006c2fa0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2fa3: je 0x6c2faf */ if (fZ) goto L_006c2faf;
L_006c2fa5:; BB(0x006c2fa5);
    /* 006c2fa5: call 0x6aa8e8 */ r_esp -= 4; W32(r_esp, 0x6c2faau); f_006aa8e8();
    /* 006c2faa: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6c2fafu); f_007083d4();
L_006c2faf:; BB(0x006c2faf);
    /* 006c2faf: mov eax, dword ptr [0xa95df8] */ r_eax = R32((u32)(0xa95df8u));
    /* 006c2fb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c2fb6: je 0x6c2fbb */ if (fZ) goto L_006c2fbb;
L_006c2fb8:; BB(0x006c2fb8);
    /* 006c2fb8: and dword ptr [eax], 0xfffffffc */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_006c2fbb:; BB(0x006c2fbb);
    /* 006c2fbb: call 0x6c267c */ r_esp -= 4; W32(r_esp, 0x6c2fc0u); f_006c267c();
    /* 006c2fc0: call 0x6bb4d8 */ r_esp -= 4; W32(r_esp, 0x6c2fc5u); f_006bb4d8();
    /* 006c2fc5: call 0x6c2fd8 */ r_esp -= 4; W32(r_esp, 0x6c2fcau); f_006c2fd8();
L_006c2fca:; BB(0x006c2fca);
    /* 006c2fca: mov eax, 0xffff0000 */ r_eax = 0xffff0000u;
    /* 006c2fcf: ret  */ FN_RET(0x006c2f54); r_esp += 4; return;
L_006c2fd0:; BB(0x006c2fd0);
    /* 006c2fd0: mov eax, 1 */ r_eax = 0x1u;
    /* 006c2fd5: jmp 0x6c2fa0 */ goto L_006c2fa0;
}

void f_006c2fd8(void) /* sub_6C2FD8 */
{
    FN_ENTER(0x006c2fd8);
    /* 006c2fd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2fd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c2fda: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c2fdd: imul ecx, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c2fe7: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 006c2fec: push 0x4dc */ { u32 v = 0x4dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c2ff1: push dword ptr [0xa95dfc] */ { u32 v = R32((u32)(0xa95dfcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c2ff7: mov edx, dword ptr [eax + 0x110] */ r_edx = R32((u32)(r_eax+0x110u));
    /* 006c2ffd: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c3002: mov dword ptr [0xa95dc4], edx */ W32((u32)(0xa95dc4u), r_edx);
    /* 006c3008: mov dword ptr [0xa95dc0], edx */ W32((u32)(0xa95dc0u), r_edx);
    /* 006c300e: lea eax, [ecx + eax + 4] */ r_eax = (u32)(r_ecx+r_eax+0x4u);
    /* 006c3012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3013: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c3018u); f_0086b6b8();
    /* 006c3018: imul eax, dword ptr [0xa95e48], 0x2ea4 */ { i64 t = (i64)(i32)R32((u32)(0xa95e48u)) * (i64)(i32)0x2ea4u; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006c3022: mov edx, dword ptr [0xa95e44] */ r_edx = R32((u32)(0xa95e44u));
    /* 006c3028: push 0x29c8 */ { u32 v = 0x29c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c302d: push dword ptr [0xa95df8] */ { u32 v = R32((u32)(0xa95df8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3033: lea ecx, [eax + edx + 0x4e0] */ r_ecx = (u32)(r_eax+r_edx+0x4e0u);
    /* 006c303a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c303b: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c3040u); f_0086b6b8();
    /* 006c3040: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c3043: mov eax, dword ptr [0xa95e44] */ r_eax = R32((u32)(0xa95e44u));
    /* 006c3048: call 0x6c26fc */ r_esp -= 4; W32(r_esp, 0x6c304du); f_006c26fc();
    /* 006c304d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c304f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006c3053: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006c3057: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006c305b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006c305f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006c3063: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006c3067: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006c306b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006c306f: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006c3073: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006c3077: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006c307b: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c307f: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c3083: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c3087: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c308b: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c308f: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c3093: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c3097: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c309b: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c309f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c30a3: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c30a7: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c30ab: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006c30af: lea esi, [esp + 4] */ r_esi = (u32)(r_esp+0x4u);
    /* 006c30b3: mov edi, 0x9ceb2c */ r_edi = 0x9ceb2cu;
L_006c30b8:; BB(0x006c30b8);
    /* 006c30b8: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c30ba: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c30bd: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c30bf: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c30c2: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c30c4: jne 0x6c30b8 */ if (!fZ) goto L_006c30b8;
L_006c30c6:; BB(0x006c30c6);
    /* 006c30c6: lea esi, [esp + 0x16] */ r_esi = (u32)(r_esp+0x16u);
    /* 006c30ca: mov edi, 0x9ceae8 */ r_edi = 0x9ceae8u;
L_006c30cf:; BB(0x006c30cf);
    /* 006c30cf: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006c30d1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c30d4: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006c30d6: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006c30d9: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c30db: jne 0x6c30cf */ if (!fZ) goto L_006c30cf;
L_006c30dd:; BB(0x006c30dd);
    /* 006c30dd: mov esi, 0xa95e6c */ r_esi = 0xa95e6cu;
    /* 006c30e2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006c30e4: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006c30e7: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 006c30ea: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006c30ed: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c30f1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006c30f5: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006c30f9: mov dword ptr [esp + 0x44], edi */ W32((u32)(r_esp+0x44u), r_edi);
    /* 006c30fd: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 006c3101: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006c3103: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c3104: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c3109u); f_0061cdb0();
    /* 006c3109: mov ecx, dword ptr [0xa95e44] */ r_ecx = R32((u32)(0xa95e44u));
    /* 006c310f: mov dword ptr [esp + 0x68], 0xbaa4 */ W32((u32)(r_esp+0x68u), 0xbaa4u);
    /* 006c3117: mov eax, 1 */ r_eax = 0x1u;
    /* 006c311c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c311e: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 006c3123: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 006c3128: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 006c312c: mov word ptr [esp + 0x60], dx */ W16((u32)(r_esp+0x60u), (u16)r_edx);
    /* 006c3131: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 006c3135: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 006c3139: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c313a: push dword ptr [0xa95e2c] */ { u32 v = R32((u32)(0xa95e2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c3140: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c3145u); f_0082c34c();
    /* 006c3145: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 006c3149: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c314a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c314fu); f_0061cdb0();
    /* 006c314f: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c3152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c3153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c3154: ret  */ FN_RET(0x006c2fd8); r_esp += 4; return;
}

