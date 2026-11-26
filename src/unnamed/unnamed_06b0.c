#include "protos.h"

void f_006b004b(void)
{
    FN_ENTER(0x006b004b);
    /* 006b004b: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 006b004c: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 006b004d: add byte ptr [ecx + 0x83c90], cl */ { u32 ad = (u32)(r_ecx+0x83c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0053: add byte ptr [ebx - 0x63347beb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb8415u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0059: add byte ptr [ecx + 0x85090], cl */ { u32 ad = (u32)(r_ecx+0x85090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b005f: add byte ptr [ebx - 0x63346feb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb9015u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0065: add byte ptr [ecx + 0x84c90], cl */ { u32 ad = (u32)(r_ecx+0x84c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b006b: add byte ptr [ebx - 0x56b517eb], cl */ { u32 ad = (u32)(r_ebx+0xa94ae815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0071: add byte ptr [ecx + 0x88090], cl */ { u32 ad = (u32)(r_ecx+0x88090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0077: add byte ptr [ecx + 0x87c90], cl */ { u32 ad = (u32)(r_ecx+0x87c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b007d: add byte ptr [ecx + 0xa94260], ah */ { u32 ad = (u32)(r_ecx+0xa94260u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0085: je 0x6b00f9 */ if (fZ) goto L_006b00f9;
L_006b0087:; BB(0x006b0087);
    /* 006b0087: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b008d: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0093: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b0099: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b009f: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b00a5: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b00ab: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b00b1: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b00b7: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b00bd: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b00c3: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b00c9: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b00cf: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b00d5: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b00db: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b00e1: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b00e7: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b00ed: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b00f3: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b00f9:; BB(0x006b00f9);
    /* 006b00f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006b004b); r_esp += 8; return;
}

void f_006b0061(void)
{
    FN_ENTER(0x006b0061);
    /* 006b0061: adc eax, 0x9ccb90 */ { u32 c = fC; u32 a = r_eax; u32 b = 0x9ccb90u; u32 r = (a + b + c) & 0xffffffffu; r_eax = r;  }
    /* 006b0066: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b006c: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b0072: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b0078: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
    /* 006b007e: mov eax, dword ptr [0xa94260] */ r_eax = R32((u32)(0xa94260u));
    /* 006b0083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0085: je 0x6b00f9 */ if (fZ) goto L_006b00f9;
L_006b0087:; BB(0x006b0087);
    /* 006b0087: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b008d: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0093: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b0099: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b009f: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b00a5: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b00ab: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b00b1: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b00b7: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b00bd: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b00c3: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b00c9: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b00cf: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b00d5: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b00db: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b00e1: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b00e7: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b00ed: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b00f3: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b00f9:; BB(0x006b00f9);
    /* 006b00f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006b0061); r_esp += 8; return;
}

void f_006b0063(void)
{
    FN_ENTER(0x006b0063);
    /* 006b0063: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 006b0064: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 006b0065: add byte ptr [ecx + 0x84c90], cl */ { u32 ad = (u32)(r_ecx+0x84c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b006b: add byte ptr [ebx - 0x56b517eb], cl */ { u32 ad = (u32)(r_ebx+0xa94ae815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0071: add byte ptr [ecx + 0x88090], cl */ { u32 ad = (u32)(r_ecx+0x88090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0077: add byte ptr [ecx + 0x87c90], cl */ { u32 ad = (u32)(r_ecx+0x87c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b007d: add byte ptr [ecx + 0xa94260], ah */ { u32 ad = (u32)(r_ecx+0xa94260u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0085: je 0x6b00f9 */ if (fZ) goto L_006b00f9;
L_006b0087:; BB(0x006b0087);
    /* 006b0087: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b008d: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0093: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b0099: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b009f: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b00a5: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b00ab: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b00b1: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b00b7: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b00bd: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b00c3: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b00c9: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b00cf: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b00d5: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b00db: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b00e1: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b00e7: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b00ed: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b00f3: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b00f9:; BB(0x006b00f9);
    /* 006b00f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006b0063); r_esp += 8; return;
}

void f_006b006a(void)
{
    FN_ENTER(0x006b006a);
    /* 006b006a: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b006c: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b0072: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b0078: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
    /* 006b007e: mov eax, dword ptr [0xa94260] */ r_eax = R32((u32)(0xa94260u));
    /* 006b0083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0085: je 0x6b00f9 */ if (fZ) goto L_006b00f9;
L_006b0087:; BB(0x006b0087);
    /* 006b0087: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b008d: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0093: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b0099: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b009f: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b00a5: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b00ab: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b00b1: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b00b7: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b00bd: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b00c3: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b00c9: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b00cf: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b00d5: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b00db: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b00e1: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b00e7: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b00ed: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b00f3: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b00f9:; BB(0x006b00f9);
    /* 006b00f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006b006a); r_esp += 8; return;
}

void f_006b006e(void)
{
    FN_ENTER(0x006b006e);
    /* 006b006e: call 0x896ba9bd */ r_esp -= 4; W32(r_esp, 0x6b0073u); f_896ba9bd();
    /* 006b0073: nop  */ ;
    /* 006b0074: or byte ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 006b0077: add byte ptr [ecx + 0x87c90], cl */ { u32 ad = (u32)(r_ecx+0x87c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b007d: add byte ptr [ecx + 0xa94260], ah */ { u32 ad = (u32)(r_ecx+0xa94260u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b0083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0085: je 0x6b00f9 */ if (fZ) goto L_006b00f9;
L_006b0087:; BB(0x006b0087);
    /* 006b0087: mov edx, dword ptr [0x9ccb78] */ r_edx = R32((u32)(0x9ccb78u));
    /* 006b008d: mov ecx, dword ptr [0x9ccb88] */ r_ecx = R32((u32)(0x9ccb88u));
    /* 006b0093: mov dword ptr [eax + 0x870], edx */ W32((u32)(r_eax+0x870u), r_edx);
    /* 006b0099: mov edx, dword ptr [0x9ccb7c] */ r_edx = R32((u32)(0x9ccb7cu));
    /* 006b009f: mov dword ptr [eax + 0x86c], ecx */ W32((u32)(r_eax+0x86cu), r_ecx);
    /* 006b00a5: mov dword ptr [eax + 0x860], edx */ W32((u32)(r_eax+0x860u), r_edx);
    /* 006b00ab: mov edx, dword ptr [0xa94aec] */ r_edx = R32((u32)(0xa94aecu));
    /* 006b00b1: mov dword ptr [eax + 0x85c], edx */ W32((u32)(r_eax+0x85cu), r_edx);
    /* 006b00b7: mov edx, dword ptr [0x9ccb80] */ r_edx = R32((u32)(0x9ccb80u));
    /* 006b00bd: mov dword ptr [eax + 0x840], edx */ W32((u32)(r_eax+0x840u), r_edx);
    /* 006b00c3: mov edx, dword ptr [0x9ccb8c] */ r_edx = R32((u32)(0x9ccb8cu));
    /* 006b00c9: mov dword ptr [eax + 0x83c], edx */ W32((u32)(r_eax+0x83cu), r_edx);
    /* 006b00cf: mov edx, dword ptr [0x9ccb84] */ r_edx = R32((u32)(0x9ccb84u));
    /* 006b00d5: mov dword ptr [eax + 0x850], edx */ W32((u32)(r_eax+0x850u), r_edx);
    /* 006b00db: mov edx, dword ptr [0x9ccb90] */ r_edx = R32((u32)(0x9ccb90u));
    /* 006b00e1: mov dword ptr [eax + 0x84c], edx */ W32((u32)(r_eax+0x84cu), r_edx);
    /* 006b00e7: mov edx, dword ptr [0xa94ae8] */ r_edx = R32((u32)(0xa94ae8u));
    /* 006b00ed: mov dword ptr [eax + 0x880], edx */ W32((u32)(r_eax+0x880u), r_edx);
    /* 006b00f3: mov dword ptr [eax + 0x87c], edx */ W32((u32)(r_eax+0x87cu), r_edx);
L_006b00f9:; BB(0x006b00f9);
    /* 006b00f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006b006e); r_esp += 8; return;
}

void f_006b0096(void)
{
    FN_ENTER(0x006b0096);
    /* 006b0096: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 006b0098: add byte ptr [ebx - 0x633483eb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb7c15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b009e: add byte ptr [ecx + 0x86c88], cl */ { u32 ad = (u32)(r_ecx+0x86c88u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00a4: add byte ptr [ecx + 0x86090], cl */ { u32 ad = (u32)(r_ecx+0x86090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00aa: add byte ptr [ebx - 0x56b513eb], cl */ { u32 ad = (u32)(r_ebx+0xa94aec15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00b0: add byte ptr [ecx + 0x85c90], cl */ { u32 ad = (u32)(r_ecx+0x85c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00b6: add byte ptr [ebx - 0x63347feb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb8015u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00bc: add byte ptr [ecx + 0x84090], cl */ { u32 ad = (u32)(r_ecx+0x84090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00c2: add byte ptr [ebx - 0x633473eb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb8c15u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00c8: add byte ptr [ecx + 0x83c90], cl */ { u32 ad = (u32)(r_ecx+0x83c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00ce: add byte ptr [ebx - 0x63347beb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb8415u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00d4: add byte ptr [ecx + 0x85090], cl */ { u32 ad = (u32)(r_ecx+0x85090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00da: add byte ptr [ebx - 0x63346feb], cl */ { u32 ad = (u32)(r_ebx+0x9ccb9015u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00e0: add byte ptr [ecx + 0x84c90], cl */ { u32 ad = (u32)(r_ecx+0x84c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00e6: add byte ptr [ebx - 0x56b517eb], cl */ { u32 ad = (u32)(r_ebx+0xa94ae815u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00ec: add byte ptr [ecx + 0x88090], cl */ { u32 ad = (u32)(r_ecx+0x88090u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00f2: add byte ptr [ecx + 0x87c90], cl */ { u32 ad = (u32)(r_ecx+0x87c90u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00f8: add byte ptr [edx + 1], ch */ { u32 ad = (u32)(r_edx+0x1u);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006b00fb: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0100: call 0x6a8d68 */ r_esp -= 4; W32(r_esp, 0x6b0105u); f_006a8d68();
    /* 006b0105: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b010b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0110u); f_0068d5a8();
    /* 006b0110: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0113: je 0x6b011a */ if (fZ) goto L_006b011a;
L_006b0115:; BB(0x006b0115);
    /* 006b0115: call 0x690674 */ r_esp -= 4; W32(r_esp, 0x6b011au); f_00690674();
L_006b011a:; BB(0x006b011a);
    /* 006b011a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b011d: ret 4 */ FN_RET(0x006b0096); r_esp += 8; return;
}

void f_006b0194(void) /* sub_6B0194 */
{
    FN_ENTER(0x006b0194);
    /* 006b0194: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b0197: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 006b019b: mov byte ptr [esp], 0xcf */ W8((u32)(r_esp), 0xcfu);
    /* 006b019f: mov byte ptr [esp + 1], 0xd */ W8((u32)(r_esp+0x1u), 0xdu);
    /* 006b01a4: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006b01a6: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006b01aa: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 006b01ad: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b01b1: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006b01b4: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006b01b8: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 006b01bb: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006b01bf: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006b01c2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006b01c6: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006b01c9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006b01cd: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006b01d0: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006b01d4: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006b01d7: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006b01db: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006b01de: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006b01e2: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006b01e5: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006b01e9: mov eax, dword ptr [eax + 0x28] */ r_eax = R32((u32)(r_eax+0x28u));
    /* 006b01ec: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006b01f0: call 0x5cb9f8 */ r_esp -= 4; W32(r_esp, 0x6b01f5u); f_005cb9f8();
    /* 006b01f5: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006b01f9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b01fc: call 0x8004fc */ r_esp -= 4; W32(r_esp, 0x6b0201u); f_008004fc();
    /* 006b0201: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b0204: ret 4 */ FN_RET(0x006b0194); r_esp += 8; return;
}

void f_006b0208(void) /* sub_6B0208 */
{
    FN_ENTER(0x006b0208);
    /* 006b0208: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b0209: mov ebp, esp */ r_ebp = r_esp;
    /* 006b020b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b020d: push 0x8ebd7e */ { u32 v = 0x8ebd7eu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0212: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b0218: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b0219: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b0220: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b0223: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b0226: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006b0229: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006b022c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006b022f: mov dword ptr [0xa94b28], 0 */ W32((u32)(0xa94b28u), 0x0u);
    /* 006b0239: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6b023eu); f_006dc358();
    /* 006b023e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0241: je 0x6b02d6 */ if (fZ) goto L_006b02d6;
L_006b0247:; BB(0x006b0247);
    /* 006b0247: mov eax, 0x1e */ r_eax = 0x1eu;
L_006b024c:; BB(0x006b024c);
    /* 006b024c: mov dword ptr [0xa94b24], eax */ W32((u32)(0xa94b24u), r_eax);
    /* 006b0251: push 0x3ba4 */ { u32 v = 0x3ba4u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0256: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6b025bu); f_008581c5();
    /* 006b025b: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b025e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0261: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006b0264: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0266: je 0x6b02cf */ if (fZ) goto L_006b02cf;
L_006b0268:; BB(0x006b0268);
    /* 006b0268: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b026f: push 0x685724 */ { u32 v = 0x685724u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0274: push 0x6855dc */ { u32 v = 0x6855dcu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0279: mov edx, eax */ r_edx = r_eax;
    /* 006b027b: mov eax, 0xc */ r_eax = 0xcu;
    /* 006b0280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b0281: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006b0283: push 0x4f8 */ { u32 v = 0x4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0288: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b028b: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006b028e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b028f: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x6b0294u); f_00858736();
L_006b0294:; BB(0x006b0294);
    /* 006b0294: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b0297: mov dword ptr [0xa94af0], eax */ W32((u32)(0xa94af0u), r_eax);
    /* 006b029c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b02a3: call 0x6b0a28 */ r_esp -= 4; W32(r_esp, 0x6b02a8u); f_006b0a28();
    /* 006b02a8: call 0x6b02e0 */ r_esp -= 4; W32(r_esp, 0x6b02adu); f_006b02e0();
    /* 006b02ad: mov dword ptr [0xa94ad4], 1 */ W32((u32)(0xa94ad4u), 0x1u);
    /* 006b02b7: mov dword ptr [0xa9488c], 0 */ W32((u32)(0xa9488cu), 0x0u);
    /* 006b02c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b02c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b02cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006b02cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b02ce: ret  */ FN_RET(0x006b0208); r_esp += 4; return;
L_006b02cf:; BB(0x006b02cf);
    /* 006b02cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b02d1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b02d4: jmp 0x6b0294 */ goto L_006b0294;
L_006b02d6:; BB(0x006b02d6);
    /* 006b02d6: mov eax, 0x19 */ r_eax = 0x19u;
    /* 006b02db: jmp 0x6b024c */ goto L_006b024c;
}

void f_006b02e0(void) /* sub_6B02E0 */
{
    FN_ENTER(0x006b02e0);
    /* 006b02e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b02e2: mov byte ptr [0xa94b14], al */ W8((u32)(0xa94b14u), (u8)r_eax);
    /* 006b02e7: mov byte ptr [0xa94b15], al */ W8((u32)(0xa94b15u), (u8)r_eax);
    /* 006b02ec: mov byte ptr [0xa94b16], al */ W8((u32)(0xa94b16u), (u8)r_eax);
    /* 006b02f1: mov byte ptr [0xa94b17], al */ W8((u32)(0xa94b17u), (u8)r_eax);
    /* 006b02f6: ret  */ FN_RET(0x006b02e0); r_esp += 4; return;
}

void f_006b02f8(void) /* sub_6B02F8 */
{
    FN_ENTER(0x006b02f8);
    /* 006b02f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b02f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b02fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b02fb: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b02fe: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006b0300: mov eax, dword ptr [0xa94b2c] */ r_eax = R32((u32)(0xa94b2cu));
    /* 006b0305: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006b0308: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b030a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b030c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006b030f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b0311: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b0313: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b0315: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006b0317: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 006b031a: call 0x717de4 */ r_esp -= 4; W32(r_esp, 0x6b031fu); f_00717de4();
    /* 006b031f: push dword ptr [ebp + 0x38] */ { u32 v = R32((u32)(r_ebp+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b0322: call 0x717e28 */ r_esp -= 4; W32(r_esp, 0x6b0327u); f_00717e28();
    /* 006b0327: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0328: call 0x62f7e4 */ r_esp -= 4; W32(r_esp, 0x6b032du); f_0062f7e4();
    /* 006b032d: mov ecx, dword ptr [0xa95df8] */ r_ecx = R32((u32)(0xa95df8u));
    /* 006b0333: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b0338: movzx edx, word ptr [ecx + 0x27c8] */ r_edx = (u32)R16((u32)(r_ecx+0x27c8u));
    /* 006b033f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b0342: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b0348: jl 0x6b034c */ if ((fS!=fO)) goto L_006b034c;
L_006b034a:; BB(0x006b034a);
    /* 006b034a: mov edx, eax */ r_edx = r_eax;
L_006b034c:; BB(0x006b034c);
    /* 006b034c: mov word ptr [ecx + 0x27c8], dx */ W16((u32)(r_ecx+0x27c8u), (u16)r_edx);
    /* 006b0353: call 0x6a758c */ r_esp -= 4; W32(r_esp, 0x6b0358u); f_006a758c();
    /* 006b0358: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 006b035d: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0363: jne 0x6b0372 */ if (!fZ) goto L_006b0372;
L_006b0365:; BB(0x006b0365);
    /* 006b0365: push dword ptr [0xa94b2c] */ { u32 v = R32((u32)(0xa94b2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b036b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b036d: call 0x6b0194 */ r_esp -= 4; W32(r_esp, 0x6b0372u); f_006b0194();
L_006b0372:; BB(0x006b0372);
    /* 006b0372: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0374: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006b0376: call 0x6afd1c */ r_esp -= 4; W32(r_esp, 0x6b037bu); f_006afd1c();
    /* 006b037b: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006b0382: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b0383: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0388u); f_0068d5a8();
    /* 006b0388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0389: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b038b: je 0x6b0396 */ if (fZ) goto L_006b0396;
L_006b038d:; BB(0x006b038d);
    /* 006b038d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b038f: mov ecx, eax */ r_ecx = r_eax;
    /* 006b0391: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6b0396u); f_006854a8();
L_006b0396:; BB(0x006b0396);
    /* 006b0396: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b039c: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x6b03a1u); f_00718078();
    /* 006b03a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b03a2: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6b03a7u); f_00717d68();
    /* 006b03a7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b03ad: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x6b03b2u); f_00717f08();
    /* 006b03b2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b03b8: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b03bdu); f_0068d5a8();
    /* 006b03bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b03c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b03c2: je 0x6b043e */ if (fZ) goto L_006b043e;
L_006b03c4:; BB(0x006b03c4);
    /* 006b03c4: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006b03c7: mov dword ptr [eax + 0x864], 0 */ W32((u32)(r_eax+0x864u), 0x0u);
    /* 006b03d1: or edx, 0x20000 */ {  u32 a = r_edx; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006b03d7: mov dword ptr [eax + 0x868], 0 */ W32((u32)(r_eax+0x868u), 0x0u);
    /* 006b03e1: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 006b03e4: mov dword ptr [eax + 0x854], 0 */ W32((u32)(r_eax+0x854u), 0x0u);
    /* 006b03ee: mov dword ptr [eax + 0x858], 0 */ W32((u32)(r_eax+0x858u), 0x0u);
    /* 006b03f8: mov dword ptr [eax + 0x834], 0 */ W32((u32)(r_eax+0x834u), 0x0u);
    /* 006b0402: mov dword ptr [eax + 0x838], 0 */ W32((u32)(r_eax+0x838u), 0x0u);
    /* 006b040c: mov dword ptr [eax + 0x844], 0 */ W32((u32)(r_eax+0x844u), 0x0u);
    /* 006b0416: mov dword ptr [eax + 0x848], 0 */ W32((u32)(r_eax+0x848u), 0x0u);
    /* 006b0420: mov dword ptr [eax + 0x874], 0 */ W32((u32)(r_eax+0x874u), 0x0u);
    /* 006b042a: mov dword ptr [eax + 0x878], 0 */ W32((u32)(r_eax+0x878u), 0x0u);
    /* 006b0434: mov dword ptr [eax + 0x898], 0 */ W32((u32)(r_eax+0x898u), 0x0u);
L_006b043e:; BB(0x006b043e);
    /* 006b043e: mov dword ptr [ebp + 0x58], 0x5a */ W32((u32)(r_ebp+0x58u), 0x5au);
    /* 006b0445: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 006b044a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b044c: mov word ptr [0xa94af4], ax */ W16((u32)(0xa94af4u), (u16)r_eax);
    /* 006b0452: mov word ptr [0xa94af6], dx */ W16((u32)(0xa94af6u), (u16)r_edx);
    /* 006b0459: mov dword ptr [0xa94af8], edx */ W32((u32)(0xa94af8u), r_edx);
    /* 006b045f: mov word ptr [0xa94afc], ax */ W16((u32)(0xa94afcu), (u16)r_eax);
    /* 006b0465: mov word ptr [0xa94afe], dx */ W16((u32)(0xa94afeu), (u16)r_edx);
    /* 006b046c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 006b046e: mov dword ptr [0xa94b00], edx */ W32((u32)(0xa94b00u), r_edx);
    /* 006b0474: mov word ptr [0xa94b04], ax */ W16((u32)(0xa94b04u), (u16)r_eax);
    /* 006b047a: mov word ptr [0xa94b06], dx */ W16((u32)(0xa94b06u), (u16)r_edx);
    /* 006b0481: mov dword ptr [0xa94b08], edx */ W32((u32)(0xa94b08u), r_edx);
    /* 006b0487: mov word ptr [0xa94b0c], ax */ W16((u32)(0xa94b0cu), (u16)r_eax);
    /* 006b048d: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006b0492: mov word ptr [0xa94b0e], dx */ W16((u32)(0xa94b0eu), (u16)r_edx);
    /* 006b0499: mov dword ptr [0xa94b10], edx */ W32((u32)(0xa94b10u), r_edx);
    /* 006b049f: call 0x6a8f2c */ r_esp -= 4; W32(r_esp, 0x6b04a4u); f_006a8f2c();
    /* 006b04a4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b04a7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b04aa: je 0x6b0624 */ if (fZ) goto L_006b0624;
L_006b04b0:; BB(0x006b04b0);
    /* 006b04b0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b04b2: mov edi, eax */ r_edi = r_eax;
L_006b04b4:; BB(0x006b04b4);
    /* 006b04b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b04b5: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b04bau); f_0068d5a8();
    /* 006b04ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b04bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b04bd: je 0x6b04db */ if (fZ) goto L_006b04db;
L_006b04bf:; BB(0x006b04bf);
    /* 006b04bf: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b04c3: mov word ptr [ebp*8 + 0xa94af4], dx */ W16((u32)(r_ebp*8+0xa94af4u), (u16)r_edx);
    /* 006b04cb: mov ecx, dword ptr [eax + 0x898] */ r_ecx = R32((u32)(r_eax+0x898u));
    /* 006b04d1: mov dword ptr [ebp*8 + 0xa94af8], ecx */ W32((u32)(r_ebp*8+0xa94af8u), r_ecx);
    /* 006b04d8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006b04db:; BB(0x006b04db);
    /* 006b04db: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b04de: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b04e1: jl 0x6b04b4 */ if ((fS!=fO)) goto L_006b04b4;
L_006b04e3:; BB(0x006b04e3);
    /* 006b04e3: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b04e6: jle 0x6b05ff */ if ((fZ||fS!=fO)) goto L_006b05ff;
L_006b04ec:; BB(0x006b04ec);
    /* 006b04ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b04ee: lea edx, [ebp - 1] */ r_edx = (u32)(r_ebp+0xffffffffu);
    /* 006b04f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b04f3: jle 0x6b05c3 */ if ((fZ||fS!=fO)) goto L_006b05c3;
L_006b04f9:; BB(0x006b04f9);
    /* 006b04f9: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
L_006b04fd:; BB(0x006b04fd);
    /* 006b04fd: movzx ecx, word ptr [eax*8 + 0xa94af4] */ r_ecx = (u32)R16((u32)(r_eax*8+0xa94af4u));
    /* 006b0505: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b050b: je 0x6b061f */ if (fZ) goto L_006b061f;
L_006b0511:; BB(0x006b0511);
    /* 006b0511: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 006b0514: mov ebx, esi */ r_ebx = r_esi;
    /* 006b0516: cmp esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b0518: jge 0x6b05b5 */ if ((fS==fO)) goto L_006b05b5;
L_006b051e:; BB(0x006b051e);
    /* 006b051e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 006b0522: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006b0526: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 006b052a: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 006b052d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b052f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_006b0531:; BB(0x006b0531);
    /* 006b0531: movzx edi, word ptr [ebx*8 + 0xa94af4] */ r_edi = (u32)R16((u32)(r_ebx*8+0xa94af4u));
    /* 006b0539: cmp edi, 0xffff */ {  u32 a = r_edi; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b053f: je 0x6b059b */ if (fZ) goto L_006b059b;
L_006b0541:; BB(0x006b0541);
    /* 006b0541: mov esi, dword ptr [eax*8 + 0xa94af8] */ r_esi = R32((u32)(r_eax*8+0xa94af8u));
    /* 006b0548: cmp esi, dword ptr [ecx + 0xa94af8] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ecx+0xa94af8u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b054e: jge 0x6b059b */ if ((fS==fO)) goto L_006b059b;
L_006b0550:; BB(0x006b0550);
    /* 006b0550: movzx edx, word ptr [eax*8 + 0xa94af4] */ r_edx = (u32)R16((u32)(r_eax*8+0xa94af4u));
    /* 006b0558: movzx ebp, word ptr [eax*8 + 0xa94af6] */ r_ebp = (u32)R16((u32)(r_eax*8+0xa94af6u));
    /* 006b0560: mov word ptr [eax*8 + 0xa94af4], di */ W16((u32)(r_eax*8+0xa94af4u), (u16)r_edi);
    /* 006b0568: movzx edi, word ptr [ecx + 0xa94af6] */ r_edi = (u32)R16((u32)(r_ecx+0xa94af6u));
    /* 006b056f: mov word ptr [eax*8 + 0xa94af6], di */ W16((u32)(r_eax*8+0xa94af6u), (u16)r_edi);
    /* 006b0577: mov edi, dword ptr [ebx*8 + 0xa94af8] */ r_edi = R32((u32)(r_ebx*8+0xa94af8u));
    /* 006b057e: mov dword ptr [eax*8 + 0xa94af8], edi */ W32((u32)(r_eax*8+0xa94af8u), r_edi);
    /* 006b0585: mov word ptr [ebx*8 + 0xa94af4], dx */ W16((u32)(r_ebx*8+0xa94af4u), (u16)r_edx);
    /* 006b058d: mov word ptr [ecx + 0xa94af6], bp */ W16((u32)(r_ecx+0xa94af6u), (u16)r_ebp);
    /* 006b0594: mov dword ptr [ebx*8 + 0xa94af8], esi */ W32((u32)(r_ebx*8+0xa94af8u), r_esi);
L_006b059b:; BB(0x006b059b);
    /* 006b059b: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006b059f: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b05a2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b05a5: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b05a7: jl 0x6b0531 */ if ((fS!=fO)) goto L_006b0531;
L_006b05a9:; BB(0x006b05a9);
    /* 006b05a9: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 006b05ad: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006b05b1: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
L_006b05b5:; BB(0x006b05b5);
    /* 006b05b5: mov eax, esi */ r_eax = r_esi;
    /* 006b05b7: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b05b9: jl 0x6b04fd */ if ((fS!=fO)) goto L_006b04fd;
L_006b05bf:; BB(0x006b05bf);
    /* 006b05bf: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
L_006b05c3:; BB(0x006b05c3);
    /* 006b05c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b05c5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b05c7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b05c9: jle 0x6b05ff */ if ((fZ||fS!=fO)) goto L_006b05ff;
L_006b05cb:; BB(0x006b05cb);
    /* 006b05cb: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 006b05ce: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 006b05d1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b05d3: mov word ptr [edi + 0xa94af6], cx */ W16((u32)(r_edi+0xa94af6u), (u16)r_ecx);
    /* 006b05da: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b05dc: jge 0x6b05f8 */ if ((fS==fO)) goto L_006b05f8;
L_006b05de:; BB(0x006b05de);
    /* 006b05de: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 006b05e1: mov edi, dword ptr [edi*4 + 0xa94af8] */ r_edi = R32((u32)(r_edi*4+0xa94af8u));
    /* 006b05e8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b05eb: cmp edi, dword ptr [esi*4 + 0xa94b00] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi*4+0xa94b00u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b05f2: je 0x6b05fb */ if (fZ) goto L_006b05fb;
L_006b05f4:; BB(0x006b05f4);
    /* 006b05f4: mov ecx, eax */ r_ecx = r_eax;
    /* 006b05f6: jmp 0x6b05fb */ goto L_006b05fb;
L_006b05f8:; BB(0x006b05f8);
    /* 006b05f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_006b05fb:; BB(0x006b05fb);
    /* 006b05fb: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b05fd: jl 0x6b05cb */ if ((fS!=fO)) goto L_006b05cb;
L_006b05ff:; BB(0x006b05ff);
    /* 006b05ff: mov eax, 1 */ r_eax = 0x1u;
    /* 006b0604: mov dword ptr [0xa94aa0], eax */ W32((u32)(0xa94aa0u), r_eax);
    /* 006b0609: mov dword ptr [0xa94aa4], eax */ W32((u32)(0xa94aa4u), r_eax);
    /* 006b060e: mov dword ptr [0xa94aa8], eax */ W32((u32)(0xa94aa8u), r_eax);
    /* 006b0613: mov dword ptr [0xa94aac], eax */ W32((u32)(0xa94aacu), r_eax);
    /* 006b0618: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b061b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b061c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b061d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b061e: ret  */ FN_RET(0x006b02f8); r_esp += 4; return;
L_006b061f:; BB(0x006b061f);
    /* 006b061f: lea esi, [eax + 1] */ r_esi = (u32)(r_eax+0x1u);
    /* 006b0622: jmp 0x6b05b5 */ goto L_006b05b5;
L_006b0624:; BB(0x006b0624);
    /* 006b0624: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b0626: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006b0629: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006b062d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b062f: mov edi, eax */ r_edi = r_eax;
L_006b0631:; BB(0x006b0631);
    /* 006b0631: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0632: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0637u); f_0068d5a8();
    /* 006b0637: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b063a: je 0x6b0655 */ if (fZ) goto L_006b0655;
L_006b063c:; BB(0x006b063c);
    /* 006b063c: mov edx, dword ptr [eax + 0x900] */ r_edx = R32((u32)(r_eax+0x900u));
    /* 006b0642: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0645: je 0x6b06a2 */ if (fZ) goto L_006b06a2;
L_006b0647:; BB(0x006b0647);
    /* 006b0647: mov ecx, 1 */ r_ecx = 0x1u;
L_006b064c:; BB(0x006b064c);
    /* 006b064c: mov edx, dword ptr [eax + 0x898] */ r_edx = R32((u32)(r_eax+0x898u));
    /* 006b0652: add dword ptr [esp + ecx*4], edx */ { u32 ad = (u32)(r_esp+r_ecx*4);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006b0655:; BB(0x006b0655);
    /* 006b0655: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b0658: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b065b: jl 0x6b0631 */ if ((fS!=fO)) goto L_006b0631;
L_006b065d:; BB(0x006b065d);
    /* 006b065d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b065f: mov edi, eax */ r_edi = r_eax;
L_006b0661:; BB(0x006b0661);
    /* 006b0661: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0662: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b0667u); f_0068d5a8();
    /* 006b0667: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0668: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b066a: je 0x6b0695 */ if (fZ) goto L_006b0695;
L_006b066c:; BB(0x006b066c);
    /* 006b066c: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006b0670: mov word ptr [ebp*8 + 0xa94af4], dx */ W16((u32)(r_ebp*8+0xa94af4u), (u16)r_edx);
    /* 006b0678: mov ecx, dword ptr [eax + 0x900] */ r_ecx = R32((u32)(r_eax+0x900u));
    /* 006b067e: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0681: je 0x6b06a6 */ if (fZ) goto L_006b06a6;
L_006b0683:; BB(0x006b0683);
    /* 006b0683: mov edx, 1 */ r_edx = 0x1u;
L_006b0688:; BB(0x006b0688);
    /* 006b0688: mov edx, dword ptr [esp + edx*4] */ r_edx = R32((u32)(r_esp+r_edx*4));
    /* 006b068b: mov dword ptr [ebp*8 + 0xa94af8], edx */ W32((u32)(r_ebp*8+0xa94af8u), r_edx);
    /* 006b0692: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_006b0695:; BB(0x006b0695);
    /* 006b0695: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b0698: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b069b: jl 0x6b0661 */ if ((fS!=fO)) goto L_006b0661;
L_006b069d:; BB(0x006b069d);
    /* 006b069d: jmp 0x6b04ec */ goto L_006b04ec;
L_006b06a2:; BB(0x006b06a2);
    /* 006b06a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006b06a4: jmp 0x6b064c */ goto L_006b064c;
L_006b06a6:; BB(0x006b06a6);
    /* 006b06a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006b06a8: jmp 0x6b0688 */ goto L_006b0688;
}

void f_006b06ac(void) /* sub_6B06AC */
{
    FN_ENTER(0x006b06ac);
    /* 006b06ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b06ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006b06af: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006b06b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b06b4: jne 0x6b06c4 */ if (!fZ) goto L_006b06c4;
L_006b06b6:; BB(0x006b06b6);
    /* 006b06b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b06b8: call 0x6b02f8 */ r_esp -= 4; W32(r_esp, 0x6b06bdu); f_006b02f8();
    /* 006b06bd: mov dword ptr [ebx + 0x24], 1 */ W32((u32)(r_ebx+0x24u), 0x1u);
L_006b06c4:; BB(0x006b06c4);
    /* 006b06c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b06c5: ret  */ FN_RET(0x006b06ac); r_esp += 4; return;
}

void f_006b06c8(void) /* sub_6B06C8 */
{
    FN_ENTER(0x006b06c8);
    /* 006b06c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b06c9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006b06cb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b06cd: call 0x6b06ec */ r_esp -= 4; W32(r_esp, 0x6b06d2u); f_006b06ec();
    /* 006b06d2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b06d6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b06d8: jne 0x6b06de */ if (!fZ) goto L_006b06de;
L_006b06da:; BB(0x006b06da);
    /* 006b06da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b06db: ret 4 */ FN_RET(0x006b06c8); r_esp += 8; return;
L_006b06de:; BB(0x006b06de);
    /* 006b06de: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b06df: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6b06e4u); f_005c2f74();
    /* 006b06e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b06e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b06e6: ret 4 */ FN_RET(0x006b06c8); r_esp += 8; return;
}

void f_006b06ec(void) /* sub_6B06EC */
{
    FN_ENTER(0x006b06ec);
    /* 006b06ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b06ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006b06ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b06f1: push 0x8ebd98 */ { u32 v = 0x8ebd98u; r_esp -= 4; W32(r_esp, v); }
    /* 006b06f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b06fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b06fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b0704: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b0707: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b070a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b070d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b0710: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b0713: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006b0716: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b0719: mov dword ptr [ecx], 0xb3a888 */ W32((u32)(r_ecx), 0xb3a888u);
    /* 006b071f: mov dword ptr [0xa94b4c], 0 */ W32((u32)(0xa94b4cu), 0x0u);
    /* 006b0729: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b0730: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6b0735u); f_008171e8();
    /* 006b0735: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b0738: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b073f: mov esp, ebp */ r_esp = r_ebp;
    /* 006b0741: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b0742: ret  */ FN_RET(0x006b06ec); r_esp += 4; return;
}

void f_006b0744(void) /* sub_6B0744 */
{
    FN_ENTER(0x006b0744);
    /* 006b0744: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0745: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b0748: mov esi, ecx */ r_esi = r_ecx;
    /* 006b074a: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 006b074d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b0750: mov dword ptr [esi + 0x1c], eax */ W32((u32)(r_esi+0x1cu), r_eax);
    /* 006b0753: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b0755: jle 0x6b08a4 */ if ((fZ||fS!=fO)) goto L_006b08a4;
L_006b075b:; BB(0x006b075b);
    /* 006b075b: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b075e: jle 0x6b076d */ if ((fZ||fS!=fO)) goto L_006b076d;
L_006b0760:; BB(0x006b0760);
    /* 006b0760: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 006b0763: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b0766: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006b0769: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b076b: jle 0x6b0772 */ if ((fZ||fS!=fO)) goto L_006b0772;
L_006b076d:; BB(0x006b076d);
    /* 006b076d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b0770: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b0771: ret  */ FN_RET(0x006b0744); r_esp += 4; return;
L_006b0772:; BB(0x006b0772);
    /* 006b0772: fld dword ptr [0x9695e4] */ FPUSH(R_F32((u32)(0x9695e4u)));
    /* 006b0778: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b077c: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 006b0780: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b0782: mov ebx, eax */ r_ebx = r_eax;
L_006b0784:; BB(0x006b0784);
    /* 006b0784: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0785: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b078au); f_0068d5a8();
    /* 006b078a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b078b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b078d: je 0x6b07c4 */ if (fZ) goto L_006b07c4;
L_006b078f:; BB(0x006b078f);
    /* 006b078f: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 006b0792: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0794: je 0x6b07c4 */ if (fZ) goto L_006b07c4;
L_006b0796:; BB(0x006b0796);
    /* 006b0796: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006b0799: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b079f: jne 0x6b07c4 */ if (!fZ) goto L_006b07c4;
L_006b07a1:; BB(0x006b07a1);
    /* 006b07a1: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b07a4: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b07a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b07a8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b07a9: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x6b07aeu); f_0078ea50();
    /* 006b07ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b07b1: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006b07b5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006b07b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b07b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b07ba: jae 0x6b07c0 */ if (!fC) goto L_006b07c0;
L_006b07bc:; BB(0x006b07bc);
    /* 006b07bc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006b07be: jmp 0x6b07c4 */ goto L_006b07c4;
L_006b07c0:; BB(0x006b07c0);
    /* 006b07c0: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
L_006b07c4:; BB(0x006b07c4);
    /* 006b07c4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b07c7: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b07ca: jl 0x6b0784 */ if ((fS!=fO)) goto L_006b0784;
L_006b07cc:; BB(0x006b07cc);
    /* 006b07cc: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 006b07d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b07d1: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006b07d5: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b07d8: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x6b07ddu); f_0082dc9c();
    /* 006b07dd: fld dword ptr [0x9695cc] */ FPUSH(R_F32((u32)(0x9695ccu)));
    /* 006b07e3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b07e5: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 006b07e7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006b07e9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006b07ea: ja 0x6b07f8 */ if ((!fC&&!fZ)) goto L_006b07f8;
L_006b07ec:; BB(0x006b07ec);
    /* 006b07ec: fld dword ptr [0x9695e0] */ FPUSH(R_F32((u32)(0x9695e0u)));
    /* 006b07f2: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b07f6: jmp 0x6b0811 */ goto L_006b0811;
L_006b07f8:; BB(0x006b07f8);
    /* 006b07f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006b07fa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b07fb: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 006b07ff: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b0802: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x6b0807u); f_0082dc9c();
    /* 006b0807: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b080b: fld dword ptr [0x9695cc] */ FPUSH(R_F32((u32)(0x9695ccu)));
L_006b0811:; BB(0x006b0811);
    /* 006b0811: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006b0815: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006b0817: fmul dword ptr [0x9695d8] */ ST(0) = ST(0) * R_F32((u32)(0x9695d8u));
    /* 006b081d: fadd dword ptr [0x9695dc] */ ST(0) = ST(0) + R_F32((u32)(0x9695dcu));
    /* 006b0823: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b0825: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b0829: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b082a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b082b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b082c: push 0xb7 */ { u32 v = 0xb7u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0831: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6b0836u); f_00814298();
    /* 006b0836: mov ecx, eax */ r_ecx = r_eax;
    /* 006b0838: fld dword ptr [0x9695d4] */ FPUSH(R_F32((u32)(0x9695d4u)));
    /* 006b083e: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 006b0842: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 006b0846: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 006b084b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b0850: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006b0854: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 006b0858: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b085c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006b0860: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 006b0864: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0866: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0867: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0868: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x6b086du); f_00814664();
    /* 006b086d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0870: fld dword ptr [esp + 0x1c] */ FPUSH(R_F32((u32)(r_esp+0x1cu)));
    /* 006b0874: fmul dword ptr [0x9695d0] */ ST(0) = ST(0) * R_F32((u32)(0x9695d0u));
    /* 006b087a: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 006b087d: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 006b0881: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b0886: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b088a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006b088e: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b0892: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 006b0895: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006b0899: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b089c: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 006b089f: jmp 0x6b076d */ goto L_006b076d;
L_006b08a4:; BB(0x006b08a4);
    /* 006b08a4: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006b08a8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b08ad: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006b08b1: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b08b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b08b5: ret  */ FN_RET(0x006b0744); r_esp += 4; return;
}

void f_006b08b8(void) /* sub_6B08B8 */
{
    FN_ENTER(0x006b08b8);
    /* 006b08b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b08b9: mov ebp, esp */ r_ebp = r_esp;
    /* 006b08bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b08bd: push 0x8ebdc0 */ { u32 v = 0x8ebdc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b08c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b08c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b08c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b08d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b08d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b08d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b08d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b08dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b08df: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6b08e4u); f_00807ac0();
    /* 006b08e4: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b08e7: je 0x6b08fe */ if (fZ) goto L_006b08fe;
L_006b08e9:; BB(0x006b08e9);
    /* 006b08e9: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b08ec: je 0x6b08fe */ if (fZ) goto L_006b08fe;
L_006b08ee:; BB(0x006b08ee);
    /* 006b08ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b08f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b08f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b08fa: mov esp, ebp */ r_esp = r_ebp;
    /* 006b08fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b08fd: ret  */ FN_RET(0x006b08b8); r_esp += 4; return;
L_006b08fe:; BB(0x006b08fe);
    /* 006b08fe: mov eax, dword ptr [0xa94b4c] */ r_eax = R32((u32)(0xa94b4cu));
    /* 006b0903: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0905: je 0x6b0917 */ if (fZ) goto L_006b0917;
L_006b0907:; BB(0x006b0907);
    /* 006b0907: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0909: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b090c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b0913: mov esp, ebp */ r_esp = r_ebp;
    /* 006b0915: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b0916: ret  */ FN_RET(0x006b08b8); r_esp += 4; return;
L_006b0917:; BB(0x006b0917);
    /* 006b0917: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006b091e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0920: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b0925u); f_005caba4();
    /* 006b0925: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0926: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006b0929: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b092b: je 0x6b096b */ if (fZ) goto L_006b096b;
L_006b092d:; BB(0x006b092d);
    /* 006b092d: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006b0934: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b093b: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b0941: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b0944: call 0x6b0970 */ r_esp -= 4; W32(r_esp, 0x6b0949u); f_006b0970();
    /* 006b0949: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b094c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006b0953:; BB(0x006b0953);
    /* 006b0953: mov dword ptr [0xa94b4c], eax */ W32((u32)(0xa94b4cu), r_eax);
    /* 006b0958: mov eax, 1 */ r_eax = 0x1u;
    /* 006b095d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b0960: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b0967: mov esp, ebp */ r_esp = r_ebp;
    /* 006b0969: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b096a: ret  */ FN_RET(0x006b08b8); r_esp += 4; return;
L_006b096b:; BB(0x006b096b);
    /* 006b096b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b096d: jmp 0x6b0953 */ goto L_006b0953;
}

void f_006b0970(void) /* sub_6B0970 */
{
    FN_ENTER(0x006b0970);
    /* 006b0970: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b0971: mov ebp, esp */ r_ebp = r_esp;
    /* 006b0973: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0975: push 0x8ebddc */ { u32 v = 0x8ebddcu; r_esp -= 4; W32(r_esp, v); }
    /* 006b097a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b0980: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b0981: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b0988: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b098b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b098e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b0991: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b0994: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b0997: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b099a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006b099d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6b09a2u); f_008193cc();
    /* 006b09a2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b09a9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b09ac: mov dword ptr [eax], 0xb3a888 */ W32((u32)(r_eax), 0xb3a888u);
    /* 006b09b2: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b09b8: mov dword ptr [eax + 0x1c], 0x3de */ W32((u32)(r_eax+0x1cu), 0x3deu);
    /* 006b09bf: mov dword ptr [eax + 0x20], 0x1e */ W32((u32)(r_eax+0x20u), 0x1eu);
    /* 006b09c6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b09cbu); f_0068d5a8();
    /* 006b09cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b09cc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b09cf: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006b09d2: mov eax, edx */ r_eax = r_edx;
    /* 006b09d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b09d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b09de: mov esp, ebp */ r_esp = r_ebp;
    /* 006b09e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b09e1: ret 4 */ FN_RET(0x006b0970); r_esp += 8; return;
}

void f_006b09e4(void) /* sub_6B09E4 */
{
    FN_ENTER(0x006b09e4);
    /* 006b09e4: mov edx, dword ptr [0xa94b4c] */ r_edx = R32((u32)(0xa94b4cu));
    /* 006b09ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b09ec: je 0x6b0a05 */ if (fZ) goto L_006b0a05;
L_006b09ee:; BB(0x006b09ee);
    /* 006b09ee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b09f2: mov dword ptr [0xa94b4c], 0 */ W32((u32)(0xa94b4cu), 0x0u);
    /* 006b09fc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0a01: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b0a05:; BB(0x006b0a05);
    /* 006b0a05: ret  */ FN_RET(0x006b09e4); r_esp += 4; return;
}

void f_006b0a08(void) /* sub_6B0A08 */
{
    FN_ENTER(0x006b0a08);
    /* 006b0a08: mov dword ptr [0xa94b40], 0x3f800000 */ W32((u32)(0xa94b40u), 0x3f800000u);
    /* 006b0a12: mov dword ptr [0xa94b44], 0x41000000 */ W32((u32)(0xa94b44u), 0x41000000u);
    /* 006b0a1c: mov dword ptr [0xa94b48], 0x3fc00000 */ W32((u32)(0xa94b48u), 0x3fc00000u);
    /* 006b0a26: ret  */ FN_RET(0x006b0a08); r_esp += 4; return;
}

void f_006b0a28(void) /* sub_6B0A28 */
{
    FN_ENTER(0x006b0a28);
    /* 006b0a28: mov dword ptr [0xa94b4c], 0 */ W32((u32)(0xa94b4cu), 0x0u);
    /* 006b0a32: ret  */ FN_RET(0x006b0a28); r_esp += 4; return;
}

void f_006b0a34(void) /* sub_6B0A34 */
{
    FN_ENTER(0x006b0a34);
    /* 006b0a34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006b0a37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b0a39: call 0x6b0a58 */ r_esp -= 4; W32(r_esp, 0x6b0a3eu); f_006b0a58();
    /* 006b0a3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006b0a42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0a44: jne 0x6b0a4a */ if (!fZ) goto L_006b0a4a;
L_006b0a46:; BB(0x006b0a46);
    /* 006b0a46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b0a47: ret 4 */ FN_RET(0x006b0a34); r_esp += 8; return;
L_006b0a4a:; BB(0x006b0a4a);
    /* 006b0a4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6b0a50u); f_005c2f74();
    /* 006b0a50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0a51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b0a52: ret 4 */ FN_RET(0x006b0a34); r_esp += 8; return;
}

void f_006b0a58(void) /* sub_6B0A58 */
{
    FN_ENTER(0x006b0a58);
    /* 006b0a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a59: mov ebp, esp */ r_ebp = r_esp;
    /* 006b0a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a5d: push 0x8ebdf8 */ { u32 v = 0x8ebdf8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b0a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b0a69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b0a70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b0a73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b0a76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006b0a79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006b0a7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006b0a7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006b0a82: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b0a85: mov dword ptr [ecx], 0xb3a8c0 */ W32((u32)(r_ecx), 0xb3a8c0u);
    /* 006b0a8b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b0a8d: mov dword ptr [0xa94b60], eax */ W32((u32)(0xa94b60u), r_eax);
    /* 006b0a92: mov dword ptr [0xa94b5c], eax */ W32((u32)(0xa94b5cu), r_eax);
    /* 006b0a97: mov dword ptr [0xa94b58], eax */ W32((u32)(0xa94b58u), r_eax);
    /* 006b0a9c: mov dword ptr [0xa94b54], eax */ W32((u32)(0xa94b54u), r_eax);
    /* 006b0aa1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b0aa8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6b0aadu); f_008171e8();
    /* 006b0aad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b0ab0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b0ab7: mov esp, ebp */ r_esp = r_ebp;
    /* 006b0ab9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b0aba: ret  */ FN_RET(0x006b0a58); r_esp += 4; return;
}

void f_006b0abc(void) /* sub_6B0ABC */
{
    FN_ENTER(0x006b0abc);
    /* 006b0abc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0abd: mov edi, ecx */ r_edi = r_ecx;
    /* 006b0abf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b0ac3: mov ecx, edi */ r_ecx = r_edi;
    /* 006b0ac5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6b0acau); f_008193cc();
    /* 006b0aca: mov dword ptr [edi], 0xb3a8c0 */ W32((u32)(r_edi), 0xb3a8c0u);
    /* 006b0ad0: mov edx, dword ptr [0x9ccbe4] */ r_edx = R32((u32)(0x9ccbe4u));
    /* 006b0ad6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006b0ad9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0adb: mov dword ptr [0xa94b60], eax */ W32((u32)(0xa94b60u), r_eax);
    /* 006b0ae0: mov dword ptr [0xa94b5c], eax */ W32((u32)(0xa94b5cu), r_eax);
    /* 006b0ae5: mov dword ptr [0xa94b58], eax */ W32((u32)(0xa94b58u), r_eax);
    /* 006b0aea: mov eax, edi */ r_eax = r_edi;
    /* 006b0aec: mov dword ptr [0xa94b54], edi */ W32((u32)(0xa94b54u), r_edi);
    /* 006b0af2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b0af3: ret 4 */ FN_RET(0x006b0abc); r_esp += 8; return;
}

void f_006b0af8(void) /* sub_6B0AF8 */
{
    FN_ENTER(0x006b0af8);
    /* 006b0af8: mov eax, dword ptr [0xa94b60] */ r_eax = R32((u32)(0xa94b60u));
    /* 006b0afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0aff: jne 0x6b0b46 */ if (!fZ) goto L_006b0b46;
L_006b0b01:; BB(0x006b0b01);
    /* 006b0b01: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b0b06: push dword ptr [0xa95aa8] */ { u32 v = R32((u32)(0xa95aa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b0b0c: call 0x6bc260 */ r_esp -= 4; W32(r_esp, 0x6b0b11u); f_006bc260();
    /* 006b0b11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b0b14: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0b16: jne 0x6b0b21 */ if (!fZ) goto L_006b0b21;
L_006b0b18:; BB(0x006b0b18);
    /* 006b0b18: mov eax, dword ptr [0xa94b5c] */ r_eax = R32((u32)(0xa94b5cu));
    /* 006b0b1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0b1f: je 0x6b0b46 */ if (fZ) goto L_006b0b46;
L_006b0b21:; BB(0x006b0b21);
    /* 006b0b21: mov eax, dword ptr [0xa94b58] */ r_eax = R32((u32)(0xa94b58u));
    /* 006b0b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0b28: jle 0x6b0b46 */ if ((fZ||fS!=fO)) goto L_006b0b46;
L_006b0b2a:; BB(0x006b0b2a);
    /* 006b0b2a: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b0b2d: jg 0x6b0b46 */ if ((!fZ&&fS==fO)) goto L_006b0b46;
L_006b0b2f:; BB(0x006b0b2f);
    /* 006b0b2f: push dword ptr [eax*4 + 0x9ccb9c] */ { u32 v = R32((u32)(r_eax*4+0x9ccb9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b0b36: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x6b0b3bu); f_00814afc();
    /* 006b0b3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0b3c: mov dword ptr [0xa94b60], 1 */ W32((u32)(0xa94b60u), 0x1u);
L_006b0b46:; BB(0x006b0b46);
    /* 006b0b46: ret  */ FN_RET(0x006b0af8); r_esp += 4; return;
}

void f_006b0b48(void) /* sub_6B0B48 */
{
    FN_ENTER(0x006b0b48);
    /* 006b0b48: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b0b4c: mov ecx, dword ptr [0xa94b54] */ r_ecx = R32((u32)(0xa94b54u));
    /* 006b0b52: mov dword ptr [0xa94b58], eax */ W32((u32)(0xa94b58u), r_eax);
    /* 006b0b57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0b59: mov dword ptr [0xa94b60], 0 */ W32((u32)(0xa94b60u), 0x0u);
    /* 006b0b63: mov dword ptr [0xa94b5c], 1 */ W32((u32)(0xa94b5cu), 0x1u);
    /* 006b0b6d: je 0x6b0b74 */ if (fZ) goto L_006b0b74;
L_006b0b6f:; BB(0x006b0b6f);
    /* 006b0b6f: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b0b71: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x6b0b74u); call_ind(t); }
L_006b0b74:; BB(0x006b0b74);
    /* 006b0b74: ret  */ FN_RET(0x006b0b48); r_esp += 4; return;
}

void f_006b0b78(void) /* sub_6B0B78 */
{
    FN_ENTER(0x006b0b78);
    /* 006b0b78: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006b0b7c: mov dword ptr [0xa94b60], 0 */ W32((u32)(0xa94b60u), 0x0u);
    /* 006b0b86: mov dword ptr [0xa94b58], eax */ W32((u32)(0xa94b58u), r_eax);
    /* 006b0b8b: ret  */ FN_RET(0x006b0b78); r_esp += 4; return;
}

void f_006b0b8c(void) /* sub_6B0B8C */
{
    FN_ENTER(0x006b0b8c);
    /* 006b0b8c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006b0b90: call 0x688bc0 */ r_esp -= 4; W32(r_esp, 0x6b0b95u); f_00688bc0();
    /* 006b0b95: ret  */ FN_RET(0x006b0b8c); r_esp += 4; return;
}

void f_006b0b98(void) /* sub_6B0B98 */
{
    FN_ENTER(0x006b0b98);
    /* 006b0b98: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006b0b9c: call 0x688bac */ r_esp -= 4; W32(r_esp, 0x6b0ba1u); f_00688bac();
    /* 006b0ba1: ret  */ FN_RET(0x006b0b98); r_esp += 4; return;
}

void f_006b0ba4(void) /* sub_6B0BA4 */
{
    FN_ENTER(0x006b0ba4);
    /* 006b0ba4: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b0baa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0bac: je 0x6b0bbd */ if (fZ) goto L_006b0bbd;
L_006b0bae:; BB(0x006b0bae);
    /* 006b0bae: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b0bb3u); f_007127b0();
    /* 006b0bb3: mov dword ptr [0xa95480], 0 */ W32((u32)(0xa95480u), 0x0u);
L_006b0bbd:; BB(0x006b0bbd);
    /* 006b0bbd: mov ecx, dword ptr [0xa95484] */ r_ecx = R32((u32)(0xa95484u));
    /* 006b0bc3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0bc5: je 0x6b0bd6 */ if (fZ) goto L_006b0bd6;
L_006b0bc7:; BB(0x006b0bc7);
    /* 006b0bc7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b0bccu); f_007127b0();
    /* 006b0bcc: mov dword ptr [0xa95484], 0 */ W32((u32)(0xa95484u), 0x0u);
L_006b0bd6:; BB(0x006b0bd6);
    /* 006b0bd6: mov ecx, dword ptr [0xa95488] */ r_ecx = R32((u32)(0xa95488u));
    /* 006b0bdc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0bde: je 0x6b0bef */ if (fZ) goto L_006b0bef;
L_006b0be0:; BB(0x006b0be0);
    /* 006b0be0: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b0be5u); f_007127b0();
    /* 006b0be5: mov dword ptr [0xa95488], 0 */ W32((u32)(0xa95488u), 0x0u);
L_006b0bef:; BB(0x006b0bef);
    /* 006b0bef: mov edx, dword ptr [0xa9548c] */ r_edx = R32((u32)(0xa9548cu));
    /* 006b0bf5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0bf7: je 0x6b0c10 */ if (fZ) goto L_006b0c10;
L_006b0bf9:; BB(0x006b0bf9);
    /* 006b0bf9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b0bfd: mov dword ptr [0xa9548c], 0 */ W32((u32)(0xa9548cu), 0x0u);
    /* 006b0c07: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b0c0c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b0c10:; BB(0x006b0c10);
    /* 006b0c10: mov edx, dword ptr [0xa95490] */ r_edx = R32((u32)(0xa95490u));
    /* 006b0c16: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0c18: je 0x6b0c31 */ if (fZ) goto L_006b0c31;
L_006b0c1a:; BB(0x006b0c1a);
    /* 006b0c1a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b0c1e: mov dword ptr [0xa95490], 0 */ W32((u32)(0xa95490u), 0x0u);
    /* 006b0c28: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b0c2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b0c31:; BB(0x006b0c31);
    /* 006b0c31: mov edx, dword ptr [0xa95494] */ r_edx = R32((u32)(0xa95494u));
    /* 006b0c37: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0c39: je 0x6b0c52 */ if (fZ) goto L_006b0c52;
L_006b0c3b:; BB(0x006b0c3b);
    /* 006b0c3b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b0c3f: mov dword ptr [0xa95494], 0 */ W32((u32)(0xa95494u), 0x0u);
    /* 006b0c49: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b0c4e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b0c52:; BB(0x006b0c52);
    /* 006b0c52: mov edx, dword ptr [0xa95498] */ r_edx = R32((u32)(0xa95498u));
    /* 006b0c58: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0c5a: je 0x6b0c73 */ if (fZ) goto L_006b0c73;
L_006b0c5c:; BB(0x006b0c5c);
    /* 006b0c5c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b0c60: mov dword ptr [0xa95498], 0 */ W32((u32)(0xa95498u), 0x0u);
    /* 006b0c6a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b0c6f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b0c73:; BB(0x006b0c73);
    /* 006b0c73: mov edx, dword ptr [0xa9549c] */ r_edx = R32((u32)(0xa9549cu));
    /* 006b0c79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0c7b: je 0x6b0c94 */ if (fZ) goto L_006b0c94;
L_006b0c7d:; BB(0x006b0c7d);
    /* 006b0c7d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b0c81: mov dword ptr [0xa9549c], 0 */ W32((u32)(0xa9549cu), 0x0u);
    /* 006b0c8b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b0c90: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b0c94:; BB(0x006b0c94);
    /* 006b0c94: ret  */ FN_RET(0x006b0ba4); r_esp += 4; return;
}

void f_006b0c98(void) /* sub_6B0C98 */
{
    FN_ENTER(0x006b0c98);
    /* 006b0c98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0c99: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b0c9a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0c9b: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006b0c9f: mov eax, ebp */ r_eax = r_ebp;
    /* 006b0ca1: call 0x6b0d28 */ r_esp -= 4; W32(r_esp, 0x6b0ca6u); f_006b0d28();
    /* 006b0ca6: mov dword ptr [0xa954a0], 0 */ W32((u32)(0xa954a0u), 0x0u);
    /* 006b0cb0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006b0cb2:; BB(0x006b0cb2);
    /* 006b0cb2: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0cb4: jne 0x6b0d1b */ if (!fZ) goto L_006b0d1b;
L_006b0cb6:; BB(0x006b0cb6);
    /* 006b0cb6: mov eax, dword ptr [0xa954a4] */ r_eax = R32((u32)(0xa954a4u));
    /* 006b0cbb: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b0cc1: movzx edi, byte ptr [edx + eax] */ r_edi = (u32)R8((u32)(r_edx+r_eax));
    /* 006b0cc5: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 006b0cc8: cmp edi, 0xf8 */ {  u32 a = r_edi; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0cce: jne 0x6b0ce6 */ if (!fZ) goto L_006b0ce6;
L_006b0cd0:; BB(0x006b0cd0);
    /* 006b0cd0: movzx edi, byte ptr [edx + eax + 1] */ r_edi = (u32)R8((u32)(r_edx+r_eax+0x1u));
    /* 006b0cd5: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 006b0cd8: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
    /* 006b0cde: add edi, 0x100 */ {  u32 a = r_edi; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b0ce4: jmp 0x6b0d0a */ goto L_006b0d0a;
L_006b0ce6:; BB(0x006b0ce6);
    /* 006b0ce6: cmp edi, 0xf9 */ {  u32 a = r_edi; u32 b = 0xf9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b0cec: jne 0x6b0d04 */ if (!fZ) goto L_006b0d04;
L_006b0cee:; BB(0x006b0cee);
    /* 006b0cee: movzx edi, byte ptr [edx + eax + 1] */ r_edi = (u32)R8((u32)(r_edx+r_eax+0x1u));
    /* 006b0cf3: lea ecx, [eax + 2] */ r_ecx = (u32)(r_eax+0x2u);
    /* 006b0cf6: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
    /* 006b0cfc: add edi, 0x200 */ {  u32 a = r_edi; u32 b = 0x200u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006b0d02: jmp 0x6b0d0a */ goto L_006b0d0a;
L_006b0d04:; BB(0x006b0d04);
    /* 006b0d04: mov dword ptr [0xa954a4], ecx */ W32((u32)(0xa954a4u), r_ecx);
L_006b0d0a:; BB(0x006b0d0a);
    /* 006b0d0a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0d0b: call dword ptr [edi*8 + 0x9ccc00] */ { u32 t = R32((u32)(r_edi*8+0x9ccc00u)); r_esp -= 4; W32(r_esp, 0x6b0d12u); call_ind(t); }
    /* 006b0d12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0d13: mov edi, dword ptr [0xa954a0] */ r_edi = R32((u32)(0xa954a0u));
    /* 006b0d19: jmp 0x6b0cb2 */ goto L_006b0cb2;
L_006b0d1b:; BB(0x006b0d1b);
    /* 006b0d1b: mov eax, ebp */ r_eax = r_ebp;
    /* 006b0d1d: call 0x6b0e90 */ r_esp -= 4; W32(r_esp, 0x6b0d22u); f_006b0e90();
    /* 006b0d22: mov eax, edi */ r_eax = r_edi;
    /* 006b0d24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b0d25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b0d26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b0d27: ret  */ FN_RET(0x006b0c98); r_esp += 4; return;
}

void f_006b0d28(void) /* sub_6B0D28 */
{
    FN_ENTER(0x006b0d28);
    /* 006b0d28: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0d29: mov esi, eax */ r_esi = r_eax;
    /* 006b0d2b: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006b0d2d: mov ecx, 0xa954cc */ r_ecx = 0xa954ccu;
    /* 006b0d32: mov dword ptr [0xa954a8], edx */ W32((u32)(0xa954a8u), r_edx);
    /* 006b0d38: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006b0d3b: mov dword ptr [0xa954ac], edx */ W32((u32)(0xa954acu), r_edx);
    /* 006b0d41: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006b0d44: mov dword ptr [0xa954b0], edx */ W32((u32)(0xa954b0u), r_edx);
    /* 006b0d4a: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 006b0d4d: mov dword ptr [0xa95480], edx */ W32((u32)(0xa95480u), r_edx);
    /* 006b0d53: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006b0d56: mov dword ptr [0xa95488], edx */ W32((u32)(0xa95488u), r_edx);
    /* 006b0d5c: movzx edx, byte ptr [esi + 0x14] */ r_edx = (u32)R8((u32)(r_esi+0x14u));
    /* 006b0d60: mov byte ptr [0xa954b4], dl */ W8((u32)(0xa954b4u), (u8)r_edx);
    /* 006b0d66: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 006b0d69: mov dword ptr [0xa954b8], edx */ W32((u32)(0xa954b8u), r_edx);
    /* 006b0d6f: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 006b0d72: mov dword ptr [0xa954a4], edx */ W32((u32)(0xa954a4u), r_edx);
    /* 006b0d78: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 006b0d7b: mov dword ptr [0xa954bc], edx */ W32((u32)(0xa954bcu), r_edx);
    /* 006b0d81: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 006b0d84: mov dword ptr [0xa954c0], edx */ W32((u32)(0xa954c0u), r_edx);
    /* 006b0d8a: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 006b0d8d: mov dword ptr [0xa954c4], edx */ W32((u32)(0xa954c4u), r_edx);
    /* 006b0d93: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006b0d96: mov dword ptr [0xa954c8], edx */ W32((u32)(0xa954c8u), r_edx);
    /* 006b0d9c: lea edx, [esi + 0x34] */ r_edx = (u32)(r_esi+0x34u);
    /* 006b0d9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006b0da1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006b0da3: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006b0da6: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006b0da9: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006b0dac: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006b0daf: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006b0db2: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006b0db5: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 006b0db8: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006b0dbb: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006b0dbe: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006b0dc1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006b0dc4: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 006b0dc7: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 006b0dca: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006b0dcd: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0dd2: lea edx, [esi + 0x54] */ r_edx = (u32)(r_esi+0x54u);
    /* 006b0dd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0dd6: push 0xa95380 */ { u32 v = 0xa95380u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0ddb: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6b0de0u); f_0086b6b8();
    /* 006b0de0: movzx edx, byte ptr [esi + 0x154] */ r_edx = (u32)R8((u32)(r_esi+0x154u));
    /* 006b0de7: movzx ecx, byte ptr [esi + 0x155] */ r_ecx = (u32)R8((u32)(r_esi+0x155u));
    /* 006b0dee: movzx eax, word ptr [esi + 0x176] */ r_eax = (u32)R16((u32)(r_esi+0x176u));
    /* 006b0df5: mov byte ptr [0xa954ec], dl */ W8((u32)(0xa954ecu), (u8)r_edx);
    /* 006b0dfb: movzx edx, word ptr [esi + 0x156] */ r_edx = (u32)R16((u32)(r_esi+0x156u));
    /* 006b0e02: mov byte ptr [0xa954f0], cl */ W8((u32)(0xa954f0u), (u8)r_ecx);
    /* 006b0e08: mov word ptr [0xa954f4], dx */ W16((u32)(0xa954f4u), (u16)r_edx);
    /* 006b0e0f: movzx edx, word ptr [esi + 0x158] */ r_edx = (u32)R16((u32)(r_esi+0x158u));
    /* 006b0e16: mov word ptr [0xa954f8], dx */ W16((u32)(0xa954f8u), (u16)r_edx);
    /* 006b0e1d: mov edx, dword ptr [esi + 0x15c] */ r_edx = R32((u32)(r_esi+0x15cu));
    /* 006b0e23: mov dword ptr [0xa9548c], edx */ W32((u32)(0xa9548cu), r_edx);
    /* 006b0e29: mov edx, dword ptr [esi + 0x160] */ r_edx = R32((u32)(r_esi+0x160u));
    /* 006b0e2f: mov dword ptr [0xa95490], edx */ W32((u32)(0xa95490u), r_edx);
    /* 006b0e35: mov edx, dword ptr [esi + 0x164] */ r_edx = R32((u32)(r_esi+0x164u));
    /* 006b0e3b: mov dword ptr [0xa95494], edx */ W32((u32)(0xa95494u), r_edx);
    /* 006b0e41: mov edx, dword ptr [esi + 0x168] */ r_edx = R32((u32)(r_esi+0x168u));
    /* 006b0e47: mov dword ptr [0xa95498], edx */ W32((u32)(0xa95498u), r_edx);
    /* 006b0e4d: mov edx, dword ptr [esi + 0x16c] */ r_edx = R32((u32)(r_esi+0x16cu));
    /* 006b0e53: mov dword ptr [0xa9549c], edx */ W32((u32)(0xa9549cu), r_edx);
    /* 006b0e59: movzx edx, word ptr [esi + 0x170] */ r_edx = (u32)R16((u32)(r_esi+0x170u));
    /* 006b0e60: mov word ptr [0xa954fc], dx */ W16((u32)(0xa954fcu), (u16)r_edx);
    /* 006b0e67: movzx edx, word ptr [esi + 0x172] */ r_edx = (u32)R16((u32)(r_esi+0x172u));
    /* 006b0e6e: mov word ptr [0xa95500], dx */ W16((u32)(0xa95500u), (u16)r_edx);
    /* 006b0e75: movzx edx, word ptr [esi + 0x174] */ r_edx = (u32)R16((u32)(r_esi+0x174u));
    /* 006b0e7c: mov word ptr [0xa95504], dx */ W16((u32)(0xa95504u), (u16)r_edx);
    /* 006b0e83: mov word ptr [0xa95508], ax */ W16((u32)(0xa95508u), (u16)r_eax);
    /* 006b0e89: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b0e8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b0e8d: ret  */ FN_RET(0x006b0d28); r_esp += 4; return;
}

void f_006b0e90(void) /* sub_6B0E90 */
{
    FN_ENTER(0x006b0e90);
    /* 006b0e90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b0e91: mov edi, eax */ r_edi = r_eax;
    /* 006b0e93: lea ecx, [edi + 0x34] */ r_ecx = (u32)(r_edi+0x34u);
    /* 006b0e96: mov edx, dword ptr [0xa954a8] */ r_edx = R32((u32)(0xa954a8u));
    /* 006b0e9c: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 006b0e9e: mov edx, dword ptr [0xa954ac] */ r_edx = R32((u32)(0xa954acu));
    /* 006b0ea4: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006b0ea7: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b0ead: mov dword ptr [edi + 8], edx */ W32((u32)(r_edi+0x8u), r_edx);
    /* 006b0eb0: mov edx, dword ptr [0xa95480] */ r_edx = R32((u32)(0xa95480u));
    /* 006b0eb6: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 006b0eb9: mov edx, dword ptr [0xa95488] */ r_edx = R32((u32)(0xa95488u));
    /* 006b0ebf: mov dword ptr [edi + 0x10], edx */ W32((u32)(r_edi+0x10u), r_edx);
    /* 006b0ec2: movzx edx, byte ptr [0xa954b4] */ r_edx = (u32)R8((u32)(0xa954b4u));
    /* 006b0ec9: mov byte ptr [edi + 0x14], dl */ W8((u32)(r_edi+0x14u), (u8)r_edx);
    /* 006b0ecc: mov edx, dword ptr [0xa954b8] */ r_edx = R32((u32)(0xa954b8u));
    /* 006b0ed2: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 006b0ed5: mov edx, dword ptr [0xa954a4] */ r_edx = R32((u32)(0xa954a4u));
    /* 006b0edb: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
    /* 006b0ede: mov edx, dword ptr [0xa954bc] */ r_edx = R32((u32)(0xa954bcu));
    /* 006b0ee4: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 006b0ee7: mov edx, dword ptr [0xa954c0] */ r_edx = R32((u32)(0xa954c0u));
    /* 006b0eed: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 006b0ef0: mov edx, dword ptr [0xa954c4] */ r_edx = R32((u32)(0xa954c4u));
    /* 006b0ef6: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 006b0ef9: mov edx, dword ptr [0xa954c8] */ r_edx = R32((u32)(0xa954c8u));
    /* 006b0eff: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 006b0f02: mov edx, 0xa954cc */ r_edx = 0xa954ccu;
    /* 006b0f07: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006b0f09: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 006b0f0b: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006b0f0e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006b0f11: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 006b0f14: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 006b0f17: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 006b0f1a: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 006b0f1d: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 006b0f20: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
    /* 006b0f23: mov eax, dword ptr [edx + 0x14] */ r_eax = R32((u32)(r_edx+0x14u));
    /* 006b0f26: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 006b0f29: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006b0f2c: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 006b0f2f: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 006b0f32: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006b0f35: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0f3a: push 0xa95380 */ { u32 v = 0xa95380u; r_esp -= 4; W32(r_esp, v); }
    /* 006b0f3f: lea edx, [edi + 0x54] */ r_edx = (u32)(r_edi+0x54u);
    /* 006b0f42: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b0f43: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6b0f48u); f_0086b6b8();
    /* 006b0f48: movzx edx, byte ptr [0xa954ec] */ r_edx = (u32)R8((u32)(0xa954ecu));
    /* 006b0f4f: movzx ecx, byte ptr [0xa954f0] */ r_ecx = (u32)R8((u32)(0xa954f0u));
    /* 006b0f56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b0f58: mov dword ptr [0xa95480], eax */ W32((u32)(0xa95480u), r_eax);
    /* 006b0f5d: mov byte ptr [edi + 0x154], dl */ W8((u32)(r_edi+0x154u), (u8)r_edx);
    /* 006b0f63: movzx edx, word ptr [0xa954f4] */ r_edx = (u32)R16((u32)(0xa954f4u));
    /* 006b0f6a: mov dword ptr [0xa95488], eax */ W32((u32)(0xa95488u), r_eax);
    /* 006b0f6f: mov byte ptr [edi + 0x155], cl */ W8((u32)(r_edi+0x155u), (u8)r_ecx);
    /* 006b0f75: mov word ptr [edi + 0x156], dx */ W16((u32)(r_edi+0x156u), (u16)r_edx);
    /* 006b0f7c: movzx edx, word ptr [0xa954f8] */ r_edx = (u32)R16((u32)(0xa954f8u));
    /* 006b0f83: mov word ptr [edi + 0x158], dx */ W16((u32)(r_edi+0x158u), (u16)r_edx);
    /* 006b0f8a: mov edx, dword ptr [0xa9548c] */ r_edx = R32((u32)(0xa9548cu));
    /* 006b0f90: mov dword ptr [0xa9548c], eax */ W32((u32)(0xa9548cu), r_eax);
    /* 006b0f95: mov dword ptr [edi + 0x15c], edx */ W32((u32)(r_edi+0x15cu), r_edx);
    /* 006b0f9b: mov edx, dword ptr [0xa95490] */ r_edx = R32((u32)(0xa95490u));
    /* 006b0fa1: mov dword ptr [0xa95490], eax */ W32((u32)(0xa95490u), r_eax);
    /* 006b0fa6: mov dword ptr [edi + 0x160], edx */ W32((u32)(r_edi+0x160u), r_edx);
    /* 006b0fac: mov edx, dword ptr [0xa95494] */ r_edx = R32((u32)(0xa95494u));
    /* 006b0fb2: mov dword ptr [0xa95494], eax */ W32((u32)(0xa95494u), r_eax);
    /* 006b0fb7: mov dword ptr [edi + 0x164], edx */ W32((u32)(r_edi+0x164u), r_edx);
    /* 006b0fbd: mov edx, dword ptr [0xa95498] */ r_edx = R32((u32)(0xa95498u));
    /* 006b0fc3: mov dword ptr [edi + 0x168], edx */ W32((u32)(r_edi+0x168u), r_edx);
    /* 006b0fc9: mov edx, dword ptr [0xa9549c] */ r_edx = R32((u32)(0xa9549cu));
    /* 006b0fcf: mov dword ptr [0xa95498], eax */ W32((u32)(0xa95498u), r_eax);
    /* 006b0fd4: mov dword ptr [0xa9549c], eax */ W32((u32)(0xa9549cu), r_eax);
    /* 006b0fd9: mov dword ptr [edi + 0x16c], edx */ W32((u32)(r_edi+0x16cu), r_edx);
    /* 006b0fdf: movzx edx, word ptr [0xa954fc] */ r_edx = (u32)R16((u32)(0xa954fcu));
    /* 006b0fe6: mov word ptr [edi + 0x170], dx */ W16((u32)(r_edi+0x170u), (u16)r_edx);
    /* 006b0fed: movzx edx, word ptr [0xa95500] */ r_edx = (u32)R16((u32)(0xa95500u));
    /* 006b0ff4: mov word ptr [edi + 0x172], dx */ W16((u32)(r_edi+0x172u), (u16)r_edx);
    /* 006b0ffb: movzx edx, word ptr [0xa95504] */ r_edx = (u32)R16((u32)(0xa95504u));
    /* 006b1002: mov word ptr [edi + 0x174], dx */ W16((u32)(r_edi+0x174u), (u16)r_edx);
    /* 006b1009: movzx edx, word ptr [0xa95508] */ r_edx = (u32)R16((u32)(0xa95508u));
    /* 006b1010: mov word ptr [edi + 0x176], dx */ W16((u32)(r_edi+0x176u), (u16)r_edx);
    /* 006b1017: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b101a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b101b: ret  */ FN_RET(0x006b0e90); r_esp += 4; return;
}

