#include "protos.h"

void f_0085ce9f(void) /* _write_char */
{
    FN_ENTER(0x0085ce9f);
    /* 0085ce9f: test byte ptr [eax + 0xc], 0x40 */ {  u32 a = R8((u32)(r_eax+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085cea3: je 0x85ceab */ if (fZ) goto L_0085ceab;
L_0085cea5:; BB(0x0085cea5);
    /* 0085cea5: cmp dword ptr [eax + 8], 0 */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085cea9: je 0x85cec1 */ if (fZ) goto L_0085cec1;
L_0085ceab:; BB(0x0085ceab);
    /* 0085ceab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085ceac: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085ceb0: call 0x865f69 */ r_esp -= 4; W32(r_esp, 0x85ceb5u); f_00865f69();
    /* 0085ceb5: cmp ax, 0xffff */ {  u32 a = (u16)r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0085ceb9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085ceba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cebb: jne 0x85cec1 */ if (!fZ) goto L_0085cec1;
L_0085cebd:; BB(0x0085cebd);
    /* 0085cebd: or dword ptr [esi], 0xffffffff */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0085cec0: ret  */ FN_RET(0x0085ce9f); r_esp += 4; return;
L_0085cec1:; BB(0x0085cec1);
    /* 0085cec1: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0085cec3: ret  */ FN_RET(0x0085ce9f); r_esp += 4; return;
}

void f_0085cec4(void) /* _write_multi_char */
{
    FN_ENTER(0x0085cec4);
    /* 0085cec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0085cec5: mov ebp, esp */ r_ebp = r_esp;
    /* 0085cec7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085cec8: mov esi, eax */ r_esi = r_eax;
    /* 0085ceca: jmp 0x85cee0 */ goto L_0085cee0;
L_0085cecc:; BB(0x0085cecc);
    /* 0085cecc: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0085cecf: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0085ced2: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085ced5: call 0x85ce9f */ r_esp -= 4; W32(r_esp, 0x85cedau); f_0085ce9f();
    /* 0085ceda: cmp dword ptr [esi], -1 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085cedd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cede: je 0x85cee6 */ if (fZ) goto L_0085cee6;
L_0085cee0:; BB(0x0085cee0);
    /* 0085cee0: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085cee4: jg 0x85cecc */ if ((!fZ&&fS==fO)) goto L_0085cecc;
L_0085cee6:; BB(0x0085cee6);
    /* 0085cee6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cee7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0085cee8: ret  */ FN_RET(0x0085cec4); r_esp += 4; return;
}

void f_0085cee9(void) /* _write_string */
{
    FN_ENTER(0x0085cee9);
    /* 0085cee9: test byte ptr [edi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_edi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0085ceed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0085ceee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0085ceef: mov esi, eax */ r_esi = r_eax;
    /* 0085cef1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0085cef3: je 0x85cf1c */ if (fZ) goto L_0085cf1c;
L_0085cef5:; BB(0x0085cef5);
    /* 0085cef5: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0085cef9: jne 0x85cf1c */ if (!fZ) goto L_0085cf1c;
L_0085cefb:; BB(0x0085cefb);
    /* 0085cefb: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0085ceff: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0085cf01: jmp 0x85cf23 */ goto L_0085cf23;
L_0085cf03:; BB(0x0085cf03);
    /* 0085cf03: dec dword ptr [esp + 0xc] */ { u32 ad = (u32)(r_esp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0085cf07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0085cf09: mov ax, word ptr [ebx] */ r_eax = (r_eax & 0xffff0000u) | ((R16((u32)(r_ebx))) & 0xffffu);
    /* 0085cf0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0085cf0d: mov eax, edi */ r_eax = r_edi;
    /* 0085cf0f: call 0x85ce9f */ r_esp -= 4; W32(r_esp, 0x85cf14u); f_0085ce9f();
    /* 0085cf14: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085cf15: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0085cf16: cmp dword ptr [esi], -1 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085cf19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0085cf1a: je 0x85cf23 */ if (fZ) goto L_0085cf23;
L_0085cf1c:; BB(0x0085cf1c);
    /* 0085cf1c: cmp dword ptr [esp + 0xc], 0 */ {  u32 a = R32((u32)(r_esp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0085cf21: jg 0x85cf03 */ if ((!fZ&&fS==fO)) goto L_0085cf03;
L_0085cf23:; BB(0x0085cf23);
    /* 0085cf23: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0085cf24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0085cf25: ret  */ FN_RET(0x0085cee9); r_esp += 4; return;
}

void f_008606e4(void) /* _write_char_0 */
{
    FN_ENTER(0x008606e4);
    /* 008606e4: test byte ptr [ecx + 0xc], 0x40 */ {  u32 a = R8((u32)(r_ecx+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008606e8: je 0x8606f0 */ if (fZ) goto L_008606f0;
L_008606ea:; BB(0x008606ea);
    /* 008606ea: cmp dword ptr [ecx + 8], 0 */ {  u32 a = R32((u32)(r_ecx+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008606ee: je 0x860714 */ if (fZ) goto L_00860714;
L_008606f0:; BB(0x008606f0);
    /* 008606f0: dec dword ptr [ecx + 4] */ { u32 ad = (u32)(r_ecx+0x4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fS = ((r >> 31) & 1); }
    /* 008606f3: js 0x860700 */ if (fS) goto L_00860700;
L_008606f5:; BB(0x008606f5);
    /* 008606f5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008606f7: mov byte ptr [edx], al */ W8((u32)(r_edx), (u8)r_eax);
    /* 008606f9: inc dword ptr [ecx] */ { u32 ad = (u32)(r_ecx); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008606fb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 008606fe: jmp 0x86070c */ goto L_0086070c;
L_00860700:; BB(0x00860700);
    /* 00860700: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00860703: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00860704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00860705: call 0x85cd86 */ r_esp -= 4; W32(r_esp, 0x86070au); f_0085cd86();
    /* 0086070a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086070b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0086070c:; BB(0x0086070c);
    /* 0086070c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0086070f: jne 0x860714 */ if (!fZ) goto L_00860714;
L_00860711:; BB(0x00860711);
    /* 00860711: or dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00860713: ret  */ FN_RET(0x008606e4); r_esp += 4; return;
L_00860714:; BB(0x00860714);
    /* 00860714: inc dword ptr [esi] */ { u32 ad = (u32)(r_esi); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00860716: ret  */ FN_RET(0x008606e4); r_esp += 4; return;
}

void f_00860717(void) /* _write_multi_char_0 */
{
    FN_ENTER(0x00860717);
    /* 00860717: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00860718: mov ebp, esp */ r_ebp = r_esp;
    /* 0086071a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0086071b: mov esi, eax */ r_esi = r_eax;
    /* 0086071d: jmp 0x860732 */ goto L_00860732;
L_0086071f:; BB(0x0086071f);
    /* 0086071f: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 00860722: mov al, byte ptr [ebp + 8] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebp+0x8u))) & 0xffu);
    /* 00860725: dec dword ptr [ebp + 0xc] */ { u32 ad = (u32)(r_ebp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 00860728: call 0x8606e4 */ r_esp -= 4; W32(r_esp, 0x86072du); f_008606e4();
    /* 0086072d: cmp dword ptr [esi], -1 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00860730: je 0x860738 */ if (fZ) goto L_00860738;
L_00860732:; BB(0x00860732);
    /* 00860732: cmp dword ptr [ebp + 0xc], 0 */ {  u32 a = R32((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00860736: jg 0x86071f */ if ((!fZ&&fS==fO)) goto L_0086071f;
L_00860738:; BB(0x00860738);
    /* 00860738: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00860739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0086073a: ret  */ FN_RET(0x00860717); r_esp += 4; return;
}

void f_0086073b(void) /* _write_string_0 */
{
    FN_ENTER(0x0086073b);
    /* 0086073b: test byte ptr [edi + 0xc], 0x40 */ {  u32 a = R8((u32)(r_edi+0xcu)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0086073f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00860740: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00860741: mov esi, eax */ r_esi = r_eax;
    /* 00860743: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00860745: je 0x860768 */ if (fZ) goto L_00860768;
L_00860747:; BB(0x00860747);
    /* 00860747: cmp dword ptr [edi + 8], 0 */ {  u32 a = R32((u32)(r_edi+0x8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0086074b: jne 0x860768 */ if (!fZ) goto L_00860768;
L_0086074d:; BB(0x0086074d);
    /* 0086074d: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00860751: add dword ptr [esi], eax */ { u32 ad = (u32)(r_esi);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00860753: jmp 0x86076f */ goto L_0086076f;
L_00860755:; BB(0x00860755);
    /* 00860755: mov al, byte ptr [ebx] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_ebx))) & 0xffu);
    /* 00860757: dec dword ptr [esp + 0xc] */ { u32 ad = (u32)(r_esp+0xcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 0086075b: mov ecx, edi */ r_ecx = r_edi;
    /* 0086075d: call 0x8606e4 */ r_esp -= 4; W32(r_esp, 0x860762u); f_008606e4();
    /* 00860762: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00860763: cmp dword ptr [esi], -1 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00860766: je 0x86076f */ if (fZ) goto L_0086076f;
L_00860768:; BB(0x00860768);
    /* 00860768: cmp dword ptr [esp + 0xc], 0 */ {  u32 a = R32((u32)(r_esp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0086076d: jg 0x860755 */ if ((!fZ&&fS==fO)) goto L_00860755;
L_0086076f:; BB(0x0086076f);
    /* 0086076f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00860770: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00860771: ret  */ FN_RET(0x0086073b); r_esp += 4; return;
}

void f_00862186(void) /* __write_lk */
{
    FN_ENTER(0x00862186);
    /* 00862186: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00862187: lea ebp, [esp - 0x3a0] */ r_ebp = (u32)(r_esp+0xfffffc60u);
    /* 0086218e: sub esp, 0x420 */ {  u32 a = r_esp; u32 b = 0x420u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00862194: mov eax, dword ptr [0xa23c64] */ r_eax = R32((u32)(0xa23c64u));
    /* 00862199: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0086219a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086219c: cmp dword ptr [ebp + 0x3b0], edi */ {  u32 a = R32((u32)(r_ebp+0x3b0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008621a2: mov dword ptr [ebp + 0x39c], eax */ W32((u32)(r_ebp+0x39cu), r_eax);
    /* 008621a8: mov dword ptr [ebp - 0x78], edi */ W32((u32)(r_ebp+0xffffff88u), r_edi);
    /* 008621ab: mov dword ptr [ebp - 0x7c], edi */ W32((u32)(r_ebp+0xffffff84u), r_edi);
    /* 008621ae: jne 0x8621b7 */ if (!fZ) goto L_008621b7;
L_008621b0:; BB(0x008621b0);
    /* 008621b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008621b2: jmp 0x862340 */ goto L_00862340;
L_008621b7:; BB(0x008621b7);
    /* 008621b7: mov eax, dword ptr [ebp + 0x3a8] */ r_eax = R32((u32)(r_ebp+0x3a8u));
    /* 008621bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008621be: mov ebx, dword ptr [ebp + 0x3a8] */ r_ebx = R32((u32)(r_ebp+0x3a8u));
    /* 008621c4: and eax, 0x1f */ {  u32 a = r_eax; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008621c7: sar ebx, 5 */ { u32 c = (5u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008621ca: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008621cb: lea esi, [eax + eax*8] */ r_esi = (u32)(r_eax+r_eax*8);
    /* 008621ce: lea ebx, [ebx*4 + 0xaf0a80] */ r_ebx = (u32)(r_ebx*4+0xaf0a80u);
    /* 008621d5: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008621d7: shl esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008621da: test byte ptr [eax + esi + 4], 0x20 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008621df: je 0x8621f3 */ if (fZ) goto L_008621f3;
L_008621e1:; BB(0x008621e1);
    /* 008621e1: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008621e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008621e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008621e5: push dword ptr [ebp + 0x3a8] */ { u32 v = R32((u32)(r_ebp+0x3a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008621eb: call 0x8691b9 */ r_esp -= 4; W32(r_esp, 0x8621f0u); f_008691b9();
    /* 008621f0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008621f3:; BB(0x008621f3);
    /* 008621f3: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008621f5: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008621f7: test byte ptr [eax + 4], 0x80 */ {  u32 a = R8((u32)(r_eax+0x4u)); u32 b = 0x80u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008621fb: je 0x8622ce */ if (fZ) goto L_008622ce;
L_00862201:; BB(0x00862201);
    /* 00862201: cmp dword ptr [ebp + 0x3b0], edi */ {  u32 a = R32((u32)(r_ebp+0x3b0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00862207: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0086220d: mov dword ptr [ebp - 0x74], eax */ W32((u32)(r_ebp+0xffffff8cu), r_eax);
    /* 00862210: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 00862213: jbe 0x86230c */ if ((fC||fZ)) goto L_0086230c;
L_00862219:; BB(0x00862219);
    /* 00862219: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0086221c: sub ecx, dword ptr [ebp + 0x3ac] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3acu)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00862222: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 00862225: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
L_00862228:; BB(0x00862228);
    /* 00862228: cmp ecx, dword ptr [ebp + 0x3b0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0086222e: jae 0x862257 */ if (!fC) goto L_00862257;
L_00862230:; BB(0x00862230);
    /* 00862230: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 00862233: inc dword ptr [ebp - 0x74] */ { u32 ad = (u32)(r_ebp+0xffffff8cu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862236: mov dl, byte ptr [edx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edx))) & 0xffu);
    /* 00862238: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00862239: cmp dl, 0xa */ {  u32 a = (u8)r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086223c: jne 0x862248 */ if (!fZ) goto L_00862248;
L_0086223e:; BB(0x0086223e);
    /* 0086223e: inc dword ptr [ebp - 0x7c] */ { u32 ad = (u32)(r_ebp+0xffffff84u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00862241: mov byte ptr [eax], 0xd */ W8((u32)(r_eax), 0xdu);
    /* 00862244: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00862245: inc dword ptr [ebp - 0x70] */ { u32 ad = (u32)(r_ebp+0xffffff90u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_00862248:; BB(0x00862248);
    /* 00862248: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0086224a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0086224b: inc dword ptr [ebp - 0x70] */ { u32 ad = (u32)(r_ebp+0xffffff90u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086224e: cmp dword ptr [ebp - 0x70], 0x400 */ {  u32 a = R32((u32)(r_ebp+0xffffff90u)); u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862255: jl 0x862228 */ if ((fS!=fO)) goto L_00862228;
L_00862257:; BB(0x00862257);
    /* 00862257: mov edi, eax */ r_edi = r_eax;
    /* 00862259: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 0086225c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0086225e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00862260: lea eax, [ebp - 0x80] */ r_eax = (u32)(r_ebp+0xffffff80u);
    /* 00862263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862264: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00862265: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 00862268: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00862269: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0086226b: push dword ptr [eax + esi] */ { u32 v = R32((u32)(r_eax+r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 0086226e: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x862274u); call_ind(t); }
    /* 00862274: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00862276: je 0x862297 */ if (fZ) goto L_00862297;
L_00862278:; BB(0x00862278);
    /* 00862278: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 0086227b: add dword ptr [ebp - 0x78], eax */ { u32 ad = (u32)(r_ebp+0xffffff88u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0086227e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00862280: jl 0x8622a0 */ if ((fS!=fO)) goto L_008622a0;
L_00862282:; BB(0x00862282);
    /* 00862282: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 00862285: sub eax, dword ptr [ebp + 0x3ac] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3acu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0086228b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0086228d: cmp eax, dword ptr [ebp + 0x3b0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x3b0u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00862293: jb 0x862219 */ if (fC) goto L_00862219;
L_00862295:; BB(0x00862295);
    /* 00862295: jmp 0x8622a2 */ goto L_008622a2;
L_00862297:; BB(0x00862297);
    /* 00862297: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x86229du); call_ind(t); }
    /* 0086229d: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
L_008622a0:; BB(0x008622a0);
    /* 008622a0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_008622a2:; BB(0x008622a2);
    /* 008622a2: mov eax, dword ptr [ebp - 0x78] */ r_eax = R32((u32)(r_ebp+0xffffff88u));
    /* 008622a5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008622a7: jne 0x86233b */ if (!fZ) goto L_0086233b;
L_008622ad:; BB(0x008622ad);
    /* 008622ad: cmp dword ptr [ebp - 0x6c], edi */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008622b0: je 0x86230c */ if (fZ) goto L_0086230c;
L_008622b2:; BB(0x008622b2);
    /* 008622b2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008622b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008622b5: cmp dword ptr [ebp - 0x6c], esi */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008622b8: jne 0x862301 */ if (!fZ) goto L_00862301;
L_008622ba:; BB(0x008622ba);
    /* 008622ba: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8622bfu); f_00859dd6();
    /* 008622bf: mov dword ptr [eax], 9 */ W32((u32)(r_eax), 0x9u);
    /* 008622c5: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x8622cau); f_00859ddf();
    /* 008622ca: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008622cc: jmp 0x862336 */ goto L_00862336;
L_008622ce:; BB(0x008622ce);
    /* 008622ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008622cf: lea ecx, [ebp - 0x80] */ r_ecx = (u32)(r_ebp+0xffffff80u);
    /* 008622d2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008622d3: push dword ptr [ebp + 0x3b0] */ { u32 v = R32((u32)(r_ebp+0x3b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008622d9: push dword ptr [ebp + 0x3ac] */ { u32 v = R32((u32)(r_ebp+0x3acu)); r_esp -= 4; W32(r_esp, v); }
    /* 008622df: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 008622e1: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x8622e7u); call_ind(t); }
    /* 008622e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008622e9: je 0x8622f6 */ if (fZ) goto L_008622f6;
L_008622eb:; BB(0x008622eb);
    /* 008622eb: mov eax, dword ptr [ebp - 0x80] */ r_eax = R32((u32)(r_ebp+0xffffff80u));
    /* 008622ee: mov dword ptr [ebp - 0x6c], edi */ W32((u32)(r_ebp+0xffffff94u), r_edi);
    /* 008622f1: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 008622f4: jmp 0x8622a2 */ goto L_008622a2;
L_008622f6:; BB(0x008622f6);
    /* 008622f6: call dword ptr [0x8f817c] */ { u32 t = R32((u32)(0x8f817cu)); r_esp -= 4; W32(r_esp, 0x8622fcu); call_ind(t); }
    /* 008622fc: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 008622ff: jmp 0x8622a2 */ goto L_008622a2;
L_00862301:; BB(0x00862301);
    /* 00862301: push dword ptr [ebp - 0x6c] */ { u32 v = R32((u32)(r_ebp+0xffffff94u)); r_esp -= 4; W32(r_esp, v); }
    /* 00862304: call 0x859de8 */ r_esp -= 4; W32(r_esp, 0x862309u); f_00859de8();
    /* 00862309: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0086230a: jmp 0x862336 */ goto L_00862336;
L_0086230c:; BB(0x0086230c);
    /* 0086230c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0086230e: test byte ptr [eax + esi + 4], 0x40 */ {  u32 a = R8((u32)(r_eax+r_esi+0x4u)); u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00862313: je 0x862324 */ if (fZ) goto L_00862324;
L_00862315:; BB(0x00862315);
    /* 00862315: mov eax, dword ptr [ebp + 0x3ac] */ r_eax = R32((u32)(r_ebp+0x3acu));
    /* 0086231b: cmp byte ptr [eax], 0x1a */ {  u32 a = R8((u32)(r_eax)); u32 b = 0x1au; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 0086231e: jne 0x862324 */ if (!fZ) goto L_00862324;
L_00862320:; BB(0x00862320);
    /* 00862320: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00862322: jmp 0x86233e */ goto L_0086233e;
L_00862324:; BB(0x00862324);
    /* 00862324: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x862329u); f_00859dd6();
    /* 00862329: mov dword ptr [eax], 0x1c */ W32((u32)(r_eax), 0x1cu);
    /* 0086232f: call 0x859ddf */ r_esp -= 4; W32(r_esp, 0x862334u); f_00859ddf();
    /* 00862334: mov dword ptr [eax], edi */ W32((u32)(r_eax), r_edi);
L_00862336:; BB(0x00862336);
    /* 00862336: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00862339: jmp 0x86233e */ goto L_0086233e;
L_0086233b:; BB(0x0086233b);
    /* 0086233b: sub eax, dword ptr [ebp - 0x7c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xffffff84u)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
L_0086233e:; BB(0x0086233e);
    /* 0086233e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0086233f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00862340:; BB(0x00862340);
    /* 00862340: mov ecx, dword ptr [ebp + 0x39c] */ r_ecx = R32((u32)(r_ebp+0x39cu));
    /* 00862346: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00862347: call 0x85e419 */ r_esp -= 4; W32(r_esp, 0x86234cu); f_0085e419();
    /* 0086234c: add ebp, 0x3a0 */ {  u32 a = r_ebp; u32 b = 0x3a0u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00862352: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00862353: ret  */ FN_RET(0x00862186); r_esp += 4; return;
}

