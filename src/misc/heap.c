#include "protos.h"

void f_00859bae(void) /* __heap_alloc */
{
    FN_ENTER(0x00859bae);
    /* 00859bae: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00859bb0: push 0x997ef8 */ { u32 v = 0x997ef8u; r_esp -= 4; W32(r_esp, v); }
    /* 00859bb5: call 0x85e5ac */ r_esp -= 4; W32(r_esp, 0x859bbau); f_0085e5ac();
    /* 00859bba: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00859bbd: cmp dword ptr [0xaf0ba0], 3 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859bc4: jne 0x859bf4 */ if (!fZ) goto L_00859bf4;
L_00859bc6:; BB(0x00859bc6);
    /* 00859bc6: cmp esi, dword ptr [0xaf0b8c] */ {  u32 a = r_esi; u32 b = R32((u32)(0xaf0b8cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00859bcc: ja 0x859bf4 */ if ((!fC&&!fZ)) goto L_00859bf4;
L_00859bce:; BB(0x00859bce);
    /* 00859bce: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00859bd0: call 0x85e57a */ r_esp -= 4; W32(r_esp, 0x859bd5u); f_0085e57a();
    /* 00859bd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859bd6: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00859bda: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859bdb: call 0x85fe07 */ r_esp -= 4; W32(r_esp, 0x859be0u); f_0085fe07();
    /* 00859be0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00859be1: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00859be4: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00859be8: call 0x859c20 */ r_esp -= 4; W32(r_esp, 0x859bedu); f_00859c20();
    /* 00859bed: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00859bf0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859bf2: jne 0x859c17 */ if (!fZ) goto L_00859c17;
L_00859bf4:; BB(0x00859bf4);
    /* 00859bf4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859bf6: jne 0x859bf9 */ if (!fZ) goto L_00859bf9;
L_00859bf8:; BB(0x00859bf8);
    /* 00859bf8: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00859bf9:; BB(0x00859bf9);
    /* 00859bf9: cmp dword ptr [0xaf0ba0], 1 */ {  u32 a = R32((u32)(0xaf0ba0u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00859c00: je 0x859c08 */ if (fZ) goto L_00859c08;
L_00859c02:; BB(0x00859c02);
    /* 00859c02: add esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00859c05: and esi, 0xfffffff0 */ {  u32 a = r_esi; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
L_00859c08:; BB(0x00859c08);
    /* 00859c08: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00859c09: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00859c0b: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00859c11: call dword ptr [0x8f8190] */ { u32 t = R32((u32)(0x8f8190u)); r_esp -= 4; W32(r_esp, 0x859c17u); call_ind(t); }
L_00859c17:; BB(0x00859c17);
    /* 00859c17: call 0x85e5e7 */ r_esp -= 4; W32(r_esp, 0x859c1cu); f_0085e5e7();
    /* 00859c1c: ret  */ FN_RET(0x00859bae); r_esp += 4; return;
}

void f_0085f50f(void) /* ___heap_select */
{
    FN_ENTER(0x0085f50f);
    /* 0085f50f: cmp dword ptr [0xae7a10], 2 */ {  u32 a = R32((u32)(0xae7a10u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f516: jne 0x85f525 */ if (!fZ) goto L_0085f525;
L_0085f518:; BB(0x0085f518);
    /* 0085f518: cmp dword ptr [0xae7a1c], 5 */ {  u32 a = R32((u32)(0xae7a1cu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085f51f: jb 0x85f525 */ if (fC) goto L_0085f525;
L_0085f521:; BB(0x0085f521);
    /* 0085f521: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085f523: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085f524: ret  */ FN_RET(0x0085f50f); r_esp += 4; return;
L_0085f525:; BB(0x0085f525);
    /* 0085f525: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f527: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 0085f528: ret  */ FN_RET(0x0085f50f); r_esp += 4; return;
}

void f_0085f529(void) /* __heap_init */
{
    FN_ENTER(0x0085f529);
    /* 0085f529: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085f52b: cmp dword ptr [esp + 4], eax */ {  u32 a = R32((u32)(r_esp+0x4u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f52f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f531: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0085f534: push 0x1000 */ { u32 v = 0x1000u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f539: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085f53a: call dword ptr [0x8f8198] */ { u32 t = R32((u32)(0x8f8198u)); r_esp -= 4; W32(r_esp, 0x85f540u); call_ind(t); }
    /* 0085f540: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f542: mov dword ptr [0xaf0b9c], eax */ W32((u32)(0xaf0b9cu), r_eax);
    /* 0085f547: je 0x85f573 */ if (fZ) goto L_0085f573;
L_0085f549:; BB(0x0085f549);
    /* 0085f549: call 0x85f50f */ r_esp -= 4; W32(r_esp, 0x85f54eu); f_0085f50f();
    /* 0085f54e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f551: mov dword ptr [0xaf0ba0], eax */ W32((u32)(0xaf0ba0u), r_eax);
    /* 0085f556: jne 0x85f576 */ if (!fZ) goto L_0085f576;
L_0085f558:; BB(0x0085f558);
    /* 0085f558: push 0x3f8 */ { u32 v = 0x3f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0085f55d: call 0x85f5e0 */ r_esp -= 4; W32(r_esp, 0x85f562u); f_0085f5e0();
    /* 0085f562: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085f564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085f565: jne 0x85f576 */ if (!fZ) goto L_0085f576;
L_0085f567:; BB(0x0085f567);
    /* 0085f567: push dword ptr [0xaf0b9c] */ { u32 v = R32((u32)(0xaf0b9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0085f56d: call dword ptr [0x8f8194] */ { u32 t = R32((u32)(0x8f8194u)); r_esp -= 4; W32(r_esp, 0x85f573u); call_ind(t); }
L_0085f573:; BB(0x0085f573);
    /* 0085f573: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085f575: ret  */ FN_RET(0x0085f529); r_esp += 4; return;
L_0085f576:; BB(0x0085f576);
    /* 0085f576: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fC = 0; }
    /* 0085f578: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085f579: ret  */ FN_RET(0x0085f529); r_esp += 4; return;
}

