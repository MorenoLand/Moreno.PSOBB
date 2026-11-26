#include "protos.h"

void f_005fb060(void) /* sub_5FB060 */
{
    FN_ENTER(0x005fb060);
    /* 005fb060: mov edx, ecx */ r_edx = r_ecx;
    /* 005fb062: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fb067: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb06a: je 0x5fb092 */ if (fZ) goto L_005fb092;
L_005fb06c:; BB(0x005fb06c);
    /* 005fb06c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb06f: jne 0x5fb07f */ if (!fZ) goto L_005fb07f;
L_005fb071:; BB(0x005fb071);
    /* 005fb071: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 005fb077: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb079: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fb07eu); f_00830c04();
    /* 005fb07e: ret  */ FN_RET(0x005fb060); r_esp += 4; return;
L_005fb07f:; BB(0x005fb07f);
    /* 005fb07f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb082: jne 0x5fb0a1 */ if (!fZ) goto L_005fb0a1;
L_005fb084:; BB(0x005fb084);
    /* 005fb084: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005fb08a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb08c: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fb091u); f_0082e9e4();
    /* 005fb091: ret  */ FN_RET(0x005fb060); r_esp += 4; return;
L_005fb092:; BB(0x005fb092);
    /* 005fb092: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 005fb098: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005fb09a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb09c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fb0a1u); f_00830c04();
L_005fb0a1:; BB(0x005fb0a1);
    /* 005fb0a1: ret  */ FN_RET(0x005fb060); r_esp += 4; return;
}

void f_005fb0a4(void) /* sub_5FB0A4 */
{
    FN_ENTER(0x005fb0a4);
    /* 005fb0a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0a5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fb0a7: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005fb0ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0af: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0b5: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fb0bau); f_005dd6f8();
    /* 005fb0ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0bc: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0c1: add ebp, 0x244 */ {  u32 a = r_ebp; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005fb0c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0c8: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fb0cdu); f_005dd6f8();
    /* 005fb0cd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fb0d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb0d1: ret  */ FN_RET(0x005fb0a4); r_esp += 4; return;
}

void f_005fb0d4(void) /* sub_5FB0D4 */
{
    FN_ENTER(0x005fb0d4);
    /* 005fb0d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0d5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fb0d7: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005fb0dd: push 0xffffe38f */ { u32 v = 0xffffe38fu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0e2: push 0xfffffc72 */ { u32 v = 0xfffffc72u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0e8: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fb0edu); f_005dd6f8();
    /* 005fb0ed: push 0xffffdc72 */ { u32 v = 0xffffdc72u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0f2: push 0xfffffc72 */ { u32 v = 0xfffffc72u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0f7: add ebp, 0x244 */ {  u32 a = r_ebp; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005fb0fd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb0fe: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fb103u); f_005dd6f8();
    /* 005fb103: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fb106: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb107: ret  */ FN_RET(0x005fb0d4); r_esp += 4; return;
}

void f_005fb108(void) /* sub_5FB108 */
{
    FN_ENTER(0x005fb108);
    /* 005fb108: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb109: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb10b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb10d: push 0x8ddf40 */ { u32 v = 0x8ddf40u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb112: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb118: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb119: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb120: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb123: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb126: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fb129: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fb12c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fb12f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb132: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb134: je 0x5fb18b */ if (fZ) goto L_005fb18b;
L_005fb136:; BB(0x005fb136);
    /* 005fb136: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fb13d: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb142: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fb147u); f_005caba4();
    /* 005fb147: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb148: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fb14b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb14d: je 0x5fb187 */ if (fZ) goto L_005fb187;
L_005fb14f:; BB(0x005fb14f);
    /* 005fb14f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fb156: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb15d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb160: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb163: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb164: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb16a: call 0x5fb19c */ r_esp -= 4; W32(r_esp, 0x5fb16fu); f_005fb19c();
    /* 005fb16f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb172: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fb179:; BB(0x005fb179);
    /* 005fb179: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb17c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb183: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb185: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb186: ret  */ FN_RET(0x005fb108); r_esp += 4; return;
L_005fb187:; BB(0x005fb187);
    /* 005fb187: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb189: jmp 0x5fb179 */ goto L_005fb179;
L_005fb18b:; BB(0x005fb18b);
    /* 005fb18b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb18d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb190: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb197: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb199: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb19a: ret  */ FN_RET(0x005fb108); r_esp += 4; return;
}

void f_005fb19c(void) /* sub_5FB19C */
{
    FN_ENTER(0x005fb19c);
    /* 005fb19c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb19d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fb19f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb1a3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb1a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fb1a9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fb1aeu); f_005e959c();
    /* 005fb1ae: mov dword ptr [ebx], 0xb19de0 */ W32((u32)(r_ebx), 0xb19de0u);
    /* 005fb1b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb1b6: mov dword ptr [ebx + 0x244], edx */ W32((u32)(r_ebx+0x244u), r_edx);
    /* 005fb1bc: mov dword ptr [ebx + 0x240], edx */ W32((u32)(r_ebx+0x240u), r_edx);
    /* 005fb1c2: mov dword ptr [ebx + 0x238], 0x5e44a8 */ W32((u32)(r_ebx+0x238u), 0x5e44a8u);
    /* 005fb1cc: mov eax, ebx */ r_eax = r_ebx;
    /* 005fb1ce: mov dword ptr [ebx + 0x23c], 0x5cf840 */ W32((u32)(r_ebx+0x23cu), 0x5cf840u);
    /* 005fb1d8: mov dword ptr [ebx + 0x234], 0x5cfca8 */ W32((u32)(r_ebx+0x234u), 0x5cfca8u);
    /* 005fb1e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fb1e3: ret 8 */ FN_RET(0x005fb19c); r_esp += 12; return;
}

void f_005fb1e8(void) /* sub_5FB1E8 */
{
    FN_ENTER(0x005fb1e8);
    /* 005fb1e8: mov dword ptr [0xa8e18c], 0x3f800000 */ W32((u32)(0xa8e18cu), 0x3f800000u);
    /* 005fb1f2: mov dword ptr [0xa8e190], 0x41000000 */ W32((u32)(0xa8e190u), 0x41000000u);
    /* 005fb1fc: mov dword ptr [0xa8e194], 0x3fc00000 */ W32((u32)(0xa8e194u), 0x3fc00000u);
    /* 005fb206: ret  */ FN_RET(0x005fb1e8); r_esp += 4; return;
}

void f_005fb208(void) /* sub_5FB208 */
{
    FN_ENTER(0x005fb208);
    /* 005fb208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb209: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb20b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb20d: push 0x8ddf5c */ { u32 v = 0x8ddf5cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb220: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb226: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fb229: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fb22c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fb22f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fb232: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fb235: mov eax, ecx */ r_eax = r_ecx;
    /* 005fb237: mov dword ptr [eax], 0xb19f40 */ W32((u32)(r_eax), 0xb19f40u);
    /* 005fb23d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fb244: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fb249u); f_005e61c8();
    /* 005fb249: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb24c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb24e: jne 0x5fb260 */ if (!fZ) goto L_005fb260;
L_005fb250:; BB(0x005fb250);
    /* 005fb250: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb253: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb25a: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb25c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb25d: ret 4 */ FN_RET(0x005fb208); r_esp += 8; return;
L_005fb260:; BB(0x005fb260);
    /* 005fb260: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb264: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fb269u); f_005c2f74();
    /* 005fb269: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb26a: jmp 0x5fb250 */ goto L_005fb250;
}

void f_005fb26c(void) /* sub_5FB26C */
{
    FN_ENTER(0x005fb26c);
    /* 005fb26c: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fb273: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb276: jne 0x5fb284 */ if (!fZ) goto L_005fb284;
L_005fb278:; BB(0x005fb278);
    /* 005fb278: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fb27f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb282: je 0x5fb285 */ if (fZ) goto L_005fb285;
L_005fb284:; BB(0x005fb284);
    /* 005fb284: ret  */ FN_RET(0x005fb26c); r_esp += 4; return;
L_005fb285:; BB(0x005fb285);
    /* 005fb285: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fb28a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb28d: jne 0x5fb284 */ if (!fZ) goto L_005fb284;
L_005fb28f:; BB(0x005fb28f);
    /* 005fb28f: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb294: push dword ptr [ecx + 0x240] */ { u32 v = R32((u32)(r_ecx+0x240u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb29a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb29c: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2a1: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5fb2a6u); f_0082fa0c();
    /* 005fb2a6: ret  */ FN_RET(0x005fb26c); r_esp += 4; return;
}

void f_005fb2a8(void) /* sub_5FB2A8 */
{
    FN_ENTER(0x005fb2a8);
    /* 005fb2a8: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fb2af: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb2b2: jne 0x5fb2d9 */ if (!fZ) goto L_005fb2d9;
L_005fb2b4:; BB(0x005fb2b4);
    /* 005fb2b4: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fb2bb: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb2be: jne 0x5fb2d9 */ if (!fZ) goto L_005fb2d9;
L_005fb2c0:; BB(0x005fb2c0);
    /* 005fb2c0: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2c5: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2ca: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb2d0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2d1: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fb2d6u); f_005dd728();
    /* 005fb2d6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fb2d9:; BB(0x005fb2d9);
    /* 005fb2d9: ret  */ FN_RET(0x005fb2a8); r_esp += 4; return;
}

void f_005fb2dc(void) /* sub_5FB2DC */
{
    FN_ENTER(0x005fb2dc);
    /* 005fb2dc: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fb2e3: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb2e6: jne 0x5fb30d */ if (!fZ) goto L_005fb30d;
L_005fb2e8:; BB(0x005fb2e8);
    /* 005fb2e8: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fb2ef: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb2f2: jne 0x5fb30d */ if (!fZ) goto L_005fb30d;
L_005fb2f4:; BB(0x005fb2f4);
    /* 005fb2f4: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2f9: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb2fe: add ecx, 0x240 */ {  u32 a = r_ecx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fb304: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb305: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fb30au); f_005dd728();
    /* 005fb30a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fb30d:; BB(0x005fb30d);
    /* 005fb30d: ret  */ FN_RET(0x005fb2dc); r_esp += 4; return;
}

void f_005fb310(void) /* sub_5FB310 */
{
    FN_ENTER(0x005fb310);
    /* 005fb310: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb311: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb312: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb315: mov esi, ecx */ r_esi = r_ecx;
    /* 005fb317: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005fb31e: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb321: jne 0x5fb3c5 */ if (!fZ) goto L_005fb3c5;
L_005fb327:; BB(0x005fb327);
    /* 005fb327: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005fb32e: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fb331: jl 0x5fb3c5 */ if ((fS!=fO)) goto L_005fb3c5;
L_005fb337:; BB(0x005fb337);
    /* 005fb337: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fb33a: jg 0x5fb3c5 */ if ((!fZ&&fS==fO)) goto L_005fb3c5;
L_005fb340:; BB(0x005fb340);
    /* 005fb340: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb343: je 0x5fb3a8 */ if (fZ) goto L_005fb3a8;
L_005fb345:; BB(0x005fb345);
    /* 005fb345: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005fb34b: mov edi, dword ptr [eax + 0x60] */ r_edi = R32((u32)(r_eax+0x60u));
    /* 005fb34e: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005fb354: mov ecx, edi */ r_ecx = r_edi;
    /* 005fb356: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5fb35bu); f_0082dcbc();
    /* 005fb35b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 005fb35e: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 005fb366: mov ecx, edi */ r_ecx = r_edi;
    /* 005fb368: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5fb36du); f_0082ddd8();
    /* 005fb36d: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005fb373: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 005fb376: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 005fb37a: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005fb37e: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 005fb386: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 005fb38e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fb391: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 005fb395: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb397: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb39a: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb3a0: call 0x5fec70 */ r_esp -= 4; W32(r_esp, 0x5fb3a5u); f_005fec70();
    /* 005fb3a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fb3a8:; BB(0x005fb3a8);
    /* 005fb3a8: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005fb3ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3af: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb3b1: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fb3b6u); f_005e83c8();
    /* 005fb3b6: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 005fb3ba: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb3bd: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fb3c2u); f_0050b510();
    /* 005fb3c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fb3c5:; BB(0x005fb3c5);
    /* 005fb3c5: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fb3c8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fb3c9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fb3ca: ret  */ FN_RET(0x005fb310); r_esp += 4; return;
}

void f_005fb3cc(void) /* sub_5FB3CC */
{
    FN_ENTER(0x005fb3cc);
    /* 005fb3cc: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fb3d3: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb3d6: jne 0x5fb3fa */ if (!fZ) goto L_005fb3fa;
L_005fb3d8:; BB(0x005fb3d8);
    /* 005fb3d8: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fb3df: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb3e2: jne 0x5fb3fa */ if (!fZ) goto L_005fb3fa;
L_005fb3e4:; BB(0x005fb3e4);
    /* 005fb3e4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005fb3e8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005fb3ec: mov dword ptr [eax + 0x10], 0xa */ W32((u32)(r_eax+0x10u), 0xau);
    /* 005fb3f3: mov dword ptr [edx + 0x70], 0x5cf2ec */ W32((u32)(r_edx+0x70u), 0x5cf2ecu);
L_005fb3fa:; BB(0x005fb3fa);
    /* 005fb3fa: ret 4 */ FN_RET(0x005fb3cc); r_esp += 8; return;
}

void f_005fb400(void) /* sub_5FB400 */
{
    FN_ENTER(0x005fb400);
    /* 005fb400: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb401: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb403: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb405: push 0x8ddf84 */ { u32 v = 0x8ddf84u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb40a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb410: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb411: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb418: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb41b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb41e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fb421: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fb424: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fb427: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb42a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb42c: je 0x5fb483 */ if (fZ) goto L_005fb483;
L_005fb42e:; BB(0x005fb42e);
    /* 005fb42e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fb435: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb43a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fb43fu); f_005caba4();
    /* 005fb43f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb440: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fb443: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb445: je 0x5fb47f */ if (fZ) goto L_005fb47f;
L_005fb447:; BB(0x005fb447);
    /* 005fb447: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fb44e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb455: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb458: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb45b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb45c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb462: call 0x5fb494 */ r_esp -= 4; W32(r_esp, 0x5fb467u); f_005fb494();
    /* 005fb467: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb46a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fb471:; BB(0x005fb471);
    /* 005fb471: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb474: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb47b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb47d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb47e: ret  */ FN_RET(0x005fb400); r_esp += 4; return;
L_005fb47f:; BB(0x005fb47f);
    /* 005fb47f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb481: jmp 0x5fb471 */ goto L_005fb471;
L_005fb483:; BB(0x005fb483);
    /* 005fb483: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb485: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb488: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb48f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb492: ret  */ FN_RET(0x005fb400); r_esp += 4; return;
}

void f_005fb494(void) /* sub_5FB494 */
{
    FN_ENTER(0x005fb494);
    /* 005fb494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb495: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb496: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fb498: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005fb49c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb49d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fb49f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb4a3: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fb4a8u); f_005e959c();
    /* 005fb4a8: mov dword ptr [ebp], 0xb19f40 */ W32((u32)(r_ebp), 0xb19f40u);
    /* 005fb4af: mov dword ptr [ebp + 0x234], 0x5cf288 */ W32((u32)(r_ebp+0x234u), 0x5cf288u);
    /* 005fb4b9: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 005fb4c3: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005fb4c7: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb4ca: jne 0x5fb4eb */ if (!fZ) goto L_005fb4eb;
L_005fb4cc:; BB(0x005fb4cc);
    /* 005fb4cc: movzx edx, byte ptr [ebx + 2] */ r_edx = (u32)R8((u32)(r_ebx+0x2u));
    /* 005fb4d0: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb4d3: jl 0x5fb4eb */ if ((fS!=fO)) goto L_005fb4eb;
L_005fb4d5:; BB(0x005fb4d5);
    /* 005fb4d5: cmp edx, 0xb */ {  u32 a = r_edx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb4d8: jg 0x5fb4e6 */ if ((!fZ&&fS==fO)) goto L_005fb4e6;
L_005fb4da:; BB(0x005fb4da);
    /* 005fb4da: mov dword ptr [ebp + 0x238], 0 */ W32((u32)(r_ebp+0x238u), 0x0u);
    /* 005fb4e4: jmp 0x5fb4eb */ goto L_005fb4eb;
L_005fb4e6:; BB(0x005fb4e6);
    /* 005fb4e6: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb4e9: jne 0x5fb4f2 */ if (!fZ) goto L_005fb4f2;
L_005fb4eb:; BB(0x005fb4eb);
    /* 005fb4eb: mov eax, ebp */ r_eax = r_ebp;
    /* 005fb4ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fb4ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb4ef: ret 8 */ FN_RET(0x005fb494); r_esp += 12; return;
L_005fb4f2:; BB(0x005fb4f2);
    /* 005fb4f2: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb4f5: jne 0x5fb4eb */ if (!fZ) goto L_005fb4eb;
L_005fb4f7:; BB(0x005fb4f7);
    /* 005fb4f7: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005fb4fd: mov dword ptr [ebp + 0x238], 0 */ W32((u32)(r_ebp+0x238u), 0x0u);
    /* 005fb507: or edx, 0x4008000 */ {  u32 a = r_edx; u32 b = 0x4008000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb50d: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005fb513: jmp 0x5fb4eb */ goto L_005fb4eb;
}

void f_005fb518(void) /* sub_5FB518 */
{
    FN_ENTER(0x005fb518);
    /* 005fb518: mov dword ptr [0xa8e198], 0x3f800000 */ W32((u32)(0xa8e198u), 0x3f800000u);
    /* 005fb522: mov dword ptr [0xa8e19c], 0x41000000 */ W32((u32)(0xa8e19cu), 0x41000000u);
    /* 005fb52c: mov dword ptr [0xa8e1a0], 0x3fc00000 */ W32((u32)(0xa8e1a0u), 0x3fc00000u);
    /* 005fb536: ret  */ FN_RET(0x005fb518); r_esp += 4; return;
}

void f_005fb538(void) /* sub_5FB538 */
{
    FN_ENTER(0x005fb538);
    /* 005fb538: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb539: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fb53b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fb53d: call 0x5fb55c */ r_esp -= 4; W32(r_esp, 0x5fb542u); f_005fb55c();
    /* 005fb542: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fb546: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb548: jne 0x5fb54e */ if (!fZ) goto L_005fb54e;
L_005fb54a:; BB(0x005fb54a);
    /* 005fb54a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fb54b: ret 4 */ FN_RET(0x005fb538); r_esp += 8; return;
L_005fb54e:; BB(0x005fb54e);
    /* 005fb54e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb54f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fb554u); f_005c2f74();
    /* 005fb554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb555: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fb556: ret 4 */ FN_RET(0x005fb538); r_esp += 8; return;
}

void f_005fb55c(void) /* sub_5FB55C */
{
    FN_ENTER(0x005fb55c);
    /* 005fb55c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb55d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb55f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb561: push 0x8ddfa0 */ { u32 v = 0x8ddfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb566: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb56c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb56d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb574: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb577: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb57a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fb57d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fb580: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fb583: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fb586: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb589: mov dword ptr [ecx], 0xb1a120 */ W32((u32)(r_ecx), 0xb1a120u);
    /* 005fb58f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fb596: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fb59bu); f_005e61c8();
    /* 005fb59b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb59e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb5a5: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb5a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb5a8: ret  */ FN_RET(0x005fb55c); r_esp += 4; return;
}

void f_005fb5ac(void) /* sub_5FB5AC */
{
    FN_ENTER(0x005fb5ac);
    /* 005fb5ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5ad: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb5af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5b1: push 0x8ddfd4 */ { u32 v = 0x8ddfd4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb5bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb5bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb5c4: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb5c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb5ca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fb5cd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fb5d0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fb5d3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fb5d6: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 005fb5d9: mov eax, ecx */ r_eax = r_ecx;
    /* 005fb5db: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fb5de: mov dword ptr [eax], 0xb0cd38 */ W32((u32)(r_eax), 0xb0cd38u);
    /* 005fb5e4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fb5eb: call 0x5e3e40 */ r_esp -= 4; W32(r_esp, 0x5fb5f0u); f_005e3e40();
    /* 005fb5f0: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb5f3: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb5f5: jne 0x5fb607 */ if (!fZ) goto L_005fb607;
L_005fb5f7:; BB(0x005fb5f7);
    /* 005fb5f7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb5fa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb601: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb603: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb604: ret 4 */ FN_RET(0x005fb5ac); r_esp += 8; return;
L_005fb607:; BB(0x005fb607);
    /* 005fb607: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb60a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb60b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fb610u); f_005c2f74();
    /* 005fb610: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb611: jmp 0x5fb5f7 */ goto L_005fb5f7;
}

void f_005fb614(void) /* sub_5FB614 */
{
    FN_ENTER(0x005fb614);
    /* 005fb614: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005fb618: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb61a: je 0x5fb62b */ if (fZ) goto L_005fb62b;
L_005fb61c:; BB(0x005fb61c);
    /* 005fb61c: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 005fb622: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb625: mov dword ptr [edx + 0x240], eax */ W32((u32)(r_edx+0x240u), r_eax);
L_005fb62b:; BB(0x005fb62b);
    /* 005fb62b: ret  */ FN_RET(0x005fb614); r_esp += 4; return;
}

void f_005fb62c(void) /* sub_5FB62C */
{
    FN_ENTER(0x005fb62c);
    /* 005fb62c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb62d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb62e: mov esi, ecx */ r_esi = r_ecx;
    /* 005fb630: mov edi, dword ptr [esi + 0xfc] */ r_edi = R32((u32)(r_esi+0xfcu));
    /* 005fb636: mov eax, dword ptr [esi + 0x240] */ r_eax = R32((u32)(r_esi+0x240u));
    /* 005fb63c: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fb63f: mov dword ptr [esi + 0x240], eax */ W32((u32)(r_esi+0x240u), r_eax);
    /* 005fb645: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb647: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5fb64cu); f_005e84a8();
    /* 005fb64c: lea eax, [esi + 0x244] */ r_eax = (u32)(r_esi+0x244u);
    /* 005fb652: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb653: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb655: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb657: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fb65cu); f_005e83c8();
    /* 005fb65c: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb65e: mov eax, dword ptr [esi + 0x198] */ r_eax = R32((u32)(r_esi+0x198u));
    /* 005fb664: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005fb66a: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 005fb670: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005fb673: mov dword ptr [esi + 0x240], edx */ W32((u32)(r_esi+0x240u), r_edx);
    /* 005fb679: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb67b: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5fb680u); f_005e6334();
    /* 005fb680: lea eax, [esi + 0x250] */ r_eax = (u32)(r_esi+0x250u);
    /* 005fb686: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb689: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb68b: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fb690u); f_005e83c8();
    /* 005fb690: mov dword ptr [esi + 0xfc], edi */ W32((u32)(r_esi+0xfcu), r_edi);
    /* 005fb696: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fb697: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fb698: ret  */ FN_RET(0x005fb62c); r_esp += 4; return;
}

void f_005fb69c(void) /* sub_5FB69C */
{
    FN_ENTER(0x005fb69c);
    /* 005fb69c: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fb6a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fb6a4: jne 0x5fb6cb */ if (!fZ) goto L_005fb6cb;
L_005fb6a6:; BB(0x005fb6a6);
    /* 005fb6a6: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005fb6ac: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb6ae: jne 0x5fb6cb */ if (!fZ) goto L_005fb6cb;
L_005fb6b0:; BB(0x005fb6b0);
    /* 005fb6b0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005fb6b2: je 0x5fb6bc */ if (fZ) goto L_005fb6bc;
L_005fb6b4:; BB(0x005fb6b4);
    /* 005fb6b4: mov ecx, dword ptr [ecx + 0x1ac] */ r_ecx = R32((u32)(r_ecx+0x1acu));
    /* 005fb6ba: jmp 0x5fb6c2 */ goto L_005fb6c2;
L_005fb6bc:; BB(0x005fb6bc);
    /* 005fb6bc: mov ecx, dword ptr [ecx + 0x19c] */ r_ecx = R32((u32)(r_ecx+0x19cu));
L_005fb6c2:; BB(0x005fb6c2);
    /* 005fb6c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb6c4: je 0x5fb6cb */ if (fZ) goto L_005fb6cb;
L_005fb6c6:; BB(0x005fb6c6);
    /* 005fb6c6: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5fb6cbu); f_00831758();
L_005fb6cb:; BB(0x005fb6cb);
    /* 005fb6cb: ret  */ FN_RET(0x005fb69c); r_esp += 4; return;
}

void f_005fb6cc(void) /* sub_5FB6CC */
{
    FN_ENTER(0x005fb6cc);
    /* 005fb6cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb6cd: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb6cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb6d1: push 0x8ddffc */ { u32 v = 0x8ddffcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb6d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb6dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb6dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb6e4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb6e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb6ea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fb6ed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fb6f0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fb6f3: mov edx, dword ptr [ecx + 0xf8] */ r_edx = R32((u32)(r_ecx+0xf8u));
    /* 005fb6f9: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fb6fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb6fe: je 0x5fb7c9 */ if (fZ) goto L_005fb7c9;
L_005fb704:; BB(0x005fb704);
    /* 005fb704: mov eax, dword ptr [edx + 0x8b8] */ r_eax = R32((u32)(r_edx+0x8b8u));
    /* 005fb70a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb70c: jne 0x5fb7c9 */ if (!fZ) goto L_005fb7c9;
L_005fb712:; BB(0x005fb712);
    /* 005fb712: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005fb715: mov dword ptr [edx + 0x8b8], eax */ W32((u32)(r_edx+0x8b8u), r_eax);
    /* 005fb71b: mov eax, ecx */ r_eax = r_ecx;
    /* 005fb71d: mov edx, dword ptr [eax + 0x240] */ r_edx = R32((u32)(r_eax+0x240u));
    /* 005fb723: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fb726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb728: je 0x5fb77d */ if (fZ) goto L_005fb77d;
L_005fb72a:; BB(0x005fb72a);
    /* 005fb72a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005fb731: mov dword ptr [eax + 0x240], edx */ W32((u32)(r_eax+0x240u), r_edx);
    /* 005fb737: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb739: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fb73eu); f_005caba4();
    /* 005fb73e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb73f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fb742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb744: je 0x5fb76d */ if (fZ) goto L_005fb76d;
L_005fb746:; BB(0x005fb746);
    /* 005fb746: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005fb74d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb754: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb757: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb759: push 0x5fb614 */ { u32 v = 0x5fb614u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb75e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb75f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fb761: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5fb766u); f_005e5b88();
    /* 005fb766: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fb76d:; BB(0x005fb76d);
    /* 005fb76d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fb774: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb777: mov edx, dword ptr [eax + 0x240] */ r_edx = R32((u32)(r_eax+0x240u));
L_005fb77d:; BB(0x005fb77d);
    /* 005fb77d: mov ecx, eax */ r_ecx = r_eax;
    /* 005fb77f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb781: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005fb783: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fb786: mov dword ptr [ecx + 0x240], edx */ W32((u32)(r_ecx+0x240u), r_edx);
    /* 005fb78c: lea eax, [ecx + 0x244] */ r_eax = (u32)(r_ecx+0x244u);
    /* 005fb792: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fb794: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb796: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb797: call dword ptr [ebx + 0xc8] */ { u32 t = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fb79du); call_ind(t); }
    /* 005fb79d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb7a0: je 0x5fb7dd */ if (fZ) goto L_005fb7dd;
L_005fb7a2:; BB(0x005fb7a2);
    /* 005fb7a2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb7a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7a7: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005fb7ad: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005fb7af: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fb7b2: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005fb7b8: lea ebx, [ecx + 0x250] */ r_ebx = (u32)(r_ecx+0x250u);
    /* 005fb7be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fb7c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7c3: call dword ptr [esi + 0xc8] */ { u32 t = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fb7c9u); call_ind(t); }
L_005fb7c9:; BB(0x005fb7c9);
    /* 005fb7c9: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fb7cc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fb7cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb7d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb7d9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb7db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb7dc: ret  */ FN_RET(0x005fb6cc); r_esp += 4; return;
L_005fb7dd:; BB(0x005fb7dd);
    /* 005fb7dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb7e0: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005fb7e6: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005fb7e8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fb7eb: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005fb7f1: lea ebx, [ecx + 0x250] */ r_ebx = (u32)(r_ecx+0x250u);
    /* 005fb7f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fb7f9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb7fd: call dword ptr [esi + 0xc8] */ { u32 t = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fb803u); call_ind(t); }
    /* 005fb803: jmp 0x5fb7c9 */ goto L_005fb7c9;
}

void f_005fb808(void) /* sub_5FB808 */
{
    FN_ENTER(0x005fb808);
    /* 005fb808: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb809: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb80b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb80d: push 0x8de024 */ { u32 v = 0x8de024u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb812: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb818: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb819: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb820: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb823: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb826: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fb829: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fb82c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fb82f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb832: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb834: je 0x5fb88b */ if (fZ) goto L_005fb88b;
L_005fb836:; BB(0x005fb836);
    /* 005fb836: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fb83d: push 0x25c */ { u32 v = 0x25cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb842: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fb847u); f_005caba4();
    /* 005fb847: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb848: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fb84b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb84d: je 0x5fb887 */ if (fZ) goto L_005fb887;
L_005fb84f:; BB(0x005fb84f);
    /* 005fb84f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fb856: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb85d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb860: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb863: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb864: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb86a: call 0x5fb89c */ r_esp -= 4; W32(r_esp, 0x5fb86fu); f_005fb89c();
    /* 005fb86f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb872: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fb879:; BB(0x005fb879);
    /* 005fb879: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb87c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb883: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb885: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb886: ret  */ FN_RET(0x005fb808); r_esp += 4; return;
L_005fb887:; BB(0x005fb887);
    /* 005fb887: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb889: jmp 0x5fb879 */ goto L_005fb879;
L_005fb88b:; BB(0x005fb88b);
    /* 005fb88b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb88d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb890: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb897: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb899: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb89a: ret  */ FN_RET(0x005fb808); r_esp += 4; return;
}

void f_005fb89c(void) /* sub_5FB89C */
{
    FN_ENTER(0x005fb89c);
    /* 005fb89c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb89d: mov edi, ecx */ r_edi = r_ecx;
    /* 005fb89f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb8a3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb8a7: mov ecx, edi */ r_ecx = r_edi;
    /* 005fb8a9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fb8aeu); f_005e959c();
    /* 005fb8ae: mov edx, dword ptr [edi + 0x190] */ r_edx = R32((u32)(r_edi+0x190u));
    /* 005fb8b4: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005fb8ba: mov dword ptr [edi], 0xb1a120 */ W32((u32)(r_edi), 0xb1a120u);
    /* 005fb8c0: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005fb8c3: mov dword ptr [edi + 0x234], 0x5fba8c */ W32((u32)(r_edi+0x234u), 0x5fba8cu);
    /* 005fb8cd: mov dword ptr [edi + 0x190], edx */ W32((u32)(r_edi+0x190u), r_edx);
    /* 005fb8d3: or eax, 0x203 */ {  u32 a = r_eax; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb8d8: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005fb8de: mov dword ptr [edi + 0x23c], 0x5fbac4 */ W32((u32)(r_edi+0x23cu), 0x5fbac4u);
    /* 005fb8e8: mov eax, edi */ r_eax = r_edi;
    /* 005fb8ea: mov dword ptr [edi + 0x238], 0x5fb90c */ W32((u32)(r_edi+0x238u), 0x5fb90cu);
    /* 005fb8f4: mov dword ptr [edi + 0x208], 0x41000000 */ W32((u32)(r_edi+0x208u), 0x41000000u);
    /* 005fb8fe: mov dword ptr [edi + 0x240], 0 */ W32((u32)(r_edi+0x240u), 0x0u);
    /* 005fb908: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fb909: ret 8 */ FN_RET(0x005fb89c); r_esp += 12; return;
}

void f_005fb90c(void) /* sub_5FB90C */
{
    FN_ENTER(0x005fb90c);
    /* 005fb90c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fb90d: mov ebp, esp */ r_ebp = r_esp;
    /* 005fb90f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb911: push 0x8de04c */ { u32 v = 0x8de04cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb916: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fb91c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb91d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fb924: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fb927: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fb92a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fb92d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fb930: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fb933: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005fb935: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fb938: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb93a: je 0x5fb9c9 */ if (fZ) goto L_005fb9c9;
L_005fb940:; BB(0x005fb940);
    /* 005fb940: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fb947: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb949: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fb94eu); f_005caba4();
    /* 005fb94e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fb94f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fb952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fb954: je 0x5fb9df */ if (fZ) goto L_005fb9df;
L_005fb95a:; BB(0x005fb95a);
    /* 005fb95a: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fb961: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fb968: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fb96b: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fb96e: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 005fb971: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005fb974: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb978: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb979: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb97a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb97b: call 0x5fb9e4 */ r_esp -= 4; W32(r_esp, 0x5fb980u); f_005fb9e4();
    /* 005fb980: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fb983: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fb98a:; BB(0x005fb98a);
    /* 005fb98a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fb991: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fb994: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 005fb997: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fb99a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 005fb99d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fb99e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb99f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9a0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9a1: call 0x5e407c */ r_esp -= 4; W32(r_esp, 0x5fb9a6u); f_005e407c();
    /* 005fb9a6: mov esi, eax */ r_esi = r_eax;
    /* 005fb9a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fb9ab: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb9ad: je 0x5fb9c9 */ if (fZ) goto L_005fb9c9;
L_005fb9af:; BB(0x005fb9af);
    /* 005fb9af: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fb9b1: je 0x5fb9c9 */ if (fZ) goto L_005fb9c9;
L_005fb9b3:; BB(0x005fb9b3);
    /* 005fb9b3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9b5: push 0x1bb */ { u32 v = 0x1bbu; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9ba: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb9bc: call 0x5e4624 */ r_esp -= 4; W32(r_esp, 0x5fb9c1u); f_005e4624();
    /* 005fb9c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9c2: mov ecx, esi */ r_ecx = r_esi;
    /* 005fb9c4: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x5fb9c9u); f_008172d4();
L_005fb9c9:; BB(0x005fb9c9);
    /* 005fb9c9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fb9cc: mov eax, ebx */ r_eax = r_ebx;
    /* 005fb9ce: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fb9d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fb9d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fb9db: mov esp, ebp */ r_esp = r_ebp;
    /* 005fb9dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fb9de: ret  */ FN_RET(0x005fb90c); r_esp += 4; return;
L_005fb9df:; BB(0x005fb9df);
    /* 005fb9df: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005fb9e1: jmp 0x5fb98a */ goto L_005fb98a;
}

void f_005fb9e4(void) /* sub_5FB9E4 */
{
    FN_ENTER(0x005fb9e4);
    /* 005fb9e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9e5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9e6: mov edi, ecx */ r_edi = r_ecx;
    /* 005fb9e8: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005fb9ec: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb9f0: mov ecx, edi */ r_ecx = r_edi;
    /* 005fb9f2: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb9f6: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fb9fa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fb9fb: call 0x5e43e8 */ r_esp -= 4; W32(r_esp, 0x5fba00u); f_005e43e8();
    /* 005fba00: mov dword ptr [edi], 0xb1a220 */ W32((u32)(r_edi), 0xb1a220u);
    /* 005fba06: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 005fba0c: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fba0e: je 0x5fba18 */ if (fZ) goto L_005fba18;
L_005fba10:; BB(0x005fba10);
    /* 005fba10: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005fba16: jmp 0x5fba1e */ goto L_005fba1e;
L_005fba18:; BB(0x005fba18);
    /* 005fba18: mov eax, dword ptr [ebx + 0x19c] */ r_eax = R32((u32)(r_ebx+0x19cu));
L_005fba1e:; BB(0x005fba1e);
    /* 005fba1e: mov edx, dword ptr [ebx + 0x24] */ r_edx = R32((u32)(r_ebx+0x24u));
    /* 005fba21: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 005fba24: mov dword ptr [edi + 0x5c], edx */ W32((u32)(r_edi+0x5cu), r_edx);
    /* 005fba27: mov eax, edi */ r_eax = r_edi;
    /* 005fba29: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fba2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fba2b: ret 0x10 */ FN_RET(0x005fb9e4); r_esp += 20; return;
}

void f_005fba30(void) /* sub_5FBA30 */
{
    FN_ENTER(0x005fba30);
    /* 005fba30: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fba31: mov esi, ecx */ r_esi = r_ecx;
    /* 005fba33: mov ecx, esi */ r_ecx = r_esi;
    /* 005fba35: call 0x5e45c0 */ r_esp -= 4; W32(r_esp, 0x5fba3au); f_005e45c0();
    /* 005fba3a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fba3c: je 0x5fba89 */ if (fZ) goto L_005fba89;
L_005fba3e:; BB(0x005fba3e);
    /* 005fba3e: mov eax, dword ptr [esi + 0x58] */ r_eax = R32((u32)(r_esi+0x58u));
    /* 005fba41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fba43: je 0x5fba89 */ if (fZ) goto L_005fba89;
L_005fba45:; BB(0x005fba45);
    /* 005fba45: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 005fba48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fba4a: je 0x5fba89 */ if (fZ) goto L_005fba89;
L_005fba4c:; BB(0x005fba4c);
    /* 005fba4c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5fba51u); f_0082d7b0();
    /* 005fba51: push dword ptr [esi + 0x5c] */ { u32 v = R32((u32)(r_esi+0x5cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fba54: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5fba59u); f_0081a9b8();
    /* 005fba59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fba5a: lea ecx, [esi + 0x1c] */ r_ecx = (u32)(r_esi+0x1cu);
    /* 005fba5d: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5fba62u); f_0082d838();
    /* 005fba62: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 005fba65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fba67: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5fba6cu); f_0082d8bc();
    /* 005fba6c: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 005fba6f: add edx, 0xffffc000 */ {  u32 a = r_edx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005fba75: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fba77: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fba7cu); f_0082e9e4();
    /* 005fba7c: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 005fba7f: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5fba84u); f_00831758();
    /* 005fba84: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5fba89u); f_0082da80();
L_005fba89:; BB(0x005fba89);
    /* 005fba89: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fba8a: ret  */ FN_RET(0x005fba30); r_esp += 4; return;
}

void f_005fba8c(void)
{
    FN_ENTER(0x005fba8c);
    /* 005fba8c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005fba90: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005fba94: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fba96: je 0x5fbac2 */ if (fZ) goto L_005fbac2;
L_005fba98:; BB(0x005fba98);
    /* 005fba98: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fba9a: je 0x5fbac2 */ if (fZ) goto L_005fbac2;
L_005fba9c:; BB(0x005fba9c);
    /* 005fba9c: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005fba9e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fba9f: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 005fbaa5: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fbaa8: mov dword ptr [edx + 0x240], eax */ W32((u32)(r_edx+0x240u), r_eax);
    /* 005fbaae: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fbab3u); f_0050b510();
    /* 005fbab3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fbab5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbab6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbab8: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbaba: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5fbabfu); f_00814298();
    /* 005fbabf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fbac2:; BB(0x005fbac2);
    /* 005fbac2: ret  */ FN_RET(0x005fba8c); r_esp += 4; return;
}

void f_005fbac4(void)
{
    FN_ENTER(0x005fbac4);
    /* 005fbac4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005fbac8: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 005fbacd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbacf: je 0x5fbae0 */ if (fZ) goto L_005fbae0;
L_005fbad1:; BB(0x005fbad1);
    /* 005fbad1: mov eax, dword ptr [edx + 0x240] */ r_eax = R32((u32)(r_edx+0x240u));
    /* 005fbad7: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005fbada: mov dword ptr [edx + 0x240], eax */ W32((u32)(r_edx+0x240u), r_eax);
L_005fbae0:; BB(0x005fbae0);
    /* 005fbae0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbae1: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5fbae6u); f_007b4d18();
    /* 005fbae6: mov ecx, eax */ r_ecx = r_eax;
    /* 005fbae8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fbaeb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbaed: je 0x5fbb29 */ if (fZ) goto L_005fbb29;
L_005fbaef:; BB(0x005fbaef);
    /* 005fbaef: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005fbaf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbaf7: je 0x5fbb29 */ if (fZ) goto L_005fbb29;
L_005fbaf9:; BB(0x005fbaf9);
    /* 005fbaf9: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005fbafd: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbb03: jge 0x5fbb29 */ if ((fS==fO)) goto L_005fbb29;
L_005fbb05:; BB(0x005fbb05);
    /* 005fbb05: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005fbb09: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb0b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005fbb0e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb10: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb12: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb14: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb16: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb18: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb1a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005fbb1c: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 005fbb20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb21: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fbb26u); f_0050b510();
    /* 005fbb26: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fbb29:; BB(0x005fbb29);
    /* 005fbb29: ret  */ FN_RET(0x005fbac4); r_esp += 4; return;
}

void f_005fbb2c(void) /* sub_5FBB2C */
{
    FN_ENTER(0x005fbb2c);
    /* 005fbb2c: mov dword ptr [0xa8e1a4], 0x3f800000 */ W32((u32)(0xa8e1a4u), 0x3f800000u);
    /* 005fbb36: mov dword ptr [0xa8e1a8], 0x41000000 */ W32((u32)(0xa8e1a8u), 0x41000000u);
    /* 005fbb40: mov dword ptr [0xa8e1ac], 0x3fc00000 */ W32((u32)(0xa8e1acu), 0x3fc00000u);
    /* 005fbb4a: ret  */ FN_RET(0x005fbb2c); r_esp += 4; return;
}

void f_005fbb4c(void) /* sub_5FBB4C */
{
    FN_ENTER(0x005fbb4c);
    /* 005fbb4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fbb4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fbb51: call 0x5fbb70 */ r_esp -= 4; W32(r_esp, 0x5fbb56u); f_005fbb70();
    /* 005fbb56: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fbb5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbb5c: jne 0x5fbb62 */ if (!fZ) goto L_005fbb62;
L_005fbb5e:; BB(0x005fbb5e);
    /* 005fbb5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbb5f: ret 4 */ FN_RET(0x005fbb4c); r_esp += 8; return;
L_005fbb62:; BB(0x005fbb62);
    /* 005fbb62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fbb68u); f_005c2f74();
    /* 005fbb68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fbb69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbb6a: ret 4 */ FN_RET(0x005fbb4c); r_esp += 8; return;
}

void f_005fbb70(void) /* sub_5FBB70 */
{
    FN_ENTER(0x005fbb70);
    /* 005fbb70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb71: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbb73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb75: push 0x8de068 */ { u32 v = 0x8de068u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbb80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbb81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fbb88: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbb8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fbb8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fbb91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fbb94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fbb97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fbb9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbb9d: mov dword ptr [ecx], 0xb1a2c0 */ W32((u32)(r_ecx), 0xb1a2c0u);
    /* 005fbba3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fbbaa: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fbbafu); f_005e61c8();
    /* 005fbbaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbbb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbbb9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbbbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbbbc: ret  */ FN_RET(0x005fbb70); r_esp += 4; return;
}

void f_005fbbc0(void) /* sub_5FBBC0 */
{
    FN_ENTER(0x005fbbc0);
    /* 005fbbc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbc1: mov edi, ecx */ r_edi = r_ecx;
    /* 005fbbc3: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fbbca: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbbcd: jne 0x5fbbeb */ if (!fZ) goto L_005fbbeb;
L_005fbbcf:; BB(0x005fbbcf);
    /* 005fbbcf: mov ecx, edi */ r_ecx = r_edi;
    /* 005fbbd1: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5fbbd6u); f_005e7f6c();
    /* 005fbbd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbbd8: jne 0x5fbbeb */ if (!fZ) goto L_005fbbeb;
L_005fbbda:; BB(0x005fbbda);
    /* 005fbbda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbdc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbdd: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbbe3: call 0x5cc554 */ r_esp -= 4; W32(r_esp, 0x5fbbe8u); f_005cc554();
    /* 005fbbe8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005fbbeb:; BB(0x005fbbeb);
    /* 005fbbeb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fbbec: ret  */ FN_RET(0x005fbbc0); r_esp += 4; return;
}

void f_005fbbf0(void) /* sub_5FBBF0 */
{
    FN_ENTER(0x005fbbf0);
    /* 005fbbf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbf1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbbf3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbf5: push 0x8de090 */ { u32 v = 0x8de090u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbbfa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbc00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fbc08: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbc0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fbc0e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005fbc11: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005fbc14: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005fbc17: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fbc1e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fbc21: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbc24: jne 0x5fbc88 */ if (!fZ) goto L_005fbc88;
L_005fbc26:; BB(0x005fbc26);
    /* 005fbc26: mov eax, ecx */ r_eax = r_ecx;
    /* 005fbc28: mov edx, dword ptr [eax + 0x18c] */ r_edx = R32((u32)(r_eax+0x18cu));
    /* 005fbc2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbc30: je 0x5fbc88 */ if (fZ) goto L_005fbc88;
L_005fbc32:; BB(0x005fbc32);
    /* 005fbc32: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005fbc39: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc3b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fbc40u); f_005caba4();
    /* 005fbc40: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005fbc43: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fbc46: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005fbc49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbc4b: je 0x5fbc88 */ if (fZ) goto L_005fbc88;
L_005fbc4d:; BB(0x005fbc4d);
    /* 005fbc4d: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005fbc54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fbc5b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fbc5e: mov ecx, eax */ r_ecx = r_eax;
    /* 005fbc60: push 0xf0 */ { u32 v = 0xf0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc65: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005fbc6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc6d: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbc73: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5fbc78u); f_005e5cac();
    /* 005fbc78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fbc7b: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005fbc81: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005fbc88:; BB(0x005fbc88);
    /* 005fbc88: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbc8b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbc92: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbc94: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbc95: ret  */ FN_RET(0x005fbbf0); r_esp += 4; return;
}

void f_005fbc98(void) /* sub_5FBC98 */
{
    FN_ENTER(0x005fbc98);
    /* 005fbc98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc99: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbc9b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbc9d: push 0x8de0b8 */ { u32 v = 0x8de0b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbca2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbca9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fbcb0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbcb3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fbcb6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fbcb9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fbcbc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fbcbf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fbcc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbcc4: je 0x5fbd1b */ if (fZ) goto L_005fbd1b;
L_005fbcc6:; BB(0x005fbcc6);
    /* 005fbcc6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fbccd: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcd2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fbcd7u); f_005caba4();
    /* 005fbcd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fbcd8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fbcdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbcdd: je 0x5fbd17 */ if (fZ) goto L_005fbd17;
L_005fbcdf:; BB(0x005fbcdf);
    /* 005fbcdf: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fbce6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fbced: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fbcf0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbcf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbcf4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbcfa: call 0x5fbd2c */ r_esp -= 4; W32(r_esp, 0x5fbcffu); f_005fbd2c();
    /* 005fbcff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbd02: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fbd09:; BB(0x005fbd09);
    /* 005fbd09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbd0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbd13: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbd15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbd16: ret  */ FN_RET(0x005fbc98); r_esp += 4; return;
L_005fbd17:; BB(0x005fbd17);
    /* 005fbd17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbd19: jmp 0x5fbd09 */ goto L_005fbd09;
L_005fbd1b:; BB(0x005fbd1b);
    /* 005fbd1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbd1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbd20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbd27: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbd29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbd2a: ret  */ FN_RET(0x005fbc98); r_esp += 4; return;
}

void f_005fbd2c(void) /* sub_5FBD2C */
{
    FN_ENTER(0x005fbd2c);
    /* 005fbd2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd2d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd2e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fbd30: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 005fbd34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fbd35: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fbd37: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbd3b: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fbd40u); f_005e959c();
    /* 005fbd40: mov dword ptr [ebx], 0xb1a2c0 */ W32((u32)(r_ebx), 0xb1a2c0u);
    /* 005fbd46: movzx eax, byte ptr [edi + 2] */ r_eax = (u32)R8((u32)(r_edi+0x2u));
    /* 005fbd4a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fbd4d: jge 0x5fbd64 */ if ((fS==fO)) goto L_005fbd64;
L_005fbd4f:; BB(0x005fbd4f);
    /* 005fbd4f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbd52: jne 0x5fbd69 */ if (!fZ) goto L_005fbd69;
L_005fbd54:; BB(0x005fbd54);
    /* 005fbd54: mov byte ptr [ebx + 0x1c0], 2 */ W8((u32)(r_ebx+0x1c0u), 0x2u);
    /* 005fbd5b: mov byte ptr [ebx + 0x1c4], 1 */ W8((u32)(r_ebx+0x1c4u), 0x1u);
    /* 005fbd62: jmp 0x5fbdb2 */ goto L_005fbdb2;
L_005fbd64:; BB(0x005fbd64);
    /* 005fbd64: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbd67: jle 0x5fbd98 */ if ((fZ||fS!=fO)) goto L_005fbd98;
L_005fbd69:; BB(0x005fbd69);
    /* 005fbd69: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbd6c: jne 0x5fbd88 */ if (!fZ) goto L_005fbd88;
L_005fbd6e:; BB(0x005fbd6e);
    /* 005fbd6e: mov byte ptr [ebx + 0x1c0], 1 */ W8((u32)(r_ebx+0x1c0u), 0x1u);
    /* 005fbd75: mov byte ptr [ebx + 0x1c4], 2 */ W8((u32)(r_ebx+0x1c4u), 0x2u);
    /* 005fbd7c: mov dword ptr [ebx + 0x1a0], 0x3ecccccd */ W32((u32)(r_ebx+0x1a0u), 0x3ecccccdu);
    /* 005fbd86: jmp 0x5fbdb2 */ goto L_005fbdb2;
L_005fbd88:; BB(0x005fbd88);
    /* 005fbd88: mov byte ptr [ebx + 0x1c0], 2 */ W8((u32)(r_ebx+0x1c0u), 0x2u);
    /* 005fbd8f: mov byte ptr [ebx + 0x1c4], 3 */ W8((u32)(r_ebx+0x1c4u), 0x3u);
    /* 005fbd96: jmp 0x5fbdb2 */ goto L_005fbdb2;
L_005fbd98:; BB(0x005fbd98);
    /* 005fbd98: mov byte ptr [ebx + 0x1c0], 3 */ W8((u32)(r_ebx+0x1c0u), 0x3u);
    /* 005fbd9f: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005fbda4: mov word ptr [ebx + 0x1f0], ax */ W16((u32)(r_ebx+0x1f0u), (u16)r_eax);
    /* 005fbdab: mov byte ptr [ebx + 0x1c4], 2 */ W8((u32)(r_ebx+0x1c4u), 0x2u);
L_005fbdb2:; BB(0x005fbdb2);
    /* 005fbdb2: mov eax, ebx */ r_eax = r_ebx;
    /* 005fbdb4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbdb5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fbdb6: ret 8 */ FN_RET(0x005fbd2c); r_esp += 12; return;
}

void f_005fbdbc(void) /* sub_5FBDBC */
{
    FN_ENTER(0x005fbdbc);
    /* 005fbdbc: mov dword ptr [0xa8e1b0], 0x3f800000 */ W32((u32)(0xa8e1b0u), 0x3f800000u);
    /* 005fbdc6: mov dword ptr [0xa8e1b4], 0x41000000 */ W32((u32)(0xa8e1b4u), 0x41000000u);
    /* 005fbdd0: mov dword ptr [0xa8e1b8], 0x3fc00000 */ W32((u32)(0xa8e1b8u), 0x3fc00000u);
    /* 005fbdda: ret  */ FN_RET(0x005fbdbc); r_esp += 4; return;
}

void f_005fbddc(void) /* sub_5FBDDC */
{
    FN_ENTER(0x005fbddc);
    /* 005fbddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbddd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fbddf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fbde1: call 0x5fbe00 */ r_esp -= 4; W32(r_esp, 0x5fbde6u); f_005fbe00();
    /* 005fbde6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fbdea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbdec: jne 0x5fbdf2 */ if (!fZ) goto L_005fbdf2;
L_005fbdee:; BB(0x005fbdee);
    /* 005fbdee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbdef: ret 4 */ FN_RET(0x005fbddc); r_esp += 8; return;
L_005fbdf2:; BB(0x005fbdf2);
    /* 005fbdf2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbdf3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fbdf8u); f_005c2f74();
    /* 005fbdf8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fbdf9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbdfa: ret 4 */ FN_RET(0x005fbddc); r_esp += 8; return;
}

void f_005fbe00(void) /* sub_5FBE00 */
{
    FN_ENTER(0x005fbe00);
    /* 005fbe00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe01: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbe03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe05: push 0x8de0d4 */ { u32 v = 0x8de0d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbe10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fbe18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbe1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fbe1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fbe21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fbe24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fbe27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fbe2a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbe2d: mov dword ptr [ecx], 0xb1a420 */ W32((u32)(r_ecx), 0xb1a420u);
    /* 005fbe33: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fbe3a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fbe3fu); f_005e61c8();
    /* 005fbe3f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbe42: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbe49: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbe4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbe4c: ret  */ FN_RET(0x005fbe00); r_esp += 4; return;
}

void f_005fbe50(void) /* sub_5FBE50 */
{
    FN_ENTER(0x005fbe50);
    /* 005fbe50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe52: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbe55: mov esi, ecx */ r_esi = r_ecx;
    /* 005fbe57: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 005fbe5b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fbe5e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbe5f: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005fbe62: or eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005fbe65: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 005fbe68: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005fbe6a: mov ecx, esi */ r_ecx = r_esi;
    /* 005fbe6c: call dword ptr [eax + 0xec] */ { u32 t = R32((u32)(r_eax+0xecu)); r_esp -= 4; W32(r_esp, 0x5fbe72u); call_ind(t); }
    /* 005fbe72: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 005fbe75: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005fbe79: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 005fbe7c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fbe80: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 005fbe83: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 005fbe86: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005fbe8a: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 005fbe8d: mov ecx, dword ptr [esi + 0x1ac] */ r_ecx = R32((u32)(r_esi+0x1acu));
    /* 005fbe93: mov dword ptr [ebx + 0x44], ecx */ W32((u32)(r_ebx+0x44u), r_ecx);
    /* 005fbe96: mov dword ptr [ebx + 0x70], 0x5cf2ec */ W32((u32)(r_ebx+0x70u), 0x5cf2ecu);
    /* 005fbe9d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fbea0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbea1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fbea2: ret 4 */ FN_RET(0x005fbe50); r_esp += 8; return;
}

void f_005fbea8(void) /* sub_5FBEA8 */
{
    FN_ENTER(0x005fbea8);
    /* 005fbea8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbea9: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbeab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbead: push 0x8de0fc */ { u32 v = 0x8de0fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbeb2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbeb8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbeb9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fbec0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbec3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fbec6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fbec9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fbecc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fbecf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fbed2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbed4: je 0x5fbf2b */ if (fZ) goto L_005fbf2b;
L_005fbed6:; BB(0x005fbed6);
    /* 005fbed6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fbedd: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbee2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fbee7u); f_005caba4();
    /* 005fbee7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fbee8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fbeeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbeed: je 0x5fbf27 */ if (fZ) goto L_005fbf27;
L_005fbeef:; BB(0x005fbeef);
    /* 005fbeef: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fbef6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fbefd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fbf00: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbf03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf04: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbf0a: call 0x5fbf3c */ r_esp -= 4; W32(r_esp, 0x5fbf0fu); f_005fbf3c();
    /* 005fbf0f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbf12: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fbf19:; BB(0x005fbf19);
    /* 005fbf19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbf1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbf23: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbf25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbf26: ret  */ FN_RET(0x005fbea8); r_esp += 4; return;
L_005fbf27:; BB(0x005fbf27);
    /* 005fbf27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbf29: jmp 0x5fbf19 */ goto L_005fbf19;
L_005fbf2b:; BB(0x005fbf2b);
    /* 005fbf2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbf2d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbf30: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbf37: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbf39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbf3a: ret  */ FN_RET(0x005fbea8); r_esp += 4; return;
}

void f_005fbf3c(void) /* sub_5FBF3C */
{
    FN_ENTER(0x005fbf3c);
    /* 005fbf3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fbf3f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbf43: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fbf47: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fbf49: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fbf4eu); f_005e959c();
    /* 005fbf4e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fbf54: mov dword ptr [ebx], 0xb1a420 */ W32((u32)(r_ebx), 0xb1a420u);
    /* 005fbf5a: mov eax, ebx */ r_eax = r_ebx;
    /* 005fbf5c: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbf62: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fbf68: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbf69: ret 8 */ FN_RET(0x005fbf3c); r_esp += 12; return;
}

void f_005fbf6c(void) /* sub_5FBF6C */
{
    FN_ENTER(0x005fbf6c);
    /* 005fbf6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fbf6f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fbf71: call 0x5fbf90 */ r_esp -= 4; W32(r_esp, 0x5fbf76u); f_005fbf90();
    /* 005fbf76: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005fbf7a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fbf7c: jne 0x5fbf82 */ if (!fZ) goto L_005fbf82;
L_005fbf7e:; BB(0x005fbf7e);
    /* 005fbf7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbf7f: ret 4 */ FN_RET(0x005fbf6c); r_esp += 8; return;
L_005fbf82:; BB(0x005fbf82);
    /* 005fbf82: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf83: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fbf88u); f_005c2f74();
    /* 005fbf88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fbf89: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fbf8a: ret 4 */ FN_RET(0x005fbf6c); r_esp += 8; return;
}

void f_005fbf90(void) /* sub_5FBF90 */
{
    FN_ENTER(0x005fbf90);
    /* 005fbf90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf91: mov ebp, esp */ r_ebp = r_esp;
    /* 005fbf93: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf95: push 0x8de118 */ { u32 v = 0x8de118u; r_esp -= 4; W32(r_esp, v); }
    /* 005fbf9a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fbfa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fbfa1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fbfa8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fbfab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fbfae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fbfb1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fbfb4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fbfb7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005fbfba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fbfbd: mov dword ptr [ecx], 0xb1a580 */ W32((u32)(r_ecx), 0xb1a580u);
    /* 005fbfc3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fbfca: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fbfcfu); f_005e61c8();
    /* 005fbfcf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fbfd2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fbfd9: mov esp, ebp */ r_esp = r_ebp;
    /* 005fbfdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fbfdc: ret  */ FN_RET(0x005fbf90); r_esp += 4; return;
}

void f_005fbfe0(void) /* sub_5FBFE0 */
{
    FN_ENTER(0x005fbfe0);
    /* 005fbfe0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fbfe1: mov esi, ecx */ r_esi = r_ecx;
    /* 005fbfe3: movzx eax, byte ptr [esi + 0xf3] */ r_eax = (u32)R8((u32)(r_esi+0xf3u));
    /* 005fbfea: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fbfed: jne 0x5fbffd */ if (!fZ) goto L_005fbffd;
L_005fbfef:; BB(0x005fbfef);
    /* 005fbfef: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005fbff6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fbff9: jne 0x5fc010 */ if (!fZ) goto L_005fc010;
L_005fbffb:; BB(0x005fbffb);
    /* 005fbffb: jmp 0x5fc012 */ goto L_005fc012;
L_005fbffd:; BB(0x005fbffd);
    /* 005fbffd: cmp eax, 0xe5 */ {  u32 a = r_eax; u32 b = 0xe5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc002: jne 0x5fc010 */ if (!fZ) goto L_005fc010;
L_005fc004:; BB(0x005fc004);
    /* 005fc004: movzx eax, byte ptr [esi + 0xf4] */ r_eax = (u32)R8((u32)(r_esi+0xf4u));
    /* 005fc00b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fc00e: je 0x5fc035 */ if (fZ) goto L_005fc035;
L_005fc010:; BB(0x005fc010);
    /* 005fc010: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fc011: ret  */ FN_RET(0x005fbfe0); r_esp += 4; return;
L_005fc012:; BB(0x005fc012);
    /* 005fc012: mov ecx, esi */ r_ecx = r_esi;
    /* 005fc014: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5fc019u); f_005e7f6c();
    /* 005fc019: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc01b: jne 0x5fc010 */ if (!fZ) goto L_005fc010;
L_005fc01d:; BB(0x005fc01d);
    /* 005fc01d: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc022: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fc024: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fc025: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc02b: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x5fc030u); f_005cc64c();
    /* 005fc030: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc033: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fc034: ret  */ FN_RET(0x005fbfe0); r_esp += 4; return;
L_005fc035:; BB(0x005fc035);
    /* 005fc035: mov ecx, esi */ r_ecx = r_esi;
    /* 005fc037: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5fc03cu); f_005e7f6c();
    /* 005fc03c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fc03e: jne 0x5fc010 */ if (!fZ) goto L_005fc010;
L_005fc040:; BB(0x005fc040);
    /* 005fc040: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc042: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fc044: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fc045: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fc04b: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5fc050u); f_005cc3b0();
    /* 005fc050: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fc053: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fc054: ret  */ FN_RET(0x005fbfe0); r_esp += 4; return;
}

