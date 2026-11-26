#include "protos.h"

void f_0086603f(void) /* __commit */
{
    FN_ENTER(0x0086603f);
    /* 0086603f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00866041: push 0x9993d0 */ { u32 v = 0x9993d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866046: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x86604bu); f_0085e5ac();
    /* 0086604b: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 0086604e: cmp ebx, dword ptr [0xaf0a60] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00866054: jae 0x8660e7 */ if (!fC) goto L_008660e7;
L_0086605a:; BB(0x0086605a);
    /* 0086605a: mov eax, ebx */ r_eax = r_ebx;
    /* 0086605c: sar eax, 5 */ { u32 c = (5u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0086605f: lea edi, [eax*4 + 0xaf0a80] */ r_edi = (u32)(r_eax*4+0xaf0a80u);
    /* 00866066: mov eax, ebx */ r_eax = r_ebx;
    /* 00866068: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0086606b: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 0086606e: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00866071: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00866073: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866078: je 0x8660e7 */ if (fZ) goto L_008660e7;
L_0086607a:; BB(0x0086607a);
    /* 0086607a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086607b: call 0x863b11 */ r_esp -= 4; W32(r_esp, 0x866080u); f_00863b11();
    /* 00866080: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866081: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00866085: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00866087: test byte ptr [eax + esi + 4], 1 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086608c: je 0x8660bf */ if (fZ) goto L_008660bf;
L_0086608e:; BB(0x0086608e);
    /* 0086608e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086608f: call 0x863ad0 */ r_esp -= 4; W32(r_esp, 0x866094u); f_00863ad0();
    /* 00866094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866096: call dword ptr [0x8f829c] */ { u32 t = R32((u32)(0x8f829cu)); r_esp -= 4; W32(r_esp, 0x86609cu); call_ind(t); }
    /* 0086609c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086609e: jne 0x8660ab */ if (!fZ) goto L_008660ab;
L_008660a0:; BB(0x008660a0);
    /* 008660a0: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8660a6u); call_ind(t); }
    /* 008660a6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 008660a9: jmp 0x8660af */ goto L_008660af;
L_008660ab:; BB(0x008660ab);
    /* 008660ab: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008660af:; BB(0x008660af);
    /* 008660af: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008660b3: je 0x8660ce */ if (fZ) goto L_008660ce;
L_008660b5:; BB(0x008660b5);
    /* 008660b5: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8660bau); f_00859ddf();
    /* 008660ba: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 008660bd: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
L_008660bf:; BB(0x008660bf);
    /* 008660bf: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8660c4u); f_00859dd6();
    /* 008660c4: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008660ca: or dword ptr [ebp - 0x1c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_008660ce:; BB(0x008660ce);
    /* 008660ce: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 008660d2: call 0x8660df */ r_esp -= 4; W32(r_esp, 0x8660d7u); f_008660df();
    /* 008660d7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008660da: jmp 0x8660f5 */ goto L_008660f5;
L_008660e7:; BB(0x008660e7);
    /* 008660e7: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8660ecu); f_00859dd6();
    /* 008660ec: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008660f2: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_008660f5:; BB(0x008660f5);
    /* 008660f5: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8660fau); f_0085e5e7();
    /* 008660fa: ret  */ FN_RET(0x0086603f); r_esp += 4; return;
}

void f_008660dc(void)
{
    FN_ENTER(0x008660dc);
    /* 008660dc: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008660df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008660e0: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8660e5u); f_00863bb1();
    /* 008660e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008660e6: ret  */ FN_RET(0x008660dc); r_esp += 4; return;
}

void f_008660df(void)
{
    FN_ENTER(0x008660df);
    /* 008660df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008660e0: call 0x863bb1 */ r_esp -= 4; W32(r_esp, 0x8660e5u); f_00863bb1();
    /* 008660e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008660e6: ret  */ FN_RET(0x008660df); r_esp += 4; return;
}

void f_008660fb(void) /* __fcloseall */
{
    FN_ENTER(0x008660fb);
    /* 008660fb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008660fd: push 0x9993e0 */ { u32 v = 0x9993e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866102: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x866107u); f_0085e5ac();
    /* 00866107: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00866109: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0086610c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086610e: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x866113u); f_0085e57a();
    /* 00866113: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866114: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
    /* 00866117: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00866119: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
L_0086611a:; BB(0x0086611a);
    /* 0086611a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0086611d: cmp edi, dword ptr [0xaf1bc0] */ {  u32 a = r_edi; u32 b = R32((u32)(0xaf1bc0u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866123: jge 0x86617b */ if ((fS==fO)) goto L_0086617b;
L_00866125:; BB(0x00866125);
    /* 00866125: mov esi, edi */ r_esi = r_edi;
    /* 00866127: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0086612a: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 0086612f: mov eax, dword ptr [esi + eax] */ r_eax = R32((u32)(r_esi+r_eax));
    /* 00866132: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866134: je 0x866178 */ if (fZ) goto L_00866178;
L_00866136:; BB(0x00866136);
    /* 00866136: test byte ptr [eax + 0xc], 0x83 */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = 0x83u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086613a: je 0x86614b */ if (fZ) goto L_0086614b;
L_0086613c:; BB(0x0086613c);
    /* 0086613c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086613d: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x866142u); f_00859710();
    /* 00866142: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866143: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866146: je 0x86614b */ if (fZ) goto L_0086614b;
L_00866148:; BB(0x00866148);
    /* 00866148: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086614b:; BB(0x0086614b);
    /* 0086614b: cmp edi, 0x14 */ {  u32 a = r_edi; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086614e: jl 0x866178 */ if ((fS!=fO)) goto L_00866178;
L_00866150:; BB(0x00866150);
    /* 00866150: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 00866155: mov eax, dword ptr [esi + eax] */ r_eax = R32((u32)(r_esi+r_eax));
    /* 00866158: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086615b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086615c: call dword ptr [0x8f81b0] */ { u32 t = R32((u32)(0x8f81b0u)); r_esp -= 4; W32(r_esp, 0x866162u); call_ind(t); }
    /* 00866162: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 00866167: push dword ptr [esi + eax] */ { u32 v = R32((u32)(r_esi+r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0086616a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x86616fu); f_00858882();
    /* 0086616f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866170: mov eax, dword ptr [0xaf0ba4] */ r_eax = R32((u32)(0xaf0ba4u));
    /* 00866175: mov dword ptr [esi + eax], ebx */ W32((u32)(r_esi+r_eax), r_ebx);
L_00866178:; BB(0x00866178);
    /* 00866178: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00866179: jmp 0x86611a */ goto L_0086611a;
L_0086617b:; BB(0x0086617b);
    /* 0086617b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086617f: call 0x86618d */ r_esp -= 4; W32(r_esp, 0x866184u); f_0086618d();
    /* 00866184: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00866187: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86618cu); f_0085e5e7();
    /* 0086618c: ret  */ FN_RET(0x008660fb); r_esp += 4; return;
}

void f_0086618d(void)
{
    FN_ENTER(0x0086618d);
    /* 0086618d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086618f: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x866194u); f_0085e4c5();
    /* 00866194: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866195: ret  */ FN_RET(0x0086618d); r_esp += 4; return;
}

void f_008661f7(void)
{
    FN_ENTER(0x008661f7);
    /* 008661f7: push dword ptr [0xae7e5c] */ { u32 v = R32((u32)(0xae7e5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008661fd: call dword ptr [0x8f82a0] */ { u32 t = R32((u32)(0x8f82a0u)); r_esp -= 4; W32(r_esp, 0x866203u); call_ind(t); }
    /* 00866203: ret  */ FN_RET(0x008661f7); r_esp += 4; return;
}

void f_00866254(void) /* _CPtoLCID */
{
    FN_ENTER(0x00866254);
    /* 00866254: sub eax, 0x3a4 */ {  u32 a = r_eax; u32 b = 0x3a4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866259: je 0x86627d */ if (fZ) goto L_0086627d;
L_0086625b:; BB(0x0086625b);
    /* 0086625b: sub eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086625e: je 0x866277 */ if (fZ) goto L_00866277;
L_00866260:; BB(0x00866260);
    /* 00866260: sub eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866263: je 0x866271 */ if (fZ) goto L_00866271;
L_00866265:; BB(0x00866265);
    /* 00866265: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866266: je 0x86626b */ if (fZ) goto L_0086626b;
L_00866268:; BB(0x00866268);
    /* 00866268: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086626a: ret  */ FN_RET(0x00866254); r_esp += 4; return;
L_0086626b:; BB(0x0086626b);
    /* 0086626b: mov eax, 0x404 */ r_eax = 0x404u;
    /* 00866270: ret  */ FN_RET(0x00866254); r_esp += 4; return;
L_00866271:; BB(0x00866271);
    /* 00866271: mov eax, 0x412 */ r_eax = 0x412u;
    /* 00866276: ret  */ FN_RET(0x00866254); r_esp += 4; return;
L_00866277:; BB(0x00866277);
    /* 00866277: mov eax, 0x804 */ r_eax = 0x804u;
    /* 0086627c: ret  */ FN_RET(0x00866254); r_esp += 4; return;
L_0086627d:; BB(0x0086627d);
    /* 0086627d: mov eax, 0x411 */ r_eax = 0x411u;
    /* 00866282: ret  */ FN_RET(0x00866254); r_esp += 4; return;
}

void f_00866283(void) /* _setSBCS */
{
    FN_ENTER(0x00866283);
    /* 00866283: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866284: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00866286: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866288: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866289: mov edi, 0xaf0840 */ r_edi = 0xaf0840u;
    /* 0086628e: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00866290: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00866291: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866293: mov dword ptr [0xaf0944], eax */ W32((u32)(0xaf0944u), r_eax);
    /* 00866298: mov dword ptr [0xaf083c], eax */ W32((u32)(0xaf083cu), r_eax);
    /* 0086629d: mov dword ptr [0xaf0834], eax */ W32((u32)(0xaf0834u), r_eax);
    /* 008662a2: mov edi, 0xaf0950 */ r_edi = 0xaf0950u;
    /* 008662a7: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008662a8: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008662a9: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008662aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008662ab: ret  */ FN_RET(0x00866283); r_esp += 4; return;
}

void f_008662ac(void) /* _setSBUpLow */
{
    FN_ENTER(0x008662ac);
    /* 008662ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008662ad: mov ebp, esp */ r_ebp = r_esp;
    /* 008662af: sub esp, 0x518 */ {  u32 a = r_esp; u32 b = 0x518u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008662b5: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 008662ba: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008662bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008662be: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008662c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008662c2: push dword ptr [0xaf0944] */ { u32 v = R32((u32)(0xaf0944u)); r_esp -= 4; W32(r_esp, v); }
    /* 008662c8: call dword ptr [0x8f82b4] */ { u32 t = R32((u32)(0x8f82b4u)); r_esp -= 4; W32(r_esp, 0x8662ceu); call_ind(t); }
    /* 008662ce: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008662d1: mov esi, 0x100 */ r_esi = 0x100u;
    /* 008662d6: jne 0x8663e9 */ if (!fZ) goto L_008663e9;
L_008662dc:; BB(0x008662dc);
    /* 008662dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008662de:; BB(0x008662de);
    /* 008662de: mov byte ptr [ebp + eax - 0x118], al */ W8((u32)(r_ebp+r_eax+0xfffffee8u), (u8)r_eax);
    /* 008662e5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008662e6: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008662e8: jb 0x8662de */ if (fC) goto L_008662de;
L_008662ea:; BB(0x008662ea);
    /* 008662ea: mov al, byte ptr [ebp - 0x12] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0xffffffeeu))) & 0xffu);
    /* 008662ed: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008662ef: mov byte ptr [ebp - 0x118], 0x20 */ W8((u32)(r_ebp+0xfffffee8u), 0x20u);
    /* 008662f6: je 0x86632e */ if (fZ) goto L_0086632e;
L_008662f8:; BB(0x008662f8);
    /* 008662f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008662f9: lea edx, [ebp - 0x11] */ r_edx = (u32)(r_ebp+0xffffffefu);
    /* 008662fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008662fd:; BB(0x008662fd);
    /* 008662fd: movzx ecx, byte ptr [edx] */ r_ecx = (u32)R8((u32)(r_edx));
    /* 00866300: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00866303: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00866305: ja 0x866324 */ if ((!fC&&!fZ)) goto L_00866324;
L_00866307:; BB(0x00866307);
    /* 00866307: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00866309: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0086630a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086630c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0086630f: lea edi, [ebp + eax - 0x118] */ r_edi = (u32)(r_ebp+r_eax+0xfffffee8u);
    /* 00866316: mov eax, 0x20202020 */ r_eax = 0x20202020u;
    /* 0086631b: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0086631d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0086631f: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00866322: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
L_00866324:; BB(0x00866324);
    /* 00866324: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00866325: mov al, byte ptr [edx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00866327: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00866328: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086632a: jne 0x8662fd */ if (!fZ) goto L_008662fd;
L_0086632c:; BB(0x0086632c);
    /* 0086632c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0086632d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0086632e:; BB(0x0086632e);
    /* 0086632e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866330: push dword ptr [0xaf0834] */ { u32 v = R32((u32)(0xaf0834u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866336: lea eax, [ebp - 0x518] */ r_eax = (u32)(r_ebp+0xfffffae8u);
    /* 0086633c: push dword ptr [0xaf0944] */ { u32 v = R32((u32)(0xaf0944u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866343: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866344: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0086634a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086634b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086634d: call 0x8686c8 */ r_esp -= 4; W32(r_esp, 0x866352u); f_008686c8();
    /* 00866352: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866354: push dword ptr [0xaf0944] */ { u32 v = R32((u32)(0xaf0944u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086635a: lea eax, [ebp - 0x218] */ r_eax = (u32)(r_ebp+0xfffffde8u);
    /* 00866360: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866361: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866362: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866363: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 00866369: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086636a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086636b: push dword ptr [0xaf0834] */ { u32 v = R32((u32)(0xaf0834u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866371: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x866376u); f_00860103();
    /* 00866376: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866378: push dword ptr [0xaf0944] */ { u32 v = R32((u32)(0xaf0944u)); r_esp -= 4; W32(r_esp, v); }
    /* 0086637e: lea eax, [ebp - 0x318] */ r_eax = (u32)(r_ebp+0xfffffce8u);
    /* 00866384: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866385: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866386: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866387: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0086638d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086638e: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00866393: push dword ptr [0xaf0834] */ { u32 v = R32((u32)(0xaf0834u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866399: call 0x860103 */ r_esp -= 4; W32(r_esp, 0x86639eu); f_00860103();
    /* 0086639e: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008663a1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008663a3:; BB(0x008663a3);
    /* 008663a3: mov cx, word ptr [ebp + eax*2 - 0x518] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_ebp+r_eax*2+0xfffffae8u))) & 0xffffu);
    /* 008663ab: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008663ae: je 0x8663c6 */ if (fZ) goto L_008663c6;
L_008663b0:; BB(0x008663b0);
    /* 008663b0: or byte ptr [eax + 0xaf0841], 0x10 */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008663b7: mov cl, byte ptr [ebp + eax - 0x218] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xfffffde8u))) & 0xffu);
L_008663be:; BB(0x008663be);
    /* 008663be: mov byte ptr [eax + 0xaf0960], cl */ W8((u32)(r_eax+0xaf0960u), (u8)r_ecx);
    /* 008663c4: jmp 0x8663e2 */ goto L_008663e2;
L_008663c6:; BB(0x008663c6);
    /* 008663c6: test cl, 2 */ {  u32 a = (u8)r_ecx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008663c9: je 0x8663db */ if (fZ) goto L_008663db;
L_008663cb:; BB(0x008663cb);
    /* 008663cb: or byte ptr [eax + 0xaf0841], 0x20 */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008663d2: mov cl, byte ptr [ebp + eax - 0x318] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+r_eax+0xfffffce8u))) & 0xffu);
    /* 008663d9: jmp 0x8663be */ goto L_008663be;
L_008663db:; BB(0x008663db);
    /* 008663db: mov byte ptr [eax + 0xaf0960], 0 */ W8((u32)(r_eax+0xaf0960u), 0x0u);
L_008663e2:; BB(0x008663e2);
    /* 008663e2: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008663e3: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008663e5: jb 0x8663a3 */ if (fC) goto L_008663a3;
L_008663e7:; BB(0x008663e7);
    /* 008663e7: jmp 0x86642d */ goto L_0086642d;
L_008663e9:; BB(0x008663e9);
    /* 008663e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008663eb:; BB(0x008663eb);
    /* 008663eb: cmp eax, 0x41 */ {  u32 a = r_eax; u32 b = 0x41u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008663ee: jb 0x866409 */ if (fC) goto L_00866409;
L_008663f0:; BB(0x008663f0);
    /* 008663f0: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008663f3: ja 0x866409 */ if ((!fC&&!fZ)) goto L_00866409;
L_008663f5:; BB(0x008663f5);
    /* 008663f5: or byte ptr [eax + 0xaf0841], 0x10 */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = 0x10u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 008663fc: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 008663fe: add cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
L_00866401:; BB(0x00866401);
    /* 00866401: mov byte ptr [eax + 0xaf0960], cl */ W8((u32)(r_eax+0xaf0960u), (u8)r_ecx);
    /* 00866407: jmp 0x866428 */ goto L_00866428;
L_00866409:; BB(0x00866409);
    /* 00866409: cmp eax, 0x61 */ {  u32 a = r_eax; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086640c: jb 0x866421 */ if (fC) goto L_00866421;
L_0086640e:; BB(0x0086640e);
    /* 0086640e: cmp eax, 0x7a */ {  u32 a = r_eax; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00866411: ja 0x866421 */ if ((!fC&&!fZ)) goto L_00866421;
L_00866413:; BB(0x00866413);
    /* 00866413: or byte ptr [eax + 0xaf0841], 0x20 */ { u32 ad = (u32)(r_eax+0xaf0841u);  u32 a = R8(ad); u32 b = 0x20u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 0086641a: mov cl, al */ r_ecx = (r_ecx & 0xffffff00u) | (((u8)r_eax) & 0xffu);
    /* 0086641c: sub cl, 0x20 */ {  u32 a = (u8)r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0086641f: jmp 0x866401 */ goto L_00866401;
L_00866421:; BB(0x00866421);
    /* 00866421: mov byte ptr [eax + 0xaf0960], 0 */ W8((u32)(r_eax+0xaf0960u), 0x0u);
L_00866428:; BB(0x00866428);
    /* 00866428: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866429: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086642b: jb 0x8663eb */ if (fC) goto L_008663eb;
L_0086642d:; BB(0x0086642d);
    /* 0086642d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866430: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866431: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x866436u); f_0085e419();
    /* 00866436: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866437: ret  */ FN_RET(0x008662ac); r_esp += 4; return;
}

void f_00866438(void) /* ___updatetmbcinfo */
{
    FN_ENTER(0x00866438);
    /* 00866438: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0086643a: push 0x9993f0 */ { u32 v = 0x9993f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0086643f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x866444u); f_0085e5ac();
    /* 00866444: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00866446: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x86644bu); f_0085e57a();
    /* 0086644b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086644c: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00866450: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x866455u); f_0085c583();
    /* 00866455: mov edi, eax */ r_edi = r_eax;
    /* 00866457: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0086645a: mov esi, dword ptr [edi + 0x60] */ r_esi = R32((u32)(r_edi+0x60u));
    /* 0086645d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00866460: cmp esi, dword ptr [0xaf0838] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866466: je 0x86648a */ if (fZ) goto L_0086648a;
L_00866468:; BB(0x00866468);
    /* 00866468: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086646a: je 0x866477 */ if (fZ) goto L_00866477;
L_0086646c:; BB(0x0086646c);
    /* 0086646c: dec dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 0086646e: jne 0x866477 */ if (!fZ) goto L_00866477;
L_00866470:; BB(0x00866470);
    /* 00866470: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866471: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x866476u); f_00858882();
    /* 00866476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00866477:; BB(0x00866477);
    /* 00866477: mov eax, dword ptr [0xaf0838] */ r_eax = R32((u32)(0xaf0838u));
    /* 0086647c: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 0086647f: mov esi, dword ptr [0xaf0838] */ r_esi = R32((u32)(0xaf0838u));
    /* 00866485: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00866488: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0086648a:; BB(0x0086648a);
    /* 0086648a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0086648e: call 0x86649e */ r_esp -= 4; W32(r_esp, 0x866493u); f_0086649e();
    /* 00866493: mov eax, esi */ r_eax = r_esi;
    /* 00866495: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86649au); f_0085e5e7();
    /* 0086649a: ret  */ FN_RET(0x00866438); r_esp += 4; return;
}

void f_0086649b(void)
{
    FN_ENTER(0x0086649b);
    /* 0086649b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0086649e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008664a0: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8664a5u); f_0085e4c5();
    /* 008664a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008664a6: ret  */ FN_RET(0x0086649b); r_esp += 4; return;
}

void f_0086649e(void)
{
    FN_ENTER(0x0086649e);
    /* 0086649e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 008664a0: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x8664a5u); f_0085e4c5();
    /* 008664a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008664a6: ret  */ FN_RET(0x0086649e); r_esp += 4; return;
}

void f_00866637(void) /* __setmbcp */
{
    FN_ENTER(0x00866637);
    /* 00866637: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00866639: push 0x999400 */ { u32 v = 0x999400u; r_esp -= 4; W32(r_esp, v); }
    /* 0086663e: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x866643u); f_0085e5ac();
    /* 00866643: or dword ptr [ebp - 0x20], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00866647: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00866649: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x86664eu); f_0085e57a();
    /* 0086664e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086664f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00866651: mov dword ptr [ebp - 4], edi */ W32((u32)(r_ebp+0xfffffffcu), r_edi);
    /* 00866654: mov dword ptr [0xae7e60], edi */ W32((u32)(0xae7e60u), r_edi);
    /* 0086665a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086665d: cmp eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866660: jne 0x866674 */ if (!fZ) goto L_00866674;
L_00866662:; BB(0x00866662);
    /* 00866662: mov dword ptr [0xae7e60], 1 */ W32((u32)(0xae7e60u), 0x1u);
    /* 0086666c: call dword ptr [0x8f82b0] */ { u32 t = R32((u32)(0x8f82b0u)); r_esp -= 4; W32(r_esp, 0x866672u); call_ind(t); }
    /* 00866672: jmp 0x86669f */ goto L_0086669f;
L_00866674:; BB(0x00866674);
    /* 00866674: cmp eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866677: jne 0x86668b */ if (!fZ) goto L_0086668b;
L_00866679:; BB(0x00866679);
    /* 00866679: mov dword ptr [0xae7e60], 1 */ W32((u32)(0xae7e60u), 0x1u);
    /* 00866683: call dword ptr [0x8f82ac] */ { u32 t = R32((u32)(0x8f82acu)); r_esp -= 4; W32(r_esp, 0x866689u); call_ind(t); }
    /* 00866689: jmp 0x86669f */ goto L_0086669f;
L_0086668b:; BB(0x0086668b);
    /* 0086668b: cmp eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086668e: jne 0x86669f */ if (!fZ) goto L_0086669f;
L_00866690:; BB(0x00866690);
    /* 00866690: mov dword ptr [0xae7e60], 1 */ W32((u32)(0xae7e60u), 0x1u);
    /* 0086669a: mov eax, dword ptr [0xae7eac] */ r_eax = R32((u32)(0xae7eacu));
L_0086669f:; BB(0x0086669f);
    /* 0086669f: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008666a2: cmp eax, dword ptr [0xaf0944] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0944u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008666a8: je 0x866769 */ if (fZ) goto L_00866769;
L_008666ae:; BB(0x008666ae);
    /* 008666ae: mov esi, dword ptr [0xaf0838] */ r_esi = R32((u32)(0xaf0838u));
    /* 008666b4: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 008666b7: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008666b9: je 0x8666bf */ if (fZ) goto L_008666bf;
L_008666bb:; BB(0x008666bb);
    /* 008666bb: cmp dword ptr [esi], edi */ {  u32 a = R32((u32)(r_esi)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008666bd: je 0x8666cf */ if (fZ) goto L_008666cf;
L_008666bf:; BB(0x008666bf);
    /* 008666bf: push 0x220 */ { u32 v = 0x220u; r_esp -= 4; W32(r_esp, v); }
    /* 008666c4: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8666c9u); f_00859c55();
    /* 008666c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008666ca: mov esi, eax */ r_esi = r_eax;
    /* 008666cc: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
L_008666cf:; BB(0x008666cf);
    /* 008666cf: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008666d1: je 0x866752 */ if (fZ) goto L_00866752;
L_008666d3:; BB(0x008666d3);
    /* 008666d3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008666d6: call 0x8664a7 */ r_esp -= 4; W32(r_esp, 0x8666dbu); f_008664a7();
    /* 008666db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008666dc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 008666df: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008666e1: jne 0x866752 */ if (!fZ) goto L_00866752;
L_008666e3:; BB(0x008666e3);
    /* 008666e3: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008666e5: mov eax, dword ptr [0xaf0944] */ r_eax = R32((u32)(0xaf0944u));
    /* 008666ea: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 008666ed: mov eax, dword ptr [0xaf083c] */ r_eax = R32((u32)(0xaf083cu));
    /* 008666f2: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 008666f5: mov eax, dword ptr [0xaf0834] */ r_eax = R32((u32)(0xaf0834u));
    /* 008666fa: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 008666fd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008666ff:; BB(0x008666ff);
    /* 008666ff: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00866702: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866705: jge 0x866717 */ if ((fS==fO)) goto L_00866717;
L_00866707:; BB(0x00866707);
    /* 00866707: mov cx, word ptr [eax*2 + 0xaf0950] */ r_ecx = (r_ecx & 0xffff0000u) | ((R16((u32)(r_eax*2+0xaf0950u))) & 0xffffu);
    /* 0086670f: mov word ptr [esi + eax*2 + 0x10], cx */ W16((u32)(r_esi+r_eax*2+0x10u), (u16)r_ecx);
    /* 00866714: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866715: jmp 0x8666ff */ goto L_008666ff;
L_00866717:; BB(0x00866717);
    /* 00866717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00866719:; BB(0x00866719);
    /* 00866719: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0086671c: cmp eax, 0x101 */ {  u32 a = r_eax; u32 b = 0x101u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866721: jge 0x866730 */ if ((fS==fO)) goto L_00866730;
L_00866723:; BB(0x00866723);
    /* 00866723: mov cl, byte ptr [eax + 0xaf0840] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xaf0840u))) & 0xffu);
    /* 00866729: mov byte ptr [eax + esi + 0x1c], cl */ W8((u32)(r_eax+r_esi+0x1cu), (u8)r_ecx);
    /* 0086672d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086672e: jmp 0x866719 */ goto L_00866719;
L_00866730:; BB(0x00866730);
    /* 00866730: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00866732:; BB(0x00866732);
    /* 00866732: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00866735: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086673a: jge 0x86674c */ if ((fS==fO)) goto L_0086674c;
L_0086673c:; BB(0x0086673c);
    /* 0086673c: mov cl, byte ptr [eax + 0xaf0960] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0xaf0960u))) & 0xffu);
    /* 00866742: mov byte ptr [eax + esi + 0x11d], cl */ W8((u32)(r_eax+r_esi+0x11du), (u8)r_ecx);
    /* 00866749: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086674a: jmp 0x866732 */ goto L_00866732;
L_0086674c:; BB(0x0086674c);
    /* 0086674c: mov dword ptr [0xaf0838], esi */ W32((u32)(0xaf0838u), r_esi);
L_00866752:; BB(0x00866752);
    /* 00866752: cmp dword ptr [ebp - 0x20], -1 */ {  u32 a = R32((u32)(r_ebp+0xffffffe0u)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866756: jne 0x86676c */ if (!fZ) goto L_0086676c;
L_00866758:; BB(0x00866758);
    /* 00866758: cmp esi, dword ptr [0xaf0838] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf0838u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086675e: je 0x86676c */ if (fZ) goto L_0086676c;
L_00866760:; BB(0x00866760);
    /* 00866760: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866761: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x866766u); f_00858882();
    /* 00866766: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866767: jmp 0x86676c */ goto L_0086676c;
L_00866769:; BB(0x00866769);
    /* 00866769: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_0086676c:; BB(0x0086676c);
    /* 0086676c: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00866770: call 0x86677e */ r_esp -= 4; W32(r_esp, 0x866775u); f_0086677e();
    /* 00866775: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00866778: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x86677du); f_0085e5e7();
    /* 0086677d: ret  */ FN_RET(0x00866637); r_esp += 4; return;
}

void f_0086677e(void)
{
    FN_ENTER(0x0086677e);
    /* 0086677e: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00866780: call 0x85e4c5 */ r_esp -= 4; W32(r_esp, 0x866785u); f_0085e4c5();
    /* 00866785: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866786: ret  */ FN_RET(0x0086677e); r_esp += 4; return;
}

void f_00866787(void) /* ___initmbctable */
{
    FN_ENTER(0x00866787);
    /* 00866787: cmp dword ptr [0xaf1bd4], 0 */ {  u32 a = R32((u32)(0xaf1bd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086678e: jne 0x8667a2 */ if (!fZ) goto L_008667a2;
L_00866790:; BB(0x00866790);
    /* 00866790: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 00866792: call 0x866637 */ r_esp -= 4; W32(r_esp, 0x866797u); f_00866637();
    /* 00866797: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866798: mov dword ptr [0xaf1bd4], 1 */ W32((u32)(0xaf1bd4u), 0x1u);
L_008667a2:; BB(0x008667a2);
    /* 008667a2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008667a4: ret  */ FN_RET(0x00866787); r_esp += 4; return;
}

void f_008667a5(void) /* __ZeroTail */
{
    FN_ENTER(0x008667a5);
    /* 008667a5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008667a9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008667ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008667ac: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008667ad: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008667ad, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008667ad, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008667af: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 008667b1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008667b2: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008667b4: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008667b7: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008667b9: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008667bd: not edx */ r_edx = ~r_edx;
    /* 008667bf: test dword ptr [ecx + eax*4], edx */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008667c2: je 0x8667cd */ if (fZ) goto L_008667cd;
L_008667c4:; BB(0x008667c4);
    /* 008667c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008667c6: ret  */ FN_RET(0x008667a5); r_esp += 4; return;
L_008667c7:; BB(0x008667c7);
    /* 008667c7: cmp dword ptr [ecx + eax*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008667cb: jne 0x8667c4 */ if (!fZ) goto L_008667c4;
L_008667cd:; BB(0x008667cd);
    /* 008667cd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008667ce: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008667d1: jl 0x8667c7 */ if ((fS!=fO)) goto L_008667c7;
L_008667d3:; BB(0x008667d3);
    /* 008667d3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008667d5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008667d6: ret  */ FN_RET(0x008667a5); r_esp += 4; return;
}

void f_008667d7(void) /* __IncMan */
{
    FN_ENTER(0x008667d7);
    /* 008667d7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008667db: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008667dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008667dd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008667df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008667e0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008667e1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008667e1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008667e1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008667e3: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 008667e7: mov esi, eax */ r_esi = r_eax;
    /* 008667e9: lea eax, [edi + esi*4] */ r_eax = (u32)(r_edi+r_esi*4);
    /* 008667ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008667ed: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 008667ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008667f0: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008667f2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 008667f4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008667f5: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008667f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008667f8: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008667fa: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x8667ffu); f_00869903();
    /* 008667ff: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fC = (r < a); }
    /* 00866802: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866803: js 0x866821 */ if (fS) goto L_00866821;
L_00866805:; BB(0x00866805);
    /* 00866805: lea edi, [edi + esi*4] */ r_edi = (u32)(r_edi+r_esi*4);
L_00866808:; BB(0x00866808);
    /* 00866808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086680a: je 0x866821 */ if (fZ) goto L_00866821;
L_0086680c:; BB(0x0086680c);
    /* 0086680c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086680d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0086680f: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00866811: call 0x869903 */ r_esp -= 4; W32(r_esp, 0x866816u); f_00869903();
    /* 00866816: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00866819: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086681a: sub edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086681d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086681f: jge 0x866808 */ if ((fS==fO)) goto L_00866808;
L_00866821:; BB(0x00866821);
    /* 00866821: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866822: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866823: ret  */ FN_RET(0x008667d7); r_esp += 4; return;
}

void f_00866824(void) /* __RoundMan */
{
    FN_ENTER(0x00866824);
    /* 00866824: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866825: mov ebp, esp */ r_ebp = r_esp;
    /* 00866827: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00866828: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0086682c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0086682d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086682e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086682f: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00866832: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00866833: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00866835: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00866838: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866839: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0086683a: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x0086683a, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x0086683a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0086683c: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0086683e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086683f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00866841: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fC = 0; }
    /* 00866843: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00866844: mov ecx, esi */ r_ecx = r_esi;
    /* 00866846: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00866848: mov ebx, eax */ r_ebx = r_eax;
    /* 0086684a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086684d: test dword ptr [eax + ebx*4], edx */ {  u32 a = R32((u32)(r_eax+r_ebx*4)); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866850: je 0x866873 */ if (fZ) goto L_00866873;
L_00866852:; BB(0x00866852);
    /* 00866852: lea ecx, [edi + 1] */ r_ecx = (u32)(r_edi+0x1u);
    /* 00866855: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00866856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866857: call 0x8667a5 */ r_esp -= 4; W32(r_esp, 0x86685cu); f_008667a5();
    /* 0086685c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086685e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086685f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866860: jne 0x866870 */ if (!fZ) goto L_00866870;
L_00866862:; BB(0x00866862);
    /* 00866862: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866863: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866866: call 0x8667d7 */ r_esp -= 4; W32(r_esp, 0x86686bu); f_008667d7();
    /* 0086686b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086686c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086686d: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00866870:; BB(0x00866870);
    /* 00866870: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
L_00866873:; BB(0x00866873);
    /* 00866873: or edx, 0xffffffff */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 00866876: mov ecx, esi */ r_ecx = r_esi;
    /* 00866878: shl edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0086687a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0086687c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086687d: and dword ptr [eax + ebx*4], edx */ { u32 ad = (u32)(r_eax+r_ebx*4);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00866880: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00866881: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866883: jge 0x86688e */ if ((fS==fO)) goto L_0086688e;
L_00866885:; BB(0x00866885);
    /* 00866885: lea edi, [eax + ebx*4] */ r_edi = (u32)(r_eax+r_ebx*4);
    /* 00866888: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086688a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086688c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_0086688e:; BB(0x0086688e);
    /* 0086688e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866891: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866892: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866893: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866894: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866895: ret  */ FN_RET(0x00866824); r_esp += 4; return;
}

void f_00866896(void) /* __CopyMan */
{
    FN_ENTER(0x00866896);
    /* 00866896: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0086689a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0086689e: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008668a0: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008668a1: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008668a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
L_008668a4:; BB(0x008668a4);
    /* 008668a4: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 008668a6: mov dword ptr [ecx + eax], esi */ W32((u32)(r_ecx+r_eax), r_esi);
    /* 008668a9: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 008668ac: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008668ad: jne 0x8668a4 */ if (!fZ) goto L_008668a4;
L_008668af:; BB(0x008668af);
    /* 008668af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008668b0: ret  */ FN_RET(0x00866896); r_esp += 4; return;
}

void f_008668b1(void) /* __IsZeroMan */
{
    FN_ENTER(0x008668b1);
    /* 008668b1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008668b3:; BB(0x008668b3);
    /* 008668b3: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 008668b7: cmp dword ptr [ecx + eax*4], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008668bb: jne 0x8668c7 */ if (!fZ) goto L_008668c7;
L_008668bd:; BB(0x008668bd);
    /* 008668bd: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008668be: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008668c1: jl 0x8668b3 */ if ((fS!=fO)) goto L_008668b3;
L_008668c3:; BB(0x008668c3);
    /* 008668c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 008668c5: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 008668c6: ret  */ FN_RET(0x008668b1); r_esp += 4; return;
L_008668c7:; BB(0x008668c7);
    /* 008668c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008668c9: ret  */ FN_RET(0x008668b1); r_esp += 4; return;
}

void f_008668ca(void) /* __ShrMan */
{
    FN_ENTER(0x008668ca);
    /* 008668ca: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008668cb: mov ebp, esp */ r_ebp = r_esp;
    /* 008668cd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008668d0: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008668d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008668d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008668d5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008668d6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008668d8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008668d9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008668da: mov ecx, esi */ r_ecx = r_esi;
    /* 008668dc: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x008668dc, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008668dc, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008668de: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008668e1: or edi, 0xffffffff */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008668e4: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 008668e7: mov ecx, edx */ r_ecx = r_edx;
    /* 008668e9: shl edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008668eb: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008668ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008668f0: sub dword ptr [ebp + 0xc], edx */ { u32 ad = (u32)(r_ebp+0xcu);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008668f3: not edi */ r_edi = ~r_edi;
    /* 008668f5: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_008668f8:; BB(0x008668f8);
    /* 008668f8: mov esi, dword ptr [ebx + eax*4] */ r_esi = R32((u32)(r_ebx+r_eax*4));
    /* 008668fb: mov ecx, esi */ r_ecx = r_esi;
    /* 008668fd: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 008668ff: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00866902: mov ecx, edx */ r_ecx = r_edx;
    /* 00866904: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00866906: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00866909: or esi, dword ptr [ebp - 4] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0086690c: mov dword ptr [ebx + eax*4], esi */ W32((u32)(r_ebx+r_eax*4), r_esi);
    /* 0086690f: mov esi, dword ptr [ebp - 0xc] */ r_esi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00866912: shl esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00866914: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866915: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866918: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 0086691b: jl 0x8668f8 */ if ((fS!=fO)) goto L_008668f8;
L_0086691d:; BB(0x0086691d);
    /* 0086691d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0086691f: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00866920: mov ecx, eax */ r_ecx = r_eax;
    /* 00866922: sub ecx, dword ptr [ebp - 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00866925: lea ecx, [ebx + ecx*4] */ r_ecx = (u32)(r_ebx+r_ecx*4);
L_00866928:; BB(0x00866928);
    /* 00866928: cmp eax, dword ptr [ebp - 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffff8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0086692b: jl 0x866934 */ if ((fS!=fO)) goto L_00866934;
L_0086692d:; BB(0x0086692d);
    /* 0086692d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0086692f: mov dword ptr [ebx + eax*4], edx */ W32((u32)(r_ebx+r_eax*4), r_edx);
    /* 00866932: jmp 0x866938 */ goto L_00866938;
L_00866934:; BB(0x00866934);
    /* 00866934: and dword ptr [ebx + eax*4], 0 */ { u32 ad = (u32)(r_ebx+r_eax*4);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00866938:; BB(0x00866938);
    /* 00866938: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00866939: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0086693c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0086693e: jge 0x866928 */ if ((fS==fO)) goto L_00866928;
L_00866940:; BB(0x00866940);
    /* 00866940: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866941: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866942: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866943: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866944: ret  */ FN_RET(0x008668ca); r_esp += 4; return;
}

void f_00866945(void) /* __ld12cvt */
{
    FN_ENTER(0x00866945);
    /* 00866945: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866946: mov ebp, esp */ r_ebp = r_esp;
    /* 00866948: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0086694b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0086694e: movzx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)R16((u32)(r_eax+0xau));
    /* 00866952: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00866953: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866954: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00866957: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866958: mov edi, ecx */ r_edi = r_ecx;
    /* 0086695a: and ecx, 0x8000 */ {  u32 a = r_ecx; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00866960: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00866963: mov ecx, dword ptr [eax + 6] */ r_ecx = R32((u32)(r_eax+0x6u));
    /* 00866966: mov dword ptr [ebp - 0xc], ecx */ W32((u32)(r_ebp+0xfffffff4u), r_ecx);
    /* 00866969: mov ecx, dword ptr [eax + 2] */ r_ecx = R32((u32)(r_eax+0x2u));
    /* 0086696c: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 0086696f: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00866972: and edi, 0x7fff */ {  u32 a = r_edi; u32 b = 0x7fffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00866978: sub edi, 0x3fff */ {  u32 a = r_edi; u32 b = 0x3fffu; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086697e: cmp edi, 0xffffc001 */ {  u32 a = r_edi; u32 b = 0xffffc001u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866984: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00866987: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0086698a: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0086698d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0086698e: jne 0x8669ae */ if (!fZ) goto L_008669ae;
L_00866990:; BB(0x00866990);
    /* 00866990: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00866992: call 0x8668b1 */ r_esp -= 4; W32(r_esp, 0x866997u); f_008668b1();
    /* 00866997: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866999: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086699a: jne 0x866a5d */ if (!fZ) goto L_00866a5d;
L_008669a0:; BB(0x008669a0);
    /* 008669a0: lea edi, [ebp - 0xc] */ r_edi = (u32)(r_ebp+0xfffffff4u);
    /* 008669a3: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008669a4: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008669a5: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
L_008669a6:; BB(0x008669a6);
    /* 008669a6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008669a8: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008669a9: jmp 0x866a5f */ goto L_00866a5f;
L_008669ae:; BB(0x008669ae);
    /* 008669ae: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008669b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008669b2: call 0x866896 */ r_esp -= 4; W32(r_esp, 0x8669b7u); f_00866896();
    /* 008669b7: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008669ba: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008669bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008669be: call 0x866824 */ r_esp -= 4; W32(r_esp, 0x8669c3u); f_00866824();
    /* 008669c3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008669c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008669c8: je 0x8669cb */ if (fZ) goto L_008669cb;
L_008669ca:; BB(0x008669ca);
    /* 008669ca: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008669cb:; BB(0x008669cb);
    /* 008669cb: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008669ce: mov ecx, eax */ r_ecx = r_eax;
    /* 008669d0: sub ecx, dword ptr [esi + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x8u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008669d3: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008669d5: jge 0x8669e1 */ if ((fS==fO)) goto L_008669e1;
L_008669d7:; BB(0x008669d7);
    /* 008669d7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008669d9: lea edi, [ebp - 0xc] */ r_edi = (u32)(r_ebp+0xfffffff4u);
    /* 008669dc: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008669dd: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008669de: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 008669df: jmp 0x866a1d */ goto L_00866a1d;
L_008669e1:; BB(0x008669e1);
    /* 008669e1: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008669e3: jg 0x866a21 */ if ((!fZ&&fS==fO)) goto L_00866a21;
L_008669e5:; BB(0x008669e5);
    /* 008669e5: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008669e7: mov edi, eax */ r_edi = r_eax;
    /* 008669e9: lea eax, [ebp - 0x18] */ r_eax = (u32)(r_ebp+0xffffffe8u);
    /* 008669ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008669ed: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008669f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008669f1: call 0x866896 */ r_esp -= 4; W32(r_esp, 0x8669f6u); f_00866896();
    /* 008669f6: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 008669f9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008669fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008669fb: call 0x8668ca */ r_esp -= 4; W32(r_esp, 0x866a00u); f_008668ca();
    /* 00866a00: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866a03: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00866a06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866a07: call 0x866824 */ r_esp -= 4; W32(r_esp, 0x866a0cu); f_00866824();
    /* 00866a0c: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00866a0f: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866a10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866a11: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00866a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866a15: call 0x8668ca */ r_esp -= 4; W32(r_esp, 0x866a1au); f_008668ca();
    /* 00866a1a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00866a1d:; BB(0x00866a1d);
    /* 00866a1d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00866a1f: jmp 0x8669a6 */ goto L_008669a6;
L_00866a21:; BB(0x00866a21);
    /* 00866a21: cmp edi, dword ptr [esi] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00866a23: push dword ptr [esi + 0xc] */ { u32 v = R32((u32)(r_esi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866a26: jl 0x866a49 */ if ((fS!=fO)) goto L_00866a49;
L_00866a28:; BB(0x00866a28);
    /* 00866a28: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866a2a: lea edi, [ebp - 0xc] */ r_edi = (u32)(r_ebp+0xfffffff4u);
    /* 00866a2d: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 00866a2e: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 00866a2f: stosd dword ptr es:[edi], eax */ W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4;
    /* 00866a30: or byte ptr [ebp - 9], 0x80 */ { u32 ad = (u32)(r_ebp+0xfffffff7u);  u32 a = R8(ad); u32 b = 0x80u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00866a34: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00866a37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866a38: call 0x8668ca */ r_esp -= 4; W32(r_esp, 0x866a3du); f_008668ca();
    /* 00866a3d: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 00866a40: add ebx, dword ptr [esi] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00866a42: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866a43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866a45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866a46: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866a47: jmp 0x866a5f */ goto L_00866a5f;
L_00866a49:; BB(0x00866a49);
    /* 00866a49: mov ebx, dword ptr [esi + 0x14] */ r_ebx = R32((u32)(r_esi+0x14u));
    /* 00866a4c: and byte ptr [ebp - 9], 0x7f */ { u32 ad = (u32)(r_ebp+0xfffffff7u);  u32 a = R8(ad); u32 b = 0x7fu; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00866a50: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00866a53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866a54: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00866a56: call 0x8668ca */ r_esp -= 4; W32(r_esp, 0x866a5bu); f_008668ca();
    /* 00866a5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866a5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00866a5d:; BB(0x00866a5d);
    /* 00866a5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00866a5f:; BB(0x00866a5f);
    /* 00866a5f: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 00866a61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866a62: sub ecx, dword ptr [esi + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866a65: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 00866a68: shl ebx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 00866a6a: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00866a6d: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); fC = (b != 0); }
    /* 00866a6f: sbb ecx, ecx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r;  }
    /* 00866a71: and ecx, 0x80000000 */ {  u32 a = r_ecx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00866a77: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00866a79: or ebx, dword ptr [ebp - 0xc] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffff4u)); u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00866a7c: cmp esi, 0x40 */ {  u32 a = r_esi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866a7f: jne 0x866a8e */ if (!fZ) goto L_00866a8e;
L_00866a81:; BB(0x00866a81);
    /* 00866a81: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00866a84: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00866a87: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 00866a8a: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00866a8c: jmp 0x866a98 */ goto L_00866a98;
L_00866a8e:; BB(0x00866a8e);
    /* 00866a8e: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866a91: jne 0x866a98 */ if (!fZ) goto L_00866a98;
L_00866a93:; BB(0x00866a93);
    /* 00866a93: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00866a96: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
L_00866a98:; BB(0x00866a98);
    /* 00866a98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866a99: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866a9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866a9b: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866a9c: ret  */ FN_RET(0x00866945); r_esp += 4; return;
}

void f_00866a9d(void) /* sub_866A9D */
{
    FN_ENTER(0x00866a9d);
    /* 00866a9d: push 0xa24488 */ { u32 v = 0xa24488u; r_esp -= 4; W32(r_esp, v); }
    /* 00866aa2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866aa6: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866aaa: call 0x866945 */ r_esp -= 4; W32(r_esp, 0x866aafu); f_00866945();
    /* 00866aaf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00866ab2: ret  */ FN_RET(0x00866a9d); r_esp += 4; return;
}

void f_00866ab3(void) /* sub_866AB3 */
{
    FN_ENTER(0x00866ab3);
    /* 00866ab3: push 0xa244a0 */ { u32 v = 0xa244a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866ab8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866abc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866ac0: call 0x866945 */ r_esp -= 4; W32(r_esp, 0x866ac5u); f_00866945();
    /* 00866ac5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00866ac8: ret  */ FN_RET(0x00866ab3); r_esp += 4; return;
}

void f_00866ac9(void) /* sub_866AC9 */
{
    FN_ENTER(0x00866ac9);
    /* 00866ac9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866aca: mov ebp, esp */ r_ebp = r_esp;
    /* 00866acc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00866acf: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00866ad4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00866ad7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866ad9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866ada: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866adb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866adc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866add: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866ae0: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00866ae3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866ae4: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00866ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866ae8: call 0x869abb */ r_esp -= 4; W32(r_esp, 0x866aedu); f_00869abb();
    /* 00866aed: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866af0: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00866af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866af4: call 0x866a9d */ r_esp -= 4; W32(r_esp, 0x866af9u); f_00866a9d();
    /* 00866af9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866afc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00866aff: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x866b04u); f_0085e419();
    /* 00866b04: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866b05: ret  */ FN_RET(0x00866ac9); r_esp += 4; return;
}

void f_00866b06(void) /* sub_866B06 */
{
    FN_ENTER(0x00866b06);
    /* 00866b06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866b07: mov ebp, esp */ r_ebp = r_esp;
    /* 00866b09: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00866b0c: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00866b11: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00866b14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866b16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b1a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866b1d: lea eax, [ebp - 0x14] */ r_eax = (u32)(r_ebp+0xffffffecu);
    /* 00866b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b21: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00866b24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b25: call 0x869abb */ r_esp -= 4; W32(r_esp, 0x866b2au); f_00869abb();
    /* 00866b2a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866b2d: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00866b30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866b31: call 0x866ab3 */ r_esp -= 4; W32(r_esp, 0x866b36u); f_00866ab3();
    /* 00866b36: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866b39: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00866b3c: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x866b41u); f_0085e419();
    /* 00866b41: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866b42: ret  */ FN_RET(0x00866b06); r_esp += 4; return;
}

void f_00866b43(void) /* __fptostr */
{
    FN_ENTER(0x00866b43);
    /* 00866b43: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866b44: mov ebp, esp */ r_ebp = r_esp;
    /* 00866b46: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00866b49: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00866b4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00866b4d: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00866b50: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00866b52: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866b53: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00866b56: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866b57: lea edi, [esi + 1] */ r_edi = (u32)(r_esi+0x1u);
    /* 00866b5a: mov byte ptr [esi], 0x30 */ W8((u32)(r_esi), 0x30u);
    /* 00866b5d: mov eax, edi */ r_eax = r_edi;
    /* 00866b5f: jle 0x866b80 */ if ((fZ||fS!=fO)) goto L_00866b80;
L_00866b61:; BB(0x00866b61);
    /* 00866b61: mov dword ptr [ebp + 8], ebx */ W32((u32)(r_ebp+0x8u), r_ebx);
    /* 00866b64: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00866b66:; BB(0x00866b66);
    /* 00866b66: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 00866b68: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00866b6a: je 0x866b72 */ if (fZ) goto L_00866b72;
L_00866b6c:; BB(0x00866b6c);
    /* 00866b6c: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 00866b6f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00866b70: jmp 0x866b75 */ goto L_00866b75;
L_00866b72:; BB(0x00866b72);
    /* 00866b72: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00866b74: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_00866b75:; BB(0x00866b75);
    /* 00866b75: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 00866b77: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866b78: dec dword ptr [ebp + 8] */ { u32 ad = (u32)(r_ebp+0x8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00866b7b: jne 0x866b66 */ if (!fZ) goto L_00866b66;
L_00866b7d:; BB(0x00866b7d);
    /* 00866b7d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
L_00866b80:; BB(0x00866b80);
    /* 00866b80: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00866b82: mov byte ptr [eax], 0 */ W8((u32)(r_eax), 0x0u);
    /* 00866b85: jl 0x866b99 */ if ((fS!=fO)) goto L_00866b99;
L_00866b87:; BB(0x00866b87);
    /* 00866b87: cmp byte ptr [ecx], 0x35 */ {  u32 a = R8((u32)(r_ecx)); u32 b = 0x35u; u32 r = (a - b) & 0xffu;  fS = ((r >> 7) & 1); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; }
    /* 00866b8a: jl 0x866b99 */ if ((fS!=fO)) goto L_00866b99;
L_00866b8c:; BB(0x00866b8c);
    /* 00866b8c: jmp 0x866b91 */ goto L_00866b91;
L_00866b8e:; BB(0x00866b8e);
    /* 00866b8e: mov byte ptr [eax], 0x30 */ W8((u32)(r_eax), 0x30u);
L_00866b91:; BB(0x00866b91);
    /* 00866b91: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00866b92: cmp byte ptr [eax], 0x39 */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x39u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00866b95: je 0x866b8e */ if (fZ) goto L_00866b8e;
L_00866b97:; BB(0x00866b97);
    /* 00866b97: inc byte ptr [eax] */ { u32 ad = (u32)(r_eax); u32 x = R8(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00866b99:; BB(0x00866b99);
    /* 00866b99: cmp byte ptr [esi], 0x31 */ {  u32 a = R8((u32)(r_esi)); u32 b = 0x31u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 00866b9c: jne 0x866ba3 */ if (!fZ) goto L_00866ba3;
L_00866b9e:; BB(0x00866b9e);
    /* 00866b9e: inc dword ptr [edx + 4] */ { u32 ad = (u32)(r_edx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00866ba1: jmp 0x866bb5 */ goto L_00866bb5;
L_00866ba3:; BB(0x00866ba3);
    /* 00866ba3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866ba4: call 0x85d760 */ r_esp -= 4; W32(r_esp, 0x866ba9u); f_0085d760();
    /* 00866ba9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00866baa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866bab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866bac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866bad: call 0x858c80 */ r_esp -= 4; W32(r_esp, 0x866bb2u); f_00858c80();
    /* 00866bb2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00866bb5:; BB(0x00866bb5);
    /* 00866bb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866bb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866bb7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866bb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00866bb9: ret  */ FN_RET(0x00866b43); r_esp += 4; return;
}

void f_00866bba(void) /* ___dtold */
{
    FN_ENTER(0x00866bba);
    /* 00866bba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866bbb: mov ebp, esp */ r_ebp = r_esp;
    /* 00866bbd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00866bbe: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 00866bc1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00866bc3: mov ax, word ptr [edx + 6] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_edx+0x6u))) & 0xffffu);
    /* 00866bc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00866bc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866bc9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866bca: mov edi, 0x7ff */ r_edi = 0x7ffu;
    /* 00866bcf: mov esi, 0x80000000 */ r_esi = 0x80000000u;
    /* 00866bd4: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00866bd7: mov ecx, eax */ r_ecx = r_eax;
    /* 00866bd9: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00866bdc: and eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00866be1: and ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00866be3: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00866be6: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00866be9: mov edx, dword ptr [edx] */ r_edx = R32((u32)(r_edx));
    /* 00866beb: movzx ebx, cx */ r_ebx = (u32)(u16)r_ecx;
    /* 00866bee: and eax, 0xfffff */ {  u32 a = r_eax; u32 b = 0xfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00866bf3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866bf5: je 0x866c0a */ if (fZ) goto L_00866c0a;
L_00866bf7:; BB(0x00866bf7);
    /* 00866bf7: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866bf9: je 0x866c03 */ if (fZ) goto L_00866c03;
L_00866bfb:; BB(0x00866bfb);
    /* 00866bfb: lea edi, [ecx + 0x3c00] */ r_edi = (u32)(r_ecx+0x3c00u);
    /* 00866c01: jmp 0x866c2b */ goto L_00866c2b;
L_00866c03:; BB(0x00866c03);
    /* 00866c03: mov edi, 0x7fff */ r_edi = 0x7fffu;
    /* 00866c08: jmp 0x866c2b */ goto L_00866c2b;
L_00866c0a:; BB(0x00866c0a);
    /* 00866c0a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00866c0c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866c0e: jne 0x866c22 */ if (!fZ) goto L_00866c22;
L_00866c10:; BB(0x00866c10);
    /* 00866c10: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00866c12: jne 0x866c22 */ if (!fZ) goto L_00866c22;
L_00866c14:; BB(0x00866c14);
    /* 00866c14: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00866c17: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 00866c1a: mov dword ptr [eax], ebx */ W32((u32)(r_eax), r_ebx);
    /* 00866c1c: mov word ptr [eax + 8], bx */ W16((u32)(r_eax+0x8u), (u16)r_ebx);
    /* 00866c20: jmp 0x866c6f */ goto L_00866c6f;
L_00866c22:; BB(0x00866c22);
    /* 00866c22: lea edi, [ecx + 0x3c01] */ r_edi = (u32)(r_ecx+0x3c01u);
    /* 00866c28: mov dword ptr [ebp - 4], ebx */ W32((u32)(r_ebp+0xfffffffcu), r_ebx);
L_00866c2b:; BB(0x00866c2b);
    /* 00866c2b: mov ecx, edx */ r_ecx = r_edx;
    /* 00866c2d: shr ecx, 0x15 */ { u32 c = (21u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00866c30: shl eax, 0xb */ { u32 c = (11u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00866c33: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00866c35: or ecx, dword ptr [ebp - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00866c38: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00866c3b: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00866c3e: test esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866c40: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00866c43: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00866c45: jne 0x866c66 */ if (!fZ) goto L_00866c66;
L_00866c47:; BB(0x00866c47);
    /* 00866c47: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00866c49: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00866c4c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00866c4e: shl edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00866c50: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00866c53: or edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00866c55: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00866c57: add edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00866c5d: test esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866c5f: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00866c62: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 00866c64: je 0x866c47 */ if (fZ) goto L_00866c47;
L_00866c66:; BB(0x00866c66);
    /* 00866c66: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00866c69: or ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866c6b: mov word ptr [eax + 8], cx */ W16((u32)(r_eax+0x8u), (u16)r_ecx);
L_00866c6f:; BB(0x00866c6f);
    /* 00866c6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866c70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866c71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866c72: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866c73: ret  */ FN_RET(0x00866bba); r_esp += 4; return;
}

void f_00866c74(void) /* __fltout2 */
{
    FN_ENTER(0x00866c74);
    /* 00866c74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866c75: mov ebp, esp */ r_ebp = r_esp;
    /* 00866c77: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00866c7a: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00866c7f: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 00866c82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866c83: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866c84: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00866c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866c88: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00866c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866c8c: call 0x866bba */ r_esp -= 4; W32(r_esp, 0x866c91u); f_00866bba();
    /* 00866c91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866c92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866c93: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00866c96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866c97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866c99: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00866c9b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00866c9e: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 00866ca1: mov edi, esp */ r_edi = r_esp;
    /* 00866ca3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00866ca4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00866ca5: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 00866ca7: call 0x869eef */ r_esp -= 4; W32(r_esp, 0x866cacu); f_00869eef();
    /* 00866cac: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00866caf: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00866cb2: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00866cb5: movsx eax, byte ptr [ebp - 0x2a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd6u));
    /* 00866cb9: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00866cbb: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00866cbf: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00866cc2: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00866cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866cc6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866cc7: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x866cccu); f_0085e2f0();
    /* 00866ccc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866ccf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00866cd2: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00866cd5: mov eax, esi */ r_eax = r_esi;
    /* 00866cd7: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x866cdcu); f_0085e419();
    /* 00866cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866cde: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866cdf: ret  */ FN_RET(0x00866c74); r_esp += 4; return;
}

void f_00866c78(void)
{
    FN_ENTER(0x00866c78);
    /* 00866c78: in al, dx */ UNSUP(0x00866c78, "in al, dx");
    /* 00866c79: sub al, 0xa1 */ {  u32 a = (u8)r_eax; u32 b = 0xa1u; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00866c7b: cmp al, 0xa2 */ {  u32 a = (u8)r_eax; u32 b = 0xa2u; u32 r = (a - b) & 0xffu;   }
    /* 00866c7e: add byte ptr [ecx + 0x5756fc45], cl */ { u32 ad = (u32)(r_ecx+0x5756fc45u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00866c84: lea eax, [ebp + 8] */ r_eax = (u32)(r_ebp+0x8u);
    /* 00866c87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866c88: lea eax, [ebp - 0x10] */ r_eax = (u32)(r_ebp+0xfffffff0u);
    /* 00866c8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866c8c: call 0x866bba */ r_esp -= 4; W32(r_esp, 0x866c91u); f_00866bba();
    /* 00866c91: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866c92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866c93: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 00866c96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866c97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00866c99: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00866c9b: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00866c9e: lea esi, [ebp - 0x10] */ r_esi = (u32)(r_ebp+0xfffffff0u);
    /* 00866ca1: mov edi, esp */ r_edi = r_esp;
    /* 00866ca3: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00866ca4: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00866ca5: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 00866ca7: call 0x869eef */ r_esp -= 4; W32(r_esp, 0x866cacu); f_00869eef();
    /* 00866cac: mov esi, dword ptr [ebp + 0x10] */ r_esi = R32((u32)(r_ebp+0x10u));
    /* 00866caf: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00866cb2: mov dword ptr [esi + 8], eax */ W32((u32)(r_esi+0x8u), r_eax);
    /* 00866cb5: movsx eax, byte ptr [ebp - 0x2a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0xffffffd6u));
    /* 00866cb9: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 00866cbb: movsx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xffffffd4u));
    /* 00866cbf: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00866cc2: lea eax, [ebp - 0x28] */ r_eax = (u32)(r_ebp+0xffffffd8u);
    /* 00866cc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866cc6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00866cc7: call 0x85e2f0 */ r_esp -= 4; W32(r_esp, 0x866cccu); f_0085e2f0();
    /* 00866ccc: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866ccf: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00866cd2: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00866cd5: mov eax, esi */ r_eax = r_esi;
    /* 00866cd7: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x866cdcu); f_0085e419();
    /* 00866cdc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00866cdd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00866cde: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866cdf: ret  */ FN_RET(0x00866c78); r_esp += 4; return;
}

void f_00866ce0(void) /* __fptrap */
{
    FN_ENTER(0x00866ce0);
    /* 00866ce0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00866ce2: call 0x85aaf3 */ r_esp -= 4; W32(r_esp, 0x866ce7u); f_0085aaf3();
    /* 00866ce7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866ce8: ret  */ FN_RET(0x00866ce0); r_esp += 4; return;
}

void f_00866e09(void) /* __control87 */
{
    FN_ENTER(0x00866e09);
    /* 00866e09: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00866e0a: mov ebp, esp */ r_ebp = r_esp;
    /* 00866e0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00866e0d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00866e0e: wait  */ ;
    /* 00866e0f: fnstcw word ptr [ebp - 4] */ W16((u32)(r_ebp+0xfffffffcu), fcw);
    /* 00866e12: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00866e15: call 0x866ce9 */ r_esp -= 4; W32(r_esp, 0x866e1au); f_00866ce9();
    /* 00866e1a: mov ebx, eax */ r_ebx = r_eax;
    /* 00866e1c: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00866e1f: not eax */ r_eax = ~r_eax;
    /* 00866e21: and ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00866e23: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00866e26: and eax, dword ptr [ebp + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00866e29: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00866e2b: call 0x866d7b */ r_esp -= 4; W32(r_esp, 0x866e30u); f_00866d7b();
    /* 00866e30: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00866e33: fldcw word ptr [ebp + 0xc] */ fcw = R16((u32)(r_ebp+0xcu));
    /* 00866e36: mov eax, ebx */ r_eax = r_ebx;
    /* 00866e38: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00866e39: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00866e3a: ret  */ FN_RET(0x00866e09); r_esp += 4; return;
}

void f_00866e3b(void) /* __controlfp */
{
    FN_ENTER(0x00866e3b);
    /* 00866e3b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00866e3f: and eax, 0xfff7ffff */ {  u32 a = r_eax; u32 b = 0xfff7ffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00866e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866e45: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00866e49: call 0x866e09 */ r_esp -= 4; W32(r_esp, 0x866e4eu); f_00866e09();
    /* 00866e4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866e4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866e50: ret  */ FN_RET(0x00866e3b); r_esp += 4; return;
}

void f_00866e51(void) /* __getbuf */
{
    FN_ENTER(0x00866e51);
    /* 00866e51: inc dword ptr [0xae7a88] */ { u32 ad = (u32)(0xae7a88u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00866e57: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 00866e5c: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x866e61u); f_00859c55();
    /* 00866e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866e63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00866e64: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00866e68: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00866e6b: je 0x866e7a */ if (fZ) goto L_00866e7a;
L_00866e6d:; BB(0x00866e6d);
    /* 00866e6d: or dword ptr [ecx + 0xc], 8 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00866e71: mov dword ptr [ecx + 0x18], 0x1000 */ W32((u32)(r_ecx+0x18u), 0x1000u);
    /* 00866e78: jmp 0x866e8b */ goto L_00866e8b;
L_00866e7a:; BB(0x00866e7a);
    /* 00866e7a: or dword ptr [ecx + 0xc], 4 */ { u32 ad = (u32)(r_ecx+0xcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00866e7e: lea eax, [ecx + 0x14] */ r_eax = (u32)(r_ecx+0x14u);
    /* 00866e81: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 00866e84: mov dword ptr [ecx + 0x18], 2 */ W32((u32)(r_ecx+0x18u), 0x2u);
L_00866e8b:; BB(0x00866e8b);
    /* 00866e8b: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00866e8e: and dword ptr [ecx + 4], 0 */ { u32 ad = (u32)(r_ecx+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866e92: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 00866e94: ret  */ FN_RET(0x00866e51); r_esp += 4; return;
}

void f_00866e95(void) /* __isatty */
{
    FN_ENTER(0x00866e95);
    /* 00866e95: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00866e99: cmp eax, dword ptr [0xaf0a60] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaf0a60u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00866e9f: jb 0x866ea4 */ if (fC) goto L_00866ea4;
L_00866ea1:; BB(0x00866ea1);
    /* 00866ea1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866ea3: ret  */ FN_RET(0x00866e95); r_esp += 4; return;
L_00866ea4:; BB(0x00866ea4);
    /* 00866ea4: mov ecx, eax */ r_ecx = r_eax;
    /* 00866ea6: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00866ea9: sar ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00866eac: mov ecx, dword ptr [ecx*4 + 0xaf0a80] */ r_ecx = R32((u32)(r_ecx*4+0xaf0a80u));
    /* 00866eb3: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 00866eb6: movsx eax, byte ptr [ecx + eax*4 + 4] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax*4+0x4u));
    /* 00866ebb: and eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00866ebe: ret  */ FN_RET(0x00866e95); r_esp += 4; return;
}

void f_00866f7f(void) /* _mbtowc */
{
    FN_ENTER(0x00866f7f);
    /* 00866f7f: call 0x85c583 */ r_esp -= 4; W32(r_esp, 0x866f84u); f_0085c583();
    /* 00866f84: mov eax, dword ptr [eax + 0x64] */ r_eax = R32((u32)(r_eax+0x64u));
    /* 00866f87: cmp eax, dword ptr [0xa23cec] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa23cecu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00866f8d: je 0x866f94 */ if (fZ) goto L_00866f94;
L_00866f8f:; BB(0x00866f8f);
    /* 00866f8f: call 0x85daca */ r_esp -= 4; W32(r_esp, 0x866f94u); f_0085daca();
L_00866f94:; BB(0x00866f94);
    /* 00866f94: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866f98: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866f9c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00866fa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00866fa1: call 0x866ebf */ r_esp -= 4; W32(r_esp, 0x866fa6u); f_00866ebf();
    /* 00866fa6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00866fa9: ret  */ FN_RET(0x00866f7f); r_esp += 4; return;
}

void f_00866fb0(void) /* __aulldvrm */
{
    FN_ENTER(0x00866fb0);
    /* 00866fb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00866fb1: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00866fb5: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00866fb7: jne 0x866fe1 */ if (!fZ) goto L_00866fe1;
L_00866fb9:; BB(0x00866fb9);
    /* 00866fb9: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00866fbd: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00866fc1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00866fc3: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00866fc3, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00866fc3, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00866fc5: mov ebx, eax */ r_ebx = r_eax;
    /* 00866fc7: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00866fcb: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x00866fcb, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00866fcb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00866fcd: mov esi, eax */ r_esi = r_eax;
    /* 00866fcf: mov eax, ebx */ r_eax = r_ebx;
    /* 00866fd1: mul dword ptr [esp + 0x10] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x10u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00866fd5: mov ecx, eax */ r_ecx = r_eax;
    /* 00866fd7: mov eax, esi */ r_eax = r_esi;
    /* 00866fd9: mul dword ptr [esp + 0x10] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x10u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00866fdd: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00866fdf: jmp 0x867028 */ goto L_00867028;
L_00866fe1:; BB(0x00866fe1);
    /* 00866fe1: mov ecx, eax */ r_ecx = r_eax;
    /* 00866fe3: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00866fe7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00866feb: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
L_00866fef:; BB(0x00866fef);
    /* 00866fef: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00866ff1: rcr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_ebx = a; }
    /* 00866ff3: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00866ff5: rcr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; while (c--) { u32 nc = a & 1; a = (a >> 1) | ((u32)fC << 31); fC = nc; } fO = ((a >> 31) ^ (a >> 30)) & 1; r_eax = a; }
    /* 00866ff7: or ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fA = (((a ^ b ^ r) & 0x10u) != 0); }
    /* 00866ff9: jne 0x866fef */ if (!fZ) goto L_00866fef;
L_00866ffb:; BB(0x00866ffb);
    /* 00866ffb: div ebx */ { u32 d = r_ebx; if (!d) UNSUP(0x00866ffb, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00866ffb, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00866ffd: mov esi, eax */ r_esi = r_eax;
    /* 00866fff: mul dword ptr [esp + 0x14] */ { u64 t = (u64)r_eax * R32((u32)(r_esp+0x14u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00867003: mov ecx, eax */ r_ecx = r_eax;
    /* 00867005: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00867009: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0086700b: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0086700d: jb 0x86701d */ if (fC) goto L_0086701d;
L_0086700f:; BB(0x0086700f);
    /* 0086700f: cmp edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00867013: ja 0x86701d */ if ((!fC&&!fZ)) goto L_0086701d;
L_00867015:; BB(0x00867015);
    /* 00867015: jb 0x867026 */ if (fC) goto L_00867026;
L_00867017:; BB(0x00867017);
    /* 00867017: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086701b: jbe 0x867026 */ if ((fC||fZ)) goto L_00867026;
L_0086701d:; BB(0x0086701d);
    /* 0086701d: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0086701e: sub eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00867022: sbb edx, dword ptr [esp + 0x14] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
L_00867026:; BB(0x00867026);
    /* 00867026: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00867028:; BB(0x00867028);
    /* 00867028: sub eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0086702c: sbb edx, dword ptr [esp + 0xc] */ { u32 c = fC; u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00867030: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00867032: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); fC = (b != 0); }
    /* 00867034: sbb edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = ((u64)a < (u64)b + c); }
    /* 00867037: mov ecx, edx */ r_ecx = r_edx;
    /* 00867039: mov edx, ebx */ r_edx = r_ebx;
    /* 0086703b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0086703d: mov ecx, eax */ r_ecx = r_eax;
    /* 0086703f: mov eax, esi */ r_eax = r_esi;
    /* 00867041: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00867042: ret 0x10 */ FN_RET(0x00866fb0); r_esp += 20; return;
}

