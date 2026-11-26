#include "protos.h"

void f_008581c5(void) /* ??2@YAPAXI@Z */
{
    FN_ENTER(0x008581c5);
    /* 008581c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008581c7: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008581cb: call 0x859c29 */ r_esp -= 4; W32(r_esp, 0x8581d0u); f_00859c29();
    /* 008581d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008581d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008581d2: ret  */ FN_RET(0x008581c5); r_esp += 4; return;
}

void f_00858678(void) /* ?__ArrayUnwind@@YGXPAXIHP6EX0@Z@Z */
{
    FN_ENTER(0x00858678);
    /* 00858678: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0085867a: push 0x997e30 */ { u32 v = 0x997e30u; r_esp -= 4; W32(r_esp, v); }
    /* 0085867f: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x858684u); f_0085e5ac();
    /* 00858684: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00858688:; BB(0x00858688);
    /* 00858688: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 0085868b: js 0x85869b */ if (fS) goto L_0085869b;
L_0085868d:; BB(0x0085868d);
    /* 0085868d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00858690: sub ecx, dword ptr [ebp + 0xc] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00858693: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00858696: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x858699u); call_ind(t); }
    /* 00858699: jmp 0x858688 */ goto L_00858688;
L_0085869b:; BB(0x0085869b);
    /* 0085869b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0085869f: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x8586a4u); f_0085e5e7();
    /* 008586a4: ret 0x10 */ FN_RET(0x00858678); r_esp += 20; return;
}

void f_008586d6(void) /* ??_M@YGXPAXIHP6EX0@Z@Z */
{
    FN_ENTER(0x008586d6);
    /* 008586d6: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 008586d8: push 0x997e40 */ { u32 v = 0x997e40u; r_esp -= 4; W32(r_esp, v); }
    /* 008586dd: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x8586e2u); f_0085e5ac();
    /* 008586e2: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008586e6: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008586e9: mov eax, esi */ r_eax = r_esi;
    /* 008586eb: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008586ef: add dword ptr [ebp + 8], eax */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008586f2: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008586f6:; BB(0x008586f6);
    /* 008586f6: dec dword ptr [ebp + 0x10] */ { u32 ad = (u32)(r_ebp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 008586f9: js 0x858706 */ if (fS) goto L_00858706;
L_008586fb:; BB(0x008586fb);
    /* 008586fb: sub dword ptr [ebp + 8], esi */ { u32 ad = (u32)(r_ebp+0x8u);  u32 a = R32(ad); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008586fe: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00858701: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x858704u); call_ind(t); }
    /* 00858704: jmp 0x8586f6 */ goto L_008586f6;
L_00858706:; BB(0x00858706);
    /* 00858706: mov dword ptr [ebp - 0x1c], 1 */ W32((u32)(r_ebp+0xffffffe4u), 0x1u);
    /* 0085870d: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00858711: call 0x85871e */ r_esp -= 4; W32(r_esp, 0x858716u); f_0085871e();
    /* 00858716: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85871bu); f_0085e5e7();
    /* 0085871b: ret 0x10 */ FN_RET(0x008586d6); r_esp += 20; return;
}

void f_00858736(void) /* ??_L@YGXPAXIHP6EX0@Z1@Z */
{
    FN_ENTER(0x00858736);
    /* 00858736: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00858738: push 0x997e50 */ { u32 v = 0x997e50u; r_esp -= 4; W32(r_esp, v); }
    /* 0085873d: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x858742u); f_0085e5ac();
    /* 00858742: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00858744: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00858747: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0085874a: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
L_0085874d:; BB(0x0085874d);
    /* 0085874d: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00858750: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00858753: jge 0x858768 */ if ((fS==fO)) goto L_00858768;
L_00858755:; BB(0x00858755);
    /* 00858755: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00858758: mov ecx, esi */ r_ecx = r_esi;
    /* 0085875a: call dword ptr [ebp + 0x14] */ { u32 t = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, 0x85875du); call_ind(t); }
    /* 0085875d: add esi, dword ptr [ebp + 0xc] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00858760: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 00858763: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00858766: jmp 0x85874d */ goto L_0085874d;
L_00858768:; BB(0x00858768);
    /* 00858768: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0085876f: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00858773: call 0x858780 */ r_esp -= 4; W32(r_esp, 0x858778u); f_00858780();
    /* 00858778: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x85877du); f_0085e5e7();
    /* 0085877d: ret 0x14 */ FN_RET(0x00858736); r_esp += 24; return;
}

