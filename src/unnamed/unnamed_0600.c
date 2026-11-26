#include "protos.h"

void f_00600000(void)
{
    FN_ENTER(0x00600000);
    /* 00600000: xor edi, dword ptr [edi] */ {  u32 a = r_edi; u32 b = R32((u32)(r_edi)); u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00600002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600003: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00600005: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x60000au); f_005e83c8();
    /* 0060000a: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 0060000e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060000f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00600011: mov ecx, esi */ r_ecx = r_esi;
    /* 00600013: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x600018u); f_005e83c8();
    /* 00600018: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0060001b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060001c: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x600021u); f_006f1188();
    /* 00600021: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600024: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600025: ret  */ FN_RET(0x00600000); r_esp += 4; return;
}

void f_00600020(void)
{
    FN_ENTER(0x00600020);
    /* 00600020: add byte ptr [ebx - 0x3ca1b33c], al */ { u32 ad = (u32)(r_ebx+0xc35e4cc4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00600026: nop  */ ;
    /* 00600027: nop  */ ;
    /* 00600028: mov dword ptr [ecx + 0x24c], 0x2aaa */ W32((u32)(r_ecx+0x24cu), 0x2aaau);
    /* 00600032: mov dword ptr [ecx + 0x248], 0x41200000 */ W32((u32)(r_ecx+0x248u), 0x41200000u);
    /* 0060003c: mov dword ptr [ecx + 0x244], 0x41200000 */ W32((u32)(r_ecx+0x244u), 0x41200000u);
    /* 00600046: mov dword ptr [ecx + 0x240], 0x41200000 */ W32((u32)(r_ecx+0x240u), 0x41200000u);
    /* 00600050: ret  */ FN_RET(0x00600020); r_esp += 4; return;
}

void f_00600028(void) /* sub_600028 */
{
    FN_ENTER(0x00600028);
    /* 00600028: mov dword ptr [ecx + 0x24c], 0x2aaa */ W32((u32)(r_ecx+0x24cu), 0x2aaau);
    /* 00600032: mov dword ptr [ecx + 0x248], 0x41200000 */ W32((u32)(r_ecx+0x248u), 0x41200000u);
    /* 0060003c: mov dword ptr [ecx + 0x244], 0x41200000 */ W32((u32)(r_ecx+0x244u), 0x41200000u);
    /* 00600046: mov dword ptr [ecx + 0x240], 0x41200000 */ W32((u32)(r_ecx+0x240u), 0x41200000u);
    /* 00600050: ret  */ FN_RET(0x00600028); r_esp += 4; return;
}

void f_00600040(void)
{
    FN_ENTER(0x00600040);
    /* 00600040: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600042: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600044: and byte ptr [ecx - 0x39], al */ { u32 ad = (u32)(r_ecx+0xffffffc7u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 00600047: add dword ptr [eax + 2], 0 */ { u32 ad = (u32)(r_eax+0x2u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0060004e: and byte ptr [ecx - 0x3d], al */ { u32 ad = (u32)(r_ecx+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600051: nop  */ ;
    /* 00600052: nop  */ ;
    /* 00600053: nop  */ ;
    /* 00600054: mov dword ptr [ecx + 0x24c], 0 */ W32((u32)(r_ecx+0x24cu), 0x0u);
    /* 0060005e: mov dword ptr [ecx + 0x248], 0x3f800000 */ W32((u32)(r_ecx+0x248u), 0x3f800000u);
    /* 00600068: mov dword ptr [ecx + 0x244], 0x3f800000 */ W32((u32)(r_ecx+0x244u), 0x3f800000u);
    /* 00600072: mov dword ptr [ecx + 0x240], 0x3f800000 */ W32((u32)(r_ecx+0x240u), 0x3f800000u);
    /* 0060007c: ret  */ FN_RET(0x00600040); r_esp += 4; return;
}

void f_00600054(void) /* sub_600054 */
{
    FN_ENTER(0x00600054);
    /* 00600054: mov dword ptr [ecx + 0x24c], 0 */ W32((u32)(r_ecx+0x24cu), 0x0u);
    /* 0060005e: mov dword ptr [ecx + 0x248], 0x3f800000 */ W32((u32)(r_ecx+0x248u), 0x3f800000u);
    /* 00600068: mov dword ptr [ecx + 0x244], 0x3f800000 */ W32((u32)(r_ecx+0x244u), 0x3f800000u);
    /* 00600072: mov dword ptr [ecx + 0x240], 0x3f800000 */ W32((u32)(r_ecx+0x240u), 0x3f800000u);
    /* 0060007c: ret  */ FN_RET(0x00600054); r_esp += 4; return;
}

void f_00600060(void)
{
    FN_ENTER(0x00600060);
    /* 00600060: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00600061: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00600063: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600065: add byte ptr [eax + 0x4481c73f], al */ { u32 ad = (u32)(r_eax+0x4481c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0060006b: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060006d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0060006f: add byte ptr [eax + 0x4081c73f], al */ { u32 ad = (u32)(r_eax+0x4081c73fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600075: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00600077: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600079: add byte ptr [eax - 0x6f6f3cc1], al */ { u32 ad = (u32)(r_eax+0x9090c33fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0060007f: nop  */ ;
    /* 00600080: mov edx, ecx */ r_edx = r_ecx;
    /* 00600082: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00600087: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060008a: je 0x6000b4 */ if (fZ) goto L_006000b4;
L_0060008c:; BB(0x0060008c);
    /* 0060008c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060008f: jne 0x60009f */ if (!fZ) goto L_0060009f;
L_00600091:; BB(0x00600091);
    /* 00600091: add edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600097: mov ecx, edx */ r_ecx = r_edx;
    /* 00600099: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x60009eu); f_00831290();
    /* 0060009e: ret  */ FN_RET(0x00600060); r_esp += 4; return;
L_0060009f:; BB(0x0060009f);
    /* 0060009f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006000a2: jne 0x6000c1 */ if (!fZ) goto L_006000c1;
L_006000a4:; BB(0x006000a4);
    /* 006000a4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000aa: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006000ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000ae: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000b3u); f_0082e9e4();
    /* 006000b3: ret  */ FN_RET(0x00600060); r_esp += 4; return;
L_006000b4:; BB(0x006000b4);
    /* 006000b4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000bc: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000c1u); f_0082e9e4();
L_006000c1:; BB(0x006000c1);
    /* 006000c1: ret  */ FN_RET(0x00600060); r_esp += 4; return;
}

void f_0060007e(void)
{
    FN_ENTER(0x0060007e);
    /* 0060007e: nop  */ ;
    /* 0060007f: nop  */ ;
    /* 00600080: mov edx, ecx */ r_edx = r_ecx;
    /* 00600082: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00600087: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060008a: je 0x6000b4 */ if (fZ) goto L_006000b4;
L_0060008c:; BB(0x0060008c);
    /* 0060008c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060008f: jne 0x60009f */ if (!fZ) goto L_0060009f;
L_00600091:; BB(0x00600091);
    /* 00600091: add edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600097: mov ecx, edx */ r_ecx = r_edx;
    /* 00600099: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x60009eu); f_00831290();
    /* 0060009e: ret  */ FN_RET(0x0060007e); r_esp += 4; return;
L_0060009f:; BB(0x0060009f);
    /* 0060009f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006000a2: jne 0x6000c1 */ if (!fZ) goto L_006000c1;
L_006000a4:; BB(0x006000a4);
    /* 006000a4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000aa: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006000ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000ae: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000b3u); f_0082e9e4();
    /* 006000b3: ret  */ FN_RET(0x0060007e); r_esp += 4; return;
L_006000b4:; BB(0x006000b4);
    /* 006000b4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000bc: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000c1u); f_0082e9e4();
L_006000c1:; BB(0x006000c1);
    /* 006000c1: ret  */ FN_RET(0x0060007e); r_esp += 4; return;
}

void f_00600080(void) /* sub_600080 */
{
    FN_ENTER(0x00600080);
    /* 00600080: mov edx, ecx */ r_edx = r_ecx;
    /* 00600082: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00600087: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060008a: je 0x6000b4 */ if (fZ) goto L_006000b4;
L_0060008c:; BB(0x0060008c);
    /* 0060008c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060008f: jne 0x60009f */ if (!fZ) goto L_0060009f;
L_00600091:; BB(0x00600091);
    /* 00600091: add edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600097: mov ecx, edx */ r_ecx = r_edx;
    /* 00600099: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x60009eu); f_00831290();
    /* 0060009e: ret  */ FN_RET(0x00600080); r_esp += 4; return;
L_0060009f:; BB(0x0060009f);
    /* 0060009f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006000a2: jne 0x6000c1 */ if (!fZ) goto L_006000c1;
L_006000a4:; BB(0x006000a4);
    /* 006000a4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000aa: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006000ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000ae: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000b3u); f_0082e9e4();
    /* 006000b3: ret  */ FN_RET(0x00600080); r_esp += 4; return;
L_006000b4:; BB(0x006000b4);
    /* 006000b4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000ba: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000bc: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000c1u); f_0082e9e4();
L_006000c1:; BB(0x006000c1);
    /* 006000c1: ret  */ FN_RET(0x00600080); r_esp += 4; return;
}

void f_0060009d(void)
{
    FN_ENTER(0x0060009d);
    /* 0060009d: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0060009f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006000a2: jne 0x6000c1 */ if (!fZ) goto L_006000c1;
L_006000a4:; BB(0x006000a4);
    /* 006000a4: mov edx, dword ptr [edx + 0x24c] */ r_edx = R32((u32)(r_edx+0x24cu));
    /* 006000aa: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006000ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006000ae: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x6000b3u); f_0082e9e4();
    /* 006000b3: ret  */ FN_RET(0x0060009d); r_esp += 4; return;
L_006000c1:; BB(0x006000c1);
    /* 006000c1: ret  */ FN_RET(0x0060009d); r_esp += 4; return;
}

void f_006000c4(void) /* sub_6000C4 */
{
    FN_ENTER(0x006000c4);
    /* 006000c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006000c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006000c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006000c9: push 0x8de8f4 */ { u32 v = 0x8de8f4u; r_esp -= 4; W32(r_esp, v); }
    /* 006000ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006000d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006000d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006000dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006000df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006000e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006000e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006000e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006000eb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006000ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006000f0: je 0x600147 */ if (fZ) goto L_00600147;
L_006000f2:; BB(0x006000f2);
    /* 006000f2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006000f9: push 0x250 */ { u32 v = 0x250u; r_esp -= 4; W32(r_esp, v); }
    /* 006000fe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x600103u); f_005caba4();
    /* 00600103: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600104: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00600107: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600109: je 0x600143 */ if (fZ) goto L_00600143;
L_0060010b:; BB(0x0060010b);
    /* 0060010b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00600112: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600119: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060011c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600120: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600126: call 0x600158 */ r_esp -= 4; W32(r_esp, 0x60012bu); f_00600158();
    /* 0060012b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060012e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00600135:; BB(0x00600135);
    /* 00600135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600138: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060013f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600141: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600142: ret  */ FN_RET(0x006000c4); r_esp += 4; return;
L_00600143:; BB(0x00600143);
    /* 00600143: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600145: jmp 0x600135 */ goto L_00600135;
L_00600147:; BB(0x00600147);
    /* 00600147: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600149: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060014c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600153: mov esp, ebp */ r_esp = r_ebp;
    /* 00600155: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600156: ret  */ FN_RET(0x006000c4); r_esp += 4; return;
}

void f_00600100(void)
{
    FN_ENTER(0x00600100);
    goto L_00600100;
L_0060008d:; BB(0x0060008d);
    /* 0060008d: clc  */ fC = 0;
    /* 0060008e: add dh, byte ptr [ebp + 0xe] */ {  u32 a = (u8)(r_edx>>8); u32 b = R8((u32)(r_ebp+0xeu)); u32 r = (a + b) & 0xffu; r_edx = (r_edx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00600091: add edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600097: mov ecx, edx */ r_ecx = r_edx;
    /* 00600099: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x60009eu); f_00831290();
    /* 0060009e: ret  */ FN_RET(0x00600100); r_esp += 4; return;
L_00600100:; BB(0x00600100);
    /* 00600100: stosb byte ptr es:[edi], al */ W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1;
    /* 00600101: cld  */ rt_df = 0;
    /* 00600102: call ptr [ecx - 0x77] */ { u32 t = R32((u32)(r_ecx+0xffffff89u)); r_esp -= 4; W32(r_esp, 0x600105u); call_ind(t); }
    /* 00600105: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00600106: loopne 0x60008d */ r_ecx--; if (r_ecx && !fZ) goto L_0060008d;
    /* 00600108: sal byte ptr [eax + edi - 0x39], 0x45 */ { u32 ad = (u32)(r_eax+r_edi+0xffffffc7u); u32 c = (5u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 0060010d: fadd qword ptr [ecx] */ ST(0) = ST(0) + R_F64((u32)(r_ecx));
    /* 0060010f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600111: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00600113: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00600114: cld  */ rt_df = 0;
    /* 00600115: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600117: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00600119: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0060011c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060011f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600120: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600126: call 0x600158 */ r_esp -= 4; W32(r_esp, 0x60012bu); f_00600158();
    /* 0060012b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0060012e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00600135: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600138: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060013f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600141: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600142: ret  */ FN_RET(0x00600100); r_esp += 4; return;
}

void f_00600158(void) /* sub_600158 */
{
    FN_ENTER(0x00600158);
    /* 00600158: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600159: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060015b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060015f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600163: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600165: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x60016au); f_005e959c();
    /* 0060016a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 00600170: mov dword ptr [ebx], 0xb1c420 */ W32((u32)(r_ebx), 0xb1c420u);
    /* 00600176: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600179: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 0060017f: mov dword ptr [ebx + 0x24c], 0 */ W32((u32)(r_ebx+0x24cu), 0x0u);
    /* 00600189: mov eax, ebx */ r_eax = r_ebx;
    /* 0060018b: mov dword ptr [ebx + 0x248], 0x3f800000 */ W32((u32)(r_ebx+0x248u), 0x3f800000u);
    /* 00600195: mov dword ptr [ebx + 0x244], 0x3f800000 */ W32((u32)(r_ebx+0x244u), 0x3f800000u);
    /* 0060019f: mov dword ptr [ebx + 0x240], 0x3f800000 */ W32((u32)(r_ebx+0x240u), 0x3f800000u);
    /* 006001a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006001aa: ret 8 */ FN_RET(0x00600158); r_esp += 12; return;
}

void f_006001b0(void) /* sub_6001B0 */
{
    FN_ENTER(0x006001b0);
    /* 006001b0: mov dword ptr [0xa8e29c], 0x3f800000 */ W32((u32)(0xa8e29cu), 0x3f800000u);
    /* 006001ba: mov dword ptr [0xa8e2a0], 0x41000000 */ W32((u32)(0xa8e2a0u), 0x41000000u);
    /* 006001c4: mov dword ptr [0xa8e2a4], 0x3fc00000 */ W32((u32)(0xa8e2a4u), 0x3fc00000u);
    /* 006001ce: ret  */ FN_RET(0x006001b0); r_esp += 4; return;
}

void f_006001d0(void) /* sub_6001D0 */
{
    FN_ENTER(0x006001d0);
    /* 006001d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006001d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006001d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006001d5: call 0x6001f4 */ r_esp -= 4; W32(r_esp, 0x6001dau); f_006001f4();
    /* 006001da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006001de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006001e0: jne 0x6001e6 */ if (!fZ) goto L_006001e6;
L_006001e2:; BB(0x006001e2);
    /* 006001e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006001e3: ret 4 */ FN_RET(0x006001d0); r_esp += 8; return;
L_006001e6:; BB(0x006001e6);
    /* 006001e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006001e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6001ecu); f_005c2f74();
    /* 006001ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006001ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006001ee: ret 4 */ FN_RET(0x006001d0); r_esp += 8; return;
}

void f_006001f4(void) /* sub_6001F4 */
{
    FN_ENTER(0x006001f4);
    /* 006001f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006001f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006001f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006001f9: push 0x8de910 */ { u32 v = 0x8de910u; r_esp -= 4; W32(r_esp, v); }
    /* 006001fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0060020c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0060020f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00600212: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00600215: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00600218: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0060021b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0060021e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600221: mov dword ptr [ecx], 0xb1c580 */ W32((u32)(r_ecx), 0xb1c580u);
    /* 00600227: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0060022e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x600233u); f_005e61c8();
    /* 00600233: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600236: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060023d: mov esp, ebp */ r_esp = r_ebp;
    /* 0060023f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600240: ret  */ FN_RET(0x006001f4); r_esp += 4; return;
}

void f_00600244(void) /* sub_600244 */
{
    FN_ENTER(0x00600244);
    /* 00600244: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600245: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600247: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600249: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x60024eu); f_005e7480();
    /* 0060024e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600250: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x600255u); f_005e7480();
    /* 00600255: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600256: ret  */ FN_RET(0x00600244); r_esp += 4; return;
}

void f_00600258(void) /* sub_600258 */
{
    FN_ENTER(0x00600258);
    /* 00600258: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600259: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060025a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0060025c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0060025e: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x600263u); f_005e90b0();
    /* 00600263: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600265: je 0x60042f */ if (fZ) goto L_0060042f;
L_0060026b:; BB(0x0060026b);
    /* 0060026b: lea ebx, [ebp + 0x240] */ r_ebx = (u32)(r_ebp+0x240u);
    /* 00600271: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600272: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00600274: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00600276: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x60027bu); f_005e83c8();
    /* 0060027b: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 00600281: mov eax, edx */ r_eax = r_edx;
    /* 00600283: add eax, 0x8d0 */ {  u32 a = r_eax; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600288: je 0x600436 */ if (fZ) goto L_00600436;
L_0060028e:; BB(0x0060028e);
    /* 0060028e: mov eax, dword ptr [edx + 0x8d0] */ r_eax = R32((u32)(r_edx+0x8d0u));
    /* 00600294: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00600296: jl 0x60029d */ if ((fS!=fO)) goto L_0060029d;
L_00600298:; BB(0x00600298);
    /* 00600298: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0060029b: jle 0x60029f */ if ((fZ||fS!=fO)) goto L_0060029f;
L_0060029d:; BB(0x0060029d);
    /* 0060029d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0060029f:; BB(0x0060029f);
    /* 0060029f: mov dword ptr [ebp + 0x24c], eax */ W32((u32)(r_ebp+0x24cu), r_eax);
    /* 006002a5: lea eax, [ebp + 0x250] */ r_eax = (u32)(r_ebp+0x250u);
    /* 006002ab: mov ecx, edx */ r_ecx = r_edx;
    /* 006002ad: add ecx, 0x8d4 */ {  u32 a = r_ecx; u32 b = 0x8d4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006002b3: je 0x6002d0 */ if (fZ) goto L_006002d0;
L_006002b5:; BB(0x006002b5);
    /* 006002b5: movzx ecx, word ptr [edx + 0x8d4] */ r_ecx = (u32)R16((u32)(r_edx+0x8d4u));
    /* 006002bc: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006002bf: movzx ecx, word ptr [edx + 0x8d6] */ r_ecx = (u32)R16((u32)(r_edx+0x8d6u));
    /* 006002c6: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 006002ca: lea eax, [ebp + 0x258] */ r_eax = (u32)(r_ebp+0x258u);
L_006002d0:; BB(0x006002d0);
    /* 006002d0: mov ecx, edx */ r_ecx = r_edx;
    /* 006002d2: add ecx, 0x8d8 */ {  u32 a = r_ecx; u32 b = 0x8d8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006002d8: je 0x6002f2 */ if (fZ) goto L_006002f2;
L_006002da:; BB(0x006002da);
    /* 006002da: movzx ecx, word ptr [edx + 0x8d8] */ r_ecx = (u32)R16((u32)(r_edx+0x8d8u));
    /* 006002e1: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006002e4: movzx ecx, word ptr [edx + 0x8da] */ r_ecx = (u32)R16((u32)(r_edx+0x8dau));
    /* 006002eb: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 006002ef: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006002f2:; BB(0x006002f2);
    /* 006002f2: mov ecx, edx */ r_ecx = r_edx;
    /* 006002f4: add ecx, 0x8dc */ {  u32 a = r_ecx; u32 b = 0x8dcu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006002fa: je 0x600314 */ if (fZ) goto L_00600314;
L_006002fc:; BB(0x006002fc);
    /* 006002fc: movzx ecx, word ptr [edx + 0x8dc] */ r_ecx = (u32)R16((u32)(r_edx+0x8dcu));
    /* 00600303: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00600306: movzx ecx, word ptr [edx + 0x8de] */ r_ecx = (u32)R16((u32)(r_edx+0x8deu));
    /* 0060030d: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00600311: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00600314:; BB(0x00600314);
    /* 00600314: mov ecx, edx */ r_ecx = r_edx;
    /* 00600316: add ecx, 0x8e0 */ {  u32 a = r_ecx; u32 b = 0x8e0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060031c: je 0x600336 */ if (fZ) goto L_00600336;
L_0060031e:; BB(0x0060031e);
    /* 0060031e: movzx ecx, word ptr [edx + 0x8e0] */ r_ecx = (u32)R16((u32)(r_edx+0x8e0u));
    /* 00600325: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 00600328: movzx ecx, word ptr [edx + 0x8e2] */ r_ecx = (u32)R16((u32)(r_edx+0x8e2u));
    /* 0060032f: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00600333: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00600336:; BB(0x00600336);
    /* 00600336: mov ecx, edx */ r_ecx = r_edx;
    /* 00600338: add ecx, 0x8e4 */ {  u32 a = r_ecx; u32 b = 0x8e4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0060033e: je 0x600358 */ if (fZ) goto L_00600358;
L_00600340:; BB(0x00600340);
    /* 00600340: movzx ecx, word ptr [edx + 0x8e4] */ r_ecx = (u32)R16((u32)(r_edx+0x8e4u));
    /* 00600347: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0060034a: movzx ecx, word ptr [edx + 0x8e6] */ r_ecx = (u32)R16((u32)(r_edx+0x8e6u));
    /* 00600351: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00600355: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00600358:; BB(0x00600358);
    /* 00600358: mov ecx, edx */ r_ecx = r_edx;
    /* 0060035a: add ecx, 0x8e8 */ {  u32 a = r_ecx; u32 b = 0x8e8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00600360: je 0x60037a */ if (fZ) goto L_0060037a;
L_00600362:; BB(0x00600362);
    /* 00600362: movzx ecx, word ptr [edx + 0x8e8] */ r_ecx = (u32)R16((u32)(r_edx+0x8e8u));
    /* 00600369: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0060036c: movzx ecx, word ptr [edx + 0x8ea] */ r_ecx = (u32)R16((u32)(r_edx+0x8eau));
    /* 00600373: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00600377: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0060037a:; BB(0x0060037a);
    /* 0060037a: mov ecx, edx */ r_ecx = r_edx;
    /* 0060037c: add ecx, 0x8ec */ {  u32 a = r_ecx; u32 b = 0x8ecu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00600382: je 0x60039c */ if (fZ) goto L_0060039c;
L_00600384:; BB(0x00600384);
    /* 00600384: movzx ecx, word ptr [edx + 0x8ec] */ r_ecx = (u32)R16((u32)(r_edx+0x8ecu));
    /* 0060038b: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 0060038e: movzx ecx, word ptr [edx + 0x8ee] */ r_ecx = (u32)R16((u32)(r_edx+0x8eeu));
    /* 00600395: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 00600399: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0060039c:; BB(0x0060039c);
    /* 0060039c: mov ecx, edx */ r_ecx = r_edx;
    /* 0060039e: add ecx, 0x8f0 */ {  u32 a = r_ecx; u32 b = 0x8f0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006003a4: je 0x6003be */ if (fZ) goto L_006003be;
L_006003a6:; BB(0x006003a6);
    /* 006003a6: movzx ecx, word ptr [edx + 0x8f0] */ r_ecx = (u32)R16((u32)(r_edx+0x8f0u));
    /* 006003ad: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006003b0: movzx ecx, word ptr [edx + 0x8f2] */ r_ecx = (u32)R16((u32)(r_edx+0x8f2u));
    /* 006003b7: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 006003bb: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006003be:; BB(0x006003be);
    /* 006003be: mov ecx, edx */ r_ecx = r_edx;
    /* 006003c0: add ecx, 0x8f4 */ {  u32 a = r_ecx; u32 b = 0x8f4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006003c6: je 0x6003e0 */ if (fZ) goto L_006003e0;
L_006003c8:; BB(0x006003c8);
    /* 006003c8: movzx ecx, word ptr [edx + 0x8f4] */ r_ecx = (u32)R16((u32)(r_edx+0x8f4u));
    /* 006003cf: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006003d2: movzx ecx, word ptr [edx + 0x8f6] */ r_ecx = (u32)R16((u32)(r_edx+0x8f6u));
    /* 006003d9: mov word ptr [eax + 2], cx */ W16((u32)(r_eax+0x2u), (u16)r_ecx);
    /* 006003dd: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006003e0:; BB(0x006003e0);
    /* 006003e0: mov ecx, edx */ r_ecx = r_edx;
    /* 006003e2: add ecx, 0x8f8 */ {  u32 a = r_ecx; u32 b = 0x8f8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006003e8: je 0x6003ff */ if (fZ) goto L_006003ff;
L_006003ea:; BB(0x006003ea);
    /* 006003ea: movzx ecx, word ptr [edx + 0x8f8] */ r_ecx = (u32)R16((u32)(r_edx+0x8f8u));
    /* 006003f1: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006003f4: movzx edx, word ptr [edx + 0x8fa] */ r_edx = (u32)R16((u32)(r_edx+0x8fau));
    /* 006003fb: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
L_006003ff:; BB(0x006003ff);
    /* 006003ff: mov eax, dword ptr [ebp + 0x24c] */ r_eax = R32((u32)(r_ebp+0x24cu));
    /* 00600405: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600407: je 0x600425 */ if (fZ) goto L_00600425;
L_00600409:; BB(0x00600409);
    /* 00600409: push dword ptr [ebp + 0x1e4] */ { u32 v = R32((u32)(r_ebp+0x1e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060040f: lea eax, [ebp + 0x24c] */ r_eax = (u32)(r_ebp+0x24cu);
    /* 00600415: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600416: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600417: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060041d: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x600422u); f_006e54a8();
    /* 00600422: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00600425:; BB(0x00600425);
    /* 00600425: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00600427: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x60042cu); f_005e7480();
    /* 0060042c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060042d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060042e: ret  */ FN_RET(0x00600258); r_esp += 4; return;
L_0060042f:; BB(0x0060042f);
    /* 0060042f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00600431: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x600436u); f_005e90e8();
L_00600436:; BB(0x00600436);
    /* 00600436: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600437: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600438: ret  */ FN_RET(0x00600258); r_esp += 4; return;
}

void f_0060043c(void) /* sub_60043C */
{
    FN_ENTER(0x0060043c);
    /* 0060043c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060043d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060043f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600441: push 0x8de938 */ { u32 v = 0x8de938u; r_esp -= 4; W32(r_esp, v); }
    /* 00600446: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060044c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060044d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00600454: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600457: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0060045a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0060045d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00600460: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00600463: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600468: je 0x6004bf */ if (fZ) goto L_006004bf;
L_0060046a:; BB(0x0060046a);
    /* 0060046a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00600471: push 0x2a8 */ { u32 v = 0x2a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00600476: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x60047bu); f_005caba4();
    /* 0060047b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060047c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0060047f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600481: je 0x6004bb */ if (fZ) goto L_006004bb;
L_00600483:; BB(0x00600483);
    /* 00600483: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0060048a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600491: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600494: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600497: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600498: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060049e: call 0x6004d0 */ r_esp -= 4; W32(r_esp, 0x6004a3u); f_006004d0();
    /* 006004a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006004a6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006004ad:; BB(0x006004ad);
    /* 006004ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006004b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006004b7: mov esp, ebp */ r_esp = r_ebp;
    /* 006004b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006004ba: ret  */ FN_RET(0x0060043c); r_esp += 4; return;
L_006004bb:; BB(0x006004bb);
    /* 006004bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006004bd: jmp 0x6004ad */ goto L_006004ad;
L_006004bf:; BB(0x006004bf);
    /* 006004bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006004c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006004c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006004cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006004cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006004ce: ret  */ FN_RET(0x0060043c); r_esp += 4; return;
}

void f_006004d0(void) /* sub_6004D0 */
{
    FN_ENTER(0x006004d0);
    /* 006004d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006004d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006004d2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006004d4: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006004d8: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006004dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006004de: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x6004e3u); f_005e959c();
    /* 006004e3: mov dword ptr [ebp], 0xb1c580 */ W32((u32)(r_ebp), 0xb1c580u);
    /* 006004ea: lea ecx, [ebp + 0x250] */ r_ecx = (u32)(r_ebp+0x250u);
    /* 006004f0: mov edx, 0xb */ r_edx = 0xbu;
    /* 006004f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006004f7:; BB(0x006004f7);
    /* 006004f7: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 006004fc: mov word ptr [ecx], di */ W16((u32)(r_ecx), (u16)r_edi);
    /* 006004ff: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00600501: mov word ptr [ecx + 2], di */ W16((u32)(r_ecx+0x2u), (u16)r_edi);
    /* 00600505: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00600508: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060050b: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0060050e: jne 0x6004f7 */ if (!fZ) goto L_006004f7;
L_00600510:; BB(0x00600510);
    /* 00600510: mov edx, dword ptr [ebp + 0x190] */ r_edx = R32((u32)(r_ebp+0x190u));
    /* 00600516: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 0060051c: mov dword ptr [ebp + 0x24c], 0 */ W32((u32)(r_ebp+0x24cu), 0x0u);
    /* 00600526: or edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00600529: mov dword ptr [ebp + 0x1e8], 5 */ W32((u32)(r_ebp+0x1e8u), 0x5u);
    /* 00600533: mov dword ptr [ebp + 0x190], edx */ W32((u32)(r_ebp+0x190u), r_edx);
    /* 00600539: or eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060053c: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 00600542: mov eax, ebp */ r_eax = r_ebp;
    /* 00600544: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600545: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00600546: ret 8 */ FN_RET(0x006004d0); r_esp += 12; return;
}

void f_0060054c(void) /* sub_60054C */
{
    FN_ENTER(0x0060054c);
    /* 0060054c: mov dword ptr [0xa8e2a8], 0x3f800000 */ W32((u32)(0xa8e2a8u), 0x3f800000u);
    /* 00600556: mov dword ptr [0xa8e2ac], 0x41000000 */ W32((u32)(0xa8e2acu), 0x41000000u);
    /* 00600560: mov dword ptr [0xa8e2b0], 0x3fc00000 */ W32((u32)(0xa8e2b0u), 0x3fc00000u);
    /* 0060056a: ret  */ FN_RET(0x0060054c); r_esp += 4; return;
}

void f_0060056c(void) /* sub_60056C */
{
    FN_ENTER(0x0060056c);
    /* 0060056c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060056d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060056f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600571: call 0x600590 */ r_esp -= 4; W32(r_esp, 0x600576u); f_00600590();
    /* 00600576: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0060057a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060057c: jne 0x600582 */ if (!fZ) goto L_00600582;
L_0060057e:; BB(0x0060057e);
    /* 0060057e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060057f: ret 4 */ FN_RET(0x0060056c); r_esp += 8; return;
L_00600582:; BB(0x00600582);
    /* 00600582: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600583: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x600588u); f_005c2f74();
    /* 00600588: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600589: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060058a: ret 4 */ FN_RET(0x0060056c); r_esp += 8; return;
}

void f_00600590(void) /* sub_600590 */
{
    FN_ENTER(0x00600590);
    /* 00600590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600591: mov ebp, esp */ r_ebp = r_esp;
    /* 00600593: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600595: push 0x8de954 */ { u32 v = 0x8de954u; r_esp -= 4; W32(r_esp, v); }
    /* 0060059a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006005a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006005a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006005a8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006005ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006005ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006005b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006005b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006005b7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006005ba: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006005bd: mov dword ptr [ecx], 0xb1c6e0 */ W32((u32)(r_ecx), 0xb1c6e0u);
    /* 006005c3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006005ca: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x6005cfu); f_005e61c8();
    /* 006005cf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006005d2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006005d9: mov esp, ebp */ r_esp = r_ebp;
    /* 006005db: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006005dc: ret  */ FN_RET(0x00600590); r_esp += 4; return;
}

void f_006005e0(void) /* sub_6005E0 */
{
    FN_ENTER(0x006005e0);
    /* 006005e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006005e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006005e3: lea eax, [ebx + 0x244] */ r_eax = (u32)(r_ebx+0x244u);
    /* 006005e9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006005eb: push 0xfffff556 */ { u32 v = 0xfffff556u; r_esp -= 4; W32(r_esp, v); }
    /* 006005f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006005f1: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x6005f6u); f_005dd6f8();
    /* 006005f6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006005f9: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 006005ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600601: jne 0x600619 */ if (!fZ) goto L_00600619;
L_00600603:; BB(0x00600603);
    /* 00600603: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00600605: push 0xfffff556 */ { u32 v = 0xfffff556u; r_esp -= 4; W32(r_esp, v); }
    /* 0060060a: add ebx, 0x240 */ {  u32 a = r_ebx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00600610: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600611: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x600616u); f_005dd6f8();
    /* 00600616: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00600619:; BB(0x00600619);
    /* 00600619: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060061a: ret  */ FN_RET(0x006005e0); r_esp += 4; return;
}

void f_0060061c(void) /* sub_60061C */
{
    FN_ENTER(0x0060061c);
    /* 0060061c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060061d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060061f: lea eax, [ebx + 0x240] */ r_eax = (u32)(r_ebx+0x240u);
    /* 00600625: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0060062a: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060062f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600630: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x600635u); f_005dd6f8();
    /* 00600635: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600638: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 0060063e: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600643: je 0x600647 */ if (fZ) goto L_00600647;
L_00600645:; BB(0x00600645);
    /* 00600645: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600646: ret  */ FN_RET(0x0060061c); r_esp += 4; return;
L_00600647:; BB(0x00600647);
    /* 00600647: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0060064c: push 0x71c */ { u32 v = 0x71cu; r_esp -= 4; W32(r_esp, v); }
    /* 00600651: add ebx, 0x244 */ {  u32 a = r_ebx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00600657: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600658: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x60065du); f_005dd6f8();
    /* 0060065d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600660: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600661: ret  */ FN_RET(0x0060061c); r_esp += 4; return;
}

void f_00600664(void) /* sub_600664 */
{
    FN_ENTER(0x00600664);
    /* 00600664: mov edx, ecx */ r_edx = r_ecx;
    /* 00600666: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 0060066b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060066e: jne 0x60067e */ if (!fZ) goto L_0060067e;
L_00600670:; BB(0x00600670);
    /* 00600670: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 00600676: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00600678: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x60067du); f_0082e9e4();
    /* 0060067d: ret  */ FN_RET(0x00600664); r_esp += 4; return;
L_0060067e:; BB(0x0060067e);
    /* 0060067e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600681: jne 0x600690 */ if (!fZ) goto L_00600690;
L_00600683:; BB(0x00600683);
    /* 00600683: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 00600689: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060068b: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x600690u); f_0082e9e4();
L_00600690:; BB(0x00600690);
    /* 00600690: ret  */ FN_RET(0x00600664); r_esp += 4; return;
}

void f_00600694(void) /* sub_600694 */
{
    FN_ENTER(0x00600694);
    /* 00600694: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600695: mov ebp, esp */ r_ebp = r_esp;
    /* 00600697: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600699: push 0x8de97c */ { u32 v = 0x8de97cu; r_esp -= 4; W32(r_esp, v); }
    /* 0060069e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006006a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006006a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006006ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006006af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006006b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006006b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006006b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006006bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006006be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006006c0: je 0x600717 */ if (fZ) goto L_00600717;
L_006006c2:; BB(0x006006c2);
    /* 006006c2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006006c9: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 006006ce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6006d3u); f_005caba4();
    /* 006006d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006006d4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006006d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006006d9: je 0x600713 */ if (fZ) goto L_00600713;
L_006006db:; BB(0x006006db);
    /* 006006db: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006006e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006006e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006006ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006006ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006006f0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006006f6: call 0x600728 */ r_esp -= 4; W32(r_esp, 0x6006fbu); f_00600728();
    /* 006006fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006006fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00600705:; BB(0x00600705);
    /* 00600705: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600708: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060070f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600711: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600712: ret  */ FN_RET(0x00600694); r_esp += 4; return;
L_00600713:; BB(0x00600713);
    /* 00600713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600715: jmp 0x600705 */ goto L_00600705;
L_00600717:; BB(0x00600717);
    /* 00600717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600719: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0060071c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600723: mov esp, ebp */ r_esp = r_ebp;
    /* 00600725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600726: ret  */ FN_RET(0x00600694); r_esp += 4; return;
}

void f_00600728(void) /* sub_600728 */
{
    FN_ENTER(0x00600728);
    /* 00600728: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00600729: mov edi, ecx */ r_edi = r_ecx;
    /* 0060072b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060072f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600733: mov ecx, edi */ r_ecx = r_edi;
    /* 00600735: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x60073au); f_005e959c();
    /* 0060073a: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 00600740: mov dword ptr [edi], 0xb1c6e0 */ W32((u32)(r_edi), 0xb1c6e0u);
    /* 00600746: or edx, 0x600 */ {  u32 a = r_edx; u32 b = 0x600u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0060074c: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 00600752: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600754: mov dword ptr [edi + 0x240], eax */ W32((u32)(r_edi+0x240u), r_eax);
    /* 0060075a: mov dword ptr [edi + 0x244], eax */ W32((u32)(r_edi+0x244u), r_eax);
    /* 00600760: mov eax, edi */ r_eax = r_edi;
    /* 00600762: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00600763: ret 8 */ FN_RET(0x00600728); r_esp += 12; return;
}

void f_00600768(void) /* sub_600768 */
{
    FN_ENTER(0x00600768);
    /* 00600768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600769: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0060076b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060076d: call 0x60078c */ r_esp -= 4; W32(r_esp, 0x600772u); f_0060078c();
    /* 00600772: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00600776: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600778: jne 0x60077e */ if (!fZ) goto L_0060077e;
L_0060077a:; BB(0x0060077a);
    /* 0060077a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060077b: ret 4 */ FN_RET(0x00600768); r_esp += 8; return;
L_0060077e:; BB(0x0060077e);
    /* 0060077e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0060077f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x600784u); f_005c2f74();
    /* 00600784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600785: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600786: ret 4 */ FN_RET(0x00600768); r_esp += 8; return;
}

void f_0060078c(void) /* sub_60078C */
{
    FN_ENTER(0x0060078c);
    /* 0060078c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060078d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060078f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600791: push 0x8de998 */ { u32 v = 0x8de998u; r_esp -= 4; W32(r_esp, v); }
    /* 00600796: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0060079c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060079d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006007a4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006007a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006007aa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006007ad: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006007b0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006007b3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006007b6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006007b9: mov dword ptr [ecx], 0xb1c840 */ W32((u32)(r_ecx), 0xb1c840u);
    /* 006007bf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006007c6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x6007cbu); f_005e61c8();
    /* 006007cb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006007ce: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006007d5: mov esp, ebp */ r_esp = r_ebp;
    /* 006007d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006007d8: ret  */ FN_RET(0x0060078c); r_esp += 4; return;
}

void f_006007dc(void) /* sub_6007DC */
{
    FN_ENTER(0x006007dc);
    /* 006007dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006007dd: mov edi, ecx */ r_edi = r_ecx;
    /* 006007df: mov ecx, edi */ r_ecx = r_edi;
    /* 006007e1: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x6007e6u); f_005e90b0();
    /* 006007e6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006007e8: je 0x60083f */ if (fZ) goto L_0060083f;
L_006007ea:; BB(0x006007ea);
    /* 006007ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006007ec: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 006007f2: mov eax, dword ptr [edx + 0x8b8] */ r_eax = R32((u32)(r_edx+0x8b8u));
    /* 006007f8: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006007fb: mov dword ptr [edx + 0x8b8], eax */ W32((u32)(r_edx+0x8b8u), r_eax);
    /* 00600801: mov dword ptr [edi + 0x238], 0x5e4990 */ W32((u32)(r_edi+0x238u), 0x5e4990u);
    /* 0060080b: lea eax, [edi + 0x240] */ r_eax = (u32)(r_edi+0x240u);
    /* 00600811: mov ecx, edi */ r_ecx = r_edi;
    /* 00600813: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 0060081d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0060081e: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00600823: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x600828u); f_005e6a88();
    /* 00600828: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060082a: lea eax, [edi + 0x24c] */ r_eax = (u32)(r_edi+0x24cu);
    /* 00600830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600831: mov ecx, edi */ r_ecx = r_edi;
    /* 00600833: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 00600838: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x60083du); f_005e6a88();
    /* 0060083d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060083e: ret  */ FN_RET(0x006007dc); r_esp += 4; return;
L_0060083f:; BB(0x0060083f);
    /* 0060083f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00600841: mov dword ptr [edi + 0x238], 0x5e4678 */ W32((u32)(r_edi+0x238u), 0x5e4678u);
    /* 0060084b: lea ecx, [edi + 0x240] */ r_ecx = (u32)(r_edi+0x240u);
    /* 00600851: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00600853: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 0060085d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0060085f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600860: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600861: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600862: mov ecx, edi */ r_ecx = r_edi;
    /* 00600864: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x60086au); call_ind(t); }
    /* 0060086a: lea edx, [edi + 0x24c] */ r_edx = (u32)(r_edi+0x24cu);
    /* 00600870: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600872: je 0x600886 */ if (fZ) goto L_00600886;
L_00600874:; BB(0x00600874);
    /* 00600874: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00600876: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00600878: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00600879: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060087a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060087b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060087c: mov ecx, edi */ r_ecx = r_edi;
    /* 0060087e: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x600884u); call_ind(t); }
    /* 00600884: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00600885: ret  */ FN_RET(0x006007dc); r_esp += 4; return;
L_00600886:; BB(0x00600886);
    /* 00600886: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600888: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0060088a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060088c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060088d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0060088e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0060088f: mov ecx, edi */ r_ecx = r_edi;
    /* 00600891: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x600897u); call_ind(t); }
    /* 00600897: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00600898: ret  */ FN_RET(0x006007dc); r_esp += 4; return;
}

void f_0060089c(void) /* sub_60089C */
{
    FN_ENTER(0x0060089c);
    /* 0060089c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0060089d: mov ebp, esp */ r_ebp = r_esp;
    /* 0060089f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006008a1: push 0x8de9c0 */ { u32 v = 0x8de9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006008a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006008ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006008ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006008b4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006008b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006008ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006008bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006008c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006008c3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006008c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006008c8: je 0x60091f */ if (fZ) goto L_0060091f;
L_006008ca:; BB(0x006008ca);
    /* 006008ca: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006008d1: push 0x258 */ { u32 v = 0x258u; r_esp -= 4; W32(r_esp, v); }
    /* 006008d6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6008dbu); f_005caba4();
    /* 006008db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006008dc: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006008df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006008e1: je 0x60091b */ if (fZ) goto L_0060091b;
L_006008e3:; BB(0x006008e3);
    /* 006008e3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006008ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006008f1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006008f4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006008f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006008f8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006008fe: call 0x600930 */ r_esp -= 4; W32(r_esp, 0x600903u); f_00600930();
    /* 00600903: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600906: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0060090d:; BB(0x0060090d);
    /* 0060090d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600910: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600917: mov esp, ebp */ r_esp = r_ebp;
    /* 00600919: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060091a: ret  */ FN_RET(0x0060089c); r_esp += 4; return;
L_0060091b:; BB(0x0060091b);
    /* 0060091b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0060091d: jmp 0x60090d */ goto L_0060090d;
L_0060091f:; BB(0x0060091f);
    /* 0060091f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600921: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600924: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0060092b: mov esp, ebp */ r_esp = r_ebp;
    /* 0060092d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060092e: ret  */ FN_RET(0x0060089c); r_esp += 4; return;
}

void f_00600930(void) /* sub_600930 */
{
    FN_ENTER(0x00600930);
    /* 00600930: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600931: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600933: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600937: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060093b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060093d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x600942u); f_005e959c();
    /* 00600942: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 00600948: mov dword ptr [ebx], 0xb1c840 */ W32((u32)(r_ebx), 0xb1c840u);
    /* 0060094e: or edx, 0x223 */ {  u32 a = r_edx; u32 b = 0x223u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600954: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 0060095a: mov byte ptr [ebx + 0x1f4], 3 */ W8((u32)(r_ebx+0x1f4u), 0x3u);
    /* 00600961: mov eax, ebx */ r_eax = r_ebx;
    /* 00600963: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600964: ret 8 */ FN_RET(0x00600930); r_esp += 12; return;
}

void f_00600968(void) /* sub_600968 */
{
    FN_ENTER(0x00600968);
    /* 00600968: mov dword ptr [0xa8e2b4], 0x3f800000 */ W32((u32)(0xa8e2b4u), 0x3f800000u);
    /* 00600972: mov dword ptr [0xa8e2b8], 0x41000000 */ W32((u32)(0xa8e2b8u), 0x41000000u);
    /* 0060097c: mov dword ptr [0xa8e2bc], 0x3fc00000 */ W32((u32)(0xa8e2bcu), 0x3fc00000u);
    /* 00600986: ret  */ FN_RET(0x00600968); r_esp += 4; return;
}

void f_00600988(void) /* sub_600988 */
{
    FN_ENTER(0x00600988);
    /* 00600988: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600989: mov ebp, esp */ r_ebp = r_esp;
    /* 0060098b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0060098d: push 0x8de9dc */ { u32 v = 0x8de9dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00600992: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600998: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600999: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006009a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006009a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006009a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006009a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006009ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006009af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006009b2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006009b5: mov eax, ecx */ r_eax = r_ecx;
    /* 006009b7: mov dword ptr [eax], 0xb1c9a0 */ W32((u32)(r_eax), 0xb1c9a0u);
    /* 006009bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006009c4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x6009c9u); f_005e61c8();
    /* 006009c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006009cc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006009ce: jne 0x6009e0 */ if (!fZ) goto L_006009e0;
L_006009d0:; BB(0x006009d0);
    /* 006009d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006009d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006009da: mov esp, ebp */ r_esp = r_ebp;
    /* 006009dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006009dd: ret 4 */ FN_RET(0x00600988); r_esp += 8; return;
L_006009e0:; BB(0x006009e0);
    /* 006009e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006009e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006009e4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6009e9u); f_005c2f74();
    /* 006009e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006009ea: jmp 0x6009d0 */ goto L_006009d0;
}

void f_006009ec(void) /* sub_6009EC */
{
    FN_ENTER(0x006009ec);
    /* 006009ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006009ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006009ee: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006009f0: fld dword ptr [0x92e12c] */ FPUSH(R_F32((u32)(0x92e12cu)));
    /* 006009f6: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 006009fb: fld dword ptr [ebp + 0x240] */ FPUSH(R_F32((u32)(r_ebp+0x240u)));
    /* 00600a01: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00600a03: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00600a05: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00600a07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00600a08: jae 0x600a37 */ if (!fC) goto L_00600a37;
L_00600a0a:; BB(0x00600a0a);
    /* 00600a0a: fld dword ptr [0x92e128] */ FPUSH(R_F32((u32)(0x92e128u)));
    /* 00600a10: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00600a12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00600a14: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00600a16: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00600a18: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00600a19: ja 0x600a2f */ if ((!fC&&!fZ)) goto L_00600a2f;
L_00600a1b:; BB(0x00600a1b);
    /* 00600a1b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00600a1d: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00600a22: mov dword ptr [ebp + 0x240], eax */ W32((u32)(r_ebp+0x240u), r_eax);
    /* 00600a28: mov esi, 1 */ r_esi = 0x1u;
    /* 00600a2d: jmp 0x600a3b */ goto L_00600a3b;
L_00600a2f:; BB(0x00600a2f);
    /* 00600a2f: fstp dword ptr [ebp + 0x240] */ W_F32((u32)(r_ebp+0x240u), ST(0)); FPOP();
    /* 00600a35: jmp 0x600a3b */ goto L_00600a3b;
L_00600a37:; BB(0x00600a37);
    /* 00600a37: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00600a39: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00600a3b:; BB(0x00600a3b);
    /* 00600a3b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600a3c: push 0xbd23d70d */ { u32 v = 0xbd23d70du; r_esp -= 4; W32(r_esp, v); }
    /* 00600a41: lea eax, [ebp + 0x244] */ r_eax = (u32)(r_ebp+0x244u);
    /* 00600a47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600a48: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600a4du); f_005dd728();
    /* 00600a4d: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00600a52: push 0x3e0f5c29 */ { u32 v = 0x3e0f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 00600a57: lea eax, [ebp + 0x248] */ r_eax = (u32)(r_ebp+0x248u);
    /* 00600a5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600a5e: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600a63u); f_005dd728();
    /* 00600a63: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600a66: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600a69: je 0x600a6e */ if (fZ) goto L_00600a6e;
L_00600a6b:; BB(0x00600a6b);
    /* 00600a6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600a6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600a6d: ret  */ FN_RET(0x006009ec); r_esp += 4; return;
L_00600a6e:; BB(0x00600a6e);
    /* 00600a6e: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 00600a74: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600a77: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600a79: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600a7a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600a7b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600a7c: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00600a7e: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x600a83u); f_00814298();
    /* 00600a83: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600a86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600a87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600a88: ret  */ FN_RET(0x006009ec); r_esp += 4; return;
}

void f_00600a8c(void) /* sub_600A8C */
{
    FN_ENTER(0x00600a8c);
    /* 00600a8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600a8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600a8f: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00600a94: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600a97: je 0x600aaf */ if (fZ) goto L_00600aaf;
L_00600a99:; BB(0x00600a99);
    /* 00600a99: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600a9c: je 0x600aa0 */ if (fZ) goto L_00600aa0;
L_00600a9e:; BB(0x00600a9e);
    /* 00600a9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600a9f: ret  */ FN_RET(0x00600a8c); r_esp += 4; return;
L_00600aa0:; BB(0x00600aa0);
    /* 00600aa0: add ebx, 0x240 */ {  u32 a = r_ebx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00600aa6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600aa8: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x600aadu); f_00831290();
    /* 00600aad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600aae: ret  */ FN_RET(0x00600a8c); r_esp += 4; return;
L_00600aaf:; BB(0x00600aaf);
    /* 00600aaf: lea ecx, [ebx + 0x240] */ r_ecx = (u32)(r_ebx+0x240u);
    /* 00600ab5: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x600abau); f_00831290();
    /* 00600aba: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00600abf: jmp 0x600a99 */ goto L_00600a99;
}

void f_00600ac4(void) /* sub_600AC4 */
{
    FN_ENTER(0x00600ac4);
    /* 00600ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600ac5: mov ebp, esp */ r_ebp = r_esp;
    /* 00600ac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600ac9: push 0x8dea04 */ { u32 v = 0x8dea04u; r_esp -= 4; W32(r_esp, v); }
    /* 00600ace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600ad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00600adc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600adf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00600ae2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00600ae5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00600ae8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00600aeb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600aee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600af0: je 0x600b47 */ if (fZ) goto L_00600b47;
L_00600af2:; BB(0x00600af2);
    /* 00600af2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00600af9: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00600afe: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x600b03u); f_005caba4();
    /* 00600b03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600b04: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00600b07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600b09: je 0x600b43 */ if (fZ) goto L_00600b43;
L_00600b0b:; BB(0x00600b0b);
    /* 00600b0b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00600b12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600b19: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600b1c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600b20: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600b26: call 0x600b58 */ r_esp -= 4; W32(r_esp, 0x600b2bu); f_00600b58();
    /* 00600b2b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600b2e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00600b35:; BB(0x00600b35);
    /* 00600b35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600b38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600b3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600b41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600b42: ret  */ FN_RET(0x00600ac4); r_esp += 4; return;
L_00600b43:; BB(0x00600b43);
    /* 00600b43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600b45: jmp 0x600b35 */ goto L_00600b35;
L_00600b47:; BB(0x00600b47);
    /* 00600b47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600b49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600b4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600b53: mov esp, ebp */ r_esp = r_ebp;
    /* 00600b55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600b56: ret  */ FN_RET(0x00600ac4); r_esp += 4; return;
}

void f_00600b58(void) /* sub_600B58 */
{
    FN_ENTER(0x00600b58);
    /* 00600b58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600b59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00600b5b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600b5f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600b63: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00600b65: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x600b6au); f_005e959c();
    /* 00600b6a: mov dword ptr [ebp], 0xb1c9a0 */ W32((u32)(r_ebp), 0xb1c9a0u);
    /* 00600b71: mov eax, ebp */ r_eax = r_ebp;
    /* 00600b73: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 00600b7d: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 00600b87: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 00600b91: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600b92: ret 8 */ FN_RET(0x00600b58); r_esp += 12; return;
}

void f_00600b98(void) /* sub_600B98 */
{
    FN_ENTER(0x00600b98);
    /* 00600b98: mov dword ptr [0xa8e2c0], 0x3f800000 */ W32((u32)(0xa8e2c0u), 0x3f800000u);
    /* 00600ba2: mov dword ptr [0xa8e2c4], 0x41000000 */ W32((u32)(0xa8e2c4u), 0x41000000u);
    /* 00600bac: mov dword ptr [0xa8e2c8], 0x3fc00000 */ W32((u32)(0xa8e2c8u), 0x3fc00000u);
    /* 00600bb6: ret  */ FN_RET(0x00600b98); r_esp += 4; return;
}

void f_00600bb8(void) /* sub_600BB8 */
{
    FN_ENTER(0x00600bb8);
    /* 00600bb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600bb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600bbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600bbd: call 0x600bdc */ r_esp -= 4; W32(r_esp, 0x600bc2u); f_00600bdc();
    /* 00600bc2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00600bc6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600bc8: jne 0x600bce */ if (!fZ) goto L_00600bce;
L_00600bca:; BB(0x00600bca);
    /* 00600bca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600bcb: ret 4 */ FN_RET(0x00600bb8); r_esp += 8; return;
L_00600bce:; BB(0x00600bce);
    /* 00600bce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600bcf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x600bd4u); f_005c2f74();
    /* 00600bd4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600bd5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600bd6: ret 4 */ FN_RET(0x00600bb8); r_esp += 8; return;
}

void f_00600bdc(void) /* sub_600BDC */
{
    FN_ENTER(0x00600bdc);
    /* 00600bdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600bdd: mov ebp, esp */ r_ebp = r_esp;
    /* 00600bdf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600be1: push 0x8dea20 */ { u32 v = 0x8dea20u; r_esp -= 4; W32(r_esp, v); }
    /* 00600be6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600bec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600bed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00600bf4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600bf7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00600bfa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00600bfd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00600c00: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00600c03: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00600c06: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600c09: mov dword ptr [ecx], 0xb1cb20 */ W32((u32)(r_ecx), 0xb1cb20u);
    /* 00600c0f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00600c16: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x600c1bu); f_005e61c8();
    /* 00600c1b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600c1e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600c25: mov esp, ebp */ r_esp = r_ebp;
    /* 00600c27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600c28: ret  */ FN_RET(0x00600bdc); r_esp += 4; return;
}

void f_00600c2c(void) /* sub_600C2C */
{
    FN_ENTER(0x00600c2c);
    /* 00600c2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600c2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600c2f: lea eax, [ebx + 0x240] */ r_eax = (u32)(r_ebx+0x240u);
    /* 00600c35: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00600c3a: push 0xbe0f5c29 */ { u32 v = 0xbe0f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 00600c3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600c40: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600c45u); f_005dd728();
    /* 00600c45: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00600c4a: push 0x3d23d70d */ { u32 v = 0x3d23d70du; r_esp -= 4; W32(r_esp, v); }
    /* 00600c4f: lea eax, [ebx + 0x244] */ r_eax = (u32)(r_ebx+0x244u);
    /* 00600c55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600c56: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600c5bu); f_005dd728();
    /* 00600c5b: push 0x3e99999a */ { u32 v = 0x3e99999au; r_esp -= 4; W32(r_esp, v); }
    /* 00600c60: push 0xbe0f5c29 */ { u32 v = 0xbe0f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 00600c65: add ebx, 0x248 */ {  u32 a = r_ebx; u32 b = 0x248u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00600c6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600c6c: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600c71u); f_005dd728();
    /* 00600c71: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600c74: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600c75: ret  */ FN_RET(0x00600c2c); r_esp += 4; return;
}

void f_00600c78(void) /* sub_600C78 */
{
    FN_ENTER(0x00600c78);
    /* 00600c78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00600c79: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600c7a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00600c7c: fld dword ptr [0x92e158] */ FPUSH(R_F32((u32)(0x92e158u)));
    /* 00600c82: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 00600c87: fld dword ptr [ebp + 0x240] */ FPUSH(R_F32((u32)(r_ebp+0x240u)));
    /* 00600c8d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00600c8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00600c91: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00600c93: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00600c94: jae 0x600cc3 */ if (!fC) goto L_00600cc3;
L_00600c96:; BB(0x00600c96);
    /* 00600c96: fld dword ptr [0x92e154] */ FPUSH(R_F32((u32)(0x92e154u)));
    /* 00600c9c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00600c9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00600ca0: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00600ca2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00600ca4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00600ca5: ja 0x600cbb */ if ((!fC&&!fZ)) goto L_00600cbb;
L_00600ca7:; BB(0x00600ca7);
    /* 00600ca7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00600ca9: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 00600cae: mov dword ptr [ebp + 0x240], eax */ W32((u32)(r_ebp+0x240u), r_eax);
    /* 00600cb4: mov esi, 1 */ r_esi = 0x1u;
    /* 00600cb9: jmp 0x600cc7 */ goto L_00600cc7;
L_00600cbb:; BB(0x00600cbb);
    /* 00600cbb: fstp dword ptr [ebp + 0x240] */ W_F32((u32)(r_ebp+0x240u), ST(0)); FPOP();
    /* 00600cc1: jmp 0x600cc7 */ goto L_00600cc7;
L_00600cc3:; BB(0x00600cc3);
    /* 00600cc3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00600cc5: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00600cc7:; BB(0x00600cc7);
    /* 00600cc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600cc8: push 0xbd23d70d */ { u32 v = 0xbd23d70du; r_esp -= 4; W32(r_esp, v); }
    /* 00600ccd: lea eax, [ebp + 0x244] */ r_eax = (u32)(r_ebp+0x244u);
    /* 00600cd3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600cd4: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600cd9u); f_005dd728();
    /* 00600cd9: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00600cde: push 0x3e0f5c29 */ { u32 v = 0x3e0f5c29u; r_esp -= 4; W32(r_esp, v); }
    /* 00600ce3: lea eax, [ebp + 0x248] */ r_eax = (u32)(r_ebp+0x248u);
    /* 00600ce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600cea: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x600cefu); f_005dd728();
    /* 00600cef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600cf2: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600cf5: je 0x600cfa */ if (fZ) goto L_00600cfa;
L_00600cf7:; BB(0x00600cf7);
    /* 00600cf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600cf8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600cf9: ret  */ FN_RET(0x00600c78); r_esp += 4; return;
L_00600cfa:; BB(0x00600cfa);
    /* 00600cfa: mov edx, dword ptr [ebp + 0xf8] */ r_edx = R32((u32)(r_ebp+0xf8u));
    /* 00600d00: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00600d03: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00600d05: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600d06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600d07: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00600d08: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00600d0a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x600d0fu); f_00814298();
    /* 00600d0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00600d12: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600d13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00600d14: ret  */ FN_RET(0x00600c78); r_esp += 4; return;
}

void f_00600d18(void) /* sub_600D18 */
{
    FN_ENTER(0x00600d18);
    /* 00600d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600d19: mov ebp, esp */ r_ebp = r_esp;
    /* 00600d1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600d1d: push 0x8dea48 */ { u32 v = 0x8dea48u; r_esp -= 4; W32(r_esp, v); }
    /* 00600d22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600d28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600d29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00600d30: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600d33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00600d36: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00600d39: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00600d3c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00600d3f: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 00600d45: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 00600d48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600d4a: je 0x600d9f */ if (fZ) goto L_00600d9f;
L_00600d4c:; BB(0x00600d4c);
    /* 00600d4c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00600d53: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00600d55: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x600d5au); f_005caba4();
    /* 00600d5a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00600d5d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600d60: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00600d63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600d65: je 0x600d9f */ if (fZ) goto L_00600d9f;
L_00600d67:; BB(0x00600d67);
    /* 00600d67: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00600d6e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600d75: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00600d78: mov ecx, eax */ r_ecx = r_eax;
    /* 00600d7a: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 00600d7c: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 00600d83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600d84: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600d8a: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x600d8fu); f_005e5cac();
    /* 00600d8f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00600d92: mov dword ptr [eax], 0xb0f2f0 */ W32((u32)(r_eax), 0xb0f2f0u);
    /* 00600d98: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00600d9f:; BB(0x00600d9f);
    /* 00600d9f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600da2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600da9: mov esp, ebp */ r_esp = r_ebp;
    /* 00600dab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600dac: ret  */ FN_RET(0x00600d18); r_esp += 4; return;
}

void f_00600db0(void) /* sub_600DB0 */
{
    FN_ENTER(0x00600db0);
    /* 00600db0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600db1: mov ebp, esp */ r_ebp = r_esp;
    /* 00600db3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600db5: push 0x8dea70 */ { u32 v = 0x8dea70u; r_esp -= 4; W32(r_esp, v); }
    /* 00600dba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600dc0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600dc1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00600dc8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600dcb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00600dce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00600dd1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00600dd4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00600dd7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600dda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600ddc: je 0x600e33 */ if (fZ) goto L_00600e33;
L_00600dde:; BB(0x00600dde);
    /* 00600dde: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00600de5: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00600dea: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x600defu); f_005caba4();
    /* 00600def: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600df0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00600df3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600df5: je 0x600e2f */ if (fZ) goto L_00600e2f;
L_00600df7:; BB(0x00600df7);
    /* 00600df7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00600dfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00600e05: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00600e08: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600e0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600e0c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600e12: call 0x600e44 */ r_esp -= 4; W32(r_esp, 0x600e17u); f_00600e44();
    /* 00600e17: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600e1a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00600e21:; BB(0x00600e21);
    /* 00600e21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600e24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600e2b: mov esp, ebp */ r_esp = r_ebp;
    /* 00600e2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600e2e: ret  */ FN_RET(0x00600db0); r_esp += 4; return;
L_00600e2f:; BB(0x00600e2f);
    /* 00600e2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600e31: jmp 0x600e21 */ goto L_00600e21;
L_00600e33:; BB(0x00600e33);
    /* 00600e33: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600e35: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600e38: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600e3f: mov esp, ebp */ r_esp = r_ebp;
    /* 00600e41: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600e42: ret  */ FN_RET(0x00600db0); r_esp += 4; return;
}

void f_00600e44(void) /* sub_600E44 */
{
    FN_ENTER(0x00600e44);
    /* 00600e44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600e45: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00600e47: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600e4b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600e4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00600e51: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x600e56u); f_005e959c();
    /* 00600e56: mov dword ptr [ebp], 0xb1cb20 */ W32((u32)(r_ebp), 0xb1cb20u);
    /* 00600e5d: mov eax, ebp */ r_eax = r_ebp;
    /* 00600e5f: mov dword ptr [ebp + 0x248], 0x3f800000 */ W32((u32)(r_ebp+0x248u), 0x3f800000u);
    /* 00600e69: mov dword ptr [ebp + 0x244], 0x3f800000 */ W32((u32)(r_ebp+0x244u), 0x3f800000u);
    /* 00600e73: mov dword ptr [ebp + 0x240], 0x3f800000 */ W32((u32)(r_ebp+0x240u), 0x3f800000u);
    /* 00600e7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600e7e: ret 8 */ FN_RET(0x00600e44); r_esp += 12; return;
}

void f_00600e84(void) /* sub_600E84 */
{
    FN_ENTER(0x00600e84);
    /* 00600e84: mov dword ptr [0xa8e2cc], 0x3f800000 */ W32((u32)(0xa8e2ccu), 0x3f800000u);
    /* 00600e8e: mov dword ptr [0xa8e2d0], 0x41000000 */ W32((u32)(0xa8e2d0u), 0x41000000u);
    /* 00600e98: mov dword ptr [0xa8e2d4], 0x3fc00000 */ W32((u32)(0xa8e2d4u), 0x3fc00000u);
    /* 00600ea2: ret  */ FN_RET(0x00600e84); r_esp += 4; return;
}

void f_00600ea4(void) /* sub_600EA4 */
{
    FN_ENTER(0x00600ea4);
    /* 00600ea4: mov dword ptr [0xa8e2d8], 0x3f800000 */ W32((u32)(0xa8e2d8u), 0x3f800000u);
    /* 00600eae: mov dword ptr [0xa8e2dc], 0x41000000 */ W32((u32)(0xa8e2dcu), 0x41000000u);
    /* 00600eb8: mov dword ptr [0xa8e2e0], 0x3fc00000 */ W32((u32)(0xa8e2e0u), 0x3fc00000u);
    /* 00600ec2: ret  */ FN_RET(0x00600ea4); r_esp += 4; return;
}

void f_00600ec4(void) /* sub_600EC4 */
{
    FN_ENTER(0x00600ec4);
    /* 00600ec4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600ec5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600ec7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600ec9: call 0x600ee8 */ r_esp -= 4; W32(r_esp, 0x600eceu); f_00600ee8();
    /* 00600ece: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00600ed2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00600ed4: jne 0x600eda */ if (!fZ) goto L_00600eda;
L_00600ed6:; BB(0x00600ed6);
    /* 00600ed6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600ed7: ret 4 */ FN_RET(0x00600ec4); r_esp += 8; return;
L_00600eda:; BB(0x00600eda);
    /* 00600eda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600edb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x600ee0u); f_005c2f74();
    /* 00600ee0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00600ee1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00600ee2: ret 4 */ FN_RET(0x00600ec4); r_esp += 8; return;
}

void f_00600ee8(void) /* sub_600EE8 */
{
    FN_ENTER(0x00600ee8);
    /* 00600ee8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00600ee9: mov ebp, esp */ r_ebp = r_esp;
    /* 00600eeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00600eed: push 0x8dea8c */ { u32 v = 0x8dea8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00600ef2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00600ef8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600ef9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00600f00: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00600f03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00600f06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00600f09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00600f0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00600f0f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00600f12: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00600f15: mov dword ptr [ecx], 0xb1cc80 */ W32((u32)(r_ecx), 0xb1cc80u);
    /* 00600f1b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00600f22: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x600f27u); f_005e61c8();
    /* 00600f27: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00600f2a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00600f31: mov esp, ebp */ r_esp = r_ebp;
    /* 00600f33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00600f34: ret  */ FN_RET(0x00600ee8); r_esp += 4; return;
}

void f_00600f38(void) /* sub_600F38 */
{
    FN_ENTER(0x00600f38);
    /* 00600f38: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 00600f3f: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600f42: jne 0x600f50 */ if (!fZ) goto L_00600f50;
L_00600f44:; BB(0x00600f44);
    /* 00600f44: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 00600f4b: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600f4e: je 0x600f51 */ if (fZ) goto L_00600f51;
L_00600f50:; BB(0x00600f50);
    /* 00600f50: ret  */ FN_RET(0x00600f38); r_esp += 4; return;
L_00600f51:; BB(0x00600f51);
    /* 00600f51: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 00600f56: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00600f59: jne 0x600f50 */ if (!fZ) goto L_00600f50;
L_00600f5b:; BB(0x00600f5b);
    /* 00600f5b: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 00600f61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600f63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00600f65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00600f66: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x600f6bu); f_0082fa0c();
    /* 00600f6b: ret  */ FN_RET(0x00600f38); r_esp += 4; return;
}

void f_00600f6c(void) /* sub_600F6C */
{
    FN_ENTER(0x00600f6c);
    /* 00600f6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600f6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00600f6f: mov eax, dword ptr [ebx + 0x244] */ r_eax = R32((u32)(r_ebx+0x244u));
    /* 00600f75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f77: je 0x600f85 */ if (fZ) goto L_00600f85;
L_00600f79:; BB(0x00600f79);
    /* 00600f79: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 00600f80: jmp 0x601010 */ goto L_00601010;
L_00600f85:; BB(0x00600f85);
    /* 00600f85: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 00600f8c: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f8f: jne 0x601006 */ if (!fZ) goto L_00601006;
L_00600f91:; BB(0x00600f91);
    /* 00600f91: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 00600f98: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600f9b: jne 0x600fd0 */ if (!fZ) goto L_00600fd0;
L_00600f9d:; BB(0x00600f9d);
    /* 00600f9d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600f9f: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x600fa4u); f_005e7f6c();
    /* 00600fa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600fa6: je 0x600fb1 */ if (fZ) goto L_00600fb1;
L_00600fa8:; BB(0x00600fa8);
    /* 00600fa8: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 00600faf: jmp 0x601006 */ goto L_00601006;
L_00600fb1:; BB(0x00600fb1);
    /* 00600fb1: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 00600fb6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00600fb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600fb9: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600fbf: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x600fc4u); f_005cc64c();
    /* 00600fc4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600fc7: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 00600fce: jmp 0x601006 */ goto L_00601006;
L_00600fd0:; BB(0x00600fd0);
    /* 00600fd0: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600fd3: jne 0x601006 */ if (!fZ) goto L_00601006;
L_00600fd5:; BB(0x00600fd5);
    /* 00600fd5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00600fd7: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x600fdcu); f_005e7f6c();
    /* 00600fdc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00600fde: je 0x600fe9 */ if (fZ) goto L_00600fe9;
L_00600fe0:; BB(0x00600fe0);
    /* 00600fe0: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 00600fe7: jmp 0x601006 */ goto L_00601006;
L_00600fe9:; BB(0x00600fe9);
    /* 00600fe9: push 0x101 */ { u32 v = 0x101u; r_esp -= 4; W32(r_esp, v); }
    /* 00600fee: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00600ff0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00600ff1: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00600ff7: call 0x5cc64c */ r_esp -= 4; W32(r_esp, 0x600ffcu); f_005cc64c();
    /* 00600ffc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00600fff: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
L_00601006:; BB(0x00601006);
    /* 00601006: mov dword ptr [ebx + 0x244], 1 */ W32((u32)(r_ebx+0x244u), 0x1u);
L_00601010:; BB(0x00601010);
    /* 00601010: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00601013: jne 0x60103a */ if (!fZ) goto L_0060103a;
L_00601015:; BB(0x00601015);
    /* 00601015: movzx eax, byte ptr [ebx + 0xf4] */ r_eax = (u32)R8((u32)(r_ebx+0xf4u));
    /* 0060101c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0060101f: jne 0x60103a */ if (!fZ) goto L_0060103a;
L_00601021:; BB(0x00601021);
    /* 00601021: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00601026: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 0060102b: add ebx, 0x240 */ {  u32 a = r_ebx; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00601031: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00601032: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x601037u); f_005dd728();
    /* 00601037: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0060103a:; BB(0x0060103a);
    /* 0060103a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060103b: ret  */ FN_RET(0x00600f6c); r_esp += 4; return;
}

