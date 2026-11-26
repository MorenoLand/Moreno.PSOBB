#include "protos.h"

void f_00690000(void)
{
    FN_ENTER(0x00690000);
}

void f_00690018(void) /* sub_690018 */
{
    FN_ENTER(0x00690018);
    /* 00690018: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069001b: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 0069001f: mov byte ptr [esp + 4], 0xc */ W8((u32)(r_esp+0x4u), 0xcu);
    /* 00690024: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 00690029: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069002b: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0069002f: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690032: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00690036: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00690039: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069003d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690041: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x690046u); f_006a9e70();
    /* 00690046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690048: je 0x690067 */ if (fZ) goto L_00690067;
L_0069004a:; BB(0x0069004a);
    /* 0069004a: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069004f: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x690054u); f_0068d5ac();
    /* 00690054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690056: je 0x690067 */ if (fZ) goto L_00690067;
L_00690058:; BB(0x00690058);
    /* 00690058: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069005c: mov ecx, eax */ r_ecx = r_eax;
    /* 0069005e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00690062: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x690067u); f_0068749c();
L_00690067:; BB(0x00690067);
    /* 00690067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069006a: ret  */ FN_RET(0x00690018); r_esp += 4; return;
}

void f_00690020(void)
{
    FN_ENTER(0x00690020);
    /* 00690020: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690021: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690023: or al, 0xc6 */ {  u32 a = (u8)r_eax; u32 b = 0xc6u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690025: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690026: and al, 5 */ {  u32 a = (u8)r_eax; u32 b = 0x5u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690028: add ecx, dword ptr [ebx + 0x24448901] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x24448901u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069002e: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690030: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690031: add al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690033: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00690034: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690036: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00690039: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0069003d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690041: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x690046u); f_006a9e70();
    /* 00690046: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690048: je 0x690067 */ if (fZ) goto L_00690067;
L_0069004a:; BB(0x0069004a);
    /* 0069004a: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069004f: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x690054u); f_0068d5ac();
    /* 00690054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690056: je 0x690067 */ if (fZ) goto L_00690067;
L_00690058:; BB(0x00690058);
    /* 00690058: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069005c: mov ecx, eax */ r_ecx = r_eax;
    /* 0069005e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00690062: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x690067u); f_0068749c();
L_00690067:; BB(0x00690067);
    /* 00690067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069006a: ret  */ FN_RET(0x00690020); r_esp += 4; return;
}

void f_00690050(void)
{
    FN_ENTER(0x00690050);
    /* 00690050: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 00690051: aad 0xff */ UNSUP(0x00690051, "aad 0xff");
    /* 00690053: inc dword ptr [ebp - 0xf08b40] */ { u32 ad = (u32)(r_ebp+0xff0f74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00690059: je 0x69007f */ if (fZ) goto L_0069007f;
L_0069005b:; BB(0x0069005b);
    /* 0069005b: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069005d: enter 0x74ff, 0x24 */ { u32 f = 0x74ffu; u32 lv = 4u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00690061: or al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690063: xor eax, 0x83ffff74 */ {  u32 a = r_eax; u32 b = 0x83ffff74u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00690068: les edx, ptr [eax] */ UNSUP(0x00690068, "les edx, ptr [eax]");
    /* 0069006a: ret  */ FN_RET(0x00690050); r_esp += 4; return;
L_0069007f:; BB(0x0069007f);
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690050); r_esp += 4; return;
}

void f_00690053(void)
{
    FN_ENTER(0x00690053);
    /* 00690053: inc dword ptr [ebp - 0xf08b40] */ { u32 ad = (u32)(r_ebp+0xff0f74c0u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); }
    /* 00690059: je 0x69007f */ if (fZ) goto L_0069007f;
L_0069005b:; BB(0x0069005b);
    /* 0069005b: or al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069005d: enter 0x74ff, 0x24 */ { u32 f = 0x74ffu; u32 lv = 4u; r_esp -= 4; W32(r_esp, r_ebp); u32 fr = r_esp; if (lv) { u32 k = 1; while (k < lv) { r_ebp -= 4; r_esp -= 4; W32(r_esp, R32(r_ebp)); k++; } r_esp -= 4; W32(r_esp, fr); } r_ebp = fr; r_esp -= f; }
    /* 00690061: or al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690063: xor eax, 0x83ffff74 */ {  u32 a = r_eax; u32 b = 0x83ffff74u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00690068: les edx, ptr [eax] */ UNSUP(0x00690068, "les edx, ptr [eax]");
    /* 0069006a: ret  */ FN_RET(0x00690053); r_esp += 4; return;
L_0069007f:; BB(0x0069007f);
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690053); r_esp += 4; return;
}

void f_00690054(void)
{
    FN_ENTER(0x00690054);
    /* 00690054: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690056: je 0x690067 */ if (fZ) goto L_00690067;
L_00690058:; BB(0x00690058);
    /* 00690058: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0069005c: mov ecx, eax */ r_ecx = r_eax;
    /* 0069005e: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00690062: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x690067u); f_0068749c();
L_00690067:; BB(0x00690067);
    /* 00690067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069006a: ret  */ FN_RET(0x00690054); r_esp += 4; return;
}

void f_00690060(void)
{
    FN_ENTER(0x00690060);
    /* 00690060: and al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690062: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x690067u); f_0068749c();
    /* 00690067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069006a: ret  */ FN_RET(0x00690060); r_esp += 4; return;
}

void f_00690062(void)
{
    FN_ENTER(0x00690062);
    /* 00690062: call 0x68749c */ r_esp -= 4; W32(r_esp, 0x690067u); f_0068749c();
    /* 00690067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069006a: ret  */ FN_RET(0x00690062); r_esp += 4; return;
}

void f_00690063(void)
{
    FN_ENTER(0x00690063);
    /* 00690063: xor eax, 0x83ffff74 */ {  u32 a = r_eax; u32 b = 0x83ffff74u; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00690068: les edx, ptr [eax] */ UNSUP(0x00690068, "les edx, ptr [eax]");
    /* 0069006a: ret  */ FN_RET(0x00690063); r_esp += 4; return;
}

void f_00690064(void)
{
    FN_ENTER(0x00690064);
    /* 00690064: je 0x690065 */ if (fZ) UNSUP(0x00690064, "branch to code that was not decoded");
L_00690066:; BB(0x00690066);
    /* 00690066: inc dword ptr [ebx - 0x6f3cef3c] */ { u32 ad = (u32)(r_ebx+0x90c310c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0069006c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069006f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00690073: mov byte ptr [esp + 4], 0xd */ W8((u32)(r_esp+0x4u), 0xdu);
    /* 00690078: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069007d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690064); r_esp += 4; return;
}

void f_00690066(void)
{
    FN_ENTER(0x00690066);
    /* 00690066: inc dword ptr [ebx - 0x6f3cef3c] */ { u32 ad = (u32)(r_ebx+0x90c310c4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0069006c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069006f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00690073: mov byte ptr [esp + 4], 0xd */ W8((u32)(r_esp+0x4u), 0xdu);
    /* 00690078: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069007d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690066); r_esp += 4; return;
}

void f_00690067(void)
{
    FN_ENTER(0x00690067);
    /* 00690067: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069006a: ret  */ FN_RET(0x00690067); r_esp += 4; return;
}

void f_00690068(void)
{
    FN_ENTER(0x00690068);
    /* 00690068: les edx, ptr [eax] */ UNSUP(0x00690068, "les edx, ptr [eax]");
    /* 0069006a: ret  */ FN_RET(0x00690068); r_esp += 4; return;
}

void f_0069006b(void)
{
    FN_ENTER(0x0069006b);
    /* 0069006b: nop  */ ;
    /* 0069006c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069006f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00690073: mov byte ptr [esp + 4], 0xd */ W8((u32)(r_esp+0x4u), 0xdu);
    /* 00690078: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069007d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x0069006b); r_esp += 4; return;
}

void f_0069006c(void) /* sub_69006C */
{
    FN_ENTER(0x0069006c);
    /* 0069006c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069006f: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 00690073: mov byte ptr [esp + 4], 0xd */ W8((u32)(r_esp+0x4u), 0xdu);
    /* 00690078: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069007d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x0069006c); r_esp += 4; return;
}

void f_0069006e(void)
{
    FN_ENTER(0x0069006e);
    /* 0069006e: adc byte ptr [ebx - 0x39ebdbb4], cl */ { u32 ad = (u32)(r_ebx+0xc614244cu); u32 c = fC; u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b + c) & 0xffu; W8(ad, r);  }
    /* 00690074: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690075: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690077: or eax, 0x52444c6 */ {  u32 a = r_eax; u32 b = 0x52444c6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069007c: add ecx, dword ptr [ebx + 0x24448901] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x24448901u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690082: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690085: add al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690087: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00690088: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x0069006e); r_esp += 4; return;
}

void f_00690072(void)
{
    FN_ENTER(0x00690072);
    /* 00690072: adc al, 0xc6 */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xc6u; u32 r = (a + b + c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690074: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690075: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690077: or eax, 0x52444c6 */ {  u32 a = r_eax; u32 b = 0x52444c6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069007c: add ecx, dword ptr [ebx + 0x24448901] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x24448901u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690082: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690085: add al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690087: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00690088: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690072); r_esp += 4; return;
}

void f_00690073(void)
{
    FN_ENTER(0x00690073);
    /* 00690073: mov byte ptr [esp + 4], 0xd */ W8((u32)(r_esp+0x4u), 0xdu);
    /* 00690078: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069007d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690073); r_esp += 4; return;
}

void f_00690074(void)
{
    FN_ENTER(0x00690074);
    /* 00690074: inc esp */ { u32 x = r_esp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690075: and al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690077: or eax, 0x52444c6 */ {  u32 a = r_eax; u32 b = 0x52444c6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069007c: add ecx, dword ptr [ebx + 0x24448901] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x24448901u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690082: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690085: add al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690087: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00690088: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690074); r_esp += 4; return;
}

void f_00690076(void)
{
    FN_ENTER(0x00690076);
    /* 00690076: add al, 0xd */ {  u32 a = (u8)r_eax; u32 b = 0xdu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690078: mov byte ptr [esp + 5], 3 */ W8((u32)(r_esp+0x5u), 0x3u);
    /* 0069007d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0069007f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00690083: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00690086: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690076); r_esp += 4; return;
}

void f_00690077(void)
{
    FN_ENTER(0x00690077);
    /* 00690077: or eax, 0x52444c6 */ {  u32 a = r_eax; u32 b = 0x52444c6u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069007c: add ecx, dword ptr [ebx + 0x24448901] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x24448901u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690082: add al, 0x8b */ {  u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690084: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00690085: add al, 0x89 */ {  u32 a = (u8)r_eax; u32 b = 0x89u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00690087: push esp */ { u32 v = r_esp; r_esp -= 4; W32(r_esp, v); }
    /* 00690088: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0069008a: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0069008d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00690091: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690095: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69009au); f_006a9e70();
    /* 0069009a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069009c: je 0x6900bb */ if (fZ) goto L_006900bb;
L_0069009e:; BB(0x0069009e);
    /* 0069009e: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006900a3: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6900a8u); f_0068d5ac();
    /* 006900a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900aa: je 0x6900bb */ if (fZ) goto L_006900bb;
L_006900ac:; BB(0x006900ac);
    /* 006900ac: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b0: mov ecx, eax */ r_ecx = r_eax;
    /* 006900b2: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006900b6: call 0x6900c0 */ r_esp -= 4; W32(r_esp, 0x6900bbu); f_006900c0();
L_006900bb:; BB(0x006900bb);
    /* 006900bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006900be: ret  */ FN_RET(0x00690077); r_esp += 4; return;
}

void f_006900c0(void) /* sub_6900C0 */
{
    FN_ENTER(0x006900c0);
    /* 006900c0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006900c3: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 006900c7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900c9: je 0x690253 */ if (fZ) goto L_00690253;
L_006900cf:; BB(0x006900cf);
    /* 006900cf: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900d2: je 0x6901e8 */ if (fZ) goto L_006901e8;
L_006900d8:; BB(0x006900d8);
    /* 006900d8: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006900db: jne 0x69017d */ if (!fZ) goto L_0069017d;
L_006900e1:; BB(0x006900e1);
    /* 006900e1: movsx edx, word ptr [ecx + 0x2c4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c4u));
    /* 006900e8: fld dword ptr [ecx + 0x278] */ FPUSH(R_F32((u32)(r_ecx+0x278u)));
    /* 006900ee: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006900f1: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006900f4: mov dword ptr [ecx + 0x278], 0 */ W32((u32)(r_ecx+0x278u), 0x0u);
    /* 006900fe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690100: fchs  */ ST(0) = -ST(0);
    /* 00690102: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00690104: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690106: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0069010a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0069010f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690114: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690118: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069011c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690120: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690124: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00690128: add word ptr [ecx + 0x2cc], ax */ { u32 ad = (u32)(r_ecx+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0069012f: movsx eax, word ptr [ecx + 0x2c6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c6u));
    /* 00690136: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 0069013a: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0069013e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00690140: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690144: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00690149: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069014e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690152: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690156: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069015a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069015e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00690162: add word ptr [ecx + 0x2ce], ax */ { u32 ad = (u32)(r_ecx+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00690169: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069016b: mov dword ptr [ecx + 0x274], eax */ W32((u32)(r_ecx+0x274u), r_eax);
    /* 00690171: mov dword ptr [ecx + 0x27c], eax */ W32((u32)(r_ecx+0x27cu), r_eax);
    /* 00690177: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069017a: ret 8 */ FN_RET(0x006900c0); r_esp += 12; return;
L_0069017d:; BB(0x0069017d);
    /* 0069017d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690180: jne 0x69024d */ if (!fZ) goto L_0069024d;
L_00690186:; BB(0x00690186);
    /* 00690186: movsx edx, word ptr [ecx + 0x2ca] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x2cau));
    /* 0069018d: fld dword ptr [ecx + 0x284] */ FPUSH(R_F32((u32)(r_ecx+0x284u)));
    /* 00690193: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00690197: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0069019b: mov dword ptr [ecx + 0x284], 0 */ W32((u32)(r_ecx+0x284u), 0x0u);
    /* 006901a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006901a7: fchs  */ ST(0) = -ST(0);
    /* 006901a9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006901ab: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 006901af: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 006901b4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006901b9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006901bd: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 006901c1: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 006901c5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 006901c9: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006901cd: add word ptr [ecx + 0x2d2], ax */ { u32 ad = (u32)(r_ecx+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006901d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006901d6: mov dword ptr [ecx + 0x280], eax */ W32((u32)(r_ecx+0x280u), r_eax);
    /* 006901dc: mov dword ptr [ecx + 0x288], eax */ W32((u32)(r_ecx+0x288u), r_eax);
    /* 006901e2: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006901e5: ret 8 */ FN_RET(0x006900c0); r_esp += 12; return;
L_006901e8:; BB(0x006901e8);
    /* 006901e8: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006901eb: movsx eax, word ptr [ecx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 006901f2: fld dword ptr [ecx + 0x26c] */ FPUSH(R_F32((u32)(r_ecx+0x26cu)));
    /* 006901f8: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006901fc: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00690200: mov dword ptr [ecx + 0x26c], 0 */ W32((u32)(r_ecx+0x26cu), 0x0u);
    /* 0069020a: and edx, 0xffffffc3 */ {  u32 a = r_edx; u32 b = 0xffffffc3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069020d: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00690210: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690212: fchs  */ ST(0) = -ST(0);
    /* 00690214: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00690216: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0069021a: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0069021f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690224: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690228: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0069022c: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690230: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690234: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00690238: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 0069023f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690241: mov dword ptr [ecx + 0x268], eax */ W32((u32)(r_ecx+0x268u), r_eax);
    /* 00690247: mov dword ptr [ecx + 0x270], eax */ W32((u32)(r_ecx+0x270u), r_eax);
L_0069024d:; BB(0x0069024d);
    /* 0069024d: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00690250: ret 8 */ FN_RET(0x006900c0); r_esp += 12; return;
L_00690253:; BB(0x00690253);
    /* 00690253: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00690256: movsx eax, word ptr [ecx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2c8u));
    /* 0069025d: fld dword ptr [ecx + 0x260] */ FPUSH(R_F32((u32)(r_ecx+0x260u)));
    /* 00690263: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00690267: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 0069026b: mov dword ptr [ecx + 0x260], 0 */ W32((u32)(r_ecx+0x260u), 0x0u);
    /* 00690275: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00690278: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0069027b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0069027d: fchs  */ ST(0) = -ST(0);
    /* 0069027f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00690281: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690285: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0069028a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069028f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690293: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690297: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 0069029b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0069029f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006902a3: add word ptr [ecx + 0x2d0], ax */ { u32 ad = (u32)(r_ecx+0x2d0u);  u32 a = R16(ad); u32 b = (u16)r_eax; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006902aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006902ac: mov dword ptr [ecx + 0x25c], eax */ W32((u32)(r_ecx+0x25cu), r_eax);
    /* 006902b2: mov dword ptr [ecx + 0x264], eax */ W32((u32)(r_ecx+0x264u), r_eax);
    /* 006902b8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006902bb: ret 8 */ FN_RET(0x006900c0); r_esp += 12; return;
}

void f_006902c0(void) /* sub_6902C0 */
{
    FN_ENTER(0x006902c0);
    /* 006902c0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006902c3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006902c7: mov byte ptr [esp + 4], 0xe */ W8((u32)(r_esp+0x4u), 0xeu);
    /* 006902cc: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 006902d1: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 006902d5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006902d7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006902db: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x6902e0u); f_006a9e70();
    /* 006902e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006902e2: je 0x6902fc */ if (fZ) goto L_006902fc;
L_006902e4:; BB(0x006902e4);
    /* 006902e4: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006902e9: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6902eeu); f_0068d5ac();
    /* 006902ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006902f0: je 0x6902fc */ if (fZ) goto L_006902fc;
L_006902f2:; BB(0x006902f2);
    /* 006902f2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006902f4: mov ecx, eax */ r_ecx = r_eax;
    /* 006902f6: call dword ptr [edx + 0xd0] */ { u32 t = R32((u32)(r_edx+0xd0u)); r_esp -= 4; W32(r_esp, 0x6902fcu); call_ind(t); }
L_006902fc:; BB(0x006902fc);
    /* 006902fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006902ff: ret  */ FN_RET(0x006902c0); r_esp += 4; return;
}

void f_00690300(void) /* sub_690300 */
{
    FN_ENTER(0x00690300);
    /* 00690300: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690301: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690302: mov edi, ecx */ r_edi = r_ecx;
    /* 00690304: mov ecx, edi */ r_ecx = r_edi;
    /* 00690306: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 0069030a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0069030d: call 0x690344 */ r_esp -= 4; W32(r_esp, 0x690312u); f_00690344();
    /* 00690312: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690314: je 0x690322 */ if (fZ) goto L_00690322;
L_00690316:; BB(0x00690316);
    /* 00690316: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00690319: fmul dword ptr [0x93c710] */ ST(0) = ST(0) * R_F32((u32)(0x93c710u));
    /* 0069031f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_00690322:; BB(0x00690322);
    /* 00690322: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00690325: mov eax, dword ptr [edi + 0xb0] */ r_eax = R32((u32)(r_edi+0xb0u));
    /* 0069032b: fstp dword ptr [edi + 0xd0] */ W_F32((u32)(r_edi+0xd0u), ST(0)); FPOP();
    /* 00690331: or eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00690336: mov dword ptr [edi + 0xb0], eax */ W32((u32)(r_edi+0xb0u), r_eax);
    /* 0069033c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069033d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069033e: ret 4 */ FN_RET(0x00690300); r_esp += 8; return;
}

void f_00690344(void) /* sub_690344 */
{
    FN_ENTER(0x00690344);
    /* 00690344: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690345: mov esi, ecx */ r_esi = r_ecx;
    /* 00690347: mov ecx, esi */ r_ecx = r_esi;
    /* 00690349: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x69034eu); f_0068a3fc();
    /* 0069034e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690350: jne 0x690356 */ if (!fZ) goto L_00690356;
L_00690352:; BB(0x00690352);
    /* 00690352: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00690354: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690355: ret  */ FN_RET(0x00690344); r_esp += 4; return;
L_00690356:; BB(0x00690356);
    /* 00690356: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00690359: and eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069035c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069035d: ret  */ FN_RET(0x00690344); r_esp += 4; return;
}

void f_00690360(void) /* sub_690360 */
{
    FN_ENTER(0x00690360);
    /* 00690360: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00690363: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00690367: mov byte ptr [esp + 4], 0x31 */ W8((u32)(r_esp+0x4u), 0x31u);
    /* 0069036c: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00690371: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690375: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00690377: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069037b: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x690380u); f_006a9e70();
    /* 00690380: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690382: je 0x690399 */ if (fZ) goto L_00690399;
L_00690384:; BB(0x00690384);
    /* 00690384: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00690389: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69038eu); f_0068d5ac();
    /* 0069038e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690390: je 0x690399 */ if (fZ) goto L_00690399;
L_00690392:; BB(0x00690392);
    /* 00690392: mov ecx, eax */ r_ecx = r_eax;
    /* 00690394: call 0x68fd74 */ r_esp -= 4; W32(r_esp, 0x690399u); f_0068fd74();
L_00690399:; BB(0x00690399);
    /* 00690399: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069039c: ret  */ FN_RET(0x00690360); r_esp += 4; return;
}

void f_006903a0(void) /* sub_6903A0 */
{
    FN_ENTER(0x006903a0);
    /* 006903a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006903a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006903a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006903a3: mov edx, 0xa94254 */ r_edx = 0xa94254u;
    /* 006903a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006903aa: mov ebx, eax */ r_ebx = r_eax;
    /* 006903ac: mov esi, edx */ r_esi = r_edx;
L_006903ae:; BB(0x006903ae);
    /* 006903ae: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 006903b0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903b2: je 0x6903eb */ if (fZ) goto L_006903eb;
L_006903b4:; BB(0x006903b4);
    /* 006903b4: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006903bb: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903be: jne 0x6903eb */ if (!fZ) goto L_006903eb;
L_006903c0:; BB(0x006903c0);
    /* 006903c0: mov ecx, edi */ r_ecx = r_edi;
    /* 006903c2: call 0x68fda4 */ r_esp -= 4; W32(r_esp, 0x6903c7u); f_0068fda4();
    /* 006903c7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006903c9: mov ecx, edi */ r_ecx = r_edi;
    /* 006903cb: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x6903d1u); call_ind(t); }
    /* 006903d1: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 006903d4: and eax, 0xfffff1ff */ {  u32 a = r_eax; u32 b = 0xfffff1ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006903d9: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 006903dc: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 006903e2: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006903e5: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
L_006903eb:; BB(0x006903eb);
    /* 006903eb: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006903ee: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006903f1: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006903f4: jl 0x6903ae */ if ((fS!=fO)) goto L_006903ae;
L_006903f6:; BB(0x006903f6);
    /* 006903f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006903f7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006903f8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006903f9: ret  */ FN_RET(0x006903a0); r_esp += 4; return;
}

void f_006903fc(void) /* sub_6903FC */
{
    FN_ENTER(0x006903fc);
    /* 006903fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006903fd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006903ff: je 0x69040f */ if (fZ) goto L_0069040f;
L_00690401:; BB(0x00690401);
    /* 00690401: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00690408: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069040b: jne 0x69040f */ if (!fZ) goto L_0069040f;
L_0069040d:; BB(0x0069040d);
    /* 0069040d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069040e: ret  */ FN_RET(0x006903fc); r_esp += 4; return;
L_0069040f:; BB(0x0069040f);
    /* 0069040f: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00690413: mov byte ptr [esp], 0xa1 */ W8((u32)(r_esp), 0xa1u);
    /* 00690417: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 0069041c: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00690421: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00690424: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x690429u); f_008003e0();
    /* 00690429: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069042a: ret  */ FN_RET(0x006903fc); r_esp += 4; return;
}

void f_0069042c(void) /* sub_69042C */
{
    FN_ENTER(0x0069042c);
    /* 0069042c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069042f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00690433: mov byte ptr [esp + 4], 0xa1 */ W8((u32)(r_esp+0x4u), 0xa1u);
    /* 00690438: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 0069043d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690441: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00690443: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00690447: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x69044cu); f_006a9e70();
    /* 0069044c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069044e: je 0x690465 */ if (fZ) goto L_00690465;
L_00690450:; BB(0x00690450);
    /* 00690450: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00690455: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69045au); f_0068d5ac();
    /* 0069045a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069045c: je 0x690465 */ if (fZ) goto L_00690465;
L_0069045e:; BB(0x0069045e);
    /* 0069045e: mov ecx, eax */ r_ecx = r_eax;
    /* 00690460: call 0x69046c */ r_esp -= 4; W32(r_esp, 0x690465u); f_0069046c();
L_00690465:; BB(0x00690465);
    /* 00690465: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00690468: ret  */ FN_RET(0x0069042c); r_esp += 4; return;
}

void f_0069046c(void) /* sub_69046C */
{
    FN_ENTER(0x0069046c);
    /* 0069046c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069046d: mov esi, ecx */ r_esi = r_ecx;
    /* 0069046f: mov ecx, esi */ r_ecx = r_esi;
    /* 00690471: call 0x68fddc */ r_esp -= 4; W32(r_esp, 0x690476u); f_0068fddc();
    /* 00690476: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00690478: mov ecx, esi */ r_ecx = r_esi;
    /* 0069047a: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x690480u); call_ind(t); }
    /* 00690480: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00690483: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 00690489: and eax, 0xfffff1ff */ {  u32 a = r_eax; u32 b = 0xfffff1ffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0069048e: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00690491: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00690494: mov dword ptr [esi + 0x33c], edx */ W32((u32)(r_esi+0x33cu), r_edx);
    /* 0069049a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069049b: ret  */ FN_RET(0x0069046c); r_esp += 4; return;
}

void f_0069049c(void) /* sub_69049C */
{
    FN_ENTER(0x0069049c);
    /* 0069049c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069049d: mov esi, ecx */ r_esi = r_ecx;
    /* 0069049f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006904a3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006904a7: mov ecx, esi */ r_ecx = r_esi;
    /* 006904a9: call 0x68cb54 */ r_esp -= 4; W32(r_esp, 0x6904aeu); f_0068cb54();
    /* 006904ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006904b0: jne 0x6904b6 */ if (!fZ) goto L_006904b6;
L_006904b2:; BB(0x006904b2);
    /* 006904b2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006904b3: ret 8 */ FN_RET(0x0069049c); r_esp += 12; return;
L_006904b6:; BB(0x006904b6);
    /* 006904b6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006904b7: call 0x6ac6f8 */ r_esp -= 4; W32(r_esp, 0x6904bcu); f_006ac6f8();
    /* 006904bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006904bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006904be: mov ecx, esi */ r_ecx = r_esi;
    /* 006904c0: call 0x6904cc */ r_esp -= 4; W32(r_esp, 0x6904c5u); f_006904cc();
    /* 006904c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006904c6: ret 8 */ FN_RET(0x0069049c); r_esp += 12; return;
}

void f_006904cc(void) /* sub_6904CC */
{
    FN_ENTER(0x006904cc);
    /* 006904cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006904cd: mov edi, ecx */ r_edi = r_ecx;
    /* 006904cf: mov ecx, edi */ r_ecx = r_edi;
    /* 006904d1: call 0x6877b0 */ r_esp -= 4; W32(r_esp, 0x6904d6u); f_006877b0();
    /* 006904d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006904d8: je 0x6904ee */ if (fZ) goto L_006904ee;
L_006904da:; BB(0x006904da);
    /* 006904da: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006904dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006904df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006904e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006904e1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006904e2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006904e6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6904ebu); f_00814298();
    /* 006904eb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006904ee:; BB(0x006904ee);
    /* 006904ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006904ef: ret 4 */ FN_RET(0x006904cc); r_esp += 8; return;
}

void f_006904f4(void) /* sub_6904F4 */
{
    FN_ENTER(0x006904f4);
    /* 006904f4: mov eax, dword ptr [ecx + 0x714] */ r_eax = R32((u32)(r_ecx+0x714u));
    /* 006904fa: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006904fd: mov dword ptr [ecx + 0x714], eax */ W32((u32)(r_ecx+0x714u), r_eax);
    /* 00690503: ret  */ FN_RET(0x006904f4); r_esp += 4; return;
}

void f_00690504(void) /* sub_690504 */
{
    FN_ENTER(0x00690504);
    /* 00690504: mov eax, dword ptr [ecx + 0x714] */ r_eax = R32((u32)(r_ecx+0x714u));
    /* 0069050a: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0069050d: mov dword ptr [ecx + 0x714], eax */ W32((u32)(r_ecx+0x714u), r_eax);
    /* 00690513: ret  */ FN_RET(0x00690504); r_esp += 4; return;
}

void f_00690514(void) /* sub_690514 */
{
    FN_ENTER(0x00690514);
    /* 00690514: add ecx, 0x714 */ {  u32 a = r_ecx; u32 b = 0x714u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0069051a: call 0x6982b0 */ r_esp -= 4; W32(r_esp, 0x69051fu); f_006982b0();
    /* 0069051f: ret  */ FN_RET(0x00690514); r_esp += 4; return;
}

void f_00690520(void) /* sub_690520 */
{
    FN_ENTER(0x00690520);
    /* 00690520: add ecx, 0x714 */ {  u32 a = r_ecx; u32 b = 0x714u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690526: call 0x6982d8 */ r_esp -= 4; W32(r_esp, 0x69052bu); f_006982d8();
    /* 0069052b: ret  */ FN_RET(0x00690520); r_esp += 4; return;
}

void f_0069052c(void) /* sub_69052C */
{
    FN_ENTER(0x0069052c);
    /* 0069052c: mov eax, dword ptr [ecx + 0x8fc] */ r_eax = R32((u32)(r_ecx+0x8fcu));
    /* 00690532: ret  */ FN_RET(0x0069052c); r_esp += 4; return;
}

void f_00690534(void) /* sub_690534 */
{
    FN_ENTER(0x00690534);
    /* 00690534: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690535: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690537: je 0x690547 */ if (fZ) goto L_00690547;
L_00690539:; BB(0x00690539);
    /* 00690539: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00690540: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00690543: jne 0x690547 */ if (!fZ) goto L_00690547;
L_00690545:; BB(0x00690545);
    /* 00690545: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00690546: ret  */ FN_RET(0x00690534); r_esp += 4; return;
L_00690547:; BB(0x00690547);
    /* 00690547: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0069054b: mov byte ptr [esp], 0x1b */ W8((u32)(r_esp), 0x1bu);
    /* 0069054f: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00690554: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 00690559: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0069055c: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x690561u); f_008003e0();
    /* 00690561: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00690562: ret  */ FN_RET(0x00690534); r_esp += 4; return;
}

void f_00690564(void) /* sub_690564 */
{
    FN_ENTER(0x00690564);
    /* 00690564: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00690567: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069056b: mov byte ptr [esp + 4], 0x1b */ W8((u32)(r_esp+0x4u), 0x1bu);
    /* 00690570: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00690575: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690579: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069057b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069057f: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x690584u); f_006a9e70();
    /* 00690584: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690586: je 0x69059d */ if (fZ) goto L_0069059d;
L_00690588:; BB(0x00690588);
    /* 00690588: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069058d: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x690592u); f_0068d5ac();
    /* 00690592: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690594: je 0x69059d */ if (fZ) goto L_0069059d;
L_00690596:; BB(0x00690596);
    /* 00690596: mov ecx, eax */ r_ecx = r_eax;
    /* 00690598: call 0x6905a4 */ r_esp -= 4; W32(r_esp, 0x69059du); f_006905a4();
L_0069059d:; BB(0x0069059d);
    /* 0069059d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006905a0: ret  */ FN_RET(0x00690564); r_esp += 4; return;
}

void f_006905a4(void) /* sub_6905A4 */
{
    FN_ENTER(0x006905a4);
    /* 006905a4: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006905ab: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006905ae: jne 0x6905bc */ if (!fZ) goto L_006905bc;
L_006905b0:; BB(0x006905b0);
    /* 006905b0: mov dword ptr [ecx + 0x770], 0x6043 */ W32((u32)(r_ecx+0x770u), 0x6043u);
    /* 006905ba: jmp 0x6905c6 */ goto L_006905c6;
L_006905bc:; BB(0x006905bc);
    /* 006905bc: mov dword ptr [ecx + 0x770], 0x2003 */ W32((u32)(r_ecx+0x770u), 0x2003u);
L_006905c6:; BB(0x006905c6);
    /* 006905c6: mov dword ptr [ecx + 0x8fc], 1 */ W32((u32)(r_ecx+0x8fcu), 0x1u);
    /* 006905d0: ret  */ FN_RET(0x006905a4); r_esp += 4; return;
}

void f_006905d4(void) /* sub_6905D4 */
{
    FN_ENTER(0x006905d4);
    /* 006905d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006905d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006905d7: je 0x6905e7 */ if (fZ) goto L_006905e7;
L_006905d9:; BB(0x006905d9);
    /* 006905d9: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006905e0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006905e3: jne 0x6905e7 */ if (!fZ) goto L_006905e7;
L_006905e5:; BB(0x006905e5);
    /* 006905e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006905e6: ret  */ FN_RET(0x006905d4); r_esp += 4; return;
L_006905e7:; BB(0x006905e7);
    /* 006905e7: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006905eb: mov byte ptr [esp], 0x1c */ W8((u32)(r_esp), 0x1cu);
    /* 006905ef: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006905f4: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006905f9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006905fc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x690601u); f_008003e0();
    /* 00690601: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00690602: ret  */ FN_RET(0x006905d4); r_esp += 4; return;
}

void f_00690604(void) /* sub_690604 */
{
    FN_ENTER(0x00690604);
    /* 00690604: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00690607: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0069060b: mov byte ptr [esp + 4], 0x1c */ W8((u32)(r_esp+0x4u), 0x1cu);
    /* 00690610: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00690615: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00690619: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0069061b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069061f: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x690624u); f_006a9e70();
    /* 00690624: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690626: je 0x69063d */ if (fZ) goto L_0069063d;
L_00690628:; BB(0x00690628);
    /* 00690628: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 0069062d: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x690632u); f_0068d5ac();
    /* 00690632: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690634: je 0x69063d */ if (fZ) goto L_0069063d;
L_00690636:; BB(0x00690636);
    /* 00690636: mov ecx, eax */ r_ecx = r_eax;
    /* 00690638: call 0x690644 */ r_esp -= 4; W32(r_esp, 0x69063du); f_00690644();
L_0069063d:; BB(0x0069063d);
    /* 0069063d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00690640: ret  */ FN_RET(0x00690604); r_esp += 4; return;
}

void f_00690644(void) /* sub_690644 */
{
    FN_ENTER(0x00690644);
    /* 00690644: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069064b: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069064e: jne 0x69065c */ if (!fZ) goto L_0069065c;
L_00690650:; BB(0x00690650);
    /* 00690650: mov dword ptr [ecx + 0x770], 0x604b */ W32((u32)(r_ecx+0x770u), 0x604bu);
    /* 0069065a: jmp 0x690666 */ goto L_00690666;
L_0069065c:; BB(0x0069065c);
    /* 0069065c: mov dword ptr [ecx + 0x770], 0x200b */ W32((u32)(r_ecx+0x770u), 0x200bu);
L_00690666:; BB(0x00690666);
    /* 00690666: mov dword ptr [ecx + 0x8fc], 0 */ W32((u32)(r_ecx+0x8fcu), 0x0u);
    /* 00690670: ret  */ FN_RET(0x00690644); r_esp += 4; return;
}

void f_00690674(void) /* sub_690674 */
{
    FN_ENTER(0x00690674);
    /* 00690674: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690675: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690676: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690677: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690678: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069067b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069067d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069067f: mov ebp, eax */ r_ebp = r_eax;
    /* 00690681: mov esi, edx */ r_esi = r_edx;
L_00690683:; BB(0x00690683);
    /* 00690683: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690689: je 0x690d72 */ if (fZ) goto L_00690d72;
L_0069068f:; BB(0x0069068f);
    /* 0069068f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690691: jl 0x690698 */ if ((fS!=fO)) goto L_00690698;
L_00690693:; BB(0x00690693);
    /* 00690693: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690696: jl 0x69069c */ if ((fS!=fO)) goto L_0069069c;
L_00690698:; BB(0x00690698);
    /* 00690698: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0069069a: jmp 0x6906a3 */ goto L_006906a3;
L_0069069c:; BB(0x0069069c);
    /* 0069069c: mov ebx, dword ptr [ebp*4 + 0xa94254] */ r_ebx = R32((u32)(r_ebp*4+0xa94254u));
L_006906a3:; BB(0x006906a3);
    /* 006906a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006906a5: je 0x690c85 */ if (fZ) goto L_00690c85;
L_006906ab:; BB(0x006906ab);
    /* 006906ab: lea ecx, [ebx + 0x82c] */ r_ecx = (u32)(r_ebx+0x82cu);
    /* 006906b1: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 006906b5: call 0x6a91f4 */ r_esp -= 4; W32(r_esp, 0x6906bau); f_006a91f4();
    /* 006906ba: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006906bf: call 0x6a8eb0 */ r_esp -= 4; W32(r_esp, 0x6906c4u); f_006a8eb0();
    /* 006906c4: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006906c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006906ca: jne 0x690c7d */ if (!fZ) goto L_00690c7d;
L_006906d0:; BB(0x006906d0);
    /* 006906d0: movsx edi, word ptr [ebx + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006906d7: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006906da: jne 0x6906e8 */ if (!fZ) goto L_006906e8;
L_006906dc:; BB(0x006906dc);
    /* 006906dc: mov dword ptr [ebx + 0x770], 0x6043 */ W32((u32)(r_ebx+0x770u), 0x6043u);
    /* 006906e6: jmp 0x6906f2 */ goto L_006906f2;
L_006906e8:; BB(0x006906e8);
    /* 006906e8: mov dword ptr [ebx + 0x770], 0x2003 */ W32((u32)(r_ebx+0x770u), 0x2003u);
L_006906f2:; BB(0x006906f2);
    /* 006906f2: movsx edi, word ptr [ebx + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 006906f9: mov dword ptr [ebx + 0x8fc], 1 */ W32((u32)(r_ebx+0x8fcu), 0x1u);
    /* 00690703: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690706: jne 0x690712 */ if (!fZ) goto L_00690712;
L_00690708:; BB(0x00690708);
    /* 00690708: mov dword ptr [0xa942c0], 1 */ W32((u32)(0xa942c0u), 0x1u);
L_00690712:; BB(0x00690712);
    /* 00690712: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690717: call 0x6a8ecc */ r_esp -= 4; W32(r_esp, 0x69071cu); f_006a8ecc();
    /* 0069071c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0069071f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690721: jle 0x690744 */ if ((fZ||fS!=fO)) goto L_00690744;
L_00690723:; BB(0x00690723);
    /* 00690723: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690726: jg 0x690744 */ if ((!fZ&&fS==fO)) goto L_00690744;
L_00690728:; BB(0x00690728);
    /* 00690728: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069072a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069072b: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 00690731: call 0x6a5998 */ r_esp -= 4; W32(r_esp, 0x690736u); f_006a5998();
    /* 00690736: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00690738: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690739: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0069073f: call 0x6a5998 */ r_esp -= 4; W32(r_esp, 0x690744u); f_006a5998();
L_00690744:; BB(0x00690744);
    /* 00690744: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690749: call 0x6a8edc */ r_esp -= 4; W32(r_esp, 0x69074eu); f_006a8edc();
    /* 0069074e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690751: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690754: jne 0x690764 */ if (!fZ) goto L_00690764;
L_00690756:; BB(0x00690756);
    /* 00690756: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00690758: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690759: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 0069075f: call 0x6a5998 */ r_esp -= 4; W32(r_esp, 0x690764u); f_006a5998();
L_00690764:; BB(0x00690764);
    /* 00690764: lea ecx, [ebx + 0xdf8] */ r_ecx = (u32)(r_ebx+0xdf8u);
    /* 0069076a: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0069076e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00690770: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x690775u); f_0069792c();
    /* 00690775: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00690779: mov edi, eax */ r_edi = r_eax;
    /* 0069077b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069077d: je 0x6908e8 */ if (fZ) goto L_006908e8;
L_00690783:; BB(0x00690783);
    /* 00690783: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690785: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690786: mov ecx, eax */ r_ecx = r_eax;
    /* 00690788: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x69078du); f_005c4214();
    /* 0069078d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069078f: jne 0x6908e8 */ if (!fZ) goto L_006908e8;
L_00690795:; BB(0x00690795);
    /* 00690795: mov ecx, edi */ r_ecx = r_edi;
    /* 00690797: movsx edi, word ptr [ebx + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x334u));
    /* 0069079e: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 006907a2: movzx edi, word ptr [ebx + 0x336] */ r_edi = (u32)R16((u32)(r_ebx+0x336u));
    /* 006907a9: mov dword ptr [esp + 0x3c], edi */ W32((u32)(r_esp+0x3cu), r_edi);
    /* 006907ad: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006907af: call dword ptr [edi + 0x7c] */ { u32 t = R32((u32)(r_edi+0x7cu)); r_esp -= 4; W32(r_esp, 0x6907b2u); call_ind(t); }
    /* 006907b2: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006907b6: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 006907ba: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 006907be: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 006907c1: mov dword ptr [edi + eax*4], 0 */ W32((u32)(r_edi+r_eax*4), 0x0u);
    /* 006907c8: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 006907ca: call dword ptr [edi + 0x4c] */ { u32 t = R32((u32)(r_edi+0x4cu)); r_esp -= 4; W32(r_esp, 0x6907cdu); call_ind(t); }
    /* 006907cd: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 006907d1: movzx edi, byte ptr [edi + 0xf2] */ r_edi = (u32)R8((u32)(r_edi+0xf2u));
    /* 006907d8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006907db: je 0x690c9f */ if (fZ) goto L_00690c9f;
L_006907e1:; BB(0x006907e1);
    /* 006907e1: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 006907e5: mov dword ptr [esp + 0x30], ebx */ W32((u32)(r_esp+0x30u), r_ebx);
    /* 006907e9: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 006907ed: mov eax, 9 */ r_eax = 0x9u;
    /* 006907f2: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006907f6: mov ebx, eax */ r_ebx = r_eax;
    /* 006907f8: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
L_006907fc:; BB(0x006907fc);
    /* 006907fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006907fd: mov ecx, edi */ r_ecx = r_edi;
    /* 006907ff: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x690804u); f_0069792c();
    /* 00690804: mov ebp, eax */ r_ebp = r_eax;
    /* 00690806: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690808: je 0x690833 */ if (fZ) goto L_00690833;
L_0069080a:; BB(0x0069080a);
    /* 0069080a: mov dword ptr [edi + ebx*4], 0 */ W32((u32)(r_edi+r_ebx*4), 0x0u);
    /* 00690811: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00690814: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 00690817: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00690819: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x69081cu); call_ind(t); }
    /* 0069081c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0069081f: movsx edx, bl */ r_edx = (u32)(i32)(i8)(u8)r_ebx;
    /* 00690822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00690823: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00690825: call dword ptr [eax + 0x44] */ { u32 t = R32((u32)(r_eax+0x44u)); r_esp -= 4; W32(r_esp, 0x690828u); call_ind(t); }
    /* 00690828: mov dword ptr [edi + esi*2], ebp */ W32((u32)(r_edi+r_esi*2), r_ebp);
    /* 0069082b: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0069082e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00690830: call dword ptr [edx + 0x48] */ { u32 t = R32((u32)(r_edx+0x48u)); r_esp -= 4; W32(r_esp, 0x690833u); call_ind(t); }
L_00690833:; BB(0x00690833);
    /* 00690833: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00690836: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690839: jle 0x6907fc */ if ((fZ||fS!=fO)) goto L_006907fc;
L_0069083b:; BB(0x0069083b);
    /* 0069083b: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 0069083f: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00690843: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00690847: mov edi, dword ptr [ebx + 0x328] */ r_edi = R32((u32)(r_ebx+0x328u));
    /* 0069084d: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690853: je 0x690864 */ if (fZ) goto L_00690864;
L_00690855:; BB(0x00690855);
    /* 00690855: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00690857: call 0x691468 */ r_esp -= 4; W32(r_esp, 0x69085cu); f_00691468();
    /* 0069085c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069085d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069085f: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x690864u); f_007aa4c8();
L_00690864:; BB(0x00690864);
    /* 00690864: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00690868: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0069086c: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00690870: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00690872:; BB(0x00690872);
    /* 00690872: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690873: mov ecx, esi */ r_ecx = r_esi;
    /* 00690875: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x69087au); f_0069792c();
    /* 0069087a: mov ebp, eax */ r_ebp = r_eax;
    /* 0069087c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069087e: je 0x6908b3 */ if (fZ) goto L_006908b3;
L_00690880:; BB(0x00690880);
    /* 00690880: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00690882: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x690887u); f_008173b4();
    /* 00690887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690889: je 0x6908b3 */ if (fZ) goto L_006908b3;
L_0069088b:; BB(0x0069088b);
    /* 0069088b: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 00690891: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00690894: jne 0x69089a */ if (!fZ) goto L_0069089a;
L_00690896:; BB(0x00690896);
    /* 00690896: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00690898: jmp 0x6908a8 */ goto L_006908a8;
L_0069089a:; BB(0x0069089a);
    /* 0069089a: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0069089d: je 0x6908a6 */ if (fZ) goto L_006908a6;
L_0069089f:; BB(0x0069089f);
    /* 0069089f: mov edx, 1 */ r_edx = 0x1u;
    /* 006908a4: jmp 0x6908a8 */ goto L_006908a8;
L_006908a6:; BB(0x006908a6);
    /* 006908a6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006908a8:; BB(0x006908a8);
    /* 006908a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006908aa: je 0x6908b3 */ if (fZ) goto L_006908b3;
L_006908ac:; BB(0x006908ac);
    /* 006908ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006908ae: call 0x5c42f4 */ r_esp -= 4; W32(r_esp, 0x6908b3u); f_005c42f4();
L_006908b3:; BB(0x006908b3);
    /* 006908b3: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006908b6: cmp edi, 0xd */ {  u32 a = r_edi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006908b9: jl 0x690872 */ if ((fS!=fO)) goto L_00690872;
L_006908bb:; BB(0x006908bb);
    /* 006908bb: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 006908bf: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 006908c3: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 006908c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006908c8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006908ca: call 0x770b58 */ r_esp -= 4; W32(r_esp, 0x6908cfu); f_00770b58();
    /* 006908cf: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 006908d3: mov word ptr [ebx + 0x336], di */ W16((u32)(r_ebx+0x336u), (u16)r_edi);
    /* 006908da: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006908dc: call 0x775270 */ r_esp -= 4; W32(r_esp, 0x6908e1u); f_00775270();
    /* 006908e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006908e3: call 0x7776f8 */ r_esp -= 4; W32(r_esp, 0x6908e8u); f_007776f8();
L_006908e8:; BB(0x006908e8);
    /* 006908e8: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006908ed: call 0x6a8eec */ r_esp -= 4; W32(r_esp, 0x6908f2u); f_006a8eec();
    /* 006908f2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006908f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006908f7: jle 0x69090c */ if ((fZ||fS!=fO)) goto L_0069090c;
L_006908f9:; BB(0x006908f9);
    /* 006908f9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006908fc: jg 0x69090c */ if ((!fZ&&fS==fO)) goto L_0069090c;
L_006908fe:; BB(0x006908fe);
    /* 006908fe: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00690900: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690901: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 00690907: call 0x6a5998 */ r_esp -= 4; W32(r_esp, 0x69090cu); f_006a5998();
L_0069090c:; BB(0x0069090c);
    /* 0069090c: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690911: call 0x6a92c4 */ r_esp -= 4; W32(r_esp, 0x690916u); f_006a92c4();
    /* 00690916: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690919: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069091c: je 0x690d3f */ if (fZ) goto L_00690d3f;
L_00690922:; BB(0x00690922);
    /* 00690922: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690927: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x69092cu); f_006a8efc();
    /* 0069092c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0069092f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690932: jne 0x690947 */ if (!fZ) goto L_00690947;
L_00690934:; BB(0x00690934);
    /* 00690934: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690939: call 0x6a8fb0 */ r_esp -= 4; W32(r_esp, 0x69093eu); f_006a8fb0();
    /* 0069093e: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 00690942: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690945: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
L_00690947:; BB(0x00690947);
    /* 00690947: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0069094c: call 0x6a8f0c */ r_esp -= 4; W32(r_esp, 0x690951u); f_006a8f0c();
    /* 00690951: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690954: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690957: jne 0x69099c */ if (!fZ) goto L_0069099c;
L_00690959:; BB(0x00690959);
    /* 00690959: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069095b: mov word ptr [ebx + 0x2c0], ax */ W16((u32)(r_ebx+0x2c0u), (u16)r_eax);
    /* 00690962: mov word ptr [ebx + 0x2c2], ax */ W16((u32)(r_ebx+0x2c2u), (u16)r_eax);
    /* 00690969: mov byte ptr [ebx + 0x384], al */ W8((u32)(r_ebx+0x384u), (u8)r_eax);
    /* 0069096f: mov byte ptr [ebx + 0x385], al */ W8((u32)(r_ebx+0x385u), (u8)r_eax);
    /* 00690975: mov byte ptr [ebx + 0x386], al */ W8((u32)(r_ebx+0x386u), (u8)r_eax);
    /* 0069097b: mov byte ptr [ebx + 0x387], al */ W8((u32)(r_ebx+0x387u), (u8)r_eax);
    /* 00690981: mov byte ptr [ebx + 0x388], al */ W8((u32)(r_ebx+0x388u), (u8)r_eax);
    /* 00690987: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0069098c: call 0x6a9020 */ r_esp -= 4; W32(r_esp, 0x690991u); f_006a9020();
    /* 00690991: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00690994: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690995: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00690997: call 0x690d7c */ r_esp -= 4; W32(r_esp, 0x69099cu); f_00690d7c();
L_0069099c:; BB(0x0069099c);
    /* 0069099c: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006909a1: call 0x6a8fe0 */ r_esp -= 4; W32(r_esp, 0x6909a6u); f_006a8fe0();
    /* 006909a6: mov edi, eax */ r_edi = r_eax;
    /* 006909a8: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006909ad: call 0x6a8ebc */ r_esp -= 4; W32(r_esp, 0x6909b2u); f_006a8ebc();
    /* 006909b2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006909b5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006909b8: jne 0x6909da */ if (!fZ) goto L_006909da;
L_006909ba:; BB(0x006909ba);
    /* 006909ba: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006909bf: lea edi, [ebx + 0x460] */ r_edi = (u32)(r_ebx+0x460u);
    /* 006909c5: mov ecx, edi */ r_ecx = r_edi;
    /* 006909c7: call 0x6ace3c */ r_esp -= 4; W32(r_esp, 0x6909ccu); f_006ace3c();
    /* 006909cc: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 006909d1: mov ecx, edi */ r_ecx = r_edi;
    /* 006909d3: call 0x6acf78 */ r_esp -= 4; W32(r_esp, 0x6909d8u); f_006acf78();
    /* 006909d8: jmp 0x690a00 */ goto L_00690a00;
L_006909da:; BB(0x006909da);
    /* 006909da: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006909dd: jne 0x690a00 */ if (!fZ) goto L_00690a00;
L_006909df:; BB(0x006909df);
    /* 006909df: lea ecx, [ebx + 0x460] */ r_ecx = (u32)(r_ebx+0x460u);
    /* 006909e5: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 006909e9: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 006909eb: call 0x6ace3c */ r_esp -= 4; W32(r_esp, 0x6909f0u); f_006ace3c();
    /* 006909f0: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006909f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006909f7: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 006909fb: call 0x6ad080 */ r_esp -= 4; W32(r_esp, 0x690a00u); f_006ad080();
L_00690a00:; BB(0x00690a00);
    /* 00690a00: mov edi, dword ptr [ebx + 0x33c] */ r_edi = R32((u32)(r_ebx+0x33cu));
    /* 00690a06: and edi, 0xfeffffff */ {  u32 a = r_edi; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00690a0c: mov dword ptr [ebx + 0x33c], edi */ W32((u32)(r_ebx+0x33cu), r_edi);
    /* 00690a12: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690a17: call 0x6a8f1c */ r_esp -= 4; W32(r_esp, 0x690a1cu); f_006a8f1c();
    /* 00690a1c: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690a1f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690a22: jne 0x690a36 */ if (!fZ) goto L_00690a36;
L_00690a24:; BB(0x00690a24);
    /* 00690a24: mov edi, dword ptr [ebx + 0x33c] */ r_edi = R32((u32)(r_ebx+0x33cu));
    /* 00690a2a: or edi, 0x1000000 */ {  u32 a = r_edi; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00690a30: mov dword ptr [ebx + 0x33c], edi */ W32((u32)(r_ebx+0x33cu), r_edi);
L_00690a36:; BB(0x00690a36);
    /* 00690a36: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690a3b: call 0x6a8f3c */ r_esp -= 4; W32(r_esp, 0x690a40u); f_006a8f3c();
    /* 00690a40: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690a43: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690a46: je 0x690d1b */ if (fZ) goto L_00690d1b;
L_00690a4c:; BB(0x00690a4c);
    /* 00690a4c: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690a51: call 0x6a8f4c */ r_esp -= 4; W32(r_esp, 0x690a56u); f_006a8f4c();
    /* 00690a56: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690a59: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690a5b: je 0x690a6a */ if (fZ) goto L_00690a6a;
L_00690a5d:; BB(0x00690a5d);
    /* 00690a5d: mov edi, dword ptr [ebx + 0x2b4] */ r_edi = R32((u32)(r_ebx+0x2b4u));
    /* 00690a63: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
L_00690a6a:; BB(0x00690a6a);
    /* 00690a6a: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690a6f: call 0x6a8f5c */ r_esp -= 4; W32(r_esp, 0x690a74u); f_006a8f5c();
    /* 00690a74: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690a77: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690a7a: je 0x690d00 */ if (fZ) goto L_00690d00;
L_00690a80:; BB(0x00690a80);
    /* 00690a80: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690a85: call 0x6a8f6c */ r_esp -= 4; W32(r_esp, 0x690a8au); f_006a8f6c();
    /* 00690a8a: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00690a8d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690a90: je 0x690ceb */ if (fZ) goto L_00690ceb;
L_00690a96:; BB(0x00690a96);
    /* 00690a96: mov edi, dword ptr [ebx + 0x33c] */ r_edi = R32((u32)(r_ebx+0x33cu));
    /* 00690a9c: or edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00690aa2: mov dword ptr [ebx + 0x33c], edi */ W32((u32)(r_ebx+0x33cu), r_edi);
    /* 00690aa8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00690aaa: call 0x68fda4 */ r_esp -= 4; W32(r_esp, 0x690aafu); f_0068fda4();
    /* 00690aaf: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00690ab1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00690ab3: call dword ptr [edi + 0xe4] */ { u32 t = R32((u32)(r_edi+0xe4u)); r_esp -= 4; W32(r_esp, 0x690ab9u); call_ind(t); }
    /* 00690ab9: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 00690abc: mov eax, dword ptr [ebx + 0x33c] */ r_eax = R32((u32)(r_ebx+0x33cu));
    /* 00690ac2: fld dword ptr [ebx + 0x260] */ FPUSH(R_F32((u32)(r_ebx+0x260u)));
    /* 00690ac8: movzx ecx, word ptr [ebx + 0x2d0] */ r_ecx = (u32)R16((u32)(r_ebx+0x2d0u));
    /* 00690acf: fld dword ptr [ebx + 0x26c] */ FPUSH(R_F32((u32)(r_ebx+0x26cu)));
    /* 00690ad5: fld dword ptr [ebx + 0x278] */ FPUSH(R_F32((u32)(r_ebx+0x278u)));
    /* 00690adb: fld dword ptr [ebx + 0x284] */ FPUSH(R_F32((u32)(r_ebx+0x284u)));
    /* 00690ae1: mov dword ptr [ebx + 0x260], 0 */ W32((u32)(r_ebx+0x260u), 0x0u);
    /* 00690aeb: and edi, 0xfffff1c0 */ {  u32 a = r_edi; u32 b = 0xfffff1c0u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00690af1: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00690af4: mov dword ptr [ebx + 0x26c], 0 */ W32((u32)(r_ebx+0x26cu), 0x0u);
    /* 00690afe: mov dword ptr [ebx + 0x33c], eax */ W32((u32)(r_ebx+0x33cu), r_eax);
    /* 00690b04: movsx eax, word ptr [ebx + 0x2c8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c8u));
    /* 00690b0b: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00690b0d: fchs  */ ST(0) = -ST(0);
    /* 00690b0f: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00690b12: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00690b15: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00690b17: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690b19: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690b1d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00690b22: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690b27: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690b2b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690b2f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690b33: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690b37: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690b3b: mov dword ptr [ebx + 0x278], 0 */ W32((u32)(r_ebx+0x278u), 0x0u);
    /* 00690b45: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00690b47: mov dword ptr [ebx + 0x25c], edx */ W32((u32)(r_ebx+0x25cu), r_edx);
    /* 00690b4d: mov dword ptr [ebx + 0x284], 0 */ W32((u32)(r_ebx+0x284u), 0x0u);
    /* 00690b57: mov dword ptr [ebx + 0x264], edx */ W32((u32)(r_ebx+0x264u), r_edx);
    /* 00690b5d: mov dword ptr [ebx + 0x30], edi */ W32((u32)(r_ebx+0x30u), r_edi);
    /* 00690b60: movsx edi, word ptr [ebx + 0x2c4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c4u));
    /* 00690b67: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00690b6b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00690b6d: fchs  */ ST(0) = -ST(0);
    /* 00690b6f: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00690b71: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690b73: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690b77: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00690b7c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690b81: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690b85: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690b89: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690b8d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690b91: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00690b95: add ecx, dword ptr [esp + 0x18] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690b99: mov word ptr [ebx + 0x2d0], cx */ W16((u32)(r_ebx+0x2d0u), (u16)r_ecx);
    /* 00690ba0: mov dword ptr [ebx + 0x268], edx */ W32((u32)(r_ebx+0x268u), r_edx);
    /* 00690ba6: mov dword ptr [ebx + 0x270], edx */ W32((u32)(r_ebx+0x270u), r_edx);
    /* 00690bac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690bae: fchs  */ ST(0) = -ST(0);
    /* 00690bb0: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00690bb2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690bb4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690bb8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00690bbd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690bc2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690bc6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690bca: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690bce: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690bd2: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00690bd6: add word ptr [ebx + 0x2cc], di */ { u32 ad = (u32)(r_ebx+0x2ccu);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00690bdd: movsx edi, word ptr [ebx + 0x2c6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2c6u));
    /* 00690be4: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00690be8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00690bec: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00690bee: mov dword ptr [ebx + 0x274], edx */ W32((u32)(r_ebx+0x274u), r_edx);
    /* 00690bf4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690bf8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00690bfd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690c02: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690c06: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690c0a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690c0e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690c12: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00690c16: add word ptr [ebx + 0x2ce], di */ { u32 ad = (u32)(r_ebx+0x2ceu);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00690c1d: movsx edi, word ptr [ebx + 0x2ca] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x2cau));
    /* 00690c24: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00690c28: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 00690c2c: mov dword ptr [ebx + 0x27c], edx */ W32((u32)(r_ebx+0x27cu), r_edx);
    /* 00690c32: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00690c34: fchs  */ ST(0) = -ST(0);
    /* 00690c36: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00690c38: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00690c3c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00690c41: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00690c46: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00690c4a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00690c4e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00690c52: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00690c56: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00690c5a: add word ptr [ebx + 0x2d2], di */ { u32 ad = (u32)(r_ebx+0x2d2u);  u32 a = R16(ad); u32 b = (u16)r_edi; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 00690c61: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690c62: mov dword ptr [ebx + 0x280], edx */ W32((u32)(r_ebx+0x280u), r_edx);
    /* 00690c68: mov dword ptr [ebx + 0x288], edx */ W32((u32)(r_ebx+0x288u), r_edx);
    /* 00690c6e: mov ecx, esi */ r_ecx = r_esi;
    /* 00690c70: add ecx, dword ptr [0xa94af0] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa94af0u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690c76: call 0x6aa0f8 */ r_esp -= 4; W32(r_esp, 0x690c7bu); f_006aa0f8();
    /* 00690c7b: jmp 0x690c85 */ goto L_00690c85;
L_00690c7d:; BB(0x00690c7d);
    /* 00690c7d: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00690c80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690c81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690c82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690c83: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690c84: ret  */ FN_RET(0x00690674); r_esp += 4; return;
L_00690c85:; BB(0x00690c85);
    /* 00690c85: add esi, 0x4f8 */ {  u32 a = r_esi; u32 b = 0x4f8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00690c8b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00690c8e: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690c91: jl 0x690683 */ if ((fS!=fO)) goto L_00690683;
L_00690c97:; BB(0x00690c97);
    /* 00690c97: add esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00690c9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00690c9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00690c9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00690c9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00690c9e: ret  */ FN_RET(0x00690674); r_esp += 4; return;
L_00690c9f:; BB(0x00690c9f);
    /* 00690c9f: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00690ca3: movzx edi, byte ptr [edi + 0xf3] */ r_edi = (u32)R8((u32)(r_edi+0xf3u));
    /* 00690caa: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690cad: jne 0x6907e1 */ if (!fZ) goto L_006907e1;
L_00690cb3:; BB(0x00690cb3);
    /* 00690cb3: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00690cb7: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00690cbb: mov edi, 9 */ r_edi = 0x9u;
L_00690cc0:; BB(0x00690cc0);
    /* 00690cc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690cc1: mov ecx, esi */ r_ecx = r_esi;
    /* 00690cc3: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x690cc8u); f_0069792c();
    /* 00690cc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690cca: je 0x690cda */ if (fZ) goto L_00690cda;
L_00690ccc:; BB(0x00690ccc);
    /* 00690ccc: mov dword ptr [esi + edi*4], 0 */ W32((u32)(r_esi+r_edi*4), 0x0u);
    /* 00690cd3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00690cd5: mov ecx, eax */ r_ecx = r_eax;
    /* 00690cd7: call dword ptr [edx + 0x4c] */ { u32 t = R32((u32)(r_edx+0x4cu)); r_esp -= 4; W32(r_esp, 0x690cdau); call_ind(t); }
L_00690cda:; BB(0x00690cda);
    /* 00690cda: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690cdd: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690ce0: jle 0x690cc0 */ if ((fZ||fS!=fO)) goto L_00690cc0;
L_00690ce2:; BB(0x00690ce2);
    /* 00690ce2: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00690ce6: jmp 0x6907e1 */ goto L_006907e1;
L_00690ceb:; BB(0x00690ceb);
    /* 00690ceb: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00690ced: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00690cef: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 00690cf5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690cf6: call 0x6a5d34 */ r_esp -= 4; W32(r_esp, 0x690cfbu); f_006a5d34();
    /* 00690cfb: jmp 0x690a96 */ goto L_00690a96;
L_00690d00:; BB(0x00690d00);
    /* 00690d00: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690d05: call 0x6a9068 */ r_esp -= 4; W32(r_esp, 0x690d0au); f_006a9068();
    /* 00690d0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690d0b: lea ecx, [ebx + 0x8a0] */ r_ecx = (u32)(r_ebx+0x8a0u);
    /* 00690d11: call 0x697944 */ r_esp -= 4; W32(r_esp, 0x690d16u); f_00697944();
    /* 00690d16: jmp 0x690a80 */ goto L_00690a80;
L_00690d1b:; BB(0x00690d1b);
    /* 00690d1b: movsx edi, word ptr [ebx + 0x32c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x32cu));
    /* 00690d22: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690d25: jne 0x690a4c */ if (!fZ) goto L_00690a4c;
L_00690d2b:; BB(0x00690d2b);
    /* 00690d2b: mov eax, dword ptr [ebx + 0x45c] */ r_eax = R32((u32)(r_ebx+0x45cu));
    /* 00690d31: mov edi, dword ptr [eax + 0x1c] */ r_edi = R32((u32)(r_eax+0x1cu));
    /* 00690d34: or edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00690d37: mov dword ptr [eax + 0x1c], edi */ W32((u32)(r_eax+0x1cu), r_edi);
    /* 00690d3a: jmp 0x690a4c */ goto L_00690a4c;
L_00690d3f:; BB(0x00690d3f);
    /* 00690d3f: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00690d43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00690d45: lea edi, [ebx + 0x89c] */ r_edi = (u32)(r_ebx+0x89cu);
    /* 00690d4b: mov esi, eax */ r_esi = r_eax;
L_00690d4d:; BB(0x00690d4d);
    /* 00690d4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d4e: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00690d53: call 0x6a9284 */ r_esp -= 4; W32(r_esp, 0x690d58u); f_006a9284();
    /* 00690d58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00690d5a: mov ecx, edi */ r_ecx = r_edi;
    /* 00690d5c: call 0x6989a0 */ r_esp -= 4; W32(r_esp, 0x690d61u); f_006989a0();
    /* 00690d61: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00690d64: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690d67: jl 0x690d4d */ if ((fS!=fO)) goto L_00690d4d;
L_00690d69:; BB(0x00690d69);
    /* 00690d69: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 00690d6d: jmp 0x690922 */ goto L_00690922;
L_00690d72:; BB(0x00690d72);
    /* 00690d72: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00690d74: jmp 0x6906a3 */ goto L_006906a3;
}

void f_00690d7c(void) /* sub_690D7C */
{
    FN_ENTER(0x00690d7c);
    /* 00690d7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690d7e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690d7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690d80: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00690d83: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00690d85: mov ebp, dword ptr [esp + 0x84] */ r_ebp = R32((u32)(r_esp+0x84u));
    /* 00690d8c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690d8e: jge 0x690d94 */ if ((fS==fO)) goto L_00690d94;
L_00690d90:; BB(0x00690d90);
    /* 00690d90: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00690d92: jmp 0x690da1 */ goto L_00690da1;
L_00690d94:; BB(0x00690d94);
    /* 00690d94: cmp ebp, 0xc7 */ {  u32 a = r_ebp; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690d9a: jle 0x690da1 */ if ((fZ||fS!=fO)) goto L_00690da1;
L_00690d9c:; BB(0x00690d9c);
    /* 00690d9c: mov ebp, 0xc7 */ r_ebp = 0xc7u;
L_00690da1:; BB(0x00690da1);
    /* 00690da1: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00690da5: mov edx, 9 */ r_edx = 0x9u;
L_00690daa:; BB(0x00690daa);
    /* 00690daa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00690dac: mov word ptr [ecx], si */ W16((u32)(r_ecx), (u16)r_esi);
    /* 00690daf: mov dword ptr [ecx + 4], esi */ W32((u32)(r_ecx+0x4u), r_esi);
    /* 00690db2: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00690db5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00690db8: jne 0x690daa */ if (!fZ) goto L_00690daa;
L_00690dba:; BB(0x00690dba);
    /* 00690dba: lea edi, [esp + 0xc] */ r_edi = (u32)(r_esp+0xcu);
    /* 00690dbe: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
    /* 00690dc2: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 00690dc6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00690dc8: lea edx, [ebx + 0xdf8] */ r_edx = (u32)(r_ebx+0xdf8u);
    /* 00690dce: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
L_00690dd2:; BB(0x00690dd2);
    /* 00690dd2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00690dd3: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00690dd7: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x690ddcu); f_0069792c();
    /* 00690ddc: mov ebx, eax */ r_ebx = r_eax;
    /* 00690dde: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690de0: je 0x690df5 */ if (fZ) goto L_00690df5;
L_00690de2:; BB(0x00690de2);
    /* 00690de2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00690de4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00690de6: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x690de9u); call_ind(t); }
    /* 00690de9: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00690dec: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 00690def: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 00690df2: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00690df5:; BB(0x00690df5);
    /* 00690df5: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00690df8: cmp esi, 0xd */ {  u32 a = r_esi; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690dfb: jl 0x690dd2 */ if ((fS!=fO)) goto L_00690dd2;
L_00690dfd:; BB(0x00690dfd);
    /* 00690dfd: mov ebp, dword ptr [esp + 0x60] */ r_ebp = R32((u32)(r_esp+0x60u));
    /* 00690e01: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 00690e05: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00690e06: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 00690e0c: call 0x6a55f0 */ r_esp -= 4; W32(r_esp, 0x690e11u); f_006a55f0();
    /* 00690e11: movsx edi, byte ptr [ebx + 0x961] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebx+0x961u));
    /* 00690e18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e19: call 0x6ac950 */ r_esp -= 4; W32(r_esp, 0x690e1eu); f_006ac950();
    /* 00690e1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00690e20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e21: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e27: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00690e2a: mov word ptr [esi], dx */ W16((u32)(r_esi), (u16)r_edx);
    /* 00690e2d: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e33: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00690e37: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 00690e3b: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e41: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00690e45: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 00690e49: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e4f: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 00690e53: mov word ptr [esi + 6], dx */ W16((u32)(r_esi+0x6u), (u16)r_edx);
    /* 00690e57: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e5d: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00690e61: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
    /* 00690e65: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e6b: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00690e6f: mov word ptr [esi + 0xa], dx */ W16((u32)(r_esi+0xau), (u16)r_edx);
    /* 00690e73: mov esi, dword ptr [ebx + 0x2b4] */ r_esi = R32((u32)(r_ebx+0x2b4u));
    /* 00690e79: movzx edx, word ptr [eax + 0xc] */ r_edx = (u32)R16((u32)(r_eax+0xcu));
    /* 00690e7d: mov word ptr [esi + 0xc], dx */ W16((u32)(r_esi+0xcu), (u16)r_edx);
    /* 00690e81: call 0x6ac570 */ r_esp -= 4; W32(r_esp, 0x690e86u); f_006ac570();
    /* 00690e86: mov esi, eax */ r_esi = r_eax;
    /* 00690e88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00690e8b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00690e8d: je 0x690ffa */ if (fZ) goto L_00690ffa;
L_00690e93:; BB(0x00690e93);
    /* 00690e93: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690e94: call 0x6ac470 */ r_esp -= 4; W32(r_esp, 0x690e99u); f_006ac470();
    /* 00690e99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00690e9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00690e9c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690e9e: jle 0x690ffa */ if ((fZ||fS!=fO)) goto L_00690ffa;
L_00690ea4:; BB(0x00690ea4);
    /* 00690ea4: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00690ea8: mov dword ptr [esp + 0x5c], edi */ W32((u32)(r_esp+0x5cu), r_edi);
    /* 00690eac: mov dword ptr [esp + 0x60], ebp */ W32((u32)(r_esp+0x60u), r_ebp);
L_00690eb0:; BB(0x00690eb0);
    /* 00690eb0: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00690eb6: movsx ecx, word ptr [eax] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00690eb9: movzx edx, word ptr [ebp] */ r_edx = (u32)R16((u32)(r_ebp));
    /* 00690ebd: add esi, 0xc */ {  u32 a = r_esi; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00690ec0: movzx edi, byte ptr [esi] */ r_edi = (u32)R8((u32)(r_esi));
    /* 00690ec3: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690ec5: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00690ec8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690eca: jl 0x6911c4 */ if ((fS!=fO)) goto L_006911c4;
L_00690ed0:; BB(0x00690ed0);
    /* 00690ed0: mov edi, edx */ r_edi = r_edx;
    /* 00690ed2: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00690ed4: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00690ed7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690ed9: jle 0x6911bb */ if ((fZ||fS!=fO)) goto L_006911bb;
L_00690edf:; BB(0x00690edf);
    /* 00690edf: mov word ptr [ebp], cx */ W16((u32)(r_ebp), (u16)r_ecx);
L_00690ee3:; BB(0x00690ee3);
    /* 00690ee3: movzx edi, byte ptr [esi + 1] */ r_edi = (u32)R8((u32)(r_esi+0x1u));
    /* 00690ee7: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00690eed: movsx ecx, word ptr [eax + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x2u));
    /* 00690ef1: movzx edx, word ptr [ebp + 2] */ r_edx = (u32)R16((u32)(r_ebp+0x2u));
    /* 00690ef5: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690ef7: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00690efa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690efc: jl 0x6911b0 */ if ((fS!=fO)) goto L_006911b0;
L_00690f02:; BB(0x00690f02);
    /* 00690f02: mov edi, edx */ r_edi = r_edx;
    /* 00690f04: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00690f06: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f09: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690f0b: jle 0x6911a7 */ if ((fZ||fS!=fO)) goto L_006911a7;
L_00690f11:; BB(0x00690f11);
    /* 00690f11: mov word ptr [ebp + 2], cx */ W16((u32)(r_ebp+0x2u), (u16)r_ecx);
L_00690f15:; BB(0x00690f15);
    /* 00690f15: movzx edi, byte ptr [esi + 2] */ r_edi = (u32)R8((u32)(r_esi+0x2u));
    /* 00690f19: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00690f1f: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00690f23: movzx edx, word ptr [ebp + 4] */ r_edx = (u32)R16((u32)(r_ebp+0x4u));
    /* 00690f27: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690f29: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f2c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690f2e: jl 0x69119c */ if ((fS!=fO)) goto L_0069119c;
L_00690f34:; BB(0x00690f34);
    /* 00690f34: mov edi, edx */ r_edi = r_edx;
    /* 00690f36: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00690f38: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f3b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690f3d: jle 0x691193 */ if ((fZ||fS!=fO)) goto L_00691193;
L_00690f43:; BB(0x00690f43);
    /* 00690f43: mov word ptr [ebp + 4], cx */ W16((u32)(r_ebp+0x4u), (u16)r_ecx);
L_00690f47:; BB(0x00690f47);
    /* 00690f47: movzx edi, byte ptr [esi + 3] */ r_edi = (u32)R8((u32)(r_esi+0x3u));
    /* 00690f4b: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00690f51: movsx ecx, word ptr [eax + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x6u));
    /* 00690f55: movzx edx, word ptr [ebp + 6] */ r_edx = (u32)R16((u32)(r_ebp+0x6u));
    /* 00690f59: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690f5b: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f5e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690f60: jl 0x691188 */ if ((fS!=fO)) goto L_00691188;
L_00690f66:; BB(0x00690f66);
    /* 00690f66: mov edi, edx */ r_edi = r_edx;
    /* 00690f68: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00690f6a: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f6d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690f6f: jle 0x69117f */ if ((fZ||fS!=fO)) goto L_0069117f;
L_00690f75:; BB(0x00690f75);
    /* 00690f75: mov word ptr [ebp + 6], cx */ W16((u32)(r_ebp+0x6u), (u16)r_ecx);
L_00690f79:; BB(0x00690f79);
    /* 00690f79: movzx edi, byte ptr [esi + 4] */ r_edi = (u32)R8((u32)(r_esi+0x4u));
    /* 00690f7d: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00690f83: movsx ecx, word ptr [eax + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8u));
    /* 00690f87: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00690f8b: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690f8d: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f90: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690f92: jl 0x691174 */ if ((fS!=fO)) goto L_00691174;
L_00690f98:; BB(0x00690f98);
    /* 00690f98: mov edi, edx */ r_edi = r_edx;
    /* 00690f9a: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00690f9c: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00690f9f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690fa1: jle 0x69116b */ if ((fZ||fS!=fO)) goto L_0069116b;
L_00690fa7:; BB(0x00690fa7);
    /* 00690fa7: mov word ptr [ebp + 8], cx */ W16((u32)(r_ebp+0x8u), (u16)r_ecx);
L_00690fab:; BB(0x00690fab);
    /* 00690fab: movzx edi, byte ptr [esi + 5] */ r_edi = (u32)R8((u32)(r_esi+0x5u));
    /* 00690faf: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00690fb5: movsx ecx, word ptr [eax + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 00690fb9: movzx edx, word ptr [ebp + 0xa] */ r_edx = (u32)R16((u32)(r_ebp+0xau));
    /* 00690fbd: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00690fbf: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00690fc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00690fc4: jl 0x691160 */ if ((fS!=fO)) goto L_00691160;
L_00690fca:; BB(0x00690fca);
    /* 00690fca: mov edi, edx */ r_edi = r_edx;
    /* 00690fcc: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00690fce: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00690fd1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00690fd3: jle 0x691157 */ if ((fZ||fS!=fO)) goto L_00691157;
L_00690fd9:; BB(0x00690fd9);
    /* 00690fd9: mov word ptr [ebp + 0xa], cx */ W16((u32)(r_ebp+0xau), (u16)r_ecx);
L_00690fdd:; BB(0x00690fdd);
    /* 00690fdd: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00690fe1: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00690fe5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00690fe8: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00690fec: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00690fee: jl 0x690eb0 */ if ((fS!=fO)) goto L_00690eb0;
L_00690ff4:; BB(0x00690ff4);
    /* 00690ff4: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00690ff8: mov ebp, ecx */ r_ebp = r_ecx;
L_00690ffa:; BB(0x00690ffa);
    /* 00690ffa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00690ffb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00690ffc: mov edx, dword ptr [ebx + 0x2b4] */ r_edx = R32((u32)(r_ebx+0x2b4u));
    /* 00691002: mov dword ptr [edx + 0x18], ebp */ W32((u32)(r_edx+0x18u), r_ebp);
    /* 00691005: mov edx, dword ptr [ebx + 0x2b4] */ r_edx = R32((u32)(r_ebx+0x2b4u));
    /* 0069100b: mov esi, 0x28 */ r_esi = 0x28u;
    /* 00691010: mov word ptr [edx + 0xe], si */ W16((u32)(r_edx+0xeu), (u16)r_esi);
    /* 00691014: call 0x6ac5cc */ r_esp -= 4; W32(r_esp, 0x691019u); f_006ac5cc();
    /* 00691019: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069101a: mov edx, dword ptr [ebx + 0x2b4] */ r_edx = R32((u32)(r_ebx+0x2b4u));
    /* 00691020: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00691023: mov ebp, dword ptr [ebx + 0x2b4] */ r_ebp = R32((u32)(r_ebx+0x2b4u));
    /* 00691029: mov dword ptr [ebp + 0x20], 0x12c */ W32((u32)(r_ebp+0x20u), 0x12cu);
    /* 00691030: call 0x6ac420 */ r_esp -= 4; W32(r_esp, 0x691035u); f_006ac420();
    /* 00691035: fstp dword ptr [esp + 0x78] */ W_F32((u32)(r_esp+0x78u), ST(0)); FPOP();
    /* 00691039: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069103a: call 0x6ac434 */ r_esp -= 4; W32(r_esp, 0x69103fu); f_006ac434();
    /* 0069103f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691042: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00691045: fld dword ptr [esp + 0x80] */ FPUSH(R_F32((u32)(r_esp+0x80u)));
    /* 0069104c: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00691050: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00691054: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00691056: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00691059: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069105d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069105f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00691063: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x691068u); f_00770da4();
    /* 00691068: movzx edx, word ptr [ebx + 0x2bc] */ r_edx = (u32)R16((u32)(r_ebx+0x2bcu));
    /* 0069106f: movzx ebp, word ptr [ebx + 0x2be] */ r_ebp = (u32)R16((u32)(r_ebx+0x2beu));
    /* 00691076: mov esi, dword ptr [ebx + 0x33c] */ r_esi = R32((u32)(r_ebx+0x33cu));
    /* 0069107c: or esi, 0x20000 */ {  u32 a = r_esi; u32 b = 0x20000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00691082: mov word ptr [ebx + 0x334], dx */ W16((u32)(r_ebx+0x334u), (u16)r_edx);
    /* 00691089: mov word ptr [ebx + 0x336], bp */ W16((u32)(r_ebx+0x336u), (u16)r_ebp);
    /* 00691090: mov dword ptr [ebx + 0x33c], esi */ W32((u32)(r_ebx+0x33cu), r_esi);
    /* 00691096: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 0069109a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_0069109c:; BB(0x0069109c);
    /* 0069109c: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 0069109f: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006910a1: je 0x6910e1 */ if (fZ) goto L_006910e1;
L_006910a3:; BB(0x006910a3);
    /* 006910a3: movzx eax, byte ptr [edi + 0xf2] */ r_eax = (u32)R8((u32)(r_edi+0xf2u));
    /* 006910aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006910ad: je 0x6911e9 */ if (fZ) goto L_006911e9;
L_006910b3:; BB(0x006910b3);
    /* 006910b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006910b5:; BB(0x006910b5);
    /* 006910b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006910b7: jne 0x6910d6 */ if (!fZ) goto L_006910d6;
L_006910b9:; BB(0x006910b9);
    /* 006910b9: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 006910bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006910be: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006910bf: mov ecx, edi */ r_ecx = r_edi;
    /* 006910c1: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x6910c6u); f_005c4214();
    /* 006910c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006910c8: je 0x6910d6 */ if (fZ) goto L_006910d6;
L_006910ca:; BB(0x006910ca);
    /* 006910ca: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 006910cd: mov eax, ebx */ r_eax = r_ebx;
    /* 006910cf: mov edx, edi */ r_edx = r_edi;
    /* 006910d1: call 0x691210 */ r_esp -= 4; W32(r_esp, 0x6910d6u); f_00691210();
L_006910d6:; BB(0x006910d6);
    /* 006910d6: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006910d9: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006910dc: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006910df: jl 0x69109c */ if ((fS!=fO)) goto L_0069109c;
L_006910e1:; BB(0x006910e1);
    /* 006910e1: lea esi, [esp + 0xc] */ r_esi = (u32)(r_esp+0xcu);
    /* 006910e5: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_006910e7:; BB(0x006910e7);
    /* 006910e7: mov edi, dword ptr [esi + 4] */ r_edi = R32((u32)(r_esi+0x4u));
    /* 006910ea: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006910ec: je 0x69113b */ if (fZ) goto L_0069113b;
L_006910ee:; BB(0x006910ee);
    /* 006910ee: movzx eax, byte ptr [edi + 0xf2] */ r_eax = (u32)R8((u32)(r_edi+0xf2u));
    /* 006910f5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006910f8: je 0x6911cf */ if (fZ) goto L_006911cf;
L_006910fe:; BB(0x006910fe);
    /* 006910fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00691100:; BB(0x00691100);
    /* 00691100: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691102: je 0x691130 */ if (fZ) goto L_00691130;
L_00691104:; BB(0x00691104);
    /* 00691104: lea eax, [esp + 0x54] */ r_eax = (u32)(r_esp+0x54u);
    /* 00691108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00691109: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069110a: mov ecx, edi */ r_ecx = r_edi;
    /* 0069110c: call 0x5c4214 */ r_esp -= 4; W32(r_esp, 0x691111u); f_005c4214();
    /* 00691111: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691113: je 0x691130 */ if (fZ) goto L_00691130;
L_00691115:; BB(0x00691115);
    /* 00691115: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00691117: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 0069111b: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x691120u); f_0069792c();
    /* 00691120: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00691122: je 0x691130 */ if (fZ) goto L_00691130;
L_00691124:; BB(0x00691124);
    /* 00691124: movsx ecx, word ptr [esi] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi));
    /* 00691127: mov eax, ebx */ r_eax = r_ebx;
    /* 00691129: mov edx, edi */ r_edx = r_edi;
    /* 0069112b: call 0x691210 */ r_esp -= 4; W32(r_esp, 0x691130u); f_00691210();
L_00691130:; BB(0x00691130);
    /* 00691130: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00691133: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00691136: cmp ebp, 9 */ {  u32 a = r_ebp; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00691139: jl 0x6910e7 */ if ((fS!=fO)) goto L_006910e7;
L_0069113b:; BB(0x0069113b);
    /* 0069113b: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 00691141: and edx, 0xfffdffff */ {  u32 a = r_edx; u32 b = 0xfffdffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00691147: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 0069114d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00691150: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00691151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00691152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00691153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00691154: ret 4 */ FN_RET(0x00690d7c); r_esp += 8; return;
L_00691157:; BB(0x00691157);
    /* 00691157: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 0069115b: jmp 0x690fdd */ goto L_00690fdd;
L_00691160:; BB(0x00691160);
    /* 00691160: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00691162: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 00691166: jmp 0x690fdd */ goto L_00690fdd;
L_0069116b:; BB(0x0069116b);
    /* 0069116b: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 0069116f: jmp 0x690fab */ goto L_00690fab;
L_00691174:; BB(0x00691174);
    /* 00691174: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00691176: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 0069117a: jmp 0x690fab */ goto L_00690fab;
L_0069117f:; BB(0x0069117f);
    /* 0069117f: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 00691183: jmp 0x690f79 */ goto L_00690f79;
L_00691188:; BB(0x00691188);
    /* 00691188: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069118a: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 0069118e: jmp 0x690f79 */ goto L_00690f79;
L_00691193:; BB(0x00691193);
    /* 00691193: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00691197: jmp 0x690f47 */ goto L_00690f47;
L_0069119c:; BB(0x0069119c);
    /* 0069119c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069119e: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 006911a2: jmp 0x690f47 */ goto L_00690f47;
L_006911a7:; BB(0x006911a7);
    /* 006911a7: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 006911ab: jmp 0x690f15 */ goto L_00690f15;
L_006911b0:; BB(0x006911b0);
    /* 006911b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006911b2: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 006911b6: jmp 0x690f15 */ goto L_00690f15;
L_006911bb:; BB(0x006911bb);
    /* 006911bb: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 006911bf: jmp 0x690ee3 */ goto L_00690ee3;
L_006911c4:; BB(0x006911c4);
    /* 006911c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006911c6: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 006911ca: jmp 0x690ee3 */ goto L_00690ee3;
L_006911cf:; BB(0x006911cf);
    /* 006911cf: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 006911d6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006911d9: jne 0x6910fe */ if (!fZ) goto L_006910fe;
L_006911df:; BB(0x006911df);
    /* 006911df: mov eax, 1 */ r_eax = 0x1u;
    /* 006911e4: jmp 0x691100 */ goto L_00691100;
L_006911e9:; BB(0x006911e9);
    /* 006911e9: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 006911f0: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006911f3: jne 0x6910b3 */ if (!fZ) goto L_006910b3;
L_006911f9:; BB(0x006911f9);
    /* 006911f9: mov eax, 1 */ r_eax = 0x1u;
    /* 006911fe: jmp 0x6910b5 */ goto L_006910b5;
}

