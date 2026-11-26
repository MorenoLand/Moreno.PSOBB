#include "protos.h"

void f_006c0020(void)
{
    FN_ENTER(0x006c0020);
    /* 006c0020: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0022: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006c0024: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0025: ret  */ FN_RET(0x006c0020); r_esp += 4; return;
}

void f_006c0042(void)
{
    FN_ENTER(0x006c0042);
    /* 006c0042: push ss */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0043: add byte ptr [ebx - 0x3f7aeb3c], al */ { u32 ad = (u32)(r_ebx+0xc08514c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 006c0049: jne 0x6c0057 */ if (!fZ) goto L_006c0057;
L_006c004b:; BB(0x006c004b);
    /* 006c004b: mov dword ptr [edi + 0x24], 2 */ W32((u32)(r_edi+0x24u), 0x2u);
    /* 006c0052: jmp 0x6bffc3 */ f_006bffc3(); return;
L_006c0057:; BB(0x006c0057);
    /* 006c0057: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0059: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c005b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0060u); f_00792fe8();
    /* 006c0060: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0063: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006c0066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0043(void)
{
    FN_ENTER(0x006c0043);
    /* 006c0043: add byte ptr [ebx - 0x3f7aeb3c], al */ { u32 ad = (u32)(r_ebx+0xc08514c4u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 006c0049: jne 0x6c0057 */ if (!fZ) goto L_006c0057;
L_006c004b:; BB(0x006c004b);
    /* 006c004b: mov dword ptr [edi + 0x24], 2 */ W32((u32)(r_edi+0x24u), 0x2u);
    /* 006c0052: jmp 0x6bffc3 */ f_006bffc3(); return;
L_006c0057:; BB(0x006c0057);
    /* 006c0057: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0059: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 006c005b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0060u); f_00792fe8();
    /* 006c0060: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0063: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006c0066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0053(void)
{
    FN_ENTER(0x006c0053);
    /* 006c0053: insb byte ptr es:[edi], dx */ UNSUP(0x006c0053, "insb byte ptr es:[edi], dx");
    UNSUP(0x006c0054, "falls out of decoded code");
}

void f_006c0061(void)
{
    FN_ENTER(0x006c0061);
    /* 006c0061: les ecx, ptr [eax] */ UNSUP(0x006c0061, "les ecx, ptr [eax]");
    /* 006c0063: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 006c0066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0062(void)
{
    FN_ENTER(0x006c0062);
    /* 006c0062: or byte ptr [ebx - 0x367acbb1], cl */ { u32 ad = (u32)(r_ebx+0xc985344fu);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a | b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0065(void)
{
    FN_ENTER(0x006c0065);
    /* 006c0065: xor al, 0x85 */ {  u32 a = (u8)r_eax; u32 b = 0x85u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006c0067: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0066(void)
{
    FN_ENTER(0x006c0066);
    /* 006c0066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0067(void)
{
    FN_ENTER(0x006c0067);
    /* 006c0067: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 006c0068: je 0x6c0075 */ if (fZ) goto L_006c0075;
L_006c006a:; BB(0x006c006a);
    /* 006c006a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
L_006c0075:; BB(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0069(void)
{
    FN_ENTER(0x006c0069);
    /* 006c0069: or ebp, dword ptr [eax - 0x7f] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0xffffff81u)); u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006c006c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c006e: add byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006c0071: ret  */ FN_RET(0x006c0069); r_esp += 4; return;
}

void f_006c006c(void)
{
    FN_ENTER(0x006c006c);
    /* 006c006c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c006e: add byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006c0071: ret  */ FN_RET(0x006c006c); r_esp += 4; return;
}

void f_006c006f(void)
{
    FN_ENTER(0x006c006f);
    /* 006c006f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0070(void)
{
    FN_ENTER(0x006c0070);
    /* 006c0070: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0075u); f_0073ae38();
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0072(void)
{
    FN_ENTER(0x006c0072);
    /* 006c0072: lodsd eax, dword ptr [esi] */ r_eax = R32(r_esi); r_esi += rt_df ? -4 : 4;
    /* 006c0073: pop es */ UNSUP(0x006c0073, "pop es");
    /* 006c0074: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006c0076: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c0077: and al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c0079: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c007b: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c007d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    UNSUP(0x006c007e, "falls out of decoded code");
}

void f_006c0074(void)
{
    FN_ENTER(0x006c0074);
    /* 006c0074: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 006c0076: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006c0077: and al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c0079: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c007b: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c007d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    UNSUP(0x006c007e, "falls out of decoded code");
}

void f_006c0075(void)
{
    FN_ENTER(0x006c0075);
    /* 006c0075: mov dword ptr [edi + 0x24], 3 */ W32((u32)(r_edi+0x24u), 0x3u);
    /* 006c007c: jmp 0x6bffc3 */ f_006bffc3(); return;
}

void f_006c0079(void)
{
    FN_ENTER(0x006c0079);
    /* 006c0079: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c007b: add cl, ch */ {  u32 a = (u8)r_ecx; u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c007d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    UNSUP(0x006c007e, "falls out of decoded code");
}

void f_006c0084(void) /* sub_6C0084 */
{
    FN_ENTER(0x006c0084);
    /* 006c0084: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0085: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c0087: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 006c008a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c008c: je 0x6c009a */ if (fZ) goto L_006c009a;
L_006c008e:; BB(0x006c008e);
    /* 006c008e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c0093u); f_007127b0();
    /* 006c0093: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
L_006c009a:; BB(0x006c009a);
    /* 006c009a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c009b: ret  */ FN_RET(0x006c0084); r_esp += 4; return;
}

void f_006c008d(void)
{
    FN_ENTER(0x006c008d);
    /* 006c008d: or al, 0xe8 */ {  u32 a = (u8)r_eax; u32 b = 0xe8u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 006c008f: sbb eax, 0xc7000527 */ { u32 c = fC; u32 a = r_eax; u32 b = 0xc7000527u; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006c0094: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006c0095: xor al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c0097: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c0099: add byte ptr [ebp - 0x3d], bl */ { u32 ad = (u32)(r_ebp+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c009c: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 006c00a2: mov edx, dword ptr [eax*8 + 0x9cea44] */ r_edx = R32((u32)(r_eax*8+0x9cea44u));
    /* 006c00a9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c00ab: call dword ptr [eax*8 + 0x9cea40] */ { u32 t = R32((u32)(r_eax*8+0x9cea40u)); r_esp -= 4; W32(r_esp, 0x6c00b2u); call_ind(t); }
    /* 006c00b2: ret  */ FN_RET(0x006c008d); r_esp += 4; return;
}

void f_006c0099(void)
{
    FN_ENTER(0x006c0099);
    /* 006c0099: add byte ptr [ebp - 0x3d], bl */ { u32 ad = (u32)(r_ebp+0xffffffc3u);  u32 a = R8(ad); u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006c009c: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 006c00a2: mov edx, dword ptr [eax*8 + 0x9cea44] */ r_edx = R32((u32)(r_eax*8+0x9cea44u));
    /* 006c00a9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c00ab: call dword ptr [eax*8 + 0x9cea40] */ { u32 t = R32((u32)(r_eax*8+0x9cea40u)); r_esp -= 4; W32(r_esp, 0x6c00b2u); call_ind(t); }
    /* 006c00b2: ret  */ FN_RET(0x006c0099); r_esp += 4; return;
}

void f_006c009c(void) /* sub_6C009C */
{
    FN_ENTER(0x006c009c);
    /* 006c009c: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 006c00a2: mov edx, dword ptr [eax*8 + 0x9cea44] */ r_edx = R32((u32)(r_eax*8+0x9cea44u));
    /* 006c00a9: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006c00ab: call dword ptr [eax*8 + 0x9cea40] */ { u32 t = R32((u32)(r_eax*8+0x9cea40u)); r_esp -= 4; W32(r_esp, 0x6c00b2u); call_ind(t); }
    /* 006c00b2: ret  */ FN_RET(0x006c009c); r_esp += 4; return;
}

void f_006c00af(void)
{
    FN_ENTER(0x006c00af);
    /* 006c00af: ljmp 0x3ca1:0x90c3009c */ UNSUP(0x006c00af, "ljmp 0x3ca1:0x90c3009c");
    /* 006c00b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c00b7: test eax, 0x74c08500 */ {  u32 a = r_eax; u32 b = 0x74c08500u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00bc: pop es */ UNSUP(0x006c00bc, "pop es");
    /* 006c00bd: mov eax, dword ptr [eax + 0x464] */ r_eax = R32((u32)(r_eax+0x464u));
    /* 006c00c3: ret  */ FN_RET(0x006c00af); r_esp += 4; return;
}

void f_006c00b0(void)
{
    FN_ENTER(0x006c00b0);
    /* 006c00b0: pushfd  */ { u32 v = 0x202u | rt_eflags_extra | (u32)fC | ((u32)fP << 2) | ((u32)fA << 4) | ((u32)fZ << 6) | ((u32)fS << 7) | ((u32)fO << 11); r_esp -= 4; W32(r_esp, v); }
    /* 006c00b1: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c00b3: nop  */ ;
    /* 006c00b4: mov eax, dword ptr [0xa95d3c] */ r_eax = R32((u32)(0xa95d3cu));
    /* 006c00b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00bb: je 0x6c00c4 */ if (fZ) goto L_006c00c4;
L_006c00bd:; BB(0x006c00bd);
    /* 006c00bd: mov eax, dword ptr [eax + 0x464] */ r_eax = R32((u32)(r_eax+0x464u));
    /* 006c00c3: ret  */ FN_RET(0x006c00b0); r_esp += 4; return;
L_006c00c4:; BB(0x006c00c4);
    /* 006c00c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00c6: ret  */ FN_RET(0x006c00b0); r_esp += 4; return;
}

void f_006c00b4(void) /* sub_6C00B4 */
{
    FN_ENTER(0x006c00b4);
    /* 006c00b4: mov eax, dword ptr [0xa95d3c] */ r_eax = R32((u32)(0xa95d3cu));
    /* 006c00b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00bb: je 0x6c00c4 */ if (fZ) goto L_006c00c4;
L_006c00bd:; BB(0x006c00bd);
    /* 006c00bd: mov eax, dword ptr [eax + 0x464] */ r_eax = R32((u32)(r_eax+0x464u));
    /* 006c00c3: ret  */ FN_RET(0x006c00b4); r_esp += 4; return;
L_006c00c4:; BB(0x006c00c4);
    /* 006c00c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00c6: ret  */ FN_RET(0x006c00b4); r_esp += 4; return;
}

void f_006c00c8(void) /* sub_6C00C8 */
{
    FN_ENTER(0x006c00c8);
    /* 006c00c8: mov eax, dword ptr [0xa95d3c] */ r_eax = R32((u32)(0xa95d3cu));
    /* 006c00cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00cf: je 0x6c00d8 */ if (fZ) goto L_006c00d8;
L_006c00d1:; BB(0x006c00d1);
    /* 006c00d1: mov eax, dword ptr [eax + 0x460] */ r_eax = R32((u32)(r_eax+0x460u));
    /* 006c00d7: ret  */ FN_RET(0x006c00c8); r_esp += 4; return;
L_006c00d8:; BB(0x006c00d8);
    /* 006c00d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00da: ret  */ FN_RET(0x006c00c8); r_esp += 4; return;
}

void f_006c00ce(void)
{
    FN_ENTER(0x006c00ce);
    /* 006c00ce: sal byte ptr [edi + eax - 0x75], 0x80 */ { u32 ad = (u32)(r_edi+r_eax+0xffffff8bu); u32 c = (0u) & 31; u32 a = R8(ad); u32 r = a; if (c) { r = (a << c) & 0xffu; W8(ad, r);  } }
    /* 006c00d3: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 006c00d4: add al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c00d6: add bl, al */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 006c00d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c00da: ret  */ FN_RET(0x006c00ce); r_esp += 4; return;
}

void f_006c00dc(void) /* sub_6C00DC */
{
    FN_ENTER(0x006c00dc);
    /* 006c00dc: mov eax, dword ptr [0xa95d3c] */ r_eax = R32((u32)(0xa95d3cu));
    /* 006c00e1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c00e3: je 0x6c010e */ if (fZ) goto L_006c010e;
L_006c00e5:; BB(0x006c00e5);
    /* 006c00e5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c00e7: push dword ptr [eax + 0x454] */ { u32 v = R32((u32)(r_eax+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c00ed: call 0x82c22c */ r_esp -= 4; W32(r_esp, 0x6c00f2u); f_0082c22c();
    /* 006c00f2: mov edx, dword ptr [0xa95d3c] */ r_edx = R32((u32)(0xa95d3cu));
    /* 006c00f8: mov edx, dword ptr [edx + 0x464] */ r_edx = R32((u32)(r_edx+0x464u));
    /* 006c00fe: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006c0100: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006c0102: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006c0104: jge 0x6c0108 */ if ((fS==fO)) goto L_006c0108;
L_006c0106:; BB(0x006c0106);
    /* 006c0106: mov edx, ecx */ r_edx = r_ecx;
L_006c0108:; BB(0x006c0108);
    /* 006c0108: mov eax, edx */ r_eax = r_edx;
    /* 006c010a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c010d: ret  */ FN_RET(0x006c00dc); r_esp += 4; return;
L_006c010e:; BB(0x006c010e);
    /* 006c010e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0110: ret  */ FN_RET(0x006c00dc); r_esp += 4; return;
}

void f_006c0114(void) /* sub_6C0114 */
{
    FN_ENTER(0x006c0114);
    /* 006c0114: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006c0118: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006c011c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c011f: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006c0122: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0125: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c0128: lea ecx, [eax + edx + 0x18] */ r_ecx = (u32)(r_eax+r_edx+0x18u);
    /* 006c012c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c012d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c012f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0131: call 0x82c378 */ r_esp -= 4; W32(r_esp, 0x6c0136u); f_0082c378();
    /* 006c0136: mov dword ptr [0xa95d38], eax */ W32((u32)(0xa95d38u), r_eax);
    /* 006c013b: mov dword ptr [esp + 0x1c], 0x5345000c */ W32((u32)(r_esp+0x1cu), 0x5345000cu);
    /* 006c0143: mov eax, dword ptr [0xa95d38] */ r_eax = R32((u32)(0xa95d38u));
    /* 006c0148: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c014a: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c014d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c014e: push 0x5345000c */ { u32 v = 0x5345000cu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0153: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0157: call 0x82c380 */ r_esp -= 4; W32(r_esp, 0x6c015cu); f_0082c380();
    /* 006c015c: mov dword ptr [0xa95d38], eax */ W32((u32)(0xa95d38u), r_eax);
    /* 006c0161: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0164: ret  */ FN_RET(0x006c0114); r_esp += 4; return;
}

void f_006c0168(void) /* sub_6C0168 */
{
    FN_ENTER(0x006c0168);
    /* 006c0168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0169: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c016a: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c016d: mov edi, ecx */ r_edi = r_ecx;
    /* 006c016f: push dword ptr [edi + 0x454] */ { u32 v = R32((u32)(r_edi+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0175: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c017au); f_006dc358();
    /* 006c017a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c017b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c017d: jne 0x6c02e1 */ if (!fZ) goto L_006c02e1;
L_006c0183:; BB(0x006c0183);
    /* 006c0183: mov eax, dword ptr [edi + 0x468] */ r_eax = R32((u32)(r_edi+0x468u));
    /* 006c0189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c018b: je 0x6c019e */ if (fZ) goto L_006c019e;
L_006c018d:; BB(0x006c018d);
    /* 006c018d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c018e: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c0193u); f_0082e960();
    /* 006c0193: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0194: mov dword ptr [edi + 0x468], 0 */ W32((u32)(r_edi+0x468u), 0x0u);
L_006c019e:; BB(0x006c019e);
    /* 006c019e: mov eax, dword ptr [edi + 0x458] */ r_eax = R32((u32)(r_edi+0x458u));
    /* 006c01a4: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c01a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c01a8: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c01adu); f_0082e940();
    /* 006c01ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c01ae: mov dword ptr [edi + 0x468], eax */ W32((u32)(r_edi+0x468u), r_eax);
    /* 006c01b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c01b6: je 0x6c02e1 */ if (fZ) goto L_006c02e1;
L_006c01bc:; BB(0x006c01bc);
    /* 006c01bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c01be: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006c01c1: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006c01c5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006c01c9: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006c01cd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006c01d1: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006c01d5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006c01d9: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006c01dd: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006c01e1: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006c01e5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006c01e9: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006c01ed: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c01f1: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c01f5: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c01f9: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c01fd: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c0201: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c0205: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c0209: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c020d: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c0211: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c0215: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c0219: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c021d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c0220: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0222: push 0x9ceab4 */ { u32 v = 0x9ceab4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0227: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0228: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6c022du); f_00858900();
    /* 006c022d: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 006c0231: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0233: push 0xa95ca0 */ { u32 v = 0xa95ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0239: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6c023eu); f_00858900();
    /* 006c023e: mov ecx, 0xa95e4c */ r_ecx = 0xa95e4cu;
    /* 006c0243: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c0245: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006c0248: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 006c024b: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c024f: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006c0252: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006c0256: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 006c025a: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c025e: mov esi, dword ptr [edi + 0x46c] */ r_esi = R32((u32)(r_edi+0x46cu));
    /* 006c0264: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 006c0268: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c026a: mov edx, 1 */ r_edx = 0x1u;
    /* 006c026f: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c0273: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006c0277: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 006c027c: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 006c0281: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006c0285: mov eax, dword ptr [edi + 0x470] */ r_eax = R32((u32)(r_edi+0x470u));
    /* 006c028b: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 006c0290: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 006c0294: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006c0298: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006c029a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c029b: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c02a0u); f_0061cdb0();
    /* 006c02a0: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006c02a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c02a5: push dword ptr [edi + 0x468] */ { u32 v = R32((u32)(r_edi+0x468u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c02ab: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c02b0u); f_0082c34c();
    /* 006c02b0: mov esi, eax */ r_esi = r_eax;
    /* 006c02b2: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006c02b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c02b7: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c02bcu); f_0061cdb0();
    /* 006c02bc: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c02bf: cmp esi, 0xffffff00 */ {  u32 a = r_esi; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c02c5: jne 0x6c02d7 */ if (!fZ) goto L_006c02d7;
L_006c02c7:; BB(0x006c02c7);
    /* 006c02c7: mov dword ptr [edi + 0x42c], 9 */ W32((u32)(r_edi+0x42cu), 0x9u);
    /* 006c02d1: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c02d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c02d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c02d6: ret  */ FN_RET(0x006c0168); r_esp += 4; return;
L_006c02d7:; BB(0x006c02d7);
    /* 006c02d7: mov dword ptr [edi + 0x42c], 2 */ W32((u32)(r_edi+0x42cu), 0x2u);
L_006c02e1:; BB(0x006c02e1);
    /* 006c02e1: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c02e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c02e5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c02e6: ret  */ FN_RET(0x006c0168); r_esp += 4; return;
}

void f_006c02e8(void) /* sub_6C02E8 */
{
    FN_ENTER(0x006c02e8);
    /* 006c02e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c02e9: mov edi, ecx */ r_edi = r_ecx;
    /* 006c02eb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c02ed: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c02f7: call 0x7827ec */ r_esp -= 4; W32(r_esp, 0x6c02fcu); f_007827ec();
    /* 006c02fc: mov ecx, eax */ r_ecx = r_eax;
    /* 006c02fe: push dword ptr [edi + 0x458] */ { u32 v = R32((u32)(r_edi+0x458u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0304: push dword ptr [edi + 0x468] */ { u32 v = R32((u32)(r_edi+0x468u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c030a: lea eax, [edi + 0x434] */ r_eax = (u32)(r_edi+0x434u);
    /* 006c0310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0311: push 0xa95ca0 */ { u32 v = 0xa95ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0316: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0317: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0318: call 0x78280c */ r_esp -= 4; W32(r_esp, 0x6c031du); f_0078280c();
    /* 006c031d: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0320: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0322: je 0x6c0330 */ if (fZ) goto L_006c0330;
L_006c0324:; BB(0x006c0324);
    /* 006c0324: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006c032e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c032f: ret  */ FN_RET(0x006c02e8); r_esp += 4; return;
L_006c0330:; BB(0x006c0330);
    /* 006c0330: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0332: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0334: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0339u); f_00792fe8();
    /* 006c0339: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c033c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c033d: mov ecx, edi */ r_ecx = r_edi;
    /* 006c033f: call 0x6c0a00 */ r_esp -= 4; W32(r_esp, 0x6c0344u); f_006c0a00();
    /* 006c0344: mov dword ptr [edi + 0x474], 0x78 */ W32((u32)(r_edi+0x474u), 0x78u);
    /* 006c034e: mov dword ptr [edi + 0x42c], 3 */ W32((u32)(r_edi+0x42cu), 0x3u);
    /* 006c0358: mov dword ptr [0xa95d6c], 1 */ W32((u32)(0xa95d6cu), 0x1u);
    /* 006c0362: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0363: ret  */ FN_RET(0x006c02e8); r_esp += 4; return;
}

void f_006c0364(void) /* sub_6C0364 */
{
    FN_ENTER(0x006c0364);
    /* 006c0364: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0365: mov edi, ecx */ r_edi = r_ecx;
    /* 006c0367: mov eax, dword ptr [edi + 0x474] */ r_eax = R32((u32)(r_edi+0x474u));
    /* 006c036d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c036f: jle 0x6c037c */ if ((fZ||fS!=fO)) goto L_006c037c;
L_006c0371:; BB(0x006c0371);
    /* 006c0371: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0374: mov dword ptr [edi + 0x474], eax */ W32((u32)(r_edi+0x474u), r_eax);
    /* 006c037a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c037b: ret  */ FN_RET(0x006c0364); r_esp += 4; return;
L_006c037c:; BB(0x006c037c);
    /* 006c037c: push dword ptr [edi + 0x454] */ { u32 v = R32((u32)(r_edi+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0382: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c0387u); f_006dc358();
    /* 006c0387: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c038a: jne 0x6c03e0 */ if (!fZ) goto L_006c03e0;
L_006c038c:; BB(0x006c038c);
    /* 006c038c: mov eax, dword ptr [edi + 0x468] */ r_eax = R32((u32)(r_edi+0x468u));
    /* 006c0392: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0394: je 0x6c03a7 */ if (fZ) goto L_006c03a7;
L_006c0396:; BB(0x006c0396);
    /* 006c0396: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0397: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c039cu); f_0082e960();
    /* 006c039c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c039d: mov dword ptr [edi + 0x468], 0 */ W32((u32)(r_edi+0x468u), 0x0u);
L_006c03a7:; BB(0x006c03a7);
    /* 006c03a7: mov eax, dword ptr [edi + 0x46c] */ r_eax = R32((u32)(r_edi+0x46cu));
    /* 006c03ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c03af: je 0x6c03c2 */ if (fZ) goto L_006c03c2;
L_006c03b1:; BB(0x006c03b1);
    /* 006c03b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c03b2: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c03b7u); f_0082e960();
    /* 006c03b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c03b8: mov dword ptr [edi + 0x46c], 0 */ W32((u32)(r_edi+0x46cu), 0x0u);
L_006c03c2:; BB(0x006c03c2);
    /* 006c03c2: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 006c03c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c03ca: jle 0x6c03e2 */ if ((fZ||fS!=fO)) goto L_006c03e2;
L_006c03cc:; BB(0x006c03cc);
    /* 006c03cc: mov dword ptr [edi + 0x42c], 4 */ W32((u32)(r_edi+0x42cu), 0x4u);
L_006c03d6:; BB(0x006c03d6);
    /* 006c03d6: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
L_006c03e0:; BB(0x006c03e0);
    /* 006c03e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c03e1: ret  */ FN_RET(0x006c0364); r_esp += 4; return;
L_006c03e2:; BB(0x006c03e2);
    /* 006c03e2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006c03e4: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c03e6: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c03ebu); f_00792fe8();
    /* 006c03eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c03ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c03ef: mov ecx, edi */ r_ecx = r_edi;
    /* 006c03f1: call 0x6c0a00 */ r_esp -= 4; W32(r_esp, 0x6c03f6u); f_006c0a00();
    /* 006c03f6: mov dword ptr [edi + 0x42c], 0xb */ W32((u32)(r_edi+0x42cu), 0xbu);
    /* 006c0400: mov dword ptr [edi + 0x430], 0xa */ W32((u32)(r_edi+0x430u), 0xau);
    /* 006c040a: jmp 0x6c03d6 */ goto L_006c03d6;
}

void f_006c040c(void) /* sub_6C040C */
{
    FN_ENTER(0x006c040c);
    /* 006c040c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c040d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c040e: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0411: mov edi, ecx */ r_edi = r_ecx;
    /* 006c0413: push dword ptr [edi + 0x454] */ { u32 v = R32((u32)(r_edi+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0419: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c041eu); f_006dc358();
    /* 006c041e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c041f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0421: jne 0x6c0584 */ if (!fZ) goto L_006c0584;
L_006c0427:; BB(0x006c0427);
    /* 006c0427: mov eax, dword ptr [edi + 0x468] */ r_eax = R32((u32)(r_edi+0x468u));
    /* 006c042d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c042f: je 0x6c0442 */ if (fZ) goto L_006c0442;
L_006c0431:; BB(0x006c0431);
    /* 006c0431: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0432: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c0437u); f_0082e960();
    /* 006c0437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0438: mov dword ptr [edi + 0x468], 0 */ W32((u32)(r_edi+0x468u), 0x0u);
L_006c0442:; BB(0x006c0442);
    /* 006c0442: mov eax, dword ptr [edi + 0x45c] */ r_eax = R32((u32)(r_edi+0x45cu));
    /* 006c0448: shl eax, 0xe */ { u32 c = (14u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 006c044b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c044c: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c0451u); f_0082e940();
    /* 006c0451: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0452: mov dword ptr [edi + 0x468], eax */ W32((u32)(r_edi+0x468u), r_eax);
    /* 006c0458: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c045a: je 0x6c0584 */ if (fZ) goto L_006c0584;
L_006c0460:; BB(0x006c0460);
    /* 006c0460: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0462: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006c0465: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006c0469: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006c046d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006c0471: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006c0475: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006c0479: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006c047d: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006c0481: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006c0485: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006c0489: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006c048d: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006c0491: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006c0495: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006c0499: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006c049d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006c04a1: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006c04a5: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006c04a9: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006c04ad: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c04b1: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 006c04b5: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 006c04b9: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c04bd: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c04c1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006c04c4: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 006c04c6: push 0x9ceab4 */ { u32 v = 0x9ceab4u; r_esp -= 4; W32(r_esp, v); }
    /* 006c04cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c04cc: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6c04d1u); f_00858900();
    /* 006c04d1: lea eax, [esp + 0x1e] */ r_eax = (u32)(r_esp+0x1eu);
    /* 006c04d5: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006c04d7: push 0xa95c40 */ { u32 v = 0xa95c40u; r_esp -= 4; W32(r_esp, v); }
    /* 006c04dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c04dd: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6c04e2u); f_00858900();
    /* 006c04e2: mov ecx, 0xa95e4c */ r_ecx = 0xa95e4cu;
    /* 006c04e7: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006c04e9: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006c04ec: mov esi, dword ptr [ecx + 8] */ r_esi = R32((u32)(r_ecx+0x8u));
    /* 006c04ef: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 006c04f3: mov eax, dword ptr [ecx + 0xc] */ r_eax = R32((u32)(r_ecx+0xcu));
    /* 006c04f6: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 006c04fa: mov dword ptr [esp + 0x54], esi */ W32((u32)(r_esp+0x54u), r_esi);
    /* 006c04fe: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 006c0502: mov esi, dword ptr [0xa95c68] */ r_esi = R32((u32)(0xa95c68u));
    /* 006c0508: mov dword ptr [esp + 0x70], esi */ W32((u32)(r_esp+0x70u), r_esi);
    /* 006c050c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c050e: mov edx, 1 */ r_edx = 0x1u;
    /* 006c0513: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 006c0517: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 006c051b: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 006c0520: mov word ptr [esp + 0x66], dx */ W16((u32)(r_esp+0x66u), (u16)r_edx);
    /* 006c0525: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 006c0529: mov eax, dword ptr [0xa95c64] */ r_eax = R32((u32)(0xa95c64u));
    /* 006c052e: mov word ptr [esp + 0x6c], dx */ W16((u32)(r_esp+0x6cu), (u16)r_edx);
    /* 006c0533: mov dword ptr [esp + 0x74], eax */ W32((u32)(r_esp+0x74u), r_eax);
    /* 006c0537: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 006c053b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006c053d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c053e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c0543u); f_0061cdb0();
    /* 006c0543: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 006c0547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0548: push dword ptr [edi + 0x468] */ { u32 v = R32((u32)(r_edi+0x468u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c054e: call 0x82c34c */ r_esp -= 4; W32(r_esp, 0x6c0553u); f_0082c34c();
    /* 006c0553: mov esi, eax */ r_esi = r_eax;
    /* 006c0555: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 006c0559: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c055a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6c055fu); f_0061cdb0();
    /* 006c055f: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0562: cmp esi, 0xffffff00 */ {  u32 a = r_esi; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0568: jne 0x6c057a */ if (!fZ) goto L_006c057a;
L_006c056a:; BB(0x006c056a);
    /* 006c056a: mov dword ptr [edi + 0x42c], 9 */ W32((u32)(r_edi+0x42cu), 0x9u);
    /* 006c0574: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0577: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0578: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0579: ret  */ FN_RET(0x006c040c); r_esp += 4; return;
L_006c057a:; BB(0x006c057a);
    /* 006c057a: mov dword ptr [edi + 0x42c], 5 */ W32((u32)(r_edi+0x42cu), 0x5u);
L_006c0584:; BB(0x006c0584);
    /* 006c0584: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0587: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0588: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0589: ret  */ FN_RET(0x006c040c); r_esp += 4; return;
}

void f_006c058c(void) /* sub_6C058C */
{
    FN_ENTER(0x006c058c);
    /* 006c058c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c058d: mov edi, ecx */ r_edi = r_ecx;
    /* 006c058f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0591: mov dword ptr [0xaab3ac], 1 */ W32((u32)(0xaab3acu), 0x1u);
    /* 006c059b: call 0x7827ec */ r_esp -= 4; W32(r_esp, 0x6c05a0u); f_007827ec();
    /* 006c05a0: push dword ptr [edi + 0x45c] */ { u32 v = R32((u32)(r_edi+0x45cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c05a6: push dword ptr [edi + 0x468] */ { u32 v = R32((u32)(r_edi+0x468u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c05ac: push 0x96bfa0 */ { u32 v = 0x96bfa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c05b1: push 0xa95c40 */ { u32 v = 0xa95c40u; r_esp -= 4; W32(r_esp, v); }
    /* 006c05b6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c05b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c05b8: call 0x78280c */ r_esp -= 4; W32(r_esp, 0x6c05bdu); f_0078280c();
    /* 006c05bd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c05c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c05c2: jne 0x6c05e4 */ if (!fZ) goto L_006c05e4;
L_006c05c4:; BB(0x006c05c4);
    /* 006c05c4: mov dword ptr [edi + 0x474], 0x78 */ W32((u32)(r_edi+0x474u), 0x78u);
    /* 006c05ce: mov dword ptr [edi + 0x42c], 6 */ W32((u32)(r_edi+0x42cu), 0x6u);
    /* 006c05d8: mov dword ptr [0xa95d6c], 1 */ W32((u32)(0xa95d6cu), 0x1u);
    /* 006c05e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c05e3: ret  */ FN_RET(0x006c058c); r_esp += 4; return;
L_006c05e4:; BB(0x006c05e4);
    /* 006c05e4: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
    /* 006c05ee: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c05ef: ret  */ FN_RET(0x006c058c); r_esp += 4; return;
}

void f_006c05e0(void)
{
    FN_ENTER(0x006c05e0);
    /* 006c05e0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 006c05e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c05e3: ret  */ FN_RET(0x006c05e0); r_esp += 4; return;
}

void f_006c05f0(void) /* sub_6C05F0 */
{
    FN_ENTER(0x006c05f0);
    /* 006c05f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c05f1: mov esi, ecx */ r_esi = r_ecx;
    /* 006c05f3: mov eax, dword ptr [esi + 0x474] */ r_eax = R32((u32)(r_esi+0x474u));
    /* 006c05f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c05fb: jle 0x6c0608 */ if ((fZ||fS!=fO)) goto L_006c0608;
L_006c05fd:; BB(0x006c05fd);
    /* 006c05fd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0600: mov dword ptr [esi + 0x474], eax */ W32((u32)(r_esi+0x474u), r_eax);
    /* 006c0606: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0607: ret  */ FN_RET(0x006c05f0); r_esp += 4; return;
L_006c0608:; BB(0x006c0608);
    /* 006c0608: push dword ptr [esi + 0x454] */ { u32 v = R32((u32)(r_esi+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c060e: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c0613u); f_006dc358();
    /* 006c0613: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0614: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0616: jne 0x6c0665 */ if (!fZ) goto L_006c0665;
L_006c0618:; BB(0x006c0618);
    /* 006c0618: mov eax, dword ptr [esi + 0x468] */ r_eax = R32((u32)(r_esi+0x468u));
    /* 006c061e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0620: je 0x6c0633 */ if (fZ) goto L_006c0633;
L_006c0622:; BB(0x006c0622);
    /* 006c0622: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0623: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c0628u); f_0082e960();
    /* 006c0628: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0629: mov dword ptr [esi + 0x468], 0 */ W32((u32)(r_esi+0x468u), 0x0u);
L_006c0633:; BB(0x006c0633);
    /* 006c0633: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0635: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0637: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c063cu); f_00792fe8();
    /* 006c063c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c063f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0640: mov ecx, esi */ r_ecx = r_esi;
    /* 006c0642: call 0x6c0a00 */ r_esp -= 4; W32(r_esp, 0x6c0647u); f_006c0a00();
    /* 006c0647: mov dword ptr [esi + 0x42c], 0xb */ W32((u32)(r_esi+0x42cu), 0xbu);
    /* 006c0651: mov dword ptr [esi + 0x430], 0xa */ W32((u32)(r_esi+0x430u), 0xau);
    /* 006c065b: mov dword ptr [0xaab3ac], 0 */ W32((u32)(0xaab3acu), 0x0u);
L_006c0665:; BB(0x006c0665);
    /* 006c0665: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0666: ret  */ FN_RET(0x006c05f0); r_esp += 4; return;
}

void f_006c0668(void) /* sub_6C0668 */
{
    FN_ENTER(0x006c0668);
    /* 006c0668: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0669: mov esi, ecx */ r_esi = r_ecx;
    /* 006c066b: mov edx, dword ptr [0xaab26c] */ r_edx = R32((u32)(0xaab26cu));
    /* 006c0671: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0673: je 0x6c0682 */ if (fZ) goto L_006c0682;
L_006c0675:; BB(0x006c0675);
    /* 006c0675: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006c0679: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c067e: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006c0682:; BB(0x006c0682);
    /* 006c0682: mov eax, dword ptr [esi + 0x468] */ r_eax = R32((u32)(r_esi+0x468u));
    /* 006c0688: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c068a: je 0x6c069d */ if (fZ) goto L_006c069d;
L_006c068c:; BB(0x006c068c);
    /* 006c068c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c068d: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c0692u); f_0082e960();
    /* 006c0692: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0693: mov dword ptr [esi + 0x468], 0 */ W32((u32)(r_esi+0x468u), 0x0u);
L_006c069d:; BB(0x006c069d);
    /* 006c069d: mov eax, dword ptr [esi + 0x46c] */ r_eax = R32((u32)(r_esi+0x46cu));
    /* 006c06a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c06a5: je 0x6c06b8 */ if (fZ) goto L_006c06b8;
L_006c06a7:; BB(0x006c06a7);
    /* 006c06a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c06a8: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c06adu); f_0082e960();
    /* 006c06ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c06ae: mov dword ptr [esi + 0x46c], 0 */ W32((u32)(r_esi+0x46cu), 0x0u);
L_006c06b8:; BB(0x006c06b8);
    /* 006c06b8: call 0x6be758 */ r_esp -= 4; W32(r_esp, 0x6c06bdu); f_006be758();
    /* 006c06bd: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 006c06c1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c06c6: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 006c06ca: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c06cb: ret  */ FN_RET(0x006c0668); r_esp += 4; return;
}

void f_006c06cc(void) /* sub_6C06CC */
{
    FN_ENTER(0x006c06cc);
    /* 006c06cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c06cd: mov esi, ecx */ r_esi = r_ecx;
    /* 006c06cf: call 0x79ac9c */ r_esp -= 4; W32(r_esp, 0x6c06d4u); f_0079ac9c();
    /* 006c06d4: mov dword ptr [esi + 0x42c], 7 */ W32((u32)(r_esi+0x42cu), 0x7u);
    /* 006c06de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c06df: ret  */ FN_RET(0x006c06cc); r_esp += 4; return;
}

void f_006c06e0(void) /* sub_6C06E0 */
{
    FN_ENTER(0x006c06e0);
    /* 006c06e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c06e1: mov esi, ecx */ r_esi = r_ecx;
    /* 006c06e3: mov ecx, dword ptr [esi + 0x47c] */ r_ecx = R32((u32)(r_esi+0x47cu));
    /* 006c06e9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c06eb: je 0x6c06f8 */ if (fZ) goto L_006c06f8;
L_006c06ed:; BB(0x006c06ed);
    /* 006c06ed: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x6c06f2u); f_0073b170();
    /* 006c06f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c06f4: jne 0x6c06f8 */ if (!fZ) goto L_006c06f8;
L_006c06f6:; BB(0x006c06f6);
    /* 006c06f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c06f7: ret  */ FN_RET(0x006c06e0); r_esp += 4; return;
L_006c06f8:; BB(0x006c06f8);
    /* 006c06f8: mov ecx, esi */ r_ecx = r_esi;
    /* 006c06fa: call 0x6c0714 */ r_esp -= 4; W32(r_esp, 0x6c06ffu); f_006c0714();
    /* 006c06ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0701: je 0x6c070f */ if (fZ) goto L_006c070f;
L_006c0703:; BB(0x006c0703);
    /* 006c0703: mov eax, dword ptr [esi + 0x430] */ r_eax = R32((u32)(r_esi+0x430u));
    /* 006c0709: mov dword ptr [esi + 0x42c], eax */ W32((u32)(r_esi+0x42cu), r_eax);
L_006c070f:; BB(0x006c070f);
    /* 006c070f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0710: ret  */ FN_RET(0x006c06e0); r_esp += 4; return;
}

void f_006c0714(void) /* sub_6C0714 */
{
    FN_ENTER(0x006c0714);
    /* 006c0714: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6c0719u); f_00694c6c();
    /* 006c0719: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c071f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006c0722: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0724: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0726: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0728: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006c072f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c0734u); f_007c1160();
    /* 006c0734: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0736: je 0x6c073e */ if (fZ) goto L_006c073e;
L_006c0738:; BB(0x006c0738);
    /* 006c0738: mov eax, 1 */ r_eax = 0x1u;
    /* 006c073d: ret  */ FN_RET(0x006c0714); r_esp += 4; return;
L_006c073e:; BB(0x006c073e);
    /* 006c073e: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6c0743u); f_00694c6c();
    /* 006c0743: push dword ptr [0xa0f698] */ { u32 v = R32((u32)(0xa0f698u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0749: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006c074c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c074e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0750: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0752: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006c0759: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c075eu); f_007c1160();
    /* 006c075e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0760: je 0x6c0768 */ if (fZ) goto L_006c0768;
L_006c0762:; BB(0x006c0762);
    /* 006c0762: mov eax, 1 */ r_eax = 0x1u;
    /* 006c0767: ret  */ FN_RET(0x006c0714); r_esp += 4; return;
L_006c0768:; BB(0x006c0768);
    /* 006c0768: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c076a: ret  */ FN_RET(0x006c0714); r_esp += 4; return;
}

void f_006c076c(void) /* sub_6C076C */
{
    FN_ENTER(0x006c076c);
    /* 006c076c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c076d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c076f: mov ecx, dword ptr [ebx + 0x478] */ r_ecx = R32((u32)(r_ebx+0x478u));
    /* 006c0775: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0777: je 0x6c07e6 */ if (fZ) goto L_006c07e6;
L_006c0779:; BB(0x006c0779);
    /* 006c0779: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c077b: je 0x6c07e4 */ if (fZ) goto L_006c07e4;
L_006c077d:; BB(0x006c077d);
    /* 006c077d: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006c0784: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006c0787: je 0x6c07c4 */ if (fZ) goto L_006c07c4;
L_006c0789:; BB(0x006c0789);
    /* 006c0789: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x6c078eu); f_007365f4();
    /* 006c078e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0790: jne 0x6c079e */ if (!fZ) goto L_006c079e;
L_006c0792:; BB(0x006c0792);
    /* 006c0792: mov dword ptr [ebx + 0x42c], 1 */ W32((u32)(r_ebx+0x42cu), 0x1u);
    /* 006c079c: jmp 0x6c07ad */ goto L_006c07ad;
L_006c079e:; BB(0x006c079e);
    /* 006c079e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c07a1: jne 0x6c07ad */ if (!fZ) goto L_006c07ad;
L_006c07a3:; BB(0x006c07a3);
    /* 006c07a3: mov dword ptr [ebx + 0x42c], 0xa */ W32((u32)(r_ebx+0x42cu), 0xau);
L_006c07ad:; BB(0x006c07ad);
    /* 006c07ad: mov ecx, dword ptr [ebx + 0x478] */ r_ecx = R32((u32)(r_ebx+0x478u));
    /* 006c07b3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c07b8u); f_007127b0();
    /* 006c07b8: mov dword ptr [ebx + 0x478], 0 */ W32((u32)(r_ebx+0x478u), 0x0u);
    /* 006c07c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c07c3: ret  */ FN_RET(0x006c076c); r_esp += 4; return;
L_006c07c4:; BB(0x006c07c4);
    /* 006c07c4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c07c7: je 0x6c07e4 */ if (fZ) goto L_006c07e4;
L_006c07c9:; BB(0x006c07c9);
    /* 006c07c9: mov dword ptr [ebx + 0x42c], 0xa */ W32((u32)(r_ebx+0x42cu), 0xau);
    /* 006c07d3: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6c07d8u); f_007127b0();
    /* 006c07d8: mov dword ptr [ebx + 0x478], 0 */ W32((u32)(r_ebx+0x478u), 0x0u);
    /* 006c07e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c07e3: ret  */ FN_RET(0x006c076c); r_esp += 4; return;
L_006c07e4:; BB(0x006c07e4);
    /* 006c07e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c07e5: ret  */ FN_RET(0x006c076c); r_esp += 4; return;
L_006c07e6:; BB(0x006c07e6);
    /* 006c07e6: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c07e8: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c07edu); f_0073ec50();
    /* 006c07ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c07ee: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x6c07f3u); f_00735874();
    /* 006c07f3: mov ecx, eax */ r_ecx = r_eax;
    /* 006c07f5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c07f8: mov dword ptr [ebx + 0x478], ecx */ W32((u32)(r_ebx+0x478u), r_ecx);
    /* 006c07fe: jmp 0x6c0779 */ goto L_006c0779;
}

void f_006c0804(void)
{
    FN_ENTER(0x006c0804);
    /* 006c0804: mov dword ptr [0xa95d2c], 0x3f800000 */ W32((u32)(0xa95d2cu), 0x3f800000u);
    /* 006c080e: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006c0813: mov dword ptr [0xa95d30], 0x41000000 */ W32((u32)(0xa95d30u), 0x41000000u);
    /* 006c081d: mov dword ptr [0xa95d34], 0x3fc00000 */ W32((u32)(0xa95d34u), 0x3fc00000u);
    /* 006c0827: call 0x763030 */ r_esp -= 4; W32(r_esp, 0x6c082cu); f_00763030();
    /* 006c082c: ret  */ FN_RET(0x006c0804); r_esp += 4; return;
}

void f_006c0830(void) /* sub_6C0830 */
{
    FN_ENTER(0x006c0830);
    /* 006c0830: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0831: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0832: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0833: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0836: mov esi, ecx */ r_esi = r_ecx;
    /* 006c0838: mov edx, dword ptr [0xa95d24] */ r_edx = R32((u32)(0xa95d24u));
    /* 006c083e: mov eax, dword ptr [0xa95cc4] */ r_eax = R32((u32)(0xa95cc4u));
    /* 006c0843: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c0846: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006c0849: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c084c: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c084f: lea ebp, [eax + edx + 0x18] */ r_ebp = (u32)(r_eax+r_edx+0x18u);
    /* 006c0853: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0854: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6c0859u); f_0082e940();
    /* 006c0859: mov ebx, eax */ r_ebx = r_eax;
    /* 006c085b: push dword ptr [0xa95d24] */ { u32 v = R32((u32)(0xa95d24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0861: push dword ptr [0xa95d28] */ { u32 v = R32((u32)(0xa95d28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0867: mov dword ptr [esi + 0x46c], ebx */ W32((u32)(r_esi+0x46cu), r_ebx);
    /* 006c086d: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 006c0870: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0871: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c0876u); f_0086b6b8();
    /* 006c0876: mov edx, dword ptr [0xa95d24] */ r_edx = R32((u32)(0xa95d24u));
    /* 006c087c: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c087f: and edx, 0xfffffffc */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006c0882: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 006c0885: mov eax, dword ptr [0xa95d24] */ r_eax = R32((u32)(0xa95d24u));
    /* 006c088a: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 006c088d: push dword ptr [0xa95cc4] */ { u32 v = R32((u32)(0xa95cc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0893: lea eax, [edx + ebx + 0x18] */ r_eax = (u32)(r_edx+r_ebx+0x18u);
    /* 006c0897: push dword ptr [0xa95cc8] */ { u32 v = R32((u32)(0xa95cc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c089d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c089e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6c08a3u); f_0086b6b8();
    /* 006c08a3: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c08a6: mov eax, dword ptr [0xa95cc4] */ r_eax = R32((u32)(0xa95cc4u));
    /* 006c08ab: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c08ae: and eax, 0xfffffffc */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c08b1: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 006c08b4: mov eax, dword ptr [0xa95cc4] */ r_eax = R32((u32)(0xa95cc4u));
    /* 006c08b9: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 006c08bc: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c08c1u); f_006dc358();
    /* 006c08c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c08c3: jne 0x6c08ca */ if (!fZ) goto L_006c08ca;
L_006c08c5:; BB(0x006c08c5);
    /* 006c08c5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c08cau); f_006dc358();
L_006c08ca:; BB(0x006c08ca);
    /* 006c08ca: mov dword ptr [0xa95d48], eax */ W32((u32)(0xa95d48u), r_eax);
    /* 006c08cf: mov edx, ebp */ r_edx = r_ebp;
    /* 006c08d1: mov dword ptr [0xa95d44], eax */ W32((u32)(0xa95d44u), r_eax);
    /* 006c08d6: mov eax, dword ptr [esi + 0x46c] */ r_eax = R32((u32)(r_esi+0x46cu));
    /* 006c08dc: call 0x6bde84 */ r_esp -= 4; W32(r_esp, 0x6c08e1u); f_006bde84();
    /* 006c08e1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c08e2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c08e4: mov dword ptr [esi + 0x470], ebp */ W32((u32)(r_esi+0x470u), r_ebp);
    /* 006c08ea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c08ec: call 0x82c378 */ r_esp -= 4; W32(r_esp, 0x6c08f1u); f_0082c378();
    /* 006c08f1: mov dword ptr [esi + 0x460], 1 */ W32((u32)(r_esi+0x460u), 0x1u);
    /* 006c08fb: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 006c08fd: mov dword ptr [esi + 0x458], eax */ W32((u32)(r_esi+0x458u), r_eax);
    /* 006c0903: push 0xa95c90 */ { u32 v = 0xa95c90u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0908: lea eax, [esi + 0x434] */ r_eax = (u32)(r_esi+0x434u);
    /* 006c090e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c090f: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6c0914u); f_00858900();
    /* 006c0914: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0917: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0919: mov byte ptr [esi + 0x453], al */ W8((u32)(r_esi+0x453u), (u8)r_eax);
    /* 006c091f: mov dword ptr [esi + 0x45c], eax */ W32((u32)(r_esi+0x45cu), r_eax);
    /* 006c0925: mov eax, dword ptr [0xa95c64] */ r_eax = R32((u32)(0xa95c64u));
    /* 006c092a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c092c: jle 0x6c0948 */ if ((fZ||fS!=fO)) goto L_006c0948;
L_006c092e:; BB(0x006c092e);
    /* 006c092e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c092f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0931: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0933: call 0x82c378 */ r_esp -= 4; W32(r_esp, 0x6c0938u); f_0082c378();
    /* 006c0938: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c093b: add dword ptr [esi + 0x460], 1 */ { u32 ad = (u32)(r_esi+0x460u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c0942: mov dword ptr [esi + 0x45c], eax */ W32((u32)(r_esi+0x45cu), r_eax);
L_006c0948:; BB(0x006c0948);
    /* 006c0948: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c094a: call 0x7827ec */ r_esp -= 4; W32(r_esp, 0x6c094fu); f_007827ec();
    /* 006c094f: mov ebp, dword ptr [esi + 0x458] */ r_ebp = R32((u32)(r_esi+0x458u));
    /* 006c0955: mov ebx, dword ptr [esi + 0x45c] */ r_ebx = R32((u32)(r_esi+0x45cu));
    /* 006c095b: shl ebp, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 006c095e: shl ebx, 0xe */ { u32 c = (14u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 006c0961: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0962: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0963: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0964: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0965: call 0x82c380 */ r_esp -= 4; W32(r_esp, 0x6c096au); f_0082c380();
    /* 006c096a: mov dword ptr [esi + 0x464], eax */ W32((u32)(r_esi+0x464u), r_eax);
    /* 006c0970: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0973: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0974: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0975: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0976: ret  */ FN_RET(0x006c0830); r_esp += 4; return;
}

void f_006c0978(void) /* sub_6C0978 */
{
    FN_ENTER(0x006c0978);
    /* 006c0978: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0979: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c097a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c097c: lea eax, [ebp + 0x434] */ r_eax = (u32)(r_ebp+0x434u);
    /* 006c0982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0983: call 0x82c15c */ r_esp -= 4; W32(r_esp, 0x6c0988u); f_0082c15c();
    /* 006c0988: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0989: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c098b: jne 0x6c0995 */ if (!fZ) goto L_006c0995;
L_006c098d:; BB(0x006c098d);
    /* 006c098d: mov eax, 3 */ r_eax = 0x3u;
    /* 006c0992: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0994: ret  */ FN_RET(0x006c0978); r_esp += 4; return;
L_006c0995:; BB(0x006c0995);
    /* 006c0995: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0997: push dword ptr [ebp + 0x454] */ { u32 v = R32((u32)(r_ebp+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c099d: call 0x82c22c */ r_esp -= 4; W32(r_esp, 0x6c09a2u); f_0082c22c();
    /* 006c09a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c09a5: mov edx, dword ptr [0xa95d3c] */ r_edx = R32((u32)(0xa95d3cu));
    /* 006c09ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c09ad: je 0x6c09f9 */ if (fZ) goto L_006c09f9;
L_006c09af:; BB(0x006c09af);
    /* 006c09af: mov edx, dword ptr [edx + 0x464] */ r_edx = R32((u32)(r_edx+0x464u));
L_006c09b5:; BB(0x006c09b5);
    /* 006c09b5: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c09b7: jle 0x6c09c1 */ if ((fZ||fS!=fO)) goto L_006c09c1;
L_006c09b9:; BB(0x006c09b9);
    /* 006c09b9: mov eax, 2 */ r_eax = 0x2u;
    /* 006c09be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c09bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c09c0: ret  */ FN_RET(0x006c0978); r_esp += 4; return;
L_006c09c1:; BB(0x006c09c1);
    /* 006c09c1: push dword ptr [ebp + 0x454] */ { u32 v = R32((u32)(r_ebp+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c09c7: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6c09ccu); f_006dc358();
    /* 006c09cc: mov ebx, eax */ r_ebx = r_eax;
    /* 006c09ce: push dword ptr [ebp + 0x454] */ { u32 v = R32((u32)(r_ebp+0x454u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c09d4: call 0x8002f0 */ r_esp -= 4; W32(r_esp, 0x6c09d9u); f_008002f0();
    /* 006c09d9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c09dc: cmp ebx, 0x1000 */ {  u32 a = r_ebx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c09e2: jge 0x6c09f1 */ if ((fS==fO)) goto L_006c09f1;
L_006c09e4:; BB(0x006c09e4);
    /* 006c09e4: cmp eax, dword ptr [ebp + 0x460] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x460u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c09ea: jl 0x6c09f1 */ if ((fS!=fO)) goto L_006c09f1;
L_006c09ec:; BB(0x006c09ec);
    /* 006c09ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c09ee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c09ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c09f0: ret  */ FN_RET(0x006c0978); r_esp += 4; return;
L_006c09f1:; BB(0x006c09f1);
    /* 006c09f1: mov eax, 1 */ r_eax = 0x1u;
    /* 006c09f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c09f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c09f8: ret  */ FN_RET(0x006c0978); r_esp += 4; return;
L_006c09f9:; BB(0x006c09f9);
    /* 006c09f9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c09fb: jmp 0x6c09b5 */ goto L_006c09b5;
}

void f_006c0a00(void) /* sub_6C0A00 */
{
    FN_ENTER(0x006c0a00);
    /* 006c0a00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0a01: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0a02: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0a05: mov esi, ecx */ r_esi = r_ecx;
    /* 006c0a07: mov eax, dword ptr [esi + 0x47c] */ r_eax = R32((u32)(r_esi+0x47cu));
    /* 006c0a0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0a0f: je 0x6c0a2c */ if (fZ) goto L_006c0a2c;
L_006c0a11:; BB(0x006c0a11);
    /* 006c0a11: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
L_006c0a14:; BB(0x006c0a14);
    /* 006c0a14: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0a19: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0a1d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c0a1f: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6c0a24u); f_006db5d4();
    /* 006c0a24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0a27: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0a28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0a29: ret 4 */ FN_RET(0x006c0a00); r_esp += 8; return;
L_006c0a2c:; BB(0x006c0a2c);
    /* 006c0a2c: mov dword ptr [esp], 0x430c0000 */ W32((u32)(r_esp), 0x430c0000u);
    /* 006c0a33: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006c0a36: lea ebx, [esi + 0x1c] */ r_ebx = (u32)(r_esi+0x1cu);
    /* 006c0a39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c0a3b: mov dword ptr [esp + 4], 0x43020000 */ W32((u32)(r_esp+0x4u), 0x43020000u);
    /* 006c0a43: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 006c0a47: mov dword ptr [esp + 8], 0x43c80000 */ W32((u32)(r_esp+0x8u), 0x43c80000u);
    /* 006c0a4f: mov dword ptr [esp + 0xc], 0x435c0000 */ W32((u32)(r_esp+0xcu), 0x435c0000u);
    /* 006c0a57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0a58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0a59: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6c0a5eu); f_006dbcf0();
    /* 006c0a5e: mov dword ptr [esi + 0x47c], eax */ W32((u32)(r_esi+0x47cu), r_eax);
    /* 006c0a64: jmp 0x6c0a14 */ goto L_006c0a14;
}

void f_006c0a68(void) /* sub_6C0A68 */
{
    FN_ENTER(0x006c0a68);
    /* 006c0a68: mov dword ptr [ecx + 0x42c], 0xa */ W32((u32)(r_ecx+0x42cu), 0xau);
    /* 006c0a72: ret  */ FN_RET(0x006c0a68); r_esp += 4; return;
}

void f_006c0a74(void) /* sub_6C0A74 */
{
    FN_ENTER(0x006c0a74);
    /* 006c0a74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0a75: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006c0a77: mov edx, dword ptr [0xaab26c] */ r_edx = R32((u32)(0xaab26cu));
    /* 006c0a7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0a7f: je 0x6c0a8e */ if (fZ) goto L_006c0a8e;
L_006c0a81:; BB(0x006c0a81);
    /* 006c0a81: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006c0a85: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c0a8a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006c0a8e:; BB(0x006c0a8e);
    /* 006c0a8e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0a90: call 0x6c0830 */ r_esp -= 4; W32(r_esp, 0x6c0a95u); f_006c0830();
    /* 006c0a95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0a97: call 0x6c0978 */ r_esp -= 4; W32(r_esp, 0x6c0a9cu); f_006c0978();
    /* 006c0a9c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0a9f: je 0x6c0b05 */ if (fZ) goto L_006c0b05;
L_006c0aa1:; BB(0x006c0aa1);
    /* 006c0aa1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0aa4: je 0x6c0adb */ if (fZ) goto L_006c0adb;
L_006c0aa6:; BB(0x006c0aa6);
    /* 006c0aa6: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0aa9: jne 0x6c0acb */ if (!fZ) goto L_006c0acb;
L_006c0aab:; BB(0x006c0aab);
    /* 006c0aab: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0aad: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0aaf: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0ab4u); f_00792fe8();
    /* 006c0ab4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0ab7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0ab8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0aba: call 0x6c0a00 */ r_esp -= 4; W32(r_esp, 0x6c0abfu); f_006c0a00();
    /* 006c0abf: mov dword ptr [ebp + 0x42c], 0xc */ W32((u32)(r_ebp+0x42cu), 0xcu);
    /* 006c0ac9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0aca: ret  */ FN_RET(0x006c0a74); r_esp += 4; return;
L_006c0acb:; BB(0x006c0acb);
    /* 006c0acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0acd: jne 0x6c0b03 */ if (!fZ) goto L_006c0b03;
L_006c0acf:; BB(0x006c0acf);
    /* 006c0acf: mov dword ptr [ebp + 0x42c], 1 */ W32((u32)(r_ebp+0x42cu), 0x1u);
    /* 006c0ad9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0ada: ret  */ FN_RET(0x006c0a74); r_esp += 4; return;
L_006c0adb:; BB(0x006c0adb);
    /* 006c0adb: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0add: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0adf: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0ae4u); f_00792fe8();
    /* 006c0ae4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0ae7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0ae8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0aea: call 0x6c0a00 */ r_esp -= 4; W32(r_esp, 0x6c0aefu); f_006c0a00();
    /* 006c0aef: mov dword ptr [ebp + 0x42c], 0xb */ W32((u32)(r_ebp+0x42cu), 0xbu);
    /* 006c0af9: mov dword ptr [ebp + 0x430], 0xa */ W32((u32)(r_ebp+0x430u), 0xau);
L_006c0b03:; BB(0x006c0b03);
    /* 006c0b03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0b04: ret  */ FN_RET(0x006c0a74); r_esp += 4; return;
L_006c0b05:; BB(0x006c0b05);
    /* 006c0b05: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0b07: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0b09: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0b0eu); f_00792fe8();
    /* 006c0b0e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0b12: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0b14: call 0x6c0a00 */ r_esp -= 4; W32(r_esp, 0x6c0b19u); f_006c0a00();
    /* 006c0b19: mov dword ptr [ebp + 0x42c], 0xb */ W32((u32)(r_ebp+0x42cu), 0xbu);
    /* 006c0b23: mov dword ptr [ebp + 0x430], 0xa */ W32((u32)(r_ebp+0x430u), 0xau);
    /* 006c0b2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0b2e: ret  */ FN_RET(0x006c0a74); r_esp += 4; return;
}

void f_006c0b30(void) /* sub_6C0B30 */
{
    FN_ENTER(0x006c0b30);
    /* 006c0b30: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0b31: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c0b33: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c0b36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0b38: je 0x6c0b6b */ if (fZ) goto L_006c0b6b;
L_006c0b3a:; BB(0x006c0b3a);
    /* 006c0b3a: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x6c0b3fu); f_0073b170();
    /* 006c0b3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0b41: jne 0x6c0b45 */ if (!fZ) goto L_006c0b45;
L_006c0b43:; BB(0x006c0b43);
    /* 006c0b43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0b44: ret  */ FN_RET(0x006c0b30); r_esp += 4; return;
L_006c0b45:; BB(0x006c0b45);
    /* 006c0b45: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x6c0b4au); f_00694c6c();
    /* 006c0b4a: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0b50: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 006c0b53: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0b55: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0b57: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006c0b59: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 006c0b60: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6c0b65u); f_007c1160();
    /* 006c0b65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0b67: jne 0x6c0b6b */ if (!fZ) goto L_006c0b6b;
L_006c0b69:; BB(0x006c0b69);
    /* 006c0b69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0b6a: ret  */ FN_RET(0x006c0b30); r_esp += 4; return;
L_006c0b6b:; BB(0x006c0b6b);
    /* 006c0b6b: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 006c0b6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0b70: je 0x6c0b83 */ if (fZ) goto L_006c0b83;
L_006c0b72:; BB(0x006c0b72);
    /* 006c0b72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0b73: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6c0b75u); call_ind(t); }
    /* 006c0b75: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0b76: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006c0b7a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0b7f: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
L_006c0b83:; BB(0x006c0b83);
    /* 006c0b83: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0b84: ret  */ FN_RET(0x006c0b30); r_esp += 4; return;
}

void f_006c0b88(void) /* sub_6C0B88 */
{
    FN_ENTER(0x006c0b88);
    /* 006c0b88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0b89: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0b8c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c0b8e: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 006c0b91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0b93: je 0x6c0bbd */ if (fZ) goto L_006c0bbd;
L_006c0b95:; BB(0x006c0b95);
    /* 006c0b95: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 006c0b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0b9a: je 0x6c0ba8 */ if (fZ) goto L_006c0ba8;
L_006c0b9c:; BB(0x006c0b9c);
    /* 006c0b9c: mov dword ptr [ebx + 0x24], 1 */ W32((u32)(r_ebx+0x24u), 0x1u);
    /* 006c0ba3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0ba6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0ba7: ret  */ FN_RET(0x006c0b88); r_esp += 4; return;
L_006c0ba8:; BB(0x006c0ba8);
    /* 006c0ba8: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006c0baa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c0bafu); f_0073ec50();
    /* 006c0baf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bb0: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x6c0bb5u); f_00735874();
    /* 006c0bb5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0bb8: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 006c0bbb: jmp 0x6c0b9c */ goto L_006c0b9c;
L_006c0bbd:; BB(0x006c0bbd);
    /* 006c0bbd: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006c0bc4: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006c0bcc: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bce: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c0bd3u); f_0073ec50();
    /* 006c0bd3: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006c0bd7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bd9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bdb: call 0x73c7e8 */ r_esp -= 4; W32(r_esp, 0x6c0be0u); f_0073c7e8();
    /* 006c0be0: push dword ptr [ebx + 0x30] */ { u32 v = R32((u32)(r_ebx+0x30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0be3: push dword ptr [ebx + 0x2c] */ { u32 v = R32((u32)(r_ebx+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006c0be6: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 006c0be9: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0beeu); f_00792fe8();
    /* 006c0bee: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0bf1: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 006c0bf4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0bf6: je 0x6c0b95 */ if (fZ) goto L_006c0b95;
L_006c0bf8:; BB(0x006c0bf8);
    /* 006c0bf8: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bfd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0bfe: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6c0c03u); f_0073ae38();
    /* 006c0c03: jmp 0x6c0b95 */ goto L_006c0b95;
}

void f_006c0c08(void) /* sub_6C0C08 */
{
    FN_ENTER(0x006c0c08);
    /* 006c0c08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c09: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c0a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c0b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0c0e: mov edi, ecx */ r_edi = r_ecx;
    /* 006c0c10: mov eax, dword ptr [edi + 0x460] */ r_eax = R32((u32)(r_edi+0x460u));
    /* 006c0c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0c18: je 0x6c0c2b */ if (fZ) goto L_006c0c2b;
L_006c0c1a:; BB(0x006c0c1a);
    /* 006c0c1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c1b: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6c0c20u); f_0082e960();
    /* 006c0c20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0c21: mov dword ptr [edi + 0x460], 0 */ W32((u32)(r_edi+0x460u), 0x0u);
L_006c0c2b:; BB(0x006c0c2b);
    /* 006c0c2b: mov edx, dword ptr [edi + 0x48c] */ r_edx = R32((u32)(r_edi+0x48cu));
    /* 006c0c31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0c33: je 0x6c0c56 */ if (fZ) goto L_006c0c56;
L_006c0c35:; BB(0x006c0c35);
    /* 006c0c35: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006c0c3c: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006c0c41: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 006c0c44: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006c0c4b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0c4d: je 0x6c0c56 */ if (fZ) goto L_006c0c56;
L_006c0c4f:; BB(0x006c0c4f);
    /* 006c0c4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c51: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x6c0c56u); f_00760acc();
L_006c0c56:; BB(0x006c0c56);
    /* 006c0c56: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c58: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c5a: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0c5fu); f_00792fe8();
    /* 006c0c5f: mov esi, eax */ r_esi = r_eax;
    /* 006c0c61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0c64: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006c0c6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0c6c: je 0x6c0c99 */ if (fZ) goto L_006c0c99;
L_006c0c6e:; BB(0x006c0c6e);
    /* 006c0c6e: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
L_006c0c71:; BB(0x006c0c71);
    /* 006c0c71: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c76: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0c77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0c79: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6c0c7eu); f_006db5d4();
    /* 006c0c7e: mov dword ptr [edi + 0x49c], 4 */ W32((u32)(r_edi+0x49cu), 0x4u);
    /* 006c0c88: mov dword ptr [0xa95d6c], 0 */ W32((u32)(0xa95d6cu), 0x0u);
    /* 006c0c92: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0c95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0c96: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0c97: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0c98: ret  */ FN_RET(0x006c0c08); r_esp += 4; return;
L_006c0c99:; BB(0x006c0c99);
    /* 006c0c99: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006c0ca0: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006c0ca8: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0caa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c0cafu); f_0073ec50();
    /* 006c0caf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0cb0: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006c0cb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0cb5: lea ebp, [edi + 0x1c] */ r_ebp = (u32)(r_edi+0x1cu);
    /* 006c0cb8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006c0cba: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6c0cbfu); f_006dbcf0();
    /* 006c0cbf: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006c0cc5: jmp 0x6c0c71 */ goto L_006c0c71;
}

void f_006c0cc8(void) /* sub_6C0CC8 */
{
    FN_ENTER(0x006c0cc8);
    /* 006c0cc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0cc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0cca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0ccb: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0cce: mov edi, ecx */ r_edi = r_ecx;
    /* 006c0cd0: mov edx, dword ptr [0xaab26c] */ r_edx = R32((u32)(0xaab26cu));
    /* 006c0cd6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0cd8: mov byte ptr [0xaafc88], 0 */ W8((u32)(0xaafc88u), 0x0u);
    /* 006c0cdf: je 0x6c0cee */ if (fZ) goto L_006c0cee;
L_006c0ce1:; BB(0x006c0ce1);
    /* 006c0ce1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006c0ce5: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006c0cea: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006c0cee:; BB(0x006c0cee);
    /* 006c0cee: mov dword ptr [edi + 0x49c], 4 */ W32((u32)(r_edi+0x49cu), 0x4u);
    /* 006c0cf8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0cfa: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 006c0cfc: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x6c0d01u); f_00792fe8();
    /* 006c0d01: mov ebp, eax */ r_ebp = r_eax;
    /* 006c0d03: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0d06: mov edx, dword ptr [edi + 0x494] */ r_edx = R32((u32)(r_edi+0x494u));
    /* 006c0d0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006c0d0e: je 0x6c0d27 */ if (fZ) goto L_006c0d27;
L_006c0d10:; BB(0x006c0d10);
    /* 006c0d10: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
L_006c0d13:; BB(0x006c0d13);
    /* 006c0d13: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c0d1b: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6c0d20u); f_006db5d4();
    /* 006c0d20: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006c0d23: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0d24: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c0d25: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006c0d26: ret  */ FN_RET(0x006c0cc8); r_esp += 4; return;
L_006c0d27:; BB(0x006c0d27);
    /* 006c0d27: mov dword ptr [esp], 0x43de0000 */ W32((u32)(r_esp), 0x43de0000u);
    /* 006c0d2e: mov dword ptr [esp + 4], 0x42a80000 */ W32((u32)(r_esp+0x4u), 0x42a80000u);
    /* 006c0d36: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d38: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6c0d3du); f_0073ec50();
    /* 006c0d3d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0d3e: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006c0d41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d42: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d43: lea ebx, [edi + 0x1c] */ r_ebx = (u32)(r_edi+0x1cu);
    /* 006c0d46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c0d48: call 0x6dbcf0 */ r_esp -= 4; W32(r_esp, 0x6c0d4du); f_006dbcf0();
    /* 006c0d4d: mov dword ptr [edi + 0x494], eax */ W32((u32)(r_edi+0x494u), r_eax);
    /* 006c0d53: jmp 0x6c0d13 */ goto L_006c0d13;
}

void f_006c0d58(void) /* sub_6C0D58 */
{
    FN_ENTER(0x006c0d58);
    /* 006c0d58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d59: mov esi, ecx */ r_esi = r_ecx;
    /* 006c0d5b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c0d5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0d5f: mov dword ptr [esi + 0x430], eax */ W32((u32)(r_esi+0x430u), r_eax);
    /* 006c0d65: mov dword ptr [esi + 0x464], eax */ W32((u32)(r_esi+0x464u), r_eax);
    /* 006c0d6b: mov dword ptr [esi + 0x468], eax */ W32((u32)(r_esi+0x468u), r_eax);
    /* 006c0d71: mov dword ptr [esi + 0x46c], eax */ W32((u32)(r_esi+0x46cu), r_eax);
    /* 006c0d77: mov dword ptr [esi + 0x498], eax */ W32((u32)(r_esi+0x498u), r_eax);
    /* 006c0d7d: mov eax, dword ptr [0xa95d24] */ r_eax = R32((u32)(0xa95d24u));
    /* 006c0d82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c0d84: jle 0x6c0dc3 */ if ((fZ||fS!=fO)) goto L_006c0dc3;
L_006c0d86:; BB(0x006c0d86);
    /* 006c0d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0d8b: call 0x82c378 */ r_esp -= 4; W32(r_esp, 0x6c0d90u); f_0082c378();
    /* 006c0d90: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0d93: cmp eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c0d98: je 0x6c0db7 */ if (fZ) goto L_006c0db7;
L_006c0d9a:; BB(0x006c0d9a);
    /* 006c0d9a: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 006c0da0: add dword ptr [esi + 0x498], 1 */ { u32 ad = (u32)(r_esi+0x498u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c0da7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c0da9: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 006c0daf: mov dword ptr [esi + 0x468], eax */ W32((u32)(r_esi+0x468u), r_eax);
    /* 006c0db5: jmp 0x6c0dc3 */ goto L_006c0dc3;
L_006c0db7:; BB(0x006c0db7);
    /* 006c0db7: mov dword ptr [esi + 0x49c], 0x15 */ W32((u32)(r_esi+0x49cu), 0x15u);
    /* 006c0dc1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0dc2: ret  */ FN_RET(0x006c0d58); r_esp += 4; return;
L_006c0dc3:; BB(0x006c0dc3);
    /* 006c0dc3: mov eax, dword ptr [0xa95cc4] */ r_eax = R32((u32)(0xa95cc4u));
    /* 006c0dc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c0dca: jle 0x6c0e09 */ if ((fZ||fS!=fO)) goto L_006c0e09;
L_006c0dcc:; BB(0x006c0dcc);
    /* 006c0dcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0dcd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0dcf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0dd1: call 0x82c378 */ r_esp -= 4; W32(r_esp, 0x6c0dd6u); f_0082c378();
    /* 006c0dd6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0dd9: cmp eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c0dde: je 0x6c0dfd */ if (fZ) goto L_006c0dfd;
L_006c0de0:; BB(0x006c0de0);
    /* 006c0de0: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 006c0de6: add dword ptr [esi + 0x498], 1 */ { u32 ad = (u32)(r_esi+0x498u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c0ded: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c0def: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 006c0df5: mov dword ptr [esi + 0x464], eax */ W32((u32)(r_esi+0x464u), r_eax);
    /* 006c0dfb: jmp 0x6c0e09 */ goto L_006c0e09;
L_006c0dfd:; BB(0x006c0dfd);
    /* 006c0dfd: mov dword ptr [esi + 0x49c], 0x15 */ W32((u32)(r_esi+0x49cu), 0x15u);
    /* 006c0e07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0e08: ret  */ FN_RET(0x006c0d58); r_esp += 4; return;
L_006c0e09:; BB(0x006c0e09);
    /* 006c0e09: mov eax, dword ptr [0xa95c64] */ r_eax = R32((u32)(0xa95c64u));
    /* 006c0e0e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006c0e10: jle 0x6c0e4f */ if ((fZ||fS!=fO)) goto L_006c0e4f;
L_006c0e12:; BB(0x006c0e12);
    /* 006c0e12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0e13: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0e15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0e17: call 0x82c378 */ r_esp -= 4; W32(r_esp, 0x6c0e1cu); f_0082c378();
    /* 006c0e1c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006c0e1f: cmp eax, 0xffffff00 */ {  u32 a = r_eax; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006c0e24: je 0x6c0e43 */ if (fZ) goto L_006c0e43;
L_006c0e26:; BB(0x006c0e26);
    /* 006c0e26: mov edx, dword ptr [esi + 0x430] */ r_edx = R32((u32)(r_esi+0x430u));
    /* 006c0e2c: add dword ptr [esi + 0x498], 1 */ { u32 ad = (u32)(r_esi+0x498u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006c0e33: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006c0e35: mov dword ptr [esi + 0x430], edx */ W32((u32)(r_esi+0x430u), r_edx);
    /* 006c0e3b: mov dword ptr [esi + 0x46c], eax */ W32((u32)(r_esi+0x46cu), r_eax);
    /* 006c0e41: jmp 0x6c0e4f */ goto L_006c0e4f;
L_006c0e43:; BB(0x006c0e43);
    /* 006c0e43: mov dword ptr [esi + 0x49c], 0x15 */ W32((u32)(r_esi+0x49cu), 0x15u);
    /* 006c0e4d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0e4e: ret  */ FN_RET(0x006c0d58); r_esp += 4; return;
L_006c0e4f:; BB(0x006c0e4f);
    /* 006c0e4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0e51: jle 0x6c0e5f */ if ((fZ||fS!=fO)) goto L_006c0e5f;
L_006c0e53:; BB(0x006c0e53);
    /* 006c0e53: mov dword ptr [esi + 0x49c], 1 */ W32((u32)(r_esi+0x49cu), 0x1u);
    /* 006c0e5d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0e5e: ret  */ FN_RET(0x006c0d58); r_esp += 4; return;
L_006c0e5f:; BB(0x006c0e5f);
    /* 006c0e5f: mov dword ptr [esi + 0x49c], 0x15 */ W32((u32)(r_esi+0x49cu), 0x15u);
    /* 006c0e69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006c0e6a: ret  */ FN_RET(0x006c0d58); r_esp += 4; return;
}

void f_006c0e6c(void) /* sub_6C0E6C */
{
    FN_ENTER(0x006c0e6c);
    /* 006c0e6c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0e6e: mov dword ptr [0xa95d60], eax */ W32((u32)(0xa95d60u), r_eax);
    /* 006c0e73: mov dword ptr [0xa95d5c], eax */ W32((u32)(0xa95d5cu), r_eax);
    /* 006c0e78: mov ecx, 0xa95ce0 */ r_ecx = 0xa95ce0u;
    /* 006c0e7d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006c0e7f: mov dword ptr [0xa95d58], eax */ W32((u32)(0xa95d58u), r_eax);
    /* 006c0e84: mov dword ptr [0xa95d54], eax */ W32((u32)(0xa95d54u), r_eax);
    /* 006c0e89: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 006c0e8b: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006c0e8e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 006c0e91: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 006c0e94: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 006c0e97: mov dword ptr [ecx + 0x14], edx */ W32((u32)(r_ecx+0x14u), r_edx);
    /* 006c0e9a: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 006c0e9d: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 006c0ea0: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 006c0ea3: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 006c0ea6: mov dword ptr [ecx + 0x28], edx */ W32((u32)(r_ecx+0x28u), r_edx);
    /* 006c0ea9: mov dword ptr [ecx + 0x2c], edx */ W32((u32)(r_ecx+0x2cu), r_edx);
    /* 006c0eac: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 006c0eaf: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006c0eb2: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 006c0eb5: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006c0eb8: mov dword ptr [ecx + 0x40], edx */ W32((u32)(r_ecx+0x40u), r_edx);
    /* 006c0ebb: mov dword ptr [ecx + 0x44], edx */ W32((u32)(r_ecx+0x44u), r_edx);
    /* 006c0ebe: mov dword ptr [ecx + 0x48], edx */ W32((u32)(r_ecx+0x48u), r_edx);
    /* 006c0ec1: mov edx, 0xa95c80 */ r_edx = 0xa95c80u;
    /* 006c0ec6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0ec8: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006c0eca: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006c0ecd: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c0ed0: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006c0ed3: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006c0ed6: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006c0ed9: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006c0edc: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006c0edf: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006c0ee2: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006c0ee5: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006c0ee8: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006c0eeb: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006c0eee: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006c0ef1: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006c0ef4: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006c0ef7: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006c0efa: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006c0efd: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006c0f00: mov edx, 0xa95c20 */ r_edx = 0xa95c20u;
    /* 006c0f05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0f07: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006c0f09: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006c0f0c: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c0f0f: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006c0f12: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006c0f15: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006c0f18: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006c0f1b: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006c0f1e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006c0f21: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006c0f24: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006c0f27: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006c0f2a: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006c0f2d: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006c0f30: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006c0f33: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006c0f36: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006c0f39: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006c0f3c: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006c0f3f: mov edx, 0xa95bc0 */ r_edx = 0xa95bc0u;
    /* 006c0f44: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006c0f46: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006c0f48: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006c0f4b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 006c0f4e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 006c0f51: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 006c0f54: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 006c0f57: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 006c0f5a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 006c0f5d: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006c0f60: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 006c0f63: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 006c0f66: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 006c0f69: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 006c0f6c: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 006c0f6f: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 006c0f72: mov dword ptr [edx + 0x3c], eax */ W32((u32)(r_edx+0x3cu), r_eax);
    /* 006c0f75: mov dword ptr [edx + 0x40], eax */ W32((u32)(r_edx+0x40u), r_eax);
    /* 006c0f78: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 006c0f7b: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 006c0f7e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0f80: mov dword ptr [0xa95d6c], eax */ W32((u32)(0xa95d6cu), r_eax);
    /* 006c0f85: mov dword ptr [0xa95d68], eax */ W32((u32)(0xa95d68u), r_eax);
    /* 006c0f8a: mov dword ptr [0xa95d64], eax */ W32((u32)(0xa95d64u), r_eax);
    /* 006c0f8f: ret  */ FN_RET(0x006c0e6c); r_esp += 4; return;
}

void f_006c0f90(void) /* sub_6C0F90 */
{
    FN_ENTER(0x006c0f90);
    /* 006c0f90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0f91: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006c0f93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006c0f95: call 0x6c0fb4 */ r_esp -= 4; W32(r_esp, 0x6c0f9au); f_006c0fb4();
    /* 006c0f9a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006c0f9e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006c0fa0: jne 0x6c0fa6 */ if (!fZ) goto L_006c0fa6;
L_006c0fa2:; BB(0x006c0fa2);
    /* 006c0fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0fa3: ret 4 */ FN_RET(0x006c0f90); r_esp += 8; return;
L_006c0fa6:; BB(0x006c0fa6);
    /* 006c0fa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006c0fa7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6c0facu); f_005c2f74();
    /* 006c0fac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006c0fad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006c0fae: ret 4 */ FN_RET(0x006c0f90); r_esp += 8; return;
}

void f_006c0fb4(void) /* sub_6C0FB4 */
{
    FN_ENTER(0x006c0fb4);
    /* 006c0fb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006c0fb5: mov ebp, esp */ r_ebp = r_esp;
    /* 006c0fb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006c0fb9: push 0x8ec4c0 */ { u32 v = 0x8ec4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 006c0fbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006c0fc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006c0fc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006c0fcc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006c0fcf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006c0fd2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006c0fd5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006c0fd8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006c0fdb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006c0fde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006c0fe1: mov dword ptr [ecx], 0xb3b068 */ W32((u32)(r_ecx), 0xb3b068u);
    /* 006c0fe7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006c0fee: call 0x4f7078 */ r_esp -= 4; W32(r_esp, 0x6c0ff3u); f_004f7078();
    /* 006c0ff3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006c0ff6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006c0ffd: mov esp, ebp */ r_esp = r_ebp;
    /* 006c0fff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006c1000: ret  */ FN_RET(0x006c0fb4); r_esp += 4; return;
}

